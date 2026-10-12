// War — rules from the help file, layout and art from 00000War.012 (FUN_00011cf8, FUN_000124ec).
import { GREEN, MsRand, NONE, WHITE, freshDeck, inRect, isRed, loadSprites, newSeed, range, shuffle } from './engine.js';

const CARD_W = 45, CARD_H = 63, DECK_X = 98, COMP_Y = 10, YOU_Y = 197;
const COMP_FACE = [3, 3], YOU_FACE = [146, 200], FACE = 91;
const NAMES = ['PFC Joe', 'Sgt Joe', 'Cpt Joe', 'Gen Joe', 'PFC Jane', 'PVT Jill', 'Cpt Jane', 'Gen Jane'];
const BANNER = { war: 194, draw: 195, over: 196, won: 197 };
const BANNER_POS = { war: [31, 112], draw: [28, 112], over: [5, 111], won: [5, 117] };   // FUN_00013ebc
const PAUSE = 900;

export default class War {
  static id = 'war';
  static title = 'War';
  static height = 320;
  static options = [
    { key: 'goal', label: 'Game won by', choices: [[1, '1 war'], [3, '3 wars'], [5, '5 wars'], [10, '10 wars'], [0, 'All cards']], default: 3 },
    { key: 'warDown', label: 'Cards down during war', choices: [[1, '1'], [2, '2'], [3, '3']], default: 3 },
    { key: 'drawDown', label: 'Cards down during draw', choices: [[1, '1'], [2, '2'], [3, '3']], default: 1 },
    { key: 'name', label: 'Your character', choices: NAMES.map((n, i) => [i, n]), default: 4 },
  ];

  constructor(env) { Object.assign(this, env); this.back = 0; }

  async load() {
    await loadSprites('war', [...range(130, 137), ...range(139, 233)]);
    this.ready = true;
  }

  newGame() {
    const rng = new MsRand(newSeed());
    const deck = shuffle(freshDeck(false), rng);
    this.comp = [];
    this.you = [];
    deck.forEach((c, i) => (i % 2 ? this.you : this.comp).push(c));
    this.compChar = rng.mod(8);
    this.youChar = this.opts.name;
    this.compWars = 0;
    this.youWars = 0;
    this.compTable = [];
    this.youTable = [];
    this.lastWinner = -1;
    this.banner = null;
    this.state = 'compTurn';
    this.timer = 500;
    this.pending = 0;   // cards each side still owes face down before the deciding card
  }

  optionsChanged() { this.youChar = this.opts.name; }

  // Lay `down` cards face down then one face up; a short deck plays its last card up.
  lay(deck, table, down) {
    for (let i = 0; i < down && deck.length > 1; i++) table.push({ ...deck.shift(), down: true });
    if (deck.length) table.push({ ...deck.shift(), down: false });
    this.sound.play('war', 237);
  }

  top(table) {
    for (let i = table.length - 1; i >= 0; i--) if (!table[i].down) return table[i];
    return null;
  }

  resolve() {
    const c = this.top(this.compTable), y = this.top(this.youTable);
    if (!c || !y) { this.finish(); return; }
    if (c.rank === y.rank) {
      const inWar = this.pending > 0 || this.banner === 'war' || this.banner === 'draw';
      this.banner = inWar ? 'draw' : 'war';
      this.pending = inWar ? this.opts.drawDown : this.opts.warDown;
      this.sound.play('war', inWar ? 236 : 235);
      if (!this.comp.length || !this.you.length) { this.finish(); return; }
      this.state = 'compTurn';
      this.timer = PAUSE * 1.5;
      return;
    }
    const youWin = y.rank > c.rank;
    this.lastWinner = youWin ? 1 : 0;
    if (this.banner === 'war' || this.banner === 'draw') {
      if (youWin) this.youWars++; else this.compWars++;
    }
    this.state = 'collect';
    this.timer = PAUSE;
    this.collectTo = youWin ? this.you : this.comp;
  }

  collect() {
    const won = [...this.compTable, ...this.youTable].map((c) => ({ ...c, down: false }));
    this.collectTo.push(...won);
    this.compTable = [];
    this.youTable = [];
    this.banner = null;
    this.pending = 0;
    this.finish();
  }

  finish() {
    const goal = this.opts.goal;
    const youDone = !this.comp.length || (goal && this.youWars >= goal);
    const compDone = !this.you.length || (goal && this.compWars >= goal);
    if (youDone || compDone) {
      this.state = 'over';
      this.banner = youDone && !compDone ? 'won' : 'over';
      return;
    }
    this.state = 'compTurn';
    this.timer = PAUSE / 2;
  }

  tick(dt) {
    if (this.state !== 'compTurn' && this.state !== 'collect') return;
    this.timer -= dt;
    if (this.timer > 0) return;
    if (this.state === 'collect') { this.collect(); return; }
    this.lay(this.comp, this.compTable, this.pending);
    this.state = 'youTurn';
  }

  down(x, y) {
    if (inRect(x, y, DECK_X, COMP_Y, CARD_W + 2, CARD_H)) { this.back = (this.back + 1) % 3; return; }
    if (inRect(x, y, COMP_FACE[0], COMP_FACE[1], FACE, FACE)) { this.compChar = (this.compChar + 1) % 8; return; }
    if (inRect(x, y, YOU_FACE[0], YOU_FACE[1], FACE, FACE)) {
      this.youChar = (this.youChar + 1) % 8;
      this.opts.name = this.youChar;
      return;
    }
    if (this.state === 'over') { this.newGame(); return; }
    if (this.state === 'youTurn' && inRect(x, y, DECK_X, YOU_Y, CARD_W + 2, CARD_H)) {
      this.lay(this.you, this.youTable, this.pending);
      this.state = 'wait';
      setTimeout(() => this.resolve(), 350);
    }
  }

  // FUN_000124ec
  card(ctx, c, x, y) {
    const { spr } = this;
    if (c.down) { spr.draw(ctx, 130 + this.back, x, y, GREEN); return; }
    const red = isRed(c.suit);
    spr.draw(ctx, 193, x, y, GREEN);
    spr.draw(ctx, (red ? 167 : 141) + c.rank - 2, x + 3, y + 2, WHITE);
    spr.draw(ctx, (red ? 180 : 154) + c.rank - 2, x + 33, y + 52, WHITE);
    spr.draw(ctx, 133 + c.suit, x + 3, y + 12, WHITE);
    spr.draw(ctx, c.suit === 1 ? 134 : 137 + c.suit, x + 33, y + 42, WHITE);
    if (c.rank === 14) spr.draw(ctx, 218 + c.suit, x + 10, y + 20, WHITE);
    else if (c.rank >= 11) spr.draw(ctx, { 13: 222, 12: 226, 11: 230 }[c.rank] + c.suit, x + 9, y + 15, WHITE);
  }

  // FUN_00012360: the computer's cards run right from x=120, yours run left from x=75.
  table(ctx, cards, you) {
    let x = you ? 75 : 120, y = you ? 124 : 83;
    for (const c of cards) {
      if (!you && x >= 196) { x = 120; y = 105; }
      if (you && x < 0) { x = 75; y = 101; }
      this.card(ctx, c, x, y);
      x += you ? -15 : 15;
    }
  }

  face(ctx, ch, [x, y], name, grin) {
    const { spr } = this;
    spr.draw(ctx, 208 + ch, x, y, GREEN);
    if (grin) spr.draw(ctx, 216, x + 27, y + 66, GREEN);
    ctx.fillStyle = '#fff';
    ctx.font = '9px Tahoma, sans-serif';
    ctx.textAlign = 'center';
    ctx.fillText(name, x + FACE / 2, y + FACE + 9);
    ctx.textAlign = 'left';
  }

  draw(ctx) {
    const { spr } = this;
    ctx.fillStyle = '#336633';
    ctx.fillRect(0, 0, 240, 320);
    for (const [deck, y] of [[this.comp, COMP_Y], [this.you, YOU_Y]])
      if (deck.length) for (const dx of [100, 99, 98]) spr.draw(ctx, 130 + this.back, dx, y, GREEN);
    // card counts (LED digits) and wars won ("WAR" tags)
    spr.draw(ctx, 198 + Math.floor(Math.min(99, this.comp.length) / 10), 152, 10, NONE);
    spr.draw(ctx, 198 + (this.comp.length % 10), 166, 10, NONE);
    spr.draw(ctx, 198 + Math.floor(Math.min(99, this.you.length) / 10), 62, 240, NONE);
    spr.draw(ctx, 198 + (this.you.length % 10), 76, 240, NONE);
    for (let i = 0, x = 188, y = 4; i < this.compWars; i++, x += 13) {
      if (x + 11 > 240) { x = 188; y += 31; }
      spr.draw(ctx, 217, x, y, GREEN);
    }
    for (let i = 0, x = 45, y = 237; i < this.youWars; i++, x -= 13) {
      if (x < 0) { x = 45; y -= 31; }
      spr.draw(ctx, 217, x, y, GREEN);
    }
    this.face(ctx, this.compChar, COMP_FACE, NAMES[this.compChar], this.lastWinner === 0);
    this.face(ctx, this.youChar, YOU_FACE, `${NAMES[this.youChar]} (you)`, this.lastWinner === 1);
    this.table(ctx, this.compTable, false);
    this.table(ctx, this.youTable, true);
    if (this.banner) spr.draw(ctx, BANNER[this.banner], ...BANNER_POS[this.banner], WHITE);
    if (this.state === 'youTurn') {
      ctx.fillStyle = '#ffffe1';
      ctx.font = '9px Tahoma, sans-serif';
      ctx.fillText('Tap your deck', DECK_X, YOU_Y - 4);
    }
  }
}
