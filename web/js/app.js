import { Sprites, Sound, W } from './engine.js';
import Klondike from './klondike.js';
import Spider from './spider.js';
import Golf from './golf.js';
import Hearts from './hearts.js';
import Spades from './spades.js';
import War from './war.js';

const GAMES = [Klondike, Spider, Golf, Hearts, Spades, War];

const canvas = document.getElementById('screen');
const ctx = canvas.getContext('2d');
const toastEl = document.getElementById('toast');
const sound = new Sound();

let game = null;
let GameClass = null;

// ---------- persistence ----------

function store(key, value) {
  try {
    if (value === undefined) return JSON.parse(localStorage.getItem(key));
    localStorage.setItem(key, JSON.stringify(value));
  } catch { return null; }
}

function loadOptions(G) {
  const saved = store(`opts:${G.id}`) || {};
  const opts = {};
  for (const o of G.options) opts[o.key] = o.key in saved ? saved[o.key] : o.default;
  return opts;
}

// ---------- UI helpers given to games ----------

let toastTimer = 0;
function toast(msg, ms = 1800) {
  toastEl.textContent = msg;
  toastEl.hidden = false;
  clearTimeout(toastTimer);
  toastTimer = setTimeout(() => { toastEl.hidden = true; }, ms);
}

function prompt(title, text, buttons) {
  const dlg = document.getElementById('prompt-dialog');
  document.getElementById('prompt-title').textContent = title;
  document.getElementById('prompt-text').textContent = text;
  const box = document.getElementById('prompt-buttons');
  box.replaceChildren(...buttons.map((b) => {
    const el = document.createElement('button');
    el.value = String(b.value);
    el.textContent = b.label;
    return el;
  }));
  return new Promise((resolve) => {
    dlg.onclose = () => {
      const hit = buttons.find((b) => String(b.value) === dlg.returnValue);
      resolve(hit ? hit.value : buttons[buttons.length - 1].value);
    };
    dlg.showModal();
  });
}

// ---------- layout ----------

function fit() {
  if (!GameClass) return;
  const h = GameClass.height;
  canvas.width = W;
  canvas.height = h;
  const main = canvas.parentElement.getBoundingClientRect();
  let s = Math.min((main.width - 8) / W, (main.height - 8) / h);
  if (s >= 2) s = Math.floor(s);
  canvas.style.width = `${Math.floor(W * s)}px`;
  canvas.style.height = `${Math.floor(h * s)}px`;
}

function toLogical(e) {
  const r = canvas.getBoundingClientRect();
  return [((e.clientX - r.left) * W) / r.width, ((e.clientY - r.top) * GameClass.height) / r.height];
}

// ---------- game switching ----------

async function start(G) {
  GameClass = G;
  store('last-game', G.id);
  for (const b of document.querySelectorAll('nav button')) b.setAttribute('aria-pressed', b.dataset.id === G.id);
  document.getElementById('undo').hidden = !G.prototype.undo;
  fit();
  const spr = new Sprites(G.id);
  game = new G({ spr, opts: loadOptions(G), sound, toast, prompt });
  await game.load();
  game.newGame();
}

const nav = document.getElementById('games');
for (const G of GAMES) {
  const b = document.createElement('button');
  b.textContent = G.title;
  b.dataset.id = G.id;
  b.onclick = () => { if (G !== GameClass) start(G).catch(showError); };
  nav.append(b);
}

function showError(err) {
  console.error(err);
  ctx.fillStyle = '#000';
  ctx.fillRect(0, 0, canvas.width, canvas.height);
  ctx.fillStyle = '#fff';
  ctx.font = '10px sans-serif';
  const words = String(err.message || err).split(' ');
  let line = '', y = 20;
  for (const w of words) {
    if (ctx.measureText(line + w).width > 220) { ctx.fillText(line, 10, y); line = ''; y += 14; }
    line += w + ' ';
  }
  ctx.fillText(line, 10, y);
}

// ---------- toolbar ----------

document.getElementById('new').onclick = () => game?.newGame(true);
document.getElementById('undo').onclick = () => game?.undo?.();
const soundBtn = document.getElementById('sound');
sound.on = store('sound') ?? true;
soundBtn.setAttribute('aria-pressed', sound.on);
soundBtn.onclick = () => {
  sound.on = !sound.on;
  store('sound', sound.on);
  soundBtn.setAttribute('aria-pressed', sound.on);
};

document.getElementById('help').onclick = () => {
  document.getElementById('help-frame').src = `assets/help/${GameClass.id}.htm`;
  document.getElementById('help-dialog').showModal();
};

document.getElementById('opts').onclick = () => {
  const dlg = document.getElementById('options-dialog');
  document.getElementById('options-title').textContent = `${GameClass.title} options`;
  const fields = document.getElementById('options-fields');
  fields.replaceChildren(...GameClass.options.map((o) => {
    const row = document.createElement('label');
    row.className = 'field';
    row.append(o.label);
    let input;
    if (o.choices) {
      input = document.createElement('select');
      for (const [value, label] of o.choices) input.append(new Option(label, JSON.stringify(value)));
      input.value = JSON.stringify(game.opts[o.key]);
    } else {
      input = document.createElement('input');
      input.type = 'checkbox';
      input.checked = !!game.opts[o.key];
    }
    input.name = o.key;
    row.append(input);
    return row;
  }));
  dlg.onclose = () => {
    if (dlg.returnValue !== 'ok') return;
    const before = { ...game.opts };
    for (const o of GameClass.options) {
      const el = fields.querySelector(`[name="${o.key}"]`);
      game.opts[o.key] = o.choices ? JSON.parse(el.value) : el.checked;
    }
    store(`opts:${GameClass.id}`, game.opts);
    game.optionsChanged?.(before);
  };
  dlg.showModal();
};

addEventListener('keydown', (e) => {
  if (document.querySelector('dialog[open]')) return;
  if (e.key === 'n' || e.key === 'N') game?.newGame(true);
  else if (e.key === 'u' || e.key === 'U' || ((e.ctrlKey || e.metaKey) && e.key === 'z')) game?.undo?.();
  else game?.key?.(e.key);
});

// ---------- pointer input ----------

let lastDown = { t: 0, x: -99, y: -99 };
canvas.addEventListener('pointerdown', (e) => {
  if (!game) return;
  canvas.setPointerCapture(e.pointerId);
  const [x, y] = toLogical(e);
  const dbl = e.timeStamp - lastDown.t < 400 && Math.hypot(x - lastDown.x, y - lastDown.y) < 6;
  lastDown = dbl ? { t: 0, x: -99, y: -99 } : { t: e.timeStamp, x, y };
  game.down(x, y, dbl);
});
canvas.addEventListener('pointermove', (e) => { if (game) game.move?.(...toLogical(e)); });
canvas.addEventListener('pointerup', (e) => { if (game) game.up?.(...toLogical(e)); });
canvas.addEventListener('pointercancel', (e) => { if (game) game.up?.(...toLogical(e)); });

// ---------- main loop ----------

let last = performance.now();
function frame(now) {
  const dt = Math.min(100, now - last);
  last = now;
  if (game?.ready) {
    try {
      game.tick?.(dt);
      game.draw(ctx);
    } catch (err) { showError(err); game.ready = false; }
  }
  requestAnimationFrame(frame);
}

addEventListener('resize', fit);
const initial = GAMES.find((G) => G.id === (new URLSearchParams(location.search).get('game') || store('last-game'))) || Klondike;
start(initial).catch(showError);
requestAnimationFrame(frame);
