AS=wla-6502
LD=wlalink
ROM=fe2

COBJ=game.obj

all: $(ROM).nes

$(COBJ): src/main.s encoding
	$(AS) -I src -I bin -x -v -o $@ $<

$(ROM).nes: $(COBJ)
	$(LD) -d -v -S linkfile $(ROM).nes
	@sha1sum -c checksum.sha1

encoding:
	@python scripts/preprocess.py src/bank015.asm.inc src/bank015.asm

clean:
	rm -f $(ROM).nes $(COBJ)
