// Hearts — rules from the help file, AI decoded from 00Hearts.008 (FUN_00016bfc and helpers).
import { Banner, BACK_CHOICES } from './klondike.js';
import { ACROSS, DELAYS, H, LEFT, RIGHT, SEAT_LETTER, SEAT_NAME, TrickGame, YOU } from './tricks.js';

const CLUBS = 0, DIAMONDS = 1, HEARTS = 2, SPADES = 3, QUEEN = 12, JACK = 11;
const isQS = (c) => c.suit === SPADES && c.rank === QUEEN;
const isJD = (c) => c.suit === DIAMONDS && c.rank === JACK;
const isPoint = (c) => c.suit === HEARTS || isQS(c);        // FUN_00018340
const PASS_CYCLES = { L: ['L'], LR: ['L', 'R'], LRAH: ['L', 'R', 'A', 'H'], none: ['H'] };

export default class Hearts extends TrickGame {
  static id = 'hearts';
  static title = 'Hearts';
  static options = [
    { key: 'difficulty', label: 'Opponent level', choices: [[0, 'Easy'], [1, 'Medium'], [2, 'Hard (peeks at hands)']], default: 1 },
    { key: 'pass', label: 'Pass cards', choices: [['L', 'L'], ['LR', 'L-R'], ['LRAH', 'L-R-A-H'], ['none', "don't"]], default: 'LRAH' },
    { key: 'lead2c', label: 'Hand led by player with 2♣ (else left of dealer)', default: true },
    { key: 'mustBreak', label: 'Hearts must be broken before led', default: true },
    { key: 'qsBreaks', label: 'Queen of Spades breaks hearts', default: false },
    { key: 'pointsFirst', label: 'Points allowed on first trick', default: false },
    { key: 'jd', label: 'J♦ counts -10', default: false },
    { key: 'jdMoon', label: 'J♦ must be won to shoot the moon', default: false },
    { key: 'sun', label: 'Shooting the Sun worth 52 pts', default: false },
    { key: 'delay', label: 'Delay between cards played', choices: DELAYS, default: 450 },
    { key: 'tapTrick', label: 'Tap before taking trick', default: false },
    { key: 'back', label: 'Card style', choices: BACK_CHOICES, default: -1 },
    { key: 'cheat', label: 'Cheat mode (show all hands)', default: false },
  ];

  constructor(env) {
    super(env);
    this.banner = new Banner(204, 140);
  }

  newGame() {
    this.scores = [0, 0, 0, 0];
    this.dealer = ACROSS;            // "The first dealer of each game will always be the player across"
    this.handNo = 0;
    this.over = false;
    this.banner.reset();
    this.startHand();
  }

  startHand() {
    this.dealHands(13);
    const r = this.rng.mod(5);
    this.back = this.opts.back < 0 ? r : this.opts.back;
    this.points = [0, 0, 0, 0];
    this.heartsBroken = false;
    this.qsPlayed = false;
    this.jdPlayed = false;
    this.wonJD = -1;
    this.moon =[0, 1, 2, 3].map((p) => p !== YOU && this.strongHand(this.hands[p]));
    const cycle = PASS_CYCLES[this.opts.pass];
    this.passDir = cycle[this.handNo % cycle.length];
    if (this.passDir === 'H') this.beginPlay();
    else this.phase = 'pass';
  }

  passTarget(p) {
    return { L: this.next(p), R: this.next(this.next(this.next(p))), A: this.next(this.next(p)) }[this.passDir];
  }

  // FUN_00015e84: a long suit, three tens-or-better in a suit and two Aces → try to shoot the moon.
  strongHand(h) {
    const long = [0, 1, 2, 3].some((s) => H.count(h, s) > 4);
    const highs = [0, 1, 2, 3].some((s) => H.atLeast(h, s, 10) > 2);
    return long && highs && h.filter((c) => c.rank === 14).length > 1;
  }

  // FUN_00015fb4
  choosePass(p) {
    const h = this.hands[p], out = [];
    const take = (cards) => { for (const c of cards) if (out.length < 3 && !out.includes(c)) out.push(c); };
    if (this.moon[p]) {
      for (let r = 2; r <= 14 && out.length < 3; r++)
        for (const s of [CLUBS, DIAMONDS, SPADES, HEARTS]) take(h.filter((c) => c.suit === s && c.rank === r));
    } else {
      take(h.filter((c) => c.suit === SPADES && c.rank >= QUEEN).reverse());   // Q♠ first
      take(h.filter((c) => c.suit === HEARTS && c.rank >= 9));
      for (const s of [CLUBS, DIAMONDS, SPADES]) take(h.filter((c) => c.suit === s));
    }
    return out;
  }

  doPass() {
    const passes = this.order.map((p) => [p, p === YOU ? [...this.selected] : this.choosePass(p)]);
    for (const [p, cards] of passes)
      for (const c of cards) this.hands[p].splice(this.hands[p].indexOf(c), 1);
    for (const [p, cards] of passes) this.hands[this.passTarget(p)].push(...cards);
    this.hands.forEach((h) => h.sort((a, b) => a.suit - b.suit || b.rank - a.rank));
    this.selected = new Set(passes.find(([p]) => this.passTarget(p) === YOU)[1]);   // show what you received
    for (const p of this.order) if (p !== YOU) this.moon[p] = this.strongHand(this.hands[p]);
    this.beginPlay();
  }

  // FUN_0001665c
  beginPlay() {
    this.phase = 'play';
    this.turn = this.opts.lead2c ? this.order.find((p) => H.has(this.hands[p], CLUBS, 2)) : this.next(this.dealer);
    this.timer = 600;
  }

  // ---------- rules ----------

  legal(p, c, explain = false) {
    const h = this.hands[p];
    const say = (msg) => { if (explain) this.toast(msg); return false; };
    if (!this.trick.length) {
      if (this.trickNo === 0 && this.opts.lead2c && H.has(h, CLUBS, 2) && !(c.suit === CLUBS && c.rank === 2))
        return say('You must lead with the 2 of clubs.');
      if (c.suit === HEARTS && !this.heartsBroken && this.opts.mustBreak && h.some((x) => x.suit !== HEARTS))
        return say("Can't lead with a heart.  Hearts not broken.");
      return true;
    }
    const led = this.ledSuit();
    if (c.suit !== led && H.count(h, led)) return say('You must follow suit.');
    if (this.trickNo === 0 && !this.opts.pointsFirst && isPoint(c) && h.some((x) => !isPoint(x) && (x.suit === led || !H.count(h, led))))
      return say('Point cards not allowed on first trick.');
    return true;
  }

  cardPlayed(seat, c) {
    if (c.suit === HEARTS || (isQS(c) && this.opts.qsBreaks)) this.heartsBroken = true;
    if (isQS(c)) this.qsPlayed = true;
    if (isJD(c)) this.jdPlayed = true;
    if (seat === YOU) this.selected.clear();
  }

  trickWinner() {
    const led = this.ledSuit();
    return this.trick.filter((t) => t.card.suit === led).reduce((a, b) => (b.card.rank > a.card.rank ? b : a)).seat;
  }

  cardPoints(c) { return c.suit === HEARTS ? 1 : isQS(c) ? 13 : isJD(c) && this.opts.jd ? -10 : 0; }

  // FUN_000193c4: scoring, plus the moon flags it maintains.
  trickTaken(w, cards) {
    const pts = cards.reduce((n, c) => n + this.cardPoints(c), 0);
    this.points[w] += pts;
    if (pts > 0) for (const p of this.order) if (p !== w) this.moon[p] = false;
    if (this.points[w] > 16 && this.othersPoints(w) === 0) this.moon[w] = true;
  }

  othersPoints(p) { return this.order.reduce((n, q) => n + (q === p ? 0 : this.points[q]), 0); }

  async handOver() {
    this.phase = 'scoring';
    const hearts = (p) => this.hands && this.played.length && this.tookAllPoints(p);
    const shooter = this.order.find((p) => hearts(p));
    let add = [...this.points];
    if (shooter !== undefined) {
      const sun = this.opts.sun && this.tricksWon[shooter] === 13;
      const value = sun ? 52 : 26;
      const jd = (p) => (this.opts.jd && this.wonJD === p ? -10 : 0);   // the J♦ still counts for whoever took it
      add = [0, 0, 0, 0];
      let addToOthers = true;
      if (shooter === YOU) {
        addToOthers = await this.prompt('Congratulations !', `You shot the ${sun ? 'sun' : 'moon'} and earned ${value} points. Select how to use your points:`,
          [{ label: 'Deduct from Your Score', value: false }, { label: 'Add to Opponent Scores', value: true }]);
      } else this.toast(`${SEAT_NAME[shooter]} shot the ${sun ? 'sun' : 'moon'}!`, 2500);
      for (const p of this.order) add[p] = (p === shooter ? (addToOthers ? 0 : -value) : addToOthers ? value : 0) + jd(p);
    }
    for (const p of this.order) this.scores[p] += add[p];
    const table = this.order.map((p) => `${SEAT_NAME[p]}: ${add[p] >= 0 ? '+' : ''}${add[p]} → ${this.scores[p]}`).join('\n');
    const max = Math.max(...this.scores), min = Math.min(...this.scores);
    const leaders = this.order.filter((p) => this.scores[p] === min);
    if (max >= 100 && leaders.length === 1) {
      this.over = true;
      this.phase = 'over';
      await this.prompt('Game over', `${table}\n\n${leaders[0] === YOU ? 'You win!' : `${SEAT_NAME[leaders[0]]} wins.`}`, [{ label: 'OK', value: 1 }]);
      return;
    }
    await this.prompt(`Hand ${this.handNo + 1}`, table, [{ label: 'Next hand', value: 1 }]);
    this.handNo++;
    this.dealer = this.next(this.dealer);
    this.startHand();
  }

  tookAllPoints(p) {
    const total = this.points[p] - (this.opts.jd && this.wonJD === p ? -10 : 0);
    if (total !== 26) return false;
    return !(this.opts.jd && this.opts.jdMoon) || this.wonJD === p;
  }

  takeTrick() {
    if (this.trick.some((t) => isJD(t.card))) this.wonJD = this.trickWinner();
    super.takeTrick();
  }

  // ---------- AI ----------

  // FUN_000172f4: will this lead lose the trick? Hard mode looks at the other hands.
  safeLead(p, c) {
    const h = this.hands[p];
    if (H.count(h, c.suit) + this.played.filter((x) => x.suit === c.suit).length === 13) return false;
    const lowerGone = this.played.filter((x) => x.suit === c.suit && x.rank < c.rank).length;
    if (lowerGone === c.rank - 2) return true;
    if (this.opts.difficulty === 2)
      for (const q of this.order)
        if (q !== p) { const low = H.lowest(this.hands[q], c.suit); if (low && low.rank > c.rank) return true; }
    return false;
  }

  // FUN_000170b8: is this card certain to win the trick?
  sureWinner(p, c) {
    const h = this.hands[p];
    if (this.trick.length && c.suit !== this.ledSuit()) return false;
    if (this.trick.some((t) => t.card.suit === c.suit && t.card.rank > c.rank)) return false;
    if (c.rank === 14) return true;
    const others = this.order.filter((q) => q !== p);
    if (this.opts.difficulty === 2)
      return !others.some((q) => this.hands[q].some((x) => x.suit === c.suit && x.rank > c.rank));
    for (let r = c.rank + 1; r <= 14; r++)
      if (!this.played.some((x) => x.suit === c.suit && x.rank === r) && !H.has(h, c.suit, r)) return false;
    return true;
  }

  // FUN_000183dc: is someone else on course to shoot the moon?
  antiMoon(p) {
    if (this.trickNo <= [6, 3, 1][this.opts.difficulty]) return false;
    for (const q of this.order) {
      if (q === p || !this.moon[q] || this.points[q] === 0) continue;
      const rest = this.othersPoints(q);
      if (rest === 0 || (!this.opts.jdMoon && rest === -10)) {
        return !(this.trick.length && this.trickWinner() === q);
      }
    }
    return false;
  }

  everyoneHas(s) { return this.order.every((q) => H.count(this.hands[q], s) > 0); }

  noHeartLead() { return !this.heartsBroken && this.opts.mustBreak; }

  // FUN_000174f4
  aiLead(p) {
    const h = this.hands[p], o = this.opts;
    let c = null;
    if (!this.moon[p] && !this.antiMoon(p)) {
      if (H.atLeast(h, SPADES, QUEEN) === 0 && !this.qsPlayed) {      // FUN_00017464: flush out Q♠
        c = H.highestBelow(h, SPADES, QUEEN);
        if (c) return c;
      }
      let safe = null;
      for (const x of h) {
        if (x.suit === HEARTS && this.noHeartLead()) continue;
        if (o.jd && isJD(x)) continue;
        if (this.safeLead(p, x)) { if (x.suit === HEARTS) return x; safe = x; }
      }
      if (safe) return safe;
      const holdsTopSpade = [12, 13, 14].some((r) => H.has(h, SPADES, r));
      if (holdsTopSpade && !this.qsPlayed) c = H.lowestOverall(h, (s) => s === SPADES);
      if (!c) c = this.noHeartLead() ? H.lowestOverall(h, (s, low) => s === HEARTS || isQS(low)) : H.lowestOverall(h);
    } else {
      // FUN_00016f50: lead the lowest card that is sure to win.
      for (const x of h) {
        if (x.suit === HEARTS && this.noHeartLead()) continue;
        if (this.sureWinner(p, x) && (!c || x.rank < c.rank)) c = x;
      }
      if (!c) for (const s of [CLUBS, DIAMONDS, SPADES]) {
        if (s === SPADES && !this.qsPlayed) continue;
        if (this.everyoneHas(s)) { c = H.lowest(h, s); if (c) break; }
      }
      if (!c && this.moon[p]) c = this.noHeartLead() ? H.highestOverall(h, (s) => s === HEARTS) : H.highestOverall(h);
      if (!c) c = H.lowestOverall(h);
    }
    if (c && c.suit === HEARTS && this.noHeartLead())
      c = (this.moon[p] ? H.highestOverall(h, (s) => s === HEARTS) : H.lowestOverall(h, (s) => s === HEARTS)) || c;
    return c;
  }

  // FUN_00017c80
  aiFollow(p) {
    const h = this.hands[p], o = this.opts, led = this.ledSuit();
    const win = this.trick.filter((t) => t.card.suit === led).reduce((a, b) => (b.card.rank > a.card.rank ? b : a)).card;
    const last = this.trick.length === this.order.length - 1;
    const pointsOnTable = this.trick.some((t) => isPoint(t.card));
    const jdLive = o.jd && !this.jdPlayed;
    if (!this.moon[p] && !this.antiMoon(p)) {
      if (jdLive && last && led === DIAMONDS && win.rank <= 10 && H.has(h, DIAMONDS, JACK) && !this.trick.some((t) => isQS(t.card)))
        return h.find(isJD);
      if (last && H.atLeast(h, led, JACK) > 0 && !pointsOnTable && !(led === SPADES && H.has(h, SPADES, QUEEN)) && !(jdLive && led === DIAMONDS))
        return H.highest(h, led);
      if (led === SPADES && win.rank > QUEEN && H.has(h, SPADES, QUEEN)) return h.find(isQS);
      let c = H.highestBelow(h, led, jdLive && led === DIAMONDS ? JACK : win.rank);
      if (c) return c;
      c = last ? h.find((x) => x.suit === led && !isQS(x)) || H.highest(h, led) : H.lowest(h, led);
      if (!this.qsPlayed && this.trick.length <= 2 && led === SPADES && c.rank >= 13 && !H.has(h, SPADES, QUEEN))
        c = H.highestBelow(h, SPADES, QUEEN) || c;
      return c;
    }
    if (last) {
      if (led === DIAMONDS && win.rank < JACK && o.jd && H.has(h, DIAMONDS, JACK)) return h.find(isJD);
      return H.lowestAbove(h, led, win.rank) || H.lowest(h, led);
    }
    return H.highest(h, led);
  }

  // FUN_00018154
  aiDiscard(p) {
    const h = this.hands[p], o = this.opts;
    const firstTrickClean = !o.pointsFirst && this.trickNo === 0;
    let c;
    if (!h.some(isPoint) || firstTrickClean) {
      if (!this.qsPlayed && H.atLeast(h, SPADES, QUEEN) > 0) c = H.highest(h, SPADES);
      else {
        if (o.jd && !this.jdPlayed) c = H.highestOverall(h, (s, x) => s === DIAMONDS && x.rank >= JACK);
        if (!c) c = H.highestOverall(h);
      }
    } else c = h.find(isQS) || H.highest(h, HEARTS);
    if (c && isPoint(c) && firstTrickClean)
      c = H.highestOverall(h, (s) => s === HEARTS, (s) => h.find((x) => x.suit === s && !isQS(x) && !(o.jd && isJD(x)))) || c;
    return c;
  }

  // FUN_00016bfc
  choose(p) {
    const h = this.hands[p];
    let c;
    if (!this.trick.length) c = this.trickNo === 0 && this.opts.lead2c && H.has(h, CLUBS, 2) ? h.find((x) => x.suit === CLUBS && x.rank === 2) : this.aiLead(p);
    else if (H.count(h, this.ledSuit())) c = this.aiFollow(p);
    else {
      const clean = !this.trick.some((t) => isPoint(t.card));
      if ((this.moon[p] && clean) || this.antiMoon(p))
        c = H.lowestOverall(h, (s, low) => s === HEARTS || isQS(low));
      if (!c) c = this.aiDiscard(p);
    }
    if (!c || !this.legal(p, c)) c = [...h].reverse().find((x) => this.legal(p, x)) || h[0];
    return c;
  }

  // ---------- input & drawing ----------

  down(x, y) {
    if (this.phase === 'over') { this.newGame(); return; }
    if (this.phase === 'trickDone' && this.opts.tapTrick) { this.timer = 0; return; }
    const c = this.handHit(x, y);
    if (this.phase === 'pass') {
      if (c) {
        if (this.selected.has(c)) this.selected.delete(c);
        else if (this.selected.size < 3) this.selected.add(c);
      } else if (this.selected.size === 3 && y > 60 && y < 215) this.doPass();
      return;
    }
    if (this.phase === 'play' && this.turn === YOU && c && this.legal(YOU, c, true)) this.play(YOU, c);
  }

  scoreLine(seat) { return String(this.points?.[seat] ?? 0); }   // current hand, as the original showed

  draw(ctx) {
    this.drawTable(ctx);
    if (this.phase === 'pass') {
      const dir = { L: 'left', R: 'right', A: 'across' }[this.passDir];
      this.caption(ctx, this.selected.size === 3 ? `Tap here to pass ${dir}` : `Select 3 cards to pass ${dir}`);
    } else if (this.phase === 'play' && this.turn === YOU && !this.trick.length && this.trickNo === 0 && this.selected.size) {
      this.caption(ctx, 'Cards passed to you are raised');
    }
    if (this.over && this.scores[YOU] === Math.min(...this.scores)) {
      this.banner.tick(16, 41);
      this.banner.draw(this.spr, ctx);
    }
  }
}

export { SEAT_LETTER, LEFT, RIGHT };
