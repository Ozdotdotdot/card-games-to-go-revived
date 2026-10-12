// Spades — rules from the help file; bidding decoded from 00Spades.010 (FUN_00017cb0);
// card play follows the structure of FUN_00018524 / FUN_0001989c (see FINDINGS.md).
import { Banner, BACK_CHOICES } from './klondike.js';
import { ACROSS, DELAYS, H, LEFT, RIGHT, SEAT_NAME, TrickGame, YOU } from './tricks.js';

const CLUBS = 0, DIAMONDS = 1, HEARTS = 2, SPADES = 3;

export default class Spades extends TrickGame {
  static id = 'spades';
  static title = 'Spades';
  static options = [
    { key: 'mode', label: 'Play as', choices: [['partners', 'Partners'], ['ind3', 'Individuals, 3 opponents'], ['ind2', 'Individuals, 2 opponents']], default: 'partners' },
    { key: 'target', label: 'Game ends at', choices: [[300, '300'], [500, '500'], [1000, '1000']], default: 500 },
    { key: 'blindNil', label: 'Blind nil allowed at score ≤', choices: [[-100, '-100'], [-200, '-200'], [0, '0']], default: -100 },
    { key: 'lead2c', label: 'Individuals: 2♣ leads (else left of dealer)', default: false },
    { key: 'bidding', label: 'Computer bidding', choices: [[0, 'Normal'], [1, 'Normal + 1'], [2, 'Spades'], [3, 'Face cards'], [4, 'Reverse (diamonds)']], default: 0 },
    { key: 'delay', label: 'Delay between cards played', choices: DELAYS, default: 450 },
    { key: 'tapTrick', label: 'Tap before taking trick', default: false },
    { key: 'back', label: 'Card style', choices: BACK_CHOICES, default: -1 },
    { key: 'cheat', label: 'Cheat mode (show all hands)', default: false },
  ];

  constructor(env) {
    super(env);
    this.banner = new Banner(204, 140);
  }

  optionsChanged(before) {
    if (before.mode !== this.opts.mode || before.target !== this.opts.target)
      this.toast('Play mode and target take effect with a new game.');
  }

  newGame() {
    this.mode = this.opts.mode;
    this.order = this.mode === 'ind2' ? [YOU, LEFT, RIGHT] : [YOU, LEFT, ACROSS, RIGHT];
    this.teams = this.mode === 'partners' ? [[YOU, ACROSS], [LEFT, RIGHT]] : this.order.map((p) => [p]);
    this.scores = this.teams.map(() => 0);
    this.bags = this.teams.map(() => 0);
    this.dealer = this.mode === 'ind2' ? RIGHT : ACROSS;
    this.handNo = 0;
    this.over = false;
    this.banner.reset();
    this.startHand();
  }

  teamOf(p) { return this.teams.findIndex((t) => t.includes(p)); }
  partner(p) { return this.mode === 'partners' ? this.teams[this.teamOf(p)].find((q) => q !== p) : null; }

  async startHand() {
    this.phase = 'bidding';
    this.dealHands(this.mode === 'ind2' ? 17 : 13);
    const r = this.rng.mod(5);
    this.back = this.opts.back < 0 ? r : this.opts.back;
    this.spadesBroken = false;
    this.bids = [null, null, null, null];
    this.blind = [false, false, false, false];
    let blind = false;
    if (this.scores[this.teamOf(YOU)] <= this.opts.blindNil)
      blind = await this.prompt('Spades', 'Bid Blind Nil ?', [{ label: 'Yes', value: true }, { label: 'No', value: false }]);
    for (const p of this.order) if (p !== YOU) this.bids[p] = this.aiBid(this.hands[p]);
    if (blind) { this.bids[YOU] = 0; this.blind[YOU] = true; }
    else {
      const suggested = [null, null, H.count(this.hands[YOU], SPADES), this.faceCards(this.hands[YOU]), H.count(this.hands[YOU], DIAMONDS)][this.opts.bidding];
      const others = this.order.filter((p) => p !== YOU).map((p) => `${SEAT_NAME[p]} ${this.bidText(p)}`).join(', ');
      const buttons = [{ label: 'Nil', value: 0 }, ...Array.from({ length: 13 }, (_, i) => ({ label: String(i + 1), value: i + 1 }))];
      this.bids[YOU] = await this.prompt('Your bid', `${others}.${suggested != null ? ` Suggested: ${suggested}.` : ''} How many tricks will you take?`, buttons);
    }
    this.turn = this.opts.lead2c && this.mode !== 'partners' ? this.twoClubLeader() : this.next(this.dealer);
    this.phase = 'play';
    this.timer = 600;
  }

  twoClubLeader() {
    return this.order.find((p) => H.has(this.hands[p], CLUBS, 2)) ?? this.order.find((p) => H.has(this.hands[p], CLUBS, 3));
  }

  faceCards(h) { return h.filter((c) => c.rank > 10 && c.rank < 14).length; }   // FUN_00017bf0

  // FUN_00017cb0
  aiBid(h) {
    const hearts = H.count(h, HEARTS), spades = H.count(h, SPADES), clubs = H.count(h, CLUBS), diamonds = H.count(h, DIAMONDS);
    let bid = 0;
    if (spades > 1) {
      bid = H.atLeast(h, SPADES, 13);
      if (bid) bid = H.atLeast(h, SPADES, 11);
      if (bid > 2 || spades > 4) bid = H.atLeast(h, SPADES, 9);
      if (spades - bid > 2) bid++;
      if ((hearts < 3 || clubs < 3 || diamonds < 3) && spades - bid > 2) bid = spades - 2;
    }
    for (const s of [CLUBS, DIAMONDS, HEARTS]) {
      const len = H.count(h, s);
      for (let r = 14; r >= 2 && H.has(h, s, r); r--) {
        bid++;
        if ((len > 6 && r < 13) || (len > 4 && r < 11)) break;
      }
    }
    if (bid === 0 && (spades > 2 || H.atLeast(h, DIAMONDS, 10) > 1 || H.atLeast(h, HEARTS, 10) > 1 || H.atLeast(h, CLUBS, 10) > 1)) bid = 1;
    else if (bid === 1 && spades < 3 &&
      (H.atLeast(h, DIAMONDS, 11) === 0 || diamonds === 1) && (H.atLeast(h, HEARTS, 11) === 0 || hearts === 1) &&
      (H.atLeast(h, CLUBS, 11) === 0 || clubs === 1)) bid = 0;
    if (this.order.length === 3 && bid > 0 && bid < 5) bid++;
    switch (this.opts.bidding) {
      case 1: return bid ? bid + 1 : 0;
      case 2: return spades;
      case 3: return this.faceCards(h);
      case 4: return diamonds;
      default: return bid;
    }
  }

  bidText(p) {
    const b = this.bids[p];
    return b === null ? '-' : b === 0 ? (this.blind[p] ? 'BN' : 'Nil') : String(b);
  }

  // ---------- rules ----------

  legal(p, c, explain = false) {
    const h = this.hands[p];
    const say = (msg) => { if (explain) this.toast(msg); return false; };
    if (!this.trick.length) {
      if (this.trickNo === 0 && this.opts.lead2c && this.mode !== 'partners' && this.turn === this.twoClubLeader()) {
        const need = H.has(h, CLUBS, 2) ? 2 : 3;
        if (!(c.suit === CLUBS && c.rank === need)) return say('You must lead with the 2 of clubs.');
      }
      if (c.suit === SPADES && !this.spadesBroken && h.some((x) => x.suit !== SPADES))
        return say("Can't lead with a spade.  Spades not broken.");
      return true;
    }
    if (c.suit !== this.ledSuit() && H.count(h, this.ledSuit())) return say('You must follow suit.');
    return true;
  }

  cardPlayed(seat, c) { if (c.suit === SPADES) this.spadesBroken = true; }

  winningEntry() {
    const trumps = this.trick.filter((t) => t.card.suit === SPADES);
    const pool = trumps.length ? trumps : this.trick.filter((t) => t.card.suit === this.ledSuit());
    return pool.reduce((a, b) => (b.card.rank > a.card.rank ? b : a));
  }

  trickWinner() { return this.winningEntry().seat; }

  async handOver() {
    this.phase = 'scoring';
    const lines = [];
    this.teams.forEach((team, t) => {
      let delta = 0;
      const contractors = team.filter((p) => this.bids[p] > 0);
      const contract = contractors.reduce((n, p) => n + this.bids[p], 0);
      const made = contractors.reduce((n, p) => n + this.tricksWon[p], 0);
      let bags = 0;
      for (const p of team.filter((q) => this.bids[q] === 0)) {
        const value = this.blind[p] ? 100 : 50;
        delta += this.tricksWon[p] === 0 ? value : -value;
        bags += this.tricksWon[p];
      }
      if (contract) {
        if (made >= contract) { delta += 10 * contract; bags += made - contract; }
        else delta -= 10 * contract;
      }
      delta += bags;
      this.bags[t] += bags;
      while (this.bags[t] >= 10) { this.bags[t] -= 10; delta -= 100; }
      this.scores[t] += delta;
      const name = this.mode === 'partners' ? (t === 0 ? 'We' : 'They') : SEAT_NAME[team[0]];
      lines.push(`${name}: bid ${team.map((p) => this.bidText(p)).join('+')}, took ${team.reduce((n, p) => n + this.tricksWon[p], 0)} → ${delta >= 0 ? '+' : ''}${delta} = ${this.scores[t]} (bags ${this.bags[t]})`);
    });
    const best = Math.max(...this.scores);
    const leaders = this.teams.filter((_, t) => this.scores[t] === best);
    if (best >= this.opts.target && leaders.length === 1) {
      this.over = true;
      this.phase = 'over';
      const youWin = leaders[0].includes(YOU);
      await this.prompt('Game over', `${lines.join('\n')}\n\n${youWin ? 'You win!' : 'You lose.'}`, [{ label: 'OK', value: 1 }]);
      return;
    }
    await this.prompt(`Hand ${this.handNo + 1}`, lines.join('\n'), [{ label: 'Next hand', value: 1 }]);
    this.handNo++;
    this.dealer = this.next(this.dealer);
    this.startHand();
  }

  // ---------- AI ----------

  // FUN_00019410: does this player (or their side) still need tricks?
  needTricks(p) {
    if (this.bids[p] === 0) return false;
    if (this.tricksWon[p] < this.bids[p]) return true;
    const team = this.teams[this.teamOf(p)].filter((q) => this.bids[q] > 0);
    return team.reduce((n, q) => n + this.tricksWon[q], 0) < team.reduce((n, q) => n + this.bids[q], 0);
  }

  isBoss(c) {
    for (let r = c.rank + 1; r <= 14; r++)
      if (!this.played.some((x) => x.suit === c.suit && x.rank === r)) return false;
    return true;
  }

  aiLead(p) {
    const h = this.hands[p];
    const leadable = (s) => s !== SPADES || this.spadesBroken || h.every((x) => x.suit === SPADES);
    if (this.bids[p] === 0) return H.lowestOverall(h, (s) => !leadable(s)) || H.lowestOverall(h);
    if (this.needTricks(p)) {
      const boss = h.filter((c) => leadable(c.suit) && this.isBoss(c)).sort((a, b) => b.rank - a.rank)[0];
      if (boss) return boss;
      let longest = null;
      for (const s of [CLUBS, DIAMONDS, HEARTS]) if (H.count(h, s) && (!longest || H.count(h, s) > H.count(h, longest))) longest = s;
      if (longest !== null) return H.lowest(h, longest);
    }
    return H.lowestOverall(h, (s) => !leadable(s)) || H.lowestOverall(h);
  }

  // FUN_0001989c
  aiFollow(p) {
    const h = this.hands[p], led = this.ledSuit();
    const win = this.winningEntry();
    const last = this.trick.length === this.order.length - 1;
    const trumped = led !== SPADES && win.card.suit === SPADES;
    const partnerWinning = this.partner(p) === win.seat && this.bids[win.seat] !== 0;
    if (this.bids[p] === 0 || (partnerWinning && (last || this.trick.length > 1)))
      return (trumped ? null : H.highestBelow(h, led, win.card.rank)) || H.lowest(h, led);
    if (!this.needTricks(p)) {
      if (trumped) return H.highest(h, led);
      return H.highestBelow(h, led, win.card.rank) || H.lowest(h, led);
    }
    if (trumped) return H.lowest(h, led);
    if (last) return H.lowestAbove(h, led, win.card.rank) || H.lowest(h, led);
    const top = H.highest(h, led);
    if (top.rank > win.card.rank && (this.isBoss(top) || top.rank < 11)) return top;
    return H.lowest(h, led);
  }

  aiVoid(p) {
    const h = this.hands[p], led = this.ledSuit();
    const win = this.winningEntry();
    const nonSpade = (pick) => H[pick === 'low' ? 'lowestOverall' : 'highestOverall'](h, (s) => s === SPADES);
    const partnerWinning = this.partner(p) === win.seat && this.bids[win.seat] !== 0;
    const partnerNilCover = this.partner(p) !== null && this.bids[this.partner(p)] === 0 && win.seat === this.partner(p);
    if (led !== SPADES && H.count(h, SPADES) && !partnerWinning && (this.needTricks(p) || partnerNilCover) && this.bids[p] !== 0) {
      const over = win.card.suit === SPADES ? win.card.rank : 1;
      const trump = H.lowestAbove(h, SPADES, over);
      if (trump) return trump;
    }
    if (this.bids[p] === 0 || !this.needTricks(p)) return nonSpade('high') || H.highest(h, SPADES);
    return nonSpade('low') || H.lowest(h, SPADES);
  }

  choose(p) {
    const h = this.hands[p];
    let c;
    if (!this.trick.length) {
      const leader = this.opts.lead2c && this.mode !== 'partners' && this.trickNo === 0;
      c = leader ? h.find((x) => x.suit === CLUBS && x.rank === (H.has(h, CLUBS, 2) ? 2 : 3)) : null;
      c = c || this.aiLead(p);
    } else if (H.count(h, this.ledSuit())) c = this.aiFollow(p);
    else c = this.aiVoid(p);
    if (!c || !this.legal(p, c)) c = [...h].reverse().find((x) => this.legal(p, x)) || h[0];
    return c;
  }

  // ---------- input & drawing ----------

  down(x, y) {
    if (this.phase === 'over') { this.newGame(); return; }
    if (this.phase === 'trickDone' && this.opts.tapTrick) { this.timer = 0; return; }
    const c = this.handHit(x, y);
    if (this.phase === 'play' && this.turn === YOU && c && this.legal(YOU, c, true)) this.play(YOU, c);
  }

  scoreLine(seat) {
    if (!this.bids) return '';
    return `${this.bidText(seat)}/${this.tricksWon?.[seat] ?? 0}`;
  }

  draw(ctx) {
    this.drawTable(ctx);
    ctx.fillStyle = '#fff';
    ctx.font = '9px Tahoma, sans-serif';
    ctx.textAlign = 'right';
    this.teams.forEach((team, t) => {
      const name = this.mode === 'partners' ? (t === 0 ? 'We' : 'They') : team.map((p) => SEAT_NAME[p]).join('');
      ctx.fillText(`${name} ${this.scores[t]}`, 238, 9 + 10 * t);
    });
    ctx.textAlign = 'left';
    if (this.over && this.teams[this.teamOf(YOU)] && this.scores[this.teamOf(YOU)] === Math.max(...this.scores)) {
      this.banner.tick(16, 41);
      this.banner.draw(this.spr, ctx);
    }
  }
}
