#!/usr/bin/env python3
"""Extract art, sounds and help pages from your own "Solitaire and Card Games To Go" disc.

Usage: tools/extract_assets.py [DISC_DIR] [--out web/assets]

DISC_DIR is the mounted disc (or a copy of it) containing the Pocket PC ARM .CAB.
Needs `7z` on PATH. Nothing extracted here is part of the repository.
"""
import argparse
import glob
import os
import shutil
import subprocess
import sys
import tempfile

# CAB member name fragment -> game id. Executables and help pages share the fragment.
GAMES = {"klondike": "klondike", "golf": "golf", "spider": "spider",
         "hearts": "hearts", "spades": "spades", "war": "war"}


def find_disc(explicit):
    if explicit:
        return explicit
    candidates = glob.glob("/run/media/*/PDA_CardGames") + glob.glob("/media/*/PDA_CardGames")
    candidates.append(os.path.join(os.path.dirname(__file__), "..", "disc"))
    for c in candidates:
        if glob.glob(os.path.join(c, "*[Aa][Rr][Mm].[Cc][Aa][Bb]")):
            return c
    sys.exit("disc not found; pass the directory that holds the *-ARM.CAB file")


def sevenzip(*args):
    subprocess.run(["7z", "x", "-y", *args], check=True, stdout=subprocess.DEVNULL)


def game_of(name):
    lower = name.lower()
    for key, game in GAMES.items():
        if key in lower:
            return game
    return None


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("disc", nargs="?")
    ap.add_argument("--out", default=os.path.join(os.path.dirname(__file__), "..", "web", "assets"))
    args = ap.parse_args()
    if not shutil.which("7z"):
        sys.exit("7z is required (p7zip)")

    disc = find_disc(args.disc)
    cab = glob.glob(os.path.join(disc, "*[Aa][Rr][Mm].[Cc][Aa][Bb]"))[0]
    out = os.path.abspath(args.out)
    os.makedirs(os.path.join(out, "help"), exist_ok=True)

    with tempfile.TemporaryDirectory() as tmp:
        cabdir = os.path.join(tmp, "cab")
        sevenzip(f"-o{cabdir}", cab)
        for member in sorted(os.listdir(cabdir)):
            path = os.path.join(cabdir, member)
            game = game_of(member)
            if not game:
                continue
            with open(path, "rb") as f:
                head = f.read(2)
            if head == b"MZ":
                res = os.path.join(tmp, game)
                sevenzip(f"-o{res}", path, ".rsrc/BITMAP/*", ".rsrc/WAVE/*")
                dest = os.path.join(out, game)
                os.makedirs(dest, exist_ok=True)
                n = 0
                for kind, ext in (("BITMAP", ""), ("WAVE", ".wav")):
                    for f in glob.glob(os.path.join(res, ".rsrc", kind, "*")):
                        shutil.copy(f, os.path.join(dest, os.path.basename(f) + ext))
                        n += 1
                print(f"{game:9s} {n} resources")
            else:
                shutil.copy(path, os.path.join(out, "help", game + ".htm"))
    print(f"assets written to {out}")


if __name__ == "__main__":
    main()
