// Klondike — rules and layout from Klondike.009 (see FINDINGS.md).
import {
  GREEN, MsRand, NONE, STD_CARD_IDS, clone, drawStdCard, freshDeck, inRect, isRed, loadSprites,
  newSeed, shuffle,
} from './engine.js';

const CARD_W = 30, CARD_H = 42, COL = 34, TAB_Y = 65, DOWN = 4, UP = 12, FAN = 10;
const STOCK_X = 3, TOP_Y = 8, WASTE_X = 37, FOUND_X = 105, ACE = 14, KING = 13, MAX_TAB = 19;
const BUILD_ANY = 0, BUILD_SUIT = 1, BUILD_ALT = 2;

export const BACK_CHOICES = [[-1, '? (random)'], [0, 'Boat'], [1, 'Beach'], [2, 'Mountain'], [3, 'Red'], [4, 'Blue']];

// The "You Won" banner drops in and bounces until tapped.
export class Banner {
  constructor(id, y = 140) { this.id = id; this.rest = y; this.y = null; }
  reset() { this.y = null; }
  tick(dt, h) {
    if (this.y === null) { this.y = -h; this.v = 0; }
    this.v += dt / 16;
    this.y += (this.v * dt) / 16;
    if (this.y > this.rest) { this.y = this.rest; this.v = -this.v * 0.6; }
  }
  draw(spr, ctx) {
    if (this.y === null) return;
    const [w, h] = spr.size(this.id);
    spr.draw(ctx, this.id, (240 - w) >> 1, Math.round(this.y), NONE);
    return h;
  }
}

export default class Klondike {
  static id = 'klondike';
  static title = 'Klondike';
  static height = 320;
  static options = [
    { key: 'draw', label: 'Cards drawn from stock', choices: [[1, '1'], [3, '3']], default: 3 },
    { key: 'back', label: 'Card style', choices: BACK_CHOICES, default: -1 },
    { key: 'inverted', label: 'Move selected cards: inverted colours', default: false },
  ];

  constructor(env) {
    Object.assign(this, env);
    this.banner = new Banner(204);
  }

  async load() {
    await loadSprites('klondike', [...STD_CARD_IDS, 200, 204]);
    this.ready = true;
  }

  newGame() {
    const rng = new MsRand(newSeed());
    const stock = shuffle(freshDeck(), rng);
    const g = { stock, waste: [], tab: [[], [], [], [], [], [], []], found: [[], [], [], []], mode: BUILD_ANY };
    for (let col = 0; col < 7; col++)   // column by column, as FUN_00014e88 deals
      for (let i = 0; i <= col; i++) {
        const c = g.stock.shift();
        c.down = i !== col;
        g.tab[col].push(c);
      }
    const r = rng.mod(5);
    g.back = this.opts.back < 0 ? r : this.opts.back;
    this.g = g;
    this.prev = null;
    this.drag = null;
    this.banner.reset();
  }

  optionsChanged() {
    if (this.opts.back >= 0) this.g.back = this.opts.back;
  }

  save() { this.prev = clone(this.g); }
  undo() { if (this.prev) { this.g = this.prev; this.prev = null; this.banner.reset(); } }

  won() { return this.g.found.every((f) => f.length === 13); }

  // ---------- rules ----------

  foundAccepts(f, c) {
    const t = f[f.length - 1];
    if (!t) return c.rank === ACE;
    if (t.suit !== c.suit) return false;
    return t.rank === ACE ? c.rank === 2 : c.rank === t.rank + 1;
  }

  // FUN_000141dc: the first build fixes same-suit or alternating colours for the game.
  // Ace is 14, so a King is accepted on an Ace — the original does the same.
  tabAccepts(t, c) {
    const g = this.g;
    if (c.rank !== t.rank - 1) return false;
    const same = c.suit === t.suit, alt = isRed(c.suit) !== isRed(t.suit);
    if (g.mode === BUILD_ANY) {
      if (same) g.mode = BUILD_SUIT;
      else if (alt) g.mode = BUILD_ALT;
      else return false;
      return true;
    }
    return g.mode === BUILD_SUIT ? same : alt;
  }

  pile(w) {
    const g = this.g;
    return w.kind === 'waste' ? g.waste : w.kind === 'found' ? g.found[w.i] : w.kind === 'tab' ? g.tab[w.i] : null;
  }

  tryMove(src, idx, dst) {
    const s = this.pile(src), d = this.pile(dst);
    if (!s || !d || s === d || idx < 0) return false;
    const count = s.length - idx, base = s[idx];
    if (dst.kind === 'found') {
      if (count !== 1 || !this.foundAccepts(d, base)) return false;
    } else if (dst.kind === 'tab') {
      if (d.length + count > MAX_TAB) return false;
      const t = d[d.length - 1];
      if (!t) { if (base.rank !== KING) return false; }
      else if (t.down || !this.tabAccepts(t, base)) return false;
    } else return false;
    const moving = s.splice(idx);
    for (const c of moving) delete c.fan;
    d.push(...moving);
    if (src.kind === 'tab' && s.length) s[s.length - 1].down = false;
    if (src.kind === 'waste' && s.length) s[s.length - 1].fan = true;
    return true;
  }

  drawStock() {
    const g = this.g;
    if (!g.stock.length) {
      g.stock = g.waste.map((c) => ({ suit: c.suit, rank: c.rank, down: true }));
      g.waste = [];
      return;
    }
    for (const c of g.waste) delete c.fan;
    const k = Math.min(this.opts.draw, g.stock.length);
    for (let i = 0; i < k; i++) {
      const c = g.stock.shift();
      c.down = false;
      c.fan = true;
      g.waste.push(c);
    }
  }

  // ---------- geometry ----------

  tabY(p, i) {
    let y = TAB_Y;
    for (let k = 0; k < i; k++) y += p[k].down ? DOWN : UP;
    return y;
  }

  fanCount() { return this.g.waste.filter((c) => c.fan).length; }
  wasteTopX() { return WASTE_X + FAN * Math.max(0, this.fanCount() - 1); }

  hit(x, y) {
    const g = this.g;
    if (inRect(x, y, STOCK_X, TOP_Y, CARD_W + 6, CARD_H)) return { kind: 'stock' };
    if (g.waste.length && inRect(x, y, this.wasteTopX(), TOP_Y, CARD_W, CARD_H))
      return { kind: 'waste', idx: g.waste.length - 1 };
    for (let i = 0; i < 4; i++)
      if (inRect(x, y, FOUND_X + COL * i, TOP_Y, CARD_W, CARD_H))
        return { kind: 'found', i, idx: g.found[i].length - 1 };
    for (let c = 0; c < 7; c++) {
      const cx = STOCK_X + COL * c;
      if (x < cx || x >= cx + CARD_W) continue;
      const p = g.tab[c];
      for (let i = p.length - 1; i >= 0; i--)
        if (inRect(x, y, cx, this.tabY(p, i), CARD_W, CARD_H)) return { kind: 'tab', i: c, idx: i };
      if (y >= TAB_Y) return { kind: 'tab', i: c, idx: -1 };
    }
    return null;
  }

  dropTarget(x, y) {
    for (let i = 0; i < 4; i++)
      if (inRect(x, y, FOUND_X + COL * i - 2, 0, COL, TAB_Y - 4)) return { kind: 'found', i };
    if (y >= TAB_Y - 8)
      for (let c = 0; c < 7; c++)
        if (x >= STOCK_X + COL * c - 2 && x < STOCK_X + COL * (c + 1) - 2) return { kind: 'tab', i: c };
    return null;
  }

  // ---------- input ----------

  down(x, y, dbl) {
    if (this.won()) { this.newGame(); return; }
    const w = this.hit(x, y);
    if (!w) return;
    if (w.kind === 'stock') { this.save(); this.drawStock(); return; }
    if (w.idx < 0) return;
    const p = this.pile(w);
    if (dbl) {
      const before = clone(this.g);
      if (w.idx === p.length - 1 && w.kind !== 'found')
        for (let f = 0; f < 4; f++)
          if (this.tryMove(w, w.idx, { kind: 'found', i: f })) { this.prev = before; return; }
      return;
    }
    if (p[w.idx].down) {
      if (w.kind === 'tab' && w.idx === p.length - 1) { this.save(); p[w.idx].down = false; }
      return;
    }
    const cx = w.kind === 'tab' ? STOCK_X + COL * w.i : w.kind === 'waste' ? this.wasteTopX() : FOUND_X + COL * w.i;
    const cy = w.kind === 'tab' ? this.tabY(p, w.idx) : TOP_Y;
    this.drag = { src: w, idx: w.idx, dx: x - cx, dy: y - cy, x, y };
  }

  move(x, y) { if (this.drag) { this.drag.x = x; this.drag.y = y; } }

  up() {
    const d = this.drag;
    if (!d) return;
    this.drag = null;
    const before = clone(this.g);
    const target = this.dropTarget(d.x - d.dx + CARD_W / 2, d.y - d.dy + CARD_H / 2);
    if (target && this.tryMove(d.src, d.idx, target)) this.prev = before;
  }

  tick(dt) { if (this.won()) this.banner.tick(dt, 41); }

  // ---------- drawing ----------

  card(ctx, c, x, y, inv = false) { drawStdCard(this.spr, ctx, c, x, y, { back: this.g.back, inv }); }

  draw(ctx) {
    const { g, spr, drag } = this;
    spr.draw(ctx, 200, 0, 0);
    if (g.stock.length) {
      spr.draw(ctx, 250 + g.back, STOCK_X, TOP_Y, GREEN);
      if (g.stock.length > 5) spr.draw(ctx, 250 + g.back, STOCK_X + 3, TOP_Y, GREEN);
      if (g.stock.length > 11) spr.draw(ctx, 250 + g.back, STOCK_X + 6, TOP_Y, GREEN);
    }
    const hide = (kind, i, idx) => drag && drag.src.kind === kind && (kind === 'waste' || drag.src.i === i) && idx >= drag.idx;
    let k = 0;
    g.waste.forEach((c, i) => {
      if (!c.fan) return;
      if (!hide('waste', 0, i)) this.card(ctx, c, WASTE_X + FAN * k, TOP_Y);
      k++;
    });
    g.found.forEach((p, f) => {
      const n = hide('found', f, p.length - 1) ? p.length - 1 : p.length;
      if (n > 0) this.card(ctx, p[n - 1], FOUND_X + COL * f, TOP_Y);
    });
    g.tab.forEach((p, c) => {
      p.forEach((card, i) => { if (!hide('tab', c, i)) this.card(ctx, card, STOCK_X + COL * c, this.tabY(p, i)); });
    });
    if (drag) {
      const p = this.pile(drag.src);
      for (let i = drag.idx; i < p.length; i++)
        this.card(ctx, p[i], drag.x - drag.dx, drag.y - drag.dy + UP * (i - drag.idx), this.opts.inverted);
    }
    if (this.won()) this.banner.draw(spr, ctx);
  }
}
