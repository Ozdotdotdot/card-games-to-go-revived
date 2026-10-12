#!/usr/bin/env python3
"""Serve the web version on your LAN: ./serve.py [--port 8002]"""
import argparse
import functools
import http.server
import os
import socket

WEB = os.path.join(os.path.dirname(os.path.abspath(__file__)), "web")


class Handler(http.server.SimpleHTTPRequestHandler):
    extensions_map = {**http.server.SimpleHTTPRequestHandler.extensions_map,
                      ".js": "text/javascript", ".bmp": "image/bmp", ".wav": "audio/wav"}

    def end_headers(self):
        self.send_header("Cache-Control", "no-cache")
        super().end_headers()


def lan_ip():
    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as s:
        try:
            s.connect(("192.0.2.1", 9))   # no packet is sent; picks the outbound interface
            return s.getsockname()[0]
        except OSError:
            return "localhost"


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--port", type=int, default=8002)
    ap.add_argument("--bind", default="0.0.0.0")
    args = ap.parse_args()
    if not os.path.isdir(os.path.join(WEB, "assets")):
        print("warning: web/assets is missing — run tools/extract_assets.py with your disc first")
    server = http.server.ThreadingHTTPServer((args.bind, args.port), functools.partial(Handler, directory=WEB))
    print(f"Card Games To Go: http://{lan_ip()}:{args.port}/")
    server.serve_forever()


if __name__ == "__main__":
    main()
