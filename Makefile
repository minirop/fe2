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
	@fe2-tiled -e maps/worldmap.tmx
	@fe2-tiled -e maps/ram-woods.tmx
	@fe2-tiled -e maps/first-battle-of-southern-zofia.tmx
	@fe2-tiled -e maps/second-battle-of-southern-zofia.tmx
	@fe2-tiled -e maps/storming-of-the-valley-approach.tmx
	@fe2-tiled -e maps/fear-mountain-battle.tmx
	@fe2-tiled -e maps/desert-battle.tmx
	@fe2-tiled -e maps/pirate-raid.tmx
	@fe2-tiled -e maps/pirate-raid-2.tmx
	@fe2-tiled -e maps/rigel-falls-battle.tmx
	@fe2-tiled -e maps/attack-on-the-last-bastion.tmx
	@fe2-tiled -e maps/fire-skirmish.tmx
	@fe2-tiled -e maps/dragons-maw.tmx
	@fe2-tiled -e maps/dolth-keep.tmx
	@fe2-tiled -e maps/duma-gate.tmx
	@fe2-tiled -e maps/southern-outpost.tmx
	@fe2-tiled -e maps/forest-skirmish.tmx
	@fe2-tiled -e maps/zofian-coast.tmx
	@fe2-tiled -e maps/temple-of-mila.tmx
	@fe2-tiled -e maps/grieths-citadel.tmx
	@fe2-tiled -e maps/dead-mans-mire.tmx
	@fe2-tiled -e maps/forest-crossroads.tmx
	@fe2-tiled -e maps/desaixs-fortress.tmx
	@fe2-tiled -e maps/sluice-gate.tmx
	@fe2-tiled -e maps/pirate-throne.tmx
	@fe2-tiled -e maps/beast-hunt.tmx
	@fe2-tiled -e maps/cave-room.tmx
	@fe2-tiled -e maps/zofia-castle.tmx
	@fe2-tiled -e maps/duma-temple-1.tmx
	@fe2-tiled -e maps/duma-temple-2.tmx
	@fe2-tiled -e maps/duma-temple-3.tmx
	@fe2-tiled -e maps/duma-temple-4.tmx
	@fe2-tiled -e maps/duma-temple-5.tmx
	@fe2-tiled -e maps/duma-temple-6.tmx
	@fe2-tiled -e maps/final-battle.tmx
	@fe2-tiled -e maps/lost-treescape-battleground.tmx
	@fe2-tiled -e maps/zofia-forest.tmx
	@fe2-tiled -e maps/desert-stronghold.tmx
	@fe2-tiled -e maps/rigel-forest.tmx
	@fe2-tiled -e maps/fear-mountain-shrine.tmx
	@fe2-tiled -e maps/nuibabas-abode.tmx
	@fe2-tiled -e maps/rigel-castle.tmx
	@fe2-tiled -e maps/duma-tower-1.tmx
	@fe2-tiled -e maps/duma-tower-2.tmx
	@fe2-tiled -e maps/duma-tower-3.tmx
	@fe2-tiled -e maps/fleecers-forest.tmx
	@fe2-tiled -e maps/northern-gate-of-castle-sofia.tmx

clean:
	rm -f src/*.asm
	rm -f $(ROM).nes $(COBJ)

.PHONY: maps
