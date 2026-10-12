/*
 * Klondike 2002 — native port of Don Turner's Pocket PC Klondike (FixedIt.com, 2002).
 * Rules, layout and art reproduced from the original binary; see ../FINDINGS.md.
 *
 * Controls: drag cards, double-click to send to foundation, click stock to draw.
 *   N new game   U / Ctrl+Z undo   D draw 1/3   B card back   I inverted drag style
 *   F11 fullscreen   Esc quit
 */
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SCREEN_W 240
#define SCREEN_H 320
#define CARD_W 30
#define CARD_H 42
#define COL_STEP 34
#define TAB_Y 65
#define DOWN_STEP 4
#define UP_STEP 12
#define FAN_STEP 10
#define STOCK_X 3
#define TOP_Y 8
#define WASTE_X 37
#define FOUND_X 105
#define MAX_TAB 19
#define ACE 14
#define KING 13

typedef struct { signed char suit, rank; bool down, fan; } Card;
typedef struct { Card c[52]; int n; } Pile;

enum { BUILD_ANY, BUILD_SUIT, BUILD_ALT };

typedef struct {
    Pile stock, waste, tab[7], found[4];
    int build_mode;
    int back;
} Game;

/* ---------- original RNG and shuffle ---------- */

static unsigned rng_state;
static void ms_srand(unsigned s) { rng_state = s; }
static int ms_rand(void) {   /* Microsoft C runtime LCG */
    rng_state = rng_state * 214013u + 2531011u;
    return (rng_state >> 16) & 0x7fff;
}

static bool is_red(int suit) { return suit == 1 || suit == 2; }

static void new_game(Game *g, unsigned seed, int back_option) {
    memset(g, 0, sizeof *g);
    Card deck[52], tmp[52];
    bool used[52] = {0};
    for (int s = 0; s < 4; s++)
        for (int r = 2; r <= ACE; r++)
            deck[s * 13 + r - 2] = (Card){s, r, true, false};
    ms_srand(seed);
    for (int i = 0; i < 52; i++) {
        int r;
        do r = ms_rand() % 52; while (used[r]);
        used[r] = true;
        tmp[r] = deck[i];
    }
    memcpy(g->stock.c, tmp, sizeof tmp);
    g->stock.n = 52;
    for (int col = 0; col < 7; col++)
        for (int i = 0; i <= col; i++) {
            Card c = g->stock.c[0];
            memmove(g->stock.c, g->stock.c + 1, --g->stock.n * sizeof(Card));
            c.down = i != col;
            g->tab[col].c[g->tab[col].n++] = c;
        }
    int r = ms_rand() % 5;
    g->back = back_option < 0 ? r : back_option;
}

/* ---------- rules ---------- */

static Card *top(Pile *p) { return p->n ? &p->c[p->n - 1] : NULL; }

static bool found_accepts(Pile *f, Card c) {
    Card *t = top(f);
    if (!t) return c.rank == ACE;
    if (t->suit != c.suit) return false;
    return t->rank == ACE ? c.rank == 2 : c.rank == t->rank + 1;
}

/* Mirrors FUN_000141dc, including the King-on-Ace quirk (Ace is rank 14). */
static bool tab_accepts(Game *g, Card t, Card c) {
    if (c.rank != t.rank - 1) return false;
    bool same = c.suit == t.suit, alt = is_red(c.suit) != is_red(t.suit);
    switch (g->build_mode) {
    case BUILD_ANY:
        if (same) g->build_mode = BUILD_SUIT;
        else if (alt) g->build_mode = BUILD_ALT;
        else return false;
        return true;
    case BUILD_SUIT: return same;
    default: return alt;
    }
}

static void flip_top(Pile *p) {
    Card *t = top(p);
    if (t) t->down = false;
}

static void reveal_waste(Game *g) {
    Card *t = top(&g->waste);
    if (t) t->fan = true;
}

static void draw_stock(Game *g, int draw_count) {
    if (!g->stock.n) {
        for (int i = 0; i < g->waste.n; i++) {
            Card c = g->waste.c[i];
            c.down = true;
            c.fan = false;
            g->stock.c[g->stock.n++] = c;
        }
        g->waste.n = 0;
        return;
    }
    for (int i = 0; i < g->waste.n; i++) g->waste.c[i].fan = false;
    int k = draw_count < g->stock.n ? draw_count : g->stock.n;
    for (int i = 0; i < k; i++) {
        Card c = g->stock.c[0];
        memmove(g->stock.c, g->stock.c + 1, --g->stock.n * sizeof(Card));
        c.down = false;
        c.fan = true;
        g->waste.c[g->waste.n++] = c;
    }
}

static bool won(Game *g) {
    for (int i = 0; i < 4; i++)
        if (g->found[i].n != 13) return false;
    return true;
}

/* ---------- piles as places on screen ---------- */

typedef enum { P_NONE, P_STOCK, P_WASTE, P_FOUND, P_TAB } PileKind;
typedef struct { PileKind kind; int idx; } Where;

static Pile *pile_of(Game *g, Where w) {
    switch (w.kind) {
    case P_STOCK: return &g->stock;
    case P_WASTE: return &g->waste;
    case P_FOUND: return &g->found[w.idx];
    case P_TAB: return &g->tab[w.idx];
    default: return NULL;
    }
}

static int tab_card_y(Pile *p, int i) {
    int y = TAB_Y;
    for (int k = 0; k < i; k++) y += p->c[k].down ? DOWN_STEP : UP_STEP;
    return y;
}

static int waste_fan_count(Game *g) {
    int n = 0;
    for (int i = 0; i < g->waste.n; i++) n += g->waste.c[i].fan;
    return n;
}

static int waste_top_x(Game *g) {
    int n = waste_fan_count(g);
    return WASTE_X + FAN_STEP * (n > 0 ? n - 1 : 0);
}

static bool in_rect(int px, int py, int x, int y, int w, int h) {
    return px >= x && px < x + w && py >= y && py < y + h;
}

/* Which pile is at (x,y), and which card index within it (-1 if empty slot). */
static Where hit(Game *g, int x, int y, int *index) {
    *index = -1;
    if (in_rect(x, y, STOCK_X, TOP_Y, CARD_W + 6, CARD_H)) return (Where){P_STOCK, 0};
    if (g->waste.n && in_rect(x, y, waste_top_x(g), TOP_Y, CARD_W, CARD_H)) {
        *index = g->waste.n - 1;
        return (Where){P_WASTE, 0};
    }
    for (int i = 0; i < 4; i++)
        if (in_rect(x, y, FOUND_X + COL_STEP * i, TOP_Y, CARD_W, CARD_H)) {
            *index = g->found[i].n - 1;
            return (Where){P_FOUND, i};
        }
    for (int c = 0; c < 7; c++) {
        int cx = STOCK_X + COL_STEP * c;
        if (x < cx || x >= cx + CARD_W) continue;
        Pile *p = &g->tab[c];
        for (int i = p->n - 1; i >= 0; i--)
            if (in_rect(x, y, cx, tab_card_y(p, i), CARD_W, CARD_H)) {
                *index = i;
                return (Where){P_TAB, c};
            }
        if (y >= TAB_Y) return (Where){P_TAB, c};
    }
    return (Where){P_NONE, 0};
}

/* Drop target: generous — anywhere over a column's x span, or a top-row slot. */
static Where drop_target(int x, int y) {
    for (int i = 0; i < 4; i++)
        if (in_rect(x, y, FOUND_X + COL_STEP * i - 2, 0, COL_STEP, TAB_Y - 4)) return (Where){P_FOUND, i};
    if (y >= TAB_Y - 8)
        for (int c = 0; c < 7; c++)
            if (x >= STOCK_X + COL_STEP * c - 2 && x < STOCK_X + COL_STEP * (c + 1) - 2)
                return (Where){P_TAB, c};
    return (Where){P_NONE, 0};
}

/* Move cards [from_idx..end] of src onto dst if the rules allow. */
static bool try_move(Game *g, Where src, int from_idx, Where dst) {
    Pile *s = pile_of(g, src), *d = pile_of(g, dst);
    if (!s || !d || s == d || from_idx < 0) return false;
    int count = s->n - from_idx;
    Card base = s->c[from_idx];
    if (dst.kind == P_FOUND) {
        if (count != 1 || !found_accepts(d, base)) return false;
    } else if (dst.kind == P_TAB) {
        if (d->n + count > MAX_TAB) return false;
        Card *t = top(d);
        if (!t) { if (base.rank != KING) return false; }
        else if (t->down || !tab_accepts(g, *t, base)) return false;
    } else return false;
    for (int i = 0; i < count; i++) {
        Card c = s->c[from_idx + i];
        c.fan = false;
        d->c[d->n++] = c;
    }
    s->n = from_idx;
    if (src.kind == P_TAB) flip_top(s);
    if (src.kind == P_WASTE) reveal_waste(g);
    return true;
}

static bool auto_to_foundation(Game *g, Where src, int idx) {
    Pile *s = pile_of(g, src);
    if (!s || idx != s->n - 1 || src.kind == P_FOUND) return false;
    for (int f = 0; f < 4; f++)
        if (try_move(g, src, idx, (Where){P_FOUND, f})) return true;
    return false;
}

/* ---------- assets ---------- */

typedef struct { SDL_Texture *tex, *inv; int w, h; } Sprite;
static Sprite spr[256];

static SDL_Texture *texture_from(SDL_Renderer *r, SDL_Surface *s, Uint32 key, bool invert) {
    SDL_Surface *c = SDL_ConvertSurfaceFormat(s, SDL_PIXELFORMAT_ARGB8888, 0);
    Uint32 *px = c->pixels;
    for (int i = 0; i < c->w * c->h; i++) {
        Uint32 rgb = px[i] & 0xFFFFFF;
        if (rgb == key) px[i] = 0;
        else px[i] = 0xFF000000 | (invert ? ~rgb & 0xFFFFFF : rgb);
    }
    SDL_Texture *t = SDL_CreateTextureFromSurface(r, c);
    SDL_SetTextureBlendMode(t, SDL_BLENDMODE_BLEND);
    SDL_FreeSurface(c);
    return t;
}

static bool load_sprite(SDL_Renderer *r, const char *dir, int id, Uint32 key) {
    char path[1024];
    snprintf(path, sizeof path, "%s/%d.bmp", dir, id);
    SDL_Surface *s = SDL_LoadBMP(path);
    if (!s) { fprintf(stderr, "cannot load %s: %s\n", path, SDL_GetError()); return false; }
    spr[id] = (Sprite){texture_from(r, s, key, false), texture_from(r, s, key, true), s->w, s->h};
    SDL_FreeSurface(s);
    return true;
}

static bool load_assets(SDL_Renderer *r, const char *dir) {
    const Uint32 GREEN = 0x00FF00, WHITE = 0xFFFFFF, NONE = 0x1000000;
    bool ok = load_sprite(r, dir, 130, GREEN) && load_sprite(r, dir, 200, NONE) &&
              load_sprite(r, dir, 204, NONE);
    for (int id = 136; id <= 195 && ok; id++)
        if (id != 193) ok = load_sprite(r, dir, id, WHITE);
    for (int id = 250; id <= 254 && ok; id++) ok = load_sprite(r, dir, id, GREEN);
    return ok;
}

static SDL_Renderer *ren;

static void blit(int id, int x, int y, bool inv) {
    Sprite *s = &spr[id];
    SDL_Rect d = {x, y, s->w, s->h};
    SDL_RenderCopy(ren, inv ? s->inv : s->tex, NULL, &d);
}

/* FUN_0001753c */
static void draw_card(Game *g, Card c, int x, int y, bool inv) {
    if (c.down) { blit(250 + g->back, x, y, inv); return; }
    bool red = is_red(c.suit);
    blit(130, x, y, inv);
    blit((red ? 153 : 140) + c.rank - 2, x + 2, y + 2, inv);
    blit(136 + c.suit, x + 17, y + 2, inv);
    blit((red ? 179 : 166) + c.rank - 2, x + 19, y + 31, inv);
    blit(c.suit == 1 ? 137 : 192 + c.suit, x + 4, y + 31, inv);
}

#ifndef KLONDIKE_NO_MAIN
/* ---------- main ---------- */

typedef struct {
    bool active;
    Where src;
    int idx, grab_dx, grab_dy, x, y;
} Drag;

static void render(Game *g, Drag *drag, bool inverted_drag, int win_y) {
    blit(200, 0, 0, false);
    if (g->stock.n) {
        blit(250 + g->back, STOCK_X, TOP_Y, false);
        if (g->stock.n > 5) blit(250 + g->back, STOCK_X + 3, TOP_Y, false);
        if (g->stock.n > 11) blit(250 + g->back, STOCK_X + 6, TOP_Y, false);
    }
    int dragging_waste = drag->active && drag->src.kind == P_WASTE;
    for (int i = 0, k = 0; i < g->waste.n; i++)
        if (g->waste.c[i].fan) {
            if (!(dragging_waste && i == g->waste.n - 1))
                draw_card(g, g->waste.c[i], WASTE_X + FAN_STEP * k, TOP_Y, false);
            k++;
        }
    for (int f = 0; f < 4; f++) {
        Pile *p = &g->found[f];
        int n = p->n - (drag->active && drag->src.kind == P_FOUND && drag->src.idx == f);
        if (n > 0) draw_card(g, p->c[n - 1], FOUND_X + COL_STEP * f, TOP_Y, false);
    }
    for (int c = 0; c < 7; c++) {
        Pile *p = &g->tab[c];
        int n = drag->active && drag->src.kind == P_TAB && drag->src.idx == c ? drag->idx : p->n;
        for (int i = 0; i < n; i++)
            draw_card(g, p->c[i], STOCK_X + COL_STEP * c, tab_card_y(p, i), false);
    }
    if (drag->active) {
        Pile *p = pile_of(g, drag->src);
        for (int i = drag->idx; i < p->n; i++)
            draw_card(g, p->c[i], drag->x - drag->grab_dx, drag->y - drag->grab_dy + UP_STEP * (i - drag->idx),
                      inverted_drag);
    }
    if (win_y > -100) blit(204, (SCREEN_W - spr[204].w) / 2, win_y, false);
}

static void usage(const char *argv0) {
    fprintf(stderr, "usage: %s [--assets DIR] [--seed N] [--draw 1|3] [--back 0-4|random] [--scale N]\n", argv0);
}

int main(int argc, char **argv) {
    const char *assets = "assets";
    unsigned seed = 0;
    bool fixed_seed = false;
    int draw_count = 3, back_option = -1, scale = 3;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--assets") && i + 1 < argc) assets = argv[++i];
        else if (!strcmp(argv[i], "--seed") && i + 1 < argc) seed = strtoul(argv[++i], NULL, 0), fixed_seed = true;
        else if (!strcmp(argv[i], "--draw") && i + 1 < argc) draw_count = atoi(argv[++i]) == 1 ? 1 : 3;
        else if (!strcmp(argv[i], "--back") && i + 1 < argc) {
            i++;
            back_option = !strcmp(argv[i], "random") ? -1 : atoi(argv[i]) % 5;
        } else if (!strcmp(argv[i], "--scale") && i + 1 < argc) scale = atoi(argv[++i]);
        else { usage(argv[0]); return 2; }
    }
    if (scale < 1) scale = 1;

    if (SDL_Init(SDL_INIT_VIDEO) != 0) { fprintf(stderr, "SDL_Init: %s\n", SDL_GetError()); return 1; }
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "0");
    SDL_Window *win = SDL_CreateWindow("Klondike 2002", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                       SCREEN_W * scale, SCREEN_H * scale, SDL_WINDOW_RESIZABLE);
    ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!win || !ren) { fprintf(stderr, "SDL: %s\n", SDL_GetError()); return 1; }
    SDL_RenderSetLogicalSize(ren, SCREEN_W, SCREEN_H);
    SDL_RenderSetIntegerScale(ren, SDL_TRUE);
    if (!load_assets(ren, assets)) return 1;

    Game g, undo;
    bool have_undo = false, inverted_drag = false;
    if (!fixed_seed) seed = SDL_GetTicks() ^ (unsigned)time(NULL);
    new_game(&g, seed, back_option);
    printf("Klondike 2002 — seed %u\n", seed);

    Drag drag = {0};
    int win_y = -200, win_vy = 0;
    Uint32 last_click = 0;
    int last_click_x = 0, last_click_y = 0;

    for (bool running = true; running;) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) running = false;
            else if (e.type == SDL_KEYDOWN) {
                SDL_Keycode k = e.key.keysym.sym;
                bool ctrl = e.key.keysym.mod & KMOD_CTRL;
                if (k == SDLK_ESCAPE) running = false;
                else if (k == SDLK_n) {
                    seed = SDL_GetTicks() ^ (unsigned)time(NULL);
                    new_game(&g, seed, back_option);
                    printf("new game — seed %u\n", seed);
                    have_undo = false, win_y = -200;
                } else if ((k == SDLK_u || (ctrl && k == SDLK_z)) && have_undo) {
                    g = undo, have_undo = false, win_y = -200;
                } else if (k == SDLK_d) {
                    draw_count = draw_count == 3 ? 1 : 3;
                    printf("draw %d\n", draw_count);
                } else if (k == SDLK_b) {
                    back_option = back_option == 4 ? -1 : back_option + 1;
                    if (back_option >= 0) g.back = back_option;
                    printf("card back: %s\n", back_option < 0 ? "random each game" : (char[]){'0' + back_option, 0});
                } else if (k == SDLK_i) inverted_drag = !inverted_drag;
                else if (k == SDLK_F11) {
                    bool fs = SDL_GetWindowFlags(win) & SDL_WINDOW_FULLSCREEN_DESKTOP;
                    SDL_SetWindowFullscreen(win, fs ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP);
                }
            } else if (e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT) {
                int x = e.button.x, y = e.button.y;
                if (won(&g)) {
                    new_game(&g, seed = SDL_GetTicks() ^ (unsigned)time(NULL), back_option);
                    have_undo = false, win_y = -200;
                    continue;
                }
                bool dbl = e.button.timestamp - last_click < 400 && abs(x - last_click_x) < 4 &&
                           abs(y - last_click_y) < 4;
                last_click = e.button.timestamp, last_click_x = x, last_click_y = y;
                int idx;
                Where w = hit(&g, x, y, &idx);
                if (w.kind == P_STOCK) {
                    undo = g, have_undo = true;
                    draw_stock(&g, draw_count);
                } else if (w.kind != P_NONE && idx >= 0) {
                    Pile *p = pile_of(&g, w);
                    if (dbl) {
                        Game before = g;
                        if (auto_to_foundation(&g, w, idx)) undo = before, have_undo = true;
                    } else if (p->c[idx].down) {
                        if (w.kind == P_TAB && idx == p->n - 1) {
                            undo = g, have_undo = true;
                            p->c[idx].down = false;
                        }
                    } else {
                        int cx = w.kind == P_TAB    ? STOCK_X + COL_STEP * w.idx
                                 : w.kind == P_WASTE ? waste_top_x(&g)
                                                     : FOUND_X + COL_STEP * w.idx;
                        int cy = w.kind == P_TAB ? tab_card_y(p, idx) : TOP_Y;
                        drag = (Drag){true, w, idx, x - cx, y - cy, x, y};
                    }
                }
            } else if (e.type == SDL_MOUSEMOTION && drag.active) {
                drag.x = e.motion.x, drag.y = e.motion.y;
            } else if (e.type == SDL_MOUSEBUTTONUP && e.button.button == SDL_BUTTON_LEFT && drag.active) {
                drag.active = false;
                int cx = drag.x - drag.grab_dx + CARD_W / 2, cy = drag.y - drag.grab_dy + CARD_H / 2;
                Game before = g;
                if (try_move(&g, drag.src, drag.idx, drop_target(cx, cy))) undo = before, have_undo = true;
            }
        }
        if (won(&g)) {   /* banner drops in and bounces */
            if (win_y < -100) win_y = -spr[204].h, win_vy = 0;
            win_vy += 1;
            win_y += win_vy;
            if (win_y > 140) win_y = 140, win_vy = -win_vy * 6 / 10;
        }
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        render(&g, &drag, inverted_drag, win_y);
        const char *shot = getenv("KLONDIKE_SCREENSHOT");   /* render one frame to a BMP and exit */
        if (shot) {
            int w, h;
            SDL_GetRendererOutputSize(ren, &w, &h);
            SDL_Surface *s = SDL_CreateRGBSurfaceWithFormat(0, w, h, 32, SDL_PIXELFORMAT_ARGB8888);
            SDL_RenderReadPixels(ren, NULL, SDL_PIXELFORMAT_ARGB8888, s->pixels, s->pitch);
            SDL_SaveBMP(s, shot);
            SDL_FreeSurface(s);
            running = false;
        }
        SDL_RenderPresent(ren);
    }
    SDL_Quit();
    return 0;
}
#endif
