// Spider — rules and layout from 00Spider.011 (see FINDINGS.md).
import { GREEN, MsRand, NONE, WHITE, clone, inRect, isRed, loadSprites, newSeed, range, shuffle } from './engine.js';
import { Banner } from './klondike.js';

const CARD_W = 22, CARD_H = 31, COL_X = 1, COL_STEP = 24, COL_Y = 10, DOWN = 4, MAX_UP = 10, BOTTOM = 236;
const STOCK_X = 203, STOCK_Y = 241, DONE_X = 40, DONE_Y = 241, ACE = 14, KING = 13;

export default class Spider {
  static id = 'spider';
  static title = 'Spider';
  static height = 280;
  static options = [
    { key: 'suits', label: 'Difficulty', choices: [[0, '1 suit (easy)'], [1, '2 suits (medium)'], [2, '4 suits (hard)']], default: 2 },
    { key: 'mixed', label: 'Allow mixed suit moves', default: false },
    { key: 'back', label: 'Card style', choices: [[-1, '? (random)'], [0, 'Boat'], [1, 'Beach'], [2, 'Spider'], [3, 'Blue'], [4, 'Red']], default: 2 },
    { key: 'inverted', label: 'Move selected cards: inverted colours', default: false },
    { key: 'validNormal', label: 'Valid move: show normal colours', default: false },
  ];

  constructor(env) {
    Object.assign(this, env);
    this.banner = new Banner(201, 100);
  }

  async load() {
    await loadSprites('spider', [130, ...range(131, 141), ...range(143, 201), 204]);
    this.ready = true;
  }

  // FUN_00014718: two decks; 1 suit = rand()%4, 2 suits = clubs and diamonds, 4 suits = all.
  newGame() {
    const rng = new MsRand(newSeed());
    const oneSuit = rng.mod(4);
    const deck = [];
    for (let d = 0; d < 2; d++)
      for (let s = 0; s < 4; s++) {
        const suit = this.opts.suits === 0 ? oneSuit : this.opts.suits === 1 ? s % 2 : s;
        for (let rank = 2; rank <= ACE; rank++) deck.push({ suit, rank, down: true });
      }
    const stock = shuffle(deck, rng);
    const tab = range(0, 9).map(() => []);
    // FUN_00015460: rows of face-down cards (the fifth row only on columns 0-3), then a face-up row.
    for (let row = 0; row < 5; row++)
      for (let c = 0; c < 10; c++)
        if (row < 4 || c < 4) tab[c].push(stock.shift());
    for (let c = 0; c < 10; c++) tab[c].push({ ...stock.shift(), down: false });
    const r = rng.mod(5);
    this.g = { stock, tab, done: [], back: this.opts.back < 0 ? r : this.opts.back };
    this.prev = null;
    this.drag = null;
    this.banner.reset();
  }

  optionsChanged(before) {
    if (this.opts.back >= 0) this.g.back = this.opts.back;
    if (before.suits !== this.opts.suits) this.toast('Difficulty takes effect with a new game.');
  }

  undo() { if (this.prev) { this.g = this.prev; this.prev = null; this.banner.reset(); } }
  won() { return this.g.done.length === 8; }

  // FUN_00014658: any suit, one lower; Ace goes on a 2; nothing goes on an Ace.
  accepts(t, c) {
    if (t.rank === ACE) return false;
    return c.rank === ACE ? t.rank === 2 : c.rank === t.rank - 1;
  }

  nextLower(a, b) { return b.rank === (a.rank === 2 ? ACE : a.rank - 1) && a.rank !== ACE; }

  movable(p, idx) {
    if (p[idx].down) return false;
    for (let i = idx; i < p.length - 1; i++) {
      if (!this.nextLower(p[i], p[i + 1])) return false;
      if (!this.opts.mixed && p[i].suit !== p[i + 1].suit) return false;
    }
    return true;
  }

  // FUN_00015ca8: thirteen face-up cards, King down to Ace in one suit, at the end of a column.
  collect(p) {
    if (p.length < 13) return false;
    const run = p.slice(-13);
    for (let i = 0; i < 13; i++) {
      const c = run[i];
      const want = i === 12 ? ACE : KING - i;
      if (c.down || c.rank !== want || c.suit !== run[0].suit) return false;
    }
    p.splice(-13);
    this.g.done.push(run[0].suit);
    if (p.length) p[p.length - 1].down = false;
    return true;
  }

  upStep(p) {
    const downs = p.filter((c) => c.down).length, ups = p.length - downs;
    if (ups < 2) return MAX_UP;
    return Math.max(4, Math.min(MAX_UP, Math.floor((BOTTOM - COL_Y - downs * DOWN - CARD_H) / (ups - 1))));
  }

  cardY(p, i) {
    const step = this.upStep(p);
    let y = COL_Y;
    for (let k = 0; k < i; k++) y += p[k].down ? DOWN : step;
    return y;
  }

  dealRow() {
    const g = this.g;
    if (!g.stock.length) return;
    if (g.tab.some((p) => !p.length)) { this.toast('Fill every empty pile before dealing.'); return; }
    this.prev = clone(g);
    for (const p of g.tab) {
      p.push({ ...g.stock.shift(), down: false });
      this.collect(p);
    }
  }

  down(x, y) {
    const g = this.g;
    if (this.won()) { this.newGame(); return; }
    if (inRect(x, y, STOCK_X, STOCK_Y, CARD_W + 14, CARD_H)) { this.dealRow(); return; }
    const c = Math.floor((x - COL_X + 1) / COL_STEP);
    if (c < 0 || c > 9) return;
    const p = g.tab[c];
    for (let i = p.length - 1; i >= 0; i--) {
      const cy = this.cardY(p, i);
      if (!inRect(x, y, COL_X + COL_STEP * c, cy, CARD_W, CARD_H)) continue;
      if (this.movable(p, i)) this.drag = { col: c, idx: i, dx: x - COL_X - COL_STEP * c, dy: y - cy, x, y, step: this.upStep(p) };
      return;
    }
  }

  move(x, y) { if (this.drag) { this.drag.x = x; this.drag.y = y; } }

  target() {
    const d = this.drag;
    const cx = d.x - d.dx + CARD_W / 2;
    const c = Math.floor((cx - COL_X + 1) / COL_STEP);
    if (c < 0 || c > 9 || c === d.col) return -1;
    const t = this.g.tab[c][this.g.tab[c].length - 1];
    const base = this.g.tab[d.col][d.idx];
    return !t || this.accepts(t, base) ? c : -1;
  }

  up() {
    const d = this.drag;
    if (!d) return;
    const t = this.target();
    this.drag = null;
    if (t < 0) return;
    const g = this.g;
    this.prev = clone(g);
    const src = g.tab[d.col];
    g.tab[t].push(...src.splice(d.idx));
    if (src.length) src[src.length - 1].down = false;
    this.collect(g.tab[t]);
  }

  tick(dt) { if (this.won()) this.banner.tick(dt, 41); }

  // FUN_00016dac
  card(ctx, c, x, y, inv = false) {
    const { spr } = this;
    if (c.down) { spr.draw(ctx, 132 + this.g.back, x, y, GREEN, inv); return; }
    const red = isRed(c.suit);
    spr.draw(ctx, 131, x, y, GREEN, inv);
    spr.draw(ctx, (red ? 174 : 146) + c.rank - 2, x + 2, y + 2, WHITE, inv);
    spr.draw(ctx, 137 + c.suit, x + 11, y + 2, WHITE, inv);
    spr.draw(ctx, (red ? 188 : 160) + c.rank - 2, x + 15, y + 21, WHITE, inv);
    spr.draw(ctx, c.suit === 1 ? 138 : 141 + c.suit, x + 4, y + 22, WHITE, inv);
  }

  draw(ctx) {
    const { g, spr, drag } = this;
    spr.draw(ctx, 130, 0, 0, NONE);
    g.tab.forEach((p, c) => {
      const n = drag && drag.col === c ? drag.idx : p.length;
      for (let i = 0; i < n; i++) this.card(ctx, p[i], COL_X + COL_STEP * c, this.cardY(p, i));
    });
    // FUN_000155f4: one more card thickness for each further 10 in the stock.
    for (let k = 0; k < 5; k++)
      if (g.stock.length > k * 10) spr.draw(ctx, 132 + g.back, STOCK_X + 3 * k, STOCK_Y, GREEN);
    // FUN_00016244: completed suits show as their Kings.
    g.done.forEach((suit, i) => this.card(ctx, { suit, rank: KING, down: false }, DONE_X + 17 * i, DONE_Y));
    if (drag) {
      const p = g.tab[drag.col];
      const valid = this.target() >= 0;
      const inv = valid && this.opts.validNormal ? false : this.opts.inverted;
      for (let i = drag.idx; i < p.length; i++)
        this.card(ctx, p[i], drag.x - drag.dx, drag.y - drag.dy + drag.step * (i - drag.idx), inv);
    }
    if (this.won()) this.banner.draw(spr, ctx);
  }
}
