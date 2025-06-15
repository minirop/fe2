.BANK 3
.ORG $0000

.SECTION "Bank2" FORCE

L_TILEMAPS:
.dw L0280A2
.dw L02860B
.dw L028830
.dw L028C36
.dw L02959C
.dw L0284EE
.dw L028564
.dw L029393
.dw L02964F
.dw L028FC2
.dw L029090
.dw L0296CE
.dw L028FC2
.dw L0294E9
.dw L028FC2
.dw L029090
.dw L0297C1
.dw L028564
.dw L0284EE
.dw L02ABC2
.dw L02964F
.dw L0298E4
.dw L028F1C
.dw L028F1C
.dw L0299FD
.dw L028C36
.dw L029C2B
.dw L028830
.dw L028671
.dw L029D95
.dw L028760
.dw L028564
.dw L029EE0
.dw L028760
.dw L028564
.dw L028D75
.dw L02A72C
.dw L02A8E0
.dw L0289AC
.dw L028D75
.dw L029FFE
.dw L02A24B
.dw L02927D
.dw L02917B
.dw L02A43F
.dw L02A650
.dw L0289AC
.dw L02AA6A
.dw L02917B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02ACD0
.dw L02ACD0
.dw L02ACD0
.dw L02AECF
.dw L02AF3E
.dw L02B01F
.dw L02B066
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02AE2B
.dw L02B26D
.dw L02B2CC
.dw L02B322
.dw L02B378
.dw L02B401
.dw L02B45A
.dw L02B490
.dw L02B490
.dw L02B490

L0280A2: ; world map
.INCBIN "0280A2.bin"

L0284EE:
.INCBIN "first-battle-of-southern-zofia.bin"

L028564:
.INCBIN "second-battle-of-southern-zofia.bin"

L02860B:
.INCBIN "ram-woods.bin"

L028671:
.INCBIN "028671.bin"

L028760:
.INCBIN "028760.bin"

L028830:
.INCBIN "028830.bin"

L0289AC:
.INCBIN "0289AC.bin"

L028C36:
.INCBIN "028C36.bin"

L028D75:
.INCBIN "028D75.bin"

L028F1C:
.INCBIN "028F1C.bin"

L028FC2:
.INCBIN "028FC2.bin"

L029090:
.INCBIN "029090.bin"

L02917B:
.INCBIN "02917B.bin"

L02927D:
.INCBIN "02927D.bin"

L029393:
.INCBIN "029393.bin"

L0294E9:
.INCBIN "0294E9.bin"

L02959C:
.INCBIN "02959C.bin"

L02964F:
.INCBIN "02964F.bin"

L0296CE:
.INCBIN "0296CE.bin"

L0297C1:
.INCBIN "0297C1.bin"

L0298E4:
.INCBIN "0298E4.bin"

L0299FD:
.INCBIN "0299FD.bin"

L029C2B:
.INCBIN "029C2B.bin"

L029D95:
.INCBIN "029D95.bin"

L029EE0:
.INCBIN "029EE0.bin"

L029FFE:
.INCBIN "029FFE.bin"

L02A24B:
.INCBIN "02A24B.bin"

L02A43F:
.INCBIN "02A43F.bin"

L02A650:
.INCBIN "02A650.bin"

L02A72C:
.INCBIN "02A72C.bin"

L02A8E0:
.INCBIN "02A8E0.bin"

L02AA6A:
.INCBIN "02AA6A.bin"

L02ABC2:
.INCBIN "02ABC2.bin"

L02ACD0:
.INCBIN "02ACD0.bin"

L02AE2B:
.INCBIN "02AE2B.bin"

L02AECF:
.INCBIN "02AECF.bin"

L02AF3E:
.INCBIN "02AF3E.bin"

L02B01F:
.INCBIN "02B01F.bin"

L02B066:
.INCBIN "02B066.bin"

L02B26D:
.INCBIN "02B26D.bin"

L02B2CC:
.INCBIN "02B2CC.bin"

L02B322:
.INCBIN "02B322.bin"

L02B378:
.INCBIN "02B378.bin"

L02B401:
.INCBIN "02B401.bin"

L02B45A:
.INCBIN "02B45A.bin"

L02B490:
.INCBIN "02B490.bin"

L02B4D8: ; duma tower
.dw L02B4EA
.dw L02B55F
.dw L02B6CE
.dw L02B6E2
.dw L02B7B9
.dw L02B870
.dw L02B953
.dw L02B9A7
.dw L02BAAE

L02B4EA:
.INCBIN "02B4EA.bin"

L02B55F:
.INCBIN "02B55F.bin"

L02B6CE:
.INCBIN "02B6CE.bin"

L02B6E2:
.INCBIN "02B6E2.bin"

L02B7B9:
.INCBIN "02B7B9.bin"

L02B870:
.INCBIN "02B870.bin"

L02B953:
.INCBIN "02B953.bin"

L02B9A7:
.INCBIN "02B9A7.bin"

L02BAAE:
.INCBIN "02BAAE.bin"

L02BB44:
    JSR L02BB5E.w
    LDA $8A
    JSR L0FC34C.w

L02BB4C:
.dw L02BB73
.dw L02BBB5
.dw L02BC0E
.dw L02BC42
.dw L02BC52
.dw L02BC97
.dw L02BD29
.dw L02BCB4
.dw L02BE26

L02BB5E:
    LDA #0
    STA $0200
    STA $0202
    STA $0203
    LDA #252
    STA $0201
    LDA #4
    STA $3D
    RTS

L02BB73:
    LDA #26
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA #0
    JSR L0FCA58.w
    JSR L0FCA60.w
    LDA #1
    JSR L0FC9BD.w
    LDA #128
    STA $28
    JSR L0FC72D.w
    JSR L02BB99.w
    INC $8A
    LDA #13
    JMP L0FE6B8.w

L02BB99:
    LDA #35
    STA $0781
    LDA #192
    STA $0782
    LDA #1
    STA $0783
    LDA #255
    STA $0784
    LDA #0
    STA $0785
    INC $27
    RTS

L02BBB5:
    LDA $0594
    BEQ L02BBC4
L02BBBA:
    LDA #0
    STA $0594
    LDA #5
    STA $058D
L02BBC4:
    JSR L0FE67F.w
    LDA $05AC
    BEQ L02BBBA
    CMP #1
    BEQ L02BBE0
    CMP #2
    BEQ L02BBE5
    CMP #3
    BEQ L02BBEE
    CMP #4
    BEQ L02BBF7
    CMP #5
    BEQ L02BC00
L02BBE0:
    LDA #4
    STA $8A
    RTS

L02BBE5:
    LDA #2
    STA $8A
    LDA #33
    JMP L0FE6B8.w

L02BBEE:
    LDA #5
    STA $8A
    LDA #14
    JMP L0FE6B8.w

L02BBF7:
    LDA #6
    STA $8A
    LDA #14
    JMP L0FE6B8.w

L02BC00:
    LDA #7
    STA $8A
    LDA #14
    JMP L0FE6B8.w

L02BC09: ; ???
.dw $7613
.dw $796A
.db $00

L02BC0E:
    JSR L02BE81.w
    JSR L0FE67F.w
    LDA #1
    STA $743D
    STA $7434
    LDA #2
    STA $7444
    LDA #0
    STA $66
    LDY $05AC
    DEY
    STY $6D
    LDA $1C
    AND #48
    CMP #48
    BEQ L02BC3A
    LDA #0
    STA $6E8C
    BEQ L02BC4F
L02BC3A:
    LDA #72
    JSR L0FE6B8.w
    INC $8A
    RTS

L02BC42:
    JSR L02BE81.w
    JSR L0FE67F.w
    LDY $05AC
    DEY
    STY $6E8C
L02BC4F:
    INC $2B
    RTS

L02BC52:
    LDY #3
    LDA #0
L02BC56:
    STA $7480,Y
    DEY
    BPL L02BC56
    LDA $747C
    BNE L02BC84
    JSR L02BECE.w
    LDA $04
    CMP $747E
    BNE L02BC84
    LDA $05
    CMP $747F
    BNE L02BC84
    LDY #4
L02BC74:
    LDA $742F,Y
    STA $0069,Y
    DEY
    BPL L02BC74
    LDA #2
    STA $66
    INC $2B
    RTS

L02BC84:
    LDA #0
    STA $058D
    STA $058F
    STA $0594
    STA $059C
    LDA #8
    STA $8A
    RTS

L02BC97:
    JSR L02BE81.w
    JSR L0FE67F.w
    LDY #3
    LDA #0
L02BCA1:
    STA $7480,Y
    DEY
    BPL L02BCA1
    LDA #1
    STA $66
    LDY $05AC
    DEY
    STY $6D
    INC $2B
    RTS

L02BCB4:
    JSR L02BE81.w
    JSR L0FE67F.w

L02BCBA:
    LDA $059C
    JSR L0FC34C.w

L02BCC0:
.dw L02BCCC
.dw L02BEAF
.dw L02BEC6
.dw L02BCF3
.dw L02BD03
.dw L02BE9B

L02BCCC:
    LDY $05AC
    DEY
    STY $6D
    LDA #34
    JSR L0FE6B8.w
    LDA #0
    STA $7DA5
    LDA #177
    STA $7DA9
    LDA #1
    STA $7DAC
    LDA #8
    STA $2C
    LDA #83
    STA $7DA6
    INC $059C
    RTS

L02BCF3:
    LDA $05AC
    CMP #1
    BNE L02BCFE
    INC $059C
    RTS

L02BCFE:
    LDA #8
    STA $8A
    RTS

L02BD03:
    LDA #166
    STA $00
    LDA #103
    STA $01
    LDA $6D
    BEQ L02BD17
    LDA #170
    STA $00
    LDA #103
    STA $01
L02BD17:
    LDY #3
    LDA #0
L02BD1B:
    STA ($00),Y
    DEY
    BPL L02BD1B
    LDA #84
    STA $7DA6
    INC $059C
    RTS

L02BD29:
    JSR L02BE81.w
    JSR L0FE67F.w
    LDA $059C
    JSR L0FC34C.w

L02BD35:
.dw L02BD39
.dw L02BE9B

L02BD39:
    JSR L0FC773.w
    LDY $05AC
    DEY
    TYA
    ASL
    TAY
    LDA L02BE0E.w,Y
    STA $00
    LDA (L02BE0E.w + 1),Y
    STA $01
    LDA L02BE1E.w,Y
    STA $02
    LDA (L02BE1E.w + 1),Y
    STA $03
    LDA #12
    STA $4A
    LDA #11
    JSR L0FCA94.w
    LDY $05AC
    DEY
    TYA
    ASL
    TAY
    LDA L02BE22.w,Y
    STA $00
    LDA (L02BE22.w + 1),Y
    STA $01
    LDY #0
    LDA ($00),Y
    CMP $0004,Y
    BNE L02BD82
    INY
    LDA ($00),Y
    CMP $0004,Y
    BEQ L02BDA3
L02BD82:
    LDY $05AC
    DEY
    TYA
    ASL
    TAY
    LDA L02BE16.w,Y
    STA $00
    LDA (L02BE16.w + 1),Y
    STA $01
    LDY #3
    LDA #0
L02BD97:
    STA ($00),Y
    DEY
    BPL L02BD97
    LDA #86
    STA $7DA6
    BNE L02BDF4
L02BDA3:
    LDY $05AC
    DEY
    TYA
    ASL
    TAY
    LDA L02BE0E.w,Y
    STA $00
    LDA (L02BE0E.w + 1),Y
    STA $01
    LDA L02BE12.w,Y
    STA $02
    LDA (L02BE12.w + 1),Y
    STA $03
    LDA #211
    STA $04
    LDA #3
    STA $05
    JSR L0FC209.w
    LDY $05AC
    DEY
    TYA
    ASL
    TAY
    LDA L02BE16.w,Y
    STA $00
    LDA (L02BE16.w + 1),Y
    STA $01
    LDA L02BE1A.w,Y
    STA $02
    LDA (L02BE1A.w + 1),Y
    STA $03
    LDA #4
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    LDA #85
    STA $7DA6
L02BDF4:
    JSR L0FC77D.w
    LDA #0
    STA $7DA5
    LDA #177
    STA $7DA9
    LDA #1
    STA $7DAC
    LDA #8
    STA $2C
    INC $059C
    RTS

L02BE0E:
.dw $6000
.dw $63D3

L02BE12:
.dw $63D3
.dw $6000

L02BE16:
.dw $67A6
.dw $67AA

L02BE1A:
.dw $67AA
.dw $67A6

L02BE1E:
.dw $63D1
.dw $67A4

L02BE22:
.dw $63D1
.dw $67A4

L02BE26:
    LDA #30
    STA $0595
    LDA #35
    STA $79
    LDA #160
    STA $78
L02BE33:
    JSR L0FC70D.w
    JSR L02BE52.w
    DEC $0595
    JSR L02BE52.w
    DEC $0595
    BNE L02BE33
    LDA #0
    STA $0594
    STA $058F
    STA $8A
    STA $059C
    RTS

L02BE52:
    LDX $0780
    LDA $79
    JSR L0FC4A2.w
    LDA $78
    JSR L0FC4A2.w
    LDA #96
    JSR L0FC4A2.w
    LDA #255
    JSR L0FC4A2.w
    STX $0780
    LDA #0
    STA $0781,X
    LDA #1
    STA $27
    LDA $78
    SEC
    SBC #32
    STA $78
    BCS L02BE80
    DEC $79
L02BE80:
    RTS

L02BE81:
    LDA $0594
    BEQ L02BE9A
    LDA #0
    STA $058D
    STA $058F
    STA $0594
    STA $059C
    LDA #8
    STA $8A
    PLA
    PLA
L02BE9A:
    RTS

L02BE9B:
    JSR L02BEE7.w
    LDA $7DB9
    BEQ L02BEAE
    LDA $2C
    STA $8A
    LDA #0
    STA $2C
    STA $059C
L02BEAE:
    RTS

L02BEAF:
    JSR L02BEE7.w
    LDA $7DBF
    BEQ L02BEC5
    LDA $059D
    BEQ L02BEC2
    STA $059C
    JMP L02BEC5.w

L02BEC2:
    INC $059C
L02BEC5:
    RTS

L02BEC6:
    INC $059C
    LDA #12
    JMP L0FE6B8.w

L02BECE:
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
    JMP L0FCA94.w

L02BEE7:
    LDA #0
    STA $4A
    LDA #10
    JMP L0FCA94.w

L02BEF0:
    LDA #3
    STA $4A
    LDA #10
    JMP L0FCA94.w

L02BEF9:
.dw L02BEFB

L02BEFB:
.db $3F $00 $20 $0F $20 $20 $20 $0F
.db $20 $20 $20 $0F $20 $20 $20 $0F
.db $0F $0F $0F $0F $20 $20 $20 $0F
.db $20 $20 $20 $0F $20 $20 $20 $0F
.db $20 $20 $20 $00

L02BF1F:
.db $00
.db $40
.db $00
.db $10
.db $02
.db $0A
.db $00
.db $00
.db $00
.db $D4
.db $42
.db $56
.db $33
.db $80
.db $14
.db $3D
.db $15
.db $20
.db $50
.db $00
.db $08
.db $48
.db $00
.db $08
.db $11
.db $16
.db $26
.db $00
.db $C0
.db $F4
.db $00
.db $3C
.db $43
.db $00
.db $02
.db $08
.db $00
.db $C0
.db $84
.db $00
.db $40
.db $08
.db $A2
.db $AB
.db $60
.db $AC
.db $12
.db $53
.db $41
.db $20
.db $00
.db $A0
.db $12
.db $08
.db $00
.db $88
.db $30
.db $10
.db $15
.db $01
.db $54
.db $40
.db $84
.db $00
.db $5B
.db $88
.db $A0
.db $00
.db $00
.db $00
.db $04
.db $00
.db $00
.db $07
.db $61
.db $90
.db $8A
.db $0A
.db $8E
.db $8B
.db $C9
.db $28
.db $00
.db $00
.db $28
.db $40
.db $28
.db $81
.db $00
.db $02
.db $D0
.db $30
.db $12
.db $40
.db $85
.db $09
.db $40
.db $88
.db $00
.db $02
.db $08
.db $20
.db $20
.db $00
.db $B0
.db $6F
.db $A7
.db $39
.db $F8
.db $2F
.db $BF
.db $96
.db $C7
.db $00
.db $00
.db $24
.db $C0
.db $00
.db $04
.db $C8
.db $C0
.db $21
.db $C0
.db $49
.db $02
.db $60
.db $41
.db $00
.db $08

L02BFA0: ; pointers to functions
.dw L02BD39
.dw L0FC73D
.dw L02BD03

L02BFA6: ; pointers to data
.dw L02BF1F
.dw L02BF1F
.dw L02BF1F
.dw L02BF1F
.dw L02B4D8

L02BFB0:
.db $70
.db $00
.db $68
.db $A1
.db $00
.db $05
.db $12
.db $04
.db $02
.db $41
.db $AD
.db $24
.db $B3
.db $44
.db $0C
.db $60

L02BFC0:
.dw L02BEF9

.db $08
.db $00
.db $00
.db $00
.db $32
.db $28
.db $16
.db $34
.db $CA
.db $40
.db $07
.db $6E
.db $74
.db $02
.db $00
.db $00
.db $C0
.db $80
.db $80
.db $00
.db $80
.db $30
.db $E0
.db $40
.db $51
.db $04
.db $01
.db $04
.db $A5
.db $20
.db $00
.db $00
.db $42
.db $00
.db $40
.db $00
.db $0B
.db $00
.db $D0
.db $39
.db $E3
.db $55
.db $28
.db $2E
.db $02
.db $16
.db $00
.db $02
.db $50
.db $01
.db $00
.db $40
.db $00
.db $00
.db $50
.db $31
.db $4C
.db $44
.db $BB
.db $8F
.db $19
.db $0B

.ENDS
