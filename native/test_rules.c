/* Rules checks for the port; build with `make test`. */
#define KLONDIKE_NO_MAIN
#include "klondike.c"
#include <assert.h>

static Card C(int suit, int rank) { return (Card){suit, rank, false, false}; }

int main(void) {
    Game g;
    new_game(&g, 2002, -1);
    int seen[52] = {0}, total = g.stock.n;
    for (int i = 0; i < g.stock.n; i++) seen[g.stock.c[i].suit * 13 + g.stock.c[i].rank - 2]++;
    for (int c = 0; c < 7; c++) {
        assert(g.tab[c].n == c + 1);
        for (int i = 0; i <= c; i++) {
            assert(g.tab[c].c[i].down == (i != c));
            seen[g.tab[c].c[i].suit * 13 + g.tab[c].c[i].rank - 2]++;
        }
        total += g.tab[c].n;
    }
    assert(g.stock.n == 24 && total == 52);
    for (int i = 0; i < 52; i++) assert(seen[i] == 1);

    Game h;   /* same seed, same deal */
    new_game(&h, 2002, -1);
    assert(!memcmp(&g, &h, sizeof g));

    Pile f = {0};   /* foundation: Ace, then 2 on Ace, same suit only */
    assert(found_accepts(&f, C(2, ACE)) && !found_accepts(&f, C(2, 2)));
    f.c[f.n++] = C(2, ACE);
    assert(found_accepts(&f, C(2, 2)) && !found_accepts(&f, C(1, 2)) && !found_accepts(&f, C(2, 3)));

    memset(&g, 0, sizeof g);   /* first build locks the mode */
    assert(!tab_accepts(&g, C(0, 9), C(3, 8)) && g.build_mode == BUILD_ANY);   /* same colour */
    assert(tab_accepts(&g, C(0, 9), C(2, 8)) && g.build_mode == BUILD_ALT);
    assert(!tab_accepts(&g, C(0, 9), C(0, 8)));
    g.build_mode = BUILD_ANY;
    assert(tab_accepts(&g, C(0, 9), C(0, 8)) && g.build_mode == BUILD_SUIT);
    assert(!tab_accepts(&g, C(0, 9), C(1, 8)));
    assert(tab_accepts(&g, C(0, ACE), C(0, KING)));   /* original's King-on-Ace quirk */

    memset(&g, 0, sizeof g);   /* stock cycles back in order */
    for (int i = 0; i < 5; i++) g.stock.c[g.stock.n++] = (Card){0, 2 + i, true, false};
    draw_stock(&g, 3);
    assert(g.waste.n == 3 && g.stock.n == 2 && waste_fan_count(&g) == 3);
    draw_stock(&g, 3);
    assert(g.waste.n == 5 && waste_fan_count(&g) == 2);
    draw_stock(&g, 3);
    assert(g.stock.n == 5 && g.waste.n == 0);
    for (int i = 0; i < 5; i++) assert(g.stock.c[i].rank == 2 + i && g.stock.c[i].down);

    memset(&g, 0, sizeof g);   /* moving a run flips the newly exposed card; empty column needs a King */
    g.tab[0].c[g.tab[0].n++] = (Card){1, 5, true, false};
    g.tab[0].c[g.tab[0].n++] = C(0, KING);
    g.tab[0].c[g.tab[0].n++] = C(1, 12);
    assert(try_move(&g, (Where){P_TAB, 0}, 1, (Where){P_TAB, 1}));
    assert(g.tab[1].n == 2 && g.tab[0].n == 1 && !g.tab[0].c[0].down);
    assert(!try_move(&g, (Where){P_TAB, 1}, 1, (Where){P_TAB, 2}));

    puts("all rules tests passed");
    return 0;
}
