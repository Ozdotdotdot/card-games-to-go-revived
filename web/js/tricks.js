// Shared table for Hearts and Spades: seats, dealing, layout (FUN_00018ab4), tricks, pacing.
import { MsRand, NONE, STD_CARD_IDS, drawStdCard, freshDeck, inRect, loadSprites, newSeed, shuffle } from './engine.js';

export const ACROSS = 0, RIGHT = 1, YOU = 2, LEFT = 3;
export const SEAT_LETTER = ['A', 'R', 'Y', 'L'];
export const SEAT_NAME = ['Across', 'Right', 'You', 'Left'];
// Trick card positions per seat (FUN_000199e0).
const TRICK_POS = [[105, 57], [175, 113], [105, 169], [35, 113]];
export const DELAYS = [[0, 'None'], [450, 'Short'], [1000, 'Long']];

// Hand order within a suit is high to low; the AI helpers rely on it.
export function sortHand(h) {
  h.sort((a, b) => a.suit - b.suit || b.rank - a.rank);
  return h;
}

// ---------- hand queries (named after the Hearts helpers they mirror) ----------
export const H = {
  has: (h, s, r) => h.some((c) => c.suit === s && c.rank === r),
  count: (h, s) => h.filter((c) => c.suit === s).length,
  atLeast: (h, s, r) => h.filter((c) => c.suit === s && c.rank >= r).length,
  highest: (h, s) => h.find((c) => c.suit === s) || null,                         // FUN_00015714
  lowest: (h, s) => h.filter((c) => c.suit === s).pop() || null,                  // FUN_00014d18
  highestBelow: (h, s, r) => h.find((c) => c.suit === s && c.rank < r) || null,   // FUN_00015ce0
  lowestAbove: (h, s, r) => h.filter((c) => c.suit === s && c.rank > r).pop() || null,  // FUN_00015d40
  // lowest of the per-suit lows, skipping suits for which skip(suit, low) is true (FUN_00014dec/14e64/14d58)
  lowestOverall(h, skip = () => false) {
    let best = null;
    for (let s = 0; s < 4; s++) {
      const c = H.lowest(h, s);
      if (c && !skip(s, c) && (!best || c.rank < best.rank)) best = c;
    }
    return best;
  },
  // highest of the per-suit highs, ties to the shorter suit (FUN_00015ab8/15c28/15b64)
  highestOverall(h, skip = () => false, pick = (s) => H.highest(h, s)) {
    let best = null;
    for (let s = 0; s < 4; s++) {
      const c = pick(s);
      if (!c || skip(s, c)) continue;
      if (!best || c.rank > best.rank || (c.rank === best.rank && H.count(h, c.suit) < H.count(h, best.suit))) best = c;
    }
    return best;
  },
};

export class TrickGame {
  static height = 320;

  constructor(env) {
    Object.assign(this, env);
    this.order = [YOU, LEFT, ACROSS, RIGHT];   // clockwise
  }

  async load() {
    await loadSprites(this.constructor.id, [...STD_CARD_IDS, 132, 200, 204]);
    this.ready = true;
  }

  next(p) { return this.order[(this.order.indexOf(p) + 1) % this.order.length]; }

  dealHands(cardsEach) {
    this.rng = new MsRand(newSeed());
    const deck = shuffle(freshDeck(false), this.rng);
    this.hands = [[], [], [], []];
    let p = this.next(this.dealer);
    for (let i = 0; i < cardsEach * this.order.length; i++) {
      this.hands[p].push(deck[i]);
      p = this.next(p);
    }
    this.undealt = deck.slice(cardsEach * this.order.length);
    this.hands.forEach(sortHand);
    this.trick = [];          // [{seat, card}]
    this.played = [];         // every card played this hand, for the AI's memory
    this.taken = [0, 0, 0, 0];
    this.tricksWon = [0, 0, 0, 0];
    this.trickNo = 0;
    this.selected = new Set();
    this.timer = 0;
  }

  // ---------- trick flow ----------

  play(seat, card) {
    const h = this.hands[seat];
    h.splice(h.indexOf(card), 1);
    this.trick.push({ seat, card });
    this.played.push(card);
    this.cardPlayed?.(seat, card);
    if (this.trick.length === this.order.length) {
      this.phase = 'trickDone';
      this.timer = this.opts.tapTrick ? Infinity : Math.max(600, this.opts.delay * 1.5);
    } else {
      this.turn = this.next(seat);
      this.timer = this.opts.delay;
    }
  }

  ledSuit() { return this.trick.length ? this.trick[0].card.suit : -1; }

  takeTrick() {
    const w = this.trickWinner();
    this.tricksWon[w]++;
    this.trickTaken?.(w, this.trick.map((t) => t.card));
    this.trick = [];
    this.trickNo++;
    this.turn = w;
    if (this.hands[YOU].length === 0 && this.order.every((p) => this.hands[p].length === 0)) this.handOver();
    else { this.phase = 'play'; this.timer = this.opts.delay; }
  }

  tick(dt) {
    if (this.phase === 'trickDone') {
      this.timer -= dt;
      if (this.timer <= 0) this.takeTrick();
      return;
    }
    if (this.phase !== 'play' || this.turn === YOU) return;
    this.timer -= dt;
    if (this.timer > 0) return;
    this.play(this.turn, this.choose(this.turn));
  }

  // ---------- layout ----------

  handLayout(seat) {
    const n = this.hands[seat].length;
    if (seat === ACROSS || seat === YOU) {
      const dx = n < 2 ? 26 : Math.min(26, Math.floor(((seat === YOU ? 240 : 177) - 30) / (n - 1)));
      const x0 = Math.floor(((seat === YOU ? 210 : 209) - (n - 1) * dx) / 2);
      return { x0, y0: seat === YOU ? 225 : 1, dx, dy: 0 };
    }
    const dy = n < 2 ? 15 : Math.min(15, Math.floor(138 / (n - 1)));
    return { x0: seat === LEFT ? 1 : 209, y0: 134 - Math.floor(((n - 1) * dy + 42) / 2), dx: 0, dy };
  }

  handHit(x, y) {
    const h = this.hands[YOU];
    const { x0, y0, dx } = this.handLayout(YOU);
    for (let i = h.length - 1; i >= 0; i--) {
      const lift = this.selected.has(h[i]) ? 6 : 0;
      if (inRect(x, y, x0 + dx * i, y0 - lift, 30, 42 + lift)) return h[i];
    }
    return null;
  }

  // ---------- drawing ----------

  card(ctx, c, x, y, faceUp) {
    drawStdCard(this.spr, ctx, faceUp ? c : { ...c, down: true }, x, y, { back: this.back, corner: 'stack' });
  }

  drawTable(ctx) {
    const { spr } = this;
    spr.draw(ctx, 200, 0, 0, NONE);
    ctx.fillStyle = '#fff';
    ctx.font = '9px Tahoma, sans-serif';
    [ACROSS, RIGHT, YOU, LEFT].forEach((seat, i) => {
      if (this.order.includes(seat)) ctx.fillText(this.scoreLine(seat), 12, 9 + 10 * i);
    });
    for (const seat of this.order) {
      const h = this.hands[seat];
      const { x0, y0, dx, dy } = this.handLayout(seat);
      h.forEach((c, i) => {
        const lift = seat === YOU && this.selected.has(c) ? 6 : 0;
        this.card(ctx, c, x0 + dx * i, y0 + dy * i - lift, seat === YOU || this.opts.cheat);
      });
    }
    for (const { seat, card } of this.trick) this.card(ctx, card, ...TRICK_POS[seat], true);
  }

  caption(ctx, text, y = 150) {
    ctx.font = '10px Tahoma, sans-serif';
    const w = ctx.measureText(text).width + 12;
    ctx.fillStyle = '#ffffe1';
    ctx.fillRect((240 - w) / 2, y - 11, w, 15);
    ctx.strokeStyle = '#000';
    ctx.strokeRect((240 - w) / 2 + 0.5, y - 10.5, w - 1, 14);
    ctx.fillStyle = '#000';
    ctx.textAlign = 'center';
    ctx.fillText(text, 120, y);
    ctx.textAlign = 'left';
  }
}
