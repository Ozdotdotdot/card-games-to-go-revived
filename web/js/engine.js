// Shared runtime for the six ports: sprites, the original RNG and shuffle, card drawing.

export const W = 240;

// TransparentImage colour keys used by the originals.
export const GREEN = 0x00ff00;
export const WHITE = 0xffffff;
export const NONE = -1;

const images = new Map();   // "game/id" -> HTMLImageElement
const keyed = new Map();    // "game/id/key/inv" -> canvas

function load(src) {
  return new Promise((resolve, reject) => {
    const img = new Image();
    img.onload = () => resolve(img);
    img.onerror = () => reject(new Error(`missing asset ${src} — run tools/extract_assets.py`));
    img.src = src;
  });
}

export async function loadSprites(game, ids) {
  await Promise.all(ids.map(async (id) => {
    const k = `${game}/${id}`;
    if (!images.has(k)) images.set(k, await load(`assets/${game}/${id}.bmp`));
  }));
}

export function range(a, b) {
  const out = [];
  for (let i = a; i <= b; i++) out.push(i);
  return out;
}

function sprite(game, id, key, inv) {
  const k = `${game}/${id}/${key}/${inv}`;
  let c = keyed.get(k);
  if (c) return c;
  const img = images.get(`${game}/${id}`);
  if (!img) throw new Error(`sprite ${game}/${id} not loaded`);
  c = document.createElement('canvas');
  c.width = img.width;
  c.height = img.height;
  const g = c.getContext('2d');
  g.drawImage(img, 0, 0);
  if (key !== NONE || inv) {
    const d = g.getImageData(0, 0, c.width, c.height);
    const p = d.data;
    for (let i = 0; i < p.length; i += 4) {
      const rgb = (p[i] << 16) | (p[i + 1] << 8) | p[i + 2];
      if (rgb === key) p[i + 3] = 0;
      else if (inv) { p[i] ^= 255; p[i + 1] ^= 255; p[i + 2] ^= 255; }
    }
    g.putImageData(d, 0, 0);
  }
  keyed.set(k, c);
  return c;
}

export class Sprites {
  constructor(game) { this.game = game; }
  draw(ctx, id, x, y, key = NONE, inv = false) {
    ctx.drawImage(sprite(this.game, id, key, inv), x, y);
  }
  size(id) {
    const img = images.get(`${this.game}/${id}`);
    return [img.width, img.height];
  }
}

// Microsoft C runtime rand(), as linked by the Pocket PC builds.
export class MsRand {
  constructor(seed) { this.s = seed >>> 0; }
  next() {
    this.s = (Math.imul(this.s, 214013) + 2531011) >>> 0;
    return (this.s >>> 16) & 0x7fff;
  }
  mod(n) { return this.next() % n; }
}

// The originals' shuffle: drop each card into a random empty slot, re-rolling on collisions.
export function shuffle(cards, rng) {
  const out = new Array(cards.length);
  for (const c of cards) {
    let r;
    do r = rng.mod(cards.length); while (out[r] !== undefined);
    out[r] = c;
  }
  return out;
}

export function newSeed() {
  return (Date.now() ^ Math.floor(performance.now() * 1000)) >>> 0;
}

export function freshDeck(faceDown = true) {
  const deck = [];
  for (let suit = 0; suit < 4; suit++)
    for (let rank = 2; rank <= 14; rank++) deck.push({ suit, rank, down: faceDown });
  return deck;
}

// Suits: 0 clubs, 1 diamonds, 2 hearts, 3 spades. Ace is rank 14 throughout.
export const isRed = (suit) => suit === 1 || suit === 2;
export const SUIT_NAMES = ['clubs', 'diamonds', 'hearts', 'spades'];
export const rankName = (r) => ({ 11: 'J', 12: 'Q', 13: 'K', 14: 'A' })[r] || String(r);

export const STD_CARD_IDS = [130, ...range(136, 192), 194, 195, ...range(250, 254)];

// Klondike/Golf/Hearts/Spades card renderer (30x42), from FUN_0001753c and FUN_00018da8.
export function drawStdCard(spr, ctx, c, x, y, { back = 0, inv = false, corner = 'side' } = {}) {
  if (c.down) { spr.draw(ctx, 250 + back, x, y, GREEN, inv); return; }
  const red = isRed(c.suit);
  spr.draw(ctx, 130, x, y, GREEN, inv);
  spr.draw(ctx, (red ? 153 : 140) + c.rank - 2, x + 2, y + 2, WHITE, inv);
  const rotSuit = c.suit === 1 ? 137 : 192 + c.suit;
  if (corner === 'side') {   // Klondike, Golf: suit beside the rank
    spr.draw(ctx, 136 + c.suit, x + 17, y + 2, WHITE, inv);
    spr.draw(ctx, (red ? 179 : 166) + c.rank - 2, x + 19, y + 31, WHITE, inv);
    spr.draw(ctx, rotSuit, x + 4, y + 31, WHITE, inv);
  } else {                   // Hearts, Spades: suit under the rank, so fanned hands stay readable
    spr.draw(ctx, 136 + c.suit, x + 2, y + 12, WHITE, inv);
    spr.draw(ctx, (red ? 179 : 166) + c.rank - 2, x + 19, y + 31, WHITE, inv);
    spr.draw(ctx, rotSuit, x + 19, y + 21, WHITE, inv);
  }
}

export function inRect(px, py, x, y, w, h) {
  return px >= x && px < x + w && py >= y && py < y + h;
}

export function clone(o) {
  return structuredClone(o);
}

// Two-digit LED counter (FUN_0001335c / FUN_00014828): base is the id of digit 0.
export function drawDigits(spr, ctx, value, x, y, w, base, key = NONE) {
  value = Math.min(99, Math.abs(value));
  spr.draw(ctx, base + Math.floor(value / 10), x, y, key);
  spr.draw(ctx, base + (value % 10), x + w + 1, y, key);
}

export class Sound {
  constructor() { this.on = true; this.cache = new Map(); }
  play(game, id) {
    if (!this.on) return;
    let a = this.cache.get(`${game}/${id}`);
    if (!a) {
      a = new Audio(`assets/${game}/${id}.wav`);
      this.cache.set(`${game}/${id}`, a);
    }
    a.currentTime = 0;
    a.play().catch(() => {});
  }
}
