// Golf — rules from 0000Golf.007 (FUN_00013a5c), layout from its draw routines.
import {
  GREEN, MsRand, STD_CARD_IDS, clone, drawDigits, drawStdCard, freshDeck, inRect, loadSprites, newSeed,
  range, shuffle,
} from './engine.js';
import { BACK_CHOICES, Banner } from './klondike.js';

const CARD_W = 30, CARD_H = 42, COL_X = 5, COL_STEP = 33, COL_Y = 18, UP = 14;
const STOCK_X = 5, STOCK_Y = 238, DISCARD_X = 5, DISCARD_Y = 116, DISCARD_STEP = 10, ACE = 14, KING = 13;

export default class Golf {
  static id = 'golf';
  static title = 'Golf';
  static height = 280;
  static options = [
    { key: 'back', label: 'Card style', choices: BACK_CHOICES.map(([v, l]) => [v, v === 2 ? 'Golf green' : l]), default: 2 },
    { key: 'queenOnKing', label: 'Allow Queen on King', default: false },
  ];

  constructor(env) {
    Object.assign(this, env);
    this.banner = new Banner(204, 110);
  }

  async load() {
    await loadSprites('golf', [...STD_CARD_IDS, 200, 204, ...range(280, 299)]);
    this.ready = true;
  }

  newGame() {
    const rng = new MsRand(newSeed());
    const stock = shuffle(freshDeck(), rng);
    const tab = [];
    for (let col = 0; col < 7; col++) {   // FUN_0001468c: 7 columns of 5, all face up
      tab.push([]);
      for (let i = 0; i < 5; i++) tab[col].push({ ...stock.shift(), down: false });
    }
    const r = rng.mod(5);
    this.g = { stock, tab, discard: [], back: this.opts.back < 0 ? r : this.opts.back };
    this.prev = null;
    this.banner.reset();
  }

  optionsChanged() { if (this.opts.back >= 0) this.g.back = this.opts.back; }
  undo() { if (this.prev) { this.g = this.prev; this.prev = null; this.banner.reset(); } }

  left() { return this.g.tab.reduce((n, p) => n + p.length, 0); }
  won() { return this.left() === 0; }

  // FUN_00013a5c: one up or down regardless of suit; A-2 both ways; no K/A wrap;
  // nothing on a King unless "Allow Queen on King".
  accepts(c) {
    const t = this.g.discard[this.g.discard.length - 1];
    if (!t) return true;
    if (t.rank === KING && !this.opts.queenOnKing) return false;
    if ((t.rank === ACE && c.rank === 2) || (t.rank === 2 && c.rank === ACE)) return true;
    if ((t.rank === ACE && c.rank === KING) || (t.rank === KING && c.rank === ACE)) return false;
    return c.rank === t.rank - 1 || c.rank === t.rank + 1;
  }

  stuck() {
    return !this.g.stock.length && this.g.tab.every((p) => !p.length || !this.accepts(p[p.length - 1]));
  }

  down(x, y) {
    const g = this.g;
    if (this.won()) { this.newGame(); return; }
    if (g.stock.length && inRect(x, y, STOCK_X, STOCK_Y, CARD_W + 10, CARD_H)) {
      this.prev = clone(g);
      g.discard.push({ ...g.stock.shift(), down: false });
      this.sound.play('golf', 212);
      return;
    }
    for (let c = 0; c < 7; c++) {
      const p = g.tab[c];
      if (!p.length) continue;
      const cx = COL_X + COL_STEP * c, cy = COL_Y + UP * (p.length - 1);
      if (inRect(x, y, cx, COL_Y, CARD_W, cy + CARD_H - COL_Y)) {
        const top = p[p.length - 1];
        if (this.accepts(top)) {
          this.prev = clone(g);
          g.discard.push(p.pop());
          this.sound.play('golf', 212);
        }
        return;
      }
    }
  }

  tick(dt) { if (this.won()) this.banner.tick(dt, 41); }

  draw(ctx) {
    const { g, spr } = this;
    const card = (c, x, y) => drawStdCard(spr, ctx, c, x, y, { back: g.back });
    spr.draw(ctx, 200, 0, 0);
    drawDigits(spr, ctx, this.left(), 45, 1, 7, 290);           // score: cards left on the tableau
    g.tab.forEach((p, c) => p.forEach((cd, i) => card(cd, COL_X + COL_STEP * c, COL_Y + UP * i)));
    // FUN_00014fdc: the discard pile is fanned out, wrapping onto new rows.
    let x = DISCARD_X, y = DISCARD_Y;
    for (const c of g.discard) {
      if (x + CARD_W > 240) { x = DISCARD_X; y += CARD_H + 4; if (y + CARD_H > STOCK_Y - 14) x = STOCK_X + 50; }
      card(c, x, y);
      x += DISCARD_STEP;
    }
    if (g.stock.length) {
      spr.draw(ctx, 250 + g.back, STOCK_X, STOCK_Y, GREEN);
      if (g.stock.length > 5) spr.draw(ctx, 250 + g.back, STOCK_X + 5, STOCK_Y, GREEN);
      if (g.stock.length > 11) spr.draw(ctx, 250 + g.back, STOCK_X + 10, STOCK_Y, GREEN);
    }
    drawDigits(spr, ctx, g.stock.length, 14, 227, 7, 280);      // cards left in the stock
    if (this.won()) this.banner.draw(spr, ctx);
    else if (this.stuck()) {
      ctx.fillStyle = '#000';
      ctx.fillRect(70, 0, 170, 13);
      ctx.fillStyle = '#fff';
      ctx.font = '10px Tahoma, sans-serif';
      ctx.fillText(`Round over — score ${this.left()}`, 74, 10);
    }
  }
}
