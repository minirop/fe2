.BANK 13
.ORG $0000

.SECTION "Bank12" FORCE

L0C8000: ; non-combat tilemaps and objects?
.dw L0C8070
.dw L0C8070
.dw L0C8188
.dw L0C81AD
.dw L0C81D2
.dw L0C81D8
.dw L0C81DC
.dw L0C81E0
.dw L0C81E4
.dw L0C81F6
.dw L0C81FE
.dw L0C8209
.dw L0C8070
.dw L0C8070
.dw L0C8283
.dw L0C82A8
.dw L0C8070
.dw L0C82AC
.dw L0C83C3
.dw L0C83CB
.dw L0C85A9
.dw L0C867E
.dw L0C8727
.dw L0C87D8
.dw L0C8A8E
.dw L0C8B5B
.dw L0C8CA5
.dw L0C8DA9
.dw L0C8E5D
.dw L0C9023
.dw L0C90A0
.dw L0C9179
.dw L0C92A0
.dw L0C9D7B
.dw L0C933A
.dw L0C9384
.dw L0C943C
.dw L0C8070
.dw L0C94C4
.dw L0C961D
.dw L0C8070
.dw L0C96C8
.dw L0C9806
.dw L0C8070
.dw L0C8070
.dw L0C985E
.dw L0CA077
.dw L0C9927
.dw L0C99D7
.dw L0C9AA4
.dw L0C9B2E
.dw L0C9BCA
.dw L0C9C3B
.dw L0C9CFE
.dw L0C8070
.dw L0C8070

; tilemap of the villages (doesn't have houses)
L0C8070:
.db $0E $17 $00 $00 $D3 $B2 $9F $FE
.db $16 $D2 $FE $BD $FE $14 $D1 $FE
.db $B5 $FE $02 $D3 $FE $B2 $FE $09
.db $01 $FE $40 $41 $FE $09 $01 $FE
.db $9F $FE $02 $D2 $FE $BD $FE $08
.db $01 $FE $40 $FE $02 $44 $FE $41
.db $FE $05 $01 $FE $40 $41 $01 $B5
.db $FE $02 $D3 $FE $B2 $FE $08 $01
.db $FE $42 $FE $03 $44 $FE $41 $FE
.db $04 $01 $FE $42 $45 $01 $9F $FE
.db $02 $D2 $FE $BD $FE $09 $01 $FE
.db $46 $44 $48 $43 $FE $04 $01 $FE
.db $40 $45 $01 $B5 $FE $02 $D3 $FE
.db $B2 $FE $04 $01 $FE $40 $41 $FE
.db $03 $01 $FE $42 $43 $FE $05 $01
.db $FE $40 $FE $02 $44 $FE $41 $9F
.db $FE $02 $D2 $FE $BD $01 $40 $FE
.db $02 $47 $02 $44 $FE $41 $FE $04
.db $01 $FE $40 $47 $41 $40 $47 $FE
.db $04 $44 $02 $D1 $FE $D3 $B2 $01
.db $42 $FE $04 $44 $FE $45 $FE $04
.db $01 $FE $46 $44 $43 $42 $FE $04
.db $44 $FE $45 $FE $02 $01 $FE $D2
.db $BD $01 $40 $FE $05 $44 $FE $41
.db $FE $03 $01 $FE $42 $43 $FE $02
.db $01 $FE $42 $43 $42 $44 $45 $FE
.db $02 $D0 $FE $D3 $B2 $01 $42 $FE
.db $05 $44 $FE $43 $FE $08 $01 $FE
.db $40 $41 $42 $43 $B5 $D3 $D2 $BD
.db $FE $02 $01 $FE $42 $FE $03 $48
.db $FE $43 $FE $09 $01 $FE $46 $45
.db $FE $02 $01 $FE $9F $D2 $D3 $B2
.db $FE $10 $01 $FE $42 $43 $FE $02
.db $01 $FE $B5 $D3 $D2 $BD $FE $14
.db $D0 $FE $9F $D2 $FE $18 $D3 $FF

L0C8188: ; right house
.db $06 $04 $77 $78 $66 $75 $79 $7A
.db $74 $67 $76 $7B $72 $1A $1A $0B
.db $73 $72 $28 $28 $19 $73 $6E $6F
.db $F7 $6E $6F $6C $6D $F8 $6C $6D
.db $4D $4E $3F $4D $4E

L0C81AD: ; left house
.db $06 $04 $77 $78 $66 $75 $79 $7A
.db $74 $67 $76 $7B $72 $1A $1A $0B
.db $73 $72 $28 $28 $19 $73 $7C $7D
.db $F7 $7C $7D $7E $7F $F8 $7E $7F
.db $4D $4E $3F $4D $4E

L0C81D2: ; house shadow
.db $03 $00 $02 $02 $02 $02

L0C81D8: ; tree
.db $01 $00 $D0 $D1

L0C81DC: ; column
.db $01 $00 $CB $CC

L0C81E0: ; double column
.db $01 $00 $CD $CD

L0C81E4: ; small pool
.db $03 $03 $3F $3F $3F $3F $3F $A8
.db $A9 $3F $3F $A6 $A5 $3F $3F $3F
.db $3F $3F

L0C81F6: ; mouth of truth
.db $01 $02 $E4 $E5 $E6 $E2 $FD $E3

L0C81FE: ; statue of Mila
.db $02 $02 $59 $E1 $5A $59 $F9 $5B
.db $5C $5D $5E

L0C8209: ;  room with table and chest
.db $09 $0B $95 $80 $80 $80 $80 $80
.db $80 $80 $80 $80 $96 $81 $97 $91
.db $81 $81 $81 $81 $81 $81 $81 $81
.db $98 $57 $93 $0F $15 $13 $15 $13
.db $15 $13 $0E $EB $9B $1F $93 $0F
.db $65 $65 $65 $65 $65 $10 $0E $0E
.db $94 $1F $93 $0F $65 $65 $65 $65
.db $65 $0F $0E $0E $94 $1F $93 $0F
.db $60 $60 $60 $60 $60 $0F $0E $0E
.db $94 $1F $93 $0F $14 $12 $14 $12
.db $14 $12 $0E $0E $94 $1F $93 $0F
.db $0E $0E $0E $0E $0E $0E $0E $0E
.db $94 $1F $99 $89 $F7 $88 $80 $80
.db $80 $80 $80 $80 $9A $1F $8A $8B
.db $F8 $8A $81 $81 $81 $81 $81 $81
.db $8B $1F

L0C8283: ; small room/cell?
.db $06 $04 $95 $80 $80 $80 $96 $97
.db $91 $81 $81 $98 $93 $36 $35 $35
.db $9D $93 $36 $35 $35 $9D $93 $36
.db $35 $35 $9D $99 $89 $F1 $88 $9A
.db $8A $8B $F2 $8A $8B

L0C82A8: ; white door
.db $01 $00 $F1 $F2

L0C82AC: ; Mila Shrine
.db $0E $17 $00 $00 $FE $02 $BC $13
.db $C1 $04 $BC $FE $C4 $FE $04 $C0
.db $FE $E4 $E5 $E6 $FE $05 $C0 $FE
.db $E4 $E5 $E6 $FE $04 $C0 $FE $C3
.db $FE $03 $BC $FE $C4 $A8 $FE $03
.db $A9 $FE $E2 $FD $E3 $A8 $FE $03
.db $2A $FE $A8 $E2 $FD $E3 $A8 $FE
.db $03 $A9 $FE $C3 $FE $03 $BC $FE
.db $C4 $A6 $FE $03 $A5 $FE $AA $2A
.db $AB $A6 $FE $03 $2A $FE $A6 $AA
.db $2A $AB $A6 $FE $03 $A5 $FE $C3
.db $FE $03 $BC $FE $C4 $A6 $FE $04
.db $A5 $FE $2A $A6 $A5 $FE $03 $2A
.db $FE $A6 $A5 $2A $A6 $FE $04 $A5
.db $FE $C3 $FE $03 $BC $FE $C4 $A6
.db $FE $02 $A5 $0D $2A $03 $A5 $FE
.db $C3 $FE $03 $BC $FE $C4 $A6 $FE
.db $02 $A5 $0D $2A $FE $A6 $FE $02
.db $A5 $FE $C3 $FE $03 $BC $FE $C4
.db $A6 $FE $02 $A5 $0D $2A $FE $A6
.db $FE $02 $A5 $FE $C3 $FE $03 $BC
.db $FE $C4 $A6 $FE $02 $A5 $0D $2A
.db $FE $A6 $FE $02 $A5 $FE $C3 $FE
.db $03 $BC $FE $C4 $A6 $FE $02 $A5
.db $0D $2A $FE $A6 $FE $02 $A5 $FE
.db $C3 $FE $03 $BC $FE $C4 $A6 $FE
.db $02 $A5 $06 $A9 $FE $2A $A8 $FE
.db $05 $A9 $FE $A6 $FE $02 $A5 $FE
.db $C3 $FE $03 $BC $FE $C4 $A6 $FE
.db $08 $A5 $FE $2A $A6 $FE $08 $A5
.db $FE $C3 $FE $03 $BC $FE $C4 $A6
.db $FE $07 $A5 $03 $04 $08 $A5 $FE
.db $C3 $FE $04 $BC $08 $C2 $FE $BB
.db $04 $C9 $FE $08 $C2 $0D $BC $FE
.db $C4 $09 $C3 $FE $0B $BC $FF

L0C83C3: ; stone wall shadow
.db $05 $00 $57 $1F $1F $1F $1F $1F

L0C83CB: ; throne room?
.db $15 $17 $00 $00 $01 $8C $AC $FE
.db $05 $9E $02 $A2 $03 $A1 $02 $A2
.db $05 $9E $FE $AD $BE $2F $FE $02
.db $01 $FE $8C $8A $FE $05 $81 $FE
.db $A4 $A3 $FE $03 $A0 $FE $A3 $A4
.db $FE $05 $81 $FE $8B $BE $2F $FE
.db $02 $01 $FE $8C $1D $1C $3F $CB
.db $3F $21 $53 $FE $05 $55 $FE $54
.db $22 $3F $CB $3F $FE $02 $1C $FE
.db $8D $2F $FE $02 $01 $FE $8C $1D
.db $1C $3F $CC $4F $21 $30 $32 $1B
.db $33 $1B $33 $31 $22 $3F $CC $4F
.db $FE $02 $1C $FE $8D $2F $FE $02
.db $01 $FE $8C $1D $1C $FE $03 $3F
.db $FE $21 $51 $FE $05 $56 $FE $52
.db $22 $FE $03 $3F $02 $1C $FE $8D
.db $2F $FE $02 $01 $FE $8C $1D $1C
.db $3F $CB $3F $24 $FE $07 $25 $FE
.db $26 $3F $CB $3F $FE $02 $1C $FE
.db $8D $2F $FE $02 $01 $FE $8C $1D
.db $1C $3F $CC $4F $FE $0A $3F $FE
.db $CC $4F $FE $02 $1C $FE $8D $2F
.db $FE $02 $01 $FE $8C $1D $1C $FE
.db $0F $3F $02 $1C $FE $8D $2F $FE
.db $02 $01 $FE $8C $1D $FE $12 $1C
.db $FE $8D $2F $FE $02 $01 $FE $8C
.db $1D $FE $12 $1C $FE $8D $2F $FE
.db $02 $01 $FE $8C $1D $FE $12 $1C
.db $FE $8D $2F $FE $02 $01 $FE $8C
.db $1D $FE $12 $1C $FE $8D $2F $FE
.db $02 $01 $FE $8C $95 $80 $89 $F1
.db $88 $80 $96 $FE $05 $1C $FE $95
.db $80 $89 $F3 $88 $80 $96 $8D $2F
.db $FE $02 $01 $FE $8C $97 $91 $8B
.db $F2 $8A $81 $98 $1E $FE $04 $1C
.db $FE $97 $91 $8B $F4 $8A $81 $98
.db $BF $2F $FE $02 $01 $FE $8C $93
.db $36 $FE $04 $35 $FE $9D $1D $FE
.db $04 $1C $FE $93 $1D $FE $04 $1C
.db $FE $94 $BE $2F $FE $02 $01 $FE
.db $8C $93 $36 $FE $04 $35 $FE $9D
.db $1D $FE $04 $1C $FE $93 $1D $FE
.db $03 $1C $FE $F0 $94 $BE $2F $FE
.db $02 $01 $FE $8C $93 $36 $FE $04
.db $35 $FE $9D $1D $FE $04 $1C $FE
.db $93 $1D $FE $04 $1C $FE $94 $BE
.db $2F $FE $02 $01 $FE $8C $93 $36
.db $FE $04 $35 $FE $9D $1D $FE $04
.db $1C $FE $93 $1D $FE $04 $1C $FE
.db $94 $BE $2F $01 $8E $87 $86 $8F
.db $FE $04 $80 $FE $9A $1D $FE $04
.db $1C $FE $99 $FE $04 $80 $FE $8E
.db $87 $86 $8F $01 $90 $91 $81 $92
.db $86 $87 $86 $87 $86 $87 $FE $03
.db $1C $FE $86 $87 $86 $87 $86 $87
.db $90 $91 $81 $92 $03 $86 $87 $86
.db $87 $FE $06 $81 $FE $57 $FE $02
.db $1C $06 $81 $FE $86 $87 $86 $87
.db $02 $FE $04 $81 $FE $02 $FE $0E
.db $01 $04 $81 $FE $02 $FF

L0C85A9: ; big empty stone room
.db $0E $17 $00 $00 $01 $8E $87 $86
.db $87 $86 $87 $86 $87 $86 $FE $02
.db $87 $FE $86 $87 $86 $87 $86 $87
.db $86 $87 $86 $8F $2F $FE $02 $01
.db $FE $90 $91 $FE $12 $81 $FE $92
.db $2F $FE $02 $01 $FE $8C $1D $FE
.db $12 $1C $FE $8D $2F $FE $02 $01
.db $FE $8C $1D $FE $12 $1C $FE $8D
.db $2F $FE $02 $01 $FE $8C $1D $FE
.db $12 $1C $FE $8D $2F $FE $02 $01
.db $FE $8C $1D $FE $12 $1C $FE $8D
.db $2F $FE $02 $01 $FE $8C $1D $FE
.db $12 $1C $FE $8D $2F $FE $02 $01
.db $FE $8C $1D $FE $12 $1C $FE $8D
.db $2F $FE $02 $01 $FE $8C $1D $FE
.db $12 $1C $FE $8D $2F $FE $02 $01
.db $FE $8C $1D $FE $12 $1C $FE $8D
.db $2F $FE $02 $01 $FE $8C $1D $FE
.db $12 $1C $FE $8D $2F $FE $02 $01
.db $FE $8C $1D $FE $12 $1C $FE $8D
.db $2F $FE $02 $01 $FE $8C $1D $FE
.db $12 $1C $FE $8D $2F $FE $02 $01
.db $FE $86 $87 $86 $87 $86 $87 $86
.db $87 $86 $87 $1C $86 $87 $86 $87
.db $86 $87 $86 $87 $86 $87 $2F $FE
.db $02 $01 $0A $81 $FE $1E $FE $0A
.db $81 $FE $2F $01 $FF

L0C867E: ; bent Mila shrine corridor
.db $0E $0F $00 $00 $FE $0A $BC $FE
.db $C4 $09 $C3 $FE $0D $BC $FE $C4
.db $09 $C3 $FE $07 $BC $06 $C1 $FE
.db $B7 $09 $C3 $FE $06 $BC $FE $C4
.db $FE $07 $C0 $FE $09 $C3 $FE $06
.db $BC $FE $C4 $09 $FE $02 $04 $FE
.db $32 $04 $32 $04 $32 $C3 $FE $06
.db $BC $FE $C4 $09 $32 $FE $06 $04
.db $FE $C3 $FE $06 $BC $FE $C4 $09
.db $FE $03 $32 $02 $04 $02 $32 $FE
.db $C3 $FE $06 $BC $FE $C4 $09 $32
.db $FE $04 $04 $FE $32 $04 $C3 $FE
.db $06 $BC $FE $C4 $09 $FE $03 $04
.db $FE $32 $FE $03 $04 $FE $C3 $FE
.db $07 $BC $02 $C2 $FE $BB $FE $02
.db $04 $FE $C9 $FE $02 $C2 $0A $BC
.db $FE $C4 $09 $04 $C3 $FE $0C $BC
.db $FE $C4 $09 $04 $C3 $FE $0C $BC
.db $FE $C4 $09 $04 $C3 $FE $0C $BC
.db $FE $C4 $09 $04 $C3 $FE $0C $BC
.db $FE $C4 $09 $04 $C3 $FE $06 $BC
.db $FF

L0C8727: ; straight Mila shrine corridor
.db $0E $0F $00 $00 $FE $06 $BC $FE
.db $C4 $09 $04 $C3 $FE $0C $BC $FE
.db $C4 $09 $04 $C3 $FE $0C $BC $FE
.db $C4 $09 $04 $C3 $FE $0A $BC $02
.db $C1 $FE $B7 $09 $32 $B8 $FE $02
.db $C1 $07 $BC $FE $C4 $FE $03 $C0
.db $FE $09 $04 $FE $03 $C0 $FE $C3
.db $FE $06 $BC $FE $C4 $09 $FE $02
.db $04 $FE $32 $04 $32 $04 $32 $C3
.db $FE $06 $BC $FE $C4 $09 $32 $FE
.db $06 $04 $FE $C3 $FE $06 $BC $FE
.db $C4 $09 $FE $03 $32 $02 $04 $02
.db $32 $FE $C3 $FE $06 $BC $FE $C4
.db $09 $32 $FE $04 $04 $FE $32 $04
.db $C3 $FE $06 $BC $FE $C4 $09 $FE
.db $03 $04 $FE $32 $FE $03 $04 $FE
.db $C3 $FE $07 $BC $02 $C2 $FE $BB
.db $04 $32 $C9 $FE $02 $C2 $0A $BC
.db $FE $C4 $09 $04 $C3 $FE $0C $BC
.db $FE $C4 $09 $04 $C3 $FE $0C $BC
.db $FE $C4 $09 $04 $C3 $FE $0C $BC
.db $FE $C4 $09 $04 $C3 $FE $06 $BC
.db $FF

L0C87D8: ; Duma tower
.db $1D $1F $00 $00 $01 $D0 $01 $D0
.db $FE $03 $01 $FE $8A $FE $05 $81
.db $FE $98 $2D $97 $91 $FE $04 $81
.db $FE $8B $FE $05 $01 $FE $D0 $FE
.db $05 $01 $FE $D1 $D0 $D1 $FE $03
.db $01 $FE $95 $80 $E4 $E5 $E6 $80
.db $9A $2D $99 $FE $02 $80 $FE $E4
.db $E5 $E6 $96 $FE $05 $01 $FE $D1
.db $FE $06 $01 $FE $D1 $D0 $FE $03
.db $01 $FE $97 $91 $E2 $FD $E3 $81
.db $8B $2D $8A $FE $02 $81 $FE $E2
.db $FD $E3 $98 $FE $0C $01 $FE $D0
.db $D1 $FE $02 $01 $FE $95 $D8 $2B
.db $FE $0C $2A $FE $D9 $80 $E4 $E5
.db $E6 $96 $FE $07 $01 $FE $D1 $FE
.db $03 $01 $FE $97 $D8 $2B $FE $0C
.db $2A $FE $D9 $81 $E2 $FD $E3 $98
.db $40 $41 $FE $09 $01 $02 $D8 $FE
.db $2B $F0 $FE $0B $2A $FE $D9 $2D
.db $FE $03 $2A $FE $D9 $FE $02 $44
.db $FE $41 $FE $08 $01 $FE $D8 $99
.db $FE $0D $80 $FE $9A $2D $FE $03
.db $2A $FE $D9 $FE $03 $44 $FE $47
.db $41 $FE $02 $01 $FE $95 $E4 $E5
.db $E6 $D8 $AC $FE $0D $9E $FE $AD
.db $2D $FE $03 $2A $FE $D9 $80 $96
.db $FE $02 $44 $FE $43 $01 $8E $97
.db $E2 $FD $E3 $D8 $AC $AD $00 $AC
.db $FE $0A $9E $FE $AD $2D $FE $03
.db $2A $FE $D9 $81 $98 $8F $43 $FE
.db $02 $01 $FE $90 $D8 $2B $FE $02
.db $2A $FE $D8 $8A $8B $FB $8A $FE
.db $0A $81 $FE $8B $2D $FE $03 $2A
.db $FE $D9 $2D $D9 $92 $2F $FE $02
.db $01 $FE $8C $D8 $2B $FE $02 $2A
.db $FE $D8 $FE $11 $2A $FE $F0 $2A
.db $D9 $2D $D9 $BE $2F $FE $02 $01
.db $FE $8C $D8 $2B $FE $02 $2A $FE
.db $99 $FE $13 $80 $FE $9A $2D $D9
.db $BE $2F $FE $02 $01 $FE $8C $D8
.db $2B $FE $02 $2A $FE $AC $FE $13
.db $9E $FE $AD $2D $D9 $BE $2F $FE
.db $02 $01 $FE $8C $D8 $2B $FE $02
.db $2A $FE $AC $FE $10 $9E $FE $AD
.db $00 $AC $AD $2D $D9 $BE $2F $FE
.db $02 $01 $FE $8C $D8 $2B $FE $02
.db $2A $FE $8A $FE $10 $81 $FE $8B
.db $FB $8A $8B $2D $D9 $BE $2F $FE
.db $02 $01 $FE $8C $D8 $2B $FE $18
.db $2A $FE $D9 $BE $2F $FE $02 $01
.db $FE $8C $D8 $2B $FE $0B $2A $FE
.db $F0 $FE $0C $2A $FE $D9 $BE $2F
.db $FE $02 $01 $FE $8C $99 $FE $19
.db $80 $FE $9A $BE $2F $FE $02 $01
.db $FE $8C $AC $FE $19 $9E $FE $AD
.db $BE $2F $FE $02 $01 $FE $8C $AC
.db $95 $80 $E4 $E5 $E6 $80 $96 $FE
.db $04 $9E $FE $AD $00 $AC $FE $04
.db $9E $FE $95 $80 $E4 $E5 $E6 $80
.db $96 $AD $BE $2F $FE $02 $01 $FE
.db $8C $8A $97 $91 $E2 $FD $E3 $81
.db $98 $FE $04 $81 $FE $8B $FB $8A
.db $FE $04 $81 $FE $97 $91 $E2 $FD
.db $E3 $81 $98 $8B $BE $2F $FE $02
.db $01 $FE $8C $2A $D8 $A8 $AA $2A
.db $AB $A9 $D9 $2D $FE $0A $2A $FE
.db $D8 $A8 $AA $2A $AB $A9 $D9 $2D
.db $8D $2F $FE $02 $01 $FE $8C $2A
.db $D8 $A6 $A5 $2A $A6 $A5 $D9 $2D
.db $FE $0A $2A $FE $D8 $A6 $A5 $2A
.db $A6 $A5 $D9 $2D $8D $2F $FE $02
.db $01 $FE $8C $2A $99 $80 $89 $2A
.db $88 $80 $9A $2D $FE $0A $2A $FE
.db $99 $80 $89 $2A $88 $80 $9A $2D
.db $8D $2F $FE $02 $01 $FE $8C $2A
.db $8A $81 $8B $2C $8A $81 $8B $2D
.db $FE $0A $2A $FE $8A $81 $8B $2C
.db $8A $81 $8B $2D $8D $2F $FE $02
.db $01 $FE $8C $FE $1B $2A $FE $8D
.db $2F $FE $02 $01 $FE $8C $FE $1B
.db $2A $FE $8D $2F $FE $02 $01 $FE
.db $86 $87 $86 $87 $86 $87 $86 $87
.db $86 $87 $86 $87 $86 $87 $38 $86
.db $87 $86 $87 $86 $87 $86 $87 $86
.db $87 $86 $87 $86 $87 $2F $FE $02
.db $01 $0E $81 $FE $38 $FE $0E $81
.db $FE $2F $FE $21 $01 $FF

L0C8A8E: ; stone room with red carpet
.db $0E $1F $00 $00 $FE $47 $EF $FE
.db $95 $FE $05 $80 $FE $83 $2A $82
.db $FE $05 $80 $FE $96 $FE $11 $EF
.db $FE $97 $91 $FE $04 $81 $FE $85
.db $2C $84 $FE $05 $81 $FE $98 $FE
.db $11 $EF $FE $D8 $2B $FE $0C $2A
.db $FE $D9 $FE $11 $EF $FE $D8 $2B
.db $FE $0C $2A $FE $D9 $FE $11 $EF
.db $FE $D8 $2B $2A $53 $FE $07 $55
.db $FE $54 $FE $02 $2A $FE $D9 $FE
.db $11 $EF $FE $D8 $2B $2A $30 $FE
.db $07 $32 $FE $31 $FE $02 $2A $FE
.db $D9 $FE $11 $EF $FE $D8 $2B $2A
.db $30 $FE $07 $32 $FE $31 $FE $02
.db $2A $FE $D9 $FE $11 $EF $FE $D8
.db $2B $2A $30 $FE $07 $32 $FE $31
.db $FE $02 $2A $FE $D9 $FE $11 $EF
.db $FE $D8 $2B $2A $30 $FE $07 $32
.db $FE $31 $FE $02 $2A $FE $D9 $FE
.db $11 $EF $FE $D8 $2B $2A $51 $FE
.db $07 $56 $FE $52 $FE $02 $2A $FE
.db $D9 $FE $11 $EF $FE $D8 $2B $FE
.db $0C $2A $FE $D9 $FE $11 $EF $FE
.db $D8 $2B $FE $0C $2A $FE $D9 $FE
.db $11 $EF $FE $99 $FE $0D $80 $FE
.db $9A $FE $0A $EF $FF

L0C8B5B: ; castle entrance?
.db $15 $17 $00 $00 $FE $0B $A5 $FE
.db $5F $FE $0D $A5 $0A $5F $FE $A5
.db $FE $0B $5F $FE $A5 $FE $0A $80
.db $FE $89 $38 $88 $FE $0B $80 $FE
.db $CB $FE $15 $2A $FE $CB $2A $CD
.db $39 $FE $13 $3A $FE $3B $CD $2C
.db $CD $39 $FE $13 $3A $FE $3B $CD
.db $2B $CD $2B $FE $14 $2A $FE $CD
.db $2B $CD $2B $FE $14 $2A $FE $CD
.db $2B $CD $FE $02 $CB $FE $2A $FE
.db $02 $CB $FE $A8 $FE $02 $A9 $FE
.db $2A $21 $58 $22 $2A $A8 $FE $02
.db $A9 $05 $CB $FE $CD $2B $CD $FE
.db $02 $CC $FE $2B $CC $CD $A6 $FE
.db $02 $A5 $FE $2A $21 $58 $22 $2A
.db $A6 $FE $02 $A5 $FE $CD $FE $04
.db $CC $FE $CD $2B $CD $2B $FE $03
.db $2A $FE $CD $A6 $FE $02 $A5 $FE
.db $2A $21 $58 $22 $2A $A6 $FE $02
.db $A5 $FE $CD $2B $F0 $FE $02 $2A
.db $FE $CD $2B $CD $2B $F0 $FE $02
.db $2A $FE $CD $A6 $FE $02 $A5 $FE
.db $2A $24 $25 $26 $2A $A6 $FE $02
.db $A5 $FE $CD $2B $2A $EB $2C $CD
.db $2B $CD $FE $04 $CB $FE $CD $A6
.db $FE $02 $A5 $05 $2A $FE $A6 $FE
.db $02 $A5 $FE $CD $FE $04 $CB $FE
.db $CD $2B $CD $FE $05 $CC $FE $A6
.db $FE $02 $A5 $02 $A9 $FE $2A $A8
.db $A9 $A6 $FE $02 $A5 $05 $CC $FE
.db $CD $2B $CD $FE $05 $A9 $FE $A6
.db $FE $04 $A5 $FE $2A $A6 $FE $04
.db $A5 $05 $A9 $FE $CD $2B $CD $DE
.db $FE $08 $80 $FE $83 $F5 $82 $FE
.db $09 $80 $FE $CD $2B $CD $AE $FE
.db $08 $81 $FE $85 $F6 $84 $FE $09
.db $81 $FE $CD $2B $CD $2B $FE $14
.db $2A $FE $CD $2B $CD $2B $FE $14
.db $2A $FE $CD $2B $CD $39 $FE $13
.db $3A $FE $3B $CD $2B $CC $39 $FE
.db $13 $3A $FE $3B $CC $2B $FE $18
.db $2A $FF

L0C8CA5: ; harbour town
.db $0E $17 $00 $00 $FE $04 $A5 $FE
.db $77 $78 $FE $04 $66 $FE $75 $79
.db $FE $0D $A5 $03 $3F $FE $7A $74
.db $FE $04 $67 $FE $76 $7B $3F $A7
.db $FE $02 $A5 $FE $EE $FE $02 $2E
.db $FE $A7 $FE $05 $A5 $03 $3F $FE
.db $72 $64 $FE $04 $17 $FE $19 $73
.db $4F $A6 $FE $02 $A5 $FE $ED $FE
.db $02 $2E $FE $A6 $FE $05 $A5 $03
.db $3F $FE $72 $FE $05 $61 $FE $62
.db $6A $4F $A6 $FE $03 $A5 $02 $2E
.db $FE $A6 $FE $05 $A5 $03 $3F $FE
.db $72 $FE $02 $3D $02 $0A $02 $3D
.db $FE $73 $4F $A6 $FE $03 $A5 $02
.db $2E $FE $A6 $A5 $B1 $B0 $A7 $A5
.db $FE $03 $3F $FE $72 $FE $02 $60
.db $FE $0C $0A $FE $02 $60 $FE $6A
.db $4F $FE $09 $3F $FE $B0 $02 $A5
.db $FE $03 $3F $FE $72 $FE $02 $3C
.db $02 $0A $02 $3C $FE $73 $4F $FE
.db $09 $3F $FE $B0 $02 $A5 $FE $03
.db $3F $FE $72 $FE $06 $0A $FE $73
.db $4F $FE $09 $3F $FE $B0 $02 $A5
.db $FE $03 $3F $FE $6E $6F $0A $6E
.db $6F $69 $6E $6F $4F $FE $09 $3F
.db $FE $B0 $02 $A5 $FE $03 $3F $FE
.db $6C $6D $0C $6C $6D $68 $6C $6D
.db $4F $FE $09 $3F $FE $B0 $02 $A5
.db $FE $15 $3F $FE $B0 $02 $A5 $FE
.db $15 $3F $FE $B0 $02 $A5 $FE $15
.db $3F $FE $B0 $02 $A5 $FE $05 $B1
.db $FE $50 $FE $10 $B1 $FE $02 $A5
.db $FE $17 $01 $FF

L0C8DA9: ; harbour town 2
.db $0E $17 $00 $00 $FE $09 $01 $FE
.db $A6 $FE $0E $A5 $FE $B0 $FE $02
.db $B1 $FE $50 $FE $13 $B1 $02 $B0
.db $FE $4F $FE $15 $3F $02 $B0 $FE
.db $4F $FE $15 $3F $02 $B0 $FE $4F
.db $FE $15 $3F $02 $B0 $FE $4F $FE
.db $15 $3F $02 $B0 $FE $4F $FE $15
.db $3F $02 $B0 $FE $4F $FE $15 $3F
.db $02 $B0 $FE $4F $FE $07 $3F $FE
.db $A8 $A9 $FE $02 $2E $FE $A8 $A9
.db $FE $08 $3F $02 $B0 $FE $4F $FE
.db $07 $3F $FE $A6 $A5 $FE $02 $2E
.db $FE $A6 $A5 $FE $09 $B1 $FE $B0
.db $4F $FE $07 $3F $FE $A6 $A5 $FE
.db $02 $2E $FE $A6 $A5 $FE $09 $A9
.db $FE $B0 $4F $FE $07 $3F $FE $A6
.db $EE $FE $02 $2E $FE $A6 $FE $0A
.db $A5 $FE $B0 $4F $FE $07 $3F $FE
.db $A6 $ED $FE $02 $2E $FE $A6 $FE
.db $0A $A5 $03 $B1 $FE $50 $FE $05
.db $B1 $FE $A6 $A5 $FE $02 $9C $FE
.db $A6 $FE $0A $A5 $09 $01 $FE $A6
.db $FE $0E $A5 $FF

L0C8E5D: ; throne room with north exits
.db $15 $17 $00 $00 $D8 $AC $9E $BC
.db $FE $04 $A2 $07 $A1 $04 $A2 $FE
.db $AD $2D $3F $D9 $2F $D8 $8A $81
.db $FB $FE $02 $A4 $02 $A3 $07 $A0
.db $02 $A3 $02 $A4 $FE $8B $2D $3F
.db $D9 $2F $D8 $2B $2A $38 $2B $21
.db $53 $FE $09 $55 $FE $54 $22 $FE
.db $03 $2A $FE $3F $D9 $2F $D8 $2B
.db $2A $3F $2A $21 $30 $FE $03 $32
.db $FE $1B $33 $1B $33 $FE $02 $32
.db $FE $31 $22 $2A $FE $03 $3F $FE
.db $D9 $2F $D8 $2B $2A $3F $2A $21
.db $51 $FE $09 $56 $FE $52 $22 $2A
.db $3F $FE $02 $2A $FE $D9 $2F $D8
.db $2B $2A $3F $2A $24 $FE $0B $25
.db $FE $26 $2A $3F $FE $02 $2A $FE
.db $D9 $2F $D8 $2B $2A $3F $FE $07
.db $2A $FE $3F $FE $07 $2A $FE $3F
.db $FE $02 $2A $FE $D9 $2F $D8 $2B
.db $CB $FE $11 $3F $FE $CB $2A $D9
.db $2F $D8 $2B $CC $2B $FE $06 $2E
.db $FE $2A $3F $2A $FE $06 $2E $FE
.db $2A $CC $2B $D9 $2F $D8 $2B $CB
.db $2A $FE $06 $2E $FE $2A $3F $2A
.db $FE $06 $2E $FE $2A $CB $2A $D9
.db $2F $D8 $2B $CC $2B $FE $07 $2A
.db $FE $3F $FE $08 $2A $FE $CC $2B
.db $D9 $2F $D8 $2B $FE $09 $2A $FE
.db $3F $FE $0A $2A $FE $D9 $2F $8E
.db $87 $86 $87 $1C $86 $87 $86 $8F
.db $FE $02 $2A $FE $3F $FE $02 $2A
.db $FE $8E $87 $86 $87 $1C $86 $87
.db $86 $8F $2F $90 $91 $FE $02 $81
.db $FE $1E $FE $03 $81 $FE $92 $FE
.db $02 $2A $FE $3F $FE $02 $2A $FE
.db $90 $91 $FE $02 $81 $FE $1E $FE
.db $03 $81 $FE $92 $2F $8C $1D $FE
.db $06 $1C $FE $8D $2F $FE $04 $01
.db $FE $8C $1D $FE $06 $1C $FE $8D
.db $2F $8C $1D $FE $06 $1C $FE $8D
.db $2F $FE $04 $01 $FE $8C $1D $FE
.db $06 $1C $FE $8D $2F $8C $1D $FE
.db $06 $1C $FE $8D $2F $FE $04 $01
.db $FE $8C $1D $FE $06 $1C $FE $8D
.db $2F $8C $1D $FE $05 $1C $FE $EC
.db $8D $2F $FE $04 $01 $FE $8C $EB
.db $1E $FE $05 $1C $FE $8D $2F $86
.db $87 $86 $87 $86 $87 $86 $FE $02
.db $87 $FE $2F $FE $04 $01 $FE $86
.db $87 $86 $87 $86 $87 $86 $FE $02
.db $87 $FE $2F $8A $FE $07 $81 $FE
.db $8B $B6 $FE $03 $2A $FE $CE $8A
.db $FE $07 $81 $FE $8B $A8 $FE $09
.db $A9 $FE $B6 $FE $03 $2A $FE $CE
.db $A8 $FE $07 $A9 $FE $6B $A6 $FE
.db $09 $A5 $FE $B3 $FE $03 $2A $FE
.db $B4 $A6 $FE $09 $A5 $FF

L0C9023: ; north-left exit in throne room?
.db $0E $0F $00 $00 $FE $52 $EF $FE
.db $8E $87 $86 $87 $86 $87 $86 $87
.db $86 $87 $86 $8F $FE $04 $EF $FE
.db $8C $FE $0A $1C $FE $8D $FE $03
.db $EF $FE $8E $86 $1E $FE $09 $1C
.db $FE $87 $8F $FE $02 $EF $FE $8C
.db $FE $0C $1C $FE $8D $FE $02 $EF
.db $FE $8C $FE $0C $1C $FE $8D $FE
.db $02 $EF $FE $8C $FE $0C $1C $FE
.db $8D $FE $02 $EF $FE $8C $FE $0C
.db $1C $FE $8D $FE $02 $EF $FE $8C
.db $FE $0C $1C $FE $8D $FE $02 $EF
.db $FE $8C $1C $F0 $FE $0A $1C $FE
.db $8D $FE $02 $EF $FE $86 $87 $86
.db $87 $86 $87 $86 $87 $86 $87 $86
.db $87 $86 $87 $EF $FF

L0C90A0: ; water shrine border?
.db $15 $0F $00 $00 $FE $17 $9E $03
.db $4B $0D $9E $FE $B9 $E0 $BA $FE
.db $06 $9E $07 $A9 $FE $AA $A9 $6B
.db $FE $06 $A9 $08 $A5 $08 $5F $08
.db $A5 $FE $5F $FE $0F $A5 $FE $5F
.db $FE $07 $A5 $FE $95 $FE $03 $80
.db $FE $89 $FE $06 $2A $FE $88 $FE
.db $03 $80 $FE $96 $97 $91 $FE $02
.db $81 $FE $8B $2C $FE $05 $2A $FE
.db $8A $FE $03 $81 $FE $98 $D8 $2B
.db $FE $0D $2A $FE $D9 $D8 $2B $FE
.db $0D $2A $FE $D9 $D8 $2B $FE $0D
.db $2A $FE $D9 $99 $80 $E4 $E5 $E6
.db $FE $06 $2A $FE $E4 $E5 $E6 $80
.db $9A $8A $81 $E2 $FD $E3 $2C $FE
.db $05 $2A $FE $E2 $FD $E3 $81 $8B
.db $FE $02 $A9 $FE $AA $2A $AB $FE
.db $02 $A9 $02 $2A $FE $A8 $A9 $AA
.db $2A $AB $FE $02 $A9 $03 $A5 $FE
.db $2A $A6 $FE $02 $A5 $02 $2A $FE
.db $A6 $FE $02 $A5 $FE $2A $A6 $FE
.db $05 $A5 $FE $2A $A6 $FE $02 $A5
.db $02 $2A $FE $A6 $FB $A7 $2A $A6
.db $FE $03 $A5 $09 $2A $FE $38 $2B
.db $FE $03 $2A $02 $A5 $0E $2A $FE
.db $A6 $A5 $FE $0E $2A $FE $A6 $A5
.db $FE $0E $A9 $FE $A6 $FE $10 $A5
.db $FF

L0C9179:
.db $15 $0F $00 $00 $FE $06 $00 $FE
.db $DB $2D $2A $DA $FE $07 $00 $FE
.db $95 $FE $04 $80 $FE $9A $2D $2A
.db $99 $FE $04 $80 $FE $96 $FE $02
.db $00 $FE $97 $E4 $E5 $E6 $81 $8B
.db $2D $2A $8A $81 $E4 $E5 $E6 $98
.db $FE $02 $00 $FE $D8 $E2 $FD $E3
.db $2C $FE $05 $2A $FE $E2 $FD $E3
.db $DD $FE $02 $00 $FE $D8 $A8 $2A
.db $AB $FE $06 $2A $FE $A8 $2A $AB
.db $D9 $FE $02 $00 $FE $D8 $A6 $2A
.db $A6 $FE $06 $2A $FE $A6 $2A $A6
.db $D9 $FE $02 $00 $FE $D8 $2B $FE
.db $0B $2A $FE $D9 $FE $02 $00 $FE
.db $D8 $2B $FE $0B $2A $FE $D9 $FE
.db $02 $00 $FE $D8 $2B $FE $0B $2A
.db $FE $D9 $FE $02 $00 $FE $D4 $FE
.db $04 $DC $FE $D7 $FE $02 $2A $FE
.db $D6 $FE $04 $DC $FE $D5 $FE $07
.db $00 $FE $DB $FE $02 $2A $FE $DA
.db $FE $0C $00 $FE $DB $2D $2A $DA
.db $FE $08 $00 $FE $95 $FE $03 $80
.db $FE $9A $2D $2A $99 $FE $03 $80
.db $FE $96 $FE $04 $00 $FE $97 $91
.db $FE $02 $81 $FE $8B $2D $2A $8A
.db $FE $03 $81 $FE $98 $FE $04 $00
.db $FE $D8 $2B $FE $09 $2A $FE $D9
.db $FE $04 $00 $FE $D8 $2B $FE $09
.db $2A $FE $D9 $FE $04 $00 $FE $D8
.db $2B $2A $53 $FE $04 $55 $FE $54
.db $FE $02 $2A $FE $D9 $FE $04 $00
.db $FE $D8 $2B $2A $30 $FE $04 $32
.db $FE $31 $FE $02 $2A $FE $D9 $FE
.db $04 $00 $FE $D8 $2B $2A $51 $FE
.db $04 $56 $FE $52 $FE $02 $2A $FE
.db $D9 $FE $04 $00 $FE $D4 $FE $0A
.db $DC $FE $D5 $FE $22 $00 $FF

L0C92A0:
.db $0E $0F $00 $00 $FE $17 $9E $03
.db $4B $0D $9E $FE $B9 $E0 $BA $FE
.db $06 $9E $07 $A9 $FE $AA $A9 $6B
.db $FE $06 $A9 $23 $A5 $FE $D6 $D7
.db $FE $06 $A5 $FE $D6 $D7 $FE $06
.db $A5 $FE $DA $DB $2C $FE $05 $2A
.db $FE $DA $DB $A7 $FE $05 $A5 $FE
.db $DA $DB $2B $FE $05 $2A $FE $DA
.db $DB $A6 $FE $05 $A5 $FE $DA $DB
.db $2B $FE $05 $2A $FE $DA $DB $A6
.db $FE $05 $A5 $FE $DA $DB $2B $FE
.db $05 $2A $FE $DA $DB $A6 $FE $05
.db $A5 $FE $DA $DB $2B $FE $05 $2A
.db $FE $DA $DB $A6 $FE $05 $A5 $FE
.db $DA $DB $2B $FE $05 $2A $FE $DA
.db $DB $A6 $FE $05 $A5 $FE $99 $9A
.db $2B $FE $05 $2A $FE $99 $9A $A6
.db $FE $05 $A5 $FE $8A $8B $2B $FE
.db $05 $2A $FE $8A $8B $A6 $FE $02
.db $A5 $FF

L0C933A:
.db $07 $08 $95 $80 $80 $80 $80 $80
.db $80 $96 $81 $97 $91 $81 $81 $81
.db $81 $81 $98 $57 $93 $0F $0E $15
.db $13 $15 $13 $94 $1F $93 $EB $10
.db $65 $65 $65 $10 $94 $1F $93 $0F
.db $0E $60 $60 $60 $0F $94 $1F $93
.db $0F $0E $14 $12 $14 $12 $94 $1F
.db $99 $80 $80 $89 $F7 $88 $80 $9A
.db $1F $8A $81 $81 $8B $F8 $8A $81
.db $8B $1F

L0C9384:
.db $0E $0F $00 $00 $FE $12 $EF $FE
.db $95 $FE $03 $80 $FE $89 $BC $88
.db $FE $03 $80 $FE $96 $FE $05 $EF
.db $FE $97 $91 $FE $02 $81 $FE $8B
.db $FB $8A $FE $03 $81 $FE $98 $FE
.db $05 $EF $FE $D8 $2B $FE $03 $2A
.db $FE $38 $2B $FE $03 $2A $FE $D9
.db $FE $05 $EF $FE $D8 $2B $FE $08
.db $2A $FE $D9 $FE $05 $EF $FE $D8
.db $2B $FE $08 $2A $FE $D9 $FE $05
.db $EF $FE $D8 $2B $FE $08 $2A $FE
.db $D9 $FE $05 $EF $FE $D8 $2B $FE
.db $08 $2A $FE $D9 $FE $05 $EF $FE
.db $D8 $2B $FE $08 $2A $FE $D9 $FE
.db $05 $EF $FE $D8 $2B $FE $08 $2A
.db $FE $D9 $FE $05 $EF $FE $D8 $2B
.db $FE $08 $2A $FE $D9 $FE $05 $EF
.db $FE $D8 $2B $FE $08 $2A $FE $D9
.db $FE $05 $EF $FE $D8 $2B $FE $03
.db $2A $FE $F0 $FE $04 $2A $FE $D9
.db $FE $05 $EF $FE $99 $FE $09 $80
.db $FE $9A $FE $05 $EF $FE $AC $FE
.db $09 $9E $FE $AD $FE $03 $EF $FF

L0C943C:
.db $0E $0F $00 $00 $FE $2A $BC $03
.db $C1 $0C $BC $FE $C4 $FE $03 $C7
.db $FE $C3 $FE $0B $BC $FE $C4 $FE
.db $03 $C0 $FE $C3 $FE $0B $BC $FE
.db $C4 $2D $F0 $2A $C3 $FE $0B $BC
.db $FE $C4 $2D $FE $02 $2A $FE $C3
.db $FE $0B $BC $FE $C4 $2D $FE $02
.db $2A $FE $C3 $FE $0B $BC $FE $C4
.db $2D $FE $02 $2A $FE $C3 $FE $0B
.db $BC $FE $C4 $83 $2A $82 $C3 $FE
.db $0B $BC $FE $C4 $85 $2C $84 $C3
.db $FE $0B $BC $FE $C4 $2D $FE $02
.db $2A $FE $C3 $FE $0B $BC $FE $C4
.db $2D $FE $02 $2A $FE $C3 $FE $0B
.db $BC $FE $C4 $2D $FE $02 $2A $FE
.db $C3 $FE $0B $BC $FE $C4 $09 $FE
.db $02 $04 $FE $C3 $FE $02 $BC $FF

L0C94C4:
.db $15 $17 $00 $00 $FE $06 $A5 $FE
.db $B6 $FE $02 $2A $FE $CE $A6 $FE
.db $13 $A5 $FE $B6 $FE $02 $2A $FE
.db $CE $A6 $FE $13 $A5 $FE $B6 $FE
.db $02 $2A $FE $CE $A6 $FE $13 $A5
.db $FE $B6 $FE $02 $2A $FE $CE $A6
.db $FE $13 $A5 $FE $B6 $FE $02 $2A
.db $FE $CE $A6 $FE $13 $A5 $FE $B6
.db $FE $02 $2A $FE $CE $A6 $FE $13
.db $A5 $FE $B6 $FE $02 $2A $FE $CE
.db $A6 $FE $13 $A5 $FE $B3 $FE $02
.db $2A $FE $B4 $A6 $FE $0D $A5 $FE
.db $01 $B0 $50 $FE $13 $3F $FE $B0
.db $03 $01 $B0 $4F $FE $09 $01 $FE
.db $40 $FE $08 $01 $FE $3F $B0 $02
.db $01 $B0 $4F $FE $07 $01 $FE $40
.db $41 $42 $FE $08 $01 $FE $3F $B0
.db $02 $01 $B0 $4F $FE $06 $01 $FE
.db $40 $FE $02 $44 $FE $41 $FE $08
.db $01 $FE $3F $B0 $02 $01 $B0 $4F
.db $FE $06 $01 $FE $46 $FE $03 $44
.db $08 $01 $FE $3F $B0 $02 $01 $B0
.db $4F $FE $05 $01 $FE $40 $FE $04
.db $44 $08 $01 $FE $3F $B0 $02 $01
.db $B0 $4F $FE $05 $01 $04 $44 $FE
.db $45 $FE $08 $01 $FE $3F $B0 $02
.db $01 $B0 $4F $FE $05 $01 $FE $42
.db $FE $04 $44 $FE $47 $41 $FE $06
.db $01 $FE $3F $B0 $02 $01 $B0 $4F
.db $FE $06 $01 $FE $42 $48 $FE $02
.db $44 $FE $48 $43 $FE $05 $01 $FE
.db $40 $3F $B0 $02 $01 $B0 $4F $FE
.db $04 $01 $FE $40 $41 $FE $02 $01
.db $FE $42 $43 $FE $02 $01 $FE $40
.db $41 $01 $40 $47 $44 $3F $B0 $02
.db $01 $B0 $4F $FE $03 $01 $FE $40
.db $FE $02 $44 $02 $47 $FE $41 $FE
.db $03 $01 $FE $42 $43 $01 $46 $FE
.db $02 $44 $FE $3F $B0 $02 $01 $B0
.db $4F $FE $13 $3F $FE $B0 $02 $01
.db $FE $0F $B1 $FE $50 $3F $FE $05
.db $B1 $FE $02 $FE $11 $01 $FE $42
.db $FE $03 $48 $FE $43 $FE $02 $01
.db $FF

L0C961D:
.db $0E $0F $00 $00 $FE $35 $BC $06
.db $C1 $09 $BC $FE $C4 $FE $06 $C0
.db $FE $B8 $FE $08 $BC $FE $C4 $09
.db $FE $05 $04 $FE $C0 $B8 $FE $06
.db $BC $FE $C1 $B7 $09 $C9 $BB $FE
.db $04 $04 $FE $C0 $C3 $FE $04 $BC
.db $FE $C4 $FE $02 $C0 $FE $09 $B8
.db $C4 $09 $FE $04 $04 $FE $C3 $FE
.db $04 $BC $FE $C4 $09 $FE $02 $04
.db $FE $C0 $C3 $BB $FE $04 $04 $FE
.db $C3 $FE $04 $BC $FE $C4 $09 $FE
.db $03 $04 $FE $C3 $C4 $09 $FE $02
.db $04 $FE $C9 $FE $05 $BC $FE $C4
.db $09 $FE $03 $04 $FE $C3 $BC $C2
.db $BB $04 $C3 $FE $05 $BC $FE $C4
.db $09 $EB $33 $04 $C3 $FE $02 $BC
.db $FE $B7 $09 $B8 $FE $06 $BC $04
.db $C2 $02 $BC $FE $C4 $C0 $09 $C0
.db $C3 $FE $0B $BC $FE $C4 $09 $FE
.db $02 $04 $FE $C3 $FE $0B $BC $FE
.db $C4 $09 $FE $02 $04 $FE $C3 $FE
.db $02 $BC $FF

L0C96C8:
.db $0E $17 $00 $00 $FE $02 $BC $04
.db $C1 $FE $B7 $09 $04 $B8 $FE $04
.db $C1 $0B $BC $FE $B7 $FE $05 $C7
.db $FE $09 $04 $FE $05 $C7 $FE $B8
.db $FE $02 $C1 $07 $BC $FE $C4 $C7
.db $FE $05 $C0 $FE $09 $04 $FE $05
.db $C0 $03 $C7 $FE $C3 $FE $03 $BC
.db $FE $C1 $FE $02 $BC $FE $C4 $C0
.db $09 $FE $0B $04 $03 $C0 $FE $C3
.db $FE $02 $BC $FE $B7 $C7 $B8 $BC
.db $C4 $09 $FE $07 $04 $FE $C9 $C2
.db $BB $FE $05 $04 $FE $C3 $BC $B7
.db $C7 $C0 $C7 $B8 $C4 $09 $04 $C9
.db $BB $FE $04 $04 $FE $C3 $FE $02
.db $BC $03 $C2 $FE $BB $04 $B8 $B7
.db $C7 $C0 $09 $C0 $C7 $C4 $09 $04
.db $C3 $BC $C2 $BB $04 $C9 $FE $06
.db $BC $FE $C4 $04 $FE $02 $C7 $FE
.db $C0 $09 $FE $02 $04 $FE $C0 $C4
.db $09 $C9 $FE $04 $BC $FE $C2 $FE
.db $02 $BC $02 $C1 $03 $BC $FE $C4
.db $09 $FE $02 $C0 $FE $09 $FE $04
.db $04 $FE $C4 $09 $B8 $FE $06 $BC
.db $FE $B7 $FE $02 $C7 $FE $C3 $FE
.db $02 $BC $FE $C4 $09 $FE $03 $04
.db $FE $C9 $BB $FE $02 $04 $FE $C4
.db $09 $C7 $C3 $FE $04 $BC $FE $B7
.db $C7 $FE $02 $C0 $FE $B8 $C1 $BC
.db $C4 $09 $FE $02 $04 $FE $C9 $FE
.db $02 $BC $02 $C2 $FE $C4 $09 $C0
.db $B8 $FE $02 $C1 $FE $B7 $FB $C7
.db $C0 $09 $04 $FE $02 $C7 $FE $B8
.db $BC $C2 $BB $C9 $FE $05 $BC $FE
.db $C4 $09 $04 $FE $04 $C7 $FE $38
.db $C0 $09 $FE $02 $04 $02 $C0 $FE
.db $C7 $C3 $FE $08 $BC $FE $C4 $09
.db $04 $FE $04 $C0 $FE $09 $FE $05
.db $04 $FE $C9 $C2 $FE $0A $BC $FE
.db $BB $FE $0A $04 $FE $C9 $FE $0D
.db $BC $0A $C2 $0C $BC $FF

L0C9806:
.db $0E $0F $00 $00 $FE $24 $BC $08
.db $C1 $07 $BC $FE $B7 $FE $08 $C7
.db $FE $B8 $FE $03 $BC $02 $C1 $FE
.db $B7 $C7 $FE $08 $C0 $FE $C7 $B8
.db $FE $02 $C1 $03 $C7 $FE $C0 $09
.db $FE $07 $04 $FE $C0 $FE $03 $C7
.db $03 $C0 $FE $09 $FE $09 $04 $03
.db $C0 $20 $04 $02 $C2 $FE $BB $FE
.db $0A $04 $FE $C9 $FE $02 $C2 $03
.db $BC $FE $BB $FE $08 $04 $FE $C9
.db $FE $07 $BC $08 $C2 $34 $BC $FF

L0C985E:
.db $0E $0F $00 $00 $FE $06 $BC $FE
.db $C4 $09 $04 $B8 $FE $04 $C1 $08
.db $BC $FE $B7 $09 $04 $FE $05 $C7
.db $FE $B8 $FE $05 $BC $FE $C1 $B7
.db $C7 $09 $04 $FE $05 $C0 $FE $C7
.db $C3 $FE $03 $BC $FE $B7 $FE $02
.db $C7 $FE $C0 $09 $FE $06 $04 $FE
.db $C0 $C3 $FE $02 $C1 $FE $B7 $C7
.db $FE $02 $C0 $FE $09 $FE $04 $04
.db $FE $32 $FE $03 $04 $FE $C3 $FE
.db $03 $C7 $FE $C0 $09 $FE $07 $04
.db $FE $32 $FE $02 $04 $FE $C3 $FE
.db $03 $C0 $FE $09 $04 $32 $FE $09
.db $04 $FE $C3 $32 $FE $0E $04 $FE
.db $C3 $04 $32 $FE $04 $04 $FE $32
.db $FE $03 $04 $02 $32 $02 $04 $FE
.db $32 $C3 $C2 $BB $32 $FE $05 $04
.db $FE $32 $FE $06 $04 $FE $C3 $FE
.db $02 $BC $FE $BB $FE $0C $04 $FE
.db $C3 $FE $03 $BC $FE $BB $FE $05
.db $04 $FE $32 $FE $02 $04 $FE $32
.db $FE $02 $04 $FE $C3 $FE $03 $BC
.db $FE $C4 $FE $0B $04 $FE $C3 $FE
.db $04 $BC $FE $BB $FE $09 $04 $FE
.db $C9 $FE $06 $BC $09 $C2 $02 $BC
.db $FF

L0C9927:
.db $0E $0F $00 $00 $FE $07 $BC $FE
.db $B7 $09 $B8 $FE $0C $BC $FE $C4
.db $C7 $09 $C7 $B8 $FE $0B $BC $FE
.db $B7 $C0 $09 $C0 $C7 $C3 $FE $09
.db $BC $FE $B7 $C7 $09 $FE $02 $04
.db $FE $C0 $C3 $FE $08 $BC $FE $B7
.db $C7 $C0 $09 $FE $03 $04 $FE $C3
.db $FE $04 $BC $03 $C1 $FE $B7 $C7
.db $C0 $09 $FE $04 $04 $FE $C3 $FE
.db $04 $BC $04 $C7 $FE $C0 $09 $FE
.db $05 $04 $FE $C3 $FE $04 $BC $04
.db $C0 $FE $09 $FE $06 $04 $FE $C3
.db $FE $04 $BC $0B $04 $FE $C3 $FE
.db $04 $BC $02 $C2 $FE $BB $FE $02
.db $04 $FE $C9 $BB $FE $04 $04 $FE
.db $C3 $FE $07 $BC $FE $BB $C9 $BC
.db $C4 $FE $04 $04 $FE $C3 $FE $0A
.db $BC $FE $C4 $09 $FE $03 $04 $FE
.db $C3 $FE $0A $BC $FE $C4 $09 $FE
.db $02 $04 $FE $C9 $FE $0B $BC $FE
.db $C4 $09 $04 $C9 $FE $0C $BC $FE
.db $C4 $09 $04 $C3 $FE $06 $BC $FF

L0C99D7:
.db $0E $0F $00 $00 $FE $02 $BC $0C
.db $C1 $03 $BC $FE $B7 $FE $03 $C7
.db $FE $95 $FE $03 $80 $FE $96 $FE
.db $04 $C7 $FE $B8 $BC $C4 $C7 $FE
.db $03 $C0 $FE $97 $91 $FE $02 $81
.db $FE $98 $FE $04 $C0 $FE $C7 $C3
.db $C4 $C0 $09 $FE $02 $04 $FE $93
.db $59 $EB $5B $94 $09 $FE $03 $04
.db $FE $C0 $C3 $C4 $09 $FE $03 $04
.db $FE $93 $59 $EF $5A $94 $09 $FE
.db $04 $04 $FE $C3 $C4 $09 $FE $03
.db $04 $FE $93 $5C $5D $5E $94 $09
.db $FE $04 $04 $FE $C3 $C4 $09 $FE
.db $03 $04 $FE $99 $89 $F7 $88 $9A
.db $09 $FE $04 $04 $FE $C3 $C4 $09
.db $FE $03 $04 $FE $AC $AD $F8 $AC
.db $AD $09 $FE $04 $04 $FE $C3 $C4
.db $09 $FE $03 $04 $FE $8A $8B $38
.db $8A $8B $09 $FE $04 $04 $FE $C3
.db $C4 $09 $FE $0D $04 $FE $C3 $C4
.db $09 $FE $0D $04 $FE $C3 $BC $BB
.db $FE $0C $04 $FE $C9 $FE $03 $BC
.db $04 $C2 $FE $BB $FE $03 $04 $FE
.db $C9 $FE $03 $C2 $09 $BC $FE $BB
.db $04 $C9 $FE $0D $BC $FE $C4 $04
.db $C3 $FE $06 $BC $FF

L0C9AA4:
.db $0E $0F $00 $00 $FE $22 $BC $FE
.db $AF $FE $0A $9E $05 $BC $FE $AE
.db $FE $0A $81 $05 $BC $FE $2D $FE
.db $0A $2A $05 $BC $FE $2D $2A $CB
.db $FE $05 $2A $FE $CB $FE $02 $2A
.db $05 $BC $FE $2D $2A $CC $2B $FE
.db $04 $2A $FE $CC $2B $2A $AC $FE
.db $02 $9E $02 $BC $FE $2D $FE $03
.db $2A $FE $21 $38 $22 $FE $04 $2A
.db $FE $8A $FE $02 $81 $02 $BC $FE
.db $2D $FE $03 $2A $FE $21 $F0 $22
.db $FE $07 $2A $02 $BC $FE $2D $2A
.db $CB $2A $24 $25 $26 $2A $CB $FE
.db $02 $2A $05 $BC $FE $2D $2A $CC
.db $2B $FE $04 $2A $FE $CC $2B $2A
.db $FE $05 $BC $FE $2D $FE $0A $2A
.db $05 $BC $FE $2D $FE $0A $2A $23
.db $BC $FF

L0C9B2E:
.db $0E $0F $00 $00 $FE $1D $BC $FE
.db $AF $FE $02 $9E $02 $BC $FE $AF
.db $9E $FB $FE $06 $9E $02 $BC $FE
.db $AE $FE $02 $81 $02 $BC $FE $AE
.db $81 $38 $FE $06 $81 $02 $BC $FE
.db $A8 $FE $02 $A9 $02 $BC $FE $2D
.db $FE $08 $2A $02 $BC $03 $5F $02
.db $BC $FE $2D $FE $08 $2A $02 $BC
.db $FE $5F $FE $0C $BC $FE $2A $FE
.db $02 $BC $FE $5F $FE $0C $BC $FE
.db $2A $FE $02 $BC $FE $5F $FE $04
.db $BC $FE $AF $FE $06 $9E $FE $AD
.db $2D $AC $AD $5F $AC $9E $FE $02
.db $BC $FE $AE $FE $06 $81 $FE $8B
.db $2D $8A $8B $5F $8A $81 $FE $02
.db $BC $FE $2D $FE $08 $2A $FE $A8
.db $6B $5F $AA $A9 $FE $02 $BC $FE
.db $2D $F0 $FE $07 $2A $FE $A6 $FE
.db $04 $5F $02 $BC $FE $2D $FE $0A
.db $2A $23 $BC $FF

L0C9BCA:
.db $0E $17 $00 $00 $FE $18 $BC $05
.db $9E $09 $BC $FE $AF $FE $06 $9E
.db $03 $BC $05 $81 $09 $BC $FE $AE
.db $FE $06 $81 $03 $BC $02 $A9 $FE
.db $2A $EB $2C $FE $09 $BC $FE $2D
.db $EB $2C $EB $2C $FE $02 $2A $03
.db $BC $02 $5F $03 $2A $09 $BC $FE
.db $2D $FE $06 $2A $15 $BC $03 $2A
.db $15 $BC $03 $2A $15 $BC $FE $2D
.db $FE $02 $2A $03 $BC $11 $9E $FE
.db $AD $2D $FE $02 $2A $03 $BC $11
.db $81 $FE $8B $2D $FE $02 $2A $03
.db $BC $11 $A9 $FE $6B $FE $03 $2A
.db $03 $BC $12 $5F $03 $2A $4B $BC
.db $FF

L0C9C3B:
.db $0E $0F $00 $00 $FE $11 $BC $FE
.db $AF $FE $04 $9E $FE $AD $FB $AC
.db $FE $06 $9E $02 $BC $FE $AE $FE
.db $04 $81 $FE $8B $38 $8A $FE $06
.db $81 $02 $BC $FE $A8 $FE $05 $A9
.db $FE $2A $A8 $FE $06 $A9 $02 $BC
.db $FE $A6 $FE $05 $A5 $FE $2A $A6
.db $FE $06 $A5 $02 $BC $FE $A6 $A5
.db $FE $09 $3F $03 $A5 $02 $BC $FE
.db $A6 $A5 $3F $53 $FE $05 $55 $FE
.db $54 $3F $A6 $FE $02 $A5 $02 $BC
.db $FE $A6 $A5 $3F $30 $59 $FE $03
.db $49 $FE $5A $31 $3F $A6 $FE $02
.db $A5 $02 $BC $FE $A6 $A5 $3F $30
.db $59 $49 $EB $4A $5A $31 $3F $A6
.db $FE $02 $A5 $02 $BC $FE $A6 $A5
.db $3F $30 $5C $FE $03 $5D $FE $5E
.db $31 $3F $A6 $FE $02 $A5 $02 $BC
.db $FE $A6 $A5 $3F $51 $FE $05 $56
.db $FE $52 $3F $A6 $FE $02 $A5 $02
.db $BC $FE $A6 $A5 $FE $09 $3F $FE
.db $A6 $FE $02 $A5 $02 $BC $FE $A6
.db $A5 $FE $09 $A9 $FE $A6 $FE $02
.db $A5 $02 $BC $FE $A6 $FE $0D $A5
.db $11 $BC $FF

L0C9CFE:
.db $0E $17 $00 $00 $FE $16 $9E $02
.db $BC $16 $9E $02 $BC $07 $81 $FE
.db $9E $FE $09 $81 $FE $9E $FE $04
.db $81 $02 $BC $0D $A9 $09 $2A $02
.db $BC $0D $5F $09 $2A $02 $BC $0D
.db $A5 $09 $2A $02 $BC $0D $A5 $09
.db $2A $0F $BC $09 $2A $13 $BC $FE
.db $00 $FE $07 $BC $11 $00 $07 $BC
.db $FE $00 $FE $05 $BC $FE $00 $FE
.db $09 $BC $FE $00 $FE $07 $BC $FE
.db $00 $FE $05 $BC $FE $00 $FE $09
.db $BC $FE $00 $FE $07 $BC $FE $00
.db $FE $05 $BC $FE $00 $FE $09 $BC
.db $FE $00 $FE $0D $BC $FE $00 $FE
.db $09 $BC $FE $00 $FE $0D $BC $FE
.db $00 $FE $10 $BC $FF

L0C9D7B:
.db $1D $1F $00 $00 $FE $02 $DC $FE
.db $D7 $FE $04 $BC $02 $C1 $0B $BC
.db $09 $C1 $05 $BC $FE $DB $FE $03
.db $BC $FE $B7 $FE $02 $C7 $FE $B8
.db $FE $09 $BC $FE $B7 $FE $09 $C7
.db $FE $B8 $FE $04 $BC $FE $DB $FE
.db $02 $BC $FE $B7 $C7 $FE $02 $C0
.db $FE $C7 $B8 $FE $07 $BC $FE $B7
.db $C7 $FE $09 $C0 $FE $C7 $B8 $FE
.db $03 $BC $FE $DB $BC $C4 $C7 $C0
.db $09 $04 $C0 $C7 $B8 $FE $05 $BC
.db $FE $B7 $C7 $C0 $09 $FE $08 $04
.db $FE $C0 $C7 $C3 $FE $02 $BC $FE
.db $DB $BC $C4 $C0 $09 $FE $03 $04
.db $FE $C0 $C7 $C3 $FE $03 $BC $FE
.db $C4 $C7 $C0 $09 $FE $0A $04 $FE
.db $C0 $C3 $FE $02 $80 $FE $9A $BC
.db $C4 $09 $FE $05 $04 $FE $C0 $C3
.db $FE $03 $BC $FE $C4 $C0 $09 $FE
.db $0C $04 $FE $C3 $FE $02 $81 $FE
.db $8B $BC $C4 $09 $FE $06 $04 $FE
.db $C3 $FE $04 $BC $FE $BB $FE $0D
.db $04 $FE $C3 $FE $03 $2A $FE $BC
.db $C4 $09 $FE $06 $04 $FE $C3 $FE
.db $05 $BC $FE $BB $FE $04 $04 $05
.db $EA $03 $04 $FE $C3 $FE $03 $2A
.db $FE $BC $C4 $09 $FE $06 $04 $FE
.db $C3 $FE $06 $BC $FE $BB $FE $03
.db $04 $05 $EA $03 $04 $FE $C3 $89
.db $FE $02 $2A $FE $BC $C4 $09 $FE
.db $03 $04 $FE $EA $FE $02 $04 $FE
.db $B8 $FE $07 $BC $FE $BB $FE $03
.db $04 $04 $EA $03 $04 $FE $C3 $8B
.db $2C $2A $BC $C4 $09 $FE $02 $04
.db $02 $EA $02 $04 $FE $C7 $B8 $FE
.db $07 $BC $02 $C2 $FE $BB $04 $FE
.db $03 $EA $03 $04 $FE $C3 $BC $39
.db $3B $BC $C4 $09 $FE $02 $04 $03
.db $EA $FE $04 $C0 $C7 $B8 $FE $08
.db $BC $FE $B7 $FE $02 $04 $03 $EA
.db $02 $04 $FE $C3 $BC $39 $3B $BC
.db $C4 $09 $FE $03 $04 $04 $EA $FE
.db $C0 $C7 $B8 $FE $06 $C1 $FE $B7
.db $C7 $09 $04 $FE $03 $EA $02 $04
.db $FE $C3 $BC $39 $3B $BC $C4 $09
.db $FE $03 $04 $05 $EA $FE $C0 $FE
.db $08 $C7 $FE $C0 $09 $FE $02 $04
.db $02 $EA $02 $04 $FE $C3 $BC $39
.db $3B $BC $C4 $09 $FE $04 $04 $05
.db $EA $08 $C0 $FE $09 $FE $02 $04
.db $03 $EA $FE $04 $C9 $FE $02 $BC
.db $FE $39 $3B $BC $C4 $09 $FE $03
.db $04 $13 $EA $FE $04 $C9 $FE $03
.db $BC $FE $2D $2A $BC $C4 $09 $FE
.db $04 $04 $11 $EA $FE $04 $C9 $FE
.db $04 $BC $FE $2D $2A $BC $C4 $09
.db $FE $05 $04 $0F $EA $FE $04 $C9
.db $FE $05 $BC $FE $2D $2A $FE $02
.db $BC $FE $BB $FE $06 $04 $06 $EA
.db $09 $04 $FE $C3 $FE $04 $BC $FE
.db $AD $2D $2A $AC $FE $02 $9E $02
.db $C5 $FE $C2 $BB $FE $11 $04 $FE
.db $C3 $FE $04 $BC $FE $8B $2D $2A
.db $8A $FE $02 $81 $02 $C6 $FE $BC
.db $C4 $FE $09 $04 $FE $C9 $FE $03
.db $C2 $FE $BB $FE $03 $04 $FE $B8
.db $FE $04 $BC $08 $2A $FE $BC $C4
.db $09 $FE $06 $04 $FE $C9 $C2 $FE
.db $04 $BC $FE $C4 $FE $03 $04 $FE
.db $C7 $B8 $FE $0D $BC $FE $BB $04
.db $C9 $C2 $BB $04 $C9 $FE $06 $BC
.db $FE $B7 $09 $FE $02 $04 $FE $C0
.db $C7 $B8 $FE $03 $BC $FE $95 $FE
.db $08 $80 $FE $83 $F3 $82 $96 $BC
.db $C2 $FE $06 $BC $FE $B7 $C7 $09
.db $FE $03 $04 $FE $C0 $C7 $C3 $FE
.db $02 $BC $FE $97 $91 $FE $07 $81
.db $FE $85 $F4 $84 $98 $BC $FE $02
.db $C1 $04 $BC $FE $B7 $C7 $C0 $09
.db $FE $03 $04 $FE $EA $C0 $C3 $FE
.db $02 $BC $FE $D8 $2B $FE $0A $2A
.db $FE $D9 $C4 $FE $02 $C7 $03 $C1
.db $FE $B7 $C7 $C0 $09 $FE $02 $04
.db $03 $EA $FE $04 $C3 $FE $02 $BC
.db $FE $D8 $2B $FE $0A $2A $FE $D9
.db $C4 $FE $02 $C0 $04 $C7 $FE $C0
.db $09 $FE $02 $04 $02 $EA $03 $04
.db $FE $C3 $FE $02 $BC $FE $D8 $2B
.db $FE $03 $2A $FE $F0 $FE $06 $2A
.db $FE $D9 $C4 $09 $04 $FE $04 $C0
.db $FE $09 $FE $08 $04 $FE $C3 $FE
.db $02 $BC $FE $D8 $2B $FE $0A $2A
.db $FE $D9 $BC $BB $FE $0C $04 $FE
.db $C9 $C2 $FE $03 $BC $FE $D4 $FE
.db $0B $DC $FE $D5 $FE $02 $BC $0C
.db $C2 $04 $BC $FF

L0CA077:
.db $0E $0F $00 $00 $FE $06 $D3 $FE
.db $B2 $FE $02 $01 $FE $B5 $FE $06
.db $D3 $06 $D2 $FE $BD $FE $02 $01
.db $FE $9F $FE $06 $D2 $FE $D3 $B2
.db $FE $05 $D1 $02 $01 $05 $D1 $FE
.db $B5 $D3 $D2 $BD $FE $0C $01 $FE
.db $9F $D2 $D3 $B2 $FE $0C $01 $FE
.db $B5 $D3 $D2 $BD $FE $02 $01 $FE
.db $2A $CB $FE $04 $2A $FE $CB $2A
.db $FE $02 $01 $FE $9F $D2 $FE $02
.db $D1 $02 $01 $FE $2A $CC $2B $FE
.db $03 $2A $FE $CC $2B $FE $02 $01
.db $02 $D1 $04 $01 $02 $2A $FE $59
.db $EF $49 $5A $FE $02 $2A $08 $01
.db $FE $2A $CB $5C $FE $02 $5D $FE
.db $5E $CB $2A $FE $04 $01 $02 $D0
.db $02 $01 $FE $2A $CC $2B $FE $03
.db $2A $FE $CC $2B $FE $02 $01 $02
.db $D0 $FE $D3 $B2 $FE $02 $01 $08
.db $2A $02 $01 $FE $B5 $D3 $D2 $BD
.db $FE $0C $01 $FE $9F $D2 $D3 $B2
.db $FE $0C $01 $FE $B5 $D3 $D2 $BD
.db $FE $05 $D0 $02 $01 $05 $D0 $FE
.db $9F $D2 $FE $06 $D3 $FE $B2 $FE
.db $02 $01 $FE $B5 $FE $06 $D3 $FF

L0CA13F:
.dw L0CA23D
.dw L0CA366
.dw L0CA38E
.dw L0CA397
.dw L0CA3A1
.dw L0CA3A6
.dw L0CA377
.dw L0CA3D4
.dw L0CA3AB
.dw L0CA25A
.dw L0CA38E
.dw L0CA2E5
.dw L0CA2F6
.dw L0CA38E
.dw L0CA3C5
.dw L0CA26F
.dw L0CA338
.dw L0CA38E
.dw L0CA384
.dw L0CA359
.dw L0CA2AA
.dw L0CA3D4
.dw L0CA313
.dw L0CA38E
.dw L0CA627
.dw L0CA2BF
.dw L0CA725
.dw L0CA6FF
.dw L0CA3CA
.dw L0CA39C
.dw L0CA54C
.dw L0CA38E
.dw L0CA3CF
.dw L0CA491
.dw L0CA725
.dw L0CA510
.dw L0CA4CF
.dw L0CA454
.dw L0CA468
.dw L0CA507
.dw L0CA4F8
.dw L0CA76B
.dw L0CA3FC
.dw L0CA401
.dw L0CA389
.dw L0CA406
.dw L0CA3F7
.dw L0CA47F
.dw L0CA48C
.dw L0CA406
.dw L0CA406
.dw L0CA406
.dw L0CA406
.dw L0CA23D
.dw L0CA496
.dw L0CA406
.dw L0CA406
.dw L0CA7B1
.dw L0CA417
.dw L0CA41C
.dw L0CA432
.dw L0CA432
.dw L0CA437
.dw L0CA70A
.dw L0CA70A
.dw L0CA445
.dw L0CA44A
.dw L0CA44F
.dw L0CA459
.dw L0CA45E
.dw L0CA3CF
.dw L0CA463
.dw L0CA6FF
.dw L0CA475
.dw L0CA47A
.dw L0CA6FF
.dw L0CA70A
.dw L0CA3CF
.dw L0CA3CF
.dw L0CA3CF
.dw L0CA3CF
.dw L0CA3CF
.dw L0CA3CF
.dw L0CA3CF
.dw L0CA3CF
.dw L0CA4D4
.dw L0CA4D9
.dw L0CA4FD
.dw L0CA4FD
.dw L0CA4FD
.dw L0CA502
.dw L0CA510
.dw L0CA515
.dw L0CA51E
.dw L0CA523
.dw L0CA52E
.dw L0CA51E
.dw L0CA533
.dw L0CA543
.dw L0CA6FF
.dw L0CA56B
.dw L0CA598
.dw L0CA5A3
.dw L0CA5E2
.dw L0CA5F2
.dw L0CA5F2
.dw L0CA603
.dw L0CA603
.dw L0CA603
.dw L0CA608
.dw L0CA23D
.dw L0CA674
.dw L0CA69F
.dw L0CA6CA
.dw L0CA6FF
.dw L0CA6FF
.dw L0CA440
.dw L0CA6FF
.dw L0CA70A
.dw L0CA70A
.dw L0CA70A
.dw L0CA70A
.dw L0CA70A
.dw L0CA70A
.dw L0CA70A
.dw L0CA70A
.dw L0CA70A

; width
; height
; unknown
; unknown ; seems to be index into L0C8000 (general background)
; then a list of "object"?
; - unknown (often $01, and $EF for "stop")
; - y position, x position, index in L0C8000
; only when the first is $01?
; $EB is followed by 4 unknown bytes
; the first 2 seems to be the position

L0CA23D: ; Ram village
.db $17 $0E $06 $01
.db $01 $00 $03 $03 ; left house
.db $01 $00 $0D $02 ; right house
.db $01 $02 $08 $04 ; shadow left house
.db $01 $02 $12 $04 ; shadow right house
.db $01 $0A $0B $05 ; tree
.db $01 $0A $0C $05 ; tree
.db $EF

L0CA25A:
.db $17 $0E $06 $01
.db $01 $05 $02 $03
.db $01 $05 $07 $02
.db $01 $07 $0C $04
.db $01 $02 $0F $08
.db $EF

L0CA26F:
.db $17 $0E $06 $01
.db $00
.db $02
.db $03 $08 $09 $1C
.db $01 $00 $10 $03
.db $01 $01 $04 $0E
.db $01 $02 $09 $12
.db $01 $02 $15 $04
.db $01 $03 $0B $08
.db $05 $04 $06
.db $EB $05 $04 $07 $37
.db $05 $04 $12 $0A
.db $05 $05 $12 $0C
.db $05 $06 $15 $01
.db $05 $06 $06 $F7
.db $05 $07 $06 $F8
.db $EF

L0CA2AA: ; rigel village
.db $17 $15 $06 $26
.db $01 $09 $02 $02
.db $01 $07 $0D $03
.db $01 $0B $07 $04
.db $01 $09 $12 $04
.db $EF

L0CA2BF:
.db $17 $0E $06 $14
.db $00 $05 $09 $06
.db $0D $49 $04 $05
.db $08 $06 $59 $04
.db $05 $0E $06 $5A
.db $03 $07 $09 $0D
.db $5D $05 $06 $0B
.db $EF $05 $07 $08
.db $5C $05 $07 $0E $5E $EF

L0CA2E5: ; Nuibaba's Abode
.db $17 $0E $06 $14
.db $01 $01 $0F $0E
.db $01 $02 $14 $12
.db $01 $01 $03 $0B
.db $EF

L0CA2F6: ; Grieth's Citadel
.db $17 $0E $06 $14
.db $01 $02 $03 $0E
.db $01 $02 $09 $0E
.db $01 $02 $0F $0E
.db $01 $03 $08 $12
.db $01 $03 $0E $12
.db $01 $03 $14 $12
.db $EF

L0CA313:
.db $17 $0E $06 $14
.db $01 $02 $02 $0E
.db $01 $02 $07 $0E
.db $01 $01 $0C $22
.db $00 $03 $0E $06
.db $13 $35 $04 $03
.db $0D $06 $36 $04
.db $03 $13 $06 $9D
.db $01 $07 $10 $0F
.db $EF

L0CA338: ; probably Desaix's Fortress
.db $17 $0E $06 $14
.db $01 $01 $03 $22
.db $01 $07 $07 $0F
.db $00 $03 $04 $06
.db $0A $35 $04 $03
.db $0A $06 $9D $04
.db $03 $04 $06 $36
.db $01 $01 $0C $22
.db $EF

L0CA359:
.db $17 $15 $06 $39 $01 $04 $07 $09
.db $05 $05 $0A $03 $EF

L0CA366: ; Southern Fortress
.db $17 $0E $06 $14 $01 $01 $03 $0E
.db $01 $02 $08 $12 $01 $01 $09 $0B
.db $EF

L0CA377: ; Pirate Throne
.db $17 $0E $06 $14
.db $05 $03 $0F
.db $EB $05 $03 $10 $1E
.db $EF

L0CA384: ; Sluice Gate
.db $0F $0E $06 $20 $EF

L0CA389: ; part of Temple of Mila
.db $0F $15 $06 $1E $EF

L0CA38E: ; Mila Shrine
.db $17 $0E $06 $11
.db $01 $02 $0A $0A
.db $EF

L0CA397:
.db $17 $15 $06 $1C $EF

L0CA39C:
.db $17 $15 $06 $13 $EF

L0CA3A1:
.db $0F $15 $06 $1F $EF

L0CA3A6: ; Novis Greatport
.db $17 $0E $06 $1A $EF

L0CA3AB:
.db $17 $0E $06 $1B $01 $00 $10 $02
.db $04 $02 $15 $06 $4F $05 $06 $15
.db $3F $05 $01 $03 $50 $05 $0D $04
.db $B1 $EF

L0CA3C5:
.db $17 $15 $06 $19 $EF

L0CA3CA:
.db $17 $0E $06 $17 $EF

L0CA3CF:
.db $17 $0E $06 $16 $EF

L0CA3D4:
.db $17 $0E $06 $11
.db $05 $03 $0B $2A
.db $05 $00 $09 $B7
.db $05 $00 $0A $09
.db $05 $01 $0A $09
.db $05 $00 $0D $B8
.db $00 $00 $0B $01
.db $0C $04 $01 $03
.db $0A $0A $EF

L0CA3F7:
.db $0F $0E $06 $27 $EF

L0CA3FC:
.db $17 $0E $06 $18 $EF

L0CA401:
.db $0F $0E $06 $1D $EF

L0CA406:
.db $17 $0E $06 $15 $05 $08 $05 $FA
.db $05 $05 $06 $FA $05 $06 $0B $FA
.db $EF

L0CA417:
.db $17 $0E $06 $15 $EF

L0CA41C:
.db $0F $0E $06 $23 $00 $00 $00 $0E
.db $01 $BC $00 $00 $0D $0E $0F $BC
.db $03 $00 $02 $0C $BC $EF

L0CA432:
.db $0F $0E $06 $23 $EF

L0CA437:
.db $0F $0E $06 $24 $01 $09 $0B $0D
.db $EF

L0CA440:
.db $0F $0E $06 $24 $EF

L0CA445:
.db $0F $1D $06 $28 $EF

L0CA44A:
.db $17 $0E $06 $29 $EF

L0CA44F:
.db $0F $0E $06 $15 $EF

L0CA454:
.db $0F $0E $06 $11 $EF

L0CA459:
.db $0F $0E $06 $2A $EF

L0CA45E:
.db $0F $0E $06 $2D $EF

L0CA463:
.db $0F $0E $06 $2F $EF

L0CA468:
.db $0F $0E $06 $30 $05 $03 $07 $EB
.db $05 $03 $08 $5B $EF

L0CA475:
.db $0F $0E $06 $31 $EF

L0CA47A:
.db $0F $0E $06 $32 $EF

L0CA47F:
.db $17 $0E $06 $33 $05 $05 $12 $FC
.db $05 $05 $13 $2C $EF

L0CA48C:
.db $0F $0E $06 $34 $EF

L0CA491:
.db $17 $0E $06 $35 $EF

L0CA496:
.db $0E $0F $00 $00 $00 $0E $0F $BC
.db $00 $03 $02 $09 $0D $2A $00 $00
.db $01 $01 $0D $9E $03 $02 $01 $0D
.db $81 $04 $03 $01 $09 $2D $04 $00
.db $07 $02 $2D $04 $08 $08 $09 $2B
.db $05 $01 $01 $AF $05 $02 $01 $AE
.db $05 $08 $07 $38 $05 $09 $07 $FB
.db $EF

L0CA4CF:
.db $1F $1D $06 $21 $EF

L0CA4D4:
.db $0F $0E $06 $38 $EF

L0CA4D9:
.db $0F $0E $06 $2A $04 $05 $00 $08
.db $BC $04 $05 $01 $08 $C4 $05 $05
.db $02 $C7 $05 $06 $02 $C0 $05 $07
.db $02 $09 $05 $08 $02 $09 $EF

L0CA4F8:
.db $0F $0E $06 $2A $EF

L0CA4FD:
.db $17 $0E $06 $3A $EF

L0CA502:
.db $17 $0E $06 $3C $EF

L0CA507:
.db $1D $0F $06 $3B $05 $0D $0A $E8
.db $EF

L0CA510:
.db $11 $17 $06 $3D $EF

L0CA515:
.db $0E $0F $06 $3E $05 $06 $04 $2A
.db $EF

L0CA51E:
.db $15 $17 $06 $3F $EF

L0CA523:
.db $15 $0F $06 $40 $00 $07 $07 $09
.db $09 $2A $EF

L0CA52E:
.db $0E $0F $06 $3E $EF

L0CA533:
.db $15 $0F $06 $40 $03 $06 $07 $09
.db $2A $00 $07 $07 $09 $09 $2A $EF

L0CA543:
.db $0E $0F $06 $3E $05 $09 $08 $2A
.db $EF

L0CA54C:
.db $15 $17 $06 $3F $00 $05 $15 $08
.db $17 $BC $05 $06 $0B $2A $05 $07
.db $0B $2A $05 $09 $0B $F4 $05 $08
.db $0B $F3 $05 $04 $0C $FC $EF

L0CA56B:
.db $15 $0F $06 $40 $00 $0D $04 $0F
.db $0D $2A $00 $05 $00 $08 $02 $BC
.db $04 $07 $03 $0F $2D $05 $09 $0A
.db $2A $05 $12 $08 $FB $05 $11 $08
.db $38 $00 $07 $07 $09 $09 $2A $04
.db $11 $09 $12 $2B $EF

L0CA598:
.db $0E $0F $06 $3E $00 $06 $04 $09
.db $08 $2A $EF

L0CA5A3:
.db $15 $17 $06 $3F $00 $05 $07 $09
.db $10 $2A $03 $03 $07 $11 $9E $03
.db $04 $07 $11 $81 $04 $11 $0C $13
.db $2A $00 $0E $0B $13 $0F $2A $00
.db $09 $15 $13 $17 $BC $04 $05 $11
.db $09 $2A $05 $02 $0B $BC $05 $13
.db $14 $2A $05 $0F $12 $FB $05 $10
.db $12 $38 $05 $13 $12 $2A $EF

L0CA5E2:
.db $15 $0F $06 $40 $00 $04 $04 $12
.db $0D $2A $04 $0B $03 $0F $2D $EF

L0CA5F2:
.db $15 $17 $06 $3F $00 $02 $08 $06
.db $0F $BC $00 $0F $0C $13 $14 $BC
.db $EF

L0CA603:
.db $15 $17 $06 $3F $EF

L0CA608:
.db $15 $17 $06 $3F $00 $05 $15 $08
.db $17 $BC $00 $02 $08 $06 $0F $BC
.db $00 $0F $0C $13 $14 $BC $05 $09
.db $0B $F4 $05 $08 $0B $F3 $EF

L0CA627:
.db $0E $0F $06 $2E $05 $06 $0E $B5
.db $05 $06 $0F $D3 $05 $07 $0E $9F
.db $05 $07 $0F $D2 $05 $08 $0E $B5
.db $05 $08 $0F $D3 $05 $09 $0E $9F
.db $05 $09 $0F $D2 $05 $06 $00 $D3
.db $05 $06 $01 $B2 $05 $07 $00 $D2
.db $05 $07 $01 $BD $05 $08 $00 $D3
.db $05 $08 $01 $B2 $05 $09 $00 $D2
.db $05 $09 $01 $BD $05 $05 $07 $FC
.db $05 $05 $08 $2C $EF

L0CA674:
.db $0E $0F $06 $2E $00 $05 $04 $0A
.db $0B $01 $05 $06 $0E $B5 $05 $06
.db $0F $D3 $05 $07 $0E $9F $05 $07
.db $0F $D2 $05 $08 $0E $B5 $05 $08
.db $0F $D3 $05 $09 $0E $9F $05 $09
.db $0F $D2 $EF

L0CA69F:
.db $0E $0F $06 $2E $00 $05 $04 $0A
.db $0B $01 $05 $06 $00 $D3 $05 $06
.db $01 $B2 $05 $07 $00 $D2 $05 $07
.db $01 $BD $05 $08 $00 $D3 $05 $08
.db $01 $B2 $05 $09 $00 $D2 $05 $09
.db $01 $BD $EF

L0CA6CA:
.db $0E $0F $06 $2E $00 $05 $04 $0A
.db $0B $01 $05 $06 $00 $D3 $05 $06
.db $01 $B2 $05 $07 $00 $D2 $05 $07
.db $01 $BD $05 $08 $00 $D3 $05 $08
.db $01 $B2 $05 $09 $00 $D2 $05 $09
.db $01 $BD $03 $0D $07 $08 $D0 $03
.db $0E $06 $09 $D3 $EF

L0CA6FF:
.db $0E $0F $06 $2E $00 $05 $04 $0A
.db $0B $01 $EF

L0CA70A:
.db $0E $0F $06 $2E $00 $05 $04 $0A
.db $0B $01 $05 $0C $0E $D1 $05 $0C
.db $0F $B5 $05 $0D $0E $D0 $05 $0D
.db $0F $9F $EF

L0CA725:
.db $0E $0F $06 $2E $05 $07 $07 $EB
.db $05 $07 $08 $4A $03 $00 $06 $09
.db $D3 $03 $01 $06 $09 $D2 $03 $02
.db $07 $08 $D1 $05 $06 $00 $D3 $05
.db $06 $01 $B2 $05 $07 $00 $D2 $05
.db $07 $01 $BD $05 $08 $00 $D3 $05
.db $08 $01 $B2 $05 $09 $00 $D2 $05
.db $09 $01 $BD $03 $0D $07 $08 $D0
.db $03 $0E $06 $09 $D3 $EF

L0CA76B:
.db $0E $0F $06 $2E $05 $07 $07 $EB
.db $05 $07 $08 $4A $03 $0D $07 $08
.db $D0 $03 $0E $06 $09 $D3 $03 $00
.db $06 $09 $D3 $03 $01 $06 $09 $D2
.db $03 $02 $07 $08 $D1 $05 $06 $0E
.db $B5 $05 $06 $0F $D3 $05 $07 $0E
.db $9F $05 $07 $0F $D2 $05 $08 $0E
.db $B5 $05 $08 $0F $D3 $05 $09 $0E
.db $9F $05 $09 $0F $D2 $EF

L0CA7B1:
.db $0E $0F $06 $2E $00 $05 $04 $0A
.db $0B $01 $01 $06 $07 $0A $03 $0D
.db $07 $08 $D0 $03 $0E $06 $09 $D3
.db $03 $00 $06 $09 $D3 $03 $01 $06
.db $09 $D2 $03 $02 $07 $08 $D1 $05
.db $06 $0E $B5 $05 $06 $0F $D3 $05
.db $07 $0E $9F $05 $07 $0F $D2 $05
.db $08 $0E $B5 $05 $08 $0F $D3 $05
.db $09 $0E $9F $05 $09 $0F $D2 $EF

L0CA7F9:
    LDX $7434
    DEX
    TXA
    ASL
    TAX
    LDA L0CA13F.w,X
    STA $06
    LDA (L0CA13F.w + 1),X
    STA $07
    LDY #0
    STY $78D9
    LDA ($06),Y
    STA $7440
    INY
    LDA ($06),Y
    STA $7441
    INY
    STY $78D9
L0CA81E:
    LDY $78D9
    JSR L0CA9B4.w
    LDY #0
    LDA ($06),Y
    CMP #239
    BEQ L0CA84C
    STA $78D6
    INY
    JSR L0CA9B4.w
    LDY #0
    STY $78D9
    LDA $78D6
    JSR L0FC34C.w

L0CA83E:
.dw L0CA84D
.dw L0CA8A0
.dw L0CA8BB
.dw L0CA911
.dw L0CA915
.dw L0CA963
.dw L0CA985

L0CA84C:
    RTS

L0CA84D:
    LDY $78D9
    LDA ($06),Y
    STA $78D4
    JSR L0FCEBF.w
    LDY $78D9
    INY
    LDA ($06),Y
    STA $78D3
    TAX
    JSR L0CA9A9.w
    INY
    LDA ($06),Y
    SEC
    SBC $78D4
    STA $0A
    INC $0A
    INY
    LDA ($06),Y
    SEC
    SBC $78D3
    STA $0B
    INC $0B
    INY
    LDA ($06),Y
    STA $78D6
    INY
    STY $78D9
L0CA885:
    LDY #0
L0CA887:
    STA ($70),Y
    INY
    CPY $0B
    BNE L0CA887
    DEC $0A
    BEQ L0CA89D
    LDX #32
    JSR L0CA9A9.w
    LDA $78D6
    JMP L0CA885.w

L0CA89D:
    JMP L0CA81E.w

L0CA8A0:
    LDY $78D9
    LDA ($06),Y
    STA $04
    INY
    LDA ($06),Y
    STA $05
    INY
    STY $78D9
    LDA ($06),Y
    JSR L0FD7C1.w
    INC $78D9
    JMP L0CA81E.w

L0CA8BB:
    LDY $78D9
    LDA ($06),Y
    STA $04
    INY
    LDA ($06),Y
    STA $05
    INY
    LDA ($06),Y
    BMI L0CA8D3
    STA $78D5
    LDA #0
    BEQ L0CA8DA
L0CA8D3:
    AND #127
    STA $78D5
    LDA #1
L0CA8DA:
    STA $78D1
    INY
    STY $78D9
    LDA ($06),Y
    STA $78D6
L0CA8E6:
    JSR L0FD7C1.w
    LDA $78D1
    BNE L0CA8FA
    LDA $05
    CLC
    ADC $0B
    STA $05
    INC $05
    JMP L0CA903.w

L0CA8FA:
    LDA $04
    CLC
    ADC $0A
    STA $04
    INC $04
L0CA903:
    LDA $78D6
    DEC $78D5
    BNE L0CA8E6
    INC $78D9
    JMP L0CA81E.w

L0CA911:
    LDA #0
    BEQ L0CA917
L0CA915:
    LDA #1
L0CA917:
    STA $78D1
    LDY $78D9
    LDA ($06),Y
    STA $78D4
    JSR L0FCEBF.w
    LDY $78D9
    INY
    LDA ($06),Y
    STA $78D3
    TAX
    JSR L0CA9A9.w
    INY
    LDA $78D1
    BEQ L0CA948
    LDA ($06),Y
    SEC
    SBC $78D4
    STA $0A
    INC $0A
    LDA #1
    STA $0B
    BNE L0CA956
L0CA948:
    LDA ($06),Y
    SEC
    SBC $78D3
    STA $0B
    INC $0B
    LDA #1
    STA $0A
L0CA956:
    INY
    LDA ($06),Y
    STA $78D6
    INY
    STY $78D9
    JMP L0CA885.w

L0CA963:
    LDY $78D9
    LDA ($06),Y
    JSR L0FCEBF.w
    LDY $78D9
    INY
    LDA ($06),Y
    TAX
    JSR L0CA9A9.w
    INY
    STY $78D9
    LDA ($06),Y
    LDY #0
    STA ($70),Y
    INC $78D9
    JMP L0CA81E.w

L0CA985:
    LDA $06
    STA $78D7
    LDA $07
    STA $78D8
    LDY $78D9
    LDA ($06),Y
    STA $0A
    JSR L0FCD6E.w
    INC $78D9
    LDA $78D7
    STA $06
    LDA $78D8
    STA $07
    JMP L0CA81E.w

L0CA9A9:
    TXA
    CLC
    ADC $70
    STA $70
    BCC L0CA9B3
    INC $71
L0CA9B3:
    RTS

L0CA9B4:
    TYA
    CLC
    ADC $06
    STA $06
    BCC L0CA9BE
    INC $07
L0CA9BE:
    RTS

L0CA9BF:
    LDA $0A
    ASL
    TAX
    LDA L0CA9DA.w,X
    STA $02
    LDA (L0CA9DA.w + 1),X
    STA $03
    LDY #0
L0CA9CF:
    LDA ($02),Y
    STA $7EB5,Y
    INY
    CMP #239
    BNE L0CA9CF
    RTS

L0CA9DA:
.dw L0CA9EA
.dw L0CA9F2
.dw L0CA9F6
.dw L0CA9FB
.dw L0CAA01
.dw L0CAA05
.dw L0CAA0B
.dw L0CAA11

L0CA9EA:
.db $0B $86 $1B $0F $29 $87 $07 $EF

L0CA9F2:
.db $11 $05 $28 $EF

L0CA9F6:
.db $09 $02 $02 $2F $EF

L0CA9FB:
.db $0C $1A $0F $25 $0A $EF

L0CAA01:
.db $2D $0A $0F $EF

L0CAA05:
.db $10 $01 $29 $87 $07 $EF

L0CAA0B:
.db $08 $01 $08 $2F $11 $EF

L0CAA11:
.db $1C $85 $05 $12 $EF

L0CAA16:
    LDA $797F
    BEQ L0CAA23
    LDA $36
    AND #1
    ASL
    STA $78DA
L0CAA23:
    LDA $78E2
    CLC
    ADC $78DA
    STA $D1
    LDA $78D4
    STA $3A
    LDA $78D3
    SEC
    SBC $78DA
    STA $3B
    LDA #1
    STA $42
    LDA #0
    STA $3C
    STA $41
    STA $3F
    STA $40
    LDA #32
    STA $3E
    JSR L0FCAB7.w
    LDA $059C
    JSR L0FC34C.w

.dw L0FC73D
.dw L0CAA5F
.dw L0CAA97
.dw L0CAADD
.dw L0CAB0B

L0CAA5F:
    LDA #32
    STA $7D91
    LDA #33
    STA $7D92
    LDA #17
    STA $7D93
    LDA #32
    STA $7D9D
    LDA #16
    STA $7D9E
    LDA #0
    STA $7DA0
    LDA #128
    STA $28
    INC $059C
    LDA #16
    STA $78D5
    LDA #5
    STA $4A
    LDA #13
    JSR L0FCA94.w
    LDA #13
    JMP L0FCA94.w

L0CAA97:
    LDA $36
    AND #7
    BNE L0CAADC
    LDA $78D5
    CMP #8
    BNE L0CAAAD
    LDA #5
    STA $4A
    LDA #13
    JSR L0FCA94.w
L0CAAAD:
    DEC $78D4
    DEC $78D5
    BNE L0CAADC
    LDA #5
    STA $4A
    LDA #13
    JSR L0FCA94.w
    LDA #0
    STA $797F
    LDA $7434
    CMP #45
    BNE L0CAACD
    INC $059C
L0CAACD:
    LDA #16
    STA $33
    LDA #29
    STA $0E
    LDA #171
    STA $0F
    INC $059C
L0CAADC:
    RTS

L0CAADD:
    LDA $33
    BNE L0CAB0A
    LDY #2
L0CAAE3:
    LDA ($0E),Y
    CMP #239
    BEQ L0CAB07
    STA $7D81,Y
    STA $7D91,Y
    DEY
    BPL L0CAAE3
    LDA #128
    STA $28
    LDA #3
    CLC
    ADC $0E
    STA $0E
    BCC L0CAB01
    INC $0F
L0CAB01:
    LDA #16
    STA $33
    BNE L0CAB0A
L0CAB07:
    INC $059C
L0CAB0A:
    RTS

L0CAB0B:
    LDA #0
    STA $059C
    LDX $7434
    DEX
    LDA $6E00,X
    ORA #1
    STA $6E00,X
    RTS

.db $20
.db $2C
.db $1C
.db $20
.db $32
.db $22
.db $20
.db $10
.db $00
.db $EF
.db $29
.db $AB
.db $26
.db $E8
.db $FD
.db $00
.db $E8
.db $18
.db $FE
.db $00
.db $20
.db $10
.db $73
.db $00
.db $F0
.db $08
.db $63
.db $00
.db $F0
.db $10
.db $43
.db $00
.db $18
.db $08
.db $53
.db $00
.db $18
.db $10
.db $53
.db $00
.db $10
.db $08
.db $43
.db $00
.db $10
.db $10
.db $43
.db $00
.db $08
.db $08
.db $53
.db $00
.db $08
.db $10
.db $53
.db $00
.db $00
.db $08
.db $43
.db $00
.db $00
.db $10
.db $43
.db $00
.db $F8
.db $08
.db $53
.db $00
.db $F8
.db $E8
.db $EC
.db $03
.db $F8
.db $E8
.db $EC
.db $03
.db $08
.db $E8
.db $EB
.db $03
.db $00
.db $E8
.db $DB
.db $03
.db $F0
.db $E8
.db $EB
.db $03
.db $10
.db $E8
.db $DC
.db $03
.db $18
.db $00
.db $62
.db $00
.db $F8
.db $F8
.db $52
.db $00
.db $F8
.db $F0
.db $42
.db $03
.db $F8
.db $00
.db $D9
.db $00
.db $F0
.db $F8
.db $C9
.db $00
.db $F0
.db $F0
.db $B9
.db $03
.db $F0
.db $00
.db $62
.db $00
.db $10
.db $F8
.db $52
.db $00
.db $10
.db $F0
.db $42
.db $03
.db $10
.db $00
.db $DA
.db $00
.db $18
.db $F8
.db $CA
.db $00
.db $18
.db $F0
.db $BA
.db $03
.db $18
.db $00
.db $62
.db $00
.db $08
.db $F8
.db $52
.db $00
.db $08
.db $F0
.db $42
.db $03
.db $08
.db $00
.db $62
.db $00
.db $00
.db $F8
.db $52
.db $00
.db $00
.db $F0
.db $42
.db $03
.db $00
L0CABC2:
    LDA $744C
    SEC
    SBC #2
    JSR L0FC34C.w

.dw L0CABD3
.dw L0CAC05
.dw L0CAC4B
.dw L0CAC6A

L0CABD3:
    LDA #20
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDX #1
    STX $6D90
    DEX
    STX $6D91
    LDA #251
    AND $6D8F
    STA $6D8F
    LDA #2
    STA $74B5
    LDA #0
    STA $74B6
    LDA #1
    STA $74DD
    STA $05B8
    JSR L0FCA0B.w
    JMP L0FFA2F.w

L0CAC05:
    LDA #20
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDX #0
    STX $6D90
    STX $6D91
    LDA $6D8F
    AND #239
    ORA #4
    STA $6D8F
    LDX #0
    STX $05B8
    LDA #16
    STA $6D0B
    INX
    LDA #18
    STA $6CC0,X
    LDA #17
    ASL
    TAY
    LDA L0FEEF4.w,Y
    STA $6C9C,X
    LDA (L0FEEF4.w + 1),Y
    STA $6CAE,X
    LDA $6E08
    AND #254
    ORA #2
    STA $6E08
    RTS

L0CAC4B:
    LDA #20
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDA #0
    STA $05B8
    LDA $6E0E
    ORA #1
    STA $6E0E
    LDA $6D8F
    AND #4
    STA $6D8F
    RTS

L0CAC6A:
    DEC $744C
    RTS

L0CAC6E:
    LDA $78DB
    STA $78D9
    DEC $78D9
    LDA $7434
    SEC
    SBC #1
    STA $00
    LDA #14
    STA $01
    JSR L0FC6C9.w
    LDA #188
    CLC
    ADC $00
    STA $04
    LDA #178
    ADC $01
    STA $05
    LDA $78D9
    ASL
    TAY
    JSR L0FC38E.w
    LDX $7434
    DEX
    LDA $6DCE,X
    STA $0A
    LDX #0
L0CACA6:
    CPX $78D9
    BEQ L0CACB0
    LSR $0A
    INX
    BNE L0CACA6
L0CACB0:
    LSR $0A
    LDY #0
    BCC L0CACB7
    INY
L0CACB7:
    LDA ($04),Y
    CMP #255
    BEQ L0CACCE
    CMP #76
    BCC L0CACCE
    SEC
    SBC #76
    STA $7DA6
    LDA #161
    STA $7DA9
    BNE L0CACD1
L0CACCE:
    STA $7DA6
L0CACD1:
    RTS

L0CACD2:
    LDA $7876
    SEC
    SBC #49
    ASL
    TAX
    LDA L0CB578.w,X
    AND #63
    STA $78E0
    LDA L0CB578.w,X
    AND #192
    LSR
    LSR
    CLC
    ADC #16
    STA $7920
    INX
    LDA L0CB578.w,X
    STA $78E1
    LDA $78E0
    BNE L0CAD35
    LDA $78E1
    ASL
    TAX
    LDA L0CB5B8.w,X
    STA $04
    LDA (L0CB5B8.w + 1),X
    STA $05
    LDX $05B8
    LDY #0
L0CAD0F:
    LDA ($04),Y
    CMP $6D16,X
    BEQ L0CAD1B
    INY
    INY
    INY
    BNE L0CAD0F
L0CAD1B:
    INY
    LDA ($04),Y
    AND #63
    STA $78E0
    LDA ($04),Y
    AND #192
    LSR
    LSR
    CLC
    ADC #16
    STA $7920
    INY
    LDA ($04),Y
    STA $78E1
L0CAD35:
    RTS

L0CAD36:
    LDA $0A
    JSR L0FC34C.w

.dw L0CAD53
.dw L0CADB0
.dw L0CAE9A
.dw L0CADE0
.dw L0CAE4F
.dw L0CAF12
.dw L0CAF3B
.dw L0CAF7A
.dw L0CAF9C
.dw L0CAFBE
.dw L0CAFF9
.dw L0CB087

L0CAD53:
    LDA #32
    STA $76
    LDA $7900
    SEC
    SBC $6A
    CMP #8
    BCC L0CAD65
    LDA #16
    BNE L0CAD67
L0CAD65:
    LDA #144
L0CAD67:
    STA $77
    LDA #10
    STA $0591
    LDA #8
    STA $0590
    JSR L0CB1A8.w
    LDA #15
    LDY $058F
    STA $7D73,Y
    LDA #1
    STA $7D78,Y
    LDA #0
    STA $2C
    LDA #5
    JSR L0CB17F.w
    LDA #4
    JSR L0CB17F.w
    LDA #2
    JSR L0CB17F.w
    LDA $7DA4
    BNE L0CADA3
    LDA #11
    JSR L0CB17F.w
    JMP L0CADA8.w

L0CADA3:
    LDA #23
    JSR L0CB17F.w
L0CADA8:
    LDA #239
    STA $0451,X
    JMP L0CB19F.w

L0CADB0:
    LDA #6
    STA $0591
    LDA #8
    STA $0590
    JSR L0CB1A8.w
    LDA #0
    JSR L0CB17F.w
    LDA #1
    JSR L0CB17F.w
    LDA #239
    STA $0451,X
    LDX $058F
    LDA #3
    STA $7D73,X
    LDA #1
    STA $7D78,X
    LDA #0
    STA $2C
    JMP L0CB19F.w
L0CADE0:
    LDA #128
    STA $76
    LDA $7900
    SEC
    SBC $6A
    CMP #8
    BCC L0CADF2
    LDA #16
    BNE L0CADF4
L0CADF2:
    LDA #144
L0CADF4:
    STA $77
    LDA #4
    STA $0591
    LDA #10
    STA $0590
    JSR L0CB1A8.w
    LDY $058F
    LDA #1
    STA $7D73,Y
    LDA #5
    JSR L0CB17F.w
    LDA $6CF7
    BEQ L0CAE3B
    LDA $744C
    CMP #3
    BCC L0CAE3B
    LDA $6E8C
    BNE L0CAE29
    LDA $6CC0
    CMP $6CC1
    BNE L0CAE3B
L0CAE29:
    LDA #6
    JSR L0CB17F.w
    LDA #6
    STA $0591
    LDY $058F
    LDA #3
    STA $7D73,Y
L0CAE3B:
    LDA #239
    STA $0451,X
    LDX $058F
    LDA #1
    STA $7D78,X
    LDA #0
    STA $2C
    JMP L0CB19F.w

L0CAE4F:
    LDA #128
    STA $76
    LDA $7900
    SEC
    SBC $6A
    CMP #8
    BCC L0CAE61
    LDA #16
    BNE L0CAE63
L0CAE61:
    LDA #144
L0CAE63:
    STA $77
    LDA #8
    STA $0591
    LDA #8
    STA $0590
    JSR L0CB1A8.w
    LDA #9
    JSR L0CB17F.w
    LDA #8
    JSR L0CB17F.w
    LDA #7
    JSR L0CB17F.w
    LDA #239
    STA $0451,X
    LDA #7
    LDX $058F
    STA $7D73,X
    LDA #1
    STA $7D78,X
    LDA #0
    STA $2C
    JMP L0CB19F.w

L0CAE9A:
    LDA #0
    STA $78CC
    LDA #6
    STA $4A
    LDA #13
    JSR L0FCA94.w
    LDA $78DC
    CMP #11
    BCS L0CAEB5
    STA $78D5
    JMP L0CAEBC.w

L0CAEB5:
    LDX #10
    STX $78D5
    INX
    TXA
L0CAEBC:
    ASL
    CLC
    ADC #2
    STA $0591
    LDA #10
    STA $0590
    LDA #32
    STA $76
    LDA #16
    STA $77
    JSR L0CB1A8.w
    LDX #0
    STX $17
L0CAED7:
    INX
    TXA
    JSR L0CB1D7.w
    LDX $0450
    LDA #237
    STA $0451,X
    INX
    STX $0450
    INC $17
    LDX $17
    CPX $78D5
    BNE L0CAED7
    LDX $0450
    LDA $78DC
    CMP #11
    BCC L0CAF00
    LDA #10
    JSR L0CB17F.w
L0CAF00:
    LDA #239
    STA $0451,X
    LDA #1
    STA $78DD
    LDA #0
    STA $78E2
    JMP L0CB19F.w

L0CAF12:
    LDA #22
    STA $0590
    LDA #22
    STA $0591
    LDA #32
    STA $77
    LDA #48
    STA $76
    JSR L0CB1A8.w
    LDX #0
    LDA #237
L0CAF2B:
    STA $0451,X
    INX
    CPX #10
    BNE L0CAF2B
    LDA #239
    STA $0451,X
    JMP L0CB19F.w

L0CAF3B:
    LDA $78ED
    STA $78DC
    CMP #10
    BCS L0CAF4A
    STA $16
    JMP L0CAF4F.w

L0CAF4A:
    LDX #10
    STX $16
    TXA
L0CAF4F:
    ASL
    CLC
    ADC #2
    STA $0591
    LDA #16
    STA $0590
    LDA #96
    STA $77
    LDA #48
    STA $76
    JSR L0CB1A8.w
    LDX #0
    LDA #237
L0CAF6A:
    STA $0451,X
    INX
    CPX $16
    BNE L0CAF6A
    LDA #239
    STA $0451,X
    JMP L0CB19F.w

L0CAF7A:
    LDA #22
    STA $0590
    LDA #4
    STA $0591
    LDA #32
    STA $77
    LDA #16
    STA $76
    JSR L0CB1A8.w
    LDA #12
    JSR L0CB17F.w
    LDA #239
    STA $0451,X
    JMP L0CB19F.w

L0CAF9C:
    LDA #16
    STA $0590
    LDA #4
    STA $0591
    LDA #96
    STA $77
    LDA #16
    STA $76
    JSR L0CB1A8.w
    LDA #13
    JSR L0CB17F.w
    LDA #239
    STA $0451,X
    JMP L0CB19F.w

L0CAFBE:
    LDA #14
    STA $0590
    LDA #6
    STA $0591
    LDA #64
    STA $77
    LDA #80
    STA $76
    JSR L0CB1A8.w
    LDA #14
    JSR L0CB17F.w
    DEX
    LDA $78EF
    CLC
    ADC #96
    STA $0451,X
    INX
    LDA #15
    JSR L0CB17F.w
    LDA $78EF
    CLC
    ADC #15
    JSR L0CB17F.w
    LDA #239
    STA $0451,X
    JMP L0CB19F.w

L0CAFF9:
    LDA #26
    STA $0591
    LDA #14
    STA $0590
    LDA #16
    STA $76
    LDA #112
    STA $77
    JSR L0CB1A8.w
    LDX #0
    LDY #0
L0CB012:
    LDA L0CB021.w,X
    STA $0451,Y
    INX
    INY
    CMP #239
    BNE L0CB012
    JMP L0CB19F.w

L0CB021:
.db $ED
.db $ED
.db $FF
.db $FF
.db $FF
.db $FF
.db $5B
.db $4D
.db $0F
.db $5A
.db $8D
.db $ED
.db $FF
.db $0A
.db $01
.db $10
.db $0F
.db $01
.db $71
.db $79
.db $8D
.db $ED
.db $09
.db $02
.db $08
.db $0F
.db $06
.db $29
.db $87
.db $07
.db $8D
.db $ED
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $2D
.db $0A
.db $0F
.db $8D
.db $ED
.db $FF
.db $FF
.db $FF
.db $0C
.db $1A
.db $0F
.db $25
.db $0A
.db $8D
.db $ED
.db $FF
.db $FF
.db $02
.db $2F
.db $19
.db $27
.db $0A
.db $8D
.db $ED
.db $FF
.db $0B
.db $86
.db $1B
.db $0F
.db $29
.db $87
.db $07
.db $8D
.db $ED
.db $20
.db $1E
.db $02
.db $1E
.db $0F
.db $02
.db $06
.db $0F
.db $87
.db $8D
.db $ED
.db $FF
.db $01
.db $14
.db $0F
.db $02
.db $29
.db $87
.db $07
.db $8D
.db $ED
.db $FF
.db $FF
.db $08
.db $01
.db $08
.db $2F
.db $11
.db $8D
.db $ED
.db $EF

L0CB087:
    LDA #20
    STA $0590
    LDA #22
    STA $0591
    JSR L0CB1A8.w
    LDA #0
    STA $04
L0CB098:
    LDA #237
    STA $0451,X
    INX
    INC $04
    LDA $04
    CMP #17
    BCC L0CB098
    LDA #239
    STA $0451,X
    JMP L0CB19F.w

L0CB0AE:
.dw L0CB0DE
.dw L0CB0E1
.dw L0CB0E5
.dw L0CB0EA
.dw L0CB0EF
.dw L0CB0F4
.dw L0CB0FB
.dw L0CB105
.dw L0CB10A
.dw L0CB110
.dw L0CB115
.dw L0CB118
.dw L0CB11C
.dw L0CB129
.dw L0CB132
.dw L0CB138
.dw L0CB13D
.dw L0CB146
.dw L0CB152
.dw L0CB15C
.dw L0CB167
.dw L0CB173
.dw L0CB178
.dw L0CB17B

L0CB0DE:
ENCODE("はい")
NEWLINE

L0CB0E1:
ENCODE("いいえ")
NEWLINE

L0CB0E5:
ENCODE("データ")
NEWLINE

L0CB0EA:
ENCODE("へんせい")
NEWLINE

L0CB0EF:
ENCODE("もちもの")
NEWLINE

L0CB0F4:
ENCODE("ならびかえ")
NEWLINE

L0CB0FB:
ENCODE("メンバーいどう")
NEWLINE

L0CB105:
ENCODE("うけとる")
NEWLINE

L0CB10A:
ENCODE("あずける")
NEWLINE

L0CB110:
ENCODE("こうかん")
NEWLINE

L0CB115:
ENCODE(" ▼")
NEWLINE

L0CB118:
ENCODE("きろく")
NEWLINE

L0CB11C:
ENCODE("なまえ     アイテム")
NEWLINE

L0CB129:
ENCODE("  しょじひん")
NEWLINE

L0CB132:
ENCODE(" だい ")
NEWLINE

L0CB138:
ENCODE(" しょう")
NEWLINE

L0CB13D:
ENCODE("  ソフィアへ!")
NEWLINE

L0CB146:
ENCODE(" セリカのたびだち")
NEWLINE

L0CB152:
ENCODE(" かいほうせんそう")
NEWLINE

L0CB15C:
ENCODE(" かなしみのだいち")
NEWLINE

L0CB167:
ENCODE("さいかい そして···")
NEWLINE

L0CB173:
ENCODE("いちらん")
NEWLINE

L0CB178:
ENCODE(" ")
NEWLINE

L0CB17A:
NEWLINE

L0CB17B:
ENCODE("セリカ")
NEWLINE

L0CB17F:
    ASL
    TAY
    LDA L0CB0AE.w,Y
    STA $00
    LDA (L0CB0AE.w + 1),Y
    STA $01
    LDY #0
L0CB18D:
    LDA ($00),Y
    CMP #239
    BEQ L0CB19E
    STA $0451,X
    INX
    CMP #237
    BEQ L0CB19E
    INY
    BNE L0CB18D
L0CB19E:
    RTS

L0CB19F:
    LDA #13
    STA $4A
    LDA #11
    JMP L0FCA94.w

L0CB1A8:
    LDA #1
    STA $058D
    LDA #80
    STA $00
    LDA #4
    STA $01
    LDA #128
    STA $02
    LDA #0
    STA $03
    LDA #255
    JSR L0FC225.w
    LDX $058F
    LDA #0
    STA $7D73,X
    LDX #0
    LDY #0
    STY $0450
    STY $80
    STY $05AC
    RTS

L0CB1D7:
    TAX
    DEX
    LDA $7877,X
    BEQ L0CB202
    SEC
    SBC #1
    ASL
    TAY
    LDA L0FDEA9.w,Y
    STA $02
    LDA (L0FDEA9.w+1),Y
    STA $03
    LDY #0
    LDX $0450
L0CB1F2:
    LDA ($02),Y
    CMP #239
    BEQ L0CB1FF
    STA $0451,X
    INX
    INY
    BNE L0CB1F2
L0CB1FF:
    STX $0450
L0CB202:
    RTS

L0CB203:
.db $00
.db $92
.db $93
.db $94
.db $95
.db $97
.db $85
.db $87
.db $82
.db $B6
.db $60
.db $61
.db $75
.db $22
.db $16
.db $B0
.db $B1
.db $B2
.db $75
.db $A6
.db $B0
.db $B1
.db $01
.db $53
.db $83
.db $B3
.db $B5
.db $71
.db $80
.db $44
.db $90

L0CB222:
    LDA $7434
    CMP #111
    BCC L0CB22D
    LDA #4
    BNE L0CB232
L0CB22D:
    TAX
    DEX
    LDA L0CB244.w,X
L0CB232:
    CMP $78A0
    BNE L0CB238
    RTS

L0CB238:
    STA $78A0
L0CB23B:
    LDX $78A0
    LDA L0CB203.w,X
    JMP L0FF58A.w

L0CB244:
.db $13
.db $11
.db $11
.db $11
.db $02
.db $19
.db $11
.db $07
.db $19
.db $13
.db $07
.db $11
.db $11
.db $07
.db $02
.db $13
.db $11
.db $07
.db $11
.db $19
.db $19
.db $07
.db $11
.db $07
.db $04
.db $06
.db $04
.db $04
.db $04
.db $18
.db $1A
.db $07
.db $06
.db $02
.db $04
.db $1A
.db $1A
.db $07
.db $04
.db $1A
.db $1A
.db $04
.db $04
.db $18
.db $02
.db $06
.db $06
.db $04
.db $04
.db $06
.db $06
.db $06
.db $06
.db $11
.db $02
.db $04
.db $06
.db $07
.db $06
.db $04
.db $04
.db $04
.db $06
.db $04
.db $04
.db $1A
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $06
.db $06
.db $06
.db $06
.db $04
.db $06
.db $06
.db $06
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $04
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $04
.db $00
.db $06
.db $01
.db $03
.db $01
.db $04
.db $01
.db $05
.db $02
.db $07
.db $0F
.db $0F
.db $0D
.db $34
.db $0C
.db $00
.db $22
.db $22
.db $24
.db $00
.db $25
.db $00
.db $26
.db $00
.db $28
.db $00
.db $27
.db $00
.db $0E
.db $00
.db $0F
.db $00
.db $10
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $60
.db $32
.db $5D
.db $48
.db $5E
.db $49
.db $5B
.db $4B
.db $5C
.db $45
.db $5F
.db $4A
.db $61
.db $00
.db $31
.db $00
.db $13
.db $00
.db $14
.db $00
.db $15
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $18
.db $00
.db $3D
.db $00
.db $3E
.db $00
.db $19
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $1A
.db $00
.db $1B
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $00
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $1F
.db $00
.db $1E
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $22
.db $00
.db $23
.db $00
.db $24
.db $00
.db $00
.db $32
.db $32
.db $32
.db $33
.db $32
.db $32
.db $32
.db $7B
.db $34
.db $79
.db $79
.db $32
.db $36
.db $32
.db $36
.db $36
.db $36
.db $82
.db $32
.db $81
.db $36
.db $25
.db $26
.db $00
.db $32
.db $8D
.db $00
.db $8D
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $2A
.db $00
.db $27
.db $00
.db $28
.db $00
.db $5A
.db $5A
.db $29
.db $00
.db $96
.db $00
.db $97
.db $00
.db $9B
.db $A1
.db $9A
.db $A2
.db $32
.db $99
.db $9C
.db $32
.db $A4
.db $32
.db $D6
.db $D8
.db $9F
.db $A0
.db $3A
.db $3B
.db $2C
.db $34
.db $33
.db $34
.db $39
.db $34
.db $38
.db $00
.db $54
.db $00
.db $54
.db $00
.db $40
.db $36
.db $4F
.db $36
.db $43
.db $36
.db $37
.db $37
.db $36
.db $32
.db $36
.db $36
.db $36
.db $36
.db $44
.db $45
.db $41
.db $42
.db $A6
.db $A9
.db $A6
.db $AA
.db $A6
.db $A8
.db $A3
.db $A5
.db $00
.db $00
.db $46
.db $32
.db $32
.db $32
.db $32
.db $32
.db $32
.db $32
.db $36
.db $36
.db $36
.db $36
.db $36
.db $36
.db $50
.db $52
.db $46
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $6C
.db $6D
.db $6A
.db $00
.db $6B
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $69
.db $54
.db $42
.db $3C
.db $56
.db $25
.db $1C
.db $34
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $B6
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $BF
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $C9
.db $00
.db $CA
.db $00
.db $CB
.db $00
.db $C7
.db $00
.db $C8
.db $00
.db $C6
.db $00
.db $C0
.db $00
.db $D3
.db $D1
.db $D2
.db $DC
.db $01
.db $00
.db $D7
.db $00
.db $00
.db $00
.db $01
.db $00
.db $D1
.db $D1
.db $D7
.db $D7
.db $36
.db $36
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $AC
.db $00
.db $D8
.db $00
.db $D8
.db $00
.db $D8
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $64
.db $00
.db $65
.db $66
.db $6F
.db $6E
.db $67
.db $00
.db $67
.db $00
.db $67
.db $00
.db $67
.db $00
.db $0D
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $AC
.db $00
.db $D8
.db $00
.db $D8
.db $00
.db $D8
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $0D
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $2D
.db $2F
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $47
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
.db $01
.db $00
L0CB578:
.db $C8
.db $14
.db $0C
.db $0B
.db $0C
.db $08
.db $00
.db $00
.db $82
.db $07
.db $00
.db $01
.db $0C
.db $0B
.db $0C
.db $08
.db $00
.db $02
.db $C8
.db $14
.db $0C
.db $08
.db $0C
.db $0B
.db $0C
.db $0B
.db $0C
.db $08
.db $00
.db $04
.db $C8
.db $14
.db $0C
.db $0B
.db $0C
.db $08
.db $0C
.db $08
.db $13
.db $08
.db $00
.db $03
.db $0C
.db $08
.db $0C
.db $0B
.db $0C
.db $08
.db $0C
.db $0B
.db $0C
.db $0B
.db $47
.db $02
.db $47
.db $02
.db $19
.db $0F
.db $11
.db $0B
.db $0C
.db $08
.db $0C
.db $08

L0CB5B8:
.dw L0CB5C2
.dw L0CB5C8
.dw L0CB5CE
.dw L0CB5D7
.dw L0CB5DD

L0CB5C2:
.db $07
.db $12
.db $0B
.db $10
.db $82
.db $14

L0CB5C8:
.db $08
.db $0C
.db $06
.db $09
.db $83
.db $11

L0CB5CE:
.db $07
.db $0C
.db $03
.db $0F
.db $0A
.db $0B
.db $13
.db $83
.db $03

L0CB5D7:
.db $23
.db $82
.db $07
.db $22
.db $14
.db $10

L0CB5DD:
.db $2B
.db $82
.db $0B
.db $1A
.db $13
.db $0B

.dw L0CB5F5
.dw L0CB62A
.dw L0CB65F
.dw L0CB698
.dw L0CB6CD
.dw L0CB6F6
.dw L0CB733
.dw L0CB768
.dw L0CB7CD

L0CB5F5:
.db $0D
.db $00 $A7 $40 $00
.db $18 $B1 $40 $00
.db $10 $A1 $40 $00
.db $08 $91 $40 $00
.db $10 $A2 $40 $F8
.db $08 $92 $40 $F8
.db $00 $82 $40 $F8
.db $08 $93 $40 $F0
.db $00 $83 $40 $F0
.db $18 $B0 $40 $08
.db $10 $A0 $40 $08
.db $08 $90 $40 $08
.db $00 $80 $40 $08

L0CB62A:
.db $0D
.db $10 $85 $40 $00
.db $08 $91 $40 $00
.db $00 $81 $40 $00
.db $18 $96 $40 $F8
.db $10 $86 $40 $F8
.db $08 $92 $40 $F8
.db $00 $82 $40 $F8
.db $08 $93 $40 $F0
.db $00 $83 $40 $F0
.db $08 $95 $40 $08
.db $18 $94 $40 $0A
.db $10 $84 $40 $08
.db $00 $80 $40 $08

L0CB65F:
.db $0E
.db $02 $A7 $40 $00
.db $12 $85 $40 $00
.db $0A $91 $40 $00
.db $1A $96 $40 $F8
.db $12 $86 $40 $F8
.db $0A $92 $40 $F8
.db $02 $82 $40 $F8
.db $0A $93 $40 $F0
.db $02 $83 $40 $F0
.db $0A $A6 $40 $08
.db $12 $A4 $40 $08
.db $02 $80 $40 $08
.db $0A $A5 $40 $10
.db $18 $B3 $40 $10

L0CB698:
.db $0D
.db $00 $81 $40 $00
.db $18 $98 $40 $00
.db $10 $88 $40 $00
.db $08 $91 $40 $00
.db $10 $A2 $40 $F8
.db $08 $92 $40 $F8
.db $00 $82 $40 $F8
.db $08 $93 $40 $F0
.db $00 $83 $40 $F0
.db $18 $97 $40 $08
.db $10 $87 $40 $08
.db $08 $90 $40 $08
.db $00 $80 $40 $08

L0CB6CD:
.db $0A
.db $12 $AA $40 $F8
.db $0A $9A $40 $F8
.db $02 $8A $40 $F8
.db $12 $A9 $40 $00
.db $0A $99 $40 $00
.db $02 $89 $40 $00
.db $18 $B3 $40 $08
.db $12 $AB $40 $F0
.db $0A $9B $40 $F0
.db $1A $96 $40 $F0

L0CB6F6:
.db $0F
.db $12 $AB $40 $F0
.db $0A $D4 $40 $F0
.db $02 $C4 $40 $F0
.db $1A $96 $40 $F0
.db $12 $AA $40 $F8
.db $0A $D3 $40 $F8
.db $02 $C3 $40 $F8
.db $12 $A9 $40 $00
.db $0A $D2 $40 $00
.db $02 $C2 $40 $00
.db $0A $D1 $40 $08
.db $02 $C1 $40 $08
.db $18 $B3 $40 $08
.db $FA $D0 $40 $10
.db $02 $C0 $40 $10

L0CB733:
.db $0D
.db $FA $D0 $40 $10
.db $12 $AB $40 $F0
.db $1A $96 $40 $F0
.db $0A $B5 $40 $F8
.db $02 $8A $40 $F8
.db $12 $AA $40 $F8
.db $12 $A9 $40 $00
.db $0A $B4 $40 $00
.db $02 $89 $40 $00
.db $0A $D1 $40 $08
.db $02 $C1 $40 $08
.db $18 $B3 $40 $08
.db $02 $C0 $40 $10

L0CB768:
.db $19
.db $E1 $8D $40 $F0
.db $02 $AC $40 $F0
.db $F9 $9C $40 $F0
.db $12 $AB $40 $F0
.db $1A $96 $40 $F0
.db $0A $8C $40 $F8
.db $02 $81 $40 $F8
.db $12 $AA $40 $F8
.db $12 $A4 $40 $00
.db $0A $A6 $40 $00
.db $02 $80 $40 $00
.db $12 $BD $40 $E8
.db $E9 $9D $40 $EA
.db $F1 $AD $40 $EC
.db $12 $BE $40 $E0
.db $E2 $B6 $40 $E0
.db $0A $A5 $40 $08
.db $18 $B3 $40 $08
.db $12 $BF $40 $D8
.db $0A $BC $40 $D8
.db $EA $B8 $40 $D7
.db $E2 $B7 $40 $D8
.db $02 $BB $40 $D1
.db $FA $BA $40 $D0
.db $F2 $B9 $40 $D0

L0CB7CD:
.db $0F
.db $E2 $8D $40 $EF
.db $12 $AB $40 $F0
.db $1A $96 $40 $F0
.db $02 $AC $40 $F0
.db $FA $9C $40 $F0
.db $12 $A4 $40 $00
.db $0A $A6 $40 $00
.db $02 $80 $40 $00
.db $0A $8C $40 $F8
.db $02 $81 $40 $F8
.db $12 $AA $40 $F8
.db $EA $9D $40 $E9
.db $F2 $AD $40 $EB
.db $0A $A5 $40 $08
.db $18 $B3 $40 $08

L0CB80A:
.dw L0CB80E
.dw L0CB816

L0CB80E:
.db $00
.db $01
.db $02
.db $03
.db $04
.db $05
.db $06
.db $07

L0CB816:
.db $09
.db $09
.db $09
.db $09
.db $09
.db $09
.db $09
.db $09
.db $09
.db $08

L0CB820:
.dw L0CB84E
.dw L0CB86A
.dw L0CB87E
.dw L0CB88D
.dw L0CB8A5
.dw L0CB8B9
.dw L0CB8C7
.dw L0CB8DB
.dw L0CB8F2
.dw L0CB834

L0CB834:
.db $19 $00 $00 $04 $80 $A7 $82 $83
.db $20 $00 $04 $90 $91 $92 $93 $40
.db $00 $03 $A0 $A1 $A2 $60 $00 $02
.db $B0 $B1

L0CB84E:
.db $1B $E0 $FF $01 $FF $FF $FF $03
.db $FF $46 $47 $1F $00 $03 $FF $56
.db $57 $3F $00 $03 $FF $66 $67 $60
.db $00 $02 $76 $77

L0CB86A:
.db $13 $FF $FF $02 $FF $46 $1F $00
.db $02 $58 $68 $3F $00 $02 $FF $78
.db $60 $00 $01 $7C

L0CB87E:
.db $0E $FF $FF $02 $3E $3F $1F $00
.db $02 $4E $4F $40 $00 $01 $5F

L0CB88D:
.db $17 $E0 $FF $01 $FF $FF $FF $02
.db $1D $5E $1F $00 $02 $3D $6E $40
.db $00 $02 $7E $6D $61 $00 $01 $7D

L0CB8A5:
.db $13 $E0 $FF $01 $5B $FF $FF $02
.db $6B $4C $1F $00 $03 $7B $5C $5D
.db $40 $00 $01 $6C

L0CB8B9:
.db $0D $E0 $FF $01 $E1 $FF $FF $02
.db $E0 $F1 $1F $00 $01 $F0

L0CB8C7:
.db $13 $E0 $FF $01 $FF $FF $FF $02
.db $E2 $E3 $1F $00 $02 $F2 $F3 $3F
.db $00 $02 $C8 $C9

L0CB8DB:
.db $16 $FF $FF $03 $FF $D8 $D9 $1F
.db $00 $03 $DA $DB $57 $3F $00 $03
.db $EA $EB $67 $61 $00 $01 $77

L0CB8F2:
.db $14 $00 $00 $02 $49 $4A $20 $00
.db $02 $59 $5A $40 $00 $02 $69 $6A
.db $60 $00 $02 $79 $7A

L0CB907:
    LDA $7A89
    SEC
    SBC #31
    ASL
    TAX
    LDA L0CB9E0.w,X
    STA $00
    LDA (L0CB9E0.w + 1),X
    STA $01
    LDX $7AAD
    LDY #0
L0CB91E:
    LDA ($00),Y
    STA $7B33,X
    INY
    INX
    CMP #239
    BNE L0CB91E
    DEX
    STX $7AAD
    RTS

.db $30
.db $B9
.db $30
.db $80
.db $14
.db $05
.db $E9
.db $05
.db $F1
.db $24
.db $02
.db $FF
.db $27
.db $05
.db $2C
.db $02
.db $9B
.db $9B
.db $9B
.db $ED
.db $ED
.db $26
.db $02
.db $0B
.db $84
.db $30
.db $5A
.db $52
.db $27
.db $ED
.db $0C
.db $1D
.db $0F
.db $13
.db $2E
.db $FF
.db $04
.db $20
.db $03
.db $16
.db $10
.db $07
.db $0C
.db $ED
.db $ED
.db $2D
.db $2B
.db $28
.db $06
.db $87
.db $02
.db $10
.db $0F
.db $01
.db $19
.db $ED
.db $01
.db $0B
.db $2E
.db $FF
.db $02
.db $08
.db $12
.db $06
.db $0F
.db $ED
.db $09
.db $19
.db $11
.db $2E
.db $FF
.db $04
.db $0A
.db $23
.db $27
.db $9B
.db $9B
.db $9B
.db $ED
.db $ED
.db $44
.db $0F
.db $3F
.db $50
.db $19
.db $12
.db $27
.db $0A
.db $14
.db $ED
.db $51
.db $58
.db $19
.db $00
.db $01
.db $2E
.db $24
.db $85
.db $13
.db $ED
.db $1B
.db $14
.db $2E
.db $FF
.db $10
.db $10
.db $0F
.db $0B
.db $07
.db $21
.db $11
.db $1B
.db $0F
.db $08
.db $ED
.db $ED
.db $2D
.db $2B
.db $28
.db $19
.db $FF
.db $00
.db $25
.db $20
.db $11
.db $2E
.db $ED
.db $1C
.db $10
.db $10
.db $1B
.db $0F
.db $FF
.db $04
.db $05
.db $0B
.db $13
.db $1A
.db $15
.db $28
.db $17
.db $ED
.db $ED
.db $24
.db $02
.db $FF
.db $16
.db $14
.db $0F
.db $14
.db $FF
.db $2D
.db $2B
.db $28
.db $19
.db $18
.db $22
.db $29
.db $2E
.db $FF
.db $ED
.db $0A
.db $20
.db $10
.db $08
.db $0F
.db $13
.db $1A
.db $FF
.db $15
.db $28
.db $17
.db $0E
.db $0F
.db $9B
.db $9B
.db $9B
.db $EF

L0CB9E0:
.dw L0CB9FE
.dw L0CBA33
.dw L0CBA5A
.dw L0CBA8D
.dw L0CBAB2
.dw L0CBADD
.dw L0CBB26
.dw L0CBB4F
.dw L0CBB77
.dw L0CBBA0
.dw L0CBC0E
.dw L0CBC35
.dw L0CBC5F
.dw L0CBCD3
.dw L0CBD5F

L0CB9FE:
.db $3B $0F $A9 $3B $3F $19 $FF $ED
.db $04 $02 $09 $07 $08 $2F $0D $12
.db $16 $ED $0A $2F $05 $0C $2A $ED
.db $ED $0E $19 $05 $10 $2D $28 $16
.db $1A $ED $02 $12 $07 $0B $01 $FF
.db $12 $20 $05 $0F $ED $27 $29 $0E
.db $85 $13 $01 $2A $EF

L0CBA33:
.db $02 $12 $07 $0B $01 $FF $12 $20
.db $14 $14 $24 $16 $ED $4A $0F $5B
.db $5F $3B $30 $04 $02 $09 $07 $19
.db $ED $1C $85 $09 $02 $16 $FF $14
.db $0F $29 $87 $07 $0C $2A $EF

L0CBA5A:
.db $21 $0C $0F $05 $28 $19 $20 $29
.db $87 $07 $1A $ED $20 $10 $0F $20
.db $10 $0F $FF $21 $0B $0F $86 $07
.db $10 $0F $14 $ED $02 $21 $19 $22
.db $09 $02 $19 $FF $10 $01 $29 $07
.db $1D $14 $ED $2D $10 $85 $13 $01
.db $85 $10 $EF

L0CBA8D:
.db $20 $1E $02 $2E $FF $1C $02 $01
.db $2F $0B $13 $ED $1B $14 $29 $19
.db $FF $04 $2F $15 $14 $0B $13 $ED
.db $0B $00 $2D $0D $16 $FF $07 $28
.db $0B $13 $01 $2A $EF

L0CBAB2:
.db $3B $0F $3F $37 $19 $06 $04 $07
.db $05 $0F $ED $24 $14 $0F $28 $15
.db $01 $09 $14 $2E $FF $01 $19 $29
.db $12 $12 $ED $05 $2B $14 $FF $0B
.db $00 $2D $0D $16 $07 $28 $0B $13
.db $01 $2A $EF

L0CBADD:
.db $0A $01 $00 $01 $19 $1B $14 $2E
.db $02 $0B $15 $01 $ED $05 $15 $0B
.db $21 $19 $00 $20 $29 $ED $05 $21
.db $2E $04 $2C $0B $10 $ED $ED $0E
.db $19 $09 $0F $FF $10 $10 $05 $01
.db $13 $0F $ED $25 $08 $10 $0F $0A
.db $2B $10 $FF $09 $14 $0F $24 $10
.db $11 $19 $10 $23 $16 $ED $1A $10
.db $28 $01 $13 $01 $2A $14 $01 $02
.db $EF

L0CBB26:
.db $1C $0F $0B $0F $FF $33 $3C $44
.db $2E $10 $0C $08 $10 $0F $0B $ED
.db $03 $05 $0F $04 $2E $FF $19 $09
.db $0B $13 $ED $1C $2A $0A $14 $16
.db $FF $05 $03 $85 $13 $01 $85 $10
.db $EF

L0CBB4F:
.db $06 $87 $02 $10 $0F $01 $2E $FF
.db $02 $0B $15 $01 $ED $05 $15 $0B
.db $21 $2E $FF $22 $18 $16 $1B $23
.db $13 $ED $1C $2A $0A $14 $16 $FF
.db $05 $03 $85 $13 $01 $85 $10 $EF

L0CBB77:
.db $01 $24 $02 $14 $10 $11 $2E $FF
.db $20 $24 $85 $10 $ED $27 $2C $09
.db $1B $0F $2E $FF $22 $18 $16 $1B
.db $23 $ED $30 $35 $48 $31 $30 $1D
.db $14 $FF $14 $1B $0F $10 $85 $10
.db $EF

L0CBBA0:
.db $AB $09 $0F $23 $2F $18 $FF $4A
.db $1F $34 $58 $ED $FF $09 $2F $15
.db $09 $14 $16 $15 $85 $13 $9B $9B
.db $9B $ED $ED $AB $02 $02 $2F $8E
.db $06 $16 $0B $15 $01 $13 $0F $FF
.db $3D $59 $35 $ED $FF $01 $24 $02
.db $14 $2E $FF $02 $0B $15 $85 $10
.db $19 $1A $ED $FF $2D $10 $0B $19
.db $FF $0D $06 $16 $2F $10 $0F $05
.db $28 $9B $9B $9B $ED $ED $05 $15
.db $0B $21 $2E $FF $22 $18 $16 $1B
.db $23 $ED $4A $1F $34 $58 $1A $FF
.db $1C $2A $0A $14 $1D $14 $FF $ED
.db $14 $1B $0F $10 $12 $EF

L0CBC0E:
.db $06 $85 $14 $FF $20 $10 $06 $20
.db $0C $ED $00 $29 $05 $0F $14 $02
.db $FF $21 $2F $15 $3F $ED $33 $3C
.db $44 $1A $FF $14 $0F $09 $20 $13
.db $0F $24 $00 $05 $2A $01 $EF

L0CBC35:
.db $18 $03 $0A $20 $9B $9B $9B $ED
.db $33 $3C $44 $1A $FF $0B $0F $1C
.db $0F $2F $19 $10 $23 $16 $0B $2F
.db $10 $0F $ED $00 $18 $2E $FF $04
.db $24 $01 $FF $15 $21 $10 $0F $0C
.db $2A $EF

L0CBC5F:
.db $1A $08 $0F $0B $01 $10 $10 $05
.db $01 $19 $15 $05 $13 $0F $ED $05
.db $2B $19 $06 $04 $07 $1A $FF $14
.db $29 $24 $14 $0F $0A $2B $13 $01
.db $10 $ED $ED $05 $0F $8E $0B $05
.db $0B $ED $0B $0F $1C $0F $2F $2E
.db $FF $00 $01 $0B $13 $07 $2B $10
.db $ED $43 $A7 $3F $40 $19 $10 $23
.db $05 $ED $ED $0E $2B $14 $24 $FF
.db $0E $19 $05 $09 $05 $0F $ED $00
.db $20 $29 $16 $FF $1B $0A $2F $10
.db $0F $85 $10 $19 $05 $ED $ED $05
.db $2B $1A $FF $04 $04 $07 $2E $ED
.db $05 $10 $2C $02 $14 $0B $15 $01
.db $9B $9B $9B $EF

L0CBCD3:
.db $19 $11 $16 $FF $30 $5A $52 $14
.db $22 $0C $1A $0F $2B $ED $4A $0F
.db $5B $5F $3B $30 $19 $FF $0B $87
.db $10 $0F $01 $04 $02 $1B $14 $15
.db $2A $ED $ED $ED $0E $19 $FF $25
.db $0A $0B $0A $14 $FF $0E $02 $23
.db $01 $0A $13 $0F $ED $2D $05 $01
.db $FF $09 $07 $04 $02 $2E $FF $10
.db $0C $08 $ED $4A $0F $5B $5F $3B
.db $30 $04 $02 $09 $07 $19 $FF $06
.db $0E $2E $06 $0C $0F $01 $10 $ED
.db $ED $ED $1B $14 $1B $0F $14 $1A
.db $FF $05 $19 $0B $0F $87 $2E $ED
.db $51 $58 $19 $02 $20 $2B $05 $2D
.db $29 $14 $FF $0B $2F $0B $0F $ED
.db $09 $09 $2C $05 $28 $00 $01 $0B
.db $13 $ED $25 $20 $15 $05 $85 $10
.db $14 $01 $02 $EF

L0CBD5F:
.db $19 $11 $19 $27 $16 $FF $1B $14
.db $1A $FF $01 $02 $ED $ED $05 $21
.db $05 $0F $21 $19 $FF $00 $0B $06
.db $07 $0A $29 $2E $10 $11 $06 $29
.db $ED $2D $05 $0F $FF $0D $2F $18
.db $2F $04 $02 $11 $87 $02 $2E $ED
.db $06 $0C $0F $06 $0B $24 $19 $ED
.db $ED $2D $0C $2B $2A $15 $05 $2B
.db $ED $2D $05 $0F $0D $01 $04 $02
.db $FF $30 $5A $52 $61 $0D $01 $2E
.db $9D $14 $ED $EF

.db $44
.db $04
.db $88
.db $00
.db $00
.db $D4
.db $2B
.db $90
.db $74
.db $9F
.db $56
.db $C9
.db $48
.db $20
.db $80
.db $64
.db $04
.db $08
.db $02
.db $44
.db $02
.db $F4
.db $E9
.db $FC
.db $D5
.db $81
.db $AD
.db $B1
.db $4E
.db $08
.db $00
.db $80
.db $08
.db $00
.db $01
.db $04
.db $02
.db $79
.db $3E
.db $DF
.db $3A
.db $73
.db $91
.db $D9
.db $64
.db $08
.db $20
.db $00
.db $22
.db $00
.db $00
.db $10
.db $02
.db $D7
.db $CB
.db $CE
.db $63
.db $96
.db $C5
.db $F5
.db $3B
.db $20
.db $80
.db $20
.db $94
.db $00
.db $04
.db $14
.db $00
.db $ED
.db $EB
.db $61
.db $E4
.db $5D
.db $D9
.db $8D
.db $00
.db $C1
.db $00
.db $00
.db $20
.db $01
.db $08
.db $02
.db $80
.db $DD
.db $9E
.db $79
.db $F4
.db $FB
.db $B5
.db $00
.db $D5
.db $00
.db $08
.db $00
.db $48
.db $00
.db $00
.db $00
.db $88
.db $35
.db $49
.db $C3
.db $62
.db $34
.db $3D
.db $D3
.db $76
.db $00
.db $02
.db $02
.db $00
.db $02
.db $02
.db $1E
.db $04
.db $90
.db $BF
.db $3A
.db $EF
.db $74
.db $14
.db $A1
.db $F0
.db $20
.db $00
.db $20
.db $40
.db $00
.db $12
.db $20
.db $04
.db $58
.db $27
.db $28
.db $55
.db $14
.db $B1
.db $85
.db $62
.db $00
.db $40
.db $0A
.db $40
.db $00
.db $72
.db $42
.db $D0
.db $2F
.db $1C
.db $BD
.db $0A
.db $4C
.db $C2
.db $FE
.db $62
.db $21
.db $00
.db $00
.db $00
.db $05
.db $08
.db $44
.db $00
.db $E9
.db $F2
.db $E9
.db $44
.db $09
.db $AD
.db $50
.db $55
.db $00
.db $00
.db $00
.db $04
.db $00
.db $04
.db $00
.db $28
.db $96
.db $13
.db $75
.db $3F
.db $E7
.db $FF
.db $70
.db $7B
.db $01
.db $01
.db $40
.db $02
.db $C0
.db $80
.db $01
.db $40
.db $5B
.db $5C
.db $44
.db $51
.db $15
.db $52
.db $2E
.db $09
.db $01
.db $00
.db $54
.db $00
.db $00
.db $04
.db $00
.db $00
.db $79
.db $97
.db $08
.db $39
.db $D0
.db $19
.db $9D
.db $13
.db $00
.db $40
.db $88
.db $40
.db $00
.db $06
.db $40
.db $80
.db $37
.db $38
.db $D7
.db $D0
.db $D9
.db $55
.db $81
.db $64
.db $00
.db $80
.db $00
.db $00
.db $21
.db $02
.db $86
.db $83
.db $D1
.db $F0
.db $3E
.db $2F
.db $F3
.db $F1
.db $DF
.db $03
.db $64
.db $40
.db $00
.db $01
.db $00
.db $02
.db $98
.db $00
.db $6B
.db $45
.db $5C
.db $14
.db $E5
.db $66
.db $22
.db $52
.db $00
.db $20
.db $C0
.db $00
.db $08
.db $04
.db $40
.db $01
.db $33
.db $64
.db $6D
.db $23
.db $43
.db $7A
.db $0E
.db $64
.db $00
.db $0C
.db $02
.db $02
.db $10
.db $86
.db $01
.db $28
.db $27
.db $90
.db $F7
.db $C1
.db $6F
.db $32
.db $67
.db $64
.db $10
.db $18
.db $00
.db $00
.db $42
.db $80
.db $00
.db $02
.db $CB
.db $90
.db $EB
.db $49
.db $09
.db $C7
.db $20
.db $EE
.db $20
.db $20
.db $00
.db $80
.db $20
.db $00
.db $00
.db $80
.db $EE
.db $E6
.db $47
.db $C7
.db $01
.db $43
.db $41
.db $41
.db $00
.db $03
.db $40
.db $02
.db $02
.db $00
.db $90
.db $04
.db $E7
.db $4B
.db $CE
.db $6F
.db $C7
.db $6C
.db $60
.db $73
.db $30
.db $80
.db $00
.db $00
.db $20
.db $00
.db $80
.db $81
.db $63
.db $0C
.db $14
.db $2D
.db $48
.db $D3
.db $8D
.db $4F
.db $20
.db $40
.db $40
.db $02
.db $01
.db $40
.db $01
.db $82
.db $EC
.db $B6
.db $C6
.db $B7
.db $D8
.db $1F
.db $65
.db $E7
.db $00
.db $40
.db $00
.db $21
.db $20
.db $20
.db $00
.db $00
.db $B1
.db $31
.db $54
.db $3A
.db $D5
.db $D8
.db $7B
.db $47
.db $00
.db $01
.db $04
.db $00
.db $00
.db $40
.db $51
.db $18
.db $45
.db $A7
.db $AF
.db $06
.db $DB
.db $37
.db $FB
.db $2E
.db $03
.db $00
.db $00
.db $00
.db $10
.db $45
.db $04
.db $82
.db $79
.db $4A
.db $B2
.db $DB
.db $90
.db $41
.db $F0
.db $3B
.db $43
.db $30
.db $00
.db $80
.db $50
.db $00
.db $22
.db $04
.db $64
.db $A9
.db $F6
.db $9F
.db $7B
.db $CE
.db $AB
.db $4C
.db $10
.db $00
.db $08
.db $0E
.db $80
.db $20
.db $20
.db $02
.db $FD
.db $83
.db $3B
.db $2A
.db $05
.db $44
.db $73
.db $E9
.db $04
.db $00
.db $1A
.db $00
.db $00
.db $56
.db $00
.db $00
.db $87
.db $F3
.db $FD
.db $38
.db $5C
.db $F9
.db $4C
.db $E7
.db $08
.db $00
.db $00
.db $01
.db $04
.db $64
.db $01
.db $09
.db $1B
.db $FA
.db $1F
.db $D0
.db $07
.db $A3
.db $F5
.db $71

L0CBFA0:
.dw L0CA7F9
.dw L0CB23B
.dw L0CB222
.dw L0CABC2
.dw L0CA9BF
.dw L0CAA16
.dw L0CAC6E
.dw L0CACD2
.dw L0CAD36
.dw L0CA9BF
.dw L0CB907

.db $04
.db $00
.db $35
.db $31
.db $16
.db $C5
.db $87
.db $54
.db $A8
.db $0E
.db $40
.db $02
.db $4C
.db $12
.db $11
.db $80
.db $44
.db $23
.db $25
.db $7E
.db $ED
.db $9A
.db $D2
.db $B8
.db $16
.db $C0
.db $E3
.db $B5
.db $27
.db $AB
.db $00
.db $08
.db $00
.db $80
.db $55
.db $55
.db $EE
.db $97
.db $54
.db $20
.db $3F
.db $13
.db $2E
.db $B9
.db $42
.db $01
.db $60
.db $00
.db $00
.db $02
.db $D4
.db $B9
.db $57
.db $93
.db $DA
.db $7F
.db $DC
.db $E5
.db $01
.db $01
.db $00
.db $04
.db $20
.db $00
.db $00
.db $00
.db $95
.db $DC
.db $20
.db $B8
.db $0A
.db $B8
.db $0C
.db $B8

.ENDS
