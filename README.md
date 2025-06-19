# Fire Emblem Gaiden

This is a disassembly of Fire Emblem Gaiden. It is the second installment in the Fire Emblem series.

It builds the following ROM:

- **fe2.nes** `sha1: 2153ae9a7b1c63e8d4d83a807f1c8c1f482f7293`

## Setting up

You need to have those tools available in your `PATH`:
- `wla-6502` and `wlalink` from [wla-dx](https://github.com/vhelin/wla-dx)
- `python`
- `make`
- `sha1sum` if you want to check the generated ROM is correct

## Building

Just type `make`.

## What to do?

- Extract the maps into some format (to allow easy modification)
- Same with the portraits/battlers
- Understand the data
    - items
    - enemy AI/gather/auto-battle
    - movements
    - tiles "collision"
    - audio
    - where are, the unlabelled bytes, used
- How graphics are used/built/located
    - portraits (L09AE97)
    - battle sprites
    - UI
    - the cursor
- And everything else
