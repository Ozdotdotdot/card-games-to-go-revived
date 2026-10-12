# Reverse-engineering notes

Targets: the six Windows CE 3.0 / ARMv4 executables in the ARM `.CAB` of "Solitaire and Card
Games To Go" (2002, Don Turner, www.FixedIt.com), all MFC apps (`mfcce300.dll`). Analysed with
REA 6.4.0 + Ghidra 12.1.2. `tools/DecompileAll.java` decompiles every function and also recovers
MFC message handlers that auto-analysis misses, by scanning for `stmdb sp!,{..,lr}` prologues.
Addresses below are Ghidra's labels in each executable.

All six games share one shuffle (`srand(GetTickCount())`, then each card goes into the slot
`rand() % n`, re-rolling until the slot is empty), a card record (12 bytes in Klondike/Golf, 8 elsewhere)
with **Ace = 14**, and CE `TransparentImage` sprites keyed on green (cards) or white (glyphs).

# Klondike (`Klondike.009`)

Leaf functions have no LR-saving prologue, so a few are labelled
8 bytes past their true entry (e.g. tableau predicate `FUN_000141dc`, real entry `0x141d4`).

## Game state (one 0xDF4-byte object)

| Offset  | Meaning |
|---------|---------|
| `+0x000` | Stock: `u32` + 52 × card + `u16` (unused) + `u16 count`; top card is index 0 |
| `+0x278` | Waste: same pile type; new cards appended at the end |
| `+0x4f0` | 7 tableau columns, 0xE8 bytes each (max 19 cards, `u16 count` at +0xE4) |
| `+0xb48` | 4 foundations, 0xA4 bytes each (`u16 count` at +0xA0) |
| `+0xdd8` | Card back index 0–4 (`rand() % 5` at New Game) |
| `+0xddc` | Number of selected cards |
| `+0xde0` | Build mode: 0 undecided, 1 same suit, 2 alternating colour |
| `+0xde4` | Raster op for moving cards (`0xCC0020` SRCCOPY = "Normal") |
| `+0xde8` | Cards drawn from stock (default 3) |

Card (12 bytes): `+0 u32 suit` (0 ♣, 1 ♦, 2 ♥, 3 ♠), `+4 u16 rank` (**2–14, Ace = 14**),
`+7 u8 face_down`, `+8 u8 selected`, `+10 u8 visible-in-waste-fan`.

## Rules

- **Shuffle** (`FUN_000146c8`): `srand(GetTickCount())`; for each card of the sorted deck pick
  `rand() % 52`, re-rolling until that slot of a temp deck is empty. Uniform, but rejection-based.
- **Deal** (`FUN_00014e88`): column by column (not row by row); column *c* takes *c*+1 cards
  from the top of the stock, only the last face up. 28 dealt, 24 left in stock.
- **Stock** (`FUN_00017400`): draw `min(draw_count, stock)` to waste; only that batch shows in
  the fan. Empty stock → whole waste returns in original order. Unlimited redeals.
- **Foundation** (`FUN_000142e0`): empty takes Ace; else same suit and rank = top + 1
  (special case: 2 on Ace because Ace is 14). A foundation's top card may move back to the tableau.
- **Tableau** (`FUN_000141dc`): rank = target − 1, and the **first successful build of the game
  locks the build mode** — same suit or alternating colour — for the rest of the game
  (confirmed by the game's help file). Empty column takes only a King.
- **Quirk (static analysis, unverified at runtime)**: with Ace = 14 the tableau predicate accepts
  a King onto a face-up Ace, and the move handler (`FUN_00015e38`) has no extra guard.
- **Undo**: whole 0xDF4-byte state snapshotted before each move — single level.
- **Win** (`FUN_000178dc`): all four foundations hold 13 cards → "You Won !!!" banner.

## Drawing (`FUN_0001753c`, via CE `TransparentImage`)

Screen 240×320. Card 30×42. Bitmap IDs: 130 blank (key green), 136–139 suits, 140–152 black
ranks 2…A, 153–165 red, 166–178 / 179–191 rotated black/red, 192/194/195 rotated ♣♥♠
(♦ reuses 137), 200 board, 204 "You Won", 250–254 backs. Glyph key white.
Face: rank (+2,+2), suit (+17,+2), rotated rank (+19,+31), rotated suit (+4,+31).
Layout: stock (3,8) drawn 1/2/3 thick (>5, >11 cards, +3px each); foundations x = 105 + 34i,
y 8; tableau x = 3 + 34c, y 65, face-down step 4px, face-up step 12px; waste fan step 10px
(waste origin (37,8) inferred from the board bitmap, not read from code).

# Golf (`0000Golf.007`)

- **Deal** (`FUN_0001468c`): 7 columns × 5 cards, all face up, column by column; 17 left in stock.
- **Discard rule** (`FUN_00013a5c`): empty discard takes anything; otherwise one rank up or down,
  any suit. A↔2 both ways, no wrap between K and A, and nothing on a King unless
  "Allow Queen on King" (`+0xb4b`).
- Score = cards left on the tableau (white LED digits 290–299 at (45,1)); stock count in red
  digits 280–289 at (14,227). Default back is #2, the golf green. Sound 212 on every move.
- Discard pile is fanned and wraps onto new rows (`FUN_00014fdc`); exact spacing is runtime data.

# Spider (`00Spider.011`)

- **Deck** (`FUN_00014718`): two decks; difficulty 0 = one suit chosen by `rand() % 4`,
  1 = clubs and diamonds, 2 = all four (default).
- **Deal** (`FUN_00015460`): row by row — four face-down rows across 10 columns, a fifth only on
  columns 0–3, then one face-up row. 54 dealt, 50 in stock.
- **Build** (`FUN_00014658`): any suit, one rank lower; Ace onto a 2; nothing onto an Ace.
- **Completed suit** (`FUN_00015ca8`): 13 face-up cards K…A of one suit at the end of a column.
  Completed suits are drawn as Kings at x = 40 + 17i next to the spider (`FUN_00016244`).
- Small 22×31 cards (`FUN_00016dac`): blank 131, backs 132–136 (default #2, the spider),
  5×8 ranks (black 146/160 rotated, red 174/188), 7×7 suits 137–140, rotated 141/143/144.
- Columns at x = 1 + 24c, y = 10; face-down step 4, face-up step shrinks per column.

# War (`00000War.012`)

- 45×63 cards (`FUN_000124ec`): blank 193; corner indices only on number cards; Aces get a big
  suit (218+), J/Q/K get portraits (230+/226+/222+). Backs 130–132.
- Layout (`FUN_00011cf8`): computer deck (98,10), yours (98,197), card counts in LED digits
  198–207, wars won as "WAR" tags (217). Played cards run right from (120,83) for the computer
  and left from (75,124) for you (`FUN_00012360`). Banners at fixed spots (`FUN_00013ebc`).
- Eight characters: PFC Joe, Sgt Joe, Cpt Joe, Gen Joe, PFC Jane, PVT Jill, Cpt Jane, Gen Jane;
  the computer's is `rand() % 8`. The last hand's winner gets a grin (216).
- Sounds: 237 card flip, 235 "WAR!", 236 draw (CE `PlaySound`).
- Portrait positions are runtime data; the port places them beside each deck.

# Hearts (`00Hearts.008`)

Seats: 0 Across, 1 Right, 2 You, 3 Left; play passes 2→3→0→1 (clockwise). Hand layout
(`FUN_00018ab4`) and trick positions (`FUN_000199e0`) are shared with Spades. Card corners stack
rank over suit so a fanned hand stays readable (`FUN_00018da8`). Hidden "Toggle Cheat Mode"
draws every hand face up (`+0x464`).

AI (`FUN_00016bfc` dispatcher). Hands are sorted high→low within a suit:
- **Pass** (`FUN_00015fb4`): Q♠/K♠/A♠ (queen first), hearts ≥ 9, then highest clubs, diamonds,
  spades. A hand flagged for the moon passes its lowest cards instead.
- **Moon flag**: at the deal if a suit has 5+ cards, a suit has 3+ cards ≥ 10, and 2+ Aces
  (`FUN_00015e84`); during play once a player has > 16 points and nobody else has any (`FUN_000193c4`).
- **Lead** (`FUN_000174f4`): without Q♠ or higher, lead the highest spade below the Queen to flush
  it (`FUN_00017464`). Otherwise lead a "safe" card — every lower card in the suit already played
  (`FUN_000147a0`) — preferring a safe heart.
- **Follow** (`FUN_00017c80`): last to play on a clean trick, dump the highest; drop Q♠ under a
  K♠/A♠; otherwise play the highest card that still loses.
- **Void** (`FUN_00018154`): dump Q♠ or the highest heart; with no points, high spades first.
- **Stop the moon** (`FUN_000183dc`): checks after trick 6 (Easy), 3 (Medium) or 1 (Hard).
- **Hard cheats**: `FUN_000172f4` and `FUN_000170b8` read the other players' hands.
- Shooting the moon yourself asks "Deduct from Your Score" or "Add to Opponent Scores".

# Spades (`00Spades.010`)

- **Bidding** (`FUN_00017cb0`), fully decoded: spades counted from K♠/J♠/9♠ down depending on
  length, plus long-spade tricks; each side suit adds its run of top cards from the Ace (cut
  short in long suits); 0 → 1 with any strength; a weak 1 becomes **nil**; +1 with 3 players.
  Alternative modes bid spades, face cards (`FUN_00017bf0`) or diamonds.
- **Play** (`FUN_00018524`): 2♣ lead rule, then lead / follow (`FUN_0001989c`) / void handling
  keyed on whether the player's side still needs tricks (`FUN_00019410`) and on not overtaking a
  winning partner. Several follow-up branches lost assignments in decompilation, so the port's
  Spades play is a reconstruction of this structure rather than a line-for-line translation.
