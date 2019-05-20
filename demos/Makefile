

all: 01_visual_block_mode.o 02_macros 03_ctags

.PHONY: 03_ctags
03_ctags:
	make -C $@

clean:
	rm -f 01_visual_block_mode.o 02_macros
	make -C 03_ctags clean
