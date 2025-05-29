.BANK 16
.ORG $0000

.SECTION "Bank15" FORCE

.db $A9
L0F0001:
    ORA $20
    RTI 
    DEX 
    JSR $BFA0
    LDA #6
    JMP $CA40

L0F000D:
    LDA #3
    JSR $CA40
    JSR $8000
    LDA #6
    JMP $CA40

L0F001A:
    LDA #3
    JSR $CA40
    JSR $8003
    LDA #6
    JMP $CA40

L0F0027:
    LDA #3
    JSR $CA40
    JSR $8006
    LDA #6
    JMP $CA40

.db $A9
.db $0D
.db $20
.db $40
.db $CA
.db $20
.db $00
.db $80
.db $A9
.db $06
.db $4C
.db $40
.db $CA
L0F0041:
    LDA #3
    JSR $CA40
    JSR $8009
    LDA #6
    JMP $CA40

L0F004E:
    TXA 
    PHA 
    LDX #11
L0F0052:
    LDA $37
    CLC 
    ADC #5
    STA $37
    LDA $38
    CLC 
    ADC #13
    STA $38
    DEX 
    BNE L0F0052
    PLA 
    TAX 
    LDA $37
    RTS 

L0F0068:
    STA $00
    JSR $C04E
    STA $01
    JSR $C6C9
    LDA $01
    RTS 

L0F0075:
    SEI 
    CLD 
    LDX #0
    STX $2000
    STX $2001
L0F007F:
    LDA $2002
    BPL L0F007F
L0F0084:
    LDA $2002
    BPL L0F0084
    DEX 
    TXS 
    LDA #0
    STA $5F
    STA $60
    STA $61
    STA $62
    LDY #7
    STY $01
    LDY #0
    STY $00
    TYA 
L0F009E:
    STA ($00),Y
    INY 
    BNE L0F009E
    DEC $01
    BPL L0F009E
    LDY #0
    STY $D1
    STY $D0
    STY $25
    STY $24
    STY $2005
    STY $2005
    STY $5F
    STY $60
    STY $61
    STY $62
    STY $2B
    STY $2A
    STY $28
    STY $0780
    STY $0781
    STY $27
    STY $5D
    STY $5E
    STY $9D
    INY 
    STY $29
    STY $0585
    LDY #255
    STA $0587
    LDA #0
    STA $4010
    STA $4011
    STA $4015
    LDA #15
    STA $4015
    LDA #192
    STA $4017
    LDA #16
    STA $4000
    STA $4004
    STA $400C
    LDA #0
    STA $4008
    LDA #128
    STA $2000
    STA $4023
    LDA #3
    STA $4023
    LDA #232
    STA $408A
    LDA #128
    STA $4080
    JSR $C23D
    JSR $C288
    JSR $CA70
    LDA #144
    STA $2000
    STA $D3
    LDA #2
    STA $2001
    STA $D2
    LDA #6
    JSR $CA40
    LDA $67
    BEQ L0F013E
.db $A9
.db $01
.db $85
.db $67
L0F013E:
    JSR $C77D
    JMP $C156

L0F0144:
    LDA #0
    STA $D6
    JSR $FBC5
    JSR $C336
    INC $36
    LDA #0
    STA $26
    STA $D6
    LDA $26
    BNE L0F015D
    JMP $C156

L0F015D:
    JSR $C04E
    JMP $C144

L0F0163:
    PHP 
    PHA 
    TXA 
    PHA 
    TYA 
    PHA 
    LDA #0
    STA $2003
    LDA #2
    STA $4014
    LDA $00
    PHA 
    LDA $01
    PHA 
    JSR $C3A5
    JSR $C296
    JSR $C1EC
    JSR $CECC
    JSR $C733
    JSR $C36A
    JSR $C1C4
    JSR $C1FB
    JSR $C2D9
    LDY #1
    STY $26
    PLA 
    STA $01
    PLA 
    STA $00
    LDA $D6
    BEQ L0F01BD
    LDA $04C5
    BEQ L0F01BD
.db $AD
.db $02
.db $20
.db $29
.db $40
.db $D0
.db $F9
.db $AD
.db $02
.db $20
.db $29
.db $40
.db $F0
.db $F9
.db $A9
.db $00
.db $8D
.db $00
.db $D0
.db $8D
.db $00
.db $E0
L0F01BD:
    PLA 
    TAY 
    PLA 
    TAX 
    PLA 
    PLP 
    RTI 
    LDA $9D
    BNE L0F01E3
    DEC $9E
    BNE L0F01E3
    LDY $9F
    INY 
    TYA 
    AND #3
    TAY 
    STY $9F
    LDA $C1E8,Y
    STA $9E
    LDA $C1E4,Y
    JSR $CA58
    JMP $CA60

L0F01E3:
    RTS 

; start of data
.db $18
.db $19
.db $15
.db $19
.db $0E
.db $08
.db $0E
.db $08
; end of data
L0F01EC:
    LDA $63
    BEQ L0F01FA
    LDA $64
    STA $D000
    LDA $65
    STA $E000
L0F01FA:
    RTS 

L0F01FB:
    LDA #14
    STA $A000
    JSR $8000
    LDA $2F
    STA $A000
    RTS 

L0F0209:
    LDY #0
    LDX $04
    BEQ L0F0211
    INC $05
L0F0211:
    LDA ($00),Y
    STA ($02),Y
    INY 
    BNE L0F021C
    INC $01
    INC $03
L0F021C:
    DEC $04
    BNE L0F0211
    DEC $05
    BNE L0F0211
    RTS 

L0F0225:
    LDY #0
    LDX $02
    BEQ L0F022D
    INC $03
L0F022D:
    STA ($00),Y
    INY 
    BNE L0F0234
    INC $01
L0F0234:
    DEC $02
    BNE L0F022D
    DEC $03
    BNE L0F022D
    RTS 

L0F023D:
    JSR $C252
    LDA $29
    BEQ L0F024A
    LDA $2B
    CMP #29
    BEQ L0F024E
L0F024A:
    LDA #2
    BNE L0F0254
L0F024E:
.db $A9
.db $03
.db $D0
.db $02
L0F0252:
    LDA #1
L0F0254:
    STA $01
    LDA #255
    STA $00
    LDX $2002
    LDA $D3
    AND #251
    STA $D3
    STA $2000
    LDX $01
    DEX 
    LDA $C284,X
    STA $2006
    LDA #0
    STA $2006
    LDX #4
    LDY #0
    LDA $00
L0F027A:
    STA $2007
    DEY 
    BNE L0F027A
    DEX 
    BNE L0F027A
    RTS 

; start of data
.db $20
.db $24
; end of data
.db $28
.db $2C
L0F0288:
    LDY #0
    LDA #244
L0F028C:
    STA $0200,Y
    INY 
    INY 
    INY 
    INY 
    BNE L0F028C
L0F0295:
    RTS 

L0F0296:
    LDY $28
    BEQ L0F0295
    BMI L0F02CC
    DEY 
    TYA 
    ASL 
    TAY 
    LDA $BFC0
    STA $00
    LDA $BFC1
    STA $01
    LDA ($00),Y
    TAX 
    INY 
    LDA ($00),Y
    TAY 
L0F02B1:
    LDA #0
    STA $28
    JSR $C2D2
    LDA $2002
    LDA #63
    STA $2006
    LDA #0
    STA $2006
    STA $2006
    STA $2006
    RTS 

L0F02CC:
    LDX #125
    LDY #125
    BNE L0F02B1
    STX $00
    STY $01
    JMP $C3E7

L0F02D9:
    LDY #1
    STY $4016
    DEY 
    STY $4016
    LDY #8
L0F02E4:
    PHA 
    LDA $4016
    STA $22
    LSR 
    ORA $22
    LSR 
    PLA 
    ROL 
    DEY 
    BNE L0F02E4
    CMP $05B3
    BEQ L0F0300
    STA $05B3
    LDA #4
    STA $05B2
L0F0300:
    DEC $05B2
    BNE L0F032F
    LDY #4
    STY $05B2
    LDY $1C
    STY $22
    STA $1C
    EOR $22
    BEQ L0F031A
    AND $1C
    STA $1A
    STA $1E
L0F031A:
    LDY #4
    LDA $1C
    CMP $22
    BNE L0F032C
    DEC $20
    BNE L0F032E
    LDA $1C
    STA $1E
    LDY #1
L0F032C:
    STY $20
L0F032E:
    RTS 

L0F032F:
    LDA #0
    STA $1A
    STA $1E
    RTS 

L0F0336:
    LDX #1
    DEC $32
    BPL L0F0342
    LDA #9
    STA $32
    LDX #2
L0F0342:
    LDA $33,X
    BEQ L0F0348
    DEC $33,X
L0F0348:
    DEX 
    BPL L0F0342
    RTS 

L0F034C:
    ASL 
    STY $15
    STX $14
    TAY 
    INY 
    PLA 
    STA $12
    PLA 
    STA $13
    LDA ($12),Y
    TAX 
    INY 
    LDA ($12),Y
    STA $13
    STX $12
    LDX $14
    LDY $15
    JMP ($0012)

L0F036A:
    LDA $2002
    LDA $D1
    STA $2005
    LDA $D0
    STA $2005
    RTS 

L0F0378:
    TYA 
    CLC 
    ADC $00
    STA $00
    BCC L0F0382
    INC $01
L0F0382:
    RTS 

L0F0383:
    TYA 
    CLC 
    ADC $02
    STA $02
    BCC L0F038D
    INC $03
L0F038D:
    RTS 

L0F038E:
    TYA 
    CLC 
    ADC $04
    STA $04
    BCC L0F038D
    INC $05
    RTS 

L0F0399:
    LSR 
    LSR 
    LSR 
    LSR 
    LSR 
    RTS 

.db $0A
L0F03A0:
    ASL 
    ASL 
    ASL 
    ASL 
    RTS 

L0F03A5:
    LDA $27
    BEQ L0F03BE
    LDA #129
    STA $00
    LDA #7
    STA $01
    JSR $C3E7
    LDA #0
    STA $0780
    STA $0781
    STA $27
L0F03BE:
    RTS 

L0F03BF:
    STA $2006
    INY 
    LDA ($00),Y
    STA $2006
    INY 
    LDA ($00),Y
    ASL 
    JSR $C3F3
    ASL 
    LDA ($00),Y
    AND #63
    TAX 
    BCC L0F03D8
    INY 
L0F03D8:
    BCS L0F03DB
    INY 
L0F03DB:
    LDA ($00),Y
    STA $2007
    DEX 
    BNE L0F03D8
    INY 
    JSR $C378
    LDX $2002
    LDY #0
    LDA ($00),Y
    BNE L0F03BF
    JMP $C36A

L0F03F3:
    PHA 
    LDA $D3
    ORA #4
    BCS L0F03FC
    AND #251
L0F03FC:
    STA $2000
    STA $D3
    PLA 
    RTS 

; start of data
.db $FC
.db $F3
.db $CF
.db $3F
; end of data
L0F0407:
    LDA $04
    LSR 
    LSR 
    AND #7
    STA $00
    LDA $04
    AND #128
    JSR $C39A
    STA $01
    INY 
    LDA $05
    AND #3
    JSR $C3A0
    ORA $00
    ORA $01
    ORA #192
    STA $78
    LDA $05
    ORA #3
    STA $79
    RTS 

.db $86
.db $00
.db $84
.db $01
.db $A9
.db $00
.db $85
.db $02
.db $A9
.db $07
.db $85
.db $03
.db $A0
.db $01
.db $84
.db $27
.db $88
.db $B1
.db $02
.db $29
.db $1F
.db $85
.db $05
.db $B1
.db $02
.db $20
.db $99
.db $C3
.db $85
.db $04
.db $AE
.db $80
.db $07
.db $4C
.db $74
.db $C4
L0F0453:
    STX $00
    STY $01
    LDA #0
    STA $02
    LDA #7
    STA $03
    LDY #1
    STY $27
    DEY 
    LDA ($02),Y
    AND #15
    STA $05
    LDA ($02),Y
    JSR $C39A
    STA $04
    LDX $0780
L0F0474:
    LDA $01
    JSR $C4A2
    LDA $00
    JSR $C4A2
    LDA $05
    STA $06
    JSR $C4A2
L0F0485:
    INY 
    LDA ($02),Y
    JSR $C4A2
    DEC $06
    BNE L0F0485
    STX $0780
    STY $06
    LDY #32
    JSR $C378
    LDY $06
    DEC $04
    BNE L0F0474
    JSR $C4AD
    STA $0781,X
    INX 
    CPX #95
    BCC L0F04B4
.db $AE
.db $80
.db $07
L0F04AD:
    LDA #0
    STA $0781,X
    PLA 
    PLA 
L0F04B4:
    RTS 

.db $86
.db $00
.db $84
.db $01
.db $A2
.db $00
.db $86
.db $02
.db $A2
.db $07
.db $86
.db $03
.db $A0
.db $01
.db $84
.db $27
.db $88
.db $F0
.db $37
.db $85
.db $04
.db $A5
.db $01
.db $20
.db $A2
.db $C4
.db $A5
.db $00
.db $20
.db $A2
.db $C4
.db $A5
.db $04
.db $20
.db $09
.db $C5
.db $24
.db $04
.db $50
.db $01
.db $C8
.db $24
.db $04
.db $70
.db $01
.db $C8
.db $B1
.db $02
.db $20
.db $A2
.db $C4
.db $84
.db $06
.db $A0
.db $01
.db $24
.db $04
.db $10
.db $02
.db $A0
.db $20
.db $20
.db $78
.db $C3
.db $A4
.db $06
.db $C6
.db $05
.db $D0
.db $E3
.db $8E
.db $80
.db $07
.db $C8
.db $AE
.db $80
.db $07
.db $B1
.db $02
.db $D0
.db $C2
.db $20
.db $AD
.db $C4
.db $85
.db $04
.db $29
.db $BF
.db $9D
.db $81
.db $07
.db $29
.db $3F
.db $85
.db $05
.db $4C
.db $A5
.db $C4
L0F0517:
    TXA 
    PHA 
    TYA 
    PHA 
    LDA $D3
    LSR 
    ROR $06
    LSR 
    ROR $06
    LDA $D1
    CLC 
    ADC $01
    ROR $06
    JSR $C39B
    STA $04
    ASL $06
    ROR 
    ROR 
    EOR $06
    STA $07
    LDY #32
    BIT $07
    BVC L0F053F
    LDY #36
L0F053F:
    STY $05
    LDA $D0
    CLC 
    ADC $00
    BCS L0F054A
    CMP #240
L0F054A:
    PHP 
    ROR $06
    PLP 
    BCC L0F0553
    CLC 
    ADC #16
L0F0553:
    JSR $C39B
    TAX 
    ASL $06
    ROR 
    EOR $06
    BPL L0F0565
    LDA $05
    CLC 
    ADC #8
    STA $05
L0F0565:
    TXA 
    BEQ L0F0578
L0F0568:
    LDA $04
    CLC 
    ADC #32
    STA $04
    LDA $05
    ADC #0
    STA $05
    DEX 
    BNE L0F0568
L0F0578:
    PLA 
    TAY 
    PLA 
    TAX 
    RTS 

.db $AE
.db $80
.db $07
.db $A0
.db $01
.db $84
.db $27
.db $D0
.db $29
.db $20
.db $A2
.db $C4
.db $C8
.db $B1
.db $00
.db $20
.db $A2
.db $C4
.db $C8
.db $B1
.db $00
.db $20
.db $09
.db $C5
.db $24
.db $04
.db $50
.db $01
.db $C8
.db $24
.db $04
.db $70
.db $01
.db $C8
.db $B1
.db $00
.db $20
.db $A2
.db $C4
.db $C6
.db $05
.db $D0
.db $F2
.db $8E
.db $80
.db $07
.db $C8
.db $20
.db $78
.db $C3
.db $A0
.db $00
.db $B1
.db $00
.db $D0
.db $D1
.db $20
.db $AD
.db $C4
L0F05B8:
    BPL L0F05BF
    EOR #255
    CLC 
    ADC #1
L0F05BF:
    RTS 

.db $48
.db $29
.db $0F
.db $A8
.db $68
.db $4C
.db $9A
.db $C3
.db $A0
.db $FF
.db $C8
.db $38
.db $E9
.db $64
.db $B0
.db $FA
.db $69
.db $64
.db $AA
.db $98
.db $48
.db $8A
.db $A2
.db $FF
.db $E8
.db $38
.db $E9
.db $0A
.db $B0
.db $FA
.db $69
.db $0A
.db $A8
.db $68
.db $60
.db $A2
.db $FF
.db $E8
.db $A5
.db $00
.db $85
.db $01
.db $A5
.db $02
.db $85
.db $03
.db $A5
.db $04
.db $85
.db $05
.db $A5
.db $00
.db $38
.db $E9
.db $10
.db $85
.db $00
.db $A5
.db $02
.db $E9
.db $27
.db $85
.db $02
.db $B0
.db $E4
.db $A5
.db $04
.db $E9
.db $00
.db $85
.db $04
.db $B0
.db $DC
.db $8A
.db $48
.db $A5
.db $01
.db $85
.db $00
.db $A5
.db $03
.db $85
.db $02
.db $A2
.db $FF
.db $E8
.db $A5
.db $00
.db $85
.db $01
.db $A5
.db $02
.db $85
.db $03
.db $A5
.db $00
.db $38
.db $E9
.db $E8
.db $85
.db $00
.db $A5
.db $02
.db $E9
.db $03
.db $85
.db $02
.db $B0
.db $E8
.db $8A
.db $48
.db $A5
.db $01
.db $85
.db $00
.db $A5
.db $03
.db $85
.db $02
.db $A2
.db $FF
.db $E8
.db $A5
.db $00
.db $85
.db $01
.db $A5
.db $02
.db $85
.db $03
.db $A5
.db $00
.db $38
.db $E9
.db $64
.db $85
.db $00
.db $A5
.db $02
.db $E9
.db $00
.db $85
.db $02
.db $B0
.db $E8
.db $8A
.db $48
.db $A5
.db $01
.db $85
.db $00
.db $A2
.db $FF
.db $E8
.db $A5
.db $00
.db $85
.db $01
.db $A5
.db $00
.db $38
.db $E9
.db $0A
.db $85
.db $00
.db $B0
.db $F2
.db $A5
.db $01
.db $85
.db $00
.db $86
.db $01
.db $68
.db $85
.db $02
.db $68
.db $85
.db $03
.db $68
.db $85
.db $04
.db $60
.db $20
.db $BA
.db $C6
.db $65
.db $01
.db $C9
.db $0A
.db $90
.db $02
.db $69
.db $05
.db $18
.db $65
.db $02
.db $85
.db $02
.db $A5
.db $03
.db $29
.db $F0
.db $65
.db $02
.db $90
.db $04
.db $69
.db $5F
.db $38
.db $60
.db $C9
.db $A0
.db $B0
.db $F8
.db $60
.db $20
.db $BA
.db $C6
.db $E5
.db $01
.db $85
.db $01
.db $B0
.db $0A
.db $69
.db $0A
.db $85
.db $01
.db $A5
.db $02
.db $69
.db $0F
.db $85
.db $02
.db $A5
.db $03
.db $29
.db $F0
.db $38
.db $E5
.db $02
.db $B0
.db $03
.db $69
.db $A0
.db $18
.db $05
.db $01
.db $60
.db $48
.db $29
.db $0F
.db $85
.db $01
.db $68
.db $29
.db $F0
.db $85
.db $02
.db $A5
.db $03
.db $29
.db $0F
.db $60
L0F06C9:
    TXA 
    PHA 
    TYA 
    PHA 
    LDA #0
    STA $02
    LDX #8
L0F06D3:
    LSR $00
    BCC L0F06DA
    CLC 
    ADC $01
L0F06DA:
    ROR 
    ROR $02
    DEX 
    BNE L0F06D3
    STA $01
    LDA $02
    STA $00
    PLA 
    TAY 
    PLA 
    TAX 
    RTS 

L0F06EB:
    TXA 
    PHA 
    LDA #0
    STA $51
    LDX #16
    ROL $4E
    ROL $4F
L0F06F7:
    ROL $51
    LDA $51
    CMP $50
    BCC L0F0703
    SBC $50
    STA $51
L0F0703:
    ROL $4E
    ROL $4F
    DEX 
    BNE L0F06F7
    PLA 
    TAX 
    RTS 

L0F070D:
    JSR $C715
L0F0710:
    LDA $26
    BEQ L0F0710
    RTS 

L0F0715:
    LDA #0
    STA $26
    RTS 

.db $A5
.db $27
.db $D0
.db $EF
.db $60
L0F071F:
    LDA $D2
    AND #231
L0F0723:
    STA $D2
    JSR $C715
L0F0728:
    LDA $26
    BEQ L0F0728
    RTS 

L0F072D:
    LDA $D2
    ORA #30
    BNE L0F0723
    LDA $D3
    STA $2000
    LDA $D2
    STA $2001
    RTS 

L0F073E:
    JSR $C71F
    JSR $C23D
    LDY #0
    STY $D0
    STY $D1
    LDA $D3
    AND #252
    STA $D3
    JMP $C288

.db $A5
.db $D2
.db $29
.db $E7
.db $20
.db $23
.db $C7
.db $A5
.db $D3
.db $29
.db $7F
.db $85
.db $D3
.db $8D
.db $00
.db $20
.db $60
.db $A5
.db $D3
.db $09
.db $80
.db $85
.db $D3
.db $8D
.db $00
.db $20
.db $A5
.db $D2
.db $09
.db $1E
.db $D0
.db $B0
L0F0773:
    LDA $D3
    AND #123
L0F0777:
    STA $2000
    STA $D3
    RTS 

L0F077D:
    LDA $2002
    AND #128
    BNE L0F077D
    LDA $D3
    ORA #128
    BNE L0F0777
.db $48
.db $20
.db $0D
.db $C7
.db $68
.db $38
.db $E9
.db $01
.db $D0
.db $F6
.db $60
L0F0795:
    TXA 
    PHA 
    TYA 
    PHA 
    LDX $03
    LDY $02
    STY $00
    LDA #32
    STA $01
    JSR $C6C9
    STX $03
    LDA $00
    CLC 
    ADC $03
    STA $04
    LDA $01
    ADC #32
    STA $05
    PLA 
    TAY 
    PLA 
    TAX 
    RTS 

L0F07BA:
    TYA 
    PHA 
    LDA $00
    STA $4E
    LDA $01
    STA $4F
    LDA #10
    STA $50
    LDY #4
L0F07CA:
    JSR $C6EB
    LDA $51
    ORA #96
    STA ($08),Y
    DEY 
    BPL L0F07CA
    LDY #0
L0F07D8:
    LDA ($08),Y
    CMP #96
    BNE L0F07E7
    LDA #255
    STA ($08),Y
    INY 
    CPY #4
    BNE L0F07D8
L0F07E7:
    PLA 
    TAY 
    RTS 

L0F07EA:
    TYA 
    PHA 
    LDA $00
    STA $4E
    LDA #0
    STA $4F
    DEC $01
    LDA #10
    STA $50
    LDY $01
L0F07FC:
    JSR $C6EB
    LDA $51
    ORA #96
    STA ($08),Y
    DEY 
    BPL L0F07FC
    LDY #0
L0F080A:
    LDA ($08),Y
    CMP #96
    BNE L0F0819
    LDA #255
    STA ($08),Y
    INY 
    CPY $01
    BNE L0F080A
L0F0819:
    PLA 
    TAY 
    RTS 

L0F081C:
    LDA $00
    CLC 
    ADC #32
    STA $00
    LDA $01
    ADC #0
    STA $01
    CMP #35
    BEQ L0F0831
    CMP #39
    BNE L0F0841
L0F0831:
    LDA $00
    CMP #192
    BCC L0F0841
    AND #31
    STA $00
    LDA $01
    AND #252
    STA $01
L0F0841:
    RTS 

L0F0842:
    LDA #16
    STA $02
    LDA #3
    STA $03
    STX $00
    STY $01
    LDY #0
    LDA ($02),Y
    AND #31
    STA $05
    LDA ($02),Y
    JSR $C399
    STA $04
    LDX $0780
L0F0860:
    LDA #0
    STA $08
    LDA $00
    AND #31
    STA $06
    LDA #32
    SEC 
    SBC $06
    STA $07
    LDA $05
    CMP $07
    BEQ L0F087D
    BCC L0F087D
    LDA $07
    INC $08
L0F087D:
    STA $06
    LDA $01
    JSR $C4A2
    LDA $00
    JSR $C4A2
    LDA $06
    JSR $C4A2
L0F088E:
    INY 
    LDA ($02),Y
    JSR $C4A2
    DEC $06
    BNE L0F088E
    LDA $08
    BEQ L0F08B9
    DEC $08
    LDA $01
    EOR #4
    JSR $C4A2
    LDA $00
    AND #224
    JSR $C4A2
    LDA $05
    SEC 
    SBC $07
    STA $06
    JSR $C4A2
    JMP $C88E

L0F08B9:
    STX $0780
    JSR $C81C
    DEC $04
    BNE L0F0860
    LDA #0
    STA $0781,X
    LDY #1
    STY $27
    RTS 

L0F08CD:
    LDA #0
    STA $02
    LDA #7
    STA $03
    STX $00
    STY $01
    LDY #0
    LDA ($02),Y
    AND #31
    STA $05
    LDA ($02),Y
    JSR $C399
    STA $04
    LDX $0780
L0F08EB:
    LDA #0
    STA $08
    LDA $00
    AND #7
    STA $06
    LDA #8
    SEC 
    SBC $06
    STA $07
    LDA $05
    CMP $07
    BEQ L0F0908
    BCC L0F0908
    LDA $07
    INC $08
L0F0908:
    STA $06
    LDA $01
    JSR $C4A2
    LDA $00
    JSR $C4A2
    LDA $06
    JSR $C4A2
L0F0919:
    INY 
    LDA ($02),Y
    JSR $C4A2
    DEC $06
    BNE L0F0919
    LDA $08
    BEQ L0F0944
    DEC $08
    LDA $01
    EOR #4
    JSR $C4A2
    LDA $00
    AND #248
    JSR $C4A2
    LDA $05
    SEC 
    SBC $07
    STA $06
    JSR $C4A2
    JMP $C919

L0F0944:
    STX $0780
    LDA #8
    CLC 
    ADC $00
    ORA #192
    STA $00
    DEC $04
    BNE L0F08EB
    LDA #0
    STA $0781,X
    LDY #1
    STY $27
    RTS 

.db $8A
.db $48
.db $A2
.db $02
.db $AD
.db $34
.db $74
.db $C9
.db $0E
.db $90
.db $04
.db $E9
.db $0D
.db $A2
.db $09
.db $A8
.db $8A
.db $20
.db $40
.db $CA
.db $88
.db $98
.db $0A
.db $AA
.db $BD
.db $00
.db $80
.db $85
.db $02
.db $BD
.db $01
.db $80
.db $85
.db $03
.db $18
.db $A9
.db $04
.db $65
.db $02
.db $85
.db $02
.db $90
.db $02
.db $E6
.db $03
.db $18
.db $A5
.db $02
.db $65
.db $00
.db $85
.db $02
.db $A5
.db $03
.db $65
.db $01
.db $85
.db $03
.db $A0
.db $00
.db $B1
.db $02
.db $A8
.db $A9
.db $0B
.db $8D
.db $00
.db $A0
.db $68
.db $AA
.db $98
.db $60
L0F09A6:
    LDA #0
    STA $4A
    LDA #9
    JMP $CA94

L0F09AF:
    PHA 
    TYA 
    EOR #1
    TAY 
    PLA 
    RTS 

L0F09B6:
    PHA 
    TXA 
    EOR #1
    TAX 
    PLA 
    RTS 

L0F09BD:
    TAY 
    DEY 
    TYA 
    ASL 
    TAY 
    LDA $BFC0
    STA $02
    LDA $BFC1
    STA $03
    LDA ($02),Y
    STA $00
    INY 
    LDA ($02),Y
    STA $01
    LDY #2
    LDA ($00),Y
    CLC 
    ADC #4
    STA $04
    LDA #0
    STA $05
    LDA #125
    STA $03
    LDA #125
    STA $02
    JMP $C209

L0F09ED:
    CLC 
    ADC $7A
    STA $7A
    BCC L0F09F6
    INC $7B
L0F09F6:
    RTS 

L0F09F7:
    LDY #0
    LDX #8
L0F09FB:
    LSR 
    BCC L0F09FF
    INY 
L0F09FF:
    DEX 
    BNE L0F09FB
    TYA 
    RTS 

.db $A9
.db $08
.db $85
.db $4A
.db $4C
.db $94
.db $CA
L0F0A0B:
    LDA #9
    STA $4A
    LDA #8
    JMP $CA94

.db $A9
.db $0A
.db $85
.db $4A
.db $A9
.db $08
.db $4C
.db $94
.db $CA
L0F0A1D:
    PHA 
    INC $743E
    BNE L0F0A26
.db $EE
.db $3F
.db $74
L0F0A26:
    LDA $743F
    CMP #3
    BCC L0F0A3E
.db $AD
.db $3E
.db $74
.db $C9
.db $E7
.db $90
.db $0A
.db $A9
.db $03
.db $8D
.db $3F
.db $74
.db $A9
.db $E7
.db $8D
.db $3E
.db $74
L0F0A3E:
    PLA 
    RTS 

L0F0A40:
    STA $2F
    STA $57
    STA $A000
    RTS 

L0F0A48:
    STA $5F
    ORA $58
    STA $B000
    RTS 

L0F0A50:
    STA $60
    ORA $58
    STA $C000
    RTS 

L0F0A58:
    STA $61
    ORA $58
    STA $D000
    RTS 

L0F0A60:
    STA $62
    ORA $58
    STA $E000
    RTS 

.db $A9
.db $01
.db $85
.db $CE
.db $8D
.db $00
.db $F0
.db $60
L0F0A70:
    LDA #0
    STA $CE
    STA $F000
    RTS 

.db $A9
.db $10
.db $D0
.db $02
.db $A9
.db $00
.db $85
.db $58
.db $A5
.db $5F
.db $20
.db $48
.db $CA
.db $A5
.db $60
.db $20
.db $50
.db $CA
.db $A5
.db $61
.db $20
.db $58
.db $CA
.db $A5
.db $62
.db $4C
.db $60
.db $CA
L0F0A94:
    TAX 
    LDA $2F
    PHA 
    TXA 
    JSR $CA40
    LDA #202
    PHA 
    LDA #178
    PHA 
    LDA $4A
    ASL 
    TAX 
    LDA $BFA0,X
    STA $4B
    LDA $BFA1,X
    STA $4C
    JMP ($004B)

L0F0AB3:
    PLA 
    JMP $CA40

L0F0AB7:
    PHA 
    TYA 
    PHA 
    TXA 
    PHA 
    LDA $42
    ASL 
    TAY 
    LDA $BFD0,Y
    STA $46
    LDA $BFD1,Y
    STA $47
    LDA $3C
    ASL 
    TAY 
    LDA ($46),Y
    STA $44
    INY 
    LDA ($46),Y
    STA $45
    LDX $3D
    LDY #0
    LDA ($44),Y
    STA $43
L0F0ADF:
    INY 
    INX 
    LDA ($44),Y
    CLC 
    ADC $3A
    STA $0200,X
    INY 
    INX 
    LDA ($44),Y
    STA $0200,X
    INY 
    INX 
    LDA ($44),Y
    ORA $3E
    STA $49
    LDA $40
    EOR #255
    AND $49
    ORA $3F
    STY $48
    LDY $41
    BEQ L0F0B12
    TAY 
    AND #64
    EOR #64
    STA $49
    TYA 
    AND #191
    ORA $49
L0F0B12:
    STA $0200,X
    LDY $48
    INY 
    INX 
    LDA ($44),Y
    PHA 
    LDA $41
    BEQ L0F0B29
    PLA 
    SEC 
    EOR #255
    ADC #8
    JMP $CB2A

L0F0B29:
    PLA 
    CLC 
    ADC $3B
    STA $0200,X
    DEC $43
    BNE L0F0ADF
    STX $3D
    LDA #0
    STA $3F
    STA $40
    STA $41
    PLA 
    TAX 
    PLA 
    TAY 
    PLA 
    RTS 

L0F0B44:
    TXA 
    PHA 
    LDA $48
    BEQ L0F0B7A
    LDA $2F
    PHA 
    LDA #10
    JSR $CA40
    LDA $44
    SEC 
    SBC $6A
    BCC L0F0B7A
    CMP #16
    BCS L0F0B7A
    STA $3B
    LDA $45
    SEC 
    SBC $69
    BCC L0F0B7A
    CMP #15
    BCS L0F0B7A
    STA $3A
    LDA $46
    BEQ L0F0B81
    CMP #2
    BNE L0F0B7A
    LDA $36
    AND #16
    BNE L0F0B81
L0F0B7A:
    PLA 
    JSR $CA40
    PLA 
    TAX 
    RTS 

L0F0B81:
    LDA $D0
    AND #15
    STA $08
    LDA $D1
    AND #15
    STA $09
    LDA $49
    ROR 
    ROR 
    BCS L0F0B9A
    LDX $47
    LDY $CC53,X
    STY $47
L0F0B9A:
    ROL 
    BCS L0F0BA7
    LDA $47
    STA $05
    LDA #0
    STA $04
    BEQ L0F0BAF
L0F0BA7:
    LDA $47
    STA $04
    LDA #0
    STA $05
L0F0BAF:
    LDA $8E
    BEQ L0F0BED
    LDA $8D
    LSR 
    BCS L0F0BDC
    LSR 
    BCS L0F0BCD
    LSR 
    BCS L0F0BE6
    LDA #16
    SEC 
    SBC $08
    AND #15
    CLC 
    ADC $04
    STA $04
    JMP $CBED

L0F0BCD:
    LDA #16
    SEC 
    SBC $09
    AND #15
    CLC 
    ADC $05
    STA $05
    JMP $CBED

L0F0BDC:
    LDA $05
    SEC 
    SBC $09
    STA $05
    JMP $CBED

L0F0BE6:
    LDA $04
    SEC 
    SBC $08
    STA $04
L0F0BED:
    LDA $3B
    BEQ L0F0BFD
    CMP #15
    BNE L0F0C01
    LDA $05
    BMI L0F0C01
    BEQ L0F0C01
    BNE L0F0C4C
L0F0BFD:
    LDA $05
    BMI L0F0C4C
L0F0C01:
    LDA $3B
    ASL 
    ASL 
    ASL 
    ASL 
    CLC 
    ADC $05
    STA $3B
    LDA $3A
    ASL 
    ASL 
    ASL 
    ASL 
    CLC 
    ADC $04
    SEC 
    SBC $43
    STA $3A
    LDA #0
    STA $3E
    STA $41
    STA $3F
    STA $40
    LDX $48
    DEX 
    STX $3C
    LDA $49
    JSR $C39A
    STA $42
    CMP #4
    BNE L0F0C38
    LDA #1
    STA $41
L0F0C38:
    DEC $42
    ASL $42
    LDA $7C34
    BNE L0F0C49
    LDA $36
    AND #16
    BEQ L0F0C49
    INC $42
L0F0C49:
    JSR $CAB7
L0F0C4C:
    PLA 
    JSR $CA40
    PLA 
    TAX 
    RTS 

; start of data
.db $00
.db $FF
.db $FE
.db $FD
.db $FC
.db $FB
.db $FA
.db $F9
.db $F8
.db $F7
.db $F6
.db $F5
.db $F4
.db $F3
.db $F2
.db $F1
; end of data
.db $F0
.db $EF
.db $EE
.db $ED
.db $EC
L0F0C68:
    LDA $00
    SEC 
    SBC #32
    STA $00
    BCS L0F0C73
    DEC $01
L0F0C73:
    LDA $01
    CMP #32
    BCC L0F0C87
    CMP #36
    BCS L0F0C94
    CMP #35
    BCC L0F0C94
    LDA $00
    CMP #192
    BCC L0F0C94
L0F0C87:
    CLC 
    LDA $00
    ADC #192
    STA $00
    LDA $01
    ADC #3
    STA $01
L0F0C94:
    RTS 

; start of data
.db $01
.db $15
.db $15
.db $11
; end of data
.db $15
.db $15
.db $15
.db $15
.db $14
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $15
; start of data
.db $15
; end of data
.db $15
; start of data
.db $01
.db $14
.db $15
.db $15
; end of data
.db $15
; start of data
.db $15
.db $11
.db $15
.db $15
.db $15
.db $15
.db $15
.db $15
.db $15
.db $15
.db $15
; end of data
.db $11
; start of data
.db $12
.db $15
.db $15
.db $11
.db $11
.db $15
.db $11
.db $13
.db $13
.db $13
; end of data
.db $15
; start of data
.db $15
.db $13
; end of data
.db $11
.db $11
; start of data
.db $11
; end of data
.db $11
; start of data
.db $11
; end of data
.db $11
.db $11
; start of data
.db $11
; end of data
.db $11
.db $11
; start of data
.db $11
.db $16
.db $16
.db $13
; end of data
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
; start of data
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $14
.db $14
.db $14
; end of data
.db $14
L0F0CE7:
    LDA $57
    STA $08
    LDA #2
    JSR $CA40
    LDA $7434
    ASL 
    TAY 
    LDA $8000,Y
    STA $6E
    LDA $8001,Y
    STA $6F
    JSR $CD44
L0F0D02:
    LDY $18
    LDA ($6E),Y
    TAX 
    CMP #255
    BEQ L0F0D3F
    CMP #46
    BCC L0F0D13
    LDX #1
    BNE L0F0D18
L0F0D13:
    INY 
    BNE L0F0D18
    INC $6F
L0F0D18:
    LDA ($6E),Y
    STA $09
    INY 
    BNE L0F0D21
    INC $6F
L0F0D21:
    STY $18
    LDY $19
L0F0D25:
    LDA $09
    STA ($70),Y
    INY 
    CPY $7441
    BEQ L0F0D38
    BCC L0F0D38
    LDA #32
    JSR $CE20
    LDY #0
L0F0D38:
    DEX 
    BNE L0F0D25
    STY $19
    BEQ L0F0D02
L0F0D3F:
    LDA $08
    JMP $CA40

L0F0D44:
    LDA #143
    STA $70
    LDA #110
    STA $71
    LDY #0
    LDA ($6E),Y
    STA $7440
    INY 
    LDA ($6E),Y
    STA $7441
    INY 
    LDA ($6E),Y
    STA $69
    INY 
    LDA ($6E),Y
    STA $6A
    INY 
    JSR $CE14
    LDY #0
    STY $18
    STY $19
    RTS 

L0F0D6E:
    LDA $57
    STA $08
    LDA $0A
    CMP #56
    BCC L0F0D9D
    LDA #2
    JSR $CA40
    LDA $0A
    SEC 
    SBC #56
    STA $0A
    LDA $BFAE
    STA $10
    LDA $BFAF
    STA $11
    LDA $0A
    ASL 
    TAY 
    LDA ($10),Y
    STA $6E
    INY 
    LDA ($10),Y
    STA $6F
    BNE L0F0DB0
L0F0D9D:
    LDA #12
    JSR $CA40
    LDA $0A
    ASL 
    TAY 
    LDA $8000,Y
    STA $6E
    LDA $8001,Y
    STA $6F
L0F0DB0:
    JSR $CD44
    STY $10
    LDY $18
    LDA ($6E),Y
    CMP #255
    BEQ L0F0D3F
    CMP #254
    BEQ L0F0E04
    LDA $10
    BEQ L0F0DD5
    LDA ($6E),Y
    STA $0F
    INY 
    BNE L0F0DCE
    INC $6F
L0F0DCE:
    LDA ($6E),Y
    STA $0E
    JMP $CDDD

L0F0DD5:
    LDA ($6E),Y
    STA $0E
    LDA #1
    STA $0F
    INY 
    BNE L0F0DE2
    INC $6F
L0F0DE2:
    STY $18
    LDY $19
    LDA $0E
L0F0DE8:
    STA ($70),Y
    INY 
    CPY $7441
    BEQ L0F0DFB
    BCC L0F0DFB
    LDA #32
    JSR $CE20
    LDA $0E
    LDY #0
L0F0DFB:
    DEC $0F
    BNE L0F0DE8
    STY $19
    JMP $CDB5

L0F0E04:
    LDA $10
    EOR #1
    STA $10
    INY 
    BNE L0F0E0F
    INC $6F
L0F0E0F:
    STY $18
    JMP $CDB5

L0F0E14:
    TYA 
    CLC 
    ADC $6E
    STA $6E
    BCC L0F0E1E
    INC $6F
L0F0E1E:
    RTS 

L0F0E1F:
    TYA 
    CLC 
    ADC $70
    STA $70
    BCC L0F0E29
    INC $71
L0F0E29:
    RTS 

.db $84
.db $0A
.db $38
.db $A5
.db $6E
.db $E5
.db $0A
.db $85
.db $6E
.db $B0
.db $02
.db $C6
.db $6F
.db $60
L0F0E38:
    JSR $CEBF
    LDA #0
    STA $18
    STA $0301
    JSR $CE63
    JSR $CE76
    LDA $05
    ORA #4
    STA $05
    JSR $CE63
    JSR $CE76
    LDA $05
    AND #251
    STA $05
    LDX $0301
    LDA #0
    STA $0302,X
    RTS 

L0F0E63:
    LDX $0301
    LDA $05
    STA $0302,X
    INX 
    LDA $04
    STA $0302,X
    INX 
    STX $0301
    RTS 

L0F0E76:
    LDA #16
    STA $17
L0F0E7A:
    LDY $18
    LDA ($70),Y
    JSR $CE88
    INC $18
    DEC $17
    BNE L0F0E7A
    RTS 

L0F0E88:
    JSR $CEA3
    LDX $0301
    LDA $19
    ASL 
    TAY 
    LDA ($02),Y
    STA $0302,X
    INY 
    INX 
    LDA ($02),Y
    STA $0302,X
    INX 
    STX $0301
    RTS 

L0F0EA3:
    STA $02
    LDA #0
    STA $03
    ASL $02
    ROL $03
    ASL $02
    ROL $03
    CLC 
    LDA #0
    ADC $02
    STA $02
    LDA #128
    ADC $03
    STA $03
    RTS 

L0F0EBF:
    ASL 
    TAY 
    LDA $EE5E,Y
    STA $70
    LDA $EE5F,Y
    STA $71
    RTS 

L0F0ECC:
    LDA $8F
    BNE L0F0ED5
    LDA $90
    BNE L0F0EED
    RTS 

L0F0ED5:
    LDA #2
    STA $22
    LDA #3
    STA $23
    DEC $8F
    LDY $8F
    LDA $CEEB,Y
    TAY 
    LDX #32
    JMP $CF06

.db $60
; start of data
.db $22
.db $00
; end of data
L0F0EED:
    LDA #2
    STA $22
    LDA #3
    STA $23
    LDY #0
    LDX #8
    JSR $CF06
    LDX #8
    JSR $CF06
    LDA #0
    STA $90
    RTS 

L0F0F06:
    LDA $2002
    LDA ($22),Y
    STA $2006
    INY 
    LDA ($22),Y
    STA $2006
    INY 
    LDA $D3
    AND #251
    STA $2000
    STA $D3
L0F0F1E:
    LDA ($22),Y
    STA $2007
    INY 
    DEX 
    BNE L0F0F1E
    JMP $C36A

.db $20
.db $BF
.db $CE
.db $A9
.db $00
.db $8D
.db $01
.db $03
.db $85
.db $18
.db $A9
.db $20
.db $85
.db $19
.db $20
.db $77
.db $CF
.db $20
.db $59
.db $CF
.db $A5
.db $05
.db $09
.db $04
.db $85
.db $05
.db $20
.db $77
.db $CF
.db $20
.db $59
.db $CF
.db $A5
.db $05
.db $29
.db $FB
.db $85
.db $05
.db $AC
.db $01
.db $03
.db $A9
.db $00
.db $99
.db $02
.db $03
.db $60
.db $A2
.db $08
.db $20
.db $8A
.db $CF
.db $20
.db $8A
.db $CF
.db $20
.db $92
.db $CF
.db $20
.db $92
.db $CF
.db $AC
.db $01
.db $03
.db $A5
.db $02
.db $99
.db $02
.db $03
.db $C8
.db $8C
.db $01
.db $03
.db $CA
.db $D0
.db $E5
.db $60
.db $AC
.db $01
.db $03
.db $A5
.db $05
.db $99
.db $02
.db $03
.db $C8
.db $A5
.db $04
.db $99
.db $02
.db $03
.db $C8
.db $8C
.db $01
.db $03
.db $60
.db $A4
.db $18
.db $20
.db $67
.db $D0
.db $E6
.db $18
.db $60
.db $A4
.db $19
.db $20
.db $67
.db $D0
.db $E6
.db $19
.db $60
L0F0F9A:
    LDA $0300
    JSR $CEBF
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    CLC 
    ADC #14
    JSR $CEBF
    JMP $D002

L0F0FB4:
    LDA $0300
    CLC 
    ADC #14
    JSR $CEBF
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    CLC 
    ADC #13
    JSR $CEBF
    JMP $D002

L0F0FD1:
    LDA $0300
    CLC 
    ADC #1
    JSR $CEBF
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    JSR $CEBF
    JMP $D002

L0F0FEB:
    LDA $0300
    JSR $CEBF
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    SEC 
    SBC #1
    JSR $CEBF
    LDY #0
    STY $0301
    STY $18
    JSR $D054
    JSR $D022
    LDA $05
    ORA #4
    STA $05
    JSR $D054
    JSR $D022
    LDA $05
    AND #251
    STA $05
    RTS 

L0F1022:
    LDX #8
L0F1024:
    LDY $18
    JSR $D067
    LDY $18
    INY 
    JSR $D067
    LDY $18
    LDA ($06),Y
    JSR $D069
    LDY $18
    INY 
    LDA ($06),Y
    JSR $D069
    LDY $18
    INY 
    INY 
    STY $18
    LDY $0301
    LDA $02
    STA $0302,Y
    INY 
    STY $0301
    DEX 
    BNE L0F1024
    RTS 

L0F1054:
    LDY $0301
    LDA $05
    STA $0302,Y
    INY 
    LDA $04
    STA $0302,Y
    INY 
    STY $0301
    RTS 

L0F1067:
    LDA ($70),Y
    TAY 
    LDA $8400,Y
    AND #3
    ROR 
    ROR $02
    ROR 
    ROR $02
    RTS 

L0F1076:
    LDA $8E
    BNE L0F10B7
    LDA $8D
    AND #1
    BEQ L0F108C
    LDA $6A
    CLC 
    ADC #15
    CMP $7441
    BCC L0F10B9
    BCS L0F10B7
L0F108C:
    LDA $8D
    AND #2
    BEQ L0F1098
    LDA $6A
    BNE L0F10B9
    BEQ L0F10B7
L0F1098:
    LDA $8D
    AND #4
    BEQ L0F10AA
    LDA $69
    CLC 
    ADC #14
    CMP $7440
    BCC L0F10B9
    BCS L0F10B7
L0F10AA:
    LDA $8D
    AND #8
    BEQ L0F10B7
    LDA $69
    CMP $05F4
    BNE L0F10B9
L0F10B7:
    SEC 
    RTS 

L0F10B9:
    CLC 
    RTS 

L0F10BB:
    JSR $D076
    BCS L0F10C4
    LDA #16
    STA $8E
L0F10C4:
    RTS 

L0F10C5:
    LDA $8E
    BEQ L0F10C4
    PLA 
    PLA 
    LDA $8D
    AND #8
    BEQ L0F1116
    LDX $69
    DEX 
    STX $0300
    LDX $D0
    LDY $8E
    INC $0503
    INC $0503
    DEX 
    DEY 
    DEX 
    DEY 
    BNE L0F10E9
    DEC $69
L0F10E9:
    STX $D0
    STY $8E
    LDA $D0
    CMP #240
    BCC L0F10F7
    AND #239
    STA $D0
L0F10F7:
    CPY #12
    BEQ L0F1105
    CPY #8
    BEQ L0F110C
    CPY #4
    BEQ L0F110F
    BNE L0F10C4
L0F1105:
    LDA #1
    STA $19
    JMP $D1B3

L0F110C:
    JMP $D1D9

L0F110F:
    LDA #0
    STA $19
    JMP $D1B3

L0F1116:
    LDA $8D
    AND #4
    BEQ L0F1163
    LDA $69
    CLC 
    ADC #15
    STA $0300
    LDX $D0
    LDY $8E
    DEC $0503
    DEC $0503
    INX 
    DEY 
    INX 
    DEY 
    STX $D0
    STY $8E
    BNE L0F1144
    INC $69
    LDA $D0
    CMP #240
    BCC L0F1144
    LDA #0
    STA $D0
L0F1144:
    CPY #12
    BEQ L0F1152
    CPY #8
    BEQ L0F1159
    CPY #4
    BEQ L0F115C
    BNE L0F11B2
L0F1152:
    LDA #0
    STA $19
    JMP $D1B3

L0F1159:
    JMP $D203

L0F115C:
    LDA #1
    STA $19
    JMP $D1B3

L0F1163:
    LDA $8D
    AND #2
    BEQ L0F118C
    LDX $D1
    LDY $8E
    INC $0502
    INC $0502
    DEX 
    DEY 
    DEX 
    DEY 
    BNE L0F117B
    DEC $6A
L0F117B:
    CPX #254
    BCC L0F1185
    LDA $D3
    AND #254
    STA $D3
L0F1185:
    STX $D1
    STY $8E
    JMP $D1B2

L0F118C:
    LDA $8D
    AND #1
    BEQ L0F11B2
    LDX $D1
    LDY $8E
    DEC $0502
    DEC $0502
    INX 
    DEY 
    INX 
    DEY 
    BNE L0F11A4
    INC $6A
L0F11A4:
    STY $8E
    STX $D1
    CPX #0
    BNE L0F11B2
    LDA $D3
    ORA #1
    STA $D3
L0F11B2:
    RTS 

L0F11B3:
    JSR $D1C0
    LDA #2
    STA $8F
    LDA $0300
    JMP $CE38

L0F11C0:
    LDA $D0
    LSR 
    LSR 
    LSR 
    STA $00
    LDA #32
    STA $01
    JSR $C6C9
    LDA $00
    STA $04
    LDA $01
    ORA #32
    STA $05
    RTS 

L0F11D9:
    JSR $D1F2
    LDA #2
    STA $90
    LDX $69
    DEX 
    STX $0300
    LDA $D0
    AND #16
    BNE L0F11EF
    JMP $CFD1

L0F11EF:
    JMP $CF9A

L0F11F2:
    LDA $D0
    JSR $C399
    ASL 
    ASL 
    ASL 
    ORA #192
    STA $04
    LDA #35
    STA $05
    RTS 

L0F1203:
    JSR $D1F2
    LDA #2
    STA $90
    LDX $69
    INX 
    STX $0300
    LDA $D0
    AND #16
    BNE L0F1219
    JMP $CF9A

L0F1219:
    JMP $CFB4

L0F121C:
    LDA $69
    STA $0300
    LDA #0
    STA $19
    LDA #15
    STA $16
    JSR $D1C0
L0F122C:
    JSR $D252
    LDA $04
    STA $00
    LDA $05
    STA $01
    JSR $C81C
    LDA $00
    STA $04
    LDA $01
    STA $05
    LDA $19
    EOR #1
    STA $19
    BNE L0F122C
    INC $0300
    DEC $16
    BNE L0F122C
    RTS 

L0F1252:
    LDA $0300
    JSR $CE38
    LDY #2
    STY $8F
    JSR $CED5
    JMP $CED5

L0F1262:
    LDA $69
    STA $0300
    JSR $D1F2
    LDA #8
    STA $81
L0F126E:
    LDA $24
    AND #16
    BEQ L0F127A
    JSR $D2AA
    JMP $D27D

L0F127A:
    JSR $D2A0
    LDA #8
    CLC 
    ADC $04
    ORA #192
    STA $04
    CLC 
    LDA $0300
    ADC #2
    STA $0300
    LDA $24
    CLC 
    ADC #32
    STA $24
    BCC L0F129B
    DEC $0300
L0F129B:
    DEC $81
    BNE L0F126E
    RTS 

L0F12A0:
    JSR $CFD1
    LDA #1
    STA $90
    JMP $CEED

L0F12AA:
    LDA $81
    CMP #8
    BNE L0F12B5
    JSR $CF9A
    BNE L0F12B8
L0F12B5:
    JSR $CFEB
L0F12B8:
    LDY #2
    STY $90
    JMP $CEED

L0F12BF:
    LDA $2F
    PHA 
    LDA $05B7
    JSR $CA40
    LDA $69
    STA $0300
    LDA #8
    STA $81
    LDA $D0
    JSR $C399
    STA $0595
L0F12D9:
    LDA #83
    STA $04
    LDA #124
    STA $05
    LDA $0595
    ASL 
    ASL 
    ASL 
    JSR $C38F
    JSR $D30F
    CLC 
    LDA $0300
    ADC #2
    STA $0300
    LDX $0595
    INX 
    CPX #8
    BCC L0F1303
    DEC $0300
    LDX #0
L0F1303:
    STX $0595
    DEC $81
    BNE L0F12D9
    PLA 
    JSR $CA40
    RTS 

L0F130F:
    LDA $D0
    AND #16
    BEQ L0F1339
    LDA $0300
    JSR $CEBF
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $81
    CMP #8
    BNE L0F1331
    LDA $0300
    CLC 
    ADC #14
    BPL L0F134D
L0F1331:
    LDA $0300
    SEC 
    SBC #1
    BPL L0F134D
L0F1339:
    LDA $0300
    CLC 
    ADC #1
    JSR $CEBF
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
L0F134D:
    JSR $CEBF
    LDY #0
    STY $0301
    STY $18
    JSR $D363
    LDY #64
    STY $0301
    JSR $D363
    RTS 

L0F1363:
    LDX #8
L0F1365:
    LDY $18
    JSR $D067
    LDY $18
    INY 
    JSR $D067
    LDY $18
    LDA ($06),Y
    JSR $D069
    LDY $18
    INY 
    LDA ($06),Y
    JSR $D069
    LDY $18
    INY 
    INY 
    STY $18
    LDY $0301
    LDA $02
    STA ($04),Y
    INY 
    STY $0301
    DEX 
    BNE L0F1365
    RTS 

L0F1394:
    LDA #0
    STA $DD
    BEQ L0F139E
    LDA #1
    STA $DD
L0F139E:
    LDA $D3
    AND #128
    BEQ L0F13AA
    JSR $C73E
    JSR $C773
L0F13AA:
    LDA $69
L0F13AC:
    CMP #15
    BCC L0F13B5
    SEC 
    SBC #15
    BNE L0F13AC
L0F13B5:
    JSR $C3A0
    STA $D0
    STA $24
    JSR $D21C
    JSR $D262
    LDA #26
    JSR $CA48
    JSR $CA50
    LDA #24
    JSR $CA58
    JSR $CA60
    JSR $C77D
    LDA $DD
    BNE L0F13DD
    LDA #128
    BNE L0F13E3
L0F13DD:
    LDX $7434
    LDA $CC95,X
L0F13E3:
    STA $28
    JSR $C70D
    LDA $6A
    CMP #16
    BCC L0F13FA
    LDA $D3
    ORA #1
    STA $D3
    LDA #16
    STA $6A
    LDA #0
L0F13FA:
    JSR $C3A0
    STA $D1
    LDA $D2
    AND #30
    STA $D2
    LDA #1
    STA $9D
    JMP $C72D

L0F140C:
    LDA $8E
    BNE L0F1428
    LDA $1E
    AND #8
    BNE L0F1429
    LDA $1E
    AND #4
    BNE L0F1447
    LDA $1E
    AND #2
    BNE L0F1463
    LDA $1E
    AND #1
    BNE L0F147D
L0F1428:
    RTS 

L0F1429:
    STA $8D
    LDA $94
    SEC 
    SBC $69
    CMP #7
    BCS L0F1437
    JSR $D0BB
L0F1437:
    LDA $05F4
    CLC 
    ADC #1
    CMP $94
    BEQ L0F1446
    DEC $94
    JMP $F56C

L0F1446:
    RTS 

L0F1447:
    STA $8D
    LDA $94
    SEC 
    SBC $69
    CMP #9
    BCC L0F1455
    JSR $D0BB
L0F1455:
    LDY $94
    INY 
    CPY $7440
    BCS L0F1462
    INC $94
    JMP $F56C

L0F1462:
    RTS 

L0F1463:
    STA $8D
    LDA $95
    SEC 
    SBC $6A
    CMP #7
    BCS L0F1471
    JSR $D0BB
L0F1471:
    LDA $95
    CMP #1
    BEQ L0F147C
    DEC $95
    JMP $F56C

L0F147C:
    RTS 

L0F147D:
    STA $8D
    LDA $95
    SEC 
    SBC $6A
    CMP #9
    BCC L0F148B
    JSR $D0BB
L0F148B:
    LDY $95
    INY 
    CPY $7441
    BCS L0F1498
    INC $95
    JMP $F56C

L0F1498:
    RTS 

L0F1499:
    LDA #0
    STA $42
    LDA $D0
    AND #15
    STA $3A
    LDY $94
    LDA $8E
    BEQ L0F14B7
    LDA $8D
    AND #8
    BEQ L0F14B0
    INY 
L0F14B0:
    LDA $8D
    AND #4
    BEQ L0F14B7
    DEY 
L0F14B7:
    TYA 
    SEC 
    SBC $69
    SEC 
    ROL 
    ROL 
    ROL 
    ROL 
    SEC 
    SBC $3A
    STA $3A
    LDA $D1
    AND #15
    STA $3B
    LDX $95
    LDA $8E
    BEQ L0F14DF
    LDA $8D
    AND #2
    BEQ L0F14D8
    INX 
L0F14D8:
    LDA $8D
    AND #1
    BEQ L0F14DF
    DEX 
L0F14DF:
    TXA 
    SEC 
    SBC $6A
    SEC 
    ROL 
    ROL 
    ROL 
    ROL 
    SEC 
    SBC $3B
    STA $3B
    LDA $92
    BEQ L0F14FB
    LDA #8
    STA $0587
    LDA $A0
    JMP $E80F

L0F14FB:
    RTS 

L0F14FC:
    DEC $91
    BNE L0F150D
    LDY $92
    LDA $D50E,Y
    STA $91
    LDA $92
    EOR #1
    STA $92
L0F150D:
    RTS 

; start of data
.db $10
.db $08
; end of data
L0F1510:
    LDA $2F
    PHA 
    LDA $05B7
    JSR $CA40
    LDY #4
    LDA ($74),Y
    STA $76
    INY 
    LDA ($74),Y
    STA $77
    LDA $0591
    LSR 
    STA $0595
    LDA $76
    JSR $C39A
    CLC 
    ADC $69
    CLC 
    ADC $0595
    SEC 
    SBC #1
    STA $0300
    LDA #17
    STA $00
    LDA #3
    STA $01
L0F1545:
    LDA #2
    STA $19
    JSR $D55F
    LDA #0
    STA $19
    JSR $D55F
    DEC $0300
    DEC $0595
    BNE L0F1545
    PLA 
    JMP $CA40

L0F155F:
    LDA $0590
    LSR 
    STA $17
    LDA $77
    JSR $C39A
    CLC 
    ADC $6A
    STA $18
    LDA $0300
    JSR $CEBF
L0F1575:
    LDY $18
    LDA ($70),Y
    JSR $CEA3
    LDY $19
    LDA ($02),Y
    LDY #0
    STA ($00),Y
    LDY $19
    INY 
    LDA ($02),Y
    LDY #1
    STA ($00),Y
    INY 
    JSR $C378
    INC $18
    DEC $17
    BNE L0F1575
    RTS 

L0F1598:
    JSR $D604
    JSR $D740
    LDY #15
    LDA ($7A),Y
    LDY #0
    STA ($00),Y
    JSR $D604
    LDY #15
    LDA ($7A),Y
    JSR $D611
    JSR $D604
    LDY #15
    LDA ($7A),Y
    JMP $D67F

L0F15BA:
    JSR $D758
    JSR $D604
    JSR $D777
    LDY #0
    STA ($00),Y
    JSR $D611
    JSR $D604
    JSR $D777
    JMP $D67F

L0F15D3:
    JSR $D758
    JSR $D604
    LDY #18
    LDA ($7A),Y
    BEQ L0F15E5
    JSR $D771
    JMP $D5E8

L0F15E5:
    JSR $D777
    LDY #0
    STA ($00),Y
    JSR $D611
    JSR $D604
    LDY #18
    LDA ($7A),Y
    BEQ L0F15FE
    JSR $D771
    JMP $D601

L0F15FE:
    JSR $D777
    JMP $D67F

L0F1604:
    LDA $0501
    STA $04
    LDA $0500
    STA $05
    RTS 

L0F160F:
    LDA $0B
    LDX #0
    STX $0301
    STX $19
    PHA 
    JSR $CE88
    INC $19
    PLA 
    JSR $CE88
    LDA $04
    SEC 
    SBC $69
    BCC L0F167C
    CMP #15
    BCS L0F167C
    CLC 
    ROL 
    ROL 
    ROL 
    ROL 
    STA $00
    LDA #0
    STA $0B
    LDA $05
    SEC 
    SBC $6A
    BCC L0F1643
    CMP #16
    BCC L0F1647
L0F1643:
    LDX #1
    STX $0B
L0F1647:
    CLC 
    ROL 
    ROL 
    ROL 
    ROL 
    STA $01
    JSR $C517
    LDA $04
    STA $00
    LDA $05
    LDX $0B
    BEQ L0F1667
    AND #251
    STA $0B
    LDA $05
    AND #4
    EOR #4
    ORA $0B
L0F1667:
    STA $01
    LDA #1
    STA $02
    LDA #3
    STA $03
    LDA #34
    STA $0301
    JSR $C45F
    JMP $C70D

L0F167C:
    RTS 

L0F167D:
    LDA $0B
    TAY 
    LDA $8400,Y
    AND #3
    STA $059B
    LDA $04
    SEC 
    SBC $69
    BCC L0F167C
    CMP #15
    BCS L0F167C
    JSR $C3A0
    STA $00
    LDA #0
    STA $0B
    LDA $05
    SEC 
    SBC $6A
    BCC L0F16A7
    CMP #16
    BCC L0F16AB
L0F16A7:
    LDX #1
    STX $0B
L0F16AB:
    JSR $C3A0
    STA $01
    JSR $C517
    LDA $0B
    BEQ L0F16BD
    LDA $05
    EOR #4
    STA $05
L0F16BD:
    JSR $C407
    LDA $78
    STA $0598
    LDA $79
    STA $0599
    LDX #0
    BIT $04
    BVC L0F16D2
    LDX #2
L0F16D2:
    LDA $04
    AND #2
    BEQ L0F16D9
    INX 
L0F16D9:
    LDA $C403,X
    STA $059A
    TXA 
    ASL 
    TAX 
    LDA $059B
L0F16E5:
    DEX 
    BMI L0F16EB
    ASL 
    BCC L0F16E5
L0F16EB:
    STA $059B
    JSR $D2BF
    LDA $0598
    AND #63
    STA $04
    LDA $0599
    AND #4
    BNE L0F1707
    LDA #124
    STA $05
    LDA #83
    BNE L0F170D
L0F1707:
    LDA #124
    STA $05
    LDA #147
L0F170D:
    JSR $C38F
    LDX $0780
    LDA $0599
    JSR $C4A2
    LDA $0598
    JSR $C4A2
    LDA #1
    JSR $C4A2
    LDY #0
    LDA ($04),Y
    AND $059A
    ORA $059B
    JSR $C4A2
    LDA #0
    STA $0781,X
    STX $0780
    LDA #1
    STA $27
    JMP $C70D

L0F1740:
    LDA $04
    ASL 
    TAY 
    LDA $EE5E,Y
    STA $00
    LDA $EE5F,Y
    STA $01
    LDA $05
    JSR $C379
    LDY #0
    LDA ($00),Y
    RTS 

L0F1758:
    JSR $D604
    JSR $D740
    LDY #15
    STA ($7A),Y
    LDA $0501
    LDY #16
    STA ($7A),Y
    LDA $0500
    LDY #17
    STA ($7A),Y
    RTS 

L0F1771:
    LDA #112
    STA $0B
    BNE L0F177B
    LDA #0
    STA $0B
L0F177B:
    LDY #1
    LDA ($7A),Y
    ASL 
    PHA 
    LDY #0
    LDA ($7A),Y
    ROL 
    PLA 
    ADC $0B
    RTS 

L0F178A:
    LDA #0
    STA $1A
    STA $1C
    STA $1E
    LDA $00
    CMP $02
    BEQ L0F17A2
    BCC L0F179E
    LDA #8
    BNE L0F17B0
L0F179E:
    LDA #4
    BNE L0F17B0
L0F17A2:
    LDA $01
    CMP $03
    BEQ L0F17BF
    BCC L0F17AE
    LDA #2
    BNE L0F17B0
L0F17AE:
    LDA #1
L0F17B0:
    STA $1C
    TAX 
    LDA $36
    AND #1
    BEQ L0F17BA
    TXA 
L0F17BA:
    STA $1E
    CLC 
    BCC L0F17C0
L0F17BF:
    SEC 
L0F17C0:
    RTS 

L0F17C1:
    LDY #12
    CMP #128
    BCC L0F17CB
.db $E9
.db $80
.db $A0
.db $0C
L0F17CB:
    STY $01
    STA $00
    LDA $01
    JSR $CA40
    LDY $00
    TYA 
    ASL 
    TAY 
    LDA $8000,Y
    STA $6E
    LDA $8001,Y
    STA $6F
    LDA $04
    JSR $CEBF
    LDY $05
    JSR $CE1F
    LDY #0
    LDA ($6E),Y
    STA $0A
    STA $81
    INC $81
    INY 
    LDA ($6E),Y
    STA $0B
    INY 
    JSR $CE14
L0F1800:
    LDY #0
L0F1802:
    LDA ($6E),Y
    STA ($70),Y
    INY 
    CPY $0B
    BCC L0F1802
    BEQ L0F1802
    JSR $CE14
    LDY #32
    JSR $CE1F
    DEC $81
    BNE L0F1800
    LDA #12
    JMP $CA40

L0F181E:
    LDA $05E4
    CMP #255
    BNE L0F182C
L0F1825:
    LDA #0
    STA $05E4
    BEQ L0F1830
L0F182C:
    LDA $34
    BNE L0F185B
L0F1830:
    LDA $05E5
    ASL 
    TAX 
    LDA $D85C,X
    STA $00
    LDA $D85D,X
    STA $01
    LDA $D874,X
    STA $02
    LDA $D875,X
    STA $03
    LDY $05E4
    LDA ($00),Y
    CMP #254
    BEQ L0F1825
    STA $A0
    LDA ($02),Y
    STA $34
    INC $05E4
L0F185B:
    RTS 

; start of data
.db $8C
.db $D8
.db $A3
.db $D8
.db $D6
.db $D8
.db $0D
.db $D9
.db $22
.db $D9
.db $43
.db $D9
; end of data
.db $4B
.db $D9
; start of data
.db $5A
.db $D9
.db $7B
.db $D9
.db $96
.db $D9
.db $A1
.db $D9
.db $AA
.db $D9
.db $98
.db $D8
.db $BD
.db $D8
.db $F2
.db $D8
.db $18
.db $D9
.db $33
.db $D9
.db $53
.db $D9
; end of data
.db $53
.db $D9
; start of data
.db $6B
.db $D9
.db $89
.db $D9
.db $9C
.db $D9
.db $A6
.db $D9
.db $AE
.db $D9
.db $CA
.db $CB
.db $CC
.db $CD
.db $CE
.db $CF
.db $D0
.db $D1
.db $D2
.db $D3
.db $D4
.db $FE
.db $03
.db $04
.db $03
.db $02
.db $01
.db $02
.db $01
.db $01
.db $02
.db $01
.db $01
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
.db $01
.db $02
.db $03
.db $04
.db $05
.db $04
.db $03
.db $02
.db $01
.db $06
.db $07
.db $08
.db $09
.db $0A
; end of data
.db $FE
; start of data
.db $04
.db $02
.db $02
.db $02
.db $01
.db $01
.db $01
.db $02
.db $02
.db $02
.db $04
.db $02
.db $02
.db $02
.db $01
.db $01
.db $01
.db $02
.db $02
.db $02
.db $03
.db $0E
.db $02
.db $01
.db $04
.db $0F
.db $10
.db $11
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
.db $01
.db $02
.db $03
.db $04
.db $05
.db $04
.db $03
.db $02
.db $01
.db $0B
.db $0C
.db $0D
; end of data
.db $0E
.db $FE
; start of data
.db $03
.db $03
.db $03
.db $04
.db $02
.db $02
.db $02
.db $01
.db $01
.db $01
.db $02
.db $02
.db $02
.db $04
.db $02
.db $02
.db $02
.db $01
.db $01
.db $01
.db $02
.db $02
.db $02
.db $04
.db $05
.db $06
; end of data
.db $07
; start of data
.db $12
.db $13
.db $14
.db $15
.db $0F
.db $10
.db $11
.db $16
.db $17
.db $18
; end of data
.db $FE
; start of data
.db $04
.db $05
.db $06
.db $0B
.db $03
.db $03
.db $03
.db $02
.db $03
.db $14
.db $11
.db $10
.db $0F
.db $11
.db $10
.db $0F
.db $11
.db $10
.db $0F
.db $11
.db $10
.db $0F
.db $15
.db $14
.db $13
.db $12
; end of data
.db $FE
; start of data
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $07
.db $08
.db $06
.db $05
.db $19
.db $1A
.db $1B
.db $1C
.db $1D
.db $1E
.db $1F
; end of data
.db $FE
.db $1F
.db $1E
.db $1D
.db $1C
.db $1B
.db $1A
.db $19
.db $FE
; start of data
.db $0B
.db $0A
.db $08
.db $08
.db $08
.db $08
.db $08
.db $20
.db $21
.db $22
.db $23
.db $24
.db $25
.db $26
.db $31
.db $30
.db $2F
.db $31
; end of data
.db $30
.db $2F
.db $31
.db $30
.db $2F
.db $FE
; start of data
.db $06
.db $07
.db $08
.db $0C
.db $04
.db $05
.db $06
.db $03
.db $03
.db $03
.db $03
; end of data
.db $03
.db $03
.db $03
.db $03
.db $03
; start of data
.db $31
.db $30
.db $2F
.db $24
.db $25
.db $26
.db $31
.db $30
.db $2F
.db $23
.db $22
.db $21
.db $20
; end of data
.db $FE
; start of data
.db $03
.db $03
.db $03
.db $06
.db $07
.db $08
.db $03
.db $03
.db $03
.db $06
.db $06
.db $05
.db $05
.db $27
.db $28
.db $32
.db $29
.db $2A
.db $FE
.db $01
.db $02
.db $06
.db $01
.db $02
.db $2E
.db $2D
.db $2C
.db $2B
.db $FE
.db $01
.db $01
.db $02
.db $02
.db $0F
.db $10
.db $11
.db $FE
.db $03
.db $03
.db $03
.db $01
.db $02
.db $04
.db $08
.db $10
.db $20
.db $40
.db $80
.db $00
.db $00
.db $04
; end of data
.db $08
; start of data
.db $03
; end of data
.db $03
; start of data
.db $03
; end of data
.db $0F
.db $0A
.db $14
.db $0A
.db $04
.db $08
; start of data
.db $05
.db $0D
; end of data
.db $0F
.db $03
; start of data
.db $0A
.db $07
.db $0C
.db $03
; end of data
.db $05
.db $07
; start of data
.db $03
.db $04
; end of data
.db $18
; start of data
.db $08
.db $05
.db $10
.db $0D
; end of data
.db $00
; start of data
.db $03
.db $0A
.db $0F
.db $00
; end of data
.db $00
.db $00
.db $00
; start of data
.db $0A
.db $00
; end of data
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
.db $00
.db $00
; end of data
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
.db $00
; end of data
.db $00
.db $00
; start of data
.db $81
.db $81
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
.db $00
; start of data
.db $01
.db $02
.db $0A
.db $04
.db $03
.db $08
.db $06
; end of data
.db $00
; start of data
.db $01
.db $02
.db $05
.db $07
.db $03
.db $0A
.db $00
.db $00
.db $00
.db $01
; end of data
.db $03
.db $00
.db $08
.db $0C
.db $0C
.db $0E
.db $00
; start of data
.db $00
.db $00
.db $01
; end of data
.db $01
; start of data
.db $02
; end of data
.db $00
.db $01
.db $00
.db $00
.db $02
.db $01
.db $01
.db $01
; start of data
.db $00
.db $05
; end of data
.db $03
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
.db $01
; end of data
.db $00
.db $02
; start of data
.db $03
.db $05
; end of data
.db $14
; start of data
.db $04
.db $01
.db $0B
.db $0A
; end of data
.db $00
; start of data
.db $03
.db $06
.db $09
.db $0D
; end of data
.db $00
.db $00
.db $00
; start of data
.db $04
.db $01
; end of data
.db $00
.db $00
.db $02
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
.db $5A
.db $46
.db $50
; end of data
.db $5A
; start of data
.db $46
; end of data
.db $5A
.db $55
.db $64
.db $64
.db $50
.db $64
.db $50
.db $5A
; start of data
.db $64
.db $46
; end of data
.db $50
.db $64
; start of data
.db $64
; end of data
.db $64
; start of data
.db $50
.db $46
; end of data
.db $64
.db $50
; start of data
.db $50
.db $46
; end of data
.db $64
; start of data
.db $5A
.db $64
.db $46
.db $50
; end of data
.db $64
; start of data
.db $50
.db $46
.db $46
.db $46
; end of data
.db $00
.db $00
.db $00
; start of data
.db $46
.db $5A
; end of data
.db $00
.db $00
.db $32
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
.db $00
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $0A
.db $00
.db $00
.db $32
.db $00
.db $00
.db $00
.db $00
; start of data
.db $1E
.db $00
; end of data
.db $00
.db $0F
; start of data
.db $00
; end of data
.db $14
; start of data
.db $00
.db $00
; end of data
.db $0A
.db $00
; start of data
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
.db $14
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
.db $00
.db $00
.db $00
; end of data
.db $00
.db $00
.db $00
; start of data
.db $00
.db $00
; end of data
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
.db $00
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $01
; start of data
.db $04
; end of data
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
.db $00
; end of data
.db $00
.db $01
; start of data
.db $01
.db $00
.db $00
.db $03
; end of data
.db $01
.db $03
; start of data
.db $00
.db $00
; end of data
.db $00
; start of data
.db $01
.db $00
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
.db $00
.db $00
.db $00
; end of data
.db $00
.db $00
.db $00
; start of data
.db $00
.db $00
; end of data
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $00
; end of data
.db $EE
.db $DA
; start of data
.db $EE
.db $DA
; end of data
.db $F4
.db $DA
; start of data
.db $F6
.db $DA
.db $F9
.db $DA
.db $0B
.db $03
.db $05
.db $11
.db $12
.db $FF
; end of data
.db $15
.db $FF
; start of data
.db $03
.db $05
.db $FF
.db $01
.db $04
.db $07
.db $FF
.db $0A
.db $0E
.db $0A
; end of data
.db $0A
; start of data
.db $0E
; end of data
.db $0A
; start of data
.db $0A
; end of data
.db $0E
.db $0A
.db $0A
.db $0A
.db $0A
.db $0A
; start of data
.db $0A
.db $0A
; end of data
.db $0E
.db $0A
; start of data
.db $0A
.db $0A
.db $0A
.db $0E
; end of data
.db $0E
.db $0E
; start of data
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
; end of data
.db $0E
; start of data
.db $0E
.db $0E
.db $0E
.db $0E
.db $12
.db $32
.db $32
.db $0E
.db $0E
.db $12
; end of data
.db $32
.db $0E
.db $12
.db $32
.db $32
.db $32
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
; start of data
.db $00
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $0A
; start of data
.db $00
; end of data
.db $0A
.db $0A
.db $0A
.db $0A
.db $00
.db $00
; start of data
.db $00
.db $00
; end of data
.db $00
.db $0A
; start of data
.db $0A
.db $0A
.db $00
.db $00
; end of data
.db $0A
.db $00
; start of data
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
.db $00
.db $00
.db $00
; end of data
.db $00
; start of data
.db $00
.db $00
.db $00
.db $00
; end of data
.db $00
.db $00
.db $00
; start of data
.db $00
.db $06
; end of data
.db $01
.db $02
.db $00
.db $09
.db $03
.db $09
.db $09
; start of data
.db $00
.db $00
.db $00
; end of data
.db $00
.db $0A
.db $00
.db $0A
.db $0A
; start of data
.db $0A
; end of data
.db $0A
; start of data
.db $0A
; end of data
.db $0A
.db $A3
.db $DB
.db $A7
.db $DB
; start of data
.db $AC
.db $DB
.db $B1
.db $DB
; end of data
.db $B9
.db $DB
; start of data
.db $BE
.db $DB
.db $C5
.db $DB
.db $CA
.db $DB
.db $CF
.db $DB
; end of data
.db $D3
.db $DB
; start of data
.db $D8
.db $DB
; end of data
.db $DD
.db $DB
.db $E3
.db $DB
; start of data
.db $EA
.db $DB
.db $F0
.db $DB
.db $F6
.db $DB
.db $FC
.db $DB
; end of data
.db $02
.db $DC
; start of data
.db $07
.db $DC
.db $0D
.db $DC
.db $14
.db $DC
; end of data
.db $1D
.db $DC
; start of data
.db $22
.db $DC
.db $27
.db $DC
.db $45
.db $31
.db $44
.db $EF
.db $30
.db $3F
.db $50
.db $3F
.db $EF
.db $79
.db $45
.db $31
.db $44
.db $EF
.db $4A
.db $1F
.db $58
.db $43
.db $0F
.db $A7
.db $5F
.db $EF
; end of data
.db $6F
.db $45
.db $31
.db $44
.db $EF
; start of data
.db $3E
.db $5A
.db $3B
.db $0F
.db $88
.db $3F
.db $EF
.db $70
.db $45
.db $31
.db $44
.db $EF
.db $27
.db $02
.db $1D
.db $01
.db $EF
.db $08
.db $2F
.db $0B
.db $EF
.db $20
.db $0D
.db $2F
.db $0B
.db $EF
.db $0B
.db $2F
.db $05
.db $2F
.db $EF
.db $30
.db $3F
.db $41
.db $88
.db $3F
.db $EF
.db $3C
.db $45
.db $31
.db $4A
.db $1F
.db $3F
.db $EF
.db $22
.db $28
.db $1B
.db $0F
.db $14
.db $EF
.db $20
.db $14
.db $0F
.db $02
.db $0B
.db $EF
.db $20
.db $14
.db $0F
.db $02
.db $0B
.db $EF
.db $0D
.db $01
.db $0B
.db $0F
.db $87
.db $EF
; end of data
.db $3B
.db $3C
.db $40
.db $3F
.db $EF
; start of data
.db $08
.db $2F
.db $0B
.db $0F
.db $84
.db $EF
.db $4E
.db $0F
.db $32
.db $45
.db $31
.db $44
.db $EF
.db $0D
.db $2F
.db $0B
.db $EF
; end of data
.db $26
.db $02
.db $0B
.db $84
.db $EF
; start of data
.db $4A
.db $0F
.db $5C
.db $5F
.db $EF
.db $26
.db $02
.db $0B
.db $84
.db $EF
.db $4C
.db $1F
.db $59
.db $5F
.db $3D
.db $3C
.db $EF
.db $A3
.db $DB
.db $A7
.db $DB
.db $5A
.db $DC
.db $B1
.db $DB
.db $68
.db $DC
.db $BE
.db $DB
.db $C5
.db $DB
.db $CA
.db $DB
.db $CF
.db $DB
.db $D3
.db $DB
.db $7D
.db $DC
.db $DD
.db $DB
.db $E3
.db $DB
.db $83
.db $DC
.db $8F
.db $DC
.db $97
.db $DC
.db $89
.db $DC
.db $9C
.db $DC
.db $A2
.db $DC
.db $0D
.db $DC
.db $A7
.db $DC
.db $1D
.db $DC
.db $35
.db $0F
.db $3F
.db $39
.db $0F
.db $31
.db $5A
.db $EF
; end of data
.db $4A
.db $31
.db $45
.db $31
.db $44
.db $EF
; start of data
.db $6D
.db $3E
.db $0F
.db $5F
.db $4B
.db $0F
.db $EF
; end of data
.db $3B
.db $0F
.db $A9
.db $48
.db $58
.db $5A
.db $EF
.db $06
.db $87
.db $02
.db $0D
.db $2F
.db $0B
.db $EF
; start of data
.db $3E
.db $0F
.db $5F
.db $4B
.db $0F
.db $EF
.db $14
.db $02
.db $0E
.db $0F
.db $07
.db $EF
.db $3C
.db $38
.db $5A
.db $44
.db $5F
.db $EF
.db $27
.db $02
.db $0B
.db $0F
.db $86
.db $12
.db $0B
.db $EF
.db $20
.db $0B
.db $0F
.db $87
.db $EF
.db $4B
.db $0F
.db $37
.db $0F
.db $5A
.db $EF
.db $06
.db $14
.db $02
.db $0B
.db $EF
.db $0B
.db $0F
.db $84
.db $0B
.db $2F
.db $EF
.db $23
.db $DD
.db $23
.db $DD
.db $25
.db $DD
.db $2D
.db $DD
.db $34
.db $DD
; end of data
.db $38
.db $DD
; start of data
.db $3F
.db $DD
; end of data
.db $46
.db $DD
.db $4F
.db $DD
.db $55
.db $DD
.db $5A
.db $DD
.db $60
.db $DD
; start of data
.db $6A
.db $DD
.db $73
.db $DD
.db $7B
.db $DD
; end of data
.db $83
.db $DD
.db $8C
.db $DD
; start of data
.db $95
.db $DD
.db $9C
.db $DD
.db $A5
.db $DD
.db $AB
.db $DD
; end of data
.db $B3
.db $DD
; start of data
.db $BA
.db $DD
.db $1B
.db $DE
.db $21
.db $DE
.db $27
.db $DE
.db $2E
.db $DE
.db $35
.db $DE
.db $3E
.db $DE
.db $42
.db $DE
; end of data
.db $46
.db $DE
; start of data
.db $4B
.db $DE
.db $50
.db $DE
.db $55
.db $DE
.db $59
.db $DE
; end of data
.db $7D
.db $DE
.db $94
.db $DE
.db $78
.db $DE
; start of data
.db $60
.db $DE
.db $67
.db $DE
.db $7D
.db $DE
; end of data
.db $83
.db $DE
.db $89
.db $DE
.db $8F
.db $DE
.db $94
.db $DE
.db $9B
.db $DE
.db $A4
.db $DE
; start of data
.db $23
.db $DD
.db $C1
.db $DD
.db $C7
.db $DD
; end of data
.db $CF
.db $DD
.db $D6
.db $DD
.db $DD
.db $DD
.db $E6
.db $DD
.db $ED
.db $DD
; start of data
.db $F6
.db $DD
; end of data
.db $FF
.db $DD
; start of data
.db $08
.db $DE
; end of data
.db $12
.db $DE
; start of data
.db $FF
.db $EF
.db $1A
.db $05
.db $0F
.db $18
.db $19
.db $25
.db $29
.db $EF
.db $06
.db $0F
.db $2F
.db $19
.db $25
.db $29
.db $EF
.db $13
.db $25
.db $29
.db $EF
; end of data
.db $0D
.db $01
.db $15
.db $2A
.db $25
.db $29
.db $EF
; start of data
.db $45
.db $31
.db $44
.db $36
.db $58
.db $3F
.db $EF
; end of data
.db $37
.db $0F
.db $58
.db $43
.db $0F
.db $A7
.db $32
.db $3C
.db $EF
.db $29
.db $86
.db $02
.db $0D
.db $01
.db $EF
.db $10
.db $01
.db $27
.db $02
.db $EF
.db $08
.db $0F
.db $85
.db $09
.db $02
.db $EF
.db $1A
.db $05
.db $0F
.db $18
.db $19
.db $12
.db $2A
.db $06
.db $0F
.db $EF
; start of data
.db $06
.db $0F
.db $2F
.db $19
.db $12
.db $2A
.db $06
.db $0F
.db $EF
.db $26
.db $02
.db $0B
.db $84
.db $19
.db $08
.db $2F
.db $EF
.db $00
.db $2F
.db $09
.db $07
.db $19
.db $08
.db $2F
.db $EF
; end of data
.db $01
.db $05
.db $12
.db $0F
.db $11
.db $19
.db $08
.db $2F
.db $EF
.db $0D
.db $01
.db $15
.db $2A
.db $12
.db $2A
.db $06
.db $0F
.db $EF
; start of data
.db $4C
.db $A6
.db $5A
.db $3B
.db $34
.db $5F
.db $EF
.db $04
.db $02
.db $08
.db $19
.db $12
.db $2A
.db $06
.db $0F
.db $EF
.db $0B
.db $87
.db $07
.db $0B
.db $86
.db $EF
.db $1A
.db $05
.db $0F
.db $18
.db $19
.db $26
.db $21
.db $EF
; end of data
.db $0D
.db $01
.db $15
.db $2A
.db $26
.db $21
.db $EF
; start of data
.db $06
.db $0F
.db $2F
.db $19
.db $26
.db $21
.db $EF
.db $05
.db $2D
.db $19
.db $10
.db $13
.db $EF
.db $1A
.db $05
.db $0F
.db $18
.db $19
.db $10
.db $13
.db $EF
; end of data
.db $06
.db $0F
.db $2F
.db $19
.db $10
.db $13
.db $EF
.db $0D
.db $01
.db $15
.db $2A
.db $10
.db $13
.db $EF
.db $20
.db $1C
.db $02
.db $0B
.db $0F
.db $19
.db $10
.db $13
.db $EF
.db $29
.db $86
.db $02
.db $19
.db $10
.db $13
.db $EF
.db $0D
.db $01
.db $15
.db $2A
.db $26
.db $1B
.db $0F
.db $2D
.db $EF
; start of data
.db $13
.db $2F
.db $0B
.db $19
.db $26
.db $1B
.db $0F
.db $2D
.db $EF
; end of data
.db $1A
.db $25
.db $0A
.db $19
.db $26
.db $1B
.db $0F
.db $2D
.db $EF
; start of data
.db $20
.db $14
.db $0F
.db $02
.db $19
.db $26
.db $1B
.db $0F
.db $2D
.db $EF
; end of data
.db $01
.db $19
.db $29
.db $19
.db $26
.db $1B
.db $0F
.db $2D
.db $EF
; start of data
.db $4C
.db $A6
.db $31
.db $30
.db $3F
.db $EF
.db $3A
.db $5F
.db $40
.db $0F
.db $3F
.db $EF
.db $58
.db $31
.db $45
.db $5C
.db $89
.db $37
.db $EF
.db $33
.db $5F
.db $3B
.db $0F
.db $A9
.db $5A
.db $EF
.db $33
.db $37
.db $3C
.db $35
.db $59
.db $4A
.db $0F
.db $3F
.db $EF
.db $30
.db $5C
.db $3F
.db $EF
.db $34
.db $3F
.db $58
.db $EF
; end of data
.db $35
.db $0F
.db $31
.db $30
.db $EF
; start of data
.db $44
.db $0F
.db $3F
.db $58
.db $EF
.db $3C
.db $58
.db $31
.db $52
.db $EF
.db $43
.db $0F
.db $3C
.db $EF
.db $53
.db $43
.db $0F
.db $8A
.db $3F
.db $3A
.db $EF
.db $30
.db $31
.db $4B
.db $0F
.db $3F
.db $52
.db $EF
.db $30
.db $31
.db $4E
.db $0F
.db $3F
.db $5A
.db $EF
; end of data
.db $4E
.db $0F
.db $3F
.db $50
.db $EF
.db $4E
.db $0F
.db $3F
.db $3C
.db $EF
.db $53
.db $3A
.db $31
.db $30
.db $EF
; start of data
.db $59
.db $35
.db $4A
.db $0F
.db $3F
.db $EF
; end of data
.db $59
.db $4C
.db $0F
.db $5C
.db $3F
.db $EF
.db $59
.db $3A
.db $0F
.db $31
.db $30
.db $EF
.db $5D
.db $3F
.db $4C
.db $1F
.db $EF
.db $59
.db $3A
.db $0F
.db $3F
.db $4C
.db $0F
.db $EF
.db $31
.db $59
.db $8A
.db $3F
.db $3B
.db $0F
.db $8B
.db $5F
.db $EF
.db $43
.db $0F
.db $A7
.db $5A
.db $EF
; start of data
.db $FF
.db $DE
.db $03
.db $DF
.db $07
.db $DF
; end of data
.db $0C
.db $DF
; start of data
.db $10
.db $DF
.db $13
.db $DF
.db $17
.db $DF
.db $1C
.db $DF
; end of data
.db $21
.db $DF
.db $25
.db $DF
.db $25
.db $DF
.db $2B
.db $DF
.db $36
.db $DF
.db $39
.db $DF
.db $3D
.db $DF
.db $43
.db $DF
.db $48
.db $DF
.db $4F
.db $DF
; start of data
.db $55
.db $DF
; end of data
.db $5B
.db $DF
.db $4C
.db $DF
; start of data
.db $61
.db $DF
.db $66
.db $DF
; end of data
.db $6C
.db $DF
; start of data
.db $71
.db $DF
; end of data
.db $75
.db $DF
; start of data
.db $7B
.db $DF
.db $81
.db $DF
; end of data
.db $86
.db $DF
; start of data
.db $8C
.db $DF
.db $91
.db $DF
.db $96
.db $DF
.db $9B
.db $DF
.db $9F
.db $DF
; end of data
.db $A4
.db $DF
; start of data
.db $AA
.db $DF
; end of data
.db $AE
.db $DF
.db $B2
.db $DF
; start of data
.db $9F
.db $DF
.db $0D
.db $DC
; end of data
.db $C5
.db $DB
; start of data
.db $B1
.db $DB
.db $B6
.db $DF
.db $30
.db $5A
.db $52
.db $EF
.db $3D
.db $59
.db $35
.db $EF
.db $50
.db $31
.db $3D
.db $5F
.db $EF
; end of data
.db $49
.db $3F
.db $50
.db $EF
; start of data
.db $5A
.db $35
.db $EF
.db $37
.db $59
.db $4C
.db $EF
.db $5C
.db $4B
.db $0F
.db $5F
.db $EF
.db $37
.db $0F
.db $5B
.db $31
.db $EF
; end of data
.db $37
.db $5B
.db $30
.db $EF
.db $37
.db $5B
.db $3F
.db $4D
.db $0F
.db $EF
.db $4C
.db $AA
.db $5A
.db $3C
.db $EF
.db $3B
.db $0F
.db $8A
.db $49
.db $3F
.db $EF
.db $53
.db $31
.db $EF
.db $3B
.db $5A
.db $37
.db $EF
.db $3B
.db $0F
.db $A9
.db $46
.db $3F
.db $EF
.db $4E
.db $0F
.db $3F
.db $31
.db $EF
.db $35
.db $52
.db $31
.db $EF
.db $5B
.db $34
.db $EF
.db $4A
.db $0F
.db $5A
.db $4E
.db $0F
.db $EF
; start of data
.db $50
.db $41
.db $5A
.db $40
.db $0F
.db $EF
; end of data
.db $4A
.db $1F
.db $31
.db $3E
.db $5F
.db $EF
; start of data
.db $30
.db $44
.db $58
.db $3C
.db $EF
.db $3B
.db $0F
.db $A9
.db $3B
.db $3F
.db $EF
; end of data
.db $4C
.db $AA
.db $5A
.db $3C
.db $EF
; start of data
.db $3E
.db $46
.db $30
.db $EF
; end of data
.db $43
.db $0F
.db $A7
.db $3F
.db $5F
.db $EF
; start of data
.db $3D
.db $3F
.db $4A
.db $0F
.db $3F
.db $EF
.db $59
.db $8A
.db $3F
.db $44
.db $EF
; end of data
.db $43
.db $0F
.db $8A
.db $3F
.db $43
.db $EF
; start of data
.db $43
.db $A7
.db $3F
.db $40
.db $EF
.db $35
.db $41
.db $8A
.db $30
.db $EF
.db $4A
.db $1F
.db $34
.db $58
.db $EF
.db $33
.db $3C
.db $44
.db $EF
.db $3B
.db $0F
.db $3F
.db $37
.db $EF
; end of data
.db $3B
.db $88
.db $44
.db $0F
.db $3F
.db $EF
; start of data
.db $04
.db $2F
.db $15
.db $EF
; end of data
.db $04
.db $14
.db $09
.db $EF
.db $22
.db $0C
.db $23
.db $EF
; start of data
.db $4A
.db $5A
.db $37
.db $EF
.db $6A
.db $E0
.db $70
.db $E0
.db $75
.db $E0
.db $7A
.db $E0
.db $81
.db $E0
.db $87
.db $E0
; end of data
.db $8D
.db $E0
; start of data
.db $91
.db $E0
.db $97
.db $E0
.db $9D
.db $E0
; end of data
.db $9F
.db $DF
.db $AA
.db $E0
; start of data
.db $B1
.db $E0
.db $B6
.db $E0
.db $BA
.db $E0
.db $BE
.db $E0
.db $C4
.db $E0
.db $CA
.db $E0
; end of data
.db $D6
.db $E0
; start of data
.db $DD
.db $E0
.db $E2
.db $E0
; end of data
.db $E7
.db $E0
; start of data
.db $F1
.db $E0
.db $F6
.db $E0
; end of data
.db $FC
.db $E0
; start of data
.db $04
.db $E1
; end of data
.db $6A
.db $E0
; start of data
.db $D0
.db $E0
; end of data
.db $71
.db $DF
; start of data
.db $EC
.db $E0
; end of data
.db $FC
.db $E0
.db $09
.db $E1
.db $11
.db $E1
.db $1A
.db $E1
.db $21
.db $E1
.db $29
.db $E1
.db $2F
.db $E1
.db $35
.db $E1
; start of data
.db $39
.db $E1
.db $A4
.db $E0
.db $3E
.db $E1
.db $44
.db $E1
.db $48
.db $E1
.db $4E
.db $E1
; end of data
.db $39
.db $E1
.db $39
.db $E1
.db $39
.db $E1
.db $39
.db $E1
; start of data
.db $A3
.db $DB
.db $A7
.db $DB
.db $5A
.db $DC
.db $B1
.db $DB
.db $68
.db $DC
.db $BE
.db $DB
.db $C5
.db $DB
.db $CA
.db $DB
.db $CF
.db $DB
.db $D3
.db $DB
.db $7D
.db $DC
.db $DD
.db $DB
.db $E3
.db $DB
.db $83
.db $DC
.db $8F
.db $DC
.db $97
.db $DC
.db $89
.db $DC
.db $9C
.db $DC
.db $A2
.db $DC
.db $0D
.db $DC
; end of data
.db $A7
.db $DC
; start of data
.db $1D
.db $DC
.db $53
.db $E1
; end of data
.db $58
.db $E1
; start of data
.db $5E
.db $E1
.db $65
.db $E1
.db $68
.db $DC
.db $68
.db $DC
.db $68
.db $DC
.db $68
.db $DC
; end of data
.db $68
.db $DC
.db $6B
.db $E1
.db $72
.db $E1
; start of data
.db $77
.db $E1
.db $7C
.db $E1
.db $83
.db $E1
.db $89
.db $E1
.db $8F
.db $E1
.db $9C
.db $DC
.db $95
.db $E1
.db $44
.db $0F
.db $3D
.db $0F
.db $3F
.db $EF
.db $36
.db $0F
.db $3F
.db $3C
.db $EF
.db $44
.db $0F
.db $5A
.db $37
.db $EF
.db $47
.db $31
.db $4A
.db $0F
.db $4A
.db $0F
.db $EF
.db $5A
.db $44
.db $0F
.db $5A
.db $4C
.db $EF
.db $3B
.db $0F
.db $8A
.db $40
.db $0F
.db $EF
; end of data
.db $3E
.db $46
.db $30
.db $EF
; start of data
.db $43
.db $0F
.db $A7
.db $3F
.db $5F
.db $EF
.db $50
.db $37
.db $0F
.db $45
.db $52
.db $EF
.db $3B
.db $0F
.db $A9
.db $5C
.db $3F
.db $52
.db $EF
.db $51
.db $8A
.db $3F
.db $58
.db $3F
.db $EF
; end of data
.db $4A
.db $5F
.db $46
.db $4A
.db $0F
.db $5A
.db $EF
; start of data
.db $50
.db $89
.db $3D
.db $45
.db $EF
.db $50
.db $3F
.db $58
.db $EF
.db $40
.db $40
.db $58
.db $EF
.db $3B
.db $0F
.db $88
.db $51
.db $5A
.db $EF
.db $43
.db $0F
.db $8A
.db $3F
.db $43
.db $EF
.db $35
.db $0F
.db $3D
.db $0F
.db $5A
.db $EF
.db $3A
.db $0F
.db $37
.db $3E
.db $5F
.db $EF
; end of data
.db $3C
.db $5B
.db $31
.db $40
.db $0F
.db $3F
.db $EF
; start of data
.db $51
.db $35
.db $33
.db $58
.db $EF
.db $5C
.db $3F
.db $3E
.db $5F
.db $EF
; end of data
.db $40
.db $0F
.db $89
.db $4A
.db $EF
; start of data
.db $35
.db $0F
.db $89
.db $4A
.db $EF
.db $4C
.db $0F
.db $58
.db $31
.db $EF
.db $3B
.db $3F
.db $3A
.db $0F
.db $3C
.db $EF
; end of data
.db $59
.db $38
.db $0F
.db $5A
.db $07
.db $0F
.db $2F
.db $EF
; start of data
.db $32
.db $AA
.db $5A
.db $4C
.db $EF
; end of data
.db $36
.db $0F
.db $3F
.db $3C
.db $07
.db $0F
.db $2F
.db $EF
.db $44
.db $0F
.db $3D
.db $0F
.db $3F
.db $07
.db $0F
.db $2F
.db $EF
.db $44
.db $0F
.db $5A
.db $37
.db $07
.db $2F
.db $EF
.db $20
.db $14
.db $0F
.db $02
.db $07
.db $0F
.db $2F
.db $EF
.db $05
.db $01
.db $0E
.db $0F
.db $07
.db $EF
.db $0A
.db $2F
.db $0E
.db $0F
.db $07
.db $EF
.db $20
.db $24
.db $19
.db $EF
; start of data
.db $44
.db $0F
.db $3F
.db $50
.db $EF
.db $35
.db $0F
.db $5A
.db $3B
.db $30
.db $EF
.db $4D
.db $3C
.db $43
.db $EF
.db $3A
.db $31
.db $3E
.db $0F
.db $3F
.db $EF
.db $35
.db $0F
.db $48
.db $4C
.db $EF
.db $20
.db $0B
.db $0F
.db $2F
.db $EF
; end of data
.db $43
.db $0F
.db $4B
.db $0F
.db $5A
.db $EF
; start of data
.db $39
.db $0F
.db $3F
.db $5A
.db $44
.db $0F
.db $EF
.db $1A
.db $07
.db $29
.db $86
.db $02
.db $EF
; end of data
.db $3A
.db $3F
.db $4D
.db $1F
.db $5F
.db $44
.db $EF
.db $45
.db $3F
.db $35
.db $0F
.db $EF
; start of data
.db $59
.db $89
.db $41
.db $3F
.db $EF
.db $4A
.db $0F
.db $5A
.db $5C
.db $37
.db $0F
.db $EF
.db $4A
.db $0F
.db $43
.db $0F
.db $3C
.db $EF
.db $38
.db $5A
.db $4D
.db $0F
.db $3C
.db $EF
.db $4D
.db $0F
.db $5A
.db $5B
.db $3C
.db $EF
.db $50
.db $51
.db $3F
.db $EF
.db $17
.db $18
.db $19
.db $1A
.db $1B
; end of data
.db $1C
.db $1D
; start of data
.db $28
.db $17
.db $18
.db $19
.db $1A
.db $1B
.db $1C
; end of data
.db $1D
.db $FF
; start of data
.db $17
.db $18
; end of data
.db $19
.db $1A
; start of data
.db $1B
; end of data
.db $1C
.db $1D
.db $FF
.db $28
; start of data
.db $29
.db $2A
; end of data
.db $2B
.db $2C
.db $2D
.db $2E
; start of data
.db $1A
; end of data
.db $28
.db $29
.db $2A
.db $2B
.db $2C
.db $2D
.db $2E
.db $17
; start of data
.db $17
.db $18
; end of data
.db $19
.db $1A
; start of data
.db $1B
.db $1C
; end of data
.db $1D
; start of data
.db $28
; end of data
.db $1F
.db $20
.db $21
.db $22
.db $23
.db $24
.db $FF
.db $FF
; start of data
.db $1F
.db $20
.db $21
.db $22
.db $23
.db $24
; end of data
.db $FF
.db $FF
; start of data
.db $17
.db $18
; end of data
.db $1B
; start of data
.db $1D
; end of data
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
; start of data
.db $1F
.db $20
.db $21
; end of data
.db $22
; start of data
.db $25
.db $25
.db $25
.db $25
.db $28
.db $28
.db $28
; end of data
.db $28
.db $28
.db $28
.db $28
.db $FF
.db $FF
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
; start of data
.db $28
; end of data
.db $28
; start of data
.db $28
.db $28
.db $3C
.db $28
; end of data
.db $28
; start of data
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $FF
.db $28
; end of data
.db $28
; start of data
.db $FF
.db $14
.db $28
.db $28
.db $28
.db $28
.db $28
.db $FF
.db $28
.db $28
; end of data
.db $28
; start of data
.db $28
.db $28
; end of data
.db $28
.db $FF
; start of data
.db $FF
; end of data
.db $FF
; start of data
.db $FF
; end of data
.db $FF
.db $FF
; start of data
.db $FF
; end of data
.db $FF
.db $FF
; start of data
.db $FF
.db $FF
.db $FF
.db $FF
; end of data
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
; start of data
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $00
.db $00
.db $00
; end of data
.db $0A
.db $1E
.db $32
.db $3C
.db $00
.db $00
.db $28
.db $28
.db $64
.db $64
.db $28
.db $28
.db $00
; start of data
.db $28
; end of data
.db $28
; start of data
.db $28
.db $28
.db $0A
.db $28
; end of data
.db $28
; start of data
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $28
.db $00
.db $28
; end of data
.db $28
.db $00
; start of data
.db $50
.db $28
.db $28
.db $28
.db $28
.db $28
.db $00
.db $28
.db $28
; end of data
.db $28
; start of data
.db $28
.db $28
; end of data
.db $00
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
.db $00
; start of data
.db $00
; end of data
.db $00
.db $00
; start of data
.db $00
.db $00
.db $00
; end of data
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
; start of data
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $11
; end of data
.db $07
.db $1B
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $17
; end of data
.db $02
.db $1B
.db $09
.db $18
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $1A
; end of data
.db $03
.db $1C
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $1B
; end of data
.db $05
.db $1A
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $06
; end of data
.db $04
.db $18
.db $07
.db $1B
.db $0B
.db $1C
.db $14
.db $1D
.db $00
.db $00
; start of data
.db $07
; end of data
.db $06
.db $1B
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $08
; end of data
.db $09
.db $1C
.db $0A
.db $18
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $16
; end of data
.db $10
.db $1C
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $0D
; end of data
.db $09
.db $1D
.db $0E
.db $1A
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $0E
; end of data
.db $07
.db $2B
.db $0E
.db $2E
.db $12
.db $2D
.db $00
.db $00
.db $00
.db $00
; start of data
.db $0F
; end of data
.db $04
.db $2D
.db $08
.db $29
.db $0C
.db $2E
.db $00
.db $00
.db $00
.db $00
; start of data
.db $10
; end of data
.db $03
.db $18
.db $0C
.db $1C
.db $12
.db $1B
.db $00
.db $00
.db $00
.db $00
; start of data
.db $02
.db $05
; end of data
.db $1A
; start of data
.db $08
; end of data
.db $18
; start of data
.db $09
; end of data
.db $28
; start of data
.db $0F
.db $1B
.db $14
.db $19
.db $19
.db $0A
; end of data
.db $1A
; start of data
.db $0E
; end of data
.db $1C
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $1C
.db $04
.db $18
.db $09
.db $1C
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $1D
; end of data
.db $09
.db $1A
.db $0E
.db $19
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $1E
; end of data
.db $04
.db $2C
.db $07
.db $2D
.db $08
.db $2B
.db $00
.db $00
.db $00
.db $00
; start of data
.db $03
; end of data
.db $11
.db $1D
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
; start of data
.db $FF
.db $70
.db $E3
.db $74
.db $E3
.db $78
.db $E3
.db $7C
.db $E3
.db $82
.db $E3
.db $89
.db $E3
.db $90
.db $E3
.db $9D
.db $E3
.db $30
.db $2F
.db $2E
.db $FF
.db $2D
.db $2C
.db $2B
.db $FF
.db $2A
.db $29
.db $25
.db $FF
.db $1A
.db $19
.db $14
.db $13
.db $12
.db $FF
.db $18
.db $16
.db $15
.db $14
.db $13
.db $12
.db $FF
.db $18
.db $17
.db $15
.db $14
.db $13
.db $12
.db $FF
.db $28
.db $27
.db $26
.db $21
.db $20
.db $1F
.db $1E
.db $1D
.db $1C
.db $1B
.db $11
.db $10
.db $FF
.db $1D
.db $1C
.db $1B
.db $11
.db $10
.db $FF
.db $04
.db $0B
.db $15
.db $FF
.db $01
.db $04
.db $06
.db $02
.db $10
.db $0C
.db $08
.db $0F
.db $12
.db $03
.db $0D
.db $09
.db $0A
.db $FF
; end of data
.db $04
.db $07
.db $02
.db $16
.db $0B
.db $0D
; start of data
.db $09
.db $13
; end of data
.db $11
.db $05
.db $14
.db $0A
.db $0E
.db $07
; start of data
.db $0A
.db $07
; end of data
.db $0A
; start of data
.db $14
; end of data
.db $07
; start of data
.db $07
.db $0C
; end of data
.db $0C
; start of data
.db $0C
; end of data
.db $0A
; start of data
.db $0A
; end of data
.db $0A
.db $01
.db $08
.db $0C
.db $0F
.db $06
L0F23D4:
    LDA $04C4
    BEQ L0F23ED
    LDA #127
    STA $0200
    LDA #247
    STA $0201
    LDA #35
    STA $0202
    LDA #224
    STA $0203
L0F23ED:
    RTS 

L0F23EE:
    LDX #2
L0F23F0:
    LDA $03CD,X
    BEQ L0F241D
    CPX #1
    BNE L0F23FE
    LDA $0362
    BNE L0F241D
L0F23FE:
    LDA $03D0,X
    BEQ L0F2406
    JMP $E4D6

L0F2406:
    JSR $E427
    JSR $E49B
    LDA $03BE,X
    STA $3C
    JSR $CAB7
    JSR $E462
    LDA $04CE,X
    STA $B000
L0F241D:
    DEX 
    BPL L0F23F0
    LDA $03A9
    STA $A000
    RTS 

L0F2427:
    LDY $04D1,X
    LDA $E436,Y
    STA $A000
    LDA $E44C,Y
    STA $DB
    RTS 

; start of data
.db $09
.db $01
.db $01
.db $01
.db $01
.db $09
.db $09
.db $09
.db $01
.db $01
.db $00
.db $01
.db $01
.db $09
.db $00
.db $00
.db $0C
.db $09
.db $00
.db $00
.db $00
.db $09
.db $03
.db $01
.db $02
.db $03
.db $04
.db $02
.db $00
.db $01
.db $05
.db $06
.db $00
.db $07
.db $08
.db $06
.db $03
.db $04
.db $00
.db $05
.db $05
.db $02
.db $01
.db $04
; end of data
L0F2462:
    CPX #2
    BEQ L0F2496
    STX $0380
    TXA 
    ASL 
    TAX 
    LDA $E497,X
    STA $00
    LDA $E498,X
    STA $01
    LDY #0
    LDA #4
    STA $02
    LDX $0380
L0F247F:
    LDA ($00),Y
    BMI L0F2491
.db $85
.db $3C
.db $8C
.db $82
.db $03
.db $20
.db $9B
.db $E4
.db $20
.db $B7
.db $CA
.db $AC
.db $82
.db $03
L0F2491:
    INY 
    DEC $02
    BNE L0F247F
L0F2496:
    RTS 

; start of data
.db $F8
.db $03
.db $FC
.db $03
; end of data
L0F249B:
    LDA $DB
    STA $42
    LDA $03C1,X
    STA $3B
    LDY $03C4,X
    DEY 
    STY $3A
    LDA $03CA,X
    STA $3E
    LDA $03C7,X
    CPX #1
    BNE L0F24B8
    EOR #1
L0F24B8:
    STA $41
    CPX #2
    BNE L0F24C9
    LDA #3
    STA $40
    LDA $03E8
    STA $3F
    BPL L0F24D5
L0F24C9:
    CPX #1
    BNE L0F24D5
    LDA #3
    STA $40
    LDA #1
    STA $3F
L0F24D5:
    RTS 

L0F24D6:
    LDA $27
    BNE L0F24E0
    LDA $28
    BNE L0F24E0
    BEQ L0F24E3
L0F24E0:
    JMP $E41D

L0F24E3:
    JSR $E427
    LDA $03C1,X
    JSR $C39B
    STA $03
    LDA $03C4,X
    JSR $C39B
    STA $02
    JSR $C795
    LDA $BFFA
    STA $08
    LDA $BFFB
    STA $09
    TXA 
    ASL 
    TAY 
    LDA $BFFC,Y
    STA $0A
    LDA $BFFD,Y
    STA $0B
    LDA $DB
    ASL 
    TAY 
    LDA ($0A),Y
    STA $02
    INY 
    LDA ($0A),Y
    STA $03
    LDY $03BE,X
    LDA ($02),Y
    ASL 
    BCC L0F252E
.db $48
.db $A5
.db $09
.db $18
.db $69
.db $01
.db $85
.db $09
.db $68
L0F252E:
    TAY 
    LDA ($08),Y
    STA $00
    INY 
    LDA ($08),Y
    STA $01
    LDY #0
    LDA ($00),Y
    STA $03
    INC $00
    BNE L0F2544
.db $E6
.db $01
L0F2544:
    LDA ($00),Y
    CLC 
    ADC $04
    STA $0782,Y
    INY 
    DEC $03
    LDA ($00),Y
    ADC $05
    STA $0780,Y
    INY 
    DEC $03
    LDA ($00),Y
    STA $0781,Y
    AND #63
    STA $02
    INY 
    DEC $03
L0F2565:
    LDA ($00),Y
    STA $0781,Y
    INY 
    DEC $03
    BEQ L0F2575
    DEC $02
    BNE L0F2565
    BEQ L0F2544
L0F2575:
    LDA #0
    STA $0781,Y
    STA $03CD,X
    LDA #1
    STA $27
    JMP $E41D

L0F2584:
    PHA 
    TXA 
    PHA 
    TYA 
    PHA 
    LDA #255
    LDY #59
L0F258D:
    STA $0407,Y
    DEY 
    BPL L0F258D
    LDX #0
    LDY #0
L0F2597:
    LDA ($00),Y
    CMP #239
    BEQ L0F25B3
    CMP #31
    BEQ L0F25A5
    CMP #15
    BNE L0F25AC
L0F25A5:
    DEX 
    STA $0425,X
    INX 
    BPL L0F25B0
L0F25AC:
    STA $0407,X
    INX 
L0F25B0:
    INY 
    BPL L0F2597
L0F25B3:
    LDX #0
    LDA #4
    STA $07
    LDA #7
    STA $06
    JSR $E5E7
    LDA #4
    STA $07
    LDA #37
    STA $06
    SEC 
    LDA $02
    SBC #32
    STA $02
    LDA $03
    SBC #0
    STA $03
    JSR $E5E7
    LDA #0
    STA $0781,X
    LDA #1
    STA $27
    PLA 
    TAY 
    PLA 
    TAX 
    PLA 
    RTS 

L0F25E7:
    LDA $03
    STA $0781,X
    INX 
    LDA $02
    STA $0781,X
    INX 
    LDA $04
    STA $0781,X
    STA $05
    INX 
    LDY #0
L0F25FD:
    LDA ($06),Y
    STA $0781,X
    INY 
    INX 
    DEC $05
    BNE L0F25FD
    RTS 

.db $29
.db $E6
.db $2F
.db $E6
.db $33
.db $E6
.db $37
.db $E6
.db $3C
.db $E6
.db $40
.db $E6
.db $44
.db $E6
.db $48
.db $E6
.db $4D
.db $E6
.db $51
.db $E6
.db $55
.db $E6
.db $59
.db $E6
.db $5D
.db $E6
.db $61
.db $E6
.db $67
.db $E6
.db $6E
.db $E6
.db $0E
.db $02
.db $08
.db $0F
.db $2F
.db $EF
.db $1A
.db $0B
.db $28
.db $EF
.db $1A
.db $25
.db $0B
.db $EF
.db $0A
.db $1A
.db $0F
.db $07
.db $EF
.db $25
.db $FF
.db $20
.db $EF
.db $1A
.db $FF
.db $0B
.db $EF
.db $20
.db $FF
.db $11
.db $EF
.db $14
.db $29
.db $13
.db $0F
.db $EF
.db $0B
.db $FF
.db $2C
.db $EF
.db $05
.db $FF
.db $2D
.db $EF
.db $0E
.db $FF
.db $28
.db $EF
.db $02
.db $FF
.db $21
.db $EF
.db $26
.db $FF
.db $05
.db $EF
.db $05
.db $01
.db $10
.db $0F
.db $2F
.db $EF
.db $3C
.db $40
.db $3B
.db $0F
.db $30
.db $52
.db $EF
.db $01
.db $0B
.db $05
.db $0F
.db $06
.db $EF
L0F2674:
    LDA #0
    STA $3D
    LDA #7
    STA $05B7
    BNE L0F2684
    LDA #6
    STA $05B7
L0F2684:
    LDA $058D
    BEQ L0F2695
    LDA #1
    STA $9D
    PLA 
    PLA 
    LDA $058D
    JMP $E6AC

L0F2695:
    RTS 

L0F2696:
    LDA $058F
    BEQ L0F26AB
    STA $058E
    STA $0594
    LDA #0
    STA $0595
    LDA #3
    STA $058D
L0F26AB:
    RTS 

L0F26AC:
    STA $059F
    LDA #0
    STA $4A
    LDA #11
    JMP $CA94

L0F26B8:
    STA $05A9
    LDA #1
    STA $4A
    LDA #11
    JMP $CA94

L0F26C4:
    LDA $7DA7
    BEQ L0F26CC
    STA $A000
L0F26CC:
    LDA ($7C),Y
    STA $7EE7
    LDA #10
    STA $A000
    LDA $7EE7
    RTS 

L0F26DA:
    LDA $7DA7
    BEQ L0F26E5
    LDA $7DA7
    STA $A000
L0F26E5:
    LDA $7DA9
    AND #15
    ASL 
    TAY 
    LDA $BFE0,Y
    STA $04
    LDA $BFE1,Y
    STA $05
    LDA $7DA6
    ASL 
    BCC L0F26FE
.db $E6
.db $05
L0F26FE:
    CLC 
    ADC $04
    STA $04
    BCC L0F2707
    INC $05
L0F2707:
    LDY #0
    LDA ($04),Y
    LDX $7DA5
    STA $7DC8,X
    INY 
    LDA ($04),Y
    STA $7DCA,X
    LDA #10
    STA $A000
    RTS 

L0F271D:
    JSR $E764
    LDA #254
    STA $0781,X
    INX 
    LDA #0
    STA $0781,X
    INX 
    STX $0780
    LDA #1
    STA $27
    RTS 

L0F2734:
    LDA $2F
    PHA 
    LDA $05B7
    JSR $CA40
    JSR $E764
    LDA $69
    JSR $CEBF
    LDY $6A
    LDA ($70),Y
    JSR $CEA3
    LDY #0
    LDA ($02),Y
    STA $0781,X
    INX 
    TYA 
    STA $0781,X
    INX 
    STX $0780
    LDA #1
    STA $27
    PLA 
    JMP $CA40

L0F2764:
    LDA #1
    STA $00
    STA $01
    JSR $C517
    LDX $0780
    LDA $05
    STA $0781,X
    INX 
    LDA $04
    STA $0781,X
    INX 
    LDA #1
    STA $0781,X
    INX 
L0F2782:
    RTS 

L0F2783:
    LDA $058D
    BEQ L0F27B8
    CMP #4
    BNE L0F2795
    LDY $058F
    BEQ L0F2782
    DEY 
    JMP $E7BE

L0F2795:
    LDA $77
    STA $03
    LDA $0590
    ASL 
    ASL 
    ASL 
    CLC 
    ADC $77
    STA $01
    LDA $76
    STA $02
    LDA $0591
    ASL 
    ASL 
    ASL 
    CLC 
    ADC $76
    STA $00
    LDY #0
    JSR $E7E3
L0F27B8:
    LDY $058F
    BEQ L0F2809
    DEY 
L0F27BE:
    LDX $E80A,Y
    LDA $7C35,X
    ASL 
    ASL 
    ASL 
    CLC 
    ADC $7C39,X
    STA $00
    LDA $7C39,X
    STA $02
    LDA $7C36,X
    ASL 
    ASL 
    ASL 
    CLC 
    ADC $7C3A,X
    STA $01
    LDA $7C3A,X
    STA $03
    LDX #0
L0F27E5:
    LDA $0200,X
    CMP $00
    BCS L0F2800
    CMP $02
    BCC L0F2800
    LDA $0203,X
    CMP $01
    BCS L0F2800
    CMP $03
    BCC L0F2800
    LDA #244
    STA $0200,X
L0F2800:
    INX 
    INX 
    INX 
    INX 
    BNE L0F27E5
    DEY 
    BPL L0F27BE
L0F2809:
    RTS 

; start of data
.db $00
.db $06
; end of data
.db $0C
.db $12
.db $18
L0F280F:
    STA $3C
    LDA $0587
    BMI L0F2821
    LDA $2F
    STA $0588
    LDA $0587
    JSR $CA40
L0F2821:
    LDA $0589
    ASL 
    TAY 
    LDA $BFD1,Y
    STA $49
    LDA $BFD0,Y
    STA $48
    LDA $3C
    ASL 
    BCC L0F2837
    INC $49
L0F2837:
    TAY 
    LDA ($48),Y
    STA $06
    INY 
    LDA ($48),Y
    STA $07
    LDY #0
    LDA ($06),Y
    STA $48
    INY 
    LDA ($06),Y
    STA $49
    INY 
    STY $19
    LDY #0
    BEQ L0F28AF
L0F2853:
    LDA ($48),Y
    STA $08
    LDA $41
    BEQ L0F286B
    LDA $08
    PHA 
    AND #64
    EOR #64
    STA $08
    PLA 
    AND #191
    ORA $08
    STA $08
L0F286B:
    LDA $08
    ORA $3F
    ORA $3E
    STA $0202,X
    INY 
    LDA ($48),Y
    INY 
    CLC 
    ADC $3A
    SEC 
    SBC #1
    STA $0200,X
    STY $18
    LDY $19
    LDA ($06),Y
    STA $0201,X
    INC $19
    LDY $18
    LDA ($48),Y
    INY 
    PHA 
    LDA $41
    BEQ L0F28A0
    PLA 
    JSR $C5BA
    SEC 
    SBC #8
    JMP $E8A1

L0F28A0:
    PLA 
    CLC 
    ADC $3B
    STA $0203,X
    LDX $3D
    INX 
    INX 
    INX 
    INX 
    STX $3D
L0F28AF:
    LDX $3D
    CPX #252
    BCS L0F28BD
    LDA ($48),Y
    AND #240
    CMP #240
    BNE L0F2853
L0F28BD:
    LDA $0587
    BMI L0F28CD
    LDA $0588
    JSR $CA40
    LDA #255
    STA $0587
L0F28CD:
    LDA #0
    STA $41
    STA $3F
    STA $3E
    STA $0589
    RTS 

; start of data
.db $0A
.db $08
.db $09
.db $03
.db $EF
; end of data
.db $00
.db $00
.db $1F
; start of data
.db $0E
; end of data
.db $1F
; start of data
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
; end of data
.db $1F
; start of data
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
; end of data
.db $1F
; start of data
.db $0E
.db $1F
.db $0E
; end of data
.db $1F
; start of data
.db $0E
; end of data
.db $1F
; start of data
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
; end of data
.db $1F
; start of data
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
; end of data
.db $1F
; start of data
.db $0E
.db $09
.db $09
.db $00
.db $01
.db $00
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
.db $04
.db $04
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $0B
.db $0B
.db $0B
.db $0B
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
; end of data
.db $03
; start of data
.db $03
.db $0D
; end of data
.db $04
.db $04
; start of data
.db $05
.db $05
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $03
; end of data
.db $03
; start of data
.db $03
.db $09
.db $14
; end of data
.db $1F
.db $0E
.db $1F
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
.db $1F
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
.db $1F
.db $0E
; start of data
.db $1F
; end of data
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
.db $1F
.db $0E
.db $1F
; start of data
.db $0E
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $0E
; end of data
.db $1F
.db $0E
; start of data
.db $0C
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
; end of data
.db $05
; start of data
.db $05
; end of data
.db $05
; start of data
.db $09
.db $0A
.db $01
.db $0C
.db $0C
.db $09
.db $06
.db $06
; end of data
.db $0C
; start of data
.db $0C
.db $0C
.db $0C
.db $06
; end of data
.db $06
; start of data
.db $06
.db $06
.db $06
.db $06
.db $06
; end of data
.db $00
.db $00
.db $06
; start of data
.db $0C
.db $0C
.db $0C
.db $11
.db $0C
.db $0C
.db $0C
; end of data
.db $0C
; start of data
.db $0C
.db $0C
.db $0C
; end of data
.db $0C
; start of data
.db $0C
.db $0C
.db $0C
.db $0C
.db $08
.db $00
.db $09
.db $00
.db $08
.db $08
.db $00
.db $00
.db $00
.db $00
.db $0F
.db $00
.db $0C
.db $0C
.db $0C
.db $0C
; end of data
.db $0C
.db $06
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
.db $04
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
; start of data
.db $0C
.db $09
.db $04
; end of data
.db $0C
; start of data
.db $0D
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
; end of data
.db $0C
.db $0C
.db $00
.db $00
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $0E
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $09
.db $09
.db $00
.db $01
.db $00
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
.db $04
.db $04
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $0B
.db $0B
.db $0B
.db $0B
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
; end of data
.db $03
; start of data
.db $03
.db $0D
; end of data
.db $04
.db $04
; start of data
.db $05
.db $05
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $07
.db $03
.db $03
.db $03
.db $09
.db $14
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
; end of data
.db $0E
; start of data
.db $1F
.db $0C
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $05
.db $09
.db $0A
.db $01
.db $0C
.db $0C
.db $09
.db $06
.db $06
; end of data
.db $0C
; start of data
.db $0C
.db $0C
.db $0C
.db $06
; end of data
.db $06
; start of data
.db $06
.db $06
.db $06
.db $06
.db $06
; end of data
.db $00
.db $00
.db $06
; start of data
.db $0C
.db $0C
.db $0C
.db $11
.db $0C
.db $0C
.db $0C
; end of data
.db $0C
; start of data
.db $0C
.db $0C
.db $0C
; end of data
.db $0C
; start of data
.db $0C
.db $0C
.db $0C
.db $0C
.db $08
.db $00
.db $09
.db $00
.db $08
.db $08
.db $00
.db $00
.db $00
.db $00
.db $0F
.db $00
.db $0C
.db $0C
.db $0C
.db $0C
; end of data
.db $0C
.db $06
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
.db $0C
; start of data
.db $0C
.db $09
.db $04
; end of data
.db $0C
; start of data
.db $0D
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
; end of data
.db $0C
.db $0C
; start of data
.db $0A
.db $EB
.db $20
.db $EB
.db $36
.db $EB
.db $4C
.db $EB
.db $62
.db $EB
.db $78
.db $EB
.db $8E
.db $EB
.db $A4
.db $EB
.db $BA
.db $EB
.db $D0
.db $EB
.db $E6
.db $EB
.db $FC
.db $EB
.db $12
.db $EC
.db $28
.db $EC
.db $3E
.db $EC
.db $54
.db $EC
.db $6A
.db $EC
.db $80
.db $EC
.db $96
.db $EC
.db $AC
.db $EC
.db $C2
.db $EC
.db $D8
.db $EC
.db $01
.db $03
; end of data
.db $06
; start of data
.db $FF
; end of data
.db $FF
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $FF
.db $01
; end of data
.db $03
.db $01
.db $01
.db $01
.db $01
.db $FF
; start of data
.db $01
.db $02
; end of data
.db $03
; start of data
.db $FF
.db $FF
.db $FF
; end of data
.db $01
.db $FF
; start of data
.db $01
; end of data
.db $FF
.db $02
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
; end of data
.db $03
.db $01
.db $01
.db $01
.db $01
.db $FF
; start of data
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $FF
.db $02
.db $01
.db $01
.db $FF
.db $FF
.db $01
.db $01
.db $01
; end of data
.db $01
.db $01
.db $01
.db $01
; start of data
.db $01
.db $03
; end of data
.db $05
; start of data
.db $FF
.db $FF
.db $FF
.db $01
; end of data
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
; end of data
.db $03
.db $01
.db $01
.db $01
.db $01
.db $06
; start of data
.db $01
; end of data
.db $01
.db $01
.db $01
.db $01
; start of data
.db $01
.db $01
; end of data
.db $01
; start of data
.db $01
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $01
; end of data
.db $FF
; start of data
.db $FF
.db $01
.db $01
.db $01
; end of data
.db $01
.db $01
.db $01
.db $01
; start of data
.db $01
.db $02
; end of data
.db $03
; start of data
.db $FF
.db $04
; end of data
.db $FF
.db $01
.db $FF
.db $01
; start of data
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $FF
.db $01
; end of data
.db $02
.db $01
.db $01
.db $01
.db $01
.db $04
; start of data
.db $01
.db $03
; end of data
.db $05
; start of data
.db $06
; end of data
.db $FF
; start of data
.db $FF
.db $01
.db $FF
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $FF
.db $01
.db $03
; end of data
.db $01
.db $01
.db $01
; start of data
.db $01
; end of data
.db $06
; start of data
.db $01
.db $02
.db $03
.db $04
.db $04
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $02
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
; end of data
.db $01
.db $01
.db $01
.db $04
; start of data
.db $01
.db $01
.db $03
; end of data
.db $04
; start of data
.db $04
; end of data
.db $FF
.db $01
; start of data
.db $FF
.db $01
; end of data
.db $FF
.db $02
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
; end of data
.db $01
.db $01
.db $01
.db $01
.db $04
; start of data
.db $01
.db $01
; end of data
.db $02
.db $04
; start of data
.db $04
; end of data
.db $FF
.db $01
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
; end of data
.db $01
.db $01
.db $01
; start of data
.db $01
; end of data
.db $04
; start of data
.db $01
.db $02
.db $03
.db $04
.db $04
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $02
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
; end of data
.db $01
.db $01
.db $01
.db $04
; start of data
.db $01
.db $02
.db $03
.db $FF
.db $03
; end of data
.db $FF
; start of data
.db $01
.db $FF
.db $01
; end of data
.db $FF
.db $02
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
; end of data
.db $02
.db $01
.db $01
.db $01
.db $01
.db $03
; start of data
.db $01
.db $02
.db $03
.db $FF
.db $03
.db $FF
; end of data
.db $01
.db $FF
; start of data
.db $01
.db $FF
.db $02
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
; end of data
.db $01
.db $01
.db $01
.db $01
.db $03
; start of data
.db $01
.db $02
.db $03
.db $FF
.db $03
; end of data
.db $FF
; start of data
.db $01
.db $FF
.db $01
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $FF
.db $01
; end of data
.db $02
; start of data
.db $01
; end of data
.db $01
.db $01
.db $01
.db $03
; start of data
.db $01
.db $01
.db $02
.db $FF
.db $03
.db $FF
.db $01
; end of data
.db $FF
; start of data
.db $01
.db $FF
.db $02
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
; end of data
.db $01
.db $01
.db $01
.db $03
; start of data
.db $01
.db $01
.db $02
.db $FF
.db $03
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $02
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
; end of data
.db $01
.db $01
; start of data
.db $01
; end of data
.db $03
; start of data
.db $01
.db $02
; end of data
.db $03
; start of data
.db $FF
; end of data
.db $04
.db $FF
.db $01
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $FF
.db $01
.db $02
.db $01
; end of data
.db $01
.db $01
.db $01
.db $04
; start of data
.db $01
.db $02
; end of data
.db $03
.db $FF
.db $04
.db $FF
.db $01
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $02
.db $01
; start of data
.db $FF
; end of data
.db $FF
; start of data
.db $FF
.db $01
.db $02
; end of data
.db $01
.db $01
.db $01
; start of data
.db $01
; end of data
.db $04
; start of data
.db $01
.db $01
; end of data
.db $02
; start of data
.db $FF
.db $03
.db $FF
; end of data
.db $01
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
; end of data
.db $01
.db $01
; start of data
.db $01
; end of data
.db $03
; start of data
.db $01
.db $03
; end of data
.db $05
; start of data
.db $FF
.db $FF
.db $FF
.db $01
; end of data
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $01
.db $FF
; end of data
.db $FF
; start of data
.db $FF
.db $01
.db $02
; end of data
.db $01
.db $01
.db $01
.db $01
.db $06
; start of data
.db $01
.db $02
.db $02
.db $04
.db $04
.db $FF
.db $01
.db $FF
.db $01
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
; end of data
.db $01
.db $01
; start of data
.db $01
; end of data
.db $04
; start of data
.db $01
.db $02
; end of data
.db $03
; start of data
.db $FF
.db $FF
.db $FF
.db $01
.db $FF
.db $01
.db $FF
; end of data
.db $02
; start of data
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
; end of data
.db $01
.db $01
.db $01
; start of data
.db $01
; end of data
.db $FF
; start of data
.db $00
.db $28
.db $00
.db $00
.db $1E
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $14
; end of data
.db $00
; start of data
.db $1E
.db $00
; end of data
.db $00
; start of data
.db $00
; end of data
.db $00
; start of data
.db $28
.db $00
.db $3C
; end of data
.db $00
.db $00
.db $00
.db $00
; start of data
.db $32
.db $ED
.db $39
.db $ED
.db $40
.db $ED
.db $47
.db $ED
.db $4E
.db $ED
.db $55
.db $ED
.db $5C
.db $ED
.db $63
.db $ED
.db $6A
.db $ED
.db $71
.db $ED
.db $78
.db $ED
.db $7F
.db $ED
.db $86
.db $ED
.db $8D
.db $ED
.db $94
.db $ED
.db $9B
.db $ED
.db $A2
.db $ED
.db $A9
.db $ED
.db $B0
.db $ED
.db $B7
.db $ED
.db $BE
.db $ED
.db $C5
.db $ED
.db $CC
.db $ED
.db $09
.db $03
.db $05
.db $00
.db $05
.db $18
.db $28
.db $10
.db $02
.db $02
.db $00
.db $0C
.db $22
.db $46
.db $08
.db $03
.db $09
.db $00
.db $07
.db $1A
.db $28
.db $0C
.db $05
.db $08
.db $00
.db $08
.db $1C
.db $50
.db $0F
.db $01
.db $05
.db $00
.db $0C
.db $28
.db $50
.db $0A
.db $01
.db $03
.db $00
.db $05
.db $1A
.db $23
.db $12
.db $07
.db $0C
.db $00
.db $0D
.db $28
.db $C8
.db $08
.db $08
.db $0A
.db $00
.db $04
.db $18
.db $28
.db $0B
.db $0B
.db $0E
.db $00
.db $07
.db $1E
.db $50
.db $0F
.db $10
.db $12
.db $00
.db $0B
.db $24
.db $B4
.db $05
.db $01
.db $01
.db $00
.db $01
.db $24
.db $0F
.db $09
.db $01
.db $02
.db $00
.db $03
.db $18
.db $28
.db $0C
.db $06
.db $06
.db $00
.db $06
.db $1E
.db $50
.db $07
.db $01
.db $02
.db $00
.db $02
.db $1A
.db $1E
.db $08
.db $03
.db $04
.db $00
.db $05
.db $1C
.db $50
.db $0A
.db $0C
.db $08
.db $00
.db $04
.db $16
.db $64
.db $0A
.db $01
.db $02
.db $00
.db $08
.db $1E
.db $1E
.db $10
.db $0A
.db $12
.db $00
.db $0A
.db $20
.db $3C
.db $0C
.db $08
.db $07
.db $00
.db $06
.db $20
.db $B4
.db $10
.db $08
.db $08
.db $00
.db $0A
.db $28
.db $B4
.db $0B
.db $01
.db $01
.db $00
.db $0B
.db $B6
.db $00
.db $16
.db $06
.db $04
.db $00
.db $12
.db $28
.db $C8
.db $10
.db $0E
.db $0E
.db $0A
.db $0A
.db $24
; end of data
.db $C8
; start of data
.db $07
.db $04
.db $07
.db $08
.db $08
.db $04
.db $09
.db $04
.db $05
.db $07
.db $04
.db $04
.db $05
.db $04
.db $04
.db $04
.db $05
.db $04
.db $04
.db $08
.db $05
.db $04
; end of data
.db $06
; start of data
.db $02
.db $01
.db $07
.db $05
.db $0C
.db $00
.db $06
.db $01
.db $06
.db $0F
.db $00
.db $00
.db $02
.db $00
.db $08
.db $0E
.db $03
.db $04
.db $09
.db $06
.db $14
.db $07
.db $04
.db $07
.db $08
; end of data
.db $0E
; start of data
.db $02
.db $08
.db $04
.db $02
; end of data
.db $08
.db $01
.db $00
.db $05
.db $0A
.db $0B
.db $0D
.db $07
.db $02
.db $00
; start of data
.db $0A
; end of data
.db $04
.db $01
; start of data
.db $04
.db $07
; end of data
.db $05
; start of data
.db $0C
; end of data
.db $04
; start of data
.db $06
.db $08
; end of data
.db $0F
; start of data
.db $12
.db $09
.db $05
.db $0C
.db $06
.db $B4
.db $74
.db $D4
.db $74
.db $F4
.db $74
.db $14
.db $75
.db $34
.db $75
.db $54
.db $75
.db $74
.db $75
.db $94
.db $75
.db $B4
.db $75
.db $D4
.db $75
.db $F4
.db $75
.db $14
.db $76
.db $34
.db $76
.db $54
.db $76
.db $74
.db $76
.db $94
.db $76
.db $B4
.db $76
.db $D4
.db $76
.db $F4
.db $76
.db $14
.db $77
.db $34
.db $77
.db $54
.db $77
.db $74
.db $77
.db $94
.db $77
.db $B4
.db $77
.db $D4
.db $77
.db $F4
.db $77
.db $14
.db $78
.db $34
.db $78
.db $54
.db $78
.db $8F
.db $6E
.db $AF
.db $6E
.db $CF
.db $6E
.db $EF
.db $6E
.db $0F
.db $6F
.db $2F
.db $6F
.db $4F
.db $6F
.db $6F
.db $6F
.db $8F
.db $6F
.db $AF
.db $6F
.db $CF
.db $6F
.db $EF
.db $6F
.db $0F
.db $70
.db $2F
.db $70
.db $4F
.db $70
.db $6F
.db $70
.db $8F
.db $70
.db $AF
.db $70
.db $CF
.db $70
.db $EF
.db $70
.db $0F
.db $71
.db $2F
.db $71
.db $4F
.db $71
.db $6F
.db $71
.db $8F
.db $71
.db $AF
.db $71
.db $CF
.db $71
.db $EF
.db $71
.db $0F
.db $72
.db $2F
.db $72
.db $4F
.db $72
.db $6F
.db $72
.db $8F
.db $72
.db $AF
.db $72
.db $CF
.db $72
.db $EF
.db $72
.db $0F
.db $73
.db $2F
.db $73
.db $4F
.db $73
.db $6F
.db $73
.db $8F
.db $73
.db $AF
.db $73
.db $CF
.db $73
.db $EF
.db $73
.db $0F
.db $74
.db $74
.db $78
.db $94
.db $78
.db $B4
.db $78
.db $D4
.db $78
.db $F4
.db $78
.db $14
.db $79
.db $34
.db $79
.db $54
.db $79
.db $74
.db $79
.db $94
.db $79
.db $B4
.db $79
.db $D4
.db $79
.db $F4
.db $79
.db $14
.db $7A
.db $34
.db $7A
.db $54
.db $7A
.db $74
.db $7A
.db $94
.db $7A
.db $B4
.db $7A
.db $D4
.db $7A
.db $F4
.db $7A
.db $14
.db $7B
.db $34
.db $7B
.db $54
.db $7B
.db $74
.db $7B
.db $94
.db $7B
.db $B4
.db $7B
.db $D4
.db $7B
.db $F4
.db $7B
.db $14
.db $7C
.db $06
.db $29
.db $08
.db $29
.db $0A
.db $27
.db $0B
.db $24
.db $09
.db $22
.db $09
.db $1F
.db $0B
.db $1D
; end of data
.db $1B
.db $26
.db $18
.db $23
.db $1C
.db $21
; start of data
.db $1C
.db $1F
; end of data
.db $19
.db $1F
.db $16
.db $20
.db $19
.db $1C
.db $15
.db $1C
; start of data
.db $0B
.db $1B
.db $0B
.db $18
; end of data
.db $0E
.db $1A
; start of data
.db $11
.db $1A
.db $10
.db $16
.db $16
.db $16
.db $19
.db $13
.db $19
.db $18
.db $1C
.db $12
.db $0F
.db $13
.db $15
.db $12
.db $08
.db $17
.db $05
.db $17
.db $03
.db $18
.db $03
.db $15
.db $05
.db $12
.db $09
.db $10
.db $08
.db $0D
.db $04
.db $0C
.db $04
.db $09
.db $04
.db $06
.db $0A
.db $08
.db $09
.db $0B
.db $0E
.db $0D
.db $0E
.db $0A
.db $08
.db $05
.db $07
.db $03
.db $1A
.db $0C
.db $1B
.db $09
.db $18
.db $0A
.db $1A
.db $06
.db $1A
.db $03
.db $15
.db $03
.db $04
.db $29
; end of data
.db $0D
.db $24
.db $07
.db $1F
; start of data
.db $0B
.db $1C
; end of data
.db $1B
.db $29
.db $18
.db $26
.db $1E
.db $1F
.db $16
.db $21
; start of data
.db $11
.db $1C
.db $0E
.db $16
.db $0D
.db $13
.db $18
.db $16
.db $1E
.db $12
; end of data
.db $1B
.db $10
; start of data
.db $15
.db $11
.db $05
.db $15
.db $02
.db $18
.db $01
.db $15
.db $08
.db $10
; end of data
.db $1D
.db $04
; start of data
.db $04
.db $0B
.db $10
.db $0D
.db $10
.db $0A
; end of data
.db $0C
.db $08
.db $0A
.db $05
; start of data
.db $17
.db $0A
.db $1C
.db $06
; end of data
.db $1C
.db $03
; start of data
.db $13
.db $02
.db $07
.db $02
.db $03
.db $06
.db $08
.db $28
.db $34
.db $F0
.db $37
.db $F0
; end of data
.db $3B
.db $F0
.db $3E
.db $F0
.db $42
.db $F0
.db $45
.db $F0
; start of data
.db $49
.db $F0
; end of data
.db $4D
.db $F0
.db $50
.db $F0
.db $53
.db $F0
.db $56
.db $F0
.db $5A
.db $F0
.db $5E
.db $F0
.db $61
.db $F0
.db $64
.db $F0
; start of data
.db $67
.db $F0
.db $6A
.db $F0
.db $6D
.db $F0
.db $6F
.db $F0
.db $73
.db $F0
.db $78
.db $F0
.db $7D
.db $F0
.db $80
.db $F0
.db $83
.db $F0
.db $87
.db $F0
.db $8B
.db $F0
.db $8E
.db $F0
.db $91
.db $F0
.db $95
.db $F0
.db $99
.db $F0
.db $9D
.db $F0
.db $A0
.db $F0
.db $A4
.db $F0
.db $A8
.db $F0
.db $AB
.db $F0
.db $AE
.db $F0
.db $B1
.db $F0
.db $B5
.db $F0
.db $B8
.db $F0
.db $BC
.db $F0
.db $BF
.db $F0
; end of data
.db $C2
.db $F0
; start of data
.db $C5
.db $F0
.db $C8
.db $F0
.db $CB
.db $F0
.db $CE
.db $F0
.db $D1
.db $F0
.db $D4
.db $F0
; end of data
.db $D7
.db $F0
.db $D9
.db $F0
.db $DB
.db $F0
.db $DD
.db $F0
.db $E0
.db $F0
.db $E2
.db $F0
.db $E5
.db $F0
.db $E7
.db $F0
.db $E9
.db $F0
.db $ED
.db $F0
.db $EF
.db $F0
.db $F1
.db $F0
.db $F3
.db $F0
.db $F5
.db $F0
.db $F7
.db $F0
.db $F9
.db $F0
.db $FB
.db $F0
.db $FD
.db $F0
.db $FF
.db $F0
.db $01
.db $F1
.db $02
.db $F1
.db $05
.db $F1
.db $07
.db $F1
.db $09
.db $F1
.db $0B
.db $F1
.db $0D
.db $F1
.db $0F
.db $F1
.db $11
.db $F1
.db $13
.db $F1
.db $15
.db $F1
.db $17
.db $F1
.db $19
.db $F1
; start of data
.db $31
.db $02
.db $FF
.db $50
.db $01
.db $03
.db $FF
; end of data
.db $02
.db $04
.db $FF
.db $32
.db $05
.db $03
.db $FF
.db $04
.db $06
.db $FF
.db $33
.db $07
.db $05
.db $FF
; start of data
.db $34
.db $39
.db $06
.db $FF
; end of data
.db $36
.db $35
.db $FF
.db $36
.db $0A
.db $FF
.db $09
.db $0B
.db $FF
.db $37
.db $0C
.db $0A
.db $FF
.db $0B
.db $0D
.db $0E
.db $FF
.db $0C
.db $38
.db $FF
.db $0C
.db $0F
.db $FF
.db $39
.db $0E
.db $FF
; start of data
.db $34
.db $11
.db $FF
.db $1B
.db $10
.db $FF
.db $13
.db $FF
.db $39
.db $14
.db $12
.db $FF
.db $3A
.db $19
.db $13
.db $15
.db $FF
.db $3C
.db $16
.db $17
.db $14
.db $FF
.db $18
.db $15
.db $FF
.db $18
.db $15
.db $FF
.db $3D
.db $17
.db $16
.db $FF
.db $3B
.db $14
.db $1A
.db $FF
.db $3F
.db $19
.db $FF
.db $11
.db $1C
.db $FF
.db $40
.db $1B
.db $1D
.db $FF
.db $41
.db $1C
.db $1E
.db $FF
.db $42
.db $1F
.db $1D
.db $FF
.db $1E
.db $20
.db $FF
.db $43
.db $1F
.db $21
.db $FF
.db $26
.db $22
.db $20
.db $FF
.db $45
.db $21
.db $FF
.db $45
.db $24
.db $FF
.db $23
.db $25
.db $FF
.db $29
.db $24
.db $48
.db $FF
.db $21
.db $27
.db $FF
.db $46
.db $26
.db $28
.db $FF
.db $47
.db $27
.db $FF
.db $2A
.db $25
.db $FF
; end of data
.db $4E
.db $29
.db $FF
; start of data
.db $2C
.db $3F
.db $FF
.db $2B
.db $2D
.db $FF
.db $4A
.db $2C
.db $FF
.db $4B
.db $2F
.db $FF
.db $2E
.db $30
.db $FF
.db $4D
.db $2F
.db $FF
; end of data
.db $01
.db $FF
.db $04
.db $FF
.db $06
.db $FF
.db $10
.db $07
.db $FF
.db $08
.db $FF
.db $09
.db $08
.db $FF
.db $0B
.db $FF
.db $0D
.db $FF
.db $13
.db $07
.db $0F
.db $FF
.db $14
.db $FF
.db $19
.db $FF
.db $15
.db $FF
.db $18
.db $FF
.db $1A
.db $FF
.db $1A
.db $FF
.db $1C
.db $FF
.db $1D
.db $FF
.db $1F
.db $FF
.db $20
.db $FF
.db $FF
.db $23
.db $22
.db $FF
.db $27
.db $FF
.db $28
.db $FF
.db $25
.db $FF
.db $29
.db $FF
.db $2D
.db $FF
.db $2E
.db $FF
.db $2F
.db $FF
.db $30
.db $FF
.db $2A
.db $FF
.db $24
.db $FF
.db $02
.db $FF
; start of data
.db $3D
.db $41
.db $3F
.db $43
.db $47
.db $4E
.db $4F
.db $4A
.db $4D
.db $18
.db $1D
.db $1A
.db $20
.db $28
.db $2A
.db $24
.db $2D
.db $30
.db $81
.db $82
.db $83
.db $84
.db $85
.db $86
.db $87
.db $88
.db $89
.db $8A
.db $8B
.db $8C
.db $8D
.db $8E
.db $8F
.db $90
.db $91
.db $92
.db $93
.db $94
.db $95
.db $96
.db $97
.db $98
.db $9A
.db $9B
.db $9C
.db $9D
.db $9E
.db $A8
.db $A9
.db $AA
.db $AB
.db $D4
.db $00
.db $07
.db $1D
.db $11
.db $13
.db $0B
.db $18
.db $20
.db $1A
.db $3E
.db $2A
.db $28
.db $2D
.db $22
.db $FF
; end of data
.db $00
; start of data
.db $03
.db $04
.db $05
; end of data
.db $06
; start of data
.db $07
.db $08
.db $09
.db $0D
.db $0F
.db $10
.db $11
.db $13
; end of data
.db $00
; start of data
.db $01
.db $00
.db $02
; end of data
.db $03
; start of data
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $7E
.db $F1
.db $81
.db $F1
; end of data
.db $86
.db $F1
; start of data
.db $13
.db $84
.db $FF
.db $20
.db $84
.db $1F
.db $84
.db $FF
; end of data
.db $12
.db $84
.db $11
.db $84
.db $15
.db $84
.db $FF
; start of data
.db $0C
; end of data
.db $01
.db $3B
; start of data
.db $0C
; end of data
.db $01
.db $3C
; start of data
.db $93
; end of data
.db $02
.db $00
; start of data
.db $20
; end of data
.db $01
.db $26
; start of data
.db $1F
; end of data
.db $01
.db $27
; start of data
.db $0B
; end of data
.db $01
.db $07
; start of data
.db $13
.db $01
.db $21
.db $12
; end of data
.db $01
.db $0F
; start of data
.db $11
; end of data
.db $01
.db $0D
; start of data
.db $15
; end of data
.db $01
.db $0E
; start of data
.db $91
.db $01
.db $22
.db $9B
; end of data
.db $02
.db $01
; start of data
.db $9D
; end of data
.db $01
.db $1D
; start of data
.db $9D
; end of data
.db $03
.db $01
; start of data
.db $88
.db $01
.db $1C
.db $88
.db $03
.db $02
.db $96
; end of data
.db $02
.db $02
; start of data
.db $8F
.db $02
.db $03
.db $9E
.db $01
.db $25
.db $39
; end of data
.db $01
.db $44
; start of data
.db $8B
; end of data
.db $01
.db $44
; start of data
.db $8B
; end of data
.db $01
.db $1F
; start of data
.db $CD
.db $01
.db $48
.db $D7
.db $02
.db $04
.db $9E
.db $00
.db $01
.db $9C
.db $00
.db $09
.db $81
.db $00
.db $02
.db $9C
.db $00
.db $19
.db $94
.db $00
.db $1A
.db $82
.db $00
.db $1B
.db $81
.db $00
.db $80
.db $9E
.db $00
.db $11
.db $82
.db $00
.db $12
.db $8F
.db $00
.db $13
.db $98
.db $00
.db $21
.db $A9
.db $00
.db $39
.db $83
.db $00
.db $42
.db $CB
.db $00
.db $32
.db $CC
.db $00
.db $33
.db $CD
.db $00
.db $34
.db $CE
; end of data
.db $00
.db $35
; start of data
.db $CF
; end of data
.db $00
.db $36
; start of data
.db $FF
; end of data
.db $16
.db $F2
.db $19
.db $F2
.db $1C
.db $F2
; start of data
.db $1F
.db $F2
.db $22
.db $F2
; end of data
.db $9B
.db $FF
.db $01
.db $93
.db $FF
.db $0A
.db $BE
.db $FF
.db $0B
; start of data
.db $91
; end of data
.db $FF
.db $0C
; start of data
.db $86
.db $FF
.db $12
.db $BE
.db $01
; end of data
.db $37
; start of data
.db $BB
.db $05
; end of data
.db $31
; start of data
.db $C1
.db $03
; end of data
.db $0E
; start of data
.db $B5
.db $02
; end of data
.db $35
; start of data
.db $B3
.db $01
; end of data
.db $08
; start of data
.db $C2
.db $02
; end of data
.db $09
; start of data
.db $C7
.db $05
; end of data
.db $0A
; start of data
.db $C0
.db $02
; end of data
.db $0D
; start of data
.db $FF
.db $02
; end of data
.db $04
; start of data
.db $07
.db $0A
; end of data
.db $0A
; start of data
.db $93
.db $96
.db $84
.db $8B
.db $88
.db $9D
.db $82
.db $91
.db $81
.db $FF
; end of data
.db $01
.db $02
; start of data
.db $03
; end of data
.db $04
; start of data
.db $05
; end of data
.db $06
; start of data
.db $07
.db $08
.db $09
.db $D8
.db $FF
; end of data
L0F3258:
    STA $02
    JMP $F262

L0F325D:
    LDA #21
    JSR $C379
    LDY #0
    LDA ($00),Y
    CMP #0
    BEQ L0F327F
    LDY #18
    LDA ($00),Y
    CMP #255
    BEQ L0F325D
    CMP #240
    BEQ L0F325D
    LDY #0
    LDA ($00),Y
    CMP $02
    BNE L0F325D
    CLC 
L0F327F:
    RTS 

L0F3280:
    TYA 
    PHA 
    TXA 
    PHA 
    JSR $F2CB
    LDX #20
    BNE L0F3294
    TYA 
    PHA 
    TXA 
    PHA 
    JSR $F2D4
    LDX #20
L0F3294:
    JMP $F2A1

L0F3297:
    DEX 
    CPX #0
    BEQ L0F32C6
    LDA #21
    JSR $C379
    LDY #0
    LDA ($00),Y
    CMP #0
    BEQ L0F32C6
    LDY #18
    LDA ($00),Y
    CMP #255
    BEQ L0F3297
    CMP #240
    BEQ L0F3297
    LDY #16
    LDA ($00),Y
    CMP $02
    BNE L0F3297
    LDY #17
    LDA ($00),Y
    CMP $03
    BNE L0F3297
    CLC 
L0F32C6:
    PLA 
    TAX 
    PLA 
    TAY 
    RTS 

L0F32CB:
    LDA #174
    STA $00
    LDA #103
    STA $01
    RTS 

L0F32D4:
    LDA #83
    STA $00
    LDA #105
    STA $01
    RTS 

.db $A9
.db $15
.db $18
.db $65
.db $7A
.db $85
.db $7A
.db $90
.db $02
.db $E6
.db $7B
.db $A0
.db $00
.db $B1
.db $7A
.db $C9
.db $00
.db $F0
.db $0F
.db $A0
.db $12
.db $B1
.db $7A
.db $F0
.db $E7
.db $C9
.db $FF
.db $F0
.db $E3
.db $C9
.db $F0
.db $F0
.db $DF
.db $18
.db $60
.db $A9
.db $15
.db $18
.db $65
.db $78
.db $85
.db $78
.db $90
.db $02
.db $E6
.db $79
.db $A0
.db $00
.db $B1
.db $78
.db $C9
.db $00
.db $F0
.db $0D
.db $A0
.db $12
.db $B1
.db $78
.db $C9
.db $FF
.db $F0
.db $04
.db $C9
.db $F0
.db $D0
.db $E1
.db $18
.db $60
L0F3321:
    LDA #106
    STA $01
    LDA #248
    STA $00
    RTS 

L0F332A:
    STA $08
    LDX #0
    BEQ L0F333A
L0F3330:
    INX 
    CPX #35
    BCS L0F3343
    LDA #12
    JSR $C379
L0F333A:
    LDY #0
    LDA ($00),Y
    CMP $08
    BNE L0F3330
    CLC 
L0F3343:
    RTS 

L0F3344:
    STA $08
    LDA #1
    STA $09
L0F334A:
    LDY $09
    LDA $6CF6,Y
    BEQ L0F3379
    STA $0A
    LDA $09
    ASL 
    TAX 
    LDA $6CD2,X
    STA $00
    LDA $6CD3,X
    STA $01
    LDX #0
    BEQ L0F336F
L0F3365:
    INX 
    CPX $0A
    BCS L0F3379
    LDA #12
    JSR $C379
L0F336F:
    LDY #0
    LDA ($00),Y
    CMP $08
    BEQ L0F337F
    BNE L0F3365
L0F3379:
    DEC $09
    BPL L0F334A
.db $38
.db $60
L0F337F:
    LDA $09
    STA $74DD
    STX $74DE
    CLC 
    RTS 

L0F3389:
    STA $08
    LDX #0
    BEQ L0F3399
L0F338F:
    INX 
    CPX #20
    BCS L0F33A2
    LDA #21
    JSR $C379
L0F3399:
    LDY #0
    LDA ($00),Y
    CMP $08
    BNE L0F338F
    CLC 
L0F33A2:
    RTS 

L0F33A3:
    STA $08
    LDX #0
    BEQ L0F33B3
L0F33A9:
    INX 
    CPX #20
    BCS L0F33BC
    LDA #21
    JSR $C379
L0F33B3:
    LDY #0
    LDA ($00),Y
    CMP $08
    BNE L0F33A9
    CLC 
L0F33BC:
    RTS 

L0F33BD:
    TAY 
    PHA 
    TAX 
    PHA 
    LDY #0
    LDA ($7A),Y
    BMI L0F33D1
    LDA #153
    STA $6B
    LDA #225
    STA $6C
    BNE L0F33D9
L0F33D1:
    LDA #201
    STA $6B
    LDA #225
    STA $6C
L0F33D9:
    LDA #255
    LDY #9
L0F33DD:
    STA $05C4,Y
    DEY 
    BPL L0F33DD
    LDA #0
    STA $05C4
    LDY #10
    LDA ($7A),Y
    STA $05CE
    LDY #1
    LDX #0
L0F33F3:
    LDA $F459,X
    CMP #239
    BEQ L0F3426
    CMP ($7A),Y
    BEQ L0F3401
    INX 
    BPL L0F33F3
L0F3401:
    TXA 
    ASL 
    ASL 
    ASL 
    TAY 
    LDX #0
    STX $05C4
L0F340B:
    ROR $05CE
    BCC L0F3416
    LDA ($6B),Y
    STA $05C5,X
    INX 
L0F3416:
    INY 
    INC $05C4
    LDA $05C4
    CMP #8
    BCC L0F340B
    STX $05C4
    BCS L0F3454
L0F3426:
    LDY #11
    LDA ($7A),Y
    JSR $F460
    BCS L0F3435
    LDY #11
    LDA ($7A),Y
    BNE L0F344B
L0F3435:
    LDY #1
    LDA ($7A),Y
    CMP #12
    BEQ L0F3445
    CMP #13
    BEQ L0F3445
    CMP #20
    BNE L0F3449
L0F3445:
    LDA #1
    BNE L0F344B
L0F3449:
    LDA #0
L0F344B:
    LDY $05C4
    STA $05C5,Y
    INC $05C4
L0F3454:
    PLA 
    TAX 
    PLA 
    TAY 
    RTS 

; start of data
.db $0B
.db $0F
.db $10
.db $11
.db $12
.db $13
.db $EF
; end of data
L0F3460:
    STA $0B
    TXA 
    PHA 
    TYA 
    PHA 
    LDA #0
    STA $05EC
    LDY #1
    LDA ($7A),Y
    CMP #6
    BNE L0F347D
    LDA $0B
    CMP #4
    BEQ L0F34E7
    CMP #7
    BEQ L0F34E7
L0F347D:
    LDX $0B
    CPX #48
    BCS L0F3502
    LDA $DAFD,X
    AND #1
    BEQ L0F3498
.db $E0
.db $39
.db $D0
.db $04
.db $A0
.db $04
.db $D0
.db $2E
.db $E0
.db $3B
.db $F0
.db $51
.db $D0
.db $6A
L0F3498:
    LDA $D9F4,X
    BPL L0F34A7
    AND #127
    LDY #0
    CMP ($7A),Y
    BNE L0F34E7
    BEQ L0F34EB
L0F34A7:
    LDY #14
    CMP ($7A),Y
    BCS L0F34E7
    LDY #0
L0F34AF:
    LDA $0B
    CMP $F50C,Y
    BCC L0F34C0
    INY 
    STY $05EC
    CPY #6
    BCC L0F34AF
.db $B0
.db $42
L0F34C0:
    CPY #0
    BEQ L0F34EB
    DEY 
    TYA 
    ASL 
    TAY 
    LDA $F512,Y
    STA $10
    LDA $F513,Y
    STA $11
    LDY #1
    LDA ($7A),Y
    STA $0B
    LDY #0
L0F34DA:
    LDA ($10),Y
    CMP #239
    BEQ L0F34E7
    CMP $0B
    BEQ L0F34EB
    INY 
    BNE L0F34DA
L0F34E7:
    CLV 
    SEC 
    BCS L0F3507
L0F34EB:
    LDA $05EC
    CMP #3
    BNE L0F34FF
    LDY #0
    LDA ($7A),Y
    CMP #1
    BNE L0F34FF
    LDA $744A
    BEQ L0F34E7
L0F34FF:
    CLC 
    BCC L0F3507
L0F3502:
    CLC 
    LDA #128
    ADC #128
L0F3507:
    PLA 
    TAY 
    PLA 
    TAX 
    RTS 

; start of data
.db $02
.db $0B
.db $14
.db $17
.db $28
.db $30
.db $1C
.db $F5
.db $25
.db $F5
.db $2C
.db $F5
.db $31
.db $F5
.db $31
.db $F5
.db $01
.db $02
.db $03
.db $04
.db $05
.db $06
.db $07
.db $16
.db $EF
.db $08
.db $09
; end of data
.db $0A
.db $0B
.db $15
.db $0E
.db $EF
; start of data
.db $0D
.db $0C
.db $14
.db $15
; end of data
.db $EF
; start of data
.db $0F
.db $10
.db $11
.db $12
.db $13
.db $0B
; end of data
.db $EF
; start of data
.db $30
.db $31
.db $32
.db $33
.db $35
.db $03
.db $05
; end of data
.db $07
.db $0D
; start of data
.db $0D
; end of data
L0F3542:
    STA $0A
    TXA 
    PHA 
    TYA 
    PHA 
    LDX #0
    LDA $0A
L0F354C:
    CMP $F55E,X
    BCC L0F3556
    INX 
    CPX #4
    BCC L0F354C
L0F3556:
    STX $05EC
    PLA 
    TAY 
    PLA 
    TAX 
    RTS 

; start of data
.db $0B
.db $14
.db $30
.db $36
; end of data
L0F3562:
    LDA $00
    STA $02
    LDA $01
    STA $03
    RTS 

.db $60
L0F356C:
    LDA #4
    STA $06D1
    RTS 

L0F3572:
    LDA #1
    STA $06D1
    RTS 

L0F3578:
    LDA #8
    STA $06D1
    RTS 

L0F357E:
    LDA #16
    STA $06D5
    RTS 

L0F3584:
    LDA #2
    STA $06D1
    RTS 

L0F358A:
    LDX $7442
    BNE L0F35A1
    PHA 
    AND #15
    TAX 
    PLA 
    AND #240
    LSR 
    LSR 
    LSR 
    LSR 
    TAY 
    LDA $F5A2,X
    STA $06D0,Y
L0F35A1:
    RTS 

; start of data
.db $01
.db $02
.db $04
.db $08
.db $10
.db $20
.db $40
.db $80
; end of data
L0F35AA:
    LDA #0
    STA $74D4
L0F35AF:
    LDX $74D4
    LDA $6CF6,X
    BEQ L0F35CD
    LDA $74D4
    ASL 
    TAX 
    LDA $6CD2,X
    STA $02
    LDA $6CD3,X
    STA $03
    LDY #0
    LDA ($02),Y
    LDX $74D4
L0F35CD:
    STA $74D5,X
    INC $74D4
    LDA $74D4
    CMP #2
    BCC L0F35AF
    RTS 

L0F35DB:
    LDA #0
    STA $74D4
L0F35E0:
    JSR $F321
    LDX $74D4
    LDA $74D5,X
    BEQ L0F35FD
    JSR $F32A
    LDA $74D4
    ASL 
    TAX 
    LDA $00
    STA $6CD2,X
    LDA $01
    STA $6CD3,X
L0F35FD:
    INC $74D4
    LDA $74D4
    CMP #2
    BCC L0F35E0
    RTS 

L0F3608:
    LDA #0
    STA $74DC
    STA $02
    LDA $6CD2
    STA $00
    LDA $6CD3
    STA $01
L0F3619:
    LDX $02
    LDA $6CF6,X
    BEQ L0F3643
    LDA $02
    ASL 
    TAX 
    LDA $6CD3,X
    CMP $01
    BCC L0F3643
    BNE L0F3634
    LDA $6CD2,X
    CMP $00
    BCC L0F3643
L0F3634:
    LDA $6CD2,X
    STA $00
    LDA $6CD3,X
    STA $01
    LDA $02
    STA $74DC
L0F3643:
    INC $02
    LDA $02
    CMP #2
    BCC L0F3619
    LDX $74DC
    LDA $6CF6,X
    STA $00
    LDA #12
    STA $01
    JSR $C6C9
    LDA $74DC
    ASL 
    TAX 
    LDA $6CD2,X
    CLC 
    ADC $00
    STA $6D08
    LDA $6CD3,X
    ADC $01
    STA $6D09
    RTS 

.db $AE
.db $DD
.db $74
.db $AD
.db $DE
.db $74
.db $DD
.db $F6
.db $6C
.db $90
.db $03
.db $4C
.db $49
.db $F7
.db $20
.db $AA
.db $F5
.db $AD
.db $DD
.db $74
.db $0A
.db $AA
.db $BD
.db $D2
.db $6C
.db $85
.db $04
.db $BD
.db $D3
.db $6C
.db $85
.db $05
.db $AD
.db $DE
.db $74
.db $85
.db $00
.db $A9
.db $0C
.db $85
.db $01
.db $20
.db $C9
.db $C6
.db $A5
.db $00
.db $18
.db $65
.db $04
.db $85
.db $6B
.db $A5
.db $01
.db $65
.db $05
.db $85
.db $6C
.db $AE
.db $DD
.db $74
.db $BD
.db $F6
.db $6C
.db $38
.db $ED
.db $DE
.db $74
.db $85
.db $00
.db $A9
.db $0C
.db $85
.db $01
.db $20
.db $C9
.db $C6
.db $A5
.db $00
.db $85
.db $6E
.db $A5
.db $01
.db $85
.db $6F
.db $AE
.db $DD
.db $74
.db $BD
.db $F6
.db $6C
.db $85
.db $00
.db $A9
.db $0C
.db $85
.db $01
.db $20
.db $C9
.db $C6
.db $A5
.db $00
.db $18
.db $65
.db $04
.db $85
.db $7C
.db $A5
.db $01
.db $65
.db $05
.db $85
.db $7D
.db $20
.db $21
.db $F3
.db $A9
.db $00
.db $20
.db $2A
.db $F3
.db $A5
.db $00
.db $8D
.db $31
.db $74
.db $38
.db $E5
.db $7C
.db $85
.db $04
.db $A5
.db $01
.db $8D
.db $32
.db $74
.db $E5
.db $7D
.db $85
.db $05
.db $A5
.db $04
.db $05
.db $05
.db $D0
.db $07
.db $AD
.db $DE
.db $74
.db $F0
.db $15
.db $D0
.db $2F
.db $A5
.db $7C
.db $85
.db $00
.db $A5
.db $7D
.db $85
.db $01
.db $A5
.db $6B
.db $85
.db $02
.db $A5
.db $6C
.db $85
.db $03
.db $20
.db $09
.db $C2
.db $AD
.db $31
.db $74
.db $38
.db $E5
.db $6E
.db $85
.db $00
.db $AD
.db $32
.db $74
.db $E5
.db $6F
.db $85
.db $01
.db $A5
.db $6E
.db $85
.db $02
.db $A5
.db $6F
.db $85
.db $03
.db $A9
.db $00
.db $20
.db $25
.db $C2
.db $AE
.db $DD
.db $74
.db $AD
.db $DE
.db $74
.db $9D
.db $F6
.db $6C
.db $20
.db $DB
.db $F5
.db $20
.db $08
.db $F6
.db $18
.db $60
.db $38
.db $60
L0F374B:
    JSR $F5AA
    LDA $74DD
    ASL 
    TAX 
    LDA $6CD2,X
    STA $04
    LDA $6CD3,X
    STA $05
    LDX $74DD
    LDA $6CF6,X
    STA $00
    LDA #12
    STA $01
    JSR $C6C9
    LDA $00
    CLC 
    ADC $04
    STA $6B
    LDA $01
    ADC $05
    STA $6C
    LDA $74DE
    STA $00
    LDA #12
    STA $01
    JSR $C6C9
    LDA $00
    STA $6E
    LDA $01
    STA $6F
    JSR $F321
    LDA #0
    JSR $F32A
    LDA $00
    SEC 
    SBC $6B
    STA $4E
    LDA $01
    SBC $6C
    STA $4F
    LDA $4F
    ORA $4E
    BEQ L0F37DF
    LDA #12
    STA $50
    JSR $C6EB
    LDA $4F
    BNE L0F37EE
    LDX $4E
    BEQ L0F37DF
    LDA #12
    JSR $FA5F
    LDA $00
    CLC 
    ADC $6E
    STA $7C
    LDA $01
    ADC $6F
    STA $7D
L0F37C9:
    LDY #11
L0F37CB:
    LDA ($00),Y
    STA ($7C),Y
    DEY 
    BPL L0F37CB
    LDA #12
    JSR $FA5F
    LDA #12
    JSR $FA6F
    DEX 
    BNE L0F37C9
L0F37DF:
    LDX $74DD
    LDA $6CF6,X
    CLC 
    ADC $74DE
    STA $6CF6,X
    CLC 
    RTS 

L0F37EE:
.db $38
.db $60
.db $20
.db $AA
.db $F5
.db $A9
.db $00
.db $8D
.db $DE
.db $74
.db $AE
.db $DD
.db $74
.db $9D
.db $D5
.db $74
.db $9D
.db $C0
.db $6C
.db $20
.db $82
.db $F6
.db $4C
.db $C7
.db $F9
L0F3807:
    LDA #174
    STA $02
    LDA #103
    STA $03
    BNE L0F383E
L0F3811:
    JSR $F321
    LDA ($02),Y
    JSR $F32A
    BCS L0F3839
    LDY #11
L0F381D:
    LDA ($02),Y
    STA ($00),Y
    DEY 
    BPL L0F381D
    LDY #18
    LDA ($02),Y
    CMP #255
    BNE L0F3839
    LDA #255
    LDY #4
    STA ($00),Y
    LDA $7434
    LDY #11
    STA ($00),Y
L0F3839:
    LDA #21
    JSR $C384
L0F383E:
    LDY #0
    LDA ($02),Y
    BNE L0F3811
    JSR $F848
    RTS 

L0F3848:
    JSR $F608
    LDA #0
    STA $05BF
L0F3850:
    LDX $05BF
    LDA $6CF6,X
    BEQ L0F3889
    STA $05BE
    LDA $05BF
    ASL 
    TAX 
    LDA $6CD2,X
    STA $7A
    LDA $6CD3,X
    STA $7B
L0F386A:
    LDY #4
    LDA ($7A),Y
    CMP #255
    BNE L0F387F
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR $F8FF
    JMP $F884

L0F387F:
    LDA #12
    JSR $C9ED
    DEC $05BE
    BNE L0F386A
L0F3889:
    INC $05BF
    LDA $05BF
    CMP #2
    BCC L0F3850
    RTS 

L0F3894:
    JSR $F321
    LDA $7484
    JSR $F32A
    BCS L0F38AA
    LDY #11
L0F38A1:
    LDA $7484,Y
    STA ($00),Y
    DEY 
    BPL L0F38A1
    CLC 
L0F38AA:
    RTS 

L0F38AB:
    JSR $F321
    LDA $7484
    JSR $F32A
    BCS L0F38C1
    LDY #11
L0F38B8:
    LDA ($00),Y
    STA $7484,Y
    DEY 
    BPL L0F38B8
    CLC 
L0F38C1:
    RTS 

.db $20
.db $AB
.db $F8
.db $A5
.db $00
.db $85
.db $7C
.db $A5
.db $01
.db $85
.db $7D
.db $20
.db $21
.db $F3
.db $AD
.db $9F
.db $74
.db $20
.db $2A
.db $F3
.db $B0
.db $26
.db $A5
.db $01
.db $85
.db $6C
.db $A5
.db $00
.db $85
.db $6B
.db $A5
.db $7C
.db $85
.db $02
.db $A5
.db $7D
.db $85
.db $03
.db $A9
.db $0C
.db $85
.db $04
.db $A9
.db $00
.db $85
.db $05
.db $20
.db $09
.db $C2
.db $A5
.db $6C
.db $85
.db $01
.db $A5
.db $6B
.db $85
.db $00
.db $20
.db $9F
.db $F8
.db $60
L0F38FF:
    LDA $7484
    JSR $F344
    BCS L0F3935
    JSR $F8B6
    LDA $00
    STA $7C
    LDA $01
    STA $7D
    JSR $F5AA
    JSR $F936
    LDA $6E
    SEC 
    SBC #12
    STA $00
    LDA $6F
    SBC #0
    STA $01
    JSR $F89F
    LDX $74DD
    DEC $6CF6,X
    JSR $F5DB
    JSR $F608
    CLC 
L0F3935:
    RTS 

L0F3936:
    JSR $F321
    LDA #0
    JSR $F32A
    LDA $00
    STA $6E
    LDA $01
    STA $6F
    LDA $7C
    STA $02
    CLC 
    ADC #12
    STA $00
    LDA $7D
    STA $03
    ADC #0
    STA $01
    LDA $6E
    SEC 
    SBC $00
    STA $04
    LDA $6F
    SBC $01
    STA $05
    LDA $05
    ORA $04
    BEQ L0F396D
    JSR $C209
L0F396D:
    RTS 

.db $20
.db $21
.db $F3
.db $AD
.db $84
.db $74
.db $20
.db $2A
.db $F3
.db $B0
.db $4D
.db $A0
.db $04
.db $B1
.db $00
.db $C9
.db $FF
.db $F0
.db $45
.db $20
.db $B6
.db $F8
.db $A5
.db $00
.db $85
.db $7C
.db $A5
.db $01
.db $85
.db $7D
.db $20
.db $AA
.db $F5
.db $20
.db $36
.db $F9
.db $A5
.db $6E
.db $38
.db $E9
.db $0C
.db $85
.db $00
.db $A5
.db $6F
.db $E9
.db $00
.db $85
.db $01
.db $A9
.db $0C
.db $85
.db $02
.db $A9
.db $00
.db $85
.db $03
.db $20
.db $25
.db $C2
.db $20
.db $DB
.db $F5
.db $A9
.db $01
.db $8D
.db $DE
.db $74
.db $20
.db $4B
.db $F7
.db $A5
.db $6B
.db $85
.db $00
.db $A5
.db $6C
.db $85
.db $01
.db $20
.db $9F
.db $F8
.db $20
.db $DB
.db $F5
.db $20
.db $08
.db $F6
.db $60
.db $20
.db $CB
.db $F2
.db $A9
.db $00
.db $20
.db $89
.db $F3
.db $B0
.db $3B
.db $8E
.db $DE
.db $74
.db $A9
.db $00
.db $20
.db $21
.db $F3
.db $A9
.db $00
.db $20
.db $2A
.db $F3
.db $B0
.db $2C
L0F39E0:
    LDA #174
    STA $02
    LDA #103
    STA $03
L0F39E8:
    LDY #11
L0F39EA:
    LDA ($02),Y
    STA ($00),Y
    DEY 
    BPL L0F39EA
    LDY #18
    LDA ($02),Y
    CMP #255
    BNE L0F39FD
.db $A0
.db $04
.db $91
.db $00
L0F39FD:
    LDA #12
    JSR $C379
    LDA #21
    JSR $C384
    DEC $74DE
    BNE L0F39E8
L0F3A0C:
    RTS 

L0F3A0D:
    JSR $F2CB
    LDA #0
    JSR $F389
    BCS L0F3A0C
    STX $74DE
    JSR $F74B
    LDA $6B
    STA $00
    LDA $6C
    STA $01
    JSR $F9E0
    JSR $F5DB
    JSR $F608
    RTS 

.db $20
.db $CB
.db $F2
.db $A9
.db $00
.db $20
.db $89
.db $F3
.db $B0
.db $D3
.db $8E
.db $DE
.db $74
.db $20
.db $08
.db $F6
.db $20
.db $AA
.db $F5
.db $AD
.db $DD
.db $74
.db $0A
.db $AA
.db $AD
.db $08
.db $6D
.db $9D
.db $D2
.db $6C
.db $AD
.db $09
.db $6D
.db $9D
.db $D3
.db $6C
.db $AE
.db $DD
.db $74
.db $AD
.db $AE
.db $67
.db $9D
.db $D5
.db $74
.db $4C
.db $1A
.db $FA
L0F3A5F:
    STA $DC
    LDA $00
    SEC 
    SBC $DC
    STA $00
    LDA $01
    SBC #0
    STA $01
    RTS 

L0F3A6F:
    STA $DC
    LDA $7C
    SEC 
    SBC $DC
    STA $7C
    LDA $7D
    SBC #0
    STA $7D
    RTS 

L0F3A7F:
    CLC 
    ADC $6B
    STA $6B
    BCC L0F3A88
    INC $6C
L0F3A88:
    RTS 

L0F3A89:
    STA $10
    TYA 
    PHA 
    CPX #1
    BEQ L0F3AB9
    LDA $744E
    BEQ L0F3AAB
    CLC 
    ADC $744D
    TAY 
    LDA $744E
    STA $11
L0F3AA0:
    LDA $744E,Y
    STA $744F,Y
    DEY 
    DEC $11
    BNE L0F3AA0
L0F3AAB:
    LDA $10
    LDY $744D
    STA $744F,Y
    INC $744D
    JMP $FAC9

L0F3AB9:
    LDA $744D
    CLC 
    ADC $744E
    TAY 
    LDA $10
    STA $744F,Y
    INC $744E
    PLA 
    TAY 
    RTS 

L0F3ACC:
    PHA 
    TXA 
    PHA 
    TYA 
    PHA 
    LDA $2F
    STA $0571
    LDA #10
    JSR $CA40
    DEC $0570
    LDA $0570
    ASL 
    TAY 
    LDA $8000,Y
    STA $00
    LDA $8001,Y
    STA $01
    LDY #0
    LDA ($00),Y
    TAX 
    INY 
    CPY #7
    BEQ L0F3AFF
    LDA ($00),Y
    STA $0571,Y
    JMP $FAF2

L0F3AFF:
    LDA $6D9C,X
    AND $0572
    ORA $0575
    STA $6D9C,X
    LDA $6DCE,X
    AND $0573
    ORA $0576
    STA $6DCE,X
    LDA $6E32,X
    AND $0574
    ORA $0577
    STA $6E32,X
    LDA $0571
    JSR $CA40
    PLA 
    TAY 
    PLA 
    TAX 
    PLA 
    RTS 

L0F3B2F:
    LDY #0
    LDA $FB62,Y
    CMP #255
    BEQ L0F3B61
    CMP $7434
    BEQ L0F3B43
    INY 
    INY 
    INY 
    JMP $FB31

L0F3B43:
    INY 
    LDA $FB62,Y
    STA $00
    INY 
    LDA $FB62,Y
    STA $01
    LDA $05B8
    BNE L0F3B59
    LDA $00
    JMP $FB5B

L0F3B59:
    LDA $01
    STA $0570
    JSR $FACC
L0F3B61:
    RTS 

; start of data
.db $0C
.db $2A
.db $1B
.db $15
.db $42
.db $43
.db $FF
; end of data
L0F3B69:
    LDY #0
    LDA $FBBA,Y
    CMP #255
    BEQ L0F3B79
    STA $6E64,Y
    INY 
    JMP $FB6B

L0F3B79:
    LDY #0
    LDA $FB8F,Y
    CMP #255
    BEQ L0F3B8E
    TAX 
    INY 
    LDA $FB8F,Y
    STA $6E32,X
    INY 
    JMP $FB7B

L0F3B8E:
    RTS 

; start of data
.db $00
.db $10
.db $01
.db $01
.db $02
.db $03
.db $04
.db $08
.db $06
.db $07
.db $05
.db $01
.db $09
.db $03
.db $0C
.db $0F
.db $0F
.db $03
.db $10
.db $03
.db $11
.db $01
.db $12
.db $04
.db $13
.db $1F
.db $16
.db $0F
.db $1D
.db $01
.db $1F
.db $01
.db $24
.db $05
.db $28
.db $03
.db $2A
.db $01
.db $2B
.db $01
.db $2D
.db $01
.db $FF
.db $33
.db $33
.db $33
.db $33
.db $55
.db $33
.db $33
.db $33
.db $33
.db $33
.db $FF
; end of data
L0F3BC5:
    LDA #0
    STA $3D
    LDA $29
    BEQ L0F3BD0
    JMP $FBD3

L0F3BD0:
    JMP $8784

L0F3BD3:
    JSR $C288
    LDA $2B
    JSR $C34C
; start of data
.db $E3
.db $FB
.db $ED
.db $FB
.db $FA
.db $FB
; end of data
.db $36
.db $FC
L0F3BE3:
    LDX #5
    STX $4A
    DEX 
    TXA 
    JSR $CA94
    RTS 

L0F3BED:
    LDA #2
    JSR $CA40
    JSR $BFFA
    LDA #6
    JMP $CA40

L0F3BFA:
    LDA #16
    STA $9E
    STA $91
    STA $050D
    LDA #0
    STA $29
    STA $2A
    STA $8A
    STA $2C
    STA $059C
    STA $058D
    STA $058E
    STA $058F
    STA $63
    STA $747C
    STA $5E
    LDA #1
    STA $06D0
    LDA $FC43
    BEQ L0F3C35
.db $A9
.db $0B
.db $8D
.db $AF
.db $05
.db $A9
.db $01
.db $85
.db $29
.db $E6
.db $2B
L0F3C35:
    RTS 

.db $A9
.db $01
.db $85
.db $9D
.db $A9
.db $05
.db $85
.db $4A
.db $A9
.db $0B
.db $4C
.db $94
.db $CA
; start of data
.db $00
; end of data
.db $10
.db $00
.db $20
.db $00
.db $70
.db $F8
.db $CD
.db $47
.db $FC
.db $2F
.db $8F
.db $E4
.db $00
.db $00
.db $00
.db $00
.db $08
.db $00
.db $02
.db $00
.db $8B
.db $56
.db $08
.db $80
.db $8C
.db $4C
.db $01
.db $52
.db $00
.db $02
.db $00
.db $04
.db $10
.db $00
.db $00
.db $00
.db $13
.db $64
.db $64
.db $2E
.db $08
.db $EA
.db $67
.db $2B
.db $05
.db $20
.db $00
.db $80
.db $00
.db $0A
.db $00
.db $00
.db $00
.db $CA
.db $3A
.db $10
.db $9C
.db $A7
.db $84
.db $40
.db $10
.db $00
.db $02
.db $00
.db $40
.db $91
.db $01
.db $40
.db $23
.db $32
.db $0C
.db $4C
.db $59
.db $07
.db $E6
.db $26
.db $0A
.db $00
.db $01
.db $01
.db $10
.db $21
.db $00
.db $40
.db $16
.db $96
.db $28
.db $45
.db $38
.db $59
.db $45
.db $58
.db $00
.db $04
.db $00
.db $00
.db $00
.db $48
.db $00
.db $0C
.db $A5
.db $05
.db $72
.db $39
.db $58
.db $2A
.db $68
.db $19
.db $00
.db $02
.db $0B
.db $00
.db $21
.db $40
.db $00
.db $02
.db $C7
.db $42
.db $C5
.db $92
.db $40
.db $58
.db $94
.db $14
.db $00
.db $00
.db $00
.db $08
.db $05
.db $01
.db $02
.db $00
.db $07
.db $10
.db $54
.db $92
.db $62
.db $67
.db $BA
.db $41
.db $40
.db $06
.db $04
.db $30
.db $00
.db $00
.db $05
.db $00
.db $05
.db $00
.db $EE
.db $8A
.db $41
.db $67
.db $00
.db $57
.db $03
.db $00
.db $00
.db $00
.db $00
.db $00
.db $80
.db $00
.db $00
.db $8C
.db $82
.db $11
.db $28
.db $93
.db $0C
.db $71
.db $00
.db $20
.db $02
.db $00
.db $00
.db $00
.db $10
.db $00
.db $8D
.db $09
.db $02
.db $00
.db $46
.db $50
.db $13
.db $48
.db $80
.db $40
.db $04
.db $00
.db $50
.db $00
.db $00
.db $00
.db $43
.db $CE
.db $30
.db $1A
.db $19
.db $B1
.db $61
.db $4C
.db $08
.db $04
.db $00
.db $00
.db $00
.db $08
.db $00
.db $00
.db $D0
.db $13
.db $02
.db $0D
.db $08
.db $C5
.db $20
.db $05
.db $01
.db $A0
.db $01
.db $00
.db $80
.db $20
.db $00
.db $00
.db $CE
.db $74
.db $04
.db $A2
.db $92
.db $91
.db $7B
.db $C2
.db $08
.db $04
.db $40
.db $01
.db $63
.db $80
.db $01
.db $20
.db $84
.db $95
.db $79
.db $08
.db $0B
.db $42
.db $14
.db $65
.db $00
.db $40
.db $A1
.db $40
.db $00
.db $40
.db $02
.db $01
.db $04
.db $1B
.db $09
.db $0A
.db $B0
.db $25
.db $63
.db $22
.db $84
.db $00
.db $12
.db $00
.db $00
.db $00
.db $80
.db $00
.db $0E
.db $00
.db $C0
.db $D4
.db $46
.db $F5
.db $00
.db $32
.db $00
.db $22
.db $00
.db $0C
.db $00
.db $00
.db $00
.db $42
.db $7B
.db $0B
.db $49
.db $2C
.db $0C
.db $84
.db $CB
.db $FC
.db $40
.db $00
.db $00
.db $80
.db $00
.db $00
.db $00
.db $10
.db $10
.db $D0
.db $86
.db $06
.db $44
.db $C4
.db $03
.db $88
.db $01
.db $04
.db $00
.db $00
.db $01
.db $08
.db $00
.db $42
.db $B0
.db $E9
.db $64
.db $A8
.db $00
.db $05
.db $B4
.db $A8
.db $08
.db $00
.db $10
.db $80
.db $00
.db $21
.db $00
.db $00
.db $31
.db $9A
.db $63
.db $02
.db $7E
.db $E1
.db $18
.db $51
.db $02
.db $10
.db $80
.db $00
.db $20
.db $40
.db $00
.db $00
.db $D6
.db $E2
.db $8E
.db $AC
.db $88
.db $CF
.db $FE
.db $C8
.db $40
.db $12
.db $60
.db $00
.db $01
.db $10
.db $09
.db $08
.db $A4
.db $4B
.db $E1
.db $08
.db $94
.db $1A
.db $50
.db $06
.db $00
.db $24
.db $80
.db $00
.db $20
.db $00
.db $00
.db $00
.db $20
.db $5D
.db $1C
.db $2A
.db $88
.db $21
.db $85
.db $20
.db $00
.db $00
.db $40
.db $00
.db $80
.db $00
.db $0C
.db $00
.db $54
.db $50
.db $36
.db $26
.db $54
.db $C0
.db $66
.db $24
.db $20
.db $04
.db $00
.db $20
.db $21
.db $00
.db $74
.db $00
.db $E2
.db $C9
.db $12
.db $C4
.db $66
.db $C5
.db $72
.db $29
.db $00
.db $20
.db $00
.db $10
.db $A0
.db $00
.db $00
.db $00
.db $E2
.db $09
.db $05
.db $88
.db $04
.db $01
.db $48
.db $54
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $B6
.db $42
.db $04
.db $00
.db $00
.db $00
.db $00
.db $00
.db $20
.db $49
.db $B5
.db $AA
.db $AA
.db $4A
.db $24
.db $01
.db $51
.db $DA
.db $B6
.db $AA
.db $6D
.db $F7
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $F6
.db $76
.db $DB
.db $AB
.db $55
.db $A5
.db $44
.db $10
.db $20
.db $00
.db $00
.db $04
.db $08
.db $90
.db $28
.db $51
.db $AA
.db $5A
.db $B5
.db $6D
.db $7B
.db $F7
.db $EE
.db $DD
.db $B7
.db $77
.db $5B
.db $5B
.db $B5
.db $52
.db $49
.db $12
.db $12
.db $09
.db $12
.db $22
.db $49
.db $48
.db $A5
.db $2A
.db $55
.db $65
.db $B5
.db $B5
.db $AD
.db $B6
.db $6D
.db $DB
.db $B6
.db $6D
.db $DB
.db $B6
.db $B5
.db $AD
.db $D6
.db $AA
.db $2A
.db $55
.db $4A
.db $A5
.db $24
.db $49
.db $2A
.db $09
.db $95
.db $A2
.db $54
.db $49
.db $53
.db $B5
.db $AA
.db $6A
.db $D5
.db $6A
.db $AD
.db $D6
.db $AA
.db $00
.db $00
.db $00
.db $00
.db $00
.db $04
.db $08
.db $00
.db $00
.db $A4
.db $A2
.db $C2
.db $33
.db $A0
.db $D0
.db $9D
.db $59
.db $FF
.db $B7
.db $20
.db $0B
.db $00
.db $00
.db $00
.db $00
.db $C0
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $C0
.db $0B
.db $00
.db $00
.db $80
.db $FD
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $17
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $F0
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $7E
.db $51
.db $ED
.db $44
.db $81
.db $10
.db $01
.db $82
.db $18
.db $2B
.db $42
.db $53
.db $81
.db $6F
.db $D8
.db $DB
.db $EB
.db $E7
.db $BF
.db $EB
.db $1F
.db $FB
.db $95
.db $24
.db $48
.db $00
.db $02
.db $00
.db $E0
.db $C5
.db $C0
.db $BF
.db $F8
.db $FF
.db $FF
.db $BA
.db $0E
.db $7E
.db $C4
.db $50
.db $68
.db $2A
.db $56
.db $02
.db $6F
.db $77
.db $4E
.db $F8
.db $45
.db $95
.db $20
.db $56
.db $50
.db $63
.db $3F
.db $F4
.db $FF
.db $F0
.db $9D
.db $F8
.db $21
.db $B2
.db $20
.db $8E
.db $0D
.db $18
.db $CF
.db $82
.db $AF
.db $8A
.db $E3
.db $3F
.db $78
.db $FD
.db $18
.db $CE
.db $02
.db $87
.db $58
.db $E0
.db $C4
.db $47
.db $E9
.db $DF
.db $F1
.db $53
.db $3B
.db $8A
.db $97
.db $38
.db $08
.db $A9
.db $03
.db $DE
.db $E2
.db $F8
.db $0F
.db $9E
.db $EC
.db $89
.db $B2
.db $07
.db $38
.db $E2
.db $63
.db $F1
.db $E3
.db $C3
.db $7B
.db $42
.db $AF
.db $28
.db $8E
.db $2A
.db $8E
.db $42
.db $83
.db $5A
.db $1D
.db $FA
.db $B1
.db $EB
.db $AB
.db $D6
.db $62
.db $DA
.db $A1
.db $E2
.db $D0
.db $34
.db $9C
.db $85
.db $8E
.db $AE
.db $C4
.db $7A
.db $72
.db $1D
.db $A6
.db $55
.db $1C
.db $B9
.db $52
.db $3D
.db $8B
.db $9E
.db $9D
.db $4E
.db $96
.db $2A
.db $0B
.db $E2
.db $A8
.db $A4
.db $95
.db $2D
.db $BB
.db $72
.db $AD
.db $F4
.db $91
.db $5A
.db $8B
.db $52
.db $25
.db $4E
.db $9C
.db $5A
.db $79
.db $6A
.db $D7
.db $A4
.db $8E
.db $9C
.db $74
.db $B0
.db $A2
.db $B4
.db $89
.db $67
.db $35
.db $6D
.db $2B
.db $37
.db $B6
.db $45
.db $A5
.db $A9
.db $C5
.db $A4
.db $52
.db $3A
.db $26
.db $5D
.db $AD
.db $B4
.db $0D
.db $9F
.db $B8
.db $4A
.db $E3
.db $A4
.db $55
.db $6C
.db $A9
.db $04
.db $00
.db $01
.db $00
.db $00
.db $01
.db $80
.db $41
.db $38
.db $A4
.db $80
.db $13
.db $41
.db $00
.db $1D
.db $1E
.db $00
.db $40
.db $41
.db $80
.db $00
.db $06
.db $00
.db $02
.db $05
.db $38
.db $98
.db $E0
.db $18
.db $A4
.db $0A
.db $21
.db $01
.db $01
.db $00
.db $00
.db $00
.db $00
.db $00
.db $04
.db $91
.db $5A
.db $44
.db $40
.db $8F
.db $64
.db $09
.db $EC
.db $00
.db $00
.db $04
.db $08
.db $00
.db $00
.db $02
.db $00
.db $2E
.db $46
.db $C8
.db $47
.db $90
.db $D5
.db $11
.db $4D
.db $08
.db $00
.db $B0
.db $00
.db $00
.db $01
.db $10
.db $60
.db $10
.db $26
.db $80
.db $90
.db $B3
.db $73
.db $C9
.db $91
.db $08
.db $01
.db $00
.db $00
.db $1A
.db $10
.db $00
.db $00
.db $78
.db $83
.db $40
.db $6D
.db $04
.db $40
.db $44
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $80
.db $00
.db $08
.db $FB
.db $04
.db $05
.db $23
.db $64
.db $58
.db $C4
.db $01
.db $88
.db $00
.db $00
.db $00
.db $00
.db $00
.db $FF
.db $10
.db $1D
; start of data
.db $63
.db $C1
.db $75
.db $C0
; end of data
.db $75
.db $C0

.ENDS
