CFLAGS ?= -O2 -Wall -Wextra -std=c11
RES := ../web/assets/klondike

klondike: klondike.c assets
	$(CC) $(CFLAGS) -o $@ klondike.c $$(pkg-config --cflags --libs sdl2)

# Card art comes from your own disc (tools/extract_assets.py); it is never committed.
assets:
	mkdir -p assets && cp $(RES)/*.bmp assets/

clean:
	rm -rf klondike test_rules assets

.PHONY: clean test

test: test_rules.c klondike.c
	$(CC) $(CFLAGS) -o test_rules test_rules.c $$(pkg-config --cflags --libs sdl2) && ./test_rules
