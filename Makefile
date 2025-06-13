AS=wla-6502
LD=wlalink
ROM=fe2

COBJ=game.obj

all: clean $(ROM).nes

$(COBJ): src/main.s encoding maps
	$(AS) -I src -I bin -I maps -x -v -o $@ $<

$(ROM).nes: $(COBJ)
	$(LD) -d -v -S linkfile $(ROM).nes
	@sha1sum -c checksum.sha1

encoding:
	@python scripts/preprocess.py src/bank000.asm.inc src/bank000.asm
	@python scripts/preprocess.py src/bank001.asm.inc src/bank001.asm
	@python scripts/preprocess.py src/bank002.asm.inc src/bank002.asm
	@python scripts/preprocess.py src/bank003.asm.inc src/bank003.asm
	@python scripts/preprocess.py src/bank004.asm.inc src/bank004.asm
	@python scripts/preprocess.py src/bank005.asm.inc src/bank005.asm
	@python scripts/preprocess.py src/bank006.asm.inc src/bank006.asm
	@python scripts/preprocess.py src/bank007.asm.inc src/bank007.asm
	@python scripts/preprocess.py src/bank008.asm.inc src/bank008.asm
	@python scripts/preprocess.py src/bank009.asm.inc src/bank009.asm
	@python scripts/preprocess.py src/bank010.asm.inc src/bank010.asm
	@python scripts/preprocess.py src/bank011.asm.inc src/bank011.asm
	@python scripts/preprocess.py src/bank012.asm.inc src/bank012.asm
	@python scripts/preprocess.py src/bank013.asm.inc src/bank013.asm
	@python scripts/preprocess.py src/bank014.asm.inc src/bank014.asm
	@python scripts/preprocess.py src/bank015.asm.inc src/bank015.asm

maps:
	@fe2-tiled maps/ram-woods.tmx
	@fe2-tiled maps/first-battle-of-southern-zofia.tmx
	@fe2-tiled maps/second-battle-of-southern-zofia.tmx

clean:
	rm -f src/*.asm
	rm -f $(ROM).nes $(COBJ)

.PHONY: maps
