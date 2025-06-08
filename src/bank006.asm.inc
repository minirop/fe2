.BANK 7
.ORG $0000

.SECTION "Bank6" FORCE

; meta tiles
; 4 bytes = a 2x2 tile
.db $FF $FF $FF $FF
.db $FF $FF $FF $FF
.db $06 $07 $16 $17
.db $06 $07 $16 $17
.db $02 $03 $12 $13
.db $02 $03 $12 $13
.db $46 $47 $56 $57
.db $64 $65 $74 $75
.db $08 $09 $18 $19
.db $08 $09 $18 $19
.db $6C $6D $7C $7D
.db $66 $67 $76 $77
.db $00 $01 $10 $11
.db $00 $01 $10 $11
.db $0A $0B $1A $1B
.db $0A $0B $1A $1B
.db $22 $23 $32 $33
.db $22 $23 $32 $33
.db $24 $25 $34 $35
.db $24 $25 $34 $35
.db $20 $21 $30 $31
.db $20 $21 $30 $31
.db $40 $41 $50 $51
.db $60 $61 $70 $71
.db $0C $0D $1C $1D
.db $0C $0D $1C $1D
.db $0E $0F $1E $1F
.db $0E $0F $1E $1F
.db $2A $2B $3A $3B
.db $2E $2F $3E $3F
.db $26 $27 $36 $37
.db $62 $63 $72 $73
.db $68 $69 $78 $79
.db $68 $69 $78 $79
.db $44 $45 $54 $55
.db $4C $4D $5C $5D
.db $42 $43 $52 $53
.db $6A $6B $7A $7B
.db $28 $29 $38 $39
.db $4A $4B $5A $5B
.db $48 $49 $58 $59
.db $48 $49 $58 $59
.db $2C $2D $3C $3D
.db $4E $4F $5E $5F
.db $04 $05 $14 $15
.db $04 $05 $14 $15
.db $C6 $C6 $C6 $C6
.db $C6 $C6 $D6 $D6
.db $C5 $C5 $C5 $C5
.db $80 $80 $90 $90
.db $BE $BF $BE $BF
.db $FE $FE $A6 $A6
.db $FE $A7 $A6 $B7
.db $A5 $FE $B5 $A6
.db $FE $8D $8D $E2
.db $8E $FE $9C $8E
.db $9D $E2 $FE $9D
.db $9C $9E $9E $FE
.db $8C $E2 $E2 $8C
.db $9C $E4 $E4 $9C
.db $8C $8B $8B $9C
.db $9B $9C $8C $9B
.db $8C $E3 $E2 $E3
.db $8C $E2 $E5 $E5
.db $81 $82 $91 $92
.db $6E $7E $7E $7E
.db $7E $7E $7E $6E
.db $A4 $A4 $7E $6E
.db $6E $7E $B4 $B4
.db $A3 $7E $A3 $7E
.db $7E $B3 $7E $B3
.db $A3 $7E $B8 $B4
.db $7E $B3 $B4 $B9
.db $A8 $A4 $A3 $7E
.db $A4 $A9 $7E $B3
.db $7E $7E $7E $7E
.db $F0 $E0 $F0 $E0
.db $F0 $F1 $F0 $F1
.db $F1 $F1 $F1 $F1
.db $F1 $E0 $F1 $E0
.db $BA $BA $BA $BA
.db $A4 $A4 $BA $BA
.db $BA $BA $B4 $B4
.db $A3 $BA $A3 $BA
.db $BA $B3 $BA $B3
.db $A3 $BA $B8 $B4
.db $BA $B3 $B4 $B9
.db $A8 $A4 $A3 $BA
.db $A4 $A9 $BA $B3
.db $A3 $B3 $A3 $B3
.db $A4 $A4 $B4 $B4
.db $C9 $CA $D9 $DA
.db $A5 $FE $8C $A5
.db $FE $A7 $A7 $9C
.db $A5 $FE $8C $A5
.db $FE $A7 $A7 $9C
.db $B6 $B6 $B6 $B6
.db $AB $AB $B6 $B6
.db $B6 $B6 $A1 $A1
.db $B2 $B6 $B2 $B6
.db $B6 $B0 $B6 $B0
.db $A2 $B6 $FE $A2
.db $B6 $A0 $A0 $FE
.db $BB $AC $AC $B6
.db $AA $BB $B6 $AA
.db $AA $AB $B6 $B6
.db $AB $AC $B6 $B6
.db $BB $AB $AC $B6
.db $AB $BB $B6 $AA
.db $99 $CB $99 $CB
.db $CB $CB $CB $CB
.db $CB $89 $CB $89
.db $FF $FF $FF $FF
.db $BD $BD $BD $BD
.db $06 $07 $16 $17
.db $06 $07 $16 $17
.db $02 $03 $12 $13
.db $02 $03 $12 $13
.db $46 $47 $56 $57
.db $64 $65 $74 $75
.db $08 $09 $18 $19
.db $08 $09 $18 $19
.db $6C $6D $7C $7D
.db $66 $67 $76 $77
.db $00 $01 $10 $11
.db $00 $01 $10 $11
.db $0A $0B $1A $1B
.db $0A $0B $1A $1B
.db $22 $23 $32 $33
.db $22 $23 $32 $33
.db $24 $25 $34 $35
.db $24 $25 $34 $35
.db $20 $21 $30 $31
.db $20 $21 $30 $31
.db $40 $41 $50 $51
.db $60 $61 $70 $71
.db $0C $0D $1C $1D
.db $0C $0D $1C $1D
.db $0E $0F $1E $1F
.db $0E $0F $1E $1F
.db $2A $2B $3A $3B
.db $2E $2F $3E $3F
.db $26 $27 $36 $37
.db $62 $63 $72 $73
.db $68 $69 $78 $79
.db $68 $69 $78 $79
.db $44 $45 $54 $55
.db $4C $4D $5C $5D
.db $42 $43 $52 $53
.db $6A $6B $7A $7B
.db $28 $29 $38 $39
.db $4A $4B $5A $5B
.db $48 $49 $58 $59
.db $48 $49 $58 $59
.db $2C $2D $3C $3D
.db $4E $4F $5E $5F
.db $04 $05 $14 $15
.db $04 $05 $14 $15
.db $BD $8A $BD $DF
.db $A6 $A6 $A6 $A6
.db $FE $8D $8D $E2
.db $8E $FE $9C $8E
.db $9D $E2 $FE $9D
.db $9C $9E $9E $FE
.db $8C $E2 $E2 $8C
.db $9C $E4 $E4 $9C
.db $8C $8B $8B $9C
.db $9B $9C $8C $9B
.db $8C $E3 $E2 $E3
.db $8C $E2 $E5 $E5
.db $CE $CE $DE $DE
.db $CE $8A $DE $CF
.db $6F $6F $7F $7F
.db $BD $DF $C0 $DF
.db $8A $BD $8A $C0
.db $C7 $C7 $C7 $C7
.db $94 $94 $C0 $C0
.db $84 $84 $8A $8A
.db $94 $94 $C0 $C0
.db $94 $94 $C0 $FF
.db $94 $94 $FF $FF
.db $94 $94 $FF $C0
.db $FE $FE $BE $8A
.db $FE $FE $8A $8A
.db $FE $FE $8A $BF
.db $BE $8A $93 $8A
.db $BE $8A $BE $8A
.db $8A $BF $8A $BF
.db $8A $BF $8A $DB
.db $85 $85 $AE $AE
.db $F0 $E0 $F0 $E0
.db $AD $AD $AD $AD
.db $BD $BD $C0 $C0
.db $BD $BD $E8 $C0
.db $E9 $EC $EB $EA
.db $9A $B1 $BC $C8
.db $8A $BD $8A $BD
.db $BD $BD $BD $E8
.db $BD $BD $C0 $BD
.db $BD $E9 $BD $EB
.db $EC $C0 $EA $D0
.db $BD $DF $BD $DF
.db $C0 $C0 $D0 $D0
.db $C0 $BD $D0 $BD
.db $BD $BD $BD $BD
.db $BD $BD $C0 $95
.db $BD $BD $95 $C0
.db $DF $E1 $DF $E1
.db $8A $8A $8A $8A
.db $FE $FE $D5 $FE
.db $C7 $C7 $D7 $D7
.db $FE $FE $FE $FE
.db $CF $8A $CF $8A
.db $8A $8A $CF $8A
.db $D5 $C5 $D5 $C5
.db $D5 $FE $D5 $FE
.db $C5 $C5 $D5 $C5
.db $D5 $D1 $D5 $D1
.db $83 $83 $83 $83
.db $FE $FE $D5 $D1
.db $C1 $C1 $C0 $C0
.db $E1 $DF $E1 $DF
.db $C1 $C1 $E1 $E8
.db $C1 $C1 $C0 $E1
.db $88 $AD $EE $AF
.db $AD $AD $AF $AD
.db $AD $88 $AD $EE
.db $F2 $F2 $F2 $F2
.db $88 $88 $EE $F2
.db $88 $88 $F2 $EE
.db $EE $AF $EE $AF
.db $AD $EE $AD $EE
.db $AD $88 $AD $F2
.db $88 $88 $F2 $F2
.db $88 $88 $F2 $95
.db $EF $F2 $EF $F2
.db $88 $AF $F2 $AF
.db $86 $87 $96 $97
.db $D6 $D6 $D6 $D6
.db $A6 $A6 $A6 $A6
.db $CC $CD $DC $DD
.db $C9 $CA $D9 $DA
.db $D4 $D4 $D4 $D4
.db $D8 $D4 $D8 $D4
.db $FE $C4 $C4 $FE
.db $D4 $D4 $D8 $D4
.db $C2 $C3 $D4 $D4
.db $D4 $D4 $D2 $D3
.db $C2 $D4 $D2 $D4
.db $D4 $C3 $D4 $D3
.db $D4 $D3 $D3 $FE
.db $D2 $D4 $FE $D2
.db $FE $C2 $C2 $D4
.db $C3 $FE $D4 $C3
.db $98 $8F $9F $E6
.db $E7 $E7 $ED $ED

L068400:
.db $00
.db $00
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
L068411:
.db $03
L068412:
.db $00
L068413:
.db $03
.db $00
L068415:
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
L06841F:
.db $03
L068420:
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $00
.db $03
.db $02
.db $02
.db $02
.db $02
.db $01
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $01
.db $01
.db $01
.db $01
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $01
.db $02
.db $02
.db $01
.db $01
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $02
.db $02
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $02
.db $01
.db $01
.db $02
.db $02
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $02
.db $02
.db $02
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $02
.db $02
.db $02
.db $01
.db $01
.db $02
.db $02
.db $02
.db $02
.db $03
.db $02
.db $01
.db $01
.db $01
.db $01
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $00
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02

L_PALETTES:
.dw L06852C
.dw L068628
.dw L06863C
.dw L068660
.dw L068674
.dw L068688
.dw L0686AC
.dw L0686C0
.dw L0686D4
.dw L0686E8
.dw L06870C
.dw L068720
.dw L068734
.dw L068748
.dw L06875C
.dw L068770
.dw L068550
.dw L068574
.dw L068598
.dw L0685BC
.dw L0685E0
.dw L068604

L06852C:
.db $3F $00 $20 $0F $20 $22 $1A $0F
.db $10 $00 $1A $0F $27 $17 $1A $0F
.db $36 $25 $1A $0F $20 $22 $0F $0F
.db $28 $17 $0F $0F $0A $0B $0F $0F
.db $36 $25 $0F $00

L068550:
.db $3F $00 $20 $0F $20 $22 $07 $0F
.db $10 $00 $07 $0F $27 $17 $07 $0F
.db $36 $25 $07 $0F $20 $22 $0F $0F
.db $28 $17 $0F $0F $0A $0B $0F $0F
.db $36 $25 $0F $00

L068574:
.db $3F $00 $20 $0F $20 $22 $17 $0F
.db $10 $00 $17 $0F $27 $16 $17 $0F
.db $36 $25 $17 $0F $20 $22 $0F $0F
.db $28 $17 $0F $0F $0A $0B $0F $0F
.db $36 $25 $0F $00

L068598:
.db $3F $00 $20 $0F $20 $22 $07 $0F
.db $10 $00 $07 $0F $27 $17 $07 $0F
.db $36 $25 $17 $0F $20 $22 $0F $0F
.db $28 $17 $0F $0F $0A $0B $0F $0F
.db $36 $25 $0F $00

L0685BC:
.db $3F $00 $20 $0F $20 $22 $0B $0F
.db $10 $00 $0B $0F $2B $0C $0B $0F
.db $36 $25 $0B $0F $20 $22 $0F $0F
.db $28 $17 $0F $0F $0A $0B $0F $0F
.db $36 $25 $0F $00

L0685E0:
.db $3F $00 $20 $0F $20 $22 $1A $0F
.db $10 $00 $1A $0F $27 $0A $1A $0F
.db $36 $25 $1A $0F $20 $22 $0F $0F
.db $28 $17 $0F $0F $0A $0B $0F $0F
.db $36 $25 $0F $00

L068604:
.db $3F $00 $20 $0F $20 $22 $00 $0F
.db $10 $00 $00 $0F $10 $00 $21 $0F
.db $36 $25 $00 $0F $20 $22 $0F $0F
.db $28 $17 $0F $0F $0A $0B $0F $0F
.db $36 $25 $0F $00

L068628:
.db $3F $10 $10 $0F $30 $10 $2B $0F
.db $21 $37 $2B $0F $37 $18 $2B $0F
.db $30 $10 $21 $00

L06863C:
.db $3F $00 $20 $0F $30 $31 $13 $0F
.db $3C $1C $16 $0F $38 $28 $18 $0F
.db $30 $21 $12 $0F $3C $2C $12 $0F
.db $3C $1C $16 $0F $38 $28 $18 $0F
.db $30 $21 $12 $00

L068660:
.db $3F $00 $10 $0F $30 $31 $13 $0F
.db $3C $1C $16 $0F $38 $38 $28 $0F
.db $30 $20 $21 $00

L068674:
.db $3F $00 $10 $0F $30 $31 $13 $0F
.db $3C $1C $16 $0F $38 $38 $38 $0F
.db $30 $30 $30 $00

L068688:
.db $3F $00 $20 $0F $20 $12 $1A $0F
.db $36 $12 $1A $0F $27 $07 $1A $0F
.db $35 $15 $1A $0F $36 $12 $0F $0F
.db $36 $26 $0F $0F $0A $0B $0F $0F
.db $35 $15 $0F $00

L0686AC:
.db $3F $10 $10 $0F $20 $22 $2A $0F
.db $10 $00 $2A $0F $0A $0B $2A $0F
.db $36 $25 $2A $00

L0686C0:
.db $3F $10 $10 $0F $37 $08 $1A $0F
.db $30 $12 $1A $0F $30 $15 $34 $0F
.db $36 $24 $1A $00

L0686D4:
.db $3F $10 $10 $0F $37 $21 $0F $0F
.db $30 $12 $1A $0F $30 $15 $34 $0F
.db $36 $24 $1A $00

L0686E8:
.db $3F $00 $20 $0F $2B $1B $07 $0F
.db $36 $11 $07 $0F $37 $17 $07 $0F
.db $36 $15 $07 $0F $36 $12 $0F $0F
.db $36 $26 $0F $0F $0A $0B $0F $0F
.db $35 $15 $0F $00

L06870C:
.db $3F $10 $10 $0F $20 $14 $0F $0F
.db $04 $14 $0F $0F $20 $31 $21 $0F
.db $36 $24 $1A $00

L068720:
.db $3F $10 $10 $0F $38 $15 $0F $0F
.db $30 $12 $1A $0F $30 $15 $34 $0F
.db $36 $24 $1A $00

L068734:
.db $3F $10 $10 $0F $20 $38 $28 $0F
.db $30 $12 $1A $0F $30 $15 $34 $0F
.db $36 $24 $1A $00

L068748:
.db $3F $10 $10 $0F $38 $13 $0F $0F
.db $30 $12 $1A $0F $20 $31 $21 $0F
.db $36 $24 $1A $00

L06875C:
.db $3F $10 $10 $0F $20 $2C $0F $0F
.db $30 $12 $1A $0F $20 $31 $21 $0F
.db $36 $24 $1A $00

L068770:
.db $3F $10 $10 $0F $25 $18 $03 $0F
.db $33 $24 $24 $0F $33 $33 $33 $0F
.db $36 $24 $1A $00

L068784:
    LDA $2A
    JSR L0FC34C.w

.dw L0687C4
.dw L0687D0
.dw L068825
.dw L0688FD
.dw L068907
.dw L06893F
.dw L068A74
.dw L0689BB
.dw L068C81
.dw L068E35
.dw L068D3F
.dw L068D8D
.dw L068E59
.dw L06B62F
.dw L06B904
.dw L06B91A
.dw L0687AF
.dw L0687B6
.dw L0687BA

L0687AF:
    LDA #0
    STA $05F4
    BEQ L0687BC
L0687B6:
    LDA #1
    BNE L0687BC
L0687BA:
    LDA #2
L0687BC:
    STA $4A
    LDA #13
    JSR L0FCA94.w
    RTS

L0687C4:
    JSR L0FC73E.w
    JSR L06B612.w
    JSR L0FC70D.w
    INC $2A
    RTS

L0687D0:
    LDA $05B5
    BEQ L0687DE
    LDA #2
    STA $4A
    LDA #4
    JMP L0FCA94.w

L0687DE:
    JSR L0FC71F.w
    LDA $66
    BEQ L0687F6
    CMP #2
    BNE L06881E
    JSR L06BA18.w
    LDA #10
    STA $2A
    LDA #0
    STA $8A
    BEQ L068824
L0687F6:
    JSR L0FC773.w
    LDA $6E8C
    STA $10
    LDA #174
    STA $00
    LDA #103
    STA $01
    LDA #214
    STA $02
    LDA #12
    STA $03
    LDA #0
    JSR L0FC225.w
    LDA $10
    STA $6E8C
    JSR L0FFB69.w
    JSR L0FC77D.w
L06881E:
    INC $2A
    LDA #0
    STA $8A
L068824:
    RTS

L068825:
    LDA $8A
    JSR L0FC34C.w

.dw L06882E
.dw L068896

L06882E:
    JSR L0FC288.w
    LDA $66
    BEQ L06884E
    JSR L0688E8.w
    LDA #0
    STA $7DA4
    STA $68
    STA $747C
    LDA #1
    STA $05AF
    JSR L06B612.w
    INC $8A
    BNE L068895
L06884E:
    LDA #1
    STA $744C
    LDA #4
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDA #255
    STA $6E77
    STA $6E78
    STA $6E79
    LDA #22
    STA $6D8F
    LDA #2
    STA $7444
    LDA #1
    STA $743E
    LDA #0
    STA $743F
    STA $7DA4
    INC $2A
    LDA $66
    BNE L068895
    LDA #0
    STA $05B8
    LDA #49
    STA $7434
    STA $6CC0
    LDA #16
    STA $2A
L068895:
    RTS

L068896:
    LDA $05B5
    BEQ L0688A4
    LDA #2
    STA $4A
    LDA #4
    JMP L0FCA94.w

L0688A4:
    LDA #6
    STA $4A
    LDA #11
    JSR L0FCA94.w
    LDA $05AF
    BNE L0688E7
    LDA $68
    BEQ L0688BD
    LDA #0
    STA $67
    JMP RESET
L0688BD:
    LDA $7434
    BEQ L0688DF
    LDA #2
    STA $7479
    LDA #0
    STA $05AD
    STA $7445
    STA $7446
    STA $8A
    STA $66
    STA $05B5
    LDA #16
    STA $2A
    BNE L0688E7
L0688DF:
    LDA #1
    STA $06D0
    JMP L06B8A1.w
L0688E7:
    RTS

L0688E8:
    LDA #174
    STA $00
    LDA #103
    STA $01
    LDA #214
    STA $02
    LDA #12
    STA $03
    LDA #0
    JMP L0FC225.w

L0688FD:
    LDA #3
    STA $4A
    LDA #7
    JSR L0FCA94.w
    RTS

L068907:
    LDA #0
    STA $05D8
    JSR L0FCCE7.w
    LDA $7477
    BNE L06891A
    LDX $6D11
    JMP L068921.w

L06891A:
    LDA $6D14
    CLC
    ADC #2
    TAX
L068921:
    LDA $6D16,X
    STA $6D0B
    INC $2A
    RTS

L06892A:
    LDA #105
    STA $01
    LDA #83
    STA $00
    LDA #1
    STA $03
    LDA #165
    STA $02
    LDA #0
    JMP L0FC225.w

L06893F:
    JSR L0689AA.w
    JSR L068C6C.w
    LDA #17
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDA #1
    STA $747C
    LDA #3
    STA $4A
    LDA #8
    JSR L0FCA94.w
    JSR L068969.w
    LDA #0
    STA $8A
    STA $747C
    INC $2A
    RTS

L068969:
    LDX #8
    LDA #0
L06896D:
    STA $740F,X
    STA $7419,X
    DEX
    BPL L06896D
    JSR L0FF2D4.w
    LDX #0
    JMP L0689A3.w

L06897E:
    STA $10
    LDY #0
L068982:
    LDA L0FF243.w,Y
    CMP #255
    BEQ L06899E
    CMP $10
    BNE L06899B
    STA $740F,X
    LDA L0FF24D.w,Y
    STA $7419,X
    INX
    CPX #9
    BCS L0689A9
L06899B:
    INY
    BPL L068982
L06899E:
    LDA #21
    JSR L0FC379.w
L0689A3:
    LDY #0
    LDA ($00),Y
    BNE L06897E
L0689A9:
    RTS

L0689AA:
    LDA #5
    STA $01
    LDA #128
    STA $02
    LDA #0
    STA $00
    STA $03
    JMP L0FC225.w

L0689BB:
    LDA $8A
    JSR L0FC34C.w

.dw L0689C7
.dw L068A15

L0689C4:
    INC $2A
    RTS

L0689C7:
    LDA #0
    STA $05A2
    JSR L06BA18.w
    LDA $69
    STA $742F
    LDA $6A
    STA $7430
    LDY #0
    STY $69
    STY $6A
    STY $0504
    LDA #3
    STA $35
    JSR L0FD39A.w
    INC $8A
    RTS

L0689EC:
    LDX #0
L0689EE:
    LDA L0FF150.w,X
    CMP $7434
    BEQ L068A00
    CMP #255
    BEQ L0689FE
    INX
    JMP L0689EE.w

L0689FE:
    SEC
    RTS

L068A00:
    TXA
    STA $0C
    JSR L0FC39B.w
    TAY
    TXA
    AND #7
    TAX
    LDA $6E77,Y
    AND L0FD9B1.w,X
    BEQ L0689FE
    CLC
    RTS

L068A15:
    LDA $35
    CMP #2
    BCS L068A6F
    LDA #0
    STA $9D
    LDA $8E
    BNE L068A6C
    LDY $0504
    LDA L068A70.w,Y
    STA $8D
    JSR L0FD0BB.w
    LDA $8E
    BNE L068A3F
    LDY $0504
    INY
    CPY #4
    BCC L068A3C
    LDY #0
L068A3C:
    STY $0504
L068A3F:
    LDA $35
    BNE L068A6C
    LDA $69
    BNE L068A6C
    LDA $6A
    BNE L068A6C
    LDA $6A
    CLC
    ADC #8
    STA $95
    LDA $69
    CLC
    ADC #8
    STA $94
    LDA #103
    STA $01
    LDA #174
    STA $00
    JSR L068F95.w
    LDA #0
    STA $8A
    INC $2A
    BNE L068A6F
L068A6C:
    JSR L0FD0C5.w
L068A6F:
    RTS

L068A70:
.db $01 $04 $02 $08

L068A74:
    LDA #0
    STA $747C
    JSR L0FC73E.w
    JSR L0FC773.w
    LDA #0
    STA $05FE
    LDA $6D10
    STA $05BF
L068A8A:
    LDX $05BF
    DEX
    STX $05BD
    JSR L068B24.w
    JSR L068C5A.w
    LDA #1
    JSR L0FFA7F.w
    JSR L0FF2CB.w
    LDA #0
    JSR L0FF389.w
    LDA $00
    STA $02
    LDA $01
    STA $03
    LDX $05BF
    LDA $6D10,X
    ASL
    TAX
    LDA $6CD2,X
    STA $7A
    LDA $6CD3,X
    STA $7B
    LDY $05BF
    LDX $6D10,Y
    LDA $6CF6,X
    LDY $05BF
    DEY
    CMP $7435,Y
    BCC L068AD3
    LDA $7435,Y
L068AD3:
    STA $05CF
    STA $7439,Y
    JSR L068BD5.w
    DEC $05BF
    BNE L068A8A
    JSR L068B42.w
    JSR L068AF1.w
    JSR L0FC77D.w
    LDA #0
    STA $8A
    INC $2A
    RTS

L068AF1:
    LDA $05FC
    BEQ L068B23
    LDA #22
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDA $6D15
    CLC
    ADC #2
    TAX
    ASL
    TAY
    LDA #0
    STA $6CF6,X
    STA $6CC0,X
    LDA $6CD2,Y
    STA $00
    LDA $6CD3,Y
    STA $01
    LDA #0
    LDY #5
L068B1E:
    STA ($00),Y
    DEY
    BPL L068B1E
L068B23:
    RTS

L068B24:
    LDA $7434
    CMP #37
    BNE L068B41
    LDA $6D10
    CMP #2
    BEQ L068B41
    LDX $6D11
    LDA $6D16,X
    CMP #72
    BNE L068B41
    LDA #1
    STA $05BD
L068B41:
    RTS

L068B42:
    JSR L0689EC.w
    BCC L068B48
L068B47:
    RTS

L068B48:
    LDX $0C
    LDA L0FF16B.w,X
    BEQ L068B47
    SEC
    SBC #1
    ASL
    TAY
    LDA L0FF178.w,Y
    STA $00
    LDA (L0FF178.w + 1),Y
    STA $01
    LDY #0
    LDX #0
L068B62:
    LDA ($00),Y
    STA $74B5,X
    CMP #255
    BEQ L068B75
    INY
    LDA ($00),Y
    STA $74BF,X
    INX
    INY
    BPL L068B62
L068B75:
    LDA #0
    STA $74B5,X
    JSR L0FF2CB.w
    LDA #0
    JSR L0FF389.w
    BCS L068B47
    LDA $00
    STA $04
    STA $7A
    LDA $01
    STA $05
    STA $7B
    LDA #21
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDA #0
    STA $05BD
    JSR L068C5A.w
    LDA #1
    JSR L0FFA7F.w
    LDA $7435
    STA $05C0
    LDA $7A
    STA $02
    LDA $7B
    STA $03
    LDA #0
    STA $0E
    JMP L068BCE.w

L068BBB:
    JSR L068C0C.w
    LDY $0E
    LDA $74BF,Y
    LDY #19
    STA ($02),Y
    INC $0E
    LDA #21
    JSR L0FC384.w
L068BCE:
    LDY #0
    LDA ($02),Y
    BNE L068BBB
    RTS

L068BD5:
    LDY #11
L068BD7:
    LDA ($7A),Y
    STA ($02),Y
    DEY
    BPL L068BD7
    JSR L068C0C.w
    LDY $05BF
    LDA $6D10,Y
    TAY
    LDA $6D90,Y
    CMP #4
    BNE L068BFC
    LDY $05FE
    LDA $73CF,Y
    LDY #14
    STA ($02),Y
    INC $05FE
L068BFC:
    LDA #12
    JSR L0FC9ED.w
    LDA #21
    JSR L0FC384.w
    DEC $05CF
    BNE L068BD5
    RTS

L068C0C:
    LDY #18
    LDA #0
    STA ($02),Y
    JSR L068C63.w
    JSR L0FD740.w
    LDY #15
    STA ($02),Y
    LDY #1
    LDA ($02),Y
    ASL
    LDY #0
    STA ($00),Y
    LDY #3
    LDA ($02),Y
    LDY #14
    STA ($02),Y
    LDY #1
    LDA ($02),Y
    TAX
    DEX
    LDA L0FEDD3.w,X
    LDY #13
    STA ($02),Y
    LDY #0
    LDA ($02),Y
    TAX
    DEX
    LDA L0FEE00.w,X
    LDY #12
    STA ($02),Y
    LDY #1
    LDA ($02),Y
    CMP #10
    BNE L068C59
    LDY #12
    LDA ($02),Y
    CLC
    ADC L0FEDF3.w
    STA ($02),Y
L068C59:
    RTS

L068C5A:
    LDA #0
    STA $4A
    LDA #8
    JMP L0FCA94.w

L068C63:
    LDA #1
    STA $4A
    LDA #8
    JMP L0FCA94.w

L068C6C:
    LDA #103
    STA $01
    LDA #174
    STA $00
    LDA #3
    STA $03
    LDA #74
    STA $02
    LDA #0
    JMP L0FC225.w

L068C81:
    JSR L068CA0.w
    LDA #0
    STA $7479
    STA $05D8
    STA $747D
    STA $7448
    STA $054C
    STA $05E6
    LDA #1
    STA $743D
    INC $2A
    RTS

L068CA0:
    LDA #103
    STA $7B
    LDA #174
    STA $7A
    JSR L068CBE.w
    LDA #105
    STA $7B
    LDA #83
    STA $7A
    JMP L068CBE.w

L068CB6:
    JSR L068CC5.w
    LDA #21
    JSR L0FC9ED.w
L068CBE:
    LDY #0
    LDA ($7A),Y
    BNE L068CB6
    RTS

L068CC5:
    JSR L0FF3BD.w
    LDX #7
L068CCA:
    LDA $05C5,X
    CMP #255
    BEQ L068CED
    STA $0A
    JSR L0FF460.w
    BCS L068CED
    LDY $0A
    LDA L0FDAFD.w,Y
    AND #16
    BNE L068CED
    LDA $0A
    LDY #20
    STA ($7A),Y
    JSR L068CF4.w
    JMP L068CF3.w

L068CED:
    DEX
    BPL L068CCA
    JSR L068D1B.w
L068CF3:
    RTS

L068CF4:
    LDY #1
    LDA ($7A),Y
    CMP #11
    BNE L068D1A
    LDY #20
    LDA ($7A),Y
    CMP #23
    BCC L068D1A
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L068D14
    LDY #11
    LDA ($7A),Y
    JMP L068D16.w

L068D14:
    LDA #0
L068D16:
    LDY #20
    STA ($7A),Y
L068D1A:
    RTS

L068D1B:
    LDY #1
    LDA ($7A),Y
    CMP #12
    BEQ L068D38
    CMP #20
    BEQ L068D38
    CMP #13
    BEQ L068D38
    LDA $744A
    BEQ L068D34
    CMP #21
    BEQ L068D38
L068D34:
    LDA #0
    BEQ L068D3A
L068D38:
    LDA #1
L068D3A:
    LDY #20
    STA ($7A),Y
    RTS

L068D3F:
    LDA $66
    CMP #2
    BNE L068D4B
    JSR L068D4E.w
    JSR L0FD39A.w
L068D4B:
    INC $2A
    RTS

L068D4E:
    LDA #103
    STA $01
    LDA #174
    STA $00
L068D56:
    LDY #16
    LDA ($00),Y
    STA $94
    SEC
    SBC #8
    BPL L068D63
    LDA #0
L068D63:
    STA $69
    LDA $7440
    SEC
    SBC #14
    CMP $69
    BCS L068D71
    STA $69
L068D71:
    LDY #17
    LDA ($00),Y
    STA $95
    SEC
    SBC #8
    BCS L068D7E
    LDA #0
L068D7E:
    STA $6A
    LDA $7441
    SEC
    SBC #15
    CMP $6A
    BCS L068D8C
    STA $6A
L068D8C:
    RTS

L068D8D:
    LDA #6
    STA $05B7
    JSR L068DA3.w
    JSR L06A4EE.w
    LDA #0
    STA $7446
    INC $2A
    JSR L068DFB.w
    RTS

L068DA3:
    LDA $7434
    CMP #62
    BNE L068DC4
    LDA $6D10
    CMP #2
    BNE L068DC4
    LDA $6E79
    AND #128
    BEQ L068DFA
    LDA $6E79
    AND #127
    STA $6E79
    LDA #14
    BNE L068DE5
L068DC4:
    JSR L0689EC.w
    BCS L068DFA
    LDA $7434
    CMP #34
    BNE L068DD5
    LDA $05FC
    BEQ L068DFA
L068DD5:
    LDA L0FD9B1.w,X
    EOR #255
    AND $6E77,Y
    STA $6E77,Y
    LDX $0C
    LDA L0FF15E.w,X
L068DE5:
    STA $7446
    LDA #113
    STA $7DA9
    JSR L06BAD0.w
    JSR L06B612.w
    LDA #128
    STA $28
    JSR L06BA18.w
L068DFA:
    RTS

L068DFB:
    LDA $7434
    CMP #62
    BNE L068E34
    LDA $6D10
    CMP #2
    BEQ L068E34
    LDX $6D11
    CPX #0
    BEQ L068E34
    LDA $6D90,X
    CMP #3
    BNE L068E34
    LDA #0
    STA $6D0E
    LDA $6D8F
    AND #222
    STA $6D8F
    LDA $6E5C
    ORA #128
    STA $6E5C
    LDA #7
    STA $8A
    LDA #13
    STA $2A
L068E34:
    RTS

L068E35:
    LDA #28
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA #0
    STA $8A
    STA $A0
    STA $0589
    LDA #8
    STA $0587
    LDA $7477
    BEQ L068E56
    LDA #32
    STA $8A
    BNE L068E56
L068E56:
    INC $2A
    RTS

L068E59:
    LDY $05AE
    BNE L068E64
    JSR L0FC288.w
    JSR L0FD4FC.w
L068E64:
    LDA $8A
    JSR L0FC34C.w

.dw L068EF9
.dw L069086
.dw L06920A
.dw L0692CA
.dw L0693B3
.dw L069579
.dw L069599
.dw L069672
.dw L0697BD
.dw L069864
.dw L0698CB
.dw L06991A
.dw L069970
.dw L0699A3
.dw L0699AF
.dw L0699C5
.dw L0699E0
.dw L069AB4
.dw L069AED
.dw L069B82
.dw L069CD3
.dw L069CFC
.dw L069D1D
.dw L069D28
.dw L06B03D
.dw L069E1D
.dw L069F56
.dw L069F63
.dw L069F6E
.dw L069F7C
.dw L06A048
.dw L06A243
.dw L06A3F6
.dw L06A42B
.dw L06AC6A
.dw L06ACA0
.dw L06ACDB
.dw L06ACE6
.dw L06AD2C
.dw L06AD62
.dw L06AD87
.dw L06AD91
.dw L06ADC2
.dw L06AE02
.dw L06AE10
.dw L06AE8E
.dw L06AECD
.dw L06AEAB
.dw L069B82
.dw L069CD3
.dw L069CFC
.dw L069D1D
.dw L069D28
.dw L06B03D
.dw L06B026
.dw L06B32D
.dw L06B26B
.dw L06B27F
.dw L069968
.dw L06B275
.dw L06B27E
.dw L069DF4
.dw L06A96F
.dw L068F13
.dw L068F13
.dw L068F13
.dw L069A1A
.dw L06A970
.dw L069998
.dw L0690F6
.dw L069A29
.dw L06B23C

L068EF9:
    JSR L0FE67F.w
    LDA #0
    STA $9D
    STA $3F
    STA $A0
    JSR L0FD499.w
    JSR L0FD40C.w
    JSR L0FD0C5.w
    JSR L06A5A4.w
    JSR L068F14.w
L068F13:
    RTS

L068F14:
    LDA $1A
    CMP #64
    BEQ L068F1B
    RTS

L068F1B:
    LDA $747D
    STA $00
    LDA #21
    STA $01
    JSR L0FC6C9.w
    LDA #174
    CLC
    ADC $00
    STA $00
    LDA #103
    ADC $01
    STA $01
    LDA #0
    STA $0C
    LDY $6D10
    DEY
L068F3C:
    LDA $7439,Y
    CLC
    ADC $0C
    STA $0C
    DEY
    BPL L068F3C
    LDX $0C
    CPX #1
    BEQ L068F4E
    DEX
L068F4E:
    LDY #0
    LDA ($00),Y
    BEQ L068F77
    LDY #19
    LDA ($00),Y
    AND #4
    BNE L068F77
    LDY #18
    LDA ($00),Y
    BNE L068F77
    JSR L068F95.w
    INC $747D
    LDA $747D
    CMP $0C
    BCC L068F74
    LDA #0
    STA $747D
L068F74:
    JMP L068F94.w

L068F77:
    INC $747D
    LDA $747D
    CMP $0C
    BCC L068F8C
    LDA #0
    STA $747D
    JSR L0FF2CB.w
    JMP L068F91.w
L068F8C:
    LDA #21
    JSR L0FC379.w

L068F91:
    DEX
    BNE L068F4E
L068F94:
    RTS

L068F95:
    LDY #17
    LDA ($00),Y
    STA $0510
    LDY #16
    LDA ($00),Y
    STA $0511
L068FA3:
    LDA #0
    STA $05B6
    LDA $95
    STA $0506
    LDA $94
    STA $0507
    JSR L0FC288.w
L068FB5:
    JSR L06AE48.w
    LDA $05B6
    BEQ L068FC1
    LDA $8E
    BEQ L068FC9
L068FC1:
    INC $36
    JSR L0FC70D.w
    JMP L068FB5.w

L068FC9:
    LDA $0506
    STA $95
    LDA $0507
    STA $94
    RTS

L068FD4:
    LDA $00
    STA $7A
    LDA $01
    STA $7B
    JSR L068F95.w
    LDY #17
    LDA ($7A),Y
    STA $0500
    LDY #16
    LDA ($7A),Y
    STA $0501
    JSR L0FD598.w
    JMP L068FF6.w

L068FF3:
    JSR L068FA3.w
L068FF6:
    LDA $05E5
    BMI L06904F
    LDA #6
    STA $35
    LDA #255
    STA $05E4
    LDX $05E5
    LDA L06B458.w,X
    JSR L0FC9BD.w
    LDA #128
    STA $28
    JSR L0FC288.w
    JSR L0FC70D.w
    LDX $05E5
    LDA L06907A.w,X
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDX $05E5
    LDA L06906E.w,X
    JSR L0FF58A.w
L06902C:
    JSR L0FC288.w
    LDA $35
    BEQ L06904F
    JSR L0FD81E.w
    LDA #0
    STA $3D
    LDA #1
    STA $92
    LDA #2
    STA $0589
    JSR L0FD499.w
    JSR L0FC336.w
    JSR L0FC70D.w
    JMP L06902C.w

L06904F:
    LDA #28
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA #48
    JSR L0FF58A.w
    LDA #0
    STA $0589
    STA $A0
    JSR L06B612.w
    LDA #128
    STA $28
    JSR L0FC70D.w
    RTS

L06906E:
.db $01
.db $23
.db $23
.db $23
.db $23
.db $23
.db $23
.db $23
.db $23
.db $03
.db $62
.db $23

L06907A:
.db $00
.db $1C
.db $1C
.db $1C
.db $1C
.db $10
.db $10
.db $10
.db $10
.db $1C
.db $1C
.db $1C

L069086:
    JSR L0FE67F.w
    LDA $05AC
    BEQ L0690E1
    CMP #1
    BEQ L0690DD
    CMP #2
    BEQ L0690AE
    CMP #3
    BEQ L0690BC
    CMP #4
    BEQ L0690D9
    CMP #5
    BEQ L0690CE
    CMP #6
    BEQ L0690E9
    CMP #7
    BEQ L0690CA
    LDA #32
    BNE L0690E3
L0690AE:
    LDA #1
    STA $7448
    LDA #0
    STA $059C
    LDA #71
    BNE L0690E3
L0690BC:
    LDA #255
    STA $7448
    LDA #0
    STA $059C
    LDA #71
    BNE L0690E3
L0690CA:
    LDA #57
    BNE L0690E3
L0690CE:
    LDA #15
    STA $2A
    LDA #0
    STA $059C
    BEQ L0690E3
L0690D9:
    LDA #55
    BNE L0690E3
L0690DD:
    LDA #2
    BNE L0690E3
L0690E1:
    LDA #0
L0690E3:
    STA $8A
    JSR L0FE696.w
    RTS

L0690E9:
    LDA #0
    STA $059C
    LDA #69
    STA $8A
    JSR L0FE696.w
    RTS

L0690F6:
    LDA $059C
    JSR L0FC34C.w

.dw L06910A
.dw L06917F
.dw L069197
.dw L0691A3
.dw L0691BB
.dw L0691CC
.dw L0691F7

L06910A:
    JSR L0FE67F.w
    LDA $05F7
    BEQ L069121
    LDA #63
    JSR L0FE6B8.w
    LDA #16
    STA $35
    INC $059C
    JMP L069126.w
L069121:
    LDA #2
    STA $059C
L069126:
    RTS

L069127:
    LDA $7477
    BEQ L069164
    LDA $6D10
    CMP #2
    BEQ L069162
    LDA #7
    STA $0C
L069137:
    LDA $0C
    ASL
    TAX
    LDA L0FE360.w,X
    STA $0E
    LDA (L0FE360.w + 1),X
    STA $0F
    LDY #0
L069147:
    LDA ($0E),Y
    CMP #255
    BEQ L069155
    CMP $7434
    BEQ L06915B
    INY
    BPL L069147
L069155:
    DEC $0C
    BPL L069137
    BMI L069162
L06915B:
    INY
    LDA ($0E),Y
    CMP #255
    BNE L06916A
L069162:
    SEC
    RTS

L069164:
    LDX $6D11
    LDA $6D16,X
L06916A:
    STA $0D
    LDX #13
L06916E:
    LDA $6CF8,X
    BEQ L06917A
    LDA $6CC2,X
    CMP $0D
    BEQ L069162
L06917A:
    DEX
    BPL L06916E
    CLC
    RTS

L06917F:
    JSR L0FE67F.w
    LDA $1C
    BNE L06918A
    LDA $35
    BNE L069196
L06918A:
    JSR L0FE696.w
    LDA #0
    STA $059C
    STA $8A
    STA $2C
L069196:
    RTS

L069197:
    JSR L0FE67F.w
    LDA #49
    JSR L0FE6B8.w
    INC $059C
    RTS

L0691A3:
    JSR L0FE67F.w
    LDA $8A
    STA $2C
    LDA #12
    JSR L0FE6B8.w
    LDA #160
    STA $77
    LDA #80
    STA $76
    INC $059C
    RTS

L0691BB:
    JSR L0FE67F.w
    LDA $05AC
    CMP #1
    BEQ L0691C8
    INC $059C
L0691C8:
    INC $059C
    RTS

L0691CC:
    JSR L0FE67F.w
    JSR L0FE696.w
    LDA $058F
    BNE L0691F6
    LDA #0
    STA $05E6
    LDA $7477
    BEQ L0691E6
    LDA #1
    STA $05E6
L0691E6:
    LDA #3
    STA $05AD
    LDA #13
    STA $2A
    LDA #0
    STA $059C
    STA $8A
L0691F6:
    RTS

L0691F7:
    JSR L0FE67F.w
    JSR L0FE696.w
    LDA $058F
    BNE L069209
    LDA #0
    STA $8A
    STA $059C
L069209:
    RTS

L06920A:
    JSR L0FE67F.w
    LDA $059C
    JSR L0FC34C.w

.dw L069219
.dw L06922D
.dw L069235

L069219:
    LDA #7
    STA $28
    LDA #24
    JSR L0FCA48.w
    JSR L0FCA50.w
    INC $059C
    LDA #22
    JMP L0FE6B8.w

L06922D:
    INC $059C
    LDA #23
    JMP L0FE6B8.w

L069235:
    JSR L0692B7.w
    JSR L0FF2CB.w
    BNE L069264
L06923D:
    LDY #18
    LDA ($00),Y
    CMP #255
    BEQ L06925F
    LDX $74B4
    STA $74F4,X
    LDY #0
    LDA ($00),Y
    STA $74B5,X
    LDY #1
    LDA ($00),Y
    STA $7534,X
    JSR L06927E.w
    INC $74B4
L06925F:
    LDA #21
    JSR L0FC379.w
L069264:
    LDY #0
    LDA ($00),Y
    BNE L06923D
    LDY $74B4
    STY $74F0
    LDY #0
    STY $74B4
    STY $059C
    STY $05F0
    INC $8A
    RTS

L06927E:
    LDX $74B4
    LDA #0
    STA $75F4,X
    LDA $00
    STA $7A
    LDA $01
    STA $7B
    LDY #11
    LDA ($7A),Y
    BEQ L0692B6
    JSR L0FF542.w
    LDA $05EC
    CLC
    ADC #1
    LDX $74B4
    STA $75F4,X
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCC L0692B6
    BVS L0692B6
    LDA $75F4,X
    ORA #128
    STA $75F4,X
L0692B6:
    RTS

L0692B7:
    LDA #180
    STA $00
    LDA #116
    STA $01
    LDA #192
    STA $02
    LDA #0
    STA $03
    JMP L0FC225.w

L0692CA:
    JSR L0692D0.w
    INC $8A
    RTS

L0692D0:
    JSR L0695AA.w
    LDY $058F
    LDA #6
    JSR L0FE6AC.w
    LDY #4
    LDA ($74),Y
    SEC
    SBC #24
    STA $00
    INY
    LDA ($74),Y
    CLC
    ADC #16
    STA $01
    JSR L0FC517.w
    LDA $04
    STA $7E
    LDA $05
    STA $7F
    JSR L0FC70D.w
    LDA #71
    JSR L0FE6B8.w
    LDX $7E
    LDY $7F
    LDA #77
    STA $0310
    JSR L0FC842.w
    JSR L0FC70D.w
    LDA $7E
    STA $00
    LDA $7F
    STA $01
    JSR L0FC81C.w
    JSR L0FC81C.w
    JSR L0FC81C.w
    JSR L0FC81C.w
    LDA $00
    STA $7E
    LDA $01
    STA $7F
    LDA #8
    STA $0595
    LDY $74B4
    STY $74F1
    JSR L0FC70D.w
L069338:
    JSR L0FF2CB.w
    LDY $74F1
    LDA $74B5,Y
    BEQ L06934A
    STA $02
    LDY #0
    JMP L06935B.w

L06934A:
    LDY #32
    LDA #255
L06934E:
    STA $0311,Y
    DEY
    BPL L06934E
    BMI L069379
L069356:
    LDA #21
    JSR L0FC379.w
L06935B:
    LDA ($00),Y
    CMP $02
    BNE L069356
    LDA #132
    STA $02
    LDA #116
    STA $03
    LDA #21
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    LDA #2
    JSR L0FE6B8.w
L069379:
    LDX $7E
    LDY $7F
    LDA #79
    STA $0310
    JSR L0FC842.w
    JSR L0FC70D.w
    LDA $7E
    STA $00
    LDA $7F
    STA $01
    JSR L0FC81C.w
    JSR L0FC81C.w
    LDA $00
    STA $7E
    LDA $01
    STA $7F
    INC $74F1
    DEC $0595
    BNE L069338
    RTS

L0693A7:
    LDA $05F0
    CMP #5
    BNE L0693B2
    LDA #1
    STA $DE
L0693B2:
    RTS

L0693B3:
    JSR L0695AA.w
    LDA $1E
    CMP #4
    BEQ L0693FE
    CMP #8
    BEQ L069407
    CMP #64
    BEQ L069427
    CMP #128
    BEQ L069410
    CMP #1
    BEQ L0693DF
    AND #2
    BEQ L06942C
    JSR L0693A7.w
    DEC $05F0
    BPL L0693F1
    LDA #6
    STA $05F0
    BNE L0693F1
L0693DF:
    JSR L0693A7.w
    INC $05F0
    LDA $05F0
    CMP #7
    BCC L0693F1
    LDA #0
    STA $05F0
L0693F1:
    JSR L0693A7.w
    JSR L0FF578.w
    LDA #3
    STA $8A
    JMP L06942C.w

L0693FE:
    JSR L069442.w
    JSR L0FF578.w
    JMP L06942C.w

L069407:
    JSR L069480.w
    JSR L0FF578.w
    JMP L06942C.w

L069410:
    JSR L0FF57E.w
    LDA $74B4
    CLC
    ADC $74F3
    TAY
    JSR L0FF2CB.w
    LDA $74B5,Y
    JSR L0FF258.w
    JSR L068D56.w
L069427:
    JSR L06B612.w
    INC $8A
L06942C:
    LDY $74F3
    LDA L0694C1.w,Y
    STA $3A
    LDA #72
    STA $3B
    LDA #8
    STA $0587
    LDA #198
    JMP L0FE80F.w

L069442:
    LDY $74B4
    LDX $74F3
    INX
    CPX #8
    BCS L069457
    TXA
    CLC
    ADC $74B4
    CMP $74F0
    BCC L069479
L069457:
    DEC $8A
    LDX #0
    LDA $74B4
    CLC
    ADC #8
    TAY
    CMP $74F0
    BCC L069469
    LDY #0
L069469:
    ADC #7
    CMP $74F0
    BCC L069479
    LDX #0
    CPY $74B4
    BNE L069479
    INC $8A
L069479:
    STX $74F3
    STY $74B4
    RTS

L069480:
    LDY $74B4
    LDX $74F3
    DEX
    BPL L0694BA
    LDA $74F0
    CMP #9
    BCS L069499
    LDX $74F0
    BEQ L0694BA
    DEX
    JMP L0694BA.w

L069499:
    DEC $8A
    LDX #7
    TYA
    SEC
    SBC #8
    TAY
    BPL L0694BA
    LDA #0
L0694A6:
    TAY
    CLC
    ADC #8
    CMP $74F0
    BCC L0694A6
    STY $74B4
    LDA $74F0
    SBC $74B4
    TAX
    DEX
L0694BA:
    STX $74F3
    STY $74B4
    RTS

L0694C1:
    RTS

L0694C2:
.db $70 $80 $90 $A0 $B0 $C0 $D0

L0694C9:
    LDA $74B4
    CLC
    ADC $74F3
    TAY
    JSR L0FF2CB.w
    LDA $74B5,Y
    JSR L0FF258.w
    LDA #132
    STA $02
    LDA #116
    STA $03
    LDA #21
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    LDA #11
    JMP L0FE6B8.w

L0694F2:
    JSR L0693FE.w
    JMP L06963A.w

L0694F8:
    JSR L069407.w
    JMP L06963A.w

L0694FE:
    LDA $74B4
    CLC
    ADC $74F3
    TAY
    JSR L0FF2CB.w
    LDA $74B5,Y
    CMP #1
    BEQ L069569
    JSR L0FF258.w
    LDA $74B4
    CLC
    ADC $74F3
    TAX
    LDY #18
    LDA ($00),Y
    EOR #1
    STA ($00),Y
    STA $74F4,X
    BEQ L069539
    LDA $05AB
    BNE L069534
    STA ($00),Y
    STA $74F4,X
    BEQ L06953C
L069534:
    DEC $05AB
    BPL L06953C
L069539:
    INC $05AB
L06953C:
    DEC $8A
    LDA $05AB
    STA $00
    LDA #2
    STA $01
    LDA #17
    STA $08
    LDA #3
    STA $09
    JSR L0FC7EA.w
    LDA #32
    STA $00
    LDA #184
    STA $01
    JSR L0FC517.w
    LDX $04
    LDY $05
    LDA #34
    STA $0310
    JSR L0FC842.w
L069569:
    LDA #2
    STA $3F
    JSR L06942C.w
    JMP L06963A.w

L069573:
    JSR L06B612.w
    INC $8A
    RTS

L069579:
    LDA $05B5
    BEQ L069587
    LDA #2
    STA $4A
    LDA #4
    JMP L0FCA94.w

L069587:
    LDA #26
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA #0
    STA $058F
    STA $8A
    JMP L0FD39A.w

L069599:
    JSR L0FE67F.w
    LDA $1E
    BEQ L0695A7
    LDA #3
    STA $8A
    DEC $058F
L0695A7:
    JMP L06942C.w

L0695AA:
    LDA $DE
    BEQ L0695B1
    JMP L069632.w

L0695B1:
    LDA $05F0
    CMP #5
    BEQ L0695BC
    LDA #24
    BNE L0695BE
L0695BC:
    LDA #22
L0695BE:
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA #0
    STA $81
    LDA #192
    STA $3B
L0695CC:
    LDX $81
    LDA L0694C1.w,X
    STA $3A
    LDA $74B4
    CLC
    ADC $81
    TAY
    LDA $74B5,Y
    BEQ L069632
    LDA #8
    STA $0587
    LDA $05F0
    CMP #5
    BNE L069617
    LDA $3A
    CLC
    ADC #4
    STA $3A
    LDA #124
    STA $3B
    LDA #0
    STA $3F
    LDA $75F4,Y
    BEQ L069629
    AND #128
    BEQ L069607
    LDA #2
    STA $3F
L069607:
    LDA #0
    STA $0589
    LDA $75F4,Y
    AND #127
    CLC
    ADC #212
    JMP L069626.w

L069617:
    LDA $74F4,Y
    AND #1
    STA $3F
    LDA #1
    STA $0589
    LDA $7534,Y
L069626:
    JSR L0FE80F.w
L069629:
    LDX $81
    INX
    STX $81
    CPX #8
    BCC L0695CC
L069632:
    LDA #0
    STA $0589
    STA $DE
    RTS

L06963A:
    LDA #0
    STA $81
    LDA #70
    STA $3B
L069642:
    LDX $81
    LDA L0694C1.w,X
    STA $3A
    LDA $74B4
    CLC
    ADC $81
    TAY
    LDA $74B5,Y
    BEQ L069671
    LDA $74F4,Y
    BEQ L069668
    LDA #8
    STA $0587
    LDA #1
    STA $3F
    LDA #198
    JSR L0FE80F.w
L069668:
    LDX $81
    INX
    STX $81
    CPX #8
    BCC L069642
L069671:
    RTS

L069672:
    JSR L0FE67F.w
    LDA #0
    STA $9D
    JSR L0FD40C.w
    JSR L06975D.w
    JSR L0FD0C5.w
    LDA $95
    STA $0506
    LDA $94
    STA $0507
    LDA #199
    STA $A0
    LDA #1
    STA $3F
    JSR L0FD499.w
    JSR L06B5C8.w
    BCS L06969F
    JSR L06BA0A.w
L06969F:
    LDA $1A
    CMP #64
    BNE L0696B7
    JSR L0FF584.w
    LDA $058A
    STA $0500
    LDA $058B
    STA $0501
    JMP L069989.w

L0696B7:
    AND #128
    BEQ L069671
    LDA $7534
    CMP #43
    BNE L069729
    LDA $0500
    CMP $95
    BNE L0696D0
    LDA $0501
    CMP $94
    BEQ L06971E
L0696D0:
    LDA $94
    ASL
    TAY
    LDA L0FEE5E.w,Y
    STA $00
    LDA (L0FEE5E.w + 1),Y
    STA $01
    LDY $95
    LDA ($00),Y
    TAY
    LDA L0FE8DE.w,Y
    CMP #31
    BEQ L06971E
    STA $02
    LDY $74A0
    DEY
    TYA
    ASL
    TAY
    LDA L0FEADE.w,Y
    STA $00
    LDA L0FEADF.w,Y
    STA $01
    LDY $02
    LDA ($00),Y
    CMP $74AC
    BEQ L069708
    BCS L06971E
L069708:
    LDA $94
    BEQ L06971E
    LDA $94
    CMP $7440
    BCS L06971E
    LDA $95
    BEQ L06971E
    LDA $95
    CMP $7441
    BCC L069725
L06971E:
    LDA #128
    STA $06D1
    BNE L06975C
L069725:
    INC $8A
    BNE L06975C
L069729:
    LDA $94
    STA $02
    LDA $95
    STA $03
    JSR L0FF280.w
    BCS L06975C
    LDY #16
    LDA ($00),Y
    CMP $0501
    BNE L069747
    INY
    LDA ($00),Y
    CMP $0500
    BEQ L06975C
L069747:
    LDA #159
    STA $02
    LDA #116
    STA $03
    LDA #21
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    INC $8A
L06975C:
    RTS

L06975D:
    LDA $94
    BNE L069765
    INC $94
    BNE L06977D
L069765:
    CMP $7440
    BCC L06976E
    DEC $94
    BNE L06977D
L06976E:
    LDA $95
    BNE L069776
    INC $95
    BNE L06977D
L069776:
    CMP $7441
    BCC L069782
    DEC $95
L06977D:
    LDA #0
    STA $06D1
L069782:
    RTS

L069783:
    LDY #20
L069785:
    LDA $7484,Y
    STA $749F,Y
    DEY
    BPL L069785
    JSR L06B612.w
    LDY #0
    LDA $7484
    JSR L06A272.w
    LDY #1
    LDA $7534
    JSR L06A244.w
    LDA #0
    STA $7DA6
    STA $7DA5
    LDA #177
    STA $7DA9
    LDA #1
    STA $7DAC
    LDA #30
    STA $8A
    LDA #4
    STA $059C
    RTS

L0697BD:
    JSR L0FE67F.w
    LDA $7534
    TAX
    LDY L0FDAFD.w,X
    STY $98
    CMP #45
    BEQ L069783
    CMP #46
    BEQ L069783
    CMP #43
    BEQ L0697DE
    CMP #44
    BEQ L069855
    CMP #41
    BEQ L06985B
    RTS

L0697DE:
    LDA $058B
    STA $02
    LDA $058A
    STA $03
    JSR L0FF280.w
    LDA $0501
    LDY #16
    STA ($00),Y
    STA $058B
    LDA $0500
    LDY #17
    STA ($00),Y
    STA $058A
    LDA $74AF
    STA $04
    LDA $74B0
    STA $05
    JSR L0FD740.w
    LDA $74AE
    LDY #0
    STA ($00),Y
    LDA $74AF
    STA $02
    LDA $74B0
    STA $03
    JSR L0FF280.w
    LDY #16
    LDA $94
    STA $74AF
    STA ($00),Y
    STA $04
    INY
    LDA $95
    STA $74B0
    STA ($00),Y
    STA $05
    JSR L0FD740.w
    STA $74AE
    LDA $74A0
    ASL
    LDY $74B1
    BEQ L069846
    ADC #112
L069846:
    LDY #0
    STA ($00),Y
    LDA #1
    STA $DA
    LDA #19
    STA $8A
    JMP L069B8F.w

L069855:
    JSR L06B3A5.w
    JMP L06985B.w

L06985B:
    LDA #1
    STA $DA
    LDA #19
    STA $8A
    RTS

L069864:
    LDA $36
    AND #7
    STA $00
    LDA #8
    SEC
    SBC $00
    STA $91
    LDA #4
    JSR L0FE6B8.w
    JSR L0698C5.w
    JSR L0FC70D.w
    JSR L06BB3B.w
    JSR L06989C.w
    LDA #0
    STA $059C
    JSR L06BB00.w
    LDY #18
    LDA ($7A),Y
    BNE L069899
    JSR L0FC70D.w
    JSR L0FD598.w
    JSR L06B98D.w
L069899:
    INC $8A
    RTS

L06989C:
    LDA #0
    STA $05FA
    LDY #11
    LDA ($7A),Y
    BEQ L0698C4
    JSR L0FF542.w
    LDX $05EC
    INX
    STX $05FA
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCC L0698C4
    BVS L0698C4
    LDA $05FA
    ORA #128
    STA $05FA
L0698C4:
    RTS

L0698C5:
    LDA #0
    STA $05B6
    RTS

L0698CB:
    JSR L0FE67F.w
    LDA $059C
    BNE L0698DE
    INC $059C
    INC $05A3
    LDA #10
    JMP L0FE6B8.w

L0698DE:
    LDA #0
    STA $059C
    LDY #18
    LDA ($7A),Y
    BNE L069907
    LDY #0
    LDA ($7A),Y
    AND #128
    BNE L0698F9
    LDY #19
    LDA ($7A),Y
    AND #4
    BNE L069907
L0698F9:
    LDY #0
    LDA ($7A),Y
    AND #128
    CLC
    ROL
    ROL
    EOR $747C
    BEQ L069911
L069907:
    LDA #0
    STA $2C
    LDA #34
    STA $8A
    BNE L069919
L069911:
    JSR L0FC70D.w
    JSR L06BD39.w
    INC $8A
L069919:
    RTS

L06991A:
    JSR L0FE67F.w
    LDA $92
    EOR #1
    STA $92
    JSR L06BE96.w
    LDA $92
    EOR #1
    STA $92
    JSR L06BA0A.w
    LDA #22
    JSR L0FCA50.w
    JSR L06AC2F.w
    LDA $1E
    AND #160
    BEQ L069949
    LDX $8A
    INX
    STX $2C
    LDA #34
    STA $8A
    JMP L06AC94.w

L069949:
    LDA $1E
    AND #15
    BEQ L069957
    LDX $8A
    INX
    STX $2C
    JMP L06B9D0.w

L069957:
    LDA $1E
    AND #64
    BEQ L069967
    JSR L0FF584.w
    LDA #58
    STA $2C
    JMP L06B9D0.w

L069967:
    RTS

L069968:
    JSR L0FD5BA.w
    LDA #0
    STA $8A
    RTS

L069970:
    JSR L06B9E3.w
    JSR L0FE67F.w
    LDA #0
    STA $9D
L06997A:
    JSR L06BB6C.w
    JSR L0FD0C5.w
    JSR L06BE96.w
    LDA $1A
    AND #64
    BEQ L069997
L069989:
    JSR L0FF584.w
    JSR L0FD5BA.w
    LDA #66
    STA $8A
    LDA #0
    STA $2C
L069997:
    RTS

L069998:
    LDA #12
    STA $8A
    LDA #128
    STA $1E
    JMP L06997A.w

L0699A3:
    JSR L0FD0C5.w
    JSR L06BDB1.w
    JSR L06BE96.w
    JMP L06BA06.w

L0699AF:
    LDA #0
    STA $8E
    LDA $0500
    STA $95
    LDA $0501
    STA $94
    LDA #5
    JSR L0FE6B8.w
    INC $8A
    RTS

L0699C5:
    JSR L06BA0A.w
    JSR L0FE67F.w
    LDA $05AC
    BNE L0699DA
    LDA #66
    STA $8A
    LDA #9
    STA $2C
    BNE L0699DF
L0699DA:
    JSR L0FE696.w
    INC $8A
L0699DF:
    RTS

L0699E0:
    JSR L0FE67F.w
    LDX $05AC
    STX $7537
    DEX
    TXA
    JSR L0FC34C.w

.dw L069A0C
.dw L069A0C
.dw L069A09
.dw L0699FA
.dw L069A15
.dw L069A03

L0699FA:
    JSR L0FE696.w
    LDA #70
    STA $8A
    BNE L069A19
L069A03:
    LDA #26
    STA $8A
    BNE L069A19
L069A09:
    JSR L06A71E.w
L069A0C:
    LDA #6
    JSR L0FE6B8.w
    INC $8A
    BNE L069A19
L069A15:
    LDA #25
    STA $8A
L069A19:
    RTS

L069A1A:
    JSR L069A85.w
    JSR L0FD40C.w
    LDA #0
    STA $06D1
    JSR L0FD0C5.w
    RTS

L069A29:
    JSR L0FE67F.w
    JSR L06BA67.w
    LDA #213
    STA $05E0
    LDA $0501
    STA $05DF
    LDA $0500
    STA $05DE
    LDA $00
    BNE L069A4A
    DEC $05DF
    JMP L069A4D.w
L069A4A:
    INC $05DF
L069A4D:
    LDA $05DE
    STA $05
    LDA $05DF
    STA $04
    LDA $05E0
    JSR L0FD611.w
    LDA $05DE
    STA $05
    LDA $05DF
    STA $04
    LDA $05E0
    JSR L0FD67F.w
    LDA $05DF
    JSR L0FCEBF.w
    LDY $05DE
    LDA $05E0
    STA ($70),Y
    LDA #34
    JSR L0FF58A.w
    LDA #25
    STA $8A
    RTS

L069A85:
    LDA $8E
    BNE L069AB3
    LDA $058A
    CMP $95
    BEQ L069A9A
    BCS L069A96
    LDA #2
    BNE L069AB1
L069A96:
    LDA #1
    BNE L069AB1
L069A9A:
    LDA $058B
    CMP $94
    BEQ L069AAB
    BCS L069AA7
    LDA #8
    BNE L069AB1
L069AA7:
    LDA #4
    BNE L069AB1
L069AAB:
    LDA $2C
    STA $8A
    LDA #0
L069AB1:
    STA $1E
L069AB3:
    RTS

L069AB4:
    JSR L06BA0A.w
    JSR L0FE67F.w
    LDX $05AC
    BNE L069AC5
    LDA #14
    STA $8A
    BNE L069AEC
L069AC5:
    LDA $05C4,X
    LDY #20
    STA ($7A),Y
    JSR L06B5A7.w
    TAX
    LDA L0FDAFD.w,X
    STA $98
    AND #16
    BEQ L069ADF
    JSR L06A71E.w
    JMP L069AE2.w

L069ADF:
    JSR L06A620.w
L069AE2:
    LDA #1
    STA $7574
    JSR L0FE696.w
    INC $8A
L069AEC:
    RTS

L069AED:
    JSR L0FE67F.w
    LDA $98
    AND #16
    BEQ L069B00
L069AF6:
    LDA #180
    STA $00
    LDA #117
    STA $01
    BNE L069B08
L069B00:
    LDA #116
    STA $00
    LDA #117
    STA $01
L069B08:
    LDY $7574
    LDA ($00),Y
    STA $0507
    INY
    LDA ($00),Y
    STA $0506
    LDA $1E
    CMP #128
    BEQ L069B4F
    CMP #64
    BEQ L069B46
    CMP #2
    BEQ L069B31
    CMP #1
    BNE L069B7B
    INY
    LDA ($00),Y
    BNE L069B3D
    LDY #1
    BNE L069B3D
L069B31:
    DEY
    CPY #1
    BNE L069B3B
L069B36:
    INY
    LDA ($00),Y
    BNE L069B36
L069B3B:
    DEY
    DEY
L069B3D:
    STY $7574
    JSR L0FF578.w
    JMP L069B7B.w

L069B46:
    JSR L0FF584.w
    LDA #14
    STA $8A
    BNE L069B81
L069B4F:
    JSR L0FF572.w
    LDY $0507
    LDX $0506
    STY $02
    STX $03
    JSR L0FF280.w
    BCC L069B66
    JSR L0FF28B.w
    BCS L069B7B
L069B66:
    LDA #159
    STA $02
    LDA #116
    STA $03
    LDA #21
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    INC $8A
L069B7B:
    JSR L06BE96.w
    JSR L06BA0A.w
L069B81:
    RTS

L069B82:
    LDA $7534
    CMP #43
    BNE L069B8F
    LDA #7
    STA $8A
    BNE L069B81
L069B8F:
    JSR L069CC0.w
    LDA $0501
    STA $04
    LDA $0500
    STA $05
    JSR L0FD740.w
    STA $7493
    LDA #132
    STA $00
    LDA #116
    STA $01
    JSR L06AA1C.w
    LDA #159
    STA $00
    LDA #116
    STA $01
    LDA $98
    AND #16
    BNE L069BC1
    JSR L06AA1C.w
    JMP L069BC4.w

L069BC1:
    JSR L06AA37.w
L069BC4:
    LDA $747C
    STA $0302
    JSR L06ABFF.w
    JSR L069C20.w
    JSR L069BD9.w
    INC $8A
    JSR L06BE96.w
    RTS

L069BD9:
    LDA $747C
    BEQ L069C1F
    LDA $7A
    STA $0E
    LDA $7B
    STA $0F
    LDA #116
    STA $7B
    LDA #159
    STA $7A
    LDY #1
    LDA ($7A),Y
    CMP #11
    BNE L069C17
    LDA $031E
    ORA $031F
    BNE L069C12
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L069C0E
    LDY #11
    LDA ($7A),Y
    JMP L069C14.w

L069C0E:
    LDA #0
    BEQ L069C14
L069C12:
    LDA #23
L069C14:
    STA $0320
L069C17:
    LDA $0E
    STA $7A
    LDA $0F
    STA $7B
L069C1F:
    RTS

L069C20:
    LDA #0
    STA $08
    STA $0C
    LDA $031E
    ORA $031F
    BNE L069CA5
    LDA $7484
    BMI L069C49
    JSR L069CAE.w
    BCC L069CA5
    LDX $0C
    LDA L0FD9B1.w,X
    ORA $08
    STA $08
    LDX $74B0
    LDY $74AF
    BNE L069C60
L069C49:
    LDA $749F
    JSR L069CAE.w
    BCC L069CA5
    LDX $0C
    LDA L0FD9B1.w,X
    ORA $08
    STA $08
    LDX $0500
    LDY $0501
L069C60:
    STY $C7
    STX $C6
    LDX #0
L069C66:
    LDA $C6
    CLC
    ADC L06A7B2.w,X
    STA $03
    LDA $C7
    CLC
    ADC L06A7EE.w,X
    STA $02
    JSR L0FF280.w
    BCS L069C89
    JSR L069CA6.w
    BCC L069C89
    LDY $0C
    LDA L0FD9B1.w,Y
    ORA $08
    STA $08
L069C89:
    INX
    CPX #4
    BCC L069C66
    LDA $08
    CMP #7
    BNE L069CA5
    LDA #1
    STA $04CD
    LDA $0320
    CMP #4
    BNE L069CA5
    LDA #0
    STA $0320
L069CA5:
    RTS

L069CA6:
    LDA #0
    STA $0C
    LDY #0
    LDA ($00),Y
L069CAE:
    CMP #31
    BEQ L069CBF
    INC $0C
    CMP #33
    BEQ L069CBF
    INC $0C
    CMP #32
    BEQ L069CBF
    CLC
L069CBF:
    RTS

L069CC0:
    LDA #255
    STA $02
    LDA #1
    STA $03
    LDA #3
    STA $01
    LDA #0
    STA $00
    JMP L0FC225.w

L069CD3:
    LDA #0
    STA $0584
    JSR L0FC9A6.w
    LDA $033C
    BNE L069CE4
    LDA #1
    BNE L069CF3
L069CE4:
    LDA $033D
    BNE L069CF6
    LDA $032E
    BNE L069CF1
    JSR L06AA62.w
L069CF1:
    LDA #2
L069CF3:
    STA $0584
L069CF6:
    JSR L06B612.w
    INC $8A
    RTS

L069CFC:
    LDA $05B5
    BEQ L069D0A
    LDA #2
    STA $4A
    LDA #4
    JMP L0FCA94.w

L069D0A:
    LDA #0
    STA $D0
    STA $D1
    LDA #1
    STA $04C7
    STA $05AE
    STA $9D
    INC $8A
    RTS

L069D1D:
    JSR L0FC000.w
    LDA $05AE
    BNE L069D27
    INC $8A
L069D27:
    RTS

L069D28:
    LDA $747C
    BNE L069D37
    LDA $0320
    CMP #44
    BNE L069D37
    JMP L069DC8.w

L069D37:
    LDA $74AD
    BNE L069D6E
    LDA $749F
    AND #128
    BNE L069D5A
    LDA $74B2
    AND #4
    BNE L069D5A
    LDA $74AA
    BEQ L069D5A
    LDX $6D11
    JSR L0FFA89.w
    LDA #0
    STA $74AA
L069D5A:
    LDA $74AF
    STA $04
    LDA $74B0
    STA $05
    JSR L0FD740.w
    LDA $74AE
    LDY #0
    STA ($00),Y
L069D6E:
    JSR L06BF01.w
    LDA $7492
    BNE L069D97
    LDA $7484
    AND #128
    BNE L069D94
    LDA $7497
    AND #4
    BNE L069D94
    LDA $748F
    BEQ L069D94
    LDX $6D11
    JSR L0FFA89.w
    LDA #0
    STA $748F
L069D94:
    JSR L06BEC8.w
L069D97:
    JSR L06B5C8.w
    BCC L069DA9
    JSR L0FD758.w
    JSR L0FD604.w
    JSR L0FD771.w
    LDY #0
    STA ($00),Y
L069DA9:
    LDA $032E
    BEQ L069DC8
    STA $7534
    LDA $7484
    BPL L069DC0
    LDY $74B2
    LDA $7492
    BNE L069DC8
    BEQ L069DD1
L069DC0:
    LDY $7497
    LDA $74AD
    BEQ L069DD1
L069DC8:
    INC $8A
    LDA #0
    STA $7534
    BEQ L069DE2
L069DD1:
    TYA
    AND #4
    BEQ L069DE2
    LDA $7534
    LDX $6D11
    JSR L0FFA89.w
    JMP L069DC8.w
L069DE2:
    JSR L0FD39A.w
    JSR L06BA18.w
    LDA $05A1
    BEQ L069DF1
    LDA #60
    STA $8A
L069DF1:
    INC $8A
    RTS

L069DF4:
    JSR L0FE67F.w
    JSR L0FC027.w
    RTS

L069DFB:
    LDA $747C
    BNE L069E1C
    LDA $7484
    BMI L069E1C
    LDA $7497
    AND #4
    BNE L069E1C
    JSR L0FF2CB.w
    LDA $7484
    JSR L0FF389.w
    BCC L069E19
    LDX #0
L069E19:
    STX $747D
L069E1C:
    RTS

L069E1D:
    JSR L0FE67F.w
    JSR L069DFB.w
    JSR L06BE66.w
    JSR L069EEC.w
    JSR L06BA91.w
    JSR L069F43.w
    JSR L069E48.w
    JSR L069EB7.w
    JSR L069EF9.w
    LDA $05AD
    BEQ L069E41
    LDA #13
    STA $2A
L069E41:
    LDA #0
    STA $8A
    STA $2C
    RTS

L069E48:
    LDA $7446
    BEQ L069EB6
    LDA $74B4
    BNE L069E58
    JSR L069ED7.w
    JMP L069EAE.w

L069E58:
    LDX $74B4
    LDA $74BD,X
    STA $7446
    LDA $74B4,X
    STA $6E8E
L069E67:
    JSR L0FF2D4.w
    LDA $6E8E
    JSR L0FF258.w
    BCS L069EA9
    LDA $00
    STA $7431
    LDA $01
    STA $7432
    JSR L068F95.w
    JSR L069ED7.w
L069E82:
    JSR L0FC70D.w
    LDA $7431
    STA $7A
    LDA $7432
    STA $7B
    LDY #18
    LDA #255
    STA ($7A),Y
    LDY #17
    LDA ($7A),Y
    STA $0500
    LDY #16
    LDA ($7A),Y
    STA $0501
    JSR L0FD598.w
    JMP L069E67.w

L069EA9:
    DEC $74B4
    BNE L069E58
L069EAE:
    LDA #0
    STA $7446
    JSR L06BA18.w
L069EB6:
    RTS

L069EB7:
    LDA $7434
    CMP #75
    BNE L069EC2
    LDA #1
    BNE L069ECB
L069EC2:
    CMP #76
    BNE L069ECA
    LDA #4
    BNE L069ECB
L069ECA:
    RTS

L069ECB:
    STA $05FB
    LDA #11
    STA $4A
    LDA #7
    JMP L0FCA94.w

L069ED7:
    LDA $7446
    BEQ L069E82
    LDA #113
    STA $7DA9
    JSR L06BAD0.w
    JSR L06B612.w
    LDA #128
    STA $28
    RTS

L069EEC:
    LDA #3
    STA $4A
    JSR L0FCA94.w
    LDA #0
    STA $0584
    RTS

L069EF9:
    JSR L0FF2CB.w
    LDA #1
    JSR L0FF389.w
    BCS L069F0E
    LDY #14
    LDA ($00),Y
    BNE L069F0E
    LDA #2
    STA $05AD
L069F0E:
    JSR L0FF2CB.w
    LDA #2
    JSR L0FF389.w
    BCS L069F23
    LDY #14
    LDA ($00),Y
    BNE L069F23
    LDA #2
    STA $05AD
L069F23:
    JSR L06B9AA.w
    LDA $03
    BNE L069F2F
    LDA #1
    STA $05AD
L069F2F:
    LDA $6953
    CMP #133
    BNE L069F42
    LDA $6965
    CMP #255
    BNE L069F42
    LDA #4
    STA $05AD
L069F42:
    RTS

L069F43:
    LDA $DA
    BNE L069F51
    LDA $0500
    STA $95
    LDA $0501
    STA $94
L069F51:
    LDA #0
    STA $DA
    RTS

L069F56:
    LDA $0500
    STA $95
    LDA $0501
    STA $94
    INC $8A
    RTS

L069F63:
    JSR L06BA0A.w
    JSR L06A70E.w
    INC $8A
    RTS

L069F6C:
.db $0E $19

L069F6E:
    JSR L06BA0A.w
    JSR L0FE67F.w
    LDA #1
    STA $7574
    INC $8A
L069F7B:
    RTS

L069F7C:
    JSR L06BA0A.w
    JSR L0FE67F.w
    JSR L0FE696.w
    JSR L069AF6.w
    LDA $8A
    CMP #29
    BEQ L069F7B
    CMP #14
    BEQ L069F7B
    DEC $8A
    LDY #11
    LDA ($7A),Y
    ORA $749F,Y
    BEQ L069FA4
    LDA $74B2
    AND #4
    BEQ L069FAB
L069FA4:
    LDA #128
    STA $06D1
    BNE L06A00F
L069FAB:
    JSR L06A010.w
    JSR L06BF01.w
    LDY #0
    LDA $7484
    JSR L06A272.w
    LDY #1
    LDA $749F
    JSR L06A272.w
    LDY #2
    LDA $7534
    JSR L06A244.w
    LDY #3
    LDA $7535
    JSR L06A244.w
    LDA #0
    STA $7DA5
    STA $059C
    LDA #177
    STA $7DA9
    LDA #1
    STA $7DAC
    LDA #26
    STA $2C
    LDA $7534
    BEQ L069FF9
    LDA $7535
    BEQ L069FF5
    LDX #27
    BNE L069FFB
L069FF5:
    LDX #25
    BNE L069FFB
L069FF9:
    LDX #26
L069FFB:
    STX $7DA6
    LDA #25
    STA $2C
    LDA #0
    STA $059C
    STA $7560
    JSR L06B612.w
    INC $8A
L06A00F:
    RTS

L06A010:
    LDY #11
    LDA ($7A),Y
    STA $7534
    LDA $749F,Y
    STA $7535
    STA ($7A),Y
    LDA $7534
    STA $749F,Y
    JSR L06B1EF.w
    LDA $7A
    STA $7431
    LDA $7B
    STA $7432
    LDA #116
    STA $7B
    LDA #159
    STA $7A
    JSR L06B1EF.w
    LDA $7431
    STA $7A
    LDA $7432
    STA $7B
    RTS

L06A048:
    JSR L0FE67F.w

L06A04B:
    LDA $0501
    STA $04
    LDA $0500
    STA $05
    JSR L06A0F7.w
    BCS L06A05D
    JSR L06BA0A.w
L06A05D:
    LDA $059C
    JSR L0FC34C.w

L06A063:
.dw L06A3B9
.dw L06A3D5
.dw L06A06F
.dw L06A3B9
.dw L06A3AA
.dw L06A06F

L06A06F:
    LDA $7534
    CMP #45
    BEQ L06A095
    CMP #46
    BEQ L06A07B
    RTS

L06A07B:
    LDA $0500
    STA $11
    LDA $0501
    STA $10
    JSR L06A0E5.w
    LDA $11
    STA $0500
    LDA $10
    STA $0501
    JMP L06A0AC.w

L06A095:
    LDA $0500
    STA $11
    LDA $0501
    STA $10
    JSR L06A0EE.w
    LDA $11
    STA $0500
    LDA $10
    STA $0501
L06A0AC:
    LDY #20
L06A0AE:
    LDA $749F,Y
    STA $7484,Y
    DEY
    BPL L06A0AE
    LDA $7495
    STA $0510
    LDA $7494
    STA $0511
    JSR L068FA3.w
    LDA #116
    STA $7B
    LDA #132
    STA $7A
    LDY $7534
    LDA $7492
    SEC
    SBC L0FD9F4.w,Y
    STA $7492
    LDA #25
    STA $8A
    LDA #0
    STA $059C
    RTS

L06A0E5:
    LDA #4
    STA $4A
    LDA #3
    JMP L0FCA94.w

L06A0EE:
    LDA #2
    STA $4A
    LDA #3
    JMP L0FCA94.w

L06A0F7:
    CLC
    LDA $058F
    BEQ L06A154
    STA $18
    LDA #53
    STA $00
    LDA #124
    STA $01
    LDA $04
    SEC
    SBC $69
    JSR L0FC3A0.w
    STA $04
    LDA $05
    SEC
    SBC $6A
    JSR L0FC3A0.w
    STA $05
L06A11B:
    LDY #0
    LDA ($00),Y
    ASL
    ASL
    ASL
    CLC
    LDY #4
    ADC ($00),Y
    STA $02
    LDA $04
    CMP $02
    BCS L06A14B
    CMP ($00),Y
    BCC L06A14B
    LDY #1
    LDA ($00),Y
    ASL
    ASL
    ASL
    CLC
    LDY #5
    ADC ($00),Y
    STA $02
    LDA $05
    CMP $02
    BCS L06A14B
    CMP ($00),Y
    BCS L06A155
L06A14B:
    LDA #6
    JSR L0FC379.w
    DEC $18
    BNE L06A11B
L06A154:
    CLC
L06A155:
    RTS

L06A156:
    JSR L0FC288.w
    LDA #40
    STA $35
    LDA $D0
    STA $24
    LDA $D1
    STA $25
    LDA $D3
    STA $0A
L06A169:
    LDA $0A
    STA $D3
    LDA $36
    AND #3
    TAX
    LDA $35
    CMP #29
    BCS L06A1C1
    CMP #24
    BCS L06A19B
    CMP #20
    BCS L06A1A1
    CMP #12
    BCS L06A1A7
    CMP #8
    BCS L06A1A1
    CMP #2
    BCS L06A19B
    LDA $0A
    STA $D3
    LDA $24
    STA $D0
    LDA $25
    STA $D1
    JMP L06A1C1.w

L06A19B:
    LDA L06A203.w,X
    JMP L06A1AA.w

L06A1A1:
    LDA L06A207.w,X
    JMP L06A1AA.w

L06A1A7:
    LDA L06A20B.w,X
L06A1AA:
    CLC
    ADC $D1
    STA $D1
    CMP #252
    BCC L06A1B9
    LDA $D3
    EOR #1
    STA $D3
L06A1B9:
    LDA L06A1FF.w,X
    CLC
    ADC $D0
    STA $D0
L06A1C1:
    INC $36
    JSR L0FC336.w
    JSR L0FC70D.w
    LDA $35
    BNE L06A169
    LDA $10
    BEQ L06A1FE
    LDA #20
    JSR L0FC068.w
    CLC
    ADC #10
    STA $0A
    LDA #174
    STA $04
    LDA #103
    STA $05
    JSR L06A20F.w
    JSR L0FC70D.w
    LDA #4
    JSR L0FC068.w
    CLC
    ADC #1
    STA $0A
    LDA #83
    STA $04
    LDA #105
    STA $05
    JSR L06A20F.w
L06A1FE:
    RTS

L06A1FF:
.db $FF $00 $01 $00

L06A203:
.db $00 $01 $00 $FF

L06A207:
.db $00 $02 $00 $FE

L06A20B:
.db $00 $03 $00 $FD

L06A20F:
    LDY #18
    LDA ($04),Y
    CMP #255
    BEQ L06A237
    LDY #8
    LDA ($04),Y
    LSR
    STA $0B
    LDY #8
    LDA $0A
    SEC
    SBC $0B
    BCC L06A237
    STA $06
    LDY #14
    LDA ($04),Y
    SBC $06
    BEQ L06A233
    BCS L06A235
L06A233:
    LDA #1
L06A235:
    STA ($04),Y
L06A237:
    LDA #21
    JSR L0FC38F.w
    LDY #0
    LDA ($04),Y
    BNE L06A20F
    RTS

L06A243:
    RTS

L06A244:
    PHA
    LDA #165
    STA $02
    LDA #126
    STA $03
    BNE L06A255
L06A24F:
    LDA #16
    JSR L0FC384.w
    DEY
L06A255:
    CPY #0
    BNE L06A24F
    PLA
    ASL
    TAY
    LDA L0FDCAD.w,Y
    STA $00
    LDA (L0FDCAD.w + 1),Y
    STA $01
    LDY #0
L06A268:
    LDA ($00),Y
    STA ($02),Y
    INY
    CMP #239
    BNE L06A268
    RTS

L06A272:
    PHA
    LDA #165
    STA $02
    LDA #126
    STA $03
    BNE L06A283
L06A27D:
    LDA #16
    JSR L0FC384.w
    DEY
L06A283:
    CPY #0
    BNE L06A27D
    PLA
    SEC
    SBC #1
    ASL
    TAY
    LDA L0FDEA9.w,Y
    STA $00
    LDA (L0FDEA9.w + 1),Y
    STA $01
    LDY #0
L06A299:
    LDA ($00),Y
    STA ($02),Y
    INY
    CMP #239
    BNE L06A299
    RTS
    PHA
    LDA #165
    STA $08
    LDA #126
    STA $09
    BNE L06A2BA
L06A2AE:
    LDA #16
    CLC
    ADC $08
    STA $08
    BCC L06A2B9
    INC $09
L06A2B9:
    DEY
L06A2BA:
    CPY #0
    BNE L06A2AE
    PLA
    STA $00
    LDA #3
    STA $01
    JSR L0FC7EA.w
    LDY #3
    LDA #239
    STA ($08),Y
    RTS

L06A2CF:
    LDA #12
    JSR L0FE6B8.w
    INC $059C
    RTS

L06A2D8:
    JSR L0FE67F.w
L06A2DB:
    LDY $058F
    LDA #6
    JSR L0FE6AC.w
    LDY #4
    LDA ($74),Y
    CLC
    ADC #8
    STA $00
    INY
    LDA ($74),Y
    CLC
    ADC #16
    STA $01
    JSR L0FC517.w
    LDA $04
    STA $7E
    LDA $05
    STA $7F
    LDY #8
    STY $0595
    LDY $74B4
    STY $74F1
L06A30A:
    LDY $74F1
    LDA $744F,Y
    BEQ L06A317
    CPY $74F2
    BCC L06A323
L06A317:
    LDY #22
    LDA #255
L06A31B:
    STA $0311,Y
    DEY
    BPL L06A31B
    BMI L06A328
L06A323:
    LDA #30
    JSR L0FE6B8.w
L06A328:
    LDX $7E
    LDY $7F
    LDA #75
    STA $0310
    JSR L0FC842.w
    JSR L0FC70D.w
    LDA $7E
    STA $00
    LDA $7F
    STA $01
    JSR L0FC81C.w
    JSR L0FC81C.w
    LDA $00
    STA $7E
    LDA $01
    STA $7F
    INC $74F1
    DEC $0595
    BNE L06A30A
    INC $059C
    RTS

L06A359:
    LDY $74F3
    LDA L06A36F.w,Y
    STA $3A
    LDA #40
    STA $3B
    LDA #8
    STA $0587
    LDA #197
    JMP L0FE80F.w

L06A36F:
.db $20 $30 $40 $50 $60 $70 $80 $90

L06A379:
    STX $00
    STY $01
    STX $02
    STY $03
    LDA $74B4
    JSR L0FC384.w
    LDA $74B4
    CLC
    ADC #1
    JSR L0FC379.w
    LDA #0
    STA $05
    LDA #40
    CLC
    SBC $74B4
    STA $04
    JMP L0FC209.w
    JSR L0FE67F.w
    RTS

L06A3A1:
    LDA #0
    STA $4A
    LDA #10
    JMP L0FCA94.w

L06A3AA:
    JSR L06A3A1.w
    LDA $7DB9
    BEQ L06A3D4
    JSR L0FE696.w
    INC $059C
    RTS

L06A3B9:
    JSR L06A3A1.w
    LDA $7DB9
    BEQ L06A3D4
    LDA $2C
    STA $8A
    LDA #0
    STA $2C
    STA $059C
    LDA $7DC7
    BNE L06A3D4
    JSR L06BA18.w
L06A3D4:
    RTS

L06A3D5:
    JSR L06A3A1.w
    LDA $7DBF
    BEQ L06A3EB
    LDA $059D
    BEQ L06A3E8
    STA $059C
    JMP L06A3EB.w

L06A3E8:
    INC $059C
L06A3EB:
    RTS

L06A3EC:
    LDA $7DB9
    BEQ L06A3F5
    LDA #0
    STA $8A
L06A3F5:
    RTS

L06A3F6:
    JSR L0FE67F.w
    LDA #0
    STA $7448
    JSR L06A52F.w
    LDA $743D
    CMP #255
    BCS L06A40C
    CLC
    ADC $747C
L06A40C:
    STA $743D
    LDA $747C
    EOR #1
    STA $747C
    LDA #8
    JSR L0FE6B8.w
    LDA #4
    STA $35
    INC $8A
    JSR L06BA18.w
    LDA #0
    STA $059C
    RTS

L06A42B:
    LDA $059C
    JSR L0FC34C.w

.dw L06A439
.dw L06A44D
.dw L06A4B8
.dw L06A463

L06A439:
    LDA $35
    CMP #3
    BCS L06A44C
    JSR L0FE67F.w
    LDA $35
    BNE L06A44C
    JSR L0FE696.w
    INC $059C
L06A44C:
    RTS

L06A44D:
    JSR L0FE67F.w
    LDA #0
    STA $9D
    LDA $747C
    CMP #1
    BNE L06A45F
    INC $059C
    RTS

L06A45F:
    JSR L0FC027.w
    RTS

L06A463:
    LDA $0585
    BEQ L06A4B0
    LDA $747C
    BEQ L06A476
    JSR L06A50A.w
    LDA #40
    STA $8A
    BNE L06A44C
L06A476:
    JSR L06A4EE.w
    LDA $747D
    STA $00
    LDA #21
    STA $01
    JSR L0FC6C9.w
    LDA #174
    CLC
    ADC $00
    STA $00
    LDA #103
    ADC $01
    STA $01
    LDY #18
    LDA ($00),Y
    CMP #255
    BNE L06A4A2
    LDA #103
    STA $01
    LDA #174
    STA $00
L06A4A2:
    JSR L068F95.w
    LDA #0
    STA $058F
    STA $059C
    STA $8A
    RTS

L06A4B0:
    STA $8A
    LDA #0
    STA $059C
    RTS

L06A4B8:
    JSR L0FE67F.w
    LDX #0
L06A4BD:
    LDA L06A4E1.w,X
    CMP #255
    BEQ L06A4DD
    CMP $7434
    BEQ L06A4CE
    INX
    BPL L06A4BD
    BMI L06A4DD
L06A4CE:
    LDA L06A4E8.w,X
    STA $05FB
    LDA #11
    STA $4A
    LDA #7
    JSR L0FCA94.w
L06A4DD:
    INC $059C
    RTS

L06A4E1:
.db $49 $48 $4D $4C $3B $4A $FF

L06A4E8:
.db $02 $05 $00 $05 $05 $03

L06A4EE:
    LDA #0
    STA $05F7
    JSR L069127.w
    BCS L06A506
    LDA #100
    JSR L0FC068.w
    LDX $7434
    DEX
    CMP L0FE249.w,X
    BCC L06A509
L06A506:
    INC $05F7
L06A509:
    RTS

L06A50A:
    LDX $7434
    DEX
    LDA L0FE1F9.w,X
    CMP #255
    BEQ L06A52E
    LDA $743D
    CMP L0FE1F9.w,X
    BCC L06A52E
    LDA #3
    STA $05AD
    LDA #13
    STA $2A
    LDA #0
    STA $8A
    STA $2C
    PLA
    PLA
L06A52E:
    RTS

L06A52F:
    LDA $747C
    BNE L06A53E
    LDA #174
    STA $7A
    LDA #103
    STA $7B
    BNE L06A54B
L06A53E:
    LDA #83
    STA $7A
    LDA #105
    STA $7B
    BNE L06A54B
L06A548:
    JSR L06A598.w
L06A54B:
    LDY #0
    LDA ($7A),Y
    BEQ L06A597
    LDY #18
    LDA ($7A),Y
    BEQ L06A548
    CMP #255
    BEQ L06A548
    LDY #16
    LDA ($7A),Y
    STA $04
    STA $0501
    LDY #17
    LDA ($7A),Y
    STA $05
    STA $0500
    JSR L0FD740.w
    JSR L0FD777.w
    LDY #0
    STA ($00),Y
    LDY #18
    LDA #0
    STA ($7A),Y
    LDY #16
    LDA ($7A),Y
    CMP $69
    BCC L06A548
    SBC $69
    CMP #15
    BCS L06A548
    JSR L0FD604.w
    JSR L0FD777.w
    JSR L0FD67F.w
    JMP L06A548.w

L06A597:
    RTS

L06A598:
    LDA $7A
    CLC
    ADC #21
    STA $7A
    BCC L06A5A3
    INC $7B
L06A5A3:
    RTS

L06A5A4:
    LDA $1A
    CMP #32
    BEQ L06A5B0
    CMP #128
    BEQ L06A5B6
    CLC
    RTS

L06A5B0:
    JSR L0FF57E.w
    JMP L06A5C1.w

L06A5B6:
    JSR L06A5D3.w
    BCS L06A5C1
    LDA #9
    STA $8A
    BNE L06A5D1
L06A5C1:
    JSR L0FF57E.w
    LDA #0
    STA $2C
    LDA #1
    STA $8A
    LDA #3
    JSR L0FE6B8.w
L06A5D1:
    SEC
    RTS

L06A5D3:
    LDY $94
    LDX $95
    STY $02
    STX $03
    JSR L0FF280.w
    BCC L06A5E5
    JSR L0FF28B.w
    BCS L06A5D1
L06A5E5:
    JSR L0FF572.w
    LDA #132
    STA $02
    LDA #116
    STA $03
    LDA #21
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    LDY $7485
    DEY
    LDA L06A607.w,Y
    STA $0504
    CLC
    RTS

L06A607:
.db $03
.db $02
.db $03
.db $03
.db $03
.db $02
.db $03
.db $03
.db $03
.db $02
.db $03
.db $03
.db $01
.db $03
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $02
.db $4C
.db $62
.db $F4

L06A620:
    TXA
    PHA
    TYA
    PHA
    LDA #0
    STA $05C1
    LDY #1
    LDA ($7A),Y
    CMP #12
    BEQ L06A650
    CMP #13
    BEQ L06A650
    CMP #20
    BEQ L06A64C
    CMP #21
    BNE L06A642
    LDA $744A
    BNE L06A650
L06A642:
    LDY #20
    LDA ($7A),Y
    CMP #24
    BNE L06A655
    BEQ L06A650
L06A64C:
    LDA #5
    BNE L06A652
L06A650:
    LDA #3
L06A652:
    STA $05C1
L06A655:
    JSR L06A910.w
    LDY #20
    LDA ($7A),Y
    TAY
    LDA L0FDAFD.w,Y
    STA $98
    JMP L06A66F.w

L06A665:
    TXA
    PHA
    TYA
    PHA
    JSR L0FF3BD.w
    JSR L06A8A0.w
L06A66F:
    JSR L06A88D.w
    LDA $0501
    STA $C7
    LDA $0500
    STA $C6
    LDA $98
    BEQ L06A6EE
    LDX #0
L06A682:
    LDA $C6
    CLC
    ADC L06A7B2.w,X
    BMI L06A6A3
    CMP $7441
    BCS L06A6A3
    STA $03
    LDA $C7
    CLC
    ADC L06A7EE.w,X
    BMI L06A6A3
    CMP $7440
    BCS L06A6A3
    STA $02
    JSR L06A6F3.w
L06A6A3:
    INX
    CPX #4
    BNE L06A6B4
    LDA $7574
    STA $75A0
    LDA $98
    AND #4
    BEQ L06A6EE
L06A6B4:
    LDA $05C1
    BEQ L06A6D9
    CMP #3
    BNE L06A6D3
    CPX #12
    BNE L06A6C7
    LDA $7574
    STA $75A2
L06A6C7:
    CPX #24
    BCC L06A682
    LDA $7574
    STA $75A3
    BCS L06A6E3
L06A6D3:
    CPX #60
    BCC L06A682
    BCS L06A6E3
L06A6D9:
    CPX #12
    BCC L06A682
    LDA $7574
    STA $75A2
L06A6E3:
    LDA $7574
    CMP $75A0
    BEQ L06A6EE
    STA $75A1
L06A6EE:
    PLA
    TAY
    PLA
    TAX
    RTS

L06A6F3:
    LDY #0
    LDA ($7A),Y
    AND #128
    BEQ L06A705
    JSR L0FF280.w
    BCS L06A70D
    JSR L06A82A.w
    BNE L06A70D
L06A705:
    JSR L0FF28B.w
    BCS L06A70D
    JSR L06A82A.w
L06A70D:
    RTS

L06A70E:
    TXA
    PHA
    TYA
    PHA
    LDA #4
    STA $05F9
    LDA #2
    STA $98
    JMP L06A72D.w

L06A71E:
    TXA
    PHA
    TYA
    PHA
    LDA #0
    STA $05F9
    JSR L0FF3BD.w
    JSR L06A8A6.w
L06A72D:
    JSR L06A883.w
    LDA $0501
    STA $C7
    LDA $0500
    STA $C6
    LDA $98
    BEQ L06A7AD
    AND #6
    CMP #4
    BNE L06A748
    LDX #4
    BNE L06A74A
L06A748:
    LDX #0
L06A74A:
    LDA $C6
    CLC
    ADC L06A7B2.w,X
    STA $03
    LDA $C7
    CLC
    ADC L06A7EE.w,X
    STA $02
    LDY #0
    LDA ($7A),Y
    AND #128
    BNE L06A776
    JSR L0FF280.w
    BCS L06A787
    LDY #19
    LDA ($00),Y
    AND $05F9
    BNE L06A776
    JSR L06A84C.w
    JMP L06A787.w

L06A776:
    JSR L0FF28B.w
    BCS L06A787
    LDY #19
    LDA ($00),Y
    AND $05F9
    BNE L06A787
    JSR L06A84C.w
L06A787:
    INX
    CPX #4
    BNE L06A79E
    LDA $75B4
    STA $75CE
    LDA $75B4
    STA $75CE
    LDA $98
    AND #4
    BEQ L06A7AD
L06A79E:
    CPX #12
    BCC L06A74A
    LDA $75B4
    CMP $75CE
    BNE L06A7AD
    STA $75CF
L06A7AD:
    PLA
    TAY
    PLA
    TAX
    RTS

L06A7B2:
.db $00
.db $01
.db $00
.db $FF
.db $00
.db $01
.db $02
.db $01
.db $00
.db $FF
.db $FE
.db $FF
.db $00
.db $01
.db $02
.db $03
.db $02
.db $01
.db $00
.db $FF
.db $FE
.db $FD
.db $FE
.db $FF
.db $00
.db $01
.db $02
.db $03
.db $04
.db $03
.db $02
.db $01
.db $00
.db $FF
.db $FE
.db $FD
.db $FC
.db $FD
.db $FE
.db $FF
.db $00
.db $01
.db $02
.db $03
.db $04
.db $05
.db $04
.db $03
.db $02
.db $01
.db $00
.db $FF
.db $FE
.db $FD
.db $FC
.db $FB
.db $FC
.db $FD
.db $FE
.db $FF

L06A7EE:
.db $FF
.db $00
.db $01
.db $00
.db $FE
.db $FF
.db $00
.db $01
.db $02
.db $01
.db $00
.db $FF
.db $FD
.db $FE
.db $FF
.db $00
.db $01
.db $02
.db $03
.db $02
.db $01
.db $00
.db $FF
.db $FE
.db $FC
.db $FD
.db $FE
.db $FF
.db $00
.db $01
.db $02
.db $03
.db $04
.db $03
.db $02
.db $01
.db $00
.db $FF
.db $FE
.db $FD
.db $FB
.db $FC
.db $FD
.db $FE
.db $FF
.db $00
.db $01
.db $02
.db $03
.db $04
.db $05
.db $04
.db $03
.db $02
.db $01
.db $00
.db $FF
.db $FE
.db $FD
.db $FC

L06A82A:
    JSR L06A86E.w
    BCS L06A84B
    LDY #16
    LDA ($00),Y
    LDY $7574
    STA $7575,Y
    INY
    STY $7574
    LDY #17
    LDA ($00),Y
    LDY $7574
    STA $7575,Y
    INY
    STY $7574
L06A84B:
    RTS

L06A84C:
    JSR L06A86E.w
    BCS L06A86D
    LDY #16
    LDA ($00),Y
    LDY $75B4
    STA $75B5,Y
    INY
    STY $75B4
    LDY #17
    LDA ($00),Y
    LDY $75B4
    STA $75B5,Y
    INY
    STY $75B4
L06A86D:
    RTS

L06A86E:
    LDY #16
    LDA ($00),Y
    CMP ($7A),Y
    BNE L06A87E
    LDY #17
    LDA ($00),Y
    CMP ($7A),Y
    BEQ L06A881
L06A87E:
    CLC
    BCC L06A882
L06A881:
    SEC
L06A882:
    RTS

L06A883:
    LDA #180
    STA $00
    LDA #117
    STA $01
    BNE L06A895
L06A88D:
    LDA #116
    STA $00
    LDA #117
    STA $01
L06A895:
    LDA #45
    STA $02
    LDA #0
    STA $03
    JMP L0FC225.w

L06A8A0:
    LDA #8
    STA $0A
    BNE L06A8AA
L06A8A6:
    LDA #16
    STA $0A
L06A8AA:
    LDA #0
    STA $05C1
    STA $98
L06A8B1:
    LDY $05C4
    DEY
    LDA $05C5,Y
    CMP #2
    BCC L06A8C0
    CMP #58
    BCC L06A8EA
L06A8C0:
    LDY #1
    LDA ($7A),Y
    CMP #12
    BEQ L06A8E1
    CMP #20
    BEQ L06A8DD
    CMP #13
    BEQ L06A8E1
    CMP #21
    BNE L06A8D9
    LDA $744A
    BNE L06A8E1
L06A8D9:
    LDX #0
    BEQ L06A8F0
L06A8DD:
    LDA #5
    BNE L06A8E3
L06A8E1:
    LDA #3
L06A8E3:
    STA $05C1
    LDX #1
    BNE L06A8F0
L06A8EA:
    TAX
    JSR L0FF460.w
    BCS L06A907
L06A8F0:
    LDA L0FDAFD.w,X
    AND $0A
    BEQ L06A907
    CPX #24
    BNE L06A900
    LDA #3
    STA $05C1
L06A900:
    LDA L0FDAFD.w,X
    ORA $98
    STA $98
L06A907:
    DEC $05C4
    BNE L06A8B1
    JSR L06A910.w
    RTS

L06A910:
    LDY #1
    LDA ($7A),Y
    CMP #12
    BEQ L06A94F
    CMP #20
    BEQ L06A94F
    CMP #13
    BEQ L06A94F
    CMP #21
    BNE L06A929
    LDA $744A
    BNE L06A94F
L06A929:
    LDY #1
    LDA ($7A),Y
    CMP #15
    BEQ L06A945
    CMP #16
    BEQ L06A945
    CMP #18
    BEQ L06A945
    CMP #17
    BEQ L06A945
    CMP #19
    BEQ L06A945
    CMP #11
    BNE L06A945
L06A945:
    LDY #11
    LDA ($7A),Y
    CMP #57
    BEQ L06A965
    BNE L06A96A
L06A94F:
    LDY #11
    LDA ($7A),Y
    STA $0A
    LDY #0
L06A957:
    LDA L06A96B.w,Y
    CMP #239
    BEQ L06A96A
    CMP $0A
    BEQ L06A965
    INY
    BPL L06A957
L06A965:
    LDA #5
    STA $05C1
L06A96A:
    RTS

L06A96B:
.db $14 $16 $15 $EF

L06A96F:
    RTS

L06A970:
    JSR L0FE67F.w
    LDA $059C
    JSR L0FC34C.w

.dw L06A98F
.dw L06A981
.dw L06A2DB
.dw L06A9CF

L06A981:
    LDA #23
    JSR L0FE6B8.w
    LDA #14
    STA $0590
    INC $059C
    RTS

L06A98F:
    INC $059C
    LDA $6D10
    CMP #2
    BEQ L06A9A6
    LDA $6D11
    CMP #1
    BEQ L06A9A6
    LDA $744D
    JMP L06A9AD.w

L06A9A6:
    LDA $744D
    CLC
    ADC $744E
L06A9AD:
    STA $74F2
    LDA $6D10
    CMP #2
    BEQ L06A9C2
    LDA $6D11
    BEQ L06A9C2
    LDA $744D
    JMP L06A9C4.w

L06A9C2:
    LDA #0
L06A9C4:
    STA $74F0
    STA $74B4
    LDA #38
    JMP L0FE6B8.w

L06A9CF:
    LDA $1E
    CMP #4
    BEQ L06A9E7
    CMP #8
    BEQ L06A9F8
    CMP #64
    BNE L06AA1B
    JSR L0FF584.w
    LDA #0
    STA $2C
    JMP L06B9D0.w

L06A9E7:
    LDA $74B4
    CLC
    ADC #8
    CMP $74F2
    BCC L06AA12
    LDA $74F0
    JMP L06AA12.w

L06A9F8:
    LDA $74B4
    SEC
    SBC #8
    BCC L06AA05
    CMP $74F0
    BCS L06AA12
L06AA05:
    LDA $74F0
L06AA08:
    TAY
    CLC
    ADC #8
    CMP $74F2
    BCC L06AA08
    TYA
L06AA12:
    STA $74B4
    DEC $059C
    JSR L0FF578.w
L06AA1B:
    RTS

L06AA1C:
    LDY #0
    LDA ($00),Y
    BMI L06AA37
    LDA #4
    STA $02
    LDA #3
    STA $03
    JSR L06AB71.w
    JSR L06ABAE.w
    JSR L06ABDA.w
    JSR L06AAF6.w
    RTS

L06AA37:
    LDA #5
    STA $02
    LDA #3
    STA $03
    JSR L06AB71.w
    JSR L06ABAE.w
    JSR L06ABDA.w
    JSR L06AADD.w
    LDA #0
    STA $032E
    LDY #0
    LDA ($00),Y
    BPL L06AA61
    LDY #11
    LDA ($00),Y
    BEQ L06AA61
    STA $032E
    BNE L06AA61
L06AA61:
    RTS

L06AA62:
    LDA $744C
    CMP #5
    BCS L06AABA
    LDX $744C
    DEX
    LDA $6E8D
    CMP L0FF23E.w,X
    BCS L06AABA
    JSR L06AABB.w
    LDA #37
    STA $6B
    LDA #242
    STA $6C
    BNE L06AAAF
L06AA82:
    CMP $0305
    BNE L06AAAA
    LDA #100
    JSR L0FC068.w
    INY
    CMP ($6B),Y
    BCS L06AAB7
    LDA $36
    STA $37
    LDA #100
    JSR L0FC068.w
    CMP ($6B),Y
    BCS L06AAB7
    INY
    LDA ($6B),Y
    STA $032E
    INC $6E8D
    JMP L06AAB7.w
L06AAAA:
    LDA #3
    JSR L0FFA7F.w
L06AAAF:
    LDY #0
    LDA ($6B),Y
    CMP #255
    BNE L06AA82
L06AAB7:
    JSR L06AACC.w
L06AABA:
    RTS

L06AABB:
    LDA $00
    STA $10
    LDA $01
    STA $11
    LDA $02
    STA $0E
    LDA $03
    STA $0F
    RTS

L06AACC:
    LDA $0F
    STA $03
    LDA $0E
    STA $02
    LDA $11
    STA $01
    LDA $10
    STA $00
    RTS

L06AADD:
    LDY #0
L06AADF:
    LDA L0FF256.w,Y
    CMP #255
    BEQ L06AAF5
    CMP $0305
    BNE L06AAF2
    LDA #255
    STA $030F
    BNE L06AAF5
L06AAF2:
    INY
    BPL L06AADF
L06AAF5:
    RTS

L06AAF6:
    LDY #0
    LDA ($00),Y
    CMP #1
    BEQ L06AAFF
    RTS

L06AAFF:
    LDA $00
    STA $10
    LDA $01
    STA $11
    LDA $749F
    BPL L06AB19
    LDA $0500
    STA $0F
    LDA $0501
    STA $0E
    JMP L06AB25.w

L06AB19:
    LDY #17
    LDA ($00),Y
    STA $0F
    LDY #16
    LDA ($00),Y
    STA $0E
L06AB25:
    LDX #3
L06AB27:
    LDA L06A7EE.w,X
    CLC
    ADC $0E
    JSR L0FCEBF.w
    LDA L06A7B2.w,X
    CLC
    ADC $0F
    TAY
    LDA ($70),Y
    CMP #22
    BEQ L06AB41
    CMP #134
    BNE L06AB65
L06AB41:
    LDA $0E
    CLC
    ADC L06A7EE.w,X
    STA $02
    LDA $0F
    CLC
    ADC L06A7B2.w,X
    STA $03
    JSR L0FF280.w
    BCS L06AB65
    LDY #0
    LDA ($00),Y
    CMP #2
    BNE L06AB65
    LDA #1
    STA $04CD
    BNE L06AB68
L06AB65:
    DEX
    BPL L06AB27
L06AB68:
    LDA $11
    STA $01
    LDA $10
    STA $00
    RTS

L06AB71:
    TXA
    PHA
    LDY #0
    STY $18
L06AB77:
    LDY $18
    LDA L06AB8F.w,Y
    BMI L06AB8C
    TAY
    LDA ($00),Y
    LDX $18
    LDY L06AB9F.w,X
    STA ($02),Y
    INC $18
    BNE L06AB77
L06AB8C:
    PLA
    TAX
    RTS

L06AB8F:
.db $00
.db $01
.db $02
.db $0E
.db $03
.db $04
.db $05
.db $06
.db $07
.db $08
.db $09
.db $0C
.db $0B
.db $13
.db $0A
.db $FF

L06AB9F:
.db $00
.db $02
.db $04
.db $06
.db $08
.db $0A
.db $0E
.db $10
.db $14
.db $16
.db $18
.db $22
.db $24
.db $20
.db $26

L06ABAE:
    LDY #1
    LDA ($00),Y
    CMP #3
    BEQ L06ABBA
    CMP #5
    BNE L06ABBE
L06ABBA:
    LDY #13
    BNE L06ABC7
L06ABBE:
    LDY #15
    LDA ($00),Y
    TAY
    LDA L0FE8DE.w,Y
    TAY
L06ABC7:
    LDA L0FECEE.w,Y
    STY $18
    LDY #12
    STA ($02),Y
    LDY $18
    LDA L0FED04.w,Y
    LDY #30
    STA ($02),Y
    RTS

L06ABDA:
    LDY #20
    LDA ($00),Y
    BEQ L06ABE4
    CMP #58
    BCC L06ABFA
L06ABE4:
    LDY #1
    LDA ($00),Y
    CMP #12
    BEQ L06ABF8
    CMP #20
    BEQ L06ABF8
    CMP #13
    BEQ L06ABF8
    LDA #0
    BEQ L06ABFA
L06ABF8:
    LDA #1
L06ABFA:
    LDY #28
    STA ($02),Y
    RTS

L06ABFF:
    LDY #16
    LDA $0501
    SEC
    SBC ($00),Y
    JSR L0FC5B8.w
    STA $02
    LDY #17
    LDA $0500
    SEC
    SBC ($00),Y
    JSR L0FC5B8.w
    CLC
    ADC $02
    SEC
    SBC #1
    LDX $747C
    STA $031E,X
    JSR L0FC9B6.w
    LDA #0
    STA $031E,X
    STA $0301
    RTS

L06AC2F:
    LDA $05FA
    BEQ L06AC69
    LDA $7C3F
    CLC
    ADC #19
    STA $3A
    LDA $7C40
    CLC
    ADC #13
    STA $3B
    LDA #0
    STA $41
    STA $3E
    LDA #0
    STA $3F
    LDA $05FA
    AND #128
    BEQ L06AC59
    LDA #2
    STA $3F
L06AC59:
    LDA #8
    STA $0587
    LDA $05FA
    AND #127
    CLC
    ADC #218
    JMP L0FE80F.w

L06AC69:
    RTS

L06AC6A:
    JSR L0FE67F.w
    LDY #18
    LDA ($7A),Y
    BNE L06AC76
    JSR L06BA0A.w
L06AC76:
    LDA #22
    JSR L0FCA50.w
    JSR L06AC2F.w
    LDA $1E
    AND #79
    BEQ L06AC94
    JSR L0FF584.w
    LDY #18
    LDA ($7A),Y
    BNE L06AC91
    LDA #58
    STA $2C
L06AC91:
    JMP L06B9D0.w

L06AC94:
    LDA $1E
    AND #160
    BEQ L06ACE5
    JSR L0FE696.w
    INC $8A
    RTS

L06ACA0:
    JSR L0FE67F.w
    LDY #0
    LDA ($7A),Y
    AND #128
    CLC
    ROL
    ROL
    EOR $747C
    BEQ L06ACB7
    JSR L0FD5BA.w
    JMP L06ACD0.w
L06ACB7:
    LDY #0
    LDA ($7A),Y
    AND #128
    BNE L06ACD0
    LDY #19
    LDA ($7A),Y
    AND #4
    BEQ L06ACD0
    LDY #18
    LDA ($7A),Y
    BNE L06ACD0
    JSR L0FD5BA.w
L06ACD0:
    LDA #15
    JSR L0FE6B8.w
    JSR L0FC70D.w
    INC $8A
    RTS

L06ACDB:
    JSR L0FE67F.w
    LDA #47
    JSR L0FE6B8.w
    INC $8A
L06ACE5:
    RTS

L06ACE6:
    JSR L0FE67F.w
    LDA #0
    STA $7DA5
    LDY #0
    LDA ($7A),Y
    STA $7DDD
    LDA #5
    STA $4A
    LDA #9
    JSR L0FCA94.w
    LDA $7DDD
    BEQ L06AD29
    LDA #16
    STA $7DD7
    LDX #128
    LDA $95
    SEC
    SBC $6A
    CMP #8
    BCS L06AD1D
    LDX #16
    LDA $7DDD
    ORA #128
    STA $7DDD
L06AD1D:
    STX $7DD5
    LDA #3
    STA $4A
    LDA #9
    JSR L0FCA94.w
L06AD29:
    INC $8A
    RTS

L06AD2C:
    JSR L0FE67F.w
    LDA #2
    STA $4A
    LDA #9
    JSR L0FCA94.w
    LDA $1A
    BEQ L06AD61
    CMP #128
    BNE L06AD58
    LDY #18
    LDA ($7A),Y
    BNE L06AD58
    LDY #0
    LDA ($7A),Y
    BMI L06AD58
    LDY #19
    LDA ($7A),Y
    AND #4
    BNE L06AD58
    LDA #68
    STA $2C
L06AD58:
    JSR L0FF584.w
    JSR L06B612.w
    JMP L06B9D0.w

L06AD61:
    RTS

L06AD62:
    JSR L0FE67F.w
    JSR L0FE696.w
    LDA $058F
    BNE L06AD61
    LDA #26
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA $2C
    STA $8A
    LDA #0
    STA $7DD4
    STA $05AE
    STA $2C
    STA $059C
    RTS

L06AD87:
    JSR L0FE67F.w
    LDA #0
    STA $9D
    JMP L0FC00D.w

L06AD91:
    LDA $0583
    LDX $7448
    BNE L06AD9F
    JSR L06B5FB.w
    JMP L06ADA2.w

L06AD9F:
    JSR L06B5E4.w
L06ADA2:
    LDA #132
    STA $7A
    STA $02
    LDA #116
    STA $03
    STA $7B
    LDA #21
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    JSR L0FC70D.w
    JSR L06BB3B.w
    INC $8A
    RTS

L06ADC2:
    LDA $94
    STA $00
    LDA $95
    STA $01
    LDY #16
    LDA ($7A),Y
    STA $02
    INY
    LDA ($7A),Y
    STA $03
    JSR L0FD78A.w
    BCC L06ADEB
    LDA $8E
    BNE L06ADEB
    INC $8A
    JSR L06BB00.w
    JSR L0FD598.w
    JSR L06B98D.w
    BNE L06ADF6
L06ADEB:
    JSR L0FD40C.w
    LDA #0
    STA $06D1
    JSR L0FD0C5.w
L06ADF6:
    LDA #2
    STA $3F
    LDA #0
    STA $059C
    STA $A0
    RTS

L06AE02:
    JSR L0FD0C5.w
    JSR L06BD39.w
    LDA #6
    STA $050D
    INC $8A
    RTS

L06AE10:
    LDA $0507
    STA $00
    LDA $0506
    STA $01
    LDA $0580
    STA $02
    LDA $0581
    STA $03
    JSR L0FD78A.w
    BCC L06AE34
    LDA #128
    STA $1A
    STA $1C
    STA $1E
    STA $050B
L06AE34:
    JSR L06BA06.w
    JSR L06BB6C.w
    JSR L0FD0C5.w
    LDA $0506
    STA $95
    LDA $0507
    STA $94
    RTS

L06AE48:
    LDA $0507
    STA $00
    LDA $0506
    STA $01
    LDA $0510
    STA $03
    LDA $0511
    STA $02
    JSR L06AE81.w
    JSR L0FD0C5.w
    LDA $0506
    STA $95
    LDA $0507
    STA $94
    RTS

L06AE6D:
    LDA $0507
    STA $00
    LDA $0506
    STA $01
    LDA $0580
    STA $02
    LDA $0581
    STA $03
L06AE81:
    JSR L0FD78A.w
    BCC L06AE8B
    LDA #1
    STA $05B6
L06AE8B:
    JMP L06BB6C.w

L06AE8E:
    JSR L0FD0C5.w
    JSR L06BDB1.w
    LDA #0
    STA $8E
    LDA $0506
    STA $95
    LDA $0507
    STA $94
    JSR L06B5C8.w
    BCS L06AEAA
    JMP L06BA06.w

L06AEAA:
    RTS

L06AEAB:
    LDA $7446
    BEQ L06AECA
    LDA #114
    STA $7DA9
    JSR L06BAD0.w
    JSR L06B612.w
    LDA #128
    STA $28
    JSR L0FC70D.w
    LDA #0
    STA $7446
    JSR L06B612.w
L06AECA:
    INC $8A
    RTS

L06AECD:
    LDA $059C
    JSR L0FC34C.w

.dw L06AF36
.dw L06AFDE
.dw L06AF22
.dw L06AEDB

L06AEDB:
    LDA $0582
    AND #192
    BEQ L06AF16
    CMP #128
    BEQ L06AF16
    CMP #192
    BEQ L06AF04
    LDA #10
    STA $05E5
    LDY #36
    LDA $7492
    SEC
    SBC L0FD9F4.w,Y
    STA $7492
    JSR L06B3A5.w
    JSR L06BA18.w
    JMP L06AF16.w

L06AF04:
    LDA #1
    STA $10
    JSR L06A156.w
    LDA #9
    STA $05E5
    JSR L06B440.w
    JSR L06BA18.w
L06AF16:
    LDA #54
    STA $8A
    LDA #0
    STA $059C
    STA $2C
    RTS

L06AF22:
    LDA #0
    STA $1A
    STA $1C
    STA $1E
    JSR L06A3A1.w
    LDA $7DB9
    BEQ L06AF35
    INC $059C
L06AF35:
    RTS

L06AF36:
    LDA #0
    STA $8E
    JSR L06BA06.w
    LDA $0582
    CMP #255
    BNE L06AF47
    JMP L06AFD9.w

L06AF47:
    LDA $7448
    BNE L06AF57
    LDA $0582
    AND #192
    BEQ L06AF62
    CMP #128
    BNE L06AFA0
L06AF57:
    LDA $0582
    AND #63
    JSR L06B5FB.w
    JMP L06AF86.w

L06AF62:
    LDX #0
L06AF64:
    LDA $740F,X
    CMP $7484
    BNE L06AF79
    LDA $7419,X
    STA $7446
    LDA #0
    STA $740F,X
    BEQ L06AF7E
L06AF79:
    INX
    CPX #9
    BCC L06AF64
L06AF7E:
    LDA $0582
    AND #63
    JSR L06B5E4.w
L06AF86:
    LDY #20
    LDA ($7A),Y
    TAX
    LDA L0FDAFD.w,X
    STA $98
    LDY #16
    LDA ($00),Y
    STA $0507
    INY
    LDA ($00),Y
    STA $0506
    JSR L069B66.w
L06AFA0:
    LDA $0582
    AND #192
    BEQ L06AFDD
    CMP #128
    BEQ L06AFCC
    CMP #64
    BEQ L06AFB8
    LDA #165
    JSR L0FF58A.w
    LDX #5
    BNE L06AFBA
L06AFB8:
    LDX #58
L06AFBA:
    STX $7DA6
    LDA #0
    STA $7DA5
    LDA #177
    STA $7DA9
    LDA #1
    STA $7DAC
L06AFCC:
    LDA #46
    STA $8A
    LDA #0
    STA $2C
    INC $059C
    BNE L06AFDD
L06AFD9:
    LDA #54
    STA $8A
L06AFDD:
    RTS

L06AFDE:
    JSR L06B612.w
    LDA $0582
    AND #192
    CMP #128
    BNE L06B022
    LDA $74AD
    CLC
    LDY #5
    ADC ($7A),Y
    CMP $74A2
    BCC L06AFFA
    LDA $74A2
L06AFFA:
    STA $74AD
    JSR L06BF01.w
    LDY #$23
    LDA $7492
    SEC
    SBC L0FD9F4.w,Y
    STA $7492
    LDA #116
    STA $03
    LDA #159
    STA $02
    LDA #10
    STA $05E5
    JSR L06B417.w
    JSR L06BA18.w
    INC $059C
L06B022:
    INC $059C
    RTS

L06B026:
    JSR L0FE67F.w
    JSR L069E1D.w
    LDA #0
    STA $9D
    LDA $05AD
    BNE L06B03C
    LDA #54
    STA $8A
    JMP L0FC01A.w

L06B03C:
    RTS

L06B03D:
    JSR L0FE67F.w
    LDA $059C
    JSR L0FC34C.w

.dw L06B058
.dw L06A3D5
.dw L06B0C6
.dw L06B0CE
.dw L06B0E8
.dw L06A3D5
.dw L06B123
.dw L06B13C
.dw L06A3B9

L06B058:
    JSR L06B612.w
    JSR L06B21D.w
    STY $7535
    BCC L06B087
    LDY #0
    LDA $7534
    JSR L06A244.w
    LDA #0
    STA $7560
    STA $7DA5
    LDA #64
    STA $7DA6
    LDA #177
    STA $7DA9
    LDA #1
    STA $7DAC
    INC $059C
    BNE L06B0C3
L06B087:
    LDA $7448
    BEQ L06B090
    LDA #54
    BNE L06B096
L06B090:
    LDX $747C
    LDA L06B0C4.w,X
L06B096:
    STA $8A
    LDY $7535
    LDA $7534
    STA ($00),Y
    LDA $7A
    STA $06
    LDA $7B
    STA $07
    LDA $00
    STA $7A
    LDA $01
    STA $7B
    JSR L06B1C0.w
    LDA $06
    STA $7A
    LDA $07
    STA $7B
    LDA $747C
    BEQ L06B0C3
    JSR L06BF01.w
L06B0C3:
    RTS

L06B0C4:
.db $19 $36

L06B0C6:
    INC $059C
    LDA #35
    JMP L0FE6B8.w

L06B0CE:
    LDA $05AC
    BEQ L06B0E2
    JSR L0FE696.w
    LDA $05AC
    CMP #2
    BEQ L06B0E2
    INC $059C
    BNE L06B122
L06B0E2:
    LDA #6
    STA $059C
    RTS

L06B0E8:
    LDA $744D
    CMP #40
    BCC L06B0FB
    LDA #1
    STA $7560
    LDA #66
    STA $7DA6
    BNE L06B11F
L06B0FB:
    LDA $7534
    LDX $6D11
    JSR L0FFA89.w
    LDA $7448
    BEQ L06B10D
    LDA #54
    BNE L06B113
L06B10D:
    LDX $747C
    LDA L06B0C4.w,X
L06B113:
    STA $2C
    LDA #67
    STA $7DA6
    LDA #7
    STA $059C
L06B11F:
    INC $059C
L06B122:
    RTS

L06B123:
    LDA $7484
    BPL L06B130
    LDA #159
    STA $7A
    LDA #116
    STA $7B
L06B130:
    INC $05A3
    LDA #36
    JSR L0FE6B8.w
    INC $059C
    RTS

L06B13C:
    LDX $05AC
    CPX #1
    BEQ L06B156
    CPX #2
    BCS L06B14D
    LDA #2
    STA $059C
    RTS

L06B14D:
    LDA #0
    STA $7535
    LDA #67
    BNE L06B17C
L06B156:
    LDX $058F
    DEX
    LDA #0
    STA $7D73,X
    LDY #11
    LDA ($7A),Y
    LDY #0
    JSR L06A244.w
    LDY #11
    LDA ($7A),Y
    STA $7536
    LDA $7534
    STA ($7A),Y
    LDA $7536
    STA $7534
    LDA #67
L06B17C:
    STA $7DA6
    LDA #253
    STA $0541
    LDA $7534
    LDX $6D11
    JSR L0FFA89.w
    JSR L06B1C0.w
    JSR L06B21D.w
    LDA $7484
    BPL L06B1A0
    LDA #132
    STA $7A
    LDA #116
    STA $7B
L06B1A0:
    LDA $747C
    BEQ L06B1A8
    JSR L06BF01.w
L06B1A8:
    LDA $7448
    BEQ L06B1B1
    LDA #54
    BNE L06B1B7
L06B1B1:
    LDX $747C
    LDA L06B0C4.w,X
L06B1B7:
    STA $2C
    INC $059C
    INC $7DC7
    RTS

L06B1C0:
    LDY #1
    LDA ($7A),Y
    CMP #15
    BEQ L06B21C
    CMP #16
    BEQ L06B21C
    CMP #17
    BEQ L06B21C
    CMP #18
    BEQ L06B21C
    CMP #19
    BEQ L06B21C
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L06B1E8
    LDY #11
    LDA ($7A),Y
    JMP L06B1EA.w

L06B1E8:
    LDA #0
L06B1EA:
    LDY #20
    STA ($7A),Y
    RTS

L06B1EF:
    LDY #1
    LDA ($7A),Y
    CMP #15
    BEQ L06B21C
    CMP #16
    BEQ L06B21C
    CMP #17
    BEQ L06B21C
    CMP #18
    BEQ L06B21C
    CMP #19
    BEQ L06B21C
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCC L06B214
    LDA #0
    BEQ L06B218
L06B214:
    LDY #11
    LDA ($7A),Y
L06B218:
    LDY #20
    STA ($7A),Y
L06B21C:
    RTS

L06B21D:
    LDA #132
    STA $00
    LDA #116
    STA $01
    LDA $7484
    BPL L06B232
    LDA #159
    STA $00
    LDA #116
    STA $01
L06B232:
    LDY #11
    LDA ($00),Y
    BEQ L06B23A
    SEC
    RTS

L06B23A:
    CLC
    RTS

L06B23C:
    LDA $059C
    JSR L0FC34C.w

.dw L06B246
.dw L06B25C

L06B246:
    JSR L0FE67F.w
    LDA #50
    JSR L0FE6B8.w
    INC $059C
    LDA #132
    JSR L0FF58A.w
    LDA #8
    STA $35
    BNE L06B26A
L06B25C:
    JSR L0FE67F.w
    LDA $35
    BNE L06B26A
    LDA #56
    STA $8A
    JSR L0FE696.w
L06B26A:
    RTS

L06B26B:
    JSR L0FE67F.w
    LDA #0
    STA $9D
    JMP L0FC041.w

L06B275:
    LDA #4
    STA $4A
    LDA #3
    JMP L0FCA94.w

L06B27E:
    RTS

L06B27F:
    JSR L0FE67F.w
    LDA $059C
    JSR L0FC34C.w

.dw L06B28E
.dw L06B296
.dw L06B2F5

L06B28E:
    INC $059C
    LDA #27
    JMP L0FE6B8.w

L06B296:
    LDX $058F
    DEX
    LDA #0
    STA $7D73,X
    LDX $05AC
    STX $74B4
    CPX #1
    BEQ L06B2B9
    CPX #2
    BEQ L06B2CD
    CPX #3
    BEQ L06B2E1
    LDA #0
    STA $8A
    STA $059C
    RTS

L06B2B9:
    INC $059C
    LDX $058F
    LDA $7442
    STA $7D78,X
    INC $7D78,X
    LDA #25
    JMP L0FE6B8.w

L06B2CD:
    INC $059C
    LDX $058F
    LDA $7443
    STA $7D78,X
    INC $7D78,X
    LDA #25
    JMP L0FE6B8.w

L06B2E1:
    INC $059C
    LDX $058F
    LDA $7444
    STA $7D78,X
    INC $7D78,X
    LDA #26
    JMP L0FE6B8.w

L06B2F5:
    LDX $05AC
    BNE L06B2FC
    BEQ L06B323
L06B2FC:
    DEX
    LDA $74B4
    CMP #1
    BEQ L06B30C
    CMP #2
    BEQ L06B31A
    CMP #3
    BEQ L06B320
L06B30C:
    STX $7442
    STX $06D0
    BNE L06B323
    JSR L06BA18.w
    JMP L06B323.w

L06B31A:
    STX $7443
    JMP L06B323.w

L06B320:
    STX $7444
L06B323:
    LDA #0
    STA $2C
    STA $059C
    JMP L06B9D0.w

L06B32D:
    JSR L0FE67F.w
    LDA $059C
    JSR L0FC34C.w

.dw L06B33E
.dw L06B346
.dw L06B354
.dw L06B35C

L06B33E:
    INC $059C
    LDA #20
    JMP L0FE6B8.w

L06B346:
    LDA $1E
    BEQ L06B353
    INC $059C
    JSR L0FF584.w
    JSR L0FE696.w
L06B353:
    RTS

L06B354:
    LDA #0
    STA $059C
    STA $8A
    RTS

L06B35C:
    LDA #67
    STA $8A
    LDA #0
    STA $059C
    RTS

L06B366:
    LDY #20
    LDA ($7A),Y
    CMP #40
    BEQ L06B373
    CMP #44
    BEQ L06B373
    CLC
L06B373:
    RTS

L06B374:
    LDY #11
    LDA ($7A),Y
    CMP #40
    BEQ L06B38B
    CMP #40
    BEQ L06B38F
    CMP #40
    BEQ L06B393
    CMP #44
    BNE L06B3A4
    JMP L06B3A5.w

L06B38B:
    LDA #10
    BNE L06B395
L06B38F:
    LDA #20
    BNE L06B395
L06B393:
    LDA #52
L06B395:
    CLC
    ADC $74AD
    CMP $74A2
    BCC L06B3A1
    LDA $74A2
L06B3A1:
    STA $74AD
L06B3A4:
    RTS

L06B3A5:
    LDY #5
    LDA ($7A),Y
    STA $04
    LDY #0
    LDA ($7A),Y
    BMI L06B3BB
L06B3B1:
    LDA #174
    STA $02
    LDA #103
    STA $03
    BNE L06B3C3
L06B3BB:
    LDA #83
    STA $02
    LDA #105
    STA $03
L06B3C3:
    LDY #18
    LDA ($02),Y
    CMP #255
    BEQ L06B3F1
    LDY #14
    LDA ($02),Y
    LDY #3
    CMP ($02),Y
    BEQ L06B3F1
    LDY #0
    LDA ($02),Y
    BPL L06B3DE
    JSR L06B417.w
L06B3DE:
    LDY #14
    LDA ($02),Y
    CLC
    ADC $04
    LDY #3
    CMP ($02),Y
    BCC L06B3ED
    LDA ($02),Y
L06B3ED:
    LDY #14
    STA ($02),Y
L06B3F1:
    LDA #21
    JSR L0FC384.w
    LDY #0
    LDA ($02),Y
    BNE L06B3C3
    LDA #132
    STA $00
    LDA #116
    STA $01
    LDA #159
    STA $02
    LDA #116
    STA $03
    LDA #21
    STA $04
    LDA #0
    STA $05
    JMP L0FC209.w

L06B417:
    LDA $04
    PHA
    LDA $05
    PHA
    LDA $02
    PHA
    LDA $03
    PHA
    LDA $02
    STA $04
    LDA $03
    STA $05
    LDA #0
    STA $0512
    JSR L06B4C9.w
    PLA
    STA $03
    PLA
    STA $02
    PLA
    STA $05
    PLA
    STA $04
    RTS

L06B440:
    LDX $05E5
    LDA L06B458.w,X
    JSR L0FC9BD.w
    LDA #128
    STA $28
    JSR L0FC70D.w
    LDY #0
    LDA ($7A),Y
    BMI L06B47A
    BPL L06B484

L06B458:
.db $01
.db $10
.db $10
.db $0B
.db $0B
.db $0C
.db $0C
.db $0F
.db $0F
.db $0D
.db $0D
.db $0E

L06B464:
    LDX $05E5
    LDA L06B458.w,X
    JSR L0FC9BD.w
    LDA #128
    STA $28
    JSR L0FC70D.w
    LDY #0
    LDA ($7A),Y
    BMI L06B484
L06B47A:
    LDA #174
    STA $04
    LDA #103
    STA $05
    BNE L06B48C
L06B484:
    LDA #83
    STA $04
    LDA #105
    STA $05
L06B48C:
    LDA #28
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA $95
    STA $0B
    LDA $94
    STA $0A
    JMP L06B4A7.w

L06B49F:
    JSR L06B52E.w
    LDA #21
    JSR L0FC38F.w
L06B4A7:
    LDY #0
    LDA ($04),Y
    BNE L06B49F
    LDA #0
    STA $A0
    JSR L06B612.w
    LDA #128
    STA $28
    JSR L0FC70D.w
    LDA $0B
    STA $95
    LDA $0A
    STA $94
    RTS

L06B4C4:
    LDA #1
    STA $0512
L06B4C9:
    LDA $02
    PHA
    LDA $03
    PHA
    LDX $05E5
    LDA L06907A.w,X
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA $04
    STA $06
    LDA $05
    STA $07
    LDX $05E5
    LDA L06B458.w,X
    JSR L0FC9BD.w
    LDA #128
    STA $28
    JSR L0FC70D.w
    LDA $07
    STA $05
    LDA $06
    STA $04
    LDA $95
    STA $0B
    LDA $94
    STA $0A
    LDA $0512
    BNE L06B50E
    JSR L06B52E.w
    JMP L06B511.w

L06B50E:
    JSR L06B53E.w
L06B511:
    LDA #0
    STA $A0
    JSR L06B612.w
    LDA #128
    STA $28
    JSR L0FC70D.w
    LDA $0B
    STA $95
    LDA $0A
    STA $94
    PLA
    STA $03
    PLA
    STA $02
    RTS

L06B52E:
    LDY #17
    LDA ($7A),Y
    CMP ($04),Y
    BNE L06B53E
    LDY #16
    LDA ($7A),Y
    CMP ($04),Y
    BEQ L06B58C
L06B53E:
    LDY #18
    LDA ($04),Y
    CMP #255
    BEQ L06B58C
    LDY #17
    LDA ($04),Y
    STA $95
    LDY #16
    LDA ($04),Y
    STA $94
    JSR L06BF3A.w
    BCS L06B58C
    LDX $05E5
    LDA L06906E.w,X
    JSR L0FF58A.w
    LDA #2
    STA $35
    LDA #255
    STA $05E4
L06B569:
    JSR L0FC288.w
    LDA $35
    BEQ L06B58C
    JSR L0FD81E.w
    LDA #0
    STA $3D
    LDA #1
    STA $92
    LDA #2
    STA $0589
    JSR L0FD499.w
    JSR L0FC336.w
    JSR L0FC70D.w
    JMP L06B569.w

L06B58C:
    LDA #0
    STA $0589
    LDA #48
    JSR L0FF58A.w
    RTS

L06B597:
    LDX #2
    BNE L06B59D
    LDX #0
L06B59D:
    CLC
    ADC $7C,X
    STA $7C,X
    BCC L06B5A6
    INC $7D,X
L06B5A6:
    RTS

L06B5A7:
    STA $7534
    CMP #44
    BEQ L06B5BE
    CMP #45
    BEQ L06B5BE
    CMP #46
    BEQ L06B5BE
    CMP #41
    BNE L06B5C7
    LDA #7
    BNE L06B5C0
L06B5BE:
    LDA #8
L06B5C0:
    STA $8A
    JSR L0FE696.w
    PLA
    PLA
L06B5C7:
    RTS

L06B5C8:
    LDA $0501
    CMP $69
    BCC L06B5E2
    SBC $69
    CMP #15
    BCS L06B5E3
    LDA $0500
    CMP $6A
    BCC L06B5E2
    SBC $6A
    CMP #16
    BCC L06B5E3
L06B5E2:
    SEC
L06B5E3:
    RTS

L06B5E4:
    STA $00
    LDA #21
    STA $01
    JSR L0FC6C9.w
    LDA #174
    CLC
    ADC $00
    STA $00
    LDA #103
    ADC $01
    STA $01
    RTS

L06B5FB:
    STA $00
    LDA #21
    STA $01
    JSR L0FC6C9.w
    LDA #83
    CLC
    ADC $00
    STA $00
    LDA #105
    ADC $01
    STA $01
    RTS

L06B612:
    TXA
    PHA
    LDA #4
    STA $05B5
    LDX $7434
    CPX #81
    BCC L06B622
    LDX #81
L06B622:
    LDA L0FCC95.w,X
    JSR L0FC9BD.w
    LDA #128
    STA $28
    PLA
    TAX
    RTS

L06B62F:
    JSR L0FC288.w
    LDA $8A
    JSR L0FC34C.w

.dw L06B64B
.dw L06B672
.dw L06B67E
.dw L06B691
.dw L06B69D
.dw L06B6B8
.dw L06B6EB
.dw L06B856
.dw L06B88B
.dw L06B8EF

L06B64B:
    LDA $05AD
    CMP #2
    BNE L06B65D
    LDA #1
    STA $05AF
    LDA #8
    STA $8A
    BNE L06B66F
L06B65D:
    CMP #1
    BEQ L06B66F
    CMP #4
    BEQ L06B66B
    LDA #2
    STA $8A
    BNE L06B66F
L06B66B:
    LDA #5
    STA $8A
L06B66F:
    INC $8A
    RTS

L06B672:
    LDA #17
    JSR L0FE6B8.w
    LDA #80
    STA $35
    INC $8A
    RTS

L06B67E:
    JSR L0FE67F.w
    LDA $35
    BEQ L06B689
    LDA $1C
    BEQ L06B690
L06B689:
    JSR L0FE696.w
    LDA #6
    STA $8A
L06B690:
    RTS

L06B691:
    LDA #51
    JSR L0FE6B8.w
    LDA #32
    STA $35
    INC $8A
    RTS

L06B69D:
    JSR L0FE67F.w
    LDA $1C
    AND #128
    BNE L06B6AA
    LDA $35
    BNE L06B6B7
L06B6AA:
    JSR L0FE696.w
    LDA #103
    STA $7B
    LDA #174
    STA $7A
    INC $8A
L06B6B7:
    RTS

L06B6B8:
    JSR L0FE67F.w
    LDA #6
    STA $8A
    RTS

L06B6C0:
    JSR L06B6D7.w
    LDA $05E1
    CMP #2
    BEQ L06B6D6
    JSR L0FC288.w
    JSR L0FC336.w
    JSR L0FC70D.w
    JMP L06B6C0.w
L06B6D6:
    RTS

L06B6D7:
    JSR L0FE67F.w
    LDA $1C
    AND #128
    BNE L06B6E4
    LDA $35
    BNE L06B6EA
L06B6E4:
    JSR L0FE696.w
    INC $05E1
L06B6EA:
    RTS

L06B6EB:
    JSR L0FE67F.w
    LDA #0
    STA $05E9
    STA $05FC
    LDA $05AD
    JSR L0FC34C.w

.dw L0FC73D
.dw L06B706
.dw L06B7A5
.dw L06B7A6
.dw L06B706

L06B706:
    JSR L06B7EE.w
    JSR L06B715.w
    JSR L06B74B.w
    JSR L0FF807.w
    INC $8A
    RTS

L06B715:
    LDA $7434
    CMP #36
    BEQ L06B744
    LDX #0
L06B71E:
    LDA L0FE3A3.w,X
    CMP $7434
    BEQ L06B73B
    INX
    CPX #4
    BCC L06B71E
    LDX #0
L06B72D:
    LDA L0FF124.w,X
    CMP $7434
    BEQ L06B745
    INX
    CPX #9
    BCC L06B72D
    RTS

L06B73B:
    LDA $6D92
    ORA L0FD9B1.w,X
    STA $6D92
L06B744:
    RTS

L06B745:
    LDA #255
    STA $6D93,X
    RTS

L06B74B:
    LDA #174
    STA $6B
    LDA #103
    STA $6C
    BNE L06B79E
L06B755:
    LDY #19
    LDA ($6B),Y
    AND #4
    BNE L06B799
    LDY #18
    LDA ($6B),Y
    CMP #255
    BEQ L06B799
    LDY #1
    LDA ($6B),Y
    STA $0306
    LDY #2
    LDA ($6B),Y
    STA $0308
    LDA #20
    STA $030F
    LDA #1
    STA $4A
    LDA #9
    JSR L0FCA94.w
    LDY #2
    LDA ($6B),Y
    CMP #20
    BEQ L06B799
    LDY #4
    LDA ($6B),Y
    CLC
    ADC $030F
    CMP #100
    BCC L06B797
    LDA #99
L06B797:
    STA ($6B),Y
L06B799:
    LDA #21
    JSR L0FFA7F.w
L06B79E:
    LDY #0
    LDA ($6B),Y
    BNE L06B755
    RTS

L06B7A5:
    RTS

L06B7A6:
    JSR L0FF807.w
    JSR L06B827.w
    LDA $05E6
    BEQ L06B7B7
    JSR L06B7DA.w
    JMP L06B7D7.w
L06B7B7:
    LDA $7477
    BEQ L06B7C6
    LDA $6D14
    CLC
    ADC #2
    TAX
    JMP L06B7C9.w

L06B7C6:
    LDX $6D11
L06B7C9:
    STX $05E7
    LDA $6D16,X
    STA $05E8
    LDA #1
    STA $05E9
L06B7D7:
    INC $8A
    RTS

L06B7DA:
    LDX $6D11
    STX $05E7
    JSR L069127.w
    LDA $0D
    STA $05E8
    LDA #1
    STA $05E9
    RTS

L06B7EE:
    LDA $6D13
    STA $0C
L06B7F3:
    LDX $0C
    LDA $6D13,X
L06B7F8:
    CLC
    ADC #2
    TAX
    LDA #0
    STA $6CF6,X
    STA $6CC0,X
    TXA
    ASL
    TAX
    LDA $6CD2,X
    STA $00
    LDA $6CD3,X
    STA $01
    LDY #5
    LDA #0
L06B815:
    STA ($00),Y
    DEY
    BPL L06B815
    LDA #0
    STA $6CD2,X
    STA $6CD3,X
    DEC $0C
    BNE L06B7F3
    RTS

L06B827:
    LDA #0
    STA $726F
L06B82C:
    LDA #18
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDA $7271
    BNE L06B844
    LDA #1
    STA $0C
    LDA $6D0F
    JSR L06B7F8.w
L06B844:
    INC $726F
    LDA $726F
    CMP $6D13
    BEQ L06B852
    JMP L06B82C.w

L06B852:
    RTS

L06B853:
    INC $8A
    RTS

L06B856:
    LDA #1
    JSR L06B612.w
    LDA #4
    STA $05B5
    INC $8A
    RTS

L06B863:
    LDA $7434
    CMP #49
    BCC L06B88A
    CMP #62
    BNE L06B875
    LDA $6D91
    CMP #3
    BEQ L06B88A
L06B875:
    LDA $747A
    STA $7434
    LDA $6D11
    STA $05B8
    LDA #1
    STA $7479
    LDA #16
    STA $2A
L06B88A:
    RTS

L06B88B:
    JSR L0FE67F.w
    LDA $05B5
    BEQ L06B89C
    LDA #2
    STA $4A
    LDA #4
    JMP L0FCA94.w

L06B89C:
    LDA #1
    STA $06D0
L06B8A1:
    LDA #0
    STA $7445
    STA $7446
    STA $8A
    STA $66
    STA $05B5
    LDA $05AD
    CMP #4
    BNE L06B8E3
    LDA #0
    STA $05B8
    LDA #78
    STA $05BB
    STA $7434
    STA $6CC0
    LDA L0FEF8E.w
    STA $6C9C
    LDA L0FEF8F.w
    STA $6CAE
    LDA #16
    STA $2A
    LDA #0
    STA $7479
    STA $059C
    STA $05AD
    RTS

L06B8E3:
    LDA #0
    STA $05AD
    LDA #3
    STA $2A
    JMP L06B863.w

L06B8EF:
    LDA #11
    STA $4A
    JSR L0FCA94.w
    LDA $05AF
    BNE L06B903
    JSR L06B905.w
    LDA #0
    STA $05A2
L06B903:
    RTS

L06B904:
    RTS

L06B905:
    LDA #0
    STA $058F
    STA $8A
    LDA #2
    STA $2A
    LDA #1
    STA $66
    STA $67
    STA $05A2
    RTS

L06B91A:
    JSR L0FC288.w
    JSR L0FE67F.w
    LDA $059C
    JSR L0FC34C.w

.dw L06B92C
.dw L06A3D5
.dw L06B98A

L06B92C:
    JSR L06B612.w
    LDY #4
L06B931:
    LDA $0069,Y
    STA $742F,Y
    DEY
    BPL L06B931
    JSR L0FC773.w
    LDA #174
    STA $00
    LDA #103
    STA $01
    LDA #123
    STA $02
    LDA #116
    STA $03
    LDA #12
    STA $4A
    LDA #11
    JSR L0FCA94.w
    JSR L0FC77D.w
    LDA $04
    STA $747E
    LDA $05
    STA $747F
    LDY #3
L06B965:
    LDA L06B986.w,Y
    STA $7480,Y
    DEY
    BPL L06B965
    LDA #0
    STA $7DA5
    LDA #177
    STA $7DA9
    LDA #87
    STA $7DA6
    LDA #1
    STA $7DAC
    INC $059C
    RTS

L06B986:
.db $7D $6A $77 $72

L06B98A:
    JMP L06B98A.w

L06B98D:
    LDA $058B
    SEC
    SBC $69
    SEC
    ROL
    ROL
    ROL
    ROL
    STA $0503
    LDA $058A
    SEC
    SBC $6A
    SEC
    ROL
    ROL
    ROL
    ROL
    STA $0502
    RTS

L06B9AA:
    LDA #0
    STA $02
    STA $03
    JSR L0FF2D4.w
    BNE L06B9C9
L06B9B5:
    LDY #18
    LDA ($00),Y
    CMP #255
    BEQ L06B9C2
    INC $03
    JMP L06B9C4.w

L06B9C2:
    INC $02
L06B9C4:
    LDA #21
    JSR L0FC379.w
L06B9C9:
    LDY #0
    LDA ($00),Y
    BNE L06B9B5
L06B9CF:
    RTS

L06B9D0:
    LDY $058F
    BEQ L06B9CF
    DEY
    LDA #0
    STA $7D73,Y
    JSR L0FE696.w
    LDA #39
    STA $8A
    RTS

L06B9E3:
    LDA $7495
    CMP $6A
    BCC L06BA05
    LDA $6A
    CLC
    ADC #15
    CMP $7495
    BCC L06BA05
    LDA $7494
    CMP $69
    BCC L06BA05
    LDA $69
    CLC
    ADC #14
    CMP $7494
    BCS L06BA0A
L06BA05:
    RTS

L06BA06:
    LDA #1
    BNE L06BA0C
L06BA0A:
    LDA #0
L06BA0C:
    STA $059E
    LDA #3
    STA $4A
    LDA #11
    JMP L0FCA94.w

L06BA18:
    LDA $7442
    BNE L06BA5E
    LDA $05A2
    BNE L06BA59
    LDA $7434
    CMP #62
    BNE L06BA31
    LDX $747C
    LDA L06BA65.w,X
    BNE L06BA56
L06BA31:
    LDA $747C
    BNE L06BA48
    LDA $7445
    BEQ L06BA43
    LDX $6D11
    LDA L06BA61.w,X
    BNE L06BA56
L06BA43:
    LDA $747C
    BEQ L06BA50
L06BA48:
    LDX $6D11
    LDA L06BA63.w,X
    BNE L06BA56
L06BA50:
    LDX $6D11
    LDA L06BA5F.w,X
L06BA56:
    JSR L0FF58A.w
L06BA59:
    LDA #0
    STA $05A2
L06BA5E:
    RTS

L06BA5F:
.db $A1 $A4

L06BA61:
.db $A3 $A7

L06BA63:
.db $70 $77

L06BA65:
.db $B4 $B5

L06BA67:
    LDA #0
    STA $00
    LDY $0501
    DEY
    TYA
    JSR L0FCEBF.w
    LDY $0500
    LDA ($70),Y
    CMP #241
    BEQ L06BA90
    INC $00
    LDY $0501
    INY
    TYA
    JSR L0FCEBF.w
    LDY $0500
    LDA ($70),Y
    CMP #91
    BEQ L06BA90
    CLC
L06BA90:
    RTS

L06BA91:
    JSR L0FF2D4.w
    LDX #0
    STX $A9
L06BA98:
    LDY #0
    LDA ($00),Y
    BEQ L06BAC2
    LDY #18
    LDA ($00),Y
    CMP #255
    BEQ L06BAAE
    INC $A9
    LDA $A9
    CMP #2
    BCS L06BAB6
L06BAAE:
    LDY #21
    JSR L0FC378.w
    JMP L06BA98.w

L06BAB6:
    LDA $7445
    BEQ L06BACF
    LDA #0
    STA $7445
    BEQ L06BACC
L06BAC2:
    LDA $7445
    BNE L06BACF
    LDA #1
    STA $7445
L06BACC:
    JSR L06BA18.w
L06BACF:
    RTS

L06BAD0:
    LDA #0
    STA $7DA5
    LDA $7446
    STA $7DA6
    LDA #1
    STA $7DAC
L06BAE0:
    JSR L0FC288.w
    LDA #0
    STA $3D
    JSR L0FC336.w
    INC $36
    JSR L06A3A1.w
    LDA $7DB9
    BNE L06BAFA
    JSR L0FC70D.w
    JMP L06BAE0.w

L06BAFA:
    LDA #0
    STA $7446
    RTS

L06BB00:
    LDY #17
    LDA ($7A),Y
    STA $0506
    STA $0500
    STA $058A
    LDY #16
    LDA ($7A),Y
    STA $0507
    STA $0501
    STA $058B
    LDA #0
    STA $C5
    LDY #11
    LDA ($7A),Y
    CMP #56
    BNE L06BB2A
    LDA #5
    STA $C5
L06BB2A:
    LDY #13
    LDA ($7A),Y
    CLC
    ADC $C5
    STA $C5
    LDY #1
    LDA ($7A),Y
    STA $0505
    RTS

L06BB3B:
    LDX #0
L06BB3D:
    STX $00
    JSR L06BD9A.w
    LDY #0
L06BB44:
    CPY #0
    BEQ L06BB5A
    CPY $7441
    BEQ L06BB5A
    CPX #0
    BEQ L06BB5A
    CPX $7440
    BEQ L06BB5A
    LDA #0
    BEQ L06BB5C
L06BB5A:
    LDA #255
L06BB5C:
    STA ($72),Y
    INY
    CPY #32
    BNE L06BB44
    INX
    CPX $7440
    BCC L06BB3D
    BEQ L06BB3D
    RTS

L06BB6C:
    LDA $8E
    BNE L06BB8B
    LDA $0506
    STA $0508
    LDA $0507
    STA $0509
    JSR L06BB8C.w
    LDA $0508
    STA $0506
    LDA $0509
    STA $0507
L06BB8B:
    RTS

L06BB8C:
    LDA #0
    STA $05D7
    LDA $1E
    AND #15
    BNE L06BBA0
    LDX $050E
    BEQ L06BBBB
    DEC $050E
    RTS

L06BBA0:
    LDX #10
    STX $050E
    LDX #4
L06BBA7:
    LSR
    BCS L06BBAD
    DEX
    BNE L06BBA7
L06BBAD:
    DEX
    TXA
    JSR L0FC34C.w

.dw L06BC58
.dw L06BC90
.dw L06BCC9
.dw L06BD01

L06BBBA:
    RTS
L06BBBB:
    LDA $1E
    CMP #128
    BNE L06BC04
    LDA $0507
    CMP $058B
    BNE L06BBD4
    LDA $0506
    CMP $058A
    BNE L06BBD4
    JMP L06BE0D.w

L06BBD4:
    LDA $0506
    STA $03
    LDA $0507
    STA $02
    JSR L0FF280.w
    BCC L06BC04
    JSR L0FF28B.w
    BCC L06BC04
    JSR L06BD42.w
    LDY $7484
    BMI L06BBFA
    LDY $7485
    DEY
    LDA L06BC05.w,Y
    JMP L06BC01.w

L06BBFA:
    LDY $7485
    DEY
    LDA L06BC1B.w,Y
L06BC01:
    STA $06D3
L06BC04:
    RTS

L06BC05:
.db $40
.db $80
.db $08
.db $40
.db $08
.db $80
.db $40
.db $80
.db $80
.db $80
.db $80
.db $80
.db $80
.db $80
.db $80
.db $80
.db $80
.db $80
.db $80
.db $40
.db $80
.db $80

L06BC1B:
.db $40
.db $80
.db $08
.db $40
.db $08
.db $80
.db $40
.db $80
.db $80
.db $80
.db $04
.db $80
.db $80
.db $80
.db $80
.db $80
.db $04
.db $04
.db $80
.db $40
.db $08
.db $80

L06BC31:
    LDA $0509
    STA $00
    JSR L06BD9A.w
    LDY $0508
    LDA ($72),Y
    AND #63
    BEQ L06BC52
    CMP #61
    BEQ L06BC4C
    TAY
    DEY
    CPY $C5
    BCS L06BC52
L06BC4C:
    LDA #0
    STA $050F
    RTS

L06BC52:
    LDA #1
    STA $050F
    RTS

L06BC58:
    LDA $0509
    CMP #1
    BEQ L06BC8F
    LDA #8
    STA $8D
    DEC $0509
    LDA $8A
    CMP #12
    BNE L06BC7D
    JSR L06BC31.w
    LDA $050F
    BEQ L06BC7A
    INC $0509
    JMP L06BC8F.w

L06BC7A:
    JSR L0FF56C.w
L06BC7D:
    LDA $0509
    SEC
    SBC $69
    CMP #6
    BCS L06BC8F
    LDA $05D7
    BNE L06BC8F
    JSR L0FD0BB.w
L06BC8F:
    RTS

L06BC90:
    LDY $0509
    CPY $7440
    BEQ L06BCC8
    LDA #4
    STA $8D
    INC $0509
    LDA $8A
    CMP #12
    BNE L06BCB6
    JSR L06BC31.w
    LDA $050F
    BEQ L06BCB3
    DEC $0509
    JMP L06BCC8.w

L06BCB3:
    JSR L0FF56C.w
L06BCB6:
    LDA $0509
    SEC
    SBC $69
    CMP #10
    BCC L06BCC8
    LDA $05D7
    BNE L06BCC8
    JSR L0FD0BB.w
L06BCC8:
    RTS

L06BCC9:
    LDA $0508
    CMP #1
    BEQ L06BD00
    LDA #2
    STA $8D
    DEC $0508
    LDA $8A
    CMP #12
    BNE L06BCEE
    JSR L06BC31.w
    LDA $050F
    BEQ L06BCEB
    INC $0508
    JMP L06BD00.w

L06BCEB:
    JSR L0FF56C.w
L06BCEE:
    LDA $0508
    SEC
    SBC $6A
    CMP #6
    BCS L06BD00
    LDA $05D7
    BNE L06BD00
    JSR L0FD0BB.w
L06BD00:
    RTS

L06BD01:
    LDA $0508
    CMP #30
    BEQ L06BD38
    LDA #1
    STA $8D
    INC $0508
    LDA $8A
    CMP #12
    BNE L06BD26
    JSR L06BC31.w
    LDA $050F
    BEQ L06BD23
    DEC $0508
    JMP L06BD38.w

L06BD23:
    JSR L0FF56C.w
L06BD26:
    LDA $0508
    SEC
    SBC $6A
    CMP #10
    BCC L06BD38
    LDA $05D7
    BNE L06BD38
    JSR L0FD0BB.w
L06BD38:
    RTS

L06BD39:
    LDA #12
    STA $4A
    LDA #7
    JMP L0FCA94.w

L06BD42:
    LDX $0507
    STX $C7
    STX $00
    LDY $0506
    STY $C6
    JSR L06BD9A.w
L06BD51:
    LDA ($72),Y
    ROL
    ROL
    ROL
    AND #3
    STA $09
    ASL
    TAX
    LDA L06BD92.w,X
    CLC
    ADC $C6
    STA $C6
    LDA (L06BD92.w + 1),X
    CLC
    ADC $C7
    STA $C7
    ASL
    TAY
    LDA L0FEE22.w,Y
    STA $72
    LDA (L0FEE22.w + 1),Y
    STA $73
    LDY $C6
    LDA ($72),Y
    CMP #61
    BEQ L06BD89
    AND #192
    ORA $09
    STA ($72),Y
    JMP L06BD51.w

L06BD89:
    LDA $09
    STA ($72),Y
    INC $8A
    JMP L06BE14.w

L06BD92:
.db $00 $01
.db $FF $00
.db $00 $FF
.db $01 $00

L06BD9A:
    TYA
    PHA
    TXA
    PHA
    LDA $00
    ASL
    TAX
    LDA L0FEE22.w,X
    STA $72
    LDA (L0FEE22.w + 1),X
    STA $73
    PLA
    TAX
    PLA
    TAY
    RTS

L06BDB1:
    LDY $0500
    STY $0508
    LDX $0501
    STX $0509
    CPY $0506
    BNE L06BDC7
    CPX $0507
    BEQ L06BDF7
L06BDC7:
    STX $00
    JSR L06BD9A.w
    JSR L06BDD3.w
    JSR L06BDED.w
    RTS

L06BDD3:
    LDA ($72),Y
    AND #3
    STA $0504
    LDX #0
    STX $05D7
    JSR L06BE1A.w
    JSR L0FC34C.w

.dw L06BC58
.dw L06BD01
.dw L06BC90
.dw L06BCC9

L06BDED:
    LDA $050A
    BEQ L06BDF7
    DEC $050A
    BPL L06BE19
L06BDF7:
    LDY $0508
    STY $0500
    LDX $0509
    STX $0501
    CPY $0506
    BNE L06BE14
    CPX $0507
    BNE L06BE14
L06BE0D:
    LDA #1
    STA $06D3
    INC $8A
L06BE14:
    LDY #15
    STY $050A
L06BE19:
    RTS

L06BE1A:
    PHA
    LDA $0508
    CMP $6A
    BCC L06BE3D
    LDA $6A
    CLC
    ADC #15
    CMP $0508
    BCC L06BE3D
    LDA $0509
    CMP $69
    BCC L06BE3D
    LDA $69
    CLC
    ADC #14
    CMP $0509
    BCS L06BE42
L06BE3D:
    LDA #1
    STA $05D7
L06BE42:
    PLA
    LDY $0503
    LDX $0502
    CMP #1
    BEQ L06BE58
    CMP #2
    BEQ L06BE5B
    CMP #3
    BEQ L06BE5E
    DEY
    BNE L06BE5F
L06BE58:
    INX
    BNE L06BE5F
L06BE5B:
    INY
    BNE L06BE5F
L06BE5E:
    DEX
L06BE5F:
    STY $0503
    STX $0502
L06BE65:
    RTS

L06BE66:
    LDA $7492
    BEQ L06BE65
    JSR L06B5C8.w
    BCS L06BE8D
    JSR L0FD758.w
    JSR L0FD604.w
    JSR L0FD771.w
    LDY #0
    STA ($00),Y
    LDY #0
    LDA ($00),Y
    JSR L0FD611.w
    JSR L0FD604.w
    JSR L0FD771.w
    JSR L0FD67F.w
L06BE8D:
    LDA #1
    LDY #18
    STA ($7A),Y
    JMP L06BEC8.w

L06BE96:
    LDA $0506
    STA $95
    LDA $0507
    STA $94
    LDA #1
    STA $3F
    LDA #0
    STA $A0
    JMP L0FD499.w

L06BEAB:
    LDX $0500
    LDA $058A
    STA $0500
    STA $95
    STX $058A
    LDX $0501
    LDA $058B
    STA $0501
    STA $94
    STX $058B
L06BEC7:
    RTS
L06BEC8:
    LDA $058B
    STA $02
    LDA $058A
    STA $03
    JSR L0FF280.w
    BCC L06BEDC
    JSR L0FF28B.w
    BCS L06BEC7
L06BEDC:
    LDA $00
    STA $02
    LDA $01
    STA $03
    LDA $7492
    BNE L06BEEE
    LDA #255
    STA $7496
L06BEEE:
    LDA #132
    STA $00
    LDA #116
    STA $01
    LDA #21
    STA $04
    LDA #0
    STA $05
    JMP L0FC209.w

L06BF01:
    LDA $74AF
    STA $02
    LDA $74B0
    STA $03
    JSR L0FF280.w
    BCC L06BF15
    JSR L0FF28B.w
    BCS L06BEC7
L06BF15:
    LDA $00
    STA $02
    LDA $01
    STA $03
    LDA $74AD
    BNE L06BF27
    LDA #255
    STA $74B1
L06BF27:
    LDA #159
    STA $00
    LDA #116
    STA $01
    LDA #21
    STA $04
    LDA #0
    STA $05
    JMP L0FC209.w

L06BF3A:
    LDA $94
    CMP $69
    BCC L06BF52
    SBC $69
    CMP #15
    BCS L06BF53
    LDA $95
    CMP $6A
    BCC L06BF52
    SBC $6A
    CMP #16
    BCC L06BF53
L06BF52:
    SEC
L06BF53:
    RTS

.db $FF
.db $FF
.db $0F
.db $00
.db $48
.db $18
.db $84
.db $C1
.db $00
.db $C5
.db $19
.db $5C
.db $06
.db $00
.db $08
.db $02
.db $00
.db $40
.db $10
.db $03
.db $70
.db $A8
.db $40
.db $14
.db $21
.db $1A
.db $83
.db $84
.db $10
.db $84
.db $80
.db $00
.db $29
.db $41
.db $00
.db $00
.db $83
.db $84
.db $46
.db $04
.db $52
.db $0C
.db $14
.db $51
.db $86
.db $00
.db $00
.db $00
.db $06
.db $02
.db $00
.db $08
.db $B4
.db $88
.db $22
.db $13
.db $2F
.db $10
.db $A6
.db $22
.db $00
.db $00
.db $20
.db $60
.db $04
.db $90
.db $00
.db $01
.db $24
.db $41
.db $18
.db $0C
.db $3C
.db $4C
.db $04
.db $05
.db $65
.db $A6
.db $1E
.db $A7
.db $1D
.db $A6
.db $10
.db $D5
.db $67
.db $BA
.db $0E
.db $A7
.db $BF
.db $D2
.db $7D
.db $D6
.db $EB
.db $B6
.db $6D
.db $AE
.db $D4
.db $8F
.db $F3
.db $8F
.db $BA
.db $D5
.db $0F
.db $D6
.db $C4
.db $B4
.db $18
.db $BA
.db $00
.db $85
.db $D0
.db $BA
.db $20
.db $A6
.db $56
.db $A1
.db $3D
.db $C7
.db $D3
.db $D5
.db $C5
.db $8C
.db $12
.db $B6
.db $20
.db $00
.db $30
.db $40
.db $00
.db $04
.db $09
.db $04
.db $40
.db $11
.db $81
.db $50
.db $00
.db $15
.db $00
.db $14
.db $00
.db $02
.db $81
.db $00
.db $10
.db $29
.db $10
.db $01
.db $CA
.db $87
.db $10
.db $08
.db $1C
.db $02
.db $F0
.db $80
.db $00
.db $02
.db $30
.db $86
.db $00
.db $00
.db $01
.db $18
.db $48
.db $21
.db $00
.db $31
.db $A8
.db $C4
.db $0A
.db $04

.ENDS
