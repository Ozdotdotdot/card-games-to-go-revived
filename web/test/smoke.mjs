// Headless smoke test: plays many full Hearts and Spades games (AI in every seat) and
// War games, checking invariants. Run: node web/test/smoke.mjs
import assert from 'node:assert/strict';
import Hearts from '../js/hearts.js';
import Spades from '../js/spades.js';
import War from '../js/war.js';
import { YOU } from '../js/tricks.js';

const env = (G, opts = {}) => {
  const o = {};
  for (const x of G.options) o[x.key] = x.default;
  return { spr: null, sound: { play() {} }, toast() {}, opts: { ...o, delay: 0, ...opts }, prompt: async (t, m, b) => b[b.length - 1].value };
};

async function runTricks(G, opts, games) {
  let hands = 0;
  for (let n = 0; n < games; n++) {
    const g = new G(env(G, opts));
    g.newGame();
    for (let steps = 0; steps < 200000 && !g.over; steps++) {
      await new Promise((r) => setImmediate(r));
      if (g.phase === 'pass') {
        g.selected = new Set(g.choosePass(YOU));
        g.doPass();
        for (const p of g.order) assert.equal(g.hands[p].length, 13);
      } else if (g.phase === 'play') {
        const p = g.turn;
        const c = g.choose(p);
        assert.ok(g.hands[p].includes(c), 'AI chose a card it does not hold');
        assert.ok(g.legal(p, c), `illegal AI play ${JSON.stringify(c)}`);
        const before = g.trickNo;
        g.play(p, c);
        if (g.phase === 'trickDone') { g.takeTrick(); if (g.trickNo === before) throw new Error('trick not taken'); }
        if (g.phase === 'scoring') hands++;
      }
    }
    assert.ok(g.over, `${G.title} game did not finish`);
  }
  return hands;
}

const h1 = await runTricks(Hearts, {}, 30);
const h2 = await runTricks(Hearts, { difficulty: 2, jd: true, jdMoon: true, pass: 'LR', lead2c: false, pointsFirst: true, sun: true }, 20);
const s1 = await runTricks(Spades, {}, 15);
const s2 = await runTricks(Spades, { mode: 'ind3', lead2c: true, target: 300 }, 10);
const s3 = await runTricks(Spades, { mode: 'ind2', bidding: 1, target: 300 }, 10);
console.log(`hearts hands ok: ${h1 + h2}, spades hands ok: ${s1 + s2 + s3}`);

for (let n = 0; n < 200; n++) {
  const g = new War(env(War, { goal: n % 2 ? 0 : 3 }));
  g.newGame();
  for (let steps = 0; steps < 100000 && g.state !== 'over'; steps++) {
    if (g.state === 'compTurn' || g.state === 'collect') g.tick(10000);
    else if (g.state === 'youTurn') { g.lay(g.you, g.youTable, g.pending); g.resolve(); }
    const total = g.comp.length + g.you.length + g.compTable.length + g.youTable.length;
    assert.equal(total, 52, 'War lost or duplicated cards');
  }
}
console.log('war games ok: 200');
