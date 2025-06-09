.BANK 16 SLOT 2
.ORG $0000

.SECTION "Bank15" FORCE

L0FC000:
    LDA #5
    JSR $CA40.w
    JSR $BFA0.w
    LDA #6
    JMP L0FCA40.w

L0FC00D:
    LDA #3
    JSR L0FCA40.w
    JSR $8000
    LDA #6
    JMP L0FCA40.w

L0FC01A:
    LDA #3
    JSR L0FCA40.w
    JSR $8003
    LDA #6
    JMP L0FCA40.w

L0FC027:
    LDA #3
    JSR L0FCA40.w
    JSR $8006
    LDA #6
    JMP L0FCA40.w

L0FC034:
    LDA #13
    JSR L0FCA40.w
    JSR $8000
    LDA #6
    JMP L0FCA40.w
L0FC041:
    LDA #3
    JSR L0FCA40.w
    JSR $8009
    LDA #6
    JMP L0FCA40.w

L0FC04E:
    TXA
    PHA
    LDX #11
L0FC052:
    LDA $37
    CLC
    ADC #5
    STA $37
    LDA $38
    CLC
    ADC #13
    STA $38
    DEX
    BNE L0FC052
    PLA
    TAX
    LDA $37
    RTS

L0FC068:
    STA $00
    JSR L0FC04E.w
    STA $01
    JSR L0FC6C9.w
    LDA $01
    RTS

RESET:
    SEI
    CLD
    LDX #0
    STX $2000
    STX $2001
L0FC07F:
    LDA $2002
    BPL L0FC07F
L0FC084:
    LDA $2002
    BPL L0FC084
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
L0FC09E:
    STA ($00),Y
    INY
    BNE L0FC09E
    DEC $01
    BPL L0FC09E
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
    JSR L0FC23D.w
    JSR L0FC288.w
    JSR L0FCA70.w
    LDA #144
    STA $2000
    STA $D3
    LDA #2
    STA $2001
    STA $D2
    LDA #6
    JSR L0FCA40.w
    LDA $67
    BEQ L0FC13E
    LDA #1
    STA $67
L0FC13E:
    JSR L0FC77D.w
    JMP L0FC156.w

L0FC144:
    LDA #0
    STA $D6
    JSR L0FFBC5.w
    JSR L0FC336.w
    INC $36
    LDA #0
    STA $26
    STA $D6
L0FC156:
    LDA $26
    BNE L0FC15D
    JMP L0FC156.w

L0FC15D:
    JSR L0FC04E.w
    JMP L0FC144.w

NMI:
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
    JSR L0FC3A5.w
    JSR L0FC296.w
    JSR L0FC1EC.w
    JSR L0FCECC.w
    JSR L0FC733.w
    JSR L0FC36A.w
    JSR L0FC1C4.w
    JSR L0FC1FB.w
    JSR L0FC2D9.w
    LDY #1
    STY $26
    PLA
    STA $01
    PLA
    STA $00
    LDA $D6
    BEQ L0FC1BD
    LDA $04C5
    BEQ L0FC1BD
L0FC1A7:
    LDA $2002
    AND #64
    BNE L0FC1A7
L0FC1AE:
    LDA $2002
    AND #64
    BEQ L0FC1AE
    LDA #0
    STA $D000.w
    STA $E000.w
L0FC1BD:
    PLA
    TAY
    PLA
    TAX
    PLA
    PLP
    RTI
L0FC1C4:
    LDA $9D
    BNE L0FC1E3
    DEC $9E
    BNE L0FC1E3
    LDY $9F
    INY
    TYA
    AND #3
    TAY
    STY $9F
    LDA L_BANKS_ANIMATIONS_TIMERS.w,Y
    STA $9E
    LDA L_BANKS_ANIMATIONS.w,Y
    JSR L0FCA58.w
    JMP L0FCA60.w

L0FC1E3:
    RTS

L_BANKS_ANIMATIONS:
.db $18 $19 $15 $19
L_BANKS_ANIMATIONS_TIMERS:
.db $0E $08 $0E $08

L0FC1EC:
    LDA $63
    BEQ L0FC1FA
    LDA $64
    STA $D000
    LDA $65
    STA $E000
L0FC1FA:
    RTS

L0FC1FB:
    LDA #14
    STA $A000
    JSR $8000
    LDA $2F
    STA $A000
    RTS

L0FC209:
    LDY #0
    LDX $04
    BEQ L0FC211
    INC $05
L0FC211:
    LDA ($00),Y
    STA ($02),Y
    INY
    BNE L0FC21C
    INC $01
    INC $03
L0FC21C:
    DEC $04
    BNE L0FC211
    DEC $05
    BNE L0FC211
    RTS

L0FC225:
    LDY #0
    LDX $02
    BEQ L0FC22D
    INC $03
L0FC22D:
    STA ($00),Y
    INY
    BNE L0FC234
    INC $01
L0FC234:
    DEC $02
    BNE L0FC22D
    DEC $03
    BNE L0FC22D
    RTS

L0FC23D:
    JSR L0FC252.w
    LDA $29
    BEQ L0FC24A
    LDA $2B
    CMP #29
    BEQ L0FC24E
L0FC24A:
    LDA #2
    BNE L0FC254
L0FC24E:
    LDA #3
    BNE L0FC254
L0FC252:
    LDA #1
L0FC254:
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
    LDA L0FC284.w,X
    STA $2006
    LDA #0
    STA $2006
    LDX #4
    LDY #0
    LDA $00
L0FC27A:
    STA $2007
    DEY
    BNE L0FC27A
    DEX
    BNE L0FC27A
    RTS

L0FC284:
.db $20 $24 $28 $2C

L0FC288:
    LDY #0
    LDA #244
L0FC28C:
    STA $0200,Y
    INY
    INY
    INY
    INY
    BNE L0FC28C
L0FC295:
    RTS

L0FC296:
    LDY $28
    BEQ L0FC295
    BMI L0FC2CC
    DEY
    TYA
    ASL
    TAY
    LDA $BFC0.w
    STA $00
    LDA $BFC1.w
    STA $01
    LDA ($00),Y
    TAX
    INY
    LDA ($00),Y
    TAY
L0FC2B1:
    LDA #0
    STA $28
    JSR L0FC2D2.w
    LDA $2002
    LDA #63
    STA $2006
    LDA #0
    STA $2006
    STA $2006
    STA $2006
    RTS

L0FC2CC:
    LDX #125
    LDY #125
    BNE L0FC2B1
L0FC2D2:
    STX $00
    STY $01
    JMP L0FC3E7.w

L0FC2D9:
    LDY #1
    STY $4016
    DEY
    STY $4016
    LDY #8
L0FC2E4:
    PHA
    LDA $4016
    STA $22
    LSR
    ORA $22
    LSR
    PLA
    ROL
    DEY
    BNE L0FC2E4
    CMP $05B3
    BEQ L0FC300
    STA $05B3
    LDA #4
    STA $05B2
L0FC300:
    DEC $05B2
    BNE L0FC32F
    LDY #4
    STY $05B2
    LDY $1C
    STY $22
    STA $1C
    EOR $22
    BEQ L0FC31A
    AND $1C
    STA $1A
    STA $1E
L0FC31A:
    LDY #4
    LDA $1C
    CMP $22
    BNE L0FC32C
    DEC $20
    BNE L0FC32E
    LDA $1C
    STA $1E
    LDY #1
L0FC32C:
    STY $20
L0FC32E:
    RTS

L0FC32F:
    LDA #0
    STA $1A
    STA $1E
    RTS

L0FC336:
    LDX #1
    DEC $32
    BPL L0FC342
    LDA #9
    STA $32
    LDX #2
L0FC342:
    LDA $33,X
    BEQ L0FC348
    DEC $33,X
L0FC348:
    DEX
    BPL L0FC342
    RTS

L0FC34C:
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

L0FC36A:
    LDA $2002
    LDA $D1
    STA $2005
    LDA $D0
    STA $2005
    RTS

L0FC378:
    TYA
L0FC379:
    CLC
    ADC $00
    STA $00
    BCC L0FC382
    INC $01
L0FC382:
    RTS

L0FC383:
    TYA
L0FC384:
    CLC
    ADC $02
    STA $02
    BCC L0FC38D
    INC $03
L0FC38D:
    RTS

L0FC38E:
    TYA
L0FC38F:
    CLC
    ADC $04
    STA $04
    BCC L0FC38D
    INC $05
    RTS

L0FC399:
    LSR
L0FC39A:
    LSR
L0FC39B:
    LSR
    LSR
    LSR
    RTS

L0FC39F:
    ASL
L0FC3A0:
    ASL
    ASL
    ASL
    ASL
    RTS

L0FC3A5:
    LDA $27
    BEQ L0FC3BE
    LDA #129
    STA $00
    LDA #7
    STA $01
    JSR L0FC3E7.w
    LDA #0
    STA $0780
    STA $0781
    STA $27
L0FC3BE:
    RTS

L0FC3BF:
    STA $2006
    INY
    LDA ($00),Y
    STA $2006
    INY
    LDA ($00),Y
    ASL
    JSR L0FC3F3.w
    ASL
    LDA ($00),Y
    AND #63
    TAX
    BCC L0FC3D8
    INY
L0FC3D8:
    BCS L0FC3DB
    INY
L0FC3DB:
    LDA ($00),Y
    STA $2007
    DEX
    BNE L0FC3D8
    INY
    JSR L0FC378.w
L0FC3E7:
    LDX $2002
    LDY #0
    LDA ($00),Y
    BNE L0FC3BF
    JMP L0FC36A.w

L0FC3F3:
    PHA
    LDA $D3
    ORA #4
    BCS L0FC3FC
    AND #251
L0FC3FC:
    STA $2000
    STA $D3
    PLA
    RTS

L0FC403:
.db $FC $F3 $CF $3F

L0FC407:
    LDA $04
    LSR
    LSR
    AND #7
    STA $00
    LDA $04
    AND #128
    JSR L0FC39A.w
    STA $01
    INY
    LDA $05
    AND #3
    JSR L0FC3A0.w
    ORA $00
    ORA $01
    ORA #192
    STA $78
    LDA $05
    ORA #3
    STA $79
    RTS

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
    AND #31
    STA $05
    LDA ($02),Y
    JSR L0FC399.w
    STA $04
    LDX $0780
    JMP L0FC474.w

L0FC453:
    STX $00
    STY $01
    LDA #0
    STA $02
    LDA #7
    STA $03
L0FC45F:
    LDY #1
    STY $27
    DEY
    LDA ($02),Y
    AND #15
    STA $05
    LDA ($02),Y
    JSR L0FC39A.w
    STA $04
    LDX $0780
L0FC474:
    LDA $01
    JSR L0FC4A2.w
    LDA $00
    JSR L0FC4A2.w
    LDA $05
    STA $06
    JSR L0FC4A2.w
L0FC485:
    INY
    LDA ($02),Y
    JSR L0FC4A2.w
    DEC $06
    BNE L0FC485
    STX $0780
    STY $06
    LDY #32
    JSR L0FC378.w
    LDY $06
    DEC $04
    BNE L0FC474
    JSR L0FC4AD.w
L0FC4A2:
    STA $0781,X
L0FC4A5:
    INX
    CPX #95
    BCC L0FC4B4
    LDX $0780
L0FC4AD:
    LDA #0
    STA $0781,X
    PLA
    PLA
L0FC4B4:
    RTS

L0FC4B5:
    STX $00
    STY $01
    LDX #0
    STX $02
    LDX #7
    STX $03
    LDY #1
    STY $27
    DEY
    BEQ L0FC4FF
L0FC4C8:
    STA $04
    LDA $01
    JSR L0FC4A2.w
    LDA $00
    JSR L0FC4A2.w
    LDA $04
    JSR L0FC509.w
    BIT $04
    BVC L0FC4DE
    INY
L0FC4DE:
    BIT $04
    BVS L0FC4E3
    INY
L0FC4E3:
    LDA ($02),Y
    JSR L0FC4A2.w
    STY $06
    LDY #1
    BIT $04
    BPL L0FC4F2
    LDY #32
L0FC4F2:
    JSR L0FC378.w
    LDY $06
    DEC $05
    BNE L0FC4DE
    STX $0780
    INY
L0FC4FF:
    LDX $0780
    LDA ($02),Y
    BNE L0FC4C8
    JSR L0FC4AD.w
L0FC509:
    STA $04
    AND #191
    STA $0781,X
    AND #63
    STA $05
    JMP L0FC4A5.w

L0FC517:
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
    JSR L0FC39B.w
    STA $04
    ASL $06
    ROR
    ROR
    EOR $06
    STA $07
    LDY #32
    BIT $07
    BVC L0FC53F
    LDY #36
L0FC53F:
    STY $05
    LDA $D0
    CLC
    ADC $00
    BCS L0FC54A
    CMP #240
L0FC54A:
    PHP
    ROR $06
    PLP
    BCC L0FC553
    CLC
    ADC #16
L0FC553:
    JSR L0FC39B.w
    TAX
    ASL $06
    ROR
    EOR $06
    BPL L0FC565
    LDA $05
    CLC
    ADC #8
    STA $05
L0FC565:
    TXA
    BEQ L0FC578
L0FC568:
    LDA $04
    CLC
    ADC #32
    STA $04
    LDA $05
    ADC #0
    STA $05
    DEX
    BNE L0FC568
L0FC578:
    PLA
    TAY
    PLA
    TAX
    RTS

L0FC57D:
    LDX $0780
    LDY #1
    STY $27
    BNE L0FC5AF
L0FC586:
    JSR L0FC4A2.w
    INY
    LDA ($00),Y
    JSR L0FC4A2.w
    INY
    LDA ($00),Y
    JSR L0FC509.w
    BIT $04
    BVC L0FC59A
    INY
L0FC59A:
    BIT $04
    BVS L0FC59F
    INY
L0FC59F:
    LDA ($00),Y
    JSR L0FC4A2.w
    DEC $05
    BNE L0FC59A
    STX $0780
    INY
    JSR L0FC378.w
L0FC5AF:
    LDY #0
    LDA ($00),Y
    BNE L0FC586
    JSR L0FC4AD.w
L0FC5B8:
    BPL L0FC5BF
L0FC5BA:
    EOR #255
    CLC
    ADC #1
L0FC5BF:
    RTS

L0FC5C0:
    PHA
    AND #15
    TAY
    PLA
    JMP L0FC39A.w

L0FC5C8:
    LDY #255
L0FC5CA:
    INY
    SEC
    SBC #100
    BCS L0FC5CA
    ADC #100
    TAX
    TYA
    PHA
    TXA
    LDX #255
L0FC5D8:
    INX
    SEC
    SBC #10
    BCS L0FC5D8
    ADC #10
    TAY
    PLA
    RTS

L0FC5E3:
    LDX #255
L0FC5E5:
    INX
    LDA $00
    STA $01
    LDA $02
    STA $03
    LDA $04
    STA $05
    LDA $00
    SEC
    SBC #16
    STA $00
    LDA $02
    SBC #39
    STA $02
    BCS L0FC5E5
    LDA $04
    SBC #0
    STA $04
    BCS L0FC5E5
    TXA
    PHA
    LDA $01
    STA $00
    LDA $03
    STA $02
    LDX #255
L0FC615:
    INX
    LDA $00
    STA $01
    LDA $02
    STA $03
    LDA $00
    SEC
    SBC #232
    STA $00
    LDA $02
    SBC #3
    STA $02
    BCS L0FC615
    TXA
    PHA
    LDA $01
    STA $00
    LDA $03
    STA $02
    LDX #255
L0FC639:
    INX
    LDA $00
    STA $01
    LDA $02
    STA $03
    LDA $00
    SEC
    SBC #100
    STA $00
    LDA $02
    SBC #0
    STA $02
    BCS L0FC639
    TXA
    PHA
    LDA $01
    STA $00
    LDX #255
L0FC659:
    INX
    LDA $00
    STA $01
    LDA $00
    SEC
    SBC #10
    STA $00
    BCS L0FC659
    LDA $01
    STA $00
    STX $01
    PLA
    STA $02
    PLA
    STA $03
    PLA
    STA $04
    RTS

L0FC677:
    JSR L0FC6BA.w
    ADC $01
    CMP #10
    BCC L0FC682
    ADC #5
L0FC682:
    CLC
    ADC $02
    STA $02
    LDA $03
    AND #240
    ADC $02
    BCC L0FC693
L0FC68F:
    ADC #95
    SEC
    RTS

L0FC693:
    CMP #160
    BCS L0FC68F
    RTS

L0FC698:
    JSR L0FC6BA.w
    SBC $01
    STA $01
    BCS L0FC6AB
    ADC #10
    STA $01
    LDA $02
    ADC #15
    STA $02
L0FC6AB:
    LDA $03
    AND #240
    SEC
    SBC $02
    BCS L0FC6B7
    ADC #160
    CLC
L0FC6B7:
    ORA $01
    RTS

L0FC6BA:
    PHA
    AND #15
    STA $01
    PLA
    AND #240
    STA $02
    LDA $03
    AND #15
    RTS

L0FC6C9:
    TXA
    PHA
    TYA
    PHA
    LDA #0
    STA $02
    LDX #8
L0FC6D3:
    LSR $00
    BCC L0FC6DA
    CLC
    ADC $01
L0FC6DA:
    ROR
    ROR $02
    DEX
    BNE L0FC6D3
    STA $01
    LDA $02
    STA $00
    PLA
    TAY
    PLA
    TAX
    RTS

L0FC6EB:
    TXA
    PHA
    LDA #0
    STA $51
    LDX #16
    ROL $4E
    ROL $4F
L0FC6F7:
    ROL $51
    LDA $51
    CMP $50
    BCC L0FC703
    SBC $50
    STA $51
L0FC703:
    ROL $4E
    ROL $4F
    DEX
    BNE L0FC6F7
    PLA
    TAX
    RTS

L0FC70D:
    JSR L0FC715.w
L0FC710:
    LDA $26
    BEQ L0FC710
    RTS

L0FC715:
    LDA #0
    STA $26
    RTS

L0FC71A:
    LDA $27
    BNE L0FC70D
    RTS
L0FC71F:
    LDA $D2
    AND #231
L0FC723:
    STA $D2
    JSR L0FC715.w
L0FC728:
    LDA $26
    BEQ L0FC728
    RTS

L0FC72D:
    LDA $D2
    ORA #30
    BNE L0FC723
L0FC733:
    LDA $D3
    STA $2000
    LDA $D2
    STA $2001
L0FC73D:
    RTS

L0FC73E:
    JSR L0FC71F.w
    JSR L0FC23D.w
    LDY #0
    STY $D0
    STY $D1
    LDA $D3
    AND #252
    STA $D3
    JMP L0FC288.w

L0FC753:
    LDA $D2
    AND #231
    JSR L0FC723.w
    LDA $D3
    AND #127
    STA $D3
    STA $2000
    RTS
    LDA $D3
    ORA #128
    STA $D3
    STA $2000
    LDA $D2
    ORA #30
    BNE L0FC723
L0FC773:
    LDA $D3
    AND #123
L0FC777:
    STA $2000
    STA $D3
    RTS

L0FC77D:
    LDA $2002
    AND #128
    BNE L0FC77D
    LDA $D3
    ORA #128
    BNE L0FC777
L0FC78A:
    PHA
    JSR L0FC70D.w
    PLA
    SEC
    SBC #1
    BNE L0FC78A
    RTS

L0FC795:
    TXA
    PHA
    TYA
    PHA
    LDX $03
    LDY $02
    STY $00
    LDA #32
    STA $01
    JSR L0FC6C9.w
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

L0FC7BA:
    TYA
    PHA
    LDA $00
    STA $4E
    LDA $01
    STA $4F
    LDA #10
    STA $50
    LDY #4
L0FC7CA:
    JSR L0FC6EB.w
    LDA $51
    ORA #96
    STA ($08),Y
    DEY
    BPL L0FC7CA
    LDY #0
L0FC7D8:
    LDA ($08),Y
    CMP #96
    BNE L0FC7E7
    LDA #255
    STA ($08),Y
    INY
    CPY #4
    BNE L0FC7D8
L0FC7E7:
    PLA
    TAY
    RTS

L0FC7EA:
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
L0FC7FC:
    JSR L0FC6EB.w
    LDA $51
    ORA #96
    STA ($08),Y
    DEY
    BPL L0FC7FC
    LDY #0
L0FC80A:
    LDA ($08),Y
    CMP #96
    BNE L0FC819
    LDA #255
    STA ($08),Y
    INY
    CPY $01
    BNE L0FC80A
L0FC819:
    PLA
    TAY
    RTS

L0FC81C:
    LDA $00
    CLC
    ADC #32
    STA $00
    LDA $01
    ADC #0
    STA $01
    CMP #35
    BEQ L0FC831
    CMP #39
    BNE L0FC841
L0FC831:
    LDA $00
    CMP #192
    BCC L0FC841
    AND #31
    STA $00
    LDA $01
    AND #252
    STA $01
L0FC841:
    RTS

L0FC842:
    LDA #16
    STA $02
    LDA #3
    STA $03
    STX $00
    STY $01
L0FC84E:
    LDY #0
    LDA ($02),Y
    AND #31
    STA $05
    LDA ($02),Y
    JSR L0FC399.w
    STA $04
    LDX $0780
L0FC860:
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
    BEQ L0FC87D
    BCC L0FC87D
    LDA $07
    INC $08
L0FC87D:
    STA $06
    LDA $01
    JSR L0FC4A2.w
    LDA $00
    JSR L0FC4A2.w
    LDA $06
    JSR L0FC4A2.w
L0FC88E:
    INY
    LDA ($02),Y
    JSR L0FC4A2.w
    DEC $06
    BNE L0FC88E
    LDA $08
    BEQ L0FC8B9
    DEC $08
    LDA $01
    EOR #4
    JSR L0FC4A2.w
    LDA $00
    AND #224
    JSR L0FC4A2.w
    LDA $05
    SEC
    SBC $07
    STA $06
    JSR L0FC4A2.w
    JMP L0FC88E.w

L0FC8B9:
    STX $0780
    JSR L0FC81C.w
    DEC $04
    BNE L0FC860
    LDA #0
    STA $0781,X
    LDY #1
    STY $27
    RTS

L0FC8CD:
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
    JSR L0FC399.w
    STA $04
    LDX $0780
L0FC8EB:
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
    BEQ L0FC908
    BCC L0FC908
    LDA $07
    INC $08
L0FC908:
    STA $06
    LDA $01
    JSR L0FC4A2.w
    LDA $00
    JSR L0FC4A2.w
    LDA $06
    JSR L0FC4A2.w
L0FC919:
    INY
    LDA ($02),Y
    JSR L0FC4A2.w
    DEC $06
    BNE L0FC919
    LDA $08
    BEQ L0FC944
    DEC $08
    LDA $01
    EOR #4
    JSR L0FC4A2.w
    LDA $00
    AND #248
    JSR L0FC4A2.w
    LDA $05
    SEC
    SBC $07
    STA $06
    JSR L0FC4A2.w
    JMP L0FC919.w

L0FC944:
    STX $0780
    LDA #8
    CLC
    ADC $00
    ORA #192
    STA $00
    DEC $04
    BNE L0FC8EB
    LDA #0
    STA $0781,X
    LDY #1
    STY $27
    RTS

L0FC95E:
    TXA
    PHA
    LDX #2
    LDA $7434
    CMP #14
    BCC L0FC96D
    SBC #13
    LDX #9
L0FC96D:
    TAY
    TXA
    JSR L0FCA40.w
    DEY
    TYA
    ASL
    TAX
    LDA $8000.w,X
    STA $02
    LDA $8001.w,X
    STA $03
    CLC
    LDA #4
    ADC $02
    STA $02
    BCC L0FC98B
    INC $03
L0FC98B:
    CLC
    LDA $02
    ADC $00
    STA $02
    LDA $03
    ADC $01
    STA $03
    LDY #0
    LDA ($02),Y
    TAY
    LDA #11
    STA $A000.w
    PLA
    TAX
    TYA
    RTS

L0FC9A6:
    LDA #0
    STA $4A
    LDA #9
    JMP L0FCA94.w

L0FC9AF:
    PHA
    TYA
    EOR #1
    TAY
    PLA
    RTS

L0FC9B6:
    PHA
    TXA
    EOR #1
    TAX
    PLA
    RTS

L0FC9BD:
    TAY
    DEY
    TYA
    ASL
    TAY
    LDA $BFC0.w
    STA $02
    LDA $BFC1.w
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
    JMP L0FC209.w

L0FC9ED:
    CLC
    ADC $7A
    STA $7A
    BCC L0FC9F6
    INC $7B
L0FC9F6:
    RTS

L0FC9F7:
    LDY #0
    LDX #8
L0FC9FB:
    LSR
    BCC L0FC9FF
    INY
L0FC9FF:
    DEX
    BNE L0FC9FB
    TYA
    RTS

L0FCA04:
    LDA #8
    STA $4A
    JMP L0FCA94.w
L0FCA0B:
    LDA #9
    STA $4A
    LDA #8
    JMP L0FCA94.w

L0FCA14:
    LDA #10
    STA $4A
    LDA #8
    JMP L0FCA94.w
L0FCA1D:
    PHA
    INC $743E
    BNE L0FCA26
    INC $743F
L0FCA26:
    LDA $743F
    CMP #3
    BCC L0FCA3E
    LDA $743E
    CMP #231
    BCC L0FCA3E
    LDA #3
    STA $743F
    LDA #231
    STA $743E
L0FCA3E:
    PLA
    RTS

L0FCA40:
    STA $2F
    STA $57
    STA $A000
    RTS

L0FCA48:
    STA $5F
    ORA $58
    STA $B000
    RTS

L0FCA50:
    STA $60
    ORA $58
    STA $C000
    RTS

L0FCA58:
    STA $61
    ORA $58
    STA $D000
    RTS

L0FCA60:
    STA $62
    ORA $58
    STA $E000
    RTS

L0FCA68:
    LDA #1
    STA $CE
    STA $F000
    RTS

L0FCA70:
    LDA #0
    STA $CE
    STA $F000
    RTS

L0FCA78:
    LDA #16
    BNE L0FCA7E
    LDA #0
L0FCA7E:
    STA $58
    LDA $5F
    JSR L0FCA48.w
    LDA $60
    JSR L0FCA50.w
    LDA $61
    JSR L0FCA58.w
    LDA $62
    JMP L0FCA60.w

L0FCA94:
    TAX
    LDA $2F
    PHA
    TXA
    JSR L0FCA40.w
    LDA #202
    PHA
    LDA #178
    PHA
    LDA $4A
    ASL
    TAX
    LDA $BFA0.w,X
    STA $4B
    LDA $BFA1.w,X
    STA $4C
    JMP ($004B)

L0FCAB3:
    PLA
    JMP L0FCA40.w

L0FCAB7:
    PHA
    TYA
    PHA
    TXA
    PHA
    LDA $42
    ASL
    TAY
    LDA $BFD0.w,Y
    STA $46
    LDA $BFD1.w,Y
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
L0FCADF:
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
    BEQ L0FCB12
    TAY
    AND #64
    EOR #64
    STA $49
    TYA
    AND #191
    ORA $49
L0FCB12:
    STA $0200,X
    LDY $48
    INY
    INX
    LDA ($44),Y
    PHA
    LDA $41
    BEQ L0FCB29
    PLA
    SEC
    EOR #255
    ADC #8
    JMP L0FCB2A.w

L0FCB29:
    PLA
L0FCB2A:
    CLC
    ADC $3B
    STA $0200,X
    DEC $43
    BNE L0FCADF
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

L0FCB44:
    TXA
    PHA
    LDA $48
    BEQ L0FCB7A
    LDA $2F
    PHA
    LDA #10
    JSR L0FCA40.w
    LDA $44
    SEC
    SBC $6A
    BCC L0FCB7A
    CMP #16
    BCS L0FCB7A
    STA $3B
    LDA $45
    SEC
    SBC $69
    BCC L0FCB7A
    CMP #15
    BCS L0FCB7A
    STA $3A
    LDA $46
    BEQ L0FCB81
    CMP #2
    BNE L0FCB7A
    LDA $36
    AND #16
    BNE L0FCB81
L0FCB7A:
    PLA
    JSR L0FCA40.w
    PLA
    TAX
    RTS

L0FCB81:
    LDA $D0
    AND #15
    STA $08
    LDA $D1
    AND #15
    STA $09
    LDA $49
    ROR
    ROR
    BCS L0FCB9A
    LDX $47
    LDY L0FCC53.w,X
    STY $47
L0FCB9A:
    ROL
    BCS L0FCBA7
    LDA $47
    STA $05
    LDA #0
    STA $04
    BEQ L0FCBAF
L0FCBA7:
    LDA $47
    STA $04
    LDA #0
    STA $05
L0FCBAF:
    LDA $8E
    BEQ L0FCBED
    LDA $8D
    LSR
    BCS L0FCBDC
    LSR
    BCS L0FCBCD
    LSR
    BCS L0FCBE6
    LDA #16
    SEC
    SBC $08
    AND #15
    CLC
    ADC $04
    STA $04
    JMP L0FCBED.w

L0FCBCD:
    LDA #16
    SEC
    SBC $09
    AND #15
    CLC
    ADC $05
    STA $05
    JMP L0FCBED.w

L0FCBDC:
    LDA $05
    SEC
    SBC $09
    STA $05
    JMP L0FCBED.w

L0FCBE6:
    LDA $04
    SEC
    SBC $08
    STA $04
L0FCBED:
    LDA $3B
    BEQ L0FCBFD
    CMP #15
    BNE L0FCC01
    LDA $05
    BMI L0FCC01
    BEQ L0FCC01
    BNE L0FCC4C
L0FCBFD:
    LDA $05
    BMI L0FCC4C
L0FCC01:
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
    JSR L0FC39A.w
    STA $42
    CMP #4
    BNE L0FCC38
    LDA #1
    STA $41
L0FCC38:
    DEC $42
    ASL $42
    LDA $7C34
    BNE L0FCC49
    LDA $36
    AND #16
    BEQ L0FCC49
    INC $42
L0FCC49:
    JSR L0FCAB7.w
L0FCC4C:
    PLA
    JSR L0FCA40.w
    PLA
    TAX
    RTS

L0FCC53:
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
.db $F0
.db $EF
.db $EE
.db $ED
.db $EC

L0FCC68:
    LDA $00
    SEC
    SBC #32
    STA $00
    BCS L0FCC73
    DEC $01
L0FCC73:
    LDA $01
    CMP #32
    BCC L0FCC87
    CMP #36
    BCS L0FCC94
    CMP #35
    BCC L0FCC94
    LDA $00
    CMP #192
    BCC L0FCC94
L0FCC87:
    CLC
    LDA $00
    ADC #192
    STA $00
    LDA $01
    ADC #3
    STA $01
L0FCC94:
    RTS

L0FCC95:
.db $01
.db $15
.db $15
.db $11
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
.db $15
.db $15
.db $01
.db $14
.db $15
.db $15
.db $15
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
.db $11
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
.db $15
.db $15
.db $13
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $16
.db $16
.db $13
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $14
.db $14
.db $14
.db $14

L0FCCE7:
    LDA $57
    STA $08
    LDA #2
    JSR L0FCA40.w
    LDA $7434
    ASL
    TAY
    LDA L_TILEMAPS,Y
    STA $6E
    LDA (L_TILEMAPS.w + 1),Y
    STA $6F
    JSR L0FCD44.w
L0FCD02:
    LDY $18
    LDA ($6E),Y
    TAX
    CMP #255
    BEQ L0FCD3F
    CMP #46
    BCC L0FCD13
    LDX #1
    BNE L0FCD18
L0FCD13:
    INY
    BNE L0FCD18
    INC $6F
L0FCD18:
    LDA ($6E),Y
    STA $09
    INY
    BNE L0FCD21
    INC $6F
L0FCD21:
    STY $18
    LDY $19
L0FCD25:
    LDA $09
    STA ($70),Y
    INY
    CPY $7441
    BEQ L0FCD38
    BCC L0FCD38
    LDA #32
    JSR L0FCE20.w
    LDY #0
L0FCD38:
    DEX
    BNE L0FCD25
    STY $19
    BEQ L0FCD02
L0FCD3F:
    LDA $08
    JMP L0FCA40.w

L0FCD44:
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
    JSR L0FCE14.w
    LDY #0
    STY $18
    STY $19
    RTS

L0FCD6E:
    LDA $57
    STA $08
    LDA $0A
    CMP #56
    BCC L0FCD9D
    LDA #2
    JSR L0FCA40.w
    LDA $0A
    SEC
    SBC #56
    STA $0A
    LDA $BFAE.w
    STA $10
    LDA $BFAF.w
    STA $11
    LDA $0A
    ASL
    TAY
    LDA ($10),Y
    STA $6E
    INY
    LDA ($10),Y
    STA $6F
    BNE L0FCDB0
L0FCD9D:
    LDA #12
    JSR L0FCA40.w
    LDA $0A
    ASL
    TAY
    LDA $8000,Y
    STA $6E
    LDA $8001,Y
    STA $6F
L0FCDB0:
    JSR L0FCD44.w
    STY $10
L0FCDB5:
    LDY $18
    LDA ($6E),Y
    CMP #255
    BEQ L0FCD3F
    CMP #254
    BEQ L0FCE04
    LDA $10
    BEQ L0FCDD5
    LDA ($6E),Y
    STA $0F
    INY
    BNE L0FCDCE
    INC $6F
L0FCDCE:
    LDA ($6E),Y
    STA $0E
    JMP L0FCDDD.w

L0FCDD5:
    LDA ($6E),Y
    STA $0E
    LDA #1
    STA $0F
L0FCDDD:
    INY
    BNE L0FCDE2
    INC $6F
L0FCDE2:
    STY $18
    LDY $19
    LDA $0E
L0FCDE8:
    STA ($70),Y
    INY
    CPY $7441
    BEQ L0FCDFB
    BCC L0FCDFB
    LDA #32
    JSR L0FCE20.w
    LDA $0E
    LDY #0
L0FCDFB:
    DEC $0F
    BNE L0FCDE8
    STY $19
    JMP L0FCDB5.w

L0FCE04:
    LDA $10
    EOR #1
    STA $10
    INY
    BNE L0FCE0F
    INC $6F
L0FCE0F:
    STY $18
    JMP L0FCDB5.w

L0FCE14:
    TYA
    CLC
    ADC $6E
    STA $6E
    BCC L0FCE1E
    INC $6F
L0FCE1E:
    RTS

L0FCE1F:
    TYA
L0FCE20:
    CLC
    ADC $70
    STA $70
    BCC L0FCE29
    INC $71
L0FCE29:
    RTS

L0FCE2A:
    STY $0A
    SEC
    LDA $6E
    SBC $0A
    STA $6E
    BCS L0FCE37
    DEC $6F
L0FCE37:
    RTS

L0FCE38:
    JSR L0FCEBF.w
    LDA #0
    STA $18
    STA $0301
    JSR L0FCE63.w
    JSR L0FCE76.w
    LDA $05
    ORA #4
    STA $05
    JSR L0FCE63.w
    JSR L0FCE76.w
    LDA $05
    AND #251
    STA $05
    LDX $0301
    LDA #0
    STA $0302,X
    RTS

L0FCE63:
    LDX $0301
    LDA $05
    STA $0302,X
    INX
    LDA $04
    STA $0302,X
    INX
    STX $0301
    RTS

L0FCE76:
    LDA #16
    STA $17
L0FCE7A:
    LDY $18
    LDA ($70),Y
    JSR L0FCE88.w
    INC $18
    DEC $17
    BNE L0FCE7A
    RTS

L0FCE88:
    JSR L0FCEA3.w
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

L0FCEA3:
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

L0FCEBF:
    ASL
    TAY
    LDA L0FEE5E.w,Y
    STA $70
    LDA (L0FEE5E.w + 1),Y
    STA $71
    RTS

L0FCECC:
    LDA $8F
    BNE L0FCED5
    LDA $90
    BNE L0FCEED
    RTS

L0FCED5:
    LDA #2
    STA $22
    LDA #3
    STA $23
    DEC $8F
    LDY $8F
    LDA L0FCEEB.w,Y
    TAY
    LDX #32
    JMP L0FCF06.w

L0FCEEA:
    RTS

L0FCEEB:
.db $22 $00

L0FCEED:
    LDA #2
    STA $22
    LDA #3
    STA $23
    LDY #0
    LDX #8
    JSR L0FCF06.w
    LDX #8
    JSR L0FCF06.w
    LDA #0
    STA $90
    RTS

L0FCF06:
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
L0FCF1E:
    LDA ($22),Y
    STA $2007
    INY
    DEX
    BNE L0FCF1E
    JMP L0FC36A.w

L0FCF2A:
    JSR L0FCEBF.w
    LDA #0
    STA $0301
    STA $18
    LDA #32
    STA $19
    JSR L0FCF77.w
    JSR L0FCF59.w
    LDA $05
    ORA #4
    STA $05
    JSR L0FCF77.w
    JSR L0FCF59.w
    LDA $05
    AND #251
    STA $05
    LDY $0301
    LDA #0
    STA $0302,Y
    RTS

L0FCF59:
    LDX #8
L0FCF5B:
    JSR L0FCF8A.w
    JSR L0FCF8A.w
    JSR L0FCF92.w
    JSR L0FCF92.w
    LDY $0301
    LDA $02
    STA $0302,Y
    INY
    STY $0301
    DEX
    BNE L0FCF5B
    RTS

L0FCF77:
    LDY $0301
    LDA $05
    STA $0302,Y
    INY
    LDA $04
    STA $0302,Y
    INY
    STY $0301
    RTS

L0FCF8A:
    LDY $18
    JSR L0FD067.w
    INC $18
    RTS

L0FCF92:
    LDY $19
    JSR L0FD067.w
    INC $19
    RTS

L0FCF9A:
    LDA $0300
    JSR L0FCEBF.w
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    CLC
    ADC #14
    JSR L0FCEBF.w
    JMP L0FD002.w

L0FCFB4:
    LDA $0300
    CLC
    ADC #14
    JSR L0FCEBF.w
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    CLC
    ADC #13
    JSR L0FCEBF.w
    JMP L0FD002.w

L0FCFD1:
    LDA $0300
    CLC
    ADC #1
    JSR L0FCEBF.w
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    JSR L0FCEBF.w
    JMP L0FD002.w

L0FCFEB:
    LDA $0300
    JSR L0FCEBF.w
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
    SEC
    SBC #1
    JSR L0FCEBF.w
L0FD002:
    LDY #0
    STY $0301
    STY $18
    JSR L0FD054.w
    JSR L0FD022.w
    LDA $05
    ORA #4
    STA $05
    JSR L0FD054.w
    JSR L0FD022.w
    LDA $05
    AND #251
    STA $05
    RTS

L0FD022:
    LDX #8
L0FD024:
    LDY $18
    JSR L0FD067.w
    LDY $18
    INY
    JSR L0FD067.w
    LDY $18
    LDA ($06),Y
    JSR L0FD069.w
    LDY $18
    INY
    LDA ($06),Y
    JSR L0FD069.w
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
    BNE L0FD024
    RTS

L0FD054:
    LDY $0301
    LDA $05
    STA $0302,Y
    INY
    LDA $04
    STA $0302,Y
    INY
    STY $0301
    RTS

L0FD067:
    LDA ($70),Y
L0FD069:
    TAY
    ; need to check if other palettes
    ; are loaded from other banks
    LDA L_METATILES_PALETTE_ID.w,Y
    AND #3
    ROR
    ROR $02
    ROR
    ROR $02
    RTS

L0FD076:
    LDA $8E
    BNE L0FD0B7
    LDA $8D
    AND #1
    BEQ L0FD08C
    LDA $6A
    CLC
    ADC #15
    CMP $7441
    BCC L0FD0B9
    BCS L0FD0B7
L0FD08C:
    LDA $8D
    AND #2
    BEQ L0FD098
    LDA $6A
    BNE L0FD0B9
    BEQ L0FD0B7
L0FD098:
    LDA $8D
    AND #4
    BEQ L0FD0AA
    LDA $69
    CLC
    ADC #14
    CMP $7440
    BCC L0FD0B9
    BCS L0FD0B7
L0FD0AA:
    LDA $8D
    AND #8
    BEQ L0FD0B7
    LDA $69
    CMP $05F4
    BNE L0FD0B9
L0FD0B7:
    SEC
    RTS

L0FD0B9:
    CLC
    RTS

L0FD0BB:
    JSR L0FD076.w
    BCS L0FD0C4
    LDA #16
    STA $8E
L0FD0C4:
    RTS

L0FD0C5:
    LDA $8E
    BEQ L0FD0C4
    PLA
    PLA
    LDA $8D
    AND #8
    BEQ L0FD116
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
    BNE L0FD0E9
    DEC $69
L0FD0E9:
    STX $D0
    STY $8E
    LDA $D0
    CMP #240
    BCC L0FD0F7
    AND #239
    STA $D0
L0FD0F7:
    CPY #12
    BEQ L0FD105
    CPY #8
    BEQ L0FD10C
    CPY #4
    BEQ L0FD10F
    BNE L0FD0C4
L0FD105:
    LDA #1
    STA $19
    JMP L0FD1B3.w

L0FD10C:
    JMP L0FD1D9.w

L0FD10F:
    LDA #0
    STA $19
    JMP L0FD1B3.w

L0FD116:
    LDA $8D
    AND #4
    BEQ L0FD163
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
    BNE L0FD144
    INC $69
    LDA $D0
    CMP #240
    BCC L0FD144
    LDA #0
    STA $D0
L0FD144:
    CPY #12
    BEQ L0FD152
    CPY #8
    BEQ L0FD159
    CPY #4
    BEQ L0FD15C
    BNE L0FD1B2
L0FD152:
    LDA #0
    STA $19
    JMP L0FD1B3.w

L0FD159:
    JMP L0FD203.w

L0FD15C:
    LDA #1
    STA $19
    JMP L0FD1B3.w

L0FD163:
    LDA $8D
    AND #2
    BEQ L0FD18C
    LDX $D1
    LDY $8E
    INC $0502
    INC $0502
    DEX
    DEY
    DEX
    DEY
    BNE L0FD17B
    DEC $6A
L0FD17B:
    CPX #254
    BCC L0FD185
    LDA $D3
    AND #254
    STA $D3
L0FD185:
    STX $D1
    STY $8E
    JMP L0FD1B2.w

L0FD18C:
    LDA $8D
    AND #1
    BEQ L0FD1B2
    LDX $D1
    LDY $8E
    DEC $0502
    DEC $0502
    INX
    DEY
    INX
    DEY
    BNE L0FD1A4
    INC $6A
L0FD1A4:
    STY $8E
    STX $D1
    CPX #0
    BNE L0FD1B2
    LDA $D3
    ORA #1
    STA $D3
L0FD1B2:
    RTS

L0FD1B3:
    JSR L0FD1C0.w
    LDA #2
    STA $8F
    LDA $0300
    JMP L0FCE38.w

L0FD1C0:
    LDA $D0
    LSR
    LSR
    LSR
    STA $00
    LDA #32
    STA $01
    JSR L0FC6C9.w
    LDA $00
    STA $04
    LDA $01
    ORA #32
    STA $05
    RTS

L0FD1D9:
    JSR L0FD1F2.w
    LDA #2
    STA $90
    LDX $69
    DEX
    STX $0300
    LDA $D0
    AND #16
    BNE L0FD1EF
    JMP L0FCFD1.w

L0FD1EF:
    JMP L0FCF9A.w

L0FD1F2:
    LDA $D0
    JSR L0FC399.w
    ASL
    ASL
    ASL
    ORA #192
    STA $04
    LDA #35
    STA $05
    RTS

L0FD203:
    JSR L0FD1F2.w
    LDA #2
    STA $90
    LDX $69
    INX
    STX $0300
    LDA $D0
    AND #16
    BNE L0FD219
    JMP L0FCF9A.w

L0FD219:
    JMP L0FCFB4.w

L0FD21C:
    LDA $69
    STA $0300
    LDA #0
    STA $19
    LDA #15
    STA $16
    JSR L0FD1C0.w
L0FD22C:
    JSR L0FD252.w
    LDA $04
    STA $00
    LDA $05
    STA $01
    JSR L0FC81C.w
    LDA $00
    STA $04
    LDA $01
    STA $05
    LDA $19
    EOR #1
    STA $19
    BNE L0FD22C
    INC $0300
    DEC $16
    BNE L0FD22C
    RTS

L0FD252:
    LDA $0300
    JSR L0FCE38.w
    LDY #2
    STY $8F
    JSR L0FCED5.w
    JMP L0FCED5.w

L0FD262:
    LDA $69
    STA $0300
    JSR L0FD1F2.w
    LDA #8
    STA $81
L0FD26E:
    LDA $24
    AND #16
    BEQ L0FD27A
    JSR L0FD2AA.w
    JMP L0FD27D.w

L0FD27A:
    JSR L0FD2A0.w
L0FD27D:
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
    BCC L0FD29B
    DEC $0300
L0FD29B:
    DEC $81
    BNE L0FD26E
    RTS

L0FD2A0:
    JSR L0FCFD1.w
    LDA #1
    STA $90
    JMP L0FCEED.w

L0FD2AA:
    LDA $81
    CMP #8
    BNE L0FD2B5
    JSR L0FCF9A.w
    BNE L0FD2B8
L0FD2B5:
    JSR L0FCFEB.w
L0FD2B8:
    LDY #2
    STY $90
    JMP L0FCEED.w

L0FD2BF:
    LDA $2F
    PHA
    LDA $05B7
    JSR L0FCA40.w
    LDA $69
    STA $0300
    LDA #8
    STA $81
    LDA $D0
    JSR L0FC399.w
    STA $0595
L0FD2D9:
    LDA #83
    STA $04
    LDA #124
    STA $05
    LDA $0595
    ASL
    ASL
    ASL
    JSR L0FC38F.w
    JSR L0FD30F.w
    CLC
    LDA $0300
    ADC #2
    STA $0300
    LDX $0595
    INX
    CPX #8
    BCC L0FD303
    DEC $0300
    LDX #0
L0FD303:
    STX $0595
    DEC $81
    BNE L0FD2D9
    PLA
    JSR L0FCA40.w
    RTS

L0FD30F:
    LDA $D0
    AND #16
    BEQ L0FD339
    LDA $0300
    JSR L0FCEBF.w
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $81
    CMP #8
    BNE L0FD331
    LDA $0300
    CLC
    ADC #14
    BPL L0FD34D
L0FD331:
    LDA $0300
    SEC
    SBC #1
    BPL L0FD34D
L0FD339:
    LDA $0300
    CLC
    ADC #1
    JSR L0FCEBF.w
    LDA $70
    STA $06
    LDA $71
    STA $07
    LDA $0300
L0FD34D:
    JSR L0FCEBF.w
    LDY #0
    STY $0301
    STY $18
    JSR L0FD363.w
    LDY #64
    STY $0301
    JSR L0FD363.w
    RTS

L0FD363:
    LDX #8
L0FD365:
    LDY $18
    JSR L0FD067.w
    LDY $18
    INY
    JSR L0FD067.w
    LDY $18
    LDA ($06),Y
    JSR L0FD069.w
    LDY $18
    INY
    LDA ($06),Y
    JSR L0FD069.w
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
    BNE L0FD365
    RTS

L0FD394:
    LDA #0
    STA $DD
    BEQ L0FD39E
L0FD39A:
    LDA #1
    STA $DD
L0FD39E:
    LDA $D3
    AND #128
    BEQ L0FD3AA
    JSR L0FC73E.w
    JSR L0FC773.w
L0FD3AA:
    LDA $69
L0FD3AC:
    CMP #15
    BCC L0FD3B5
    SEC
    SBC #15
    BNE L0FD3AC
L0FD3B5:
    JSR L0FC3A0.w
    STA $D0
    STA $24
    JSR L0FD21C.w
    JSR L0FD262.w
    LDA #26
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA #24
    JSR L0FCA58.w
    JSR L0FCA60.w
    JSR L0FC77D.w
    LDA $DD
    BNE L0FD3DD
    LDA #128
    BNE L0FD3E3
L0FD3DD:
    LDX $7434
    LDA L0FCC95.w,X
L0FD3E3:
    STA $28
    JSR L0FC70D.w
    LDA $6A
    CMP #16
    BCC L0FD3FA
    LDA $D3
    ORA #1
    STA $D3
    LDA #16
    STA $6A
    LDA #0
L0FD3FA:
    JSR L0FC3A0.w
    STA $D1
    LDA $D2
    AND #30
    STA $D2
    LDA #1
    STA $9D
    JMP L0FC72D.w

L0FD40C:
    LDA $8E
    BNE L0FD428
    LDA $1E
    AND #8
    BNE L0FD429
    LDA $1E
    AND #4
    BNE L0FD447
    LDA $1E
    AND #2
    BNE L0FD463
    LDA $1E
    AND #1
    BNE L0FD47D
L0FD428:
    RTS

L0FD429:
    STA $8D
    LDA $94
    SEC
    SBC $69
    CMP #7
    BCS L0FD437
    JSR L0FD0BB.w
L0FD437:
    LDA $05F4
    CLC
    ADC #1
    CMP $94
    BEQ L0FD446
    DEC $94
    JMP L0FF56C.w

L0FD446:
    RTS

L0FD447:
    STA $8D
    LDA $94
    SEC
    SBC $69
    CMP #9
    BCC L0FD455
    JSR L0FD0BB.w
L0FD455:
    LDY $94
    INY
    CPY $7440
    BCS L0FD462
    INC $94
    JMP L0FF56C.w

L0FD462:
    RTS

L0FD463:
    STA $8D
    LDA $95
    SEC
    SBC $6A
    CMP #7
    BCS L0FD471
    JSR L0FD0BB.w
L0FD471:
    LDA $95
    CMP #1
    BEQ L0FD47C
    DEC $95
    JMP L0FF56C.w

L0FD47C:
    RTS

L0FD47D:
    STA $8D
    LDA $95
    SEC
    SBC $6A
    CMP #9
    BCC L0FD48B
    JSR L0FD0BB.w
L0FD48B:
    LDY $95
    INY
    CPY $7441
    BCS L0FD498
    INC $95
    JMP L0FF56C.w

L0FD498:
    RTS

L0FD499:
    LDA #0
    STA $42
    LDA $D0
    AND #15
    STA $3A
    LDY $94
    LDA $8E
    BEQ L0FD4B7
    LDA $8D
    AND #8
    BEQ L0FD4B0
    INY
L0FD4B0:
    LDA $8D
    AND #4
    BEQ L0FD4B7
    DEY
L0FD4B7:
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
    BEQ L0FD4DF
    LDA $8D
    AND #2
    BEQ L0FD4D8
    INX
L0FD4D8:
    LDA $8D
    AND #1
    BEQ L0FD4DF
    DEX
L0FD4DF:
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
    BEQ L0FD4FB
    LDA #8
    STA $0587
    LDA $A0
    JMP L0FE80F.w

L0FD4FB:
    RTS

L0FD4FC:
    DEC $91
    BNE L0FD50D
    LDY $92
    LDA L0FD50E.w,Y
    STA $91
    LDA $92
    EOR #1
    STA $92
L0FD50D:
    RTS

L0FD50E:
.db $10 $08

L0FD510:
    LDA $2F
    PHA
    LDA $05B7
    JSR L0FCA40.w
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
    JSR L0FC39A.w
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
L0FD545:
    LDA #2
    STA $19
    JSR L0FD55F.w
    LDA #0
    STA $19
    JSR L0FD55F.w
    DEC $0300
    DEC $0595
    BNE L0FD545
    PLA
    JMP L0FCA40.w

L0FD55F:
    LDA $0590
    LSR
    STA $17
    LDA $77
    JSR L0FC39A.w
    CLC
    ADC $6A
    STA $18
    LDA $0300
    JSR L0FCEBF.w
L0FD575:
    LDY $18
    LDA ($70),Y
    JSR L0FCEA3.w
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
    JSR L0FC378.w
    INC $18
    DEC $17
    BNE L0FD575
    RTS

L0FD598:
    JSR L0FD604.w
    JSR L0FD740.w
    LDY #15
    LDA ($7A),Y
    LDY #0
    STA ($00),Y
    JSR L0FD604.w
    LDY #15
    LDA ($7A),Y
    JSR L0FD611.w
    JSR L0FD604.w
    LDY #15
    LDA ($7A),Y
    JMP L0FD67F.w

L0FD5BA:
    JSR L0FD758.w
    JSR L0FD604.w
    JSR L0FD777.w
    LDY #0
    STA ($00),Y
    JSR L0FD611.w
    JSR L0FD604.w
    JSR L0FD777.w
    JMP L0FD67F.w

L0FD5D3:
    JSR L0FD758.w
    JSR L0FD604.w
    LDY #18
    LDA ($7A),Y
    BEQ L0FD5E5
    JSR L0FD771.w
    JMP L0FD5E8.w

L0FD5E5:
    JSR L0FD777.w
L0FD5E8:
    LDY #0
    STA ($00),Y
    JSR L0FD611.w
    JSR L0FD604.w
    LDY #18
    LDA ($7A),Y
    BEQ L0FD5FE
    JSR L0FD771.w
    JMP L0FD601.w

L0FD5FE:
    JSR L0FD777.w
L0FD601:
    JMP L0FD67F.w

L0FD604:
    LDA $0501
    STA $04
    LDA $0500
    STA $05
    RTS

L0FD60F:
    LDA $0B
L0FD611:
    LDX #0
    STX $0301
    STX $19
    PHA
    JSR L0FCE88.w
    INC $19
    PLA
    JSR L0FCE88.w
    LDA $04
    SEC
    SBC $69
    BCC L0FD67C
    CMP #15
    BCS L0FD67C
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
    BCC L0FD643
    CMP #16
    BCC L0FD647
L0FD643:
    LDX #1
    STX $0B
L0FD647:
    CLC
    ROL
    ROL
    ROL
    ROL
    STA $01
    JSR L0FC517.w
    LDA $04
    STA $00
    LDA $05
    LDX $0B
    BEQ L0FD667
    AND #251
    STA $0B
    LDA $05
    AND #4
    EOR #4
    ORA $0B
L0FD667:
    STA $01
    LDA #1
    STA $02
    LDA #3
    STA $03
    LDA #34
    STA $0301
    JSR L0FC45F.w
    JMP L0FC70D.w

L0FD67C:
    RTS

L0FD67D:
    LDA $0B
L0FD67F:
    TAY
    LDA $8400,Y
    AND #3
    STA $059B
    LDA $04
    SEC
    SBC $69
    BCC L0FD67C
    CMP #15
    BCS L0FD67C
    JSR L0FC3A0.w
    STA $00
    LDA #0
    STA $0B
    LDA $05
    SEC
    SBC $6A
    BCC L0FD6A7
    CMP #16
    BCC L0FD6AB
L0FD6A7:
    LDX #1
    STX $0B
L0FD6AB:
    JSR L0FC3A0.w
    STA $01
    JSR L0FC517.w
    LDA $0B
    BEQ L0FD6BD
    LDA $05
    EOR #4
    STA $05
L0FD6BD:
    JSR L0FC407.w
    LDA $78
    STA $0598
    LDA $79
    STA $0599
    LDX #0
    BIT $04
    BVC L0FD6D2
    LDX #2
L0FD6D2:
    LDA $04
    AND #2
    BEQ L0FD6D9
    INX
L0FD6D9:
    LDA L0FC403.w,X
    STA $059A
    TXA
    ASL
    TAX
    LDA $059B
L0FD6E5:
    DEX
    BMI L0FD6EB
    ASL
    BCC L0FD6E5
L0FD6EB:
    STA $059B
    JSR L0FD2BF.w
    LDA $0598
    AND #63
    STA $04
    LDA $0599
    AND #4
    BNE L0FD707
    LDA #124
    STA $05
    LDA #83
    BNE L0FD70D
L0FD707:
    LDA #124
    STA $05
    LDA #147
L0FD70D:
    JSR L0FC38F.w
    LDX $0780
    LDA $0599
    JSR L0FC4A2.w
    LDA $0598
    JSR L0FC4A2.w
    LDA #1
    JSR L0FC4A2.w
    LDY #0
    LDA ($04),Y
    AND $059A
    ORA $059B
    JSR L0FC4A2.w
    LDA #0
    STA $0781,X
    STX $0780
    LDA #1
    STA $27
    JMP L0FC70D.w

L0FD740:
    LDA $04
    ASL
    TAY
    LDA L0FEE5E.w,Y
    STA $00
    LDA (L0FEE5E.w + 1),Y
    STA $01
    LDA $05
    JSR L0FC379.w
    LDY #0
    LDA ($00),Y
    RTS

L0FD758:
    JSR L0FD604.w
    JSR L0FD740.w
    LDY #15
    STA ($7A),Y
    LDA $0501
    LDY #16
    STA ($7A),Y
    LDA $0500
    LDY #17
    STA ($7A),Y
    RTS

L0FD771:
    LDA #112
    STA $0B
    BNE L0FD77B
L0FD777:
    LDA #0
    STA $0B
L0FD77B:
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

L0FD78A:
    LDA #0
    STA $1A
    STA $1C
    STA $1E
    LDA $00
    CMP $02
    BEQ L0FD7A2
    BCC L0FD79E
    LDA #8
    BNE L0FD7B0
L0FD79E:
    LDA #4
    BNE L0FD7B0
L0FD7A2:
    LDA $01
    CMP $03
    BEQ L0FD7BF
    BCC L0FD7AE
    LDA #2
    BNE L0FD7B0
L0FD7AE:
    LDA #1
L0FD7B0:
    STA $1C
    TAX
    LDA $36
    AND #1
    BEQ L0FD7BA
    TXA
L0FD7BA:
    STA $1E
    CLC
    BCC L0FD7C0
L0FD7BF:
    SEC
L0FD7C0:
    RTS

L0FD7C1:
    LDY #12
    CMP #128
    BCC L0FD7CB
    SBC #128
    LDY #12
L0FD7CB:
    STY $01
    STA $00
    LDA $01
    JSR L0FCA40.w
    LDY $00
    TYA
    ASL
    TAY
    LDA $8000,Y
    STA $6E
    LDA $8001,Y
    STA $6F
    LDA $04
    JSR L0FCEBF.w
    LDY $05
    JSR L0FCE1F.w
    LDY #0
    LDA ($6E),Y
    STA $0A
    STA $81
    INC $81
    INY
    LDA ($6E),Y
    STA $0B
    INY
    JSR L0FCE14.w
L0FD800:
    LDY #0
L0FD802:
    LDA ($6E),Y
    STA ($70),Y
    INY
    CPY $0B
    BCC L0FD802
    BEQ L0FD802
    JSR L0FCE14.w
    LDY #32
    JSR L0FCE1F.w
    DEC $81
    BNE L0FD800
    LDA #12
    JMP L0FCA40.w

L0FD81E:
    LDA $05E4
    CMP #255
    BNE L0FD82C
L0FD825:
    LDA #0
    STA $05E4
    BEQ L0FD830
L0FD82C:
    LDA $34
    BNE L0FD85B
L0FD830:
    LDA $05E5
    ASL
    TAX
    LDA L0FD85C.w,X
    STA $00
    LDA (L0FD85C.w + 1),X
    STA $01
    LDA L0FD874.w,X
    STA $02
    LDA (L0FD874.w + 1),X
    STA $03
    LDY $05E4
    LDA ($00),Y
    CMP #254
    BEQ L0FD825
    STA $A0
    LDA ($02),Y
    STA $34
    INC $05E4
L0FD85B:
    RTS

L0FD85C:
.dw L0FD88C
.dw L0FD8A3
.dw L0FD8D6
.dw L0FD90D
.dw L0FD922
.dw L0FD943
.dw L0FD94B
.dw L0FD95A
.dw L0FD97B
.dw L0FD996
.dw L0FD9A1
.dw L0FD9AA

L0FD874:
.dw L0FD898
.dw L0FD8BD
.dw L0FD8F2
.dw L0FD918
.dw L0FD933
.dw L0FD953
.dw L0FD953
.dw L0FD96B
.dw L0FD989
.dw L0FD99C
.dw L0FD9A6
.dw L0FD9AE


L0FD88C:
.db $CA $CB $CC $CD $CE $CF $D0 $D1
.db $D2 $D3 $D4 $FE

L0FD898:
.db $03 $04 $03 $02 $01 $02 $01 $01
.db $02 $01 $01

L0FD8A3:
.db $00 $01 $02 $03 $04 $05 $04 $03
.db $02 $01 $00 $01 $02 $03 $04 $05
.db $04 $03 $02 $01 $06 $07 $08 $09
.db $0A $FE

L0FD8BD:
.db $04 $02 $02 $02 $01 $01 $01 $02
.db $02 $02 $04 $02 $02 $02 $01 $01
.db $01 $02 $02 $02 $03 $0E $02 $01
.db $04

L0FD8D6:
.db $0F $10 $11 $00 $01 $02 $03 $04
.db $05 $04 $03 $02 $01 $00 $01 $02
.db $03 $04 $05 $04 $03 $02 $01 $0B
.db $0C $0D $0E $FE

L0FD8F2:
.db $03 $03 $03 $04 $02 $02 $02 $01
.db $01 $01 $02 $02 $02 $04 $02 $02
.db $02 $01 $01 $01 $02 $02 $02 $04
.db $05 $06 $07

L0FD90D:
.db $12 $13 $14 $15 $0F $10 $11 $16
.db $17 $18 $FE

L0FD918:
.db $04 $05 $06 $0B $03 $03 $03 $02
.db $03 $14

L0FD922:
.db $11 $10 $0F $11 $10 $0F $11 $10
.db $0F $11 $10 $0F $15 $14 $13 $12
.db $FE

L0FD933:
.db $03 $03 $03 $03 $03 $03 $03 $03
.db $03 $03 $03 $03 $07 $08 $06 $05

L0FD943:
.db $19 $1A $1B $1C $1D $1E $1F $FE

L0FD94B:
.db $1F $1E $1D $1C $1B $1A $19 $FE

L0FD953:
.db $0B $0A $08 $08 $08 $08 $08

L0FD95A:
.db $20 $21 $22 $23 $24 $25 $26 $31
.db $30 $2F $31 $30 $2F $31 $30 $2F
.db $FE

L0FD96B:
.db $06 $07 $08 $0C $04 $05 $06 $03
.db $03 $03 $03 $03 $03 $03 $03 $03

L0FD97B:
.db $31 $30 $2F $24 $25 $26 $31 $30
.db $2F $23 $22 $21 $20 $FE

L0FD989:
.db $03 $03 $03 $06 $07 $08 $03 $03
.db $03 $06 $06 $05 $05

L0FD996:
.db $27 $28 $32 $29 $2A $FE

L0FD99C:
.db $01 $02 $06 $01 $02

L0FD9A1:
.db $2E $2D $2C $2B $FE

L0FD9A6:
.db $01 $01 $02 $02

L0FD9AA:
.db $0F $10 $11 $FE

L0FD9AE:
.db $03 $03 $03

L0FD9B1:
.db $01 $02 $04 $08 $10 $20 $40 $80

L0FD9B9:
.db $00
.db $00
.db $04
.db $08
.db $03
.db $03
.db $03
.db $0F
.db $0A
.db $14
.db $0A
.db $04
.db $08
.db $05
.db $0D
.db $0F
.db $03
.db $0A
.db $07
.db $0C
.db $03
.db $05
.db $07
.db $03
.db $04
.db $18
.db $08
.db $05
.db $10
.db $0D
.db $00
.db $03
.db $0A
.db $0F
.db $00
.db $00
.db $00
.db $00
.db $0A
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
.db $00
.db $00
.db $00
.db $00

L0FD9F4:
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
.db $00
.db $81
.db $81
.db $00
.db $00
.db $00
.db $00
.db $01
.db $02
.db $0A
.db $04
.db $03
.db $08
.db $06
.db $00
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
.db $03
.db $00
.db $08
.db $0C
.db $0C
.db $0E
.db $00

L0FDA24:
.db $00
.db $00
.db $01
.db $01
.db $02
.db $00
.db $01
.db $00
.db $00
.db $02
.db $01
.db $01
.db $01
.db $00
.db $05
.db $03
.db $00
.db $00
.db $00
.db $00
.db $01
.db $00
.db $02
.db $03
.db $05
.db $14
.db $04
.db $01
.db $0B
.db $0A
.db $00
.db $03
.db $06
.db $09
.db $0D
.db $00
.db $00
.db $00
.db $04
.db $01
.db $00
.db $00
.db $02
.db $00
.db $00
.db $00
.db $00
.db $00
L0FDA54:
.db $5A
.db $46
.db $50
.db $5A
.db $46
.db $5A
.db $55
.db $64
.db $64
.db $50
.db $64
.db $50
.db $5A
.db $64
.db $46
.db $50
.db $64
.db $64
.db $64
.db $50
.db $46
.db $64
.db $50
.db $50
.db $46
.db $64
.db $5A
.db $64
.db $46
.db $50
.db $64
.db $50
.db $46
.db $46
.db $46
.db $00
.db $00
.db $00
.db $46
.db $5A
.db $00
.db $00
.db $32
.db $00
.db $00
.db $00
.db $00
.db $00

L0FDA84:
.db $00
.db $00
.db $00
.db $00
.db $00
.db $0A
.db $00
.db $00
.db $32
.db $00
.db $00
.db $00
.db $00
.db $1E
.db $00
.db $00
.db $0F
.db $00
.db $14
.db $00
.db $00
.db $0A
.db $00
.db $00
.db $00
.db $00
.db $00
.db $14
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
.db $00
.db $00
.db $00
.db $00
L0FDAB4:
.db $00
.db $00
.db $00
.db $00
.db $00
.db $01
.db $04
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
.db $01
.db $00
.db $00
.db $03
.db $01
.db $03
.db $00
.db $00
.db $00
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
.db $00
.db $00
.db $00
.db $00
.db $00

L0FDAE4:
.dw L0FDAEE
.dw L0FDAEE
.dw L0FDAF4
.dw L0FDAF6
.dw L0FDAF9

L0FDAEE:
.db $0B $03 $05 $11 $12 $FF

L0FDAF4:
.db $15 $FF

L0FDAF6:
.db $03 $05 $FF

L0FDAF9:
.db $01 $04 $07 $FF

L0FDAFD:
.db $0A
.db $0E
.db $0A
.db $0A
.db $0E
.db $0A
.db $0A
.db $0E
.db $0A
.db $0A
.db $0A
.db $0A
.db $0A
.db $0A
.db $0A
.db $0E
.db $0A
.db $0A
.db $0A
.db $0A
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
.db $0E
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

L0FDB38:
.db $00
.db $00
.db $00
.db $00
.db $00
.db $0A
.db $00
.db $0A
.db $0A
.db $0A
.db $0A
.db $00
.db $00
.db $00
.db $00
.db $00
.db $0A
.db $0A
.db $0A
.db $00
.db $00
.db $0A
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
.db $00
.db $06
.db $01
.db $02
.db $00
.db $09
.db $03
.db $09
.db $09
.db $00
.db $00
.db $00
.db $00
.db $0A
.db $00
.db $0A
.db $0A
.db $0A
.db $0A
.db $0A
.db $0A

L0FDB73:
.dw L0FDBA3
.dw L0FDBA7
.dw L0FDBAC
.dw L0FDBB1
.dw L0FDBB9
.dw L0FDBBE
.dw L0FDBC5
.dw L0FDBCA
.dw L0FDBCF
.dw L0FDBD3
.dw L0FDBD8
.dw L0FDBDD
.dw L0FDBE3
.dw L0FDBEA
.dw L0FDBF0
.dw L0FDBF6
.dw L0FDBFC
.dw L0FDC02
.dw L0FDC07
.dw L0FDC0D
.dw L0FDC14
.dw L0FDC1D
.dw L0FDC22
.dw L0FDC27

L0FDBA3: ; cavalier
ENCODE("ナイト")
STOP

L0FDBA7: ; knight
ENCODE("アーマー")
STOP

L0FDBAC: ; pegasus knight
ENCODE("Pナイト")
STOP

L0FDBB1: ; paladin
ENCODE("パラディン")
STOP

L0FDBB9: ; falcon knight
ENCODE("Fナイト")
STOP

L0FDBBE: ; soldier
ENCODE("ソルジャー")
STOP

L0FDBC5: ; gold knight
ENCODE("Gナイト")
STOP

L0FDBCA: ; mercenary
ENCODE("ようへい")
STOP

L0FDBCF: ; myrmidon
ENCODE("けんし")
STOP

L0FDBD3: ; dread fighter
ENCODE("ませんし")
STOP

L0FDBD8: ; priestess
ENCODE("しんかん")
STOP

L0FDBDD: ; archer
ENCODE("アーチャー")
STOP

L0FDBE3: ; sniper
ENCODE("スナイパー")
STOP

L0FDBEA: ; villager
ENCODE("むらびと")
STOP

L0FDBF0: ; mage (male?)
ENCODE("まどうし")
STOP

L0FDBF6: ; mage (female?)
ENCODE("まどうし")
STOP

L0FDBFC: ; saint
ENCODE("せいじょ")
STOP

L0FDC02: ; cleric
ENCODE("シスター")
STOP

L0FDC07: ; sage
ENCODE("けんじゃ")
STOP

L0FDC0D: ; bow knight
ENCODE("ボウナイト")
STOP

L0FDC14: ; fighter
ENCODE("せんし")
STOP

L0FDC18: ; hero
ENCODE("ゆうしゃ")
STOP

L0FDC1D: ; baron
ENCODE("バロン")
STOP

L0FDC22: ; hero
ENCODE("ゆうしゃ")
STOP

L0FDC27: ; princess
ENCODE("プリンセス")
STOP

L0FDC2E:
.dw L0FDBA3
.dw L0FDBA7
.dw L0FDC5A
.dw L0FDBB1
.dw L0FDC68
.dw L0FDBBE
.dw L0FDBC5
.dw L0FDBCA
.dw L0FDBCF
.dw L0FDBD3
.dw L0FDC7D
.dw L0FDBDD
.dw L0FDBE3
.dw L0FDC83
.dw L0FDC8F
.dw L0FDC97
.dw L0FDC89
.dw L0FDC9C
.dw L0FDCA2
.dw L0FDC0D
.dw L0FDCA7
.dw L0FDC1D

L0FDC5A: ; gargoyle
ENCODE("ガーゴイル")
STOP

L0FDC62: ; high knight
ENCODE("ハイナイト")
STOP

L0FDC68: ; necrodragon
ENCODE("Dゾンビ")
STOP

L0FDC6F: ; general
ENCODE("ジェネラル")
STOP

L0FDC76: ; berserker
ENCODE("きょうせんし")
STOP

L0FDC7D: ; revenant
ENCODE("ゾンビ")
STOP

L0FDC83: ; brigand
ENCODE("とうぞく")
STOP

L0FDC89: ; bonewalker
ENCODE("スケルトン")
STOP

L0FDC8F: ; arcanist
ENCODE("ようじゅつし")
STOP

L0FDC97: ; witch
ENCODE("まじょ")
STOP

L0FDC9C: ; mogall
ENCODE("ビグル")
STOP

L0FDCA2: ; cantor
ENCODE("きとうし")
STOP

L0FDCA7: ; fell god
ENCODE("じゃしん")
STOP

; items names
L0FDCAD:
.dw L0FDD23
.dw L0FDD23
.dw L0FDD25
.dw L0FDD2D
.dw L0FDD34
.dw L0FDD38
.dw L0FDD3F
.dw L0FDD46
.dw L0FDD4F
.dw L0FDD55
.dw L0FDD5A
.dw L0FDD60
.dw L0FDD6A
.dw L0FDD73
.dw L0FDD7B
.dw L0FDD83
.dw L0FDD8C
.dw L0FDD95
.dw L0FDD9C
.dw L0FDDA5
.dw L0FDDAB
.dw L0FDDB3
.dw L0FDDBA
.dw L0FDE1B
.dw L0FDE21
.dw L0FDE27
.dw L0FDE2E
.dw L0FDE35
.dw L0FDE3E
.dw L0FDE42
.dw L0FDE46
.dw L0FDE4B
.dw L0FDE50
.dw L0FDE55
.dw L0FDE59
.dw L0FDE7D
.dw L0FDE94
.dw L0FDE78
.dw L0FDE60
.dw L0FDE67
.dw L0FDE7D
.dw L0FDE83
.dw L0FDE89
.dw L0FDE8F
.dw L0FDE94
.dw L0FDE9B
.dw L0FDEA4
.dw L0FDD23
.dw L0FDDC1
.dw L0FDDC7
.dw L0FDDCF
.dw L0FDDD6
.dw L0FDDDD
.dw L0FDDE6
.dw L0FDDED
.dw L0FDDF6
.dw L0FDDFF
.dw L0FDE08
.dw L0FDE12

L0FDD23:
ENCODE(" ")
STOP

L0FDD25: ; steel lance
ENCODE("はがねのやり")
STOP

L0FDD2D: ; silver lance
ENCODE("ぎんのやり")
STOP

L0FDD34: ; javelin
ENCODE("てやり")
STOP

L0FDD38: ; blessed lance
ENCODE("せいなるやり")
STOP

L0FDD3F: ; knight killer/Ribersbane
ENCODE("ナイトキラー")
STOP

L0FDD46: ; Gradivus
ENCODE("グラディウス")
STOP

L0FDD4F: ; Astra
ENCODE("りゅうせい")
STOP

L0FDD55: ; Sol
ENCODE("たいよう")
STOP

L0FDD5A: ; Luna
ENCODE("げっこう")
STOP

L0FDD60: ; steel sword
ENCODE("はがねのつるぎ")
STOP

L0FDD6A: ; silver lance
ENCODE("ぎんのつるぎ")
STOP

L0FDD73: ; brave sword
ENCODE("ゆうしゃのけん")
STOP

L0FDD7B: ; shadow sword
ENCODE("あんこくのけん")
STOP

L0FDD83: ; levin sword
ENCODE("いかづちのけん")
STOP

L0FDD8C: ; blessed sword
ENCODE("せいなるつるぎ")
STOP

L0FDD95: ; Falchion
ENCODE("ファルシオン")
STOP

L0FDD9C: ; royal sword
ENCODE("おうけのつるぎ")
STOP

L0FDDA5: ; tentacle
ENCODE("しょくしゅ")
STOP

L0FDDAB: ; steel bow
ENCODE("はがねのゆみ")
STOP

L0FDDB3: ; blessed bow
ENCODE("せいなるゆみ")
STOP

L0FDDBA: ; silver bow
ENCODE("ぎんのゆみ")
STOP

L0FDDC1: ; leather shield
ENCODE("かわのたて")
STOP

L0FDDC7: ; steel shield
ENCODE("はがねのたて")
STOP

L0FDDCF:
ENCODE("ぎんのたて")
STOP

L0FDDD6: ; silver shield
ENCODE("せいなるたて")
STOP

L0FDDDD: ; hexlock shield
ENCODE("まふうじのたて")
STOP

L0FDDE6: ; dracoshield
ENCODE("りゅうのたて")
STOP

L0FDDED: ; blessed ring
ENCODE("せいなるゆびわ")
STOP

L0FDDF6: ; angel ring
ENCODE("てんしのゆびわ")
STOP

L0FDDFF: ; speed ring
ENCODE("はやさのゆびわ")
STOP

L0FDE08: ; mage ring
ENCODE("まどうのゆびわ")
STOP

L0FDE12: ; player ring
ENCODE("いのりのゆびわ")
STOP

L0FDE1B: ; fire (tome)
ENCODE("ファイアー")
STOP

L0FDE21: ; thunder (tome)
ENCODE("サンダー")
STOP

L0FDE27: ; ragnarok
ENCODE("ライナロック")
STOP

L0FDE2E: ; seraphim
ENCODE("エンジェル")
STOP

L0FDE35: ; excalibur
ENCODE("エクスカリバー")
STOP

L0FDE3E: ; sagittae
ENCODE("アロー")
STOP

L0FDE42: ; aura
ENCODE("オーラ")
STOP

L0FDE46: ; gaia
ENCODE("ガイア")
STOP

L0FDE4B: ; miasma
ENCODE("ドーラ")
STOP

L0FDE50: ; mire
ENCODE("スライム")
STOP

L0FDE55: ; death
ENCODE("デス")
STOP

L0FDE59: ; medusa
ENCODE("メデューサ")
STOP

L0FDE60: ; ocular beam
ENCODE("アイビーム")
STOP

L0FDE67: ; oculus
ENCODE("アイボール")
STOP

L0FDE6E: ; ???
ENCODE("ボーマ")
STOP

L0FDE72: ; ???
ENCODE("ボース")
STOP

L0FDE78: ; conjure
ENCODE("メサイア")
STOP

L0FDE7D: ; recover
ENCODE("リカバー")
STOP

L0FDE83: ; physic
ENCODE("リブロー")
STOP

L0FDE89: ; nosferatu
ENCODE("リザイア")
STOP

L0FDE8F: ; warp
ENCODE("ワープ")
STOP

L0FDE94: ; fortify
ENCODE("リザーブ")
STOP

L0FDE9B: ; invoke
ENCODE("イリュージョン")
STOP

L0FDEA4: ; expel
ENCODE("ディル")
STOP

; pointers to names
L0FDEA9:
.dw L0FDEFF
.dw L0FDF03
.dw L0FDF07
.dw L0FDF0C
.dw L0FDF10
.dw L0FDF13
.dw L0FDF17
.dw L0FDF1C
.dw L0FDF21
.dw L0FDF25
.dw L0FDF25
.dw L0FDF2B
.dw L0FDF36
.dw L0FDF39
.dw L0FDF3D
.dw L0FDF43
.dw L0FDF48
.dw L0FDF4F
.dw L0FDF55
.dw L0FDF5B
.dw L0FDF4C
.dw L0FDF61
.dw L0FDF66
.dw L0FDF6C
.dw L0FDF71
.dw L0FDF75
.dw L0FDF7B
.dw L0FDF81
.dw L0FDF86
.dw L0FDF8C
.dw L0FDF91
.dw L0FDF96
.dw L0FDF9B
.dw L0FDF9F
.dw L0FDFA4
.dw L0FDFAA
.dw L0FDFAE
.dw L0FDFB2
.dw L0FDF9F
.dw L0FDC0D
.dw L0FDBC5
.dw L0FDBB1
.dw L0FDFB6

L0FDEFF:
ENCODE("アルム")
STOP

L0FDF03:
ENCODE("セリカ")
STOP

L0FDF07:
ENCODE("マイセン")
STOP

L0FDF0C:
ENCODE("ノーマ")
STOP

L0FDF10:
ENCODE("ルカ")
STOP

L0FDF13:
ENCODE("クリフ")
STOP

L0FDF17:
ENCODE("ロビン")
STOP

L0FDF1C:
ENCODE("グレイ")
STOP

L0FDF21:
ENCODE("クレア")
STOP

L0FDF25:
ENCODE("クレーベ")
STOP

L0FDF2B:
ENCODE("フォルス")
STOP

L0FDF30:
ENCODE("ジュノー")
STOP

L0FDF36:
ENCODE("メイ")
STOP

L0FDF39:
ENCODE("シルク")
STOP

L0FDF3D:
ENCODE("ジェニー")
STOP

L0FDF43:
ENCODE("ボーイ")
STOP

L0FDF48:
ENCODE("カムイ")
STOP

L0FDF4C:
ENCODE("レオ")
STOP

L0FDF4F:
ENCODE("バルボ")
STOP

L0FDF55:
ENCODE("マチルダ")
STOP

L0FDF5B:
ENCODE("パイソン")
STOP

L0FDF61:
ENCODE("アトラス")
STOP

L0FDF66:
ENCODE("ジェシー")
STOP

L0FDF6C:
ENCODE("フォルス")
STOP

L0FDF71:
ENCODE("ソニア")
STOP

L0FDF75:
ENCODE("ディーン")
STOP

L0FDF7B:
ENCODE("セーバー")
STOP

L0FDF81:
ENCODE("リュート")
STOP

L0FDF86:
ENCODE("デューテ")
STOP

L0FDF8C:
ENCODE("ティータ")
STOP

L0FDF91:
ENCODE("カチュア")
STOP

L0FDF96:
ENCODE("パオラ")
STOP

L0FDF9B:
ENCODE("エスト")
STOP

L0FDF9F:
ENCODE("ジーク")
STOP

L0FDFA4:
ENCODE("シャドー")
STOP

L0FDFAA:
ENCODE("おんな")
STOP

L0FDFAE:
ENCODE("おとこ")
STOP

L0FDFB2:
ENCODE("むすめ")
STOP

L0FDFB6:
ENCODE("ハルク")
STOP

L0FDFBA:
.dw L0FE06A
.dw L0FE070
.dw L0FE075
.dw L0FE07A
.dw L0FE081
.dw L0FE087
.dw L0FE08D
.dw L0FE091
.dw L0FE097
.dw L0FE09D
.dw L0FDF9F
.dw L0FE0AA
.dw L0FE0B1
.dw L0FE0B6
.dw L0FE0BA
.dw L0FE0BE
.dw L0FE0C4
.dw L0FE0CA
.dw L0FE0D6
.dw L0FE0DD
.dw L0FE0E2
.dw L0FE0E7
.dw L0FE0F1
.dw L0FE0F6
.dw L0FE0FC
.dw L0FE104
.dw L0FE06A
.dw L0FE0D0
.dw L0FDF71
.dw L0FE0EC
.dw L0FE0FC
.dw L0FE109
.dw L0FE111
.dw L0FE11A
.dw L0FE121
.dw L0FE129
.dw L0FE12F
.dw L0FE135
.dw L0FE139
.dw L0FE0A4
.dw L0FE13E
.dw L0FE144
.dw L0FE148
.dw L0FE14E
.dw L0FE139
.dw L0FE139
.dw L0FE139
.dw L0FE139
.dw L0FDBA3
.dw L0FDBA7
.dw L0FDC5A
.dw L0FDBB1
.dw L0FDC68
.dw L0FDBBE
.dw L0FDBC5
.dw L0FDBCA
.dw L0FDBCF
.dw L0FDBD3
.dw L0FDC7D
.dw L0FDBDD
.dw L0FDBE3
.dw L0FDC83
.dw L0FDC8F
.dw L0FDC97
.dw L0FDC89
.dw L0FDC9C
.dw L0FDCA2
.dw L0FDC0D
.dw L0FDCA7
.dw L0FDC1D
.dw L0FE153
.dw L0FE158
.dw L0FE15E
.dw L0FE165
.dw L0FDC68
.dw L0FDC68
.dw L0FDC68
.dw L0FDC68
.dw L0FDC68
.dw L0FE16B
.dw L0FE172
.dw L0FE177
.dw L0FE17C
.dw L0FE183
.dw L0FE189
.dw L0FE18F
.dw L0FDC9C
.dw L0FE195

L0FE06A:
ENCODE("ドゼー")
STOP

L0FE070:
ENCODE("ギース")
STOP

L0FE075:
ENCODE("ドルク")
STOP

L0FE07A:
ENCODE("ヌイババ")
STOP

L0FE081:
ENCODE("ルドルフ")
STOP

L0FE087:
ENCODE("ジュダ")
STOP

L0FE08D:
ENCODE("ソニア")
STOP

L0FE091:
ENCODE("ディーン")
STOP

L0FE097:
ENCODE("マグナム")
STOP

L0FE09D:
ENCODE("ジェローム")
STOP

L0FE0A4:
ENCODE("ミューラー")
STOP

L0FE0AA:
ENCODE("ハンニバル")
STOP

L0FE0B1:
ENCODE("マッセナ")
STOP

L0FE0B6:
ENCODE("マーラ")
STOP

L0FE0BA:
ENCODE("タタラ")
STOP

L0FE0BE:
ENCODE("ジャミル")
STOP

L0FE0C4:
ENCODE("デューテ")
STOP

L0FE0CA:
ENCODE("ガゼル")
STOP

L0FE0D0:
ENCODE("ザクソン")
STOP

L0FE0D6:
ENCODE("スレイダー")
STOP

L0FE0DD:
ENCODE("ミカエラ")
STOP

L0FE0E2:
ENCODE("ローソン")
STOP

L0FE0E7:
ENCODE("ダッハ")
STOP

L0FE0EC:
ENCODE("ガッハ")
STOP

L0FE0F1:
ENCODE("ブライ")
STOP

L0FE0F6:
ENCODE("シーザス")
STOP

L0FE0FC:
ENCODE("リゲルぐん")
STOP

L0FE104:
ENCODE("ウォルフ")
STOP

L0FE109:
ENCODE("ギースぐん")
STOP

L0FE111:
ENCODE("ドゼーぐん")
STOP

L0FE11A:
ENCODE("ドルクくん")
STOP

L0FE121:
ENCODE("まどうぐん")
STOP

L0FE129:
ENCODE("かいぞく")
STOP

L0FE12F:
ENCODE("さんぞく")
STOP

L0FE135:
ENCODE("まもの")
STOP

L0FE139:
ENCODE("ドーマ")
STOP

L0FE13E:
ENCODE("ガルシア")
STOP

L0FE144:
ENCODE("ヘステ")
STOP

L0FE148:
ENCODE("サイゾー")
STOP

L0FE14E:
ENCODE("ガネフ")
STOP

L0FE153:
ENCODE("まじん")
STOP

L0FE158:
ENCODE("デビル")
STOP

L0FE15E:
ENCODE("ゴールド")
STOP

L0FE165:
ENCODE("はくりゅう")
STOP

L0FE16B:
ENCODE("サーペント")
STOP

L0FE172:
ENCODE("ナーガ")
STOP

L0FE177:
ENCODE("リッチー")
STOP

L0FE17C:
ENCODE("バルログ")
STOP

L0FE183:
ENCODE("バデス")
STOP

L0FE189:
ENCODE("ケルベス")
STOP

L0FE18F:
ENCODE("ベルレス")
STOP

L0FE195:
ENCODE("マミー")
STOP

L0FE199:
.db $17
.db $18
.db $19
.db $1A
.db $1B
.db $1C
.db $1D
.db $28

L0FE1A1:
.db $17
.db $18
.db $19
.db $1A
.db $1B
.db $1C
.db $1D
.db $FF
.db $17
.db $18
.db $19
.db $1A
.db $1B
.db $1C
.db $1D
.db $FF
.db $28
.db $29
.db $2A
.db $2B
.db $2C
.db $2D
.db $2E
.db $1A
.db $28
.db $29
.db $2A
.db $2B
.db $2C
.db $2D
.db $2E
.db $17
.db $17
.db $18
.db $19
.db $1A
.db $1B
.db $1C
.db $1D
.db $28
.db $1F
.db $20
.db $21
.db $22
.db $23
.db $24
.db $FF
.db $FF

L0FE1D1:
.db $1F
.db $20
.db $21
.db $22
.db $23
.db $24
.db $FF
.db $FF

L0FE1D9:
.db $17
.db $18
.db $1B
.db $1D
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
.db $1F
.db $20
.db $21
.db $22
.db $25
.db $25
.db $25
.db $25

L0FE1F9:
.db $28
.db $28
.db $28
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
.db $28
.db $28
.db $28
.db $28
.db $3C
.db $28
.db $28
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
.db $28
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
.db $28
.db $28
.db $28
.db $28
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

L0FE249:
.db $00
.db $00
.db $00
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
.db $28
.db $28
.db $28
.db $28
.db $0A
.db $28
.db $28
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
.db $28
.db $00
.db $50
.db $28
.db $28
.db $28
.db $28
.db $28
.db $00
.db $28
.db $28
.db $28
.db $28
.db $28
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
.db $11
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
.db $17
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
.db $1A
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
.db $1B
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
.db $06
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
.db $07
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
.db $08
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
.db $16
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
.db $0D
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
.db $0E
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
.db $0F
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
.db $10
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
.db $02
.db $05
.db $1A
.db $08
.db $18
.db $09
.db $28
.db $0F
.db $1B
.db $14
.db $19
.db $19
.db $0A
.db $1A
.db $0E
.db $1C
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $1C
.db $04
.db $18
.db $09
.db $1C
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $1D
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
.db $1E
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
.db $03
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
.db $FF

L0FE360:
.dw L0FE370
.dw L0FE374
.dw L0FE378
.dw L0FE37C
.dw L0FE382
.dw L0FE389
.dw L0FE390
.dw L0FE39D

L0FE370:
.db $30 $2F $2E $FF

L0FE374:
.db $2D $2C $2B $FF

L0FE378:
.db $2A $29 $25 $FF

L0FE37C:
.db $1A $19 $14 $13 $12 $FF

L0FE382:
.db $18 $16 $15 $14 $13 $12 $FF

L0FE389:
.db $18 $17 $15 $14 $13 $12 $FF

L0FE390:
.db $28 $27 $26 $21 $20 $1F $1E $1D
.db $1C $1B $11 $10 $FF

L0FE39D:
.db $1D $1C $1B $11 $10 $FF

L0FE3A3:
.db $04 $0B $15 $FF

L0FE3A7:
.db $01 $04 $06 $02 $10 $0C $08 $0F
.db $12 $03 $0D $09 $0A $FF

L0FE3B5:
.db $04
.db $07
.db $02
.db $16
.db $0B
.db $0D
.db $09
.db $13
.db $11
.db $05
.db $14
.db $0A
.db $0E

L0FE3C2:
.db $07
.db $0A
.db $07
.db $0A
.db $14
.db $07
.db $07
.db $0C
.db $0C
.db $0C
.db $0A
.db $0A
.db $0A

L0FE3CF:
.db $01
.db $08
.db $0C
.db $0F
.db $06

L0FE3D4:
    LDA $04C4
    BEQ L0FE3ED
    LDA #127
    STA $0200
    LDA #247
    STA $0201
    LDA #35
    STA $0202
    LDA #224
    STA $0203
L0FE3ED:
    RTS

L0FE3EE:
    LDX #2
L0FE3F0:
    LDA $03CD,X
    BEQ L0FE41D
    CPX #1
    BNE L0FE3FE
    LDA $0362
    BNE L0FE41D
L0FE3FE:
    LDA $03D0,X
    BEQ L0FE406
    JMP L0FE4D6.w

L0FE406:
    JSR L0FE427.w
    JSR L0FE49B.w
    LDA $03BE,X
    STA $3C
    JSR L0FCAB7.w
    JSR L0FE462.w
    LDA $04CE,X
    STA $B000.w
L0FE41D:
    DEX
    BPL L0FE3F0
    LDA $03A9
    STA $A000
    RTS

L0FE427:
    LDY $04D1,X
    LDA L0FE436.w,Y
    STA $A000
    LDA L0FE44C.w,Y
    STA $DB
    RTS

L0FE436:
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

L0FE44C:
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

L0FE462:
    CPX #2
    BEQ L0FE496
    STX $0380
    TXA
    ASL
    TAX
    LDA L0FE497.w,X
    STA $00
    LDA (L0FE497.w + 1),X
    STA $01
    LDY #0
    LDA #4
    STA $02
    LDX $0380
L0FE47F:
    LDA ($00),Y
    BMI L0FE491
    STA $3C
    STY $0382
    JSR L0FE49B.w
    JSR L0FCAB7.w
    LDY $0382
L0FE491:
    INY
    DEC $02
    BNE L0FE47F
L0FE496:
    RTS

L0FE497:
.dw $03F8
.dw $03FC

L0FE49B:
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
    BNE L0FE4B8
    EOR #1
L0FE4B8:
    STA $41
    CPX #2
    BNE L0FE4C9
    LDA #3
    STA $40
    LDA $03E8
    STA $3F
    BPL L0FE4D5
L0FE4C9:
    CPX #1
    BNE L0FE4D5
    LDA #3
    STA $40
    LDA #1
    STA $3F
L0FE4D5:
    RTS

L0FE4D6:
    LDA $27
    BNE L0FE4E0
    LDA $28
    BNE L0FE4E0
    BEQ L0FE4E3
L0FE4E0:
    JMP L0FE41D.w

L0FE4E3:
    JSR L0FE427.w
    LDA $03C1,X
    JSR L0FC39B.w
    STA $03
    LDA $03C4,X
    JSR L0FC39B.w
    STA $02
    JSR L0FC795.w
    LDA $BFFA.w
    STA $08
    LDA $BFFB.w
    STA $09
    TXA
    ASL
    TAY
    LDA $BFFC.w,Y
    STA $0A
    LDA $BFFD.w,Y
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
    BCC L0FE52E
    PHA
    LDA $09
    CLC
    ADC #1
    STA $09
    PLA
L0FE52E:
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
    BNE L0FE544
    INC $01
L0FE544:
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
L0FE565:
    LDA ($00),Y
    STA $0781,Y
    INY
    DEC $03
    BEQ L0FE575
    DEC $02
    BNE L0FE565
    BEQ L0FE544
L0FE575:
    LDA #0
    STA $0781,Y
    STA $03CD,X
    LDA #1
    STA $27
    JMP L0FE41D.w

L0FE584:
    PHA
    TXA
    PHA
    TYA
    PHA
    LDA #255
    LDY #59
L0FE58D:
    STA $0407,Y
    DEY
    BPL L0FE58D
    LDX #0
    LDY #0
L0FE597:
    LDA ($00),Y
    CMP #239
    BEQ L0FE5B3
    CMP #31
    BEQ L0FE5A5
    CMP #15
    BNE L0FE5AC
L0FE5A5:
    DEX
    STA $0425,X
    INX
    BPL L0FE5B0
L0FE5AC:
    STA $0407,X
    INX
L0FE5B0:
    INY
    BPL L0FE597
L0FE5B3:
    LDX #0
    LDA #4
    STA $07
    LDA #7
    STA $06
    JSR L0FE5E7.w
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
    JSR L0FE5E7.w
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

L0FE5E7:
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
L0FE5FD:
    LDA ($06),Y
    STA $0781,X
    INY
    INX
    DEC $05
    BNE L0FE5FD
    RTS

L0FE609:
.dw L0FE629
.dw L0FE62F
.dw L0FE633
.dw L0FE637
.dw L0FE63C
.dw L0FE640
.dw L0FE644
.dw L0FE648
.dw L0FE64D
.dw L0FE651
.dw L0FE655
.dw L0FE659
.dw L0FE65D
.dw L0FE661
.dw L0FE667
.dw L0FE66E

L0FE629:
ENCODE("そうげん")
STOP

L0FE62F:
ENCODE("はしら")
STOP

L0FE633:
ENCODE("はやし")
STOP

L0FE637:
ENCODE("さばく")
STOP

L0FE63C:
ENCODE("や ま")
STOP

L0FE640:
ENCODE("は し")
STOP

L0FE644:
ENCODE("ま ち")
STOP

L0FE648:
ENCODE("とりで")
STOP

L0FE64D:
ENCODE("し ろ")
STOP

L0FE651:
ENCODE("か わ")
STOP

L0FE655:
ENCODE("そ ら")
STOP

L0FE659:
ENCODE("う み")
STOP

L0FE65D:
ENCODE("ゆ か")
STOP

L0FE661:
ENCODE("かいだん")
STOP

L0FE667:
ENCODE("スタジアム")
STOP

L0FE66E:
ENCODE("いしがき")
STOP

L0FE674:
    LDA #0
    STA $3D
    LDA #7
    STA $05B7
    BNE L0FE684
L0FE67F:
    LDA #6
    STA $05B7
L0FE684:
    LDA $058D
    BEQ L0FE695
    LDA #1
    STA $9D
    PLA
    PLA
    LDA $058D
    JMP L0FE6AC.w

L0FE695:
    RTS

L0FE696:
    LDA $058F
    BEQ L0FE6AB
    STA $058E
    STA $0594
    LDA #0
    STA $0595
    LDA #3
    STA $058D
L0FE6AB:
    RTS

L0FE6AC:
    STA $059F
    LDA #0
    STA $4A
    LDA #11
    JMP L0FCA94.w

L0FE6B8:
    STA $05A9
    LDA #1
    STA $4A
    LDA #11
    JMP L0FCA94.w

L0FE6C4:
    LDA $7DA7
    BEQ L0FE6CC
    STA $A000
L0FE6CC:
    LDA ($7C),Y
    STA $7EE7
    LDA #10
    STA $A000
    LDA $7EE7
    RTS

L0FE6DA:
    LDA $7DA7
    BEQ L0FE6E5
    LDA $7DA7
    STA $A000
L0FE6E5:
    LDA $7DA9
    AND #15
    ASL
    TAY
    LDA $BFE0.w,Y
    STA $04
    LDA $BFE1.w,Y
    STA $05
    LDA $7DA6
    ASL
    BCC L0FE6FE
    INC $05
L0FE6FE:
    CLC
    ADC $04
    STA $04
    BCC L0FE707
    INC $05
L0FE707:
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

L0FE71D:
    JSR L0FE764.w
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

L0FE734:
    LDA $2F
    PHA
    LDA $05B7
    JSR L0FCA40.w
    JSR L0FE764.w
    LDA $69
    JSR L0FCEBF.w
    LDY $6A
    LDA ($70),Y
    JSR L0FCEA3.w
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
    JMP L0FCA40.w

L0FE764:
    LDA #1
    STA $00
    STA $01
    JSR L0FC517.w
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
L0FE782:
    RTS

L0FE783:
    LDA $058D
    BEQ L0FE7B8
    CMP #4
    BNE L0FE795
    LDY $058F
    BEQ L0FE782
    DEY
    JMP L0FE7BE.w

L0FE795:
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
    JSR L0FE7E3.w
L0FE7B8:
    LDY $058F
    BEQ L0FE809
    DEY
L0FE7BE:
    LDX L0FE80A.w,Y
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
L0FE7E3:
    LDX #0
L0FE7E5:
    LDA $0200,X
    CMP $00
    BCS L0FE800
    CMP $02
    BCC L0FE800
    LDA $0203,X
    CMP $01
    BCS L0FE800
    CMP $03
    BCC L0FE800
    LDA #244
    STA $0200,X
L0FE800:
    INX
    INX
    INX
    INX
    BNE L0FE7E5
    DEY
    BPL L0FE7BE
L0FE809:
    RTS

L0FE80A:
.db $00 $06 $0C $12 $18

L0FE80F:
    STA $3C
    LDA $0587
    BMI L0FE821
    LDA $2F
    STA $0588
    LDA $0587
    JSR L0FCA40.w
L0FE821:
    LDA $0589
    ASL
    TAY
    LDA $BFD1.w,Y
    STA $49
    LDA $BFD0.w,Y
    STA $48
    LDA $3C
    ASL
    BCC L0FE837
    INC $49
L0FE837:
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
    BEQ L0FE8AF
L0FE853:
    LDA ($48),Y
    STA $08
    LDA $41
    BEQ L0FE86B
    LDA $08
    PHA
    AND #64
    EOR #64
    STA $08
    PLA
    AND #191
    ORA $08
    STA $08
L0FE86B:
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
    BEQ L0FE8A0
    PLA
    JSR L0FC5BA.w
    SEC
    SBC #8
    JMP L0FE8A1.w

L0FE8A0:
    PLA
L0FE8A1:
    CLC
    ADC $3B
    STA $0203,X
    LDX $3D
    INX
    INX
    INX
    INX
    STX $3D
L0FE8AF:
    LDX $3D
    CPX #252
    BCS L0FE8BD
    LDA ($48),Y
    AND #240
    CMP #240
    BNE L0FE853
L0FE8BD:
    LDA $0587
    BMI L0FE8CD
    LDA $0588
    JSR L0FCA40.w
    LDA #255
    STA $0587
L0FE8CD:
    LDA #0
    STA $41
    STA $3F
    STA $3E
    STA $0589
    RTS

L0FE8D9:
ENCODE("さけこえ")
STOP

L0FE8DE:
.db $00
.db $00
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
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
.db $03
.db $03
.db $0D
.db $04
.db $04
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
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
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
.db $0C
.db $0C
.db $0C
.db $0C
.db $06
.db $06
.db $06
.db $06
.db $06
.db $06
.db $06
.db $00
.db $00
.db $06
.db $0C
.db $0C
.db $0C
.db $11
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
.db $0C
.db $09
.db $04
.db $0C
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
.db $0C
.db $0C
L0FE9DE:
.db $00
.db $00
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
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
.db $03
.db $03
.db $0D
.db $04
.db $04
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
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
.db $1F
.db $0E
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
.db $0C
.db $0C
.db $0C
.db $0C
.db $06
.db $06
.db $06
.db $06
.db $06
.db $06
.db $06
.db $00
.db $00
.db $06
.db $0C
.db $0C
.db $0C
.db $11
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
.db $0C
.db $09
.db $04
.db $0C
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
.db $0C
.db $0C
L0FEADE:
.db $0A
L0FEADF:
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
.db $06
.db $FF
.db $FF
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $FF
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $03
.db $01
.db $01
.db $01
.db $01
.db $FF
.db $01
.db $02
.db $03
.db $FF
.db $FF
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
.db $03
.db $01
.db $01
.db $01
.db $01
.db $FF
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
.db $01
.db $01
.db $01
.db $01
.db $01
.db $03
.db $05
.db $FF
.db $FF
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $FF
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $03
.db $01
.db $01
.db $01
.db $01
.db $06
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
.db $01
.db $01
.db $01
.db $01
.db $01
.db $02
.db $03
.db $FF
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
.db $01
.db $01
.db $01
.db $04
.db $01
.db $03
.db $05
.db $06
.db $FF
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $FF
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $03
.db $01
.db $01
.db $01
.db $01
.db $06
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
.db $01
.db $01
.db $01
.db $04
.db $01
.db $01
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
.db $01
.db $01
.db $01
.db $04
.db $01
.db $01
.db $02
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
.db $01
.db $01
.db $01
.db $04
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
.db $01
.db $01
.db $01
.db $04
.db $01
.db $02
.db $03
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
.db $01
.db $01
.db $01
.db $03
.db $01
.db $02
.db $03
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
.db $01
.db $01
.db $01
.db $03
.db $01
.db $02
.db $03
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
.db $01
.db $01
.db $01
.db $03
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
.db $01
.db $01
.db $01
.db $03
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
.db $01
.db $01
.db $01
.db $03
.db $01
.db $02
.db $03
.db $FF
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
.db $01
.db $01
.db $01
.db $04
.db $01
.db $02
.db $03
.db $FF
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
.db $01
.db $01
.db $01
.db $04
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
.db $01
.db $01
.db $01
.db $03
.db $01
.db $03
.db $05
.db $FF
.db $FF
.db $FF
.db $01
.db $FF
.db $01
.db $FF
.db $FF
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
.db $01
.db $01
.db $01
.db $06
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
.db $02
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $02
.db $01
.db $01
.db $01
.db $01
.db $04
.db $01
.db $02
.db $03
.db $FF
.db $FF
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
.db $01
.db $01
.db $01
.db $FF
L0FECEE:
.db $00
.db $28
.db $00
.db $00
.db $1E
.db $00
.db $00
.db $00
.db $14
.db $00
.db $1E
.db $00
.db $00
.db $00
.db $00
.db $28
.db $00
.db $3C
.db $00
.db $00
.db $00
.db $00

L0FED04:
.dw L0FED32
.dw L0FED39
.dw L0FED40
.dw L0FED47
.dw L0FED4E
.dw L0FED55
.dw L0FED5C
.dw L0FED63
.dw L0FED6A
.dw L0FED71
.dw L0FED78
.dw L0FED7F
.dw L0FED86
.dw L0FED8D
.dw L0FED94
.dw L0FED9B
.dw L0FEDA2
.dw L0FEDA9
.dw L0FEDB0
.dw L0FEDB7
.dw L0FEDBE
.dw L0FEDC5
.dw L0FEDCC

L0FED32:
.db $09 $03 $05 $00 $05 $18 $28

L0FED39:
.db $10 $02 $02 $00 $0C $22 $46

L0FED40:
.db $08 $03 $09 $00 $07 $1A $28

L0FED47:
.db $0C $05 $08 $00 $08 $1C $50

L0FED4E:
.db $0F $01 $05 $00 $0C $28 $50

L0FED55:
.db $0A $01 $03 $00 $05 $1A $23

L0FED5C:
.db $12 $07 $0C $00 $0D $28 $C8

L0FED63:
.db $08 $08 $0A $00 $04 $18 $28

L0FED6A:
.db $0B $0B $0E $00 $07 $1E $50

L0FED71:
.db $0F $10 $12 $00 $0B $24 $B4

L0FED78:
.db $05 $01 $01 $00 $01 $24 $0F

L0FED7F:
.db $09 $01 $02 $00 $03 $18 $28

L0FED86:
.db $0C $06 $06 $00 $06 $1E $50

L0FED8D:
.db $07 $01 $02 $00 $02 $1A $1E

L0FED94:
.db $08 $03 $04 $00 $05 $1C $50

L0FED9B:
.db $0A $0C $08 $00 $04 $16 $64

L0FEDA2:
.db $0A $01 $02 $00 $08 $1E $1E

L0FEDA9:
.db $10 $0A $12 $00 $0A $20 $3C

L0FEDB0:
.db $0C $08 $07 $00 $06 $20 $B4

L0FEDB7:
.db $10 $08 $08 $00 $0A $28 $B4

L0FEDBE:
.db $0B $01 $01 $00 $0B $B6 $00

L0FEDC5:
.db $16 $06 $04 $00 $12 $28 $C8

L0FEDCC:
.db $10 $0E $0E $0A $0A $24 $C8

L0FEDD3:
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
.db $06
L0FEDEA:
.db $02
.db $01
.db $07
.db $05
.db $0C
.db $00
.db $06
.db $01
.db $06

L0FEDF3:
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
L0FEE00:
.db $04
.db $07
.db $08
.db $0E
.db $02
.db $08
.db $04
.db $02
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
.db $0A
.db $04
.db $01
.db $04
.db $07
.db $05
.db $0C
.db $04
.db $06
.db $08
.db $0F
.db $12
.db $09
.db $05
.db $0C
.db $06

L0FEE22:
.dw $74B4
.dw $74D4
.dw $74F4
.dw $7514
.dw $7534
.dw $7554
.dw $7574
.dw $7594
.dw $75B4
.dw $75D4
.dw $75F4
.dw $7614
.dw $7634
.dw $7654
.dw $7674
.dw $7694
.dw $76B4
.dw $76D4
.dw $76F4
.dw $7714
.dw $7734
.dw $7754
.dw $7774
.dw $7794
.dw $77B4
.dw $77D4
.dw $77F4
.dw $7814
.dw $7834
.dw $7854

L0FEE5E: ; tilemap ptr in SRAM?
.dw $6E8F
.dw $6EAF
.dw $6ECF
.dw $6EEF
.dw $6F0F
.dw $6F2F
.dw $6F4F
.dw $6F6F
.dw $6F8F
.dw $6FAF
.dw $6FCF
.dw $6FEF
.dw $700F
.dw $702F
.dw $704F
.dw $706F
.dw $708F
.dw $70AF
.dw $70CF
.dw $70EF
.dw $710F
.dw $712F
.dw $714F
.dw $716F
.dw $718F
.dw $71AF
.dw $71CF
.dw $71EF
.dw $720F
.dw $722F
.dw $724F
.dw $726F
.dw $728F
.dw $72AF
.dw $72CF
.dw $72EF
.dw $730F
.dw $732F
.dw $734F
.dw $736F
.dw $738F
.dw $73AF
.dw $73CF
.dw $73EF
.dw $740F

L0FEEB8:
.dw $7874
.dw $7894
.dw $78B4
.dw $78D4
.dw $78F4
.dw $7914
.dw $7934
.dw $7954
.dw $7974
.dw $7994
.dw $79B4
.dw $79D4
.dw $79F4
.dw $7A14
.dw $7A34
.dw $7A54
.dw $7A74
.dw $7A94
.dw $7AB4
.dw $7AD4
.dw $7AF4
.dw $7B14
.dw $7B34
.dw $7B54
.dw $7B74
.dw $7B94
.dw $7BB4
.dw $7BD4
.dw $7BF4
.dw $7C14

L0FEEF4: ; unsure how long is the list
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
.db $1B
.db $26
.db $18
.db $23
.db $1C
.db $21
.db $1C
.db $1F
.db $19
.db $1F
.db $16
.db $20
.db $19
.db $1C
.db $15
.db $1C
.db $0B
.db $1B
.db $0B
.db $18
.db $0E
.db $1A
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

L0FEF2A:
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
.db $0D
.db $24
.db $07
.db $1F

L0FEF5A:
.db $0B
.db $1C
.db $1B
.db $29
.db $18
.db $26
.db $1E
.db $1F
.db $16
.db $21
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
.db $1B
.db $10
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
.db $1D
.db $04
.db $04
.db $0B
.db $10
.db $0D
.db $10
.db $0A
.db $0C
.db $08
.db $0A
.db $05
.db $17
.db $0A
.db $1C
.db $06
.db $1C
.db $03
.db $13
.db $02

L0FEF8E:
.db $07
L0FEF8F:
.db $02

.db $03
.db $06
.db $08
.db $28

L0FEF94:
.dw L0FF034
.dw L0FF037
.dw L0FF03B
.dw L0FF03E
.dw L0FF042
.dw L0FF045
.dw L0FF049
.dw L0FF04D
.dw L0FF050
.dw L0FF053
.dw L0FF056
.dw L0FF05A
.dw L0FF05E
.dw L0FF061
.dw L0FF064
.dw L0FF067
.dw L0FF06A
.dw L0FF06D
.dw L0FF06F
.dw L0FF073
.dw L0FF078
.dw L0FF07D
.dw L0FF080
.dw L0FF083
.dw L0FF087
.dw L0FF08B
.dw L0FF08E
.dw L0FF091
.dw L0FF095
.dw L0FF099
.dw L0FF09D
.dw L0FF0A0
.dw L0FF0A4
.dw L0FF0A8
.dw L0FF0AB
.dw L0FF0AE
.dw L0FF0B1
.dw L0FF0B5
.dw L0FF0B8
.dw L0FF0BC
.dw L0FF0BF
.dw L0FF0C2
.dw L0FF0C5
.dw L0FF0C8
.dw L0FF0CB
.dw L0FF0CE
.dw L0FF0D1
.dw L0FF0D4
.dw L0FF0D7
.dw L0FF0D9
.dw L0FF0DB
.dw L0FF0DD
.dw L0FF0E0
.dw L0FF0E2
.dw L0FF0E5
.dw L0FF0E7
.dw L0FF0E9
.dw L0FF0ED
.dw L0FF0EF
.dw L0FF0F1
.dw L0FF0F3
.dw L0FF0F5
.dw L0FF0F7
.dw L0FF0F9
.dw L0FF0FB
.dw L0FF0FD
.dw L0FF0FF
.dw L0FF101
.dw L0FF102
.dw L0FF105
.dw L0FF107
.dw L0FF109
.dw L0FF10B
.dw L0FF10D
.dw L0FF10F
.dw L0FF111
.dw L0FF113
.dw L0FF115
.dw L0FF117
.dw L0FF119

L0FF034:
.db $31 $02 $FF

L0FF037:
.db $50 $01 $03 $FF

L0FF03B:
.db $02 $04 $FF

L0FF03E:
.db $32 $05 $03 $FF

L0FF042:
.db $04 $06 $FF

L0FF045:
.db $33 $07 $05 $FF

L0FF049:
.db $34 $39 $06 $FF

L0FF04D:
.db $36 $35 $FF

L0FF050:
.db $36 $0A $FF

L0FF053:
.db $09 $0B $FF

L0FF056:
.db $37 $0C $0A $FF

L0FF05A:
.db $0B $0D $0E $FF

L0FF05E:
.db $0C $38 $FF

L0FF061:
.db $0C $0F $FF

L0FF064:
.db $39 $0E $FF

L0FF067:
.db $34 $11 $FF

L0FF06A:
.db $1B $10 $FF

L0FF06D:
.db $13 $FF

L0FF06F:
.db $39 $14 $12 $FF

L0FF073:
.db $3A $19 $13 $15 $FF

L0FF078:
.db $3C $16 $17 $14 $FF

L0FF07D:
.db $18 $15 $FF

L0FF080:
.db $18 $15 $FF

L0FF083:
.db $3D $17 $16 $FF

L0FF087:
.db $3B $14 $1A $FF

L0FF08B:
.db $3F $19 $FF

L0FF08E:
.db $11 $1C $FF

L0FF091:
.db $40 $1B $1D $FF

L0FF095:
.db $41 $1C $1E $FF

L0FF099:
.db $42 $1F $1D $FF

L0FF09D:
.db $1E $20 $FF

L0FF0A0:
.db $43 $1F $21 $FF

L0FF0A4:
.db $26 $22 $20 $FF

L0FF0A8:
.db $45 $21 $FF

L0FF0AB:
.db $45 $24 $FF

L0FF0AE:
.db $23 $25 $FF

L0FF0B1:
.db $29 $24 $48 $FF

L0FF0B5:
.db $21 $27 $FF

L0FF0B8:
.db $46 $26 $28 $FF

L0FF0BC:
.db $47 $27 $FF

L0FF0BF:
.db $2A $25 $FF

L0FF0C2:
.db $4E $29 $FF

L0FF0C5:
.db $2C $3F $FF

L0FF0C8:
.db $2B $2D $FF

L0FF0CB:
.db $4A $2C $FF

L0FF0CE:
.db $4B $2F $FF

L0FF0D1:
.db $2E $30 $FF

L0FF0D4:
.db $4D $2F $FF

L0FF0D7:
.db $01 $FF

L0FF0D9:
.db $04 $FF

L0FF0DB:
.db $06 $FF

L0FF0DD:
.db $10 $07 $FF

L0FF0E0:
.db $08 $FF

L0FF0E2:
.db $09 $08 $FF

L0FF0E5:
.db $0B $FF

L0FF0E7:
.db $0D $FF

L0FF0E9:
.db $13 $07 $0F $FF

L0FF0ED:
.db $14 $FF

L0FF0EF:
.db $19 $FF

L0FF0F1:
.db $15 $FF

L0FF0F3:
.db $18 $FF

L0FF0F5:
.db $1A $FF

L0FF0F7:
.db $1A $FF

L0FF0F9:
.db $1C $FF

L0FF0FB:
.db $1D $FF

L0FF0FD:
.db $1F $FF

L0FF0FF:
.db $20 $FF

L0FF101:
.db $FF

L0FF102:
.db $23 $22 $FF

L0FF105:
.db $27 $FF

L0FF107:
.db $28 $FF

L0FF109:
.db $25 $FF

L0FF10B:
.db $29 $FF

L0FF10D:
.db $2D $FF

L0FF10F:
.db $2E $FF

L0FF111:
.db $2F $FF

L0FF113:
.db $30 $FF

L0FF115:
.db $2A $FF

L0FF117:
.db $24 $FF

L0FF119:
.db $02 $FF

L0FF11B:
.db $3D
.db $41
.db $3F
.db $43
.db $47
.db $4E
.db $4F
.db $4A
.db $4D

L0FF124:
.db $18
.db $1D
.db $1A
.db $20
.db $28
.db $2A
.db $24
.db $2D
.db $30

L0FF12D:
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

L0FF150:
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

L0FF15E:
.db $00
.db $03
.db $04
.db $05
.db $06
.db $07
.db $08
.db $09
.db $0D
.db $0F
.db $10
.db $11
.db $13

L0FF16B:
.db $00
.db $01
.db $00
.db $02
.db $03
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00

L0FF178:
.dw L0FF17E
.dw L0FF181
.dw L0FF186

; seems to be only loaded from bank 06
; hence the following values are
; relative to L_METATILES_PALETTE_ID
L0FF17E:
.dw L_METATILES_PALETTE_ID + $13
.db $FF

L0FF181:
.dw L_METATILES_PALETTE_ID + $20
.dw L_METATILES_PALETTE_ID + $1F
.db $FF

L0FF186:
.dw L_METATILES_PALETTE_ID + $12
.dw L_METATILES_PALETTE_ID + $11
.dw L_METATILES_PALETTE_ID + $15
.db $FF

.db $0C
.db $01
.db $3B
.db $0C
.db $01
.db $3C
.db $93
.db $02
.db $00
.db $20
.db $01
.db $26
.db $1F
.db $01
.db $27
.db $0B
.db $01
.db $07
.db $13
.db $01
.db $21
.db $12
.db $01
.db $0F
.db $11
.db $01
.db $0D
.db $15
.db $01
.db $0E
.db $91
.db $01
.db $22
.db $9B
.db $02
.db $01
.db $9D
.db $01
.db $1D
.db $9D
.db $03
.db $01
.db $88
.db $01
.db $1C
.db $88
.db $03
.db $02
.db $96
.db $02
.db $02
.db $8F
.db $02
.db $03
.db $9E
.db $01
.db $25
.db $39
.db $01
.db $44
.db $8B
.db $01
.db $44
.db $8B
.db $01
.db $1F
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
.db $00
.db $35
.db $CF
.db $00
.db $36
.db $FF

L0FF20C:
.dw L0FF216
.dw L0FF219
.dw L0FF21C
.dw L0FF21F
.dw L0FF222

L0FF216:
.db $9B $FF $01

L0FF219:
.db $93 $FF $0A

L0FF21C:
.db $BE $FF $0B

L0FF21F:
.db $91 $FF $0C

L0FF222:
.db $86 $FF $12

.db $BE
.db $01
.db $37
.db $BB
.db $05
.db $31
.db $C1
.db $03
.db $0E
.db $B5
.db $02
.db $35
.db $B3
.db $01
.db $08
.db $C2
.db $02
.db $09
.db $C7
.db $05
.db $0A
.db $C0
.db $02
.db $0D
.db $FF

L0FF23E:
.db $02
.db $04
.db $07
.db $0A
.db $0A

L0FF243:
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

L0FF24D:
.db $01
.db $02
.db $03
.db $04
.db $05
.db $06
.db $07
.db $08
.db $09

L0FF256:
.db $D8
.db $FF

L0FF258:
    STA $02
    JMP L0FF262.w

L0FF25D:
    LDA #21
    JSR L0FC379.w
L0FF262:
    LDY #0
    LDA ($00),Y
    CMP #0
    BEQ L0FF27F
    LDY #18
    LDA ($00),Y
    CMP #255
    BEQ L0FF25D
    CMP #240
    BEQ L0FF25D
    LDY #0
    LDA ($00),Y
    CMP $02
    BNE L0FF25D
    CLC
L0FF27F:
    RTS

L0FF280:
    TYA
    PHA
    TXA
    PHA
    JSR L0FF2CB.w
    LDX #20
    BNE L0FF294
L0FF28B:
    TYA
    PHA
    TXA
    PHA
    JSR L0FF2D4.w
    LDX #20
L0FF294:
    JMP L0FF2A1.w

L0FF297:
    DEX
    CPX #0
    BEQ L0FF2C6
    LDA #21
    JSR L0FC379.w
L0FF2A1:
    LDY #0
    LDA ($00),Y
    CMP #0
    BEQ L0FF2C6
    LDY #18
    LDA ($00),Y
    CMP #255
    BEQ L0FF297
    CMP #240
    BEQ L0FF297
    LDY #16
    LDA ($00),Y
    CMP $02
    BNE L0FF297
    LDY #17
    LDA ($00),Y
    CMP $03
    BNE L0FF297
    CLC
L0FF2C6:
    PLA
    TAX
    PLA
    TAY
    RTS

L0FF2CB:
    LDA #174
    STA $00
    LDA #103
    STA $01
    RTS

L0FF2D4:
    LDA #83
    STA $00
    LDA #105
    STA $01
    RTS

 L0FF2DD:
    LDA #21
    CLC
    ADC $7A
    STA $7A
    BCC L0FF2E8
    INC $7B
L0FF2E8:
    LDY #0
    LDA ($7A),Y
    CMP #0
    BEQ L0FF2FF
    LDY #18
    LDA ($7A),Y
    BEQ L0FF2DD
    CMP #255
    BEQ L0FF2DD
    CMP #240
    BEQ L0FF2DD
    CLC
L0FF2FF:
    RTS

L0FF300:
    LDA #21
    CLC
    ADC $78
    STA $78
    BCC L0FF30B
    INC $79
L0FF30B:
    LDY #0
    LDA ($78),Y
    CMP #0
    BEQ L0FF320
    LDY #18
    LDA ($78),Y
    CMP #255
    BEQ L0FF31F
    CMP #240
    BNE L0FF300
L0FF31F:
    CLC
L0FF320:
    RTS

L0FF321:
    LDA #106
    STA $01
    LDA #248
    STA $00
    RTS

L0FF32A:
    STA $08
    LDX #0
    BEQ L0FF33A
L0FF330:
    INX
    CPX #35
    BCS L0FF343
    LDA #12
    JSR L0FC379.w
L0FF33A:
    LDY #0
    LDA ($00),Y
    CMP $08
    BNE L0FF330
    CLC
L0FF343:
    RTS

L0FF344:
    STA $08
    LDA #1
    STA $09
L0FF34A:
    LDY $09
    LDA $6CF6,Y
    BEQ L0FF379
    STA $0A
    LDA $09
    ASL
    TAX
    LDA $6CD2,X
    STA $00
    LDA $6CD3,X
    STA $01
    LDX #0
    BEQ L0FF36F
L0FF365:
    INX
    CPX $0A
    BCS L0FF379
    LDA #12
    JSR L0FC379.w
L0FF36F:
    LDY #0
    LDA ($00),Y
    CMP $08
    BEQ L0FF37F
    BNE L0FF365
L0FF379:
    DEC $09
    BPL L0FF34A
    SEC
    RTS

L0FF37F:
    LDA $09
    STA $74DD
    STX $74DE
    CLC
    RTS

L0FF389:
    STA $08
    LDX #0
    BEQ L0FF399
L0FF38F:
    INX
    CPX #20
    BCS L0FF3A2
    LDA #21
    JSR L0FC379.w
L0FF399:
    LDY #0
    LDA ($00),Y
    CMP $08
    BNE L0FF38F
    CLC
L0FF3A2:
    RTS

L0FF3A3:
    STA $08
    LDX #0
    BEQ L0FF3B3
L0FF3A9:
    INX
    CPX #20
    BCS L0FF3BC
    LDA #21
    JSR L0FC379.w
L0FF3B3:
    LDY #0
    LDA ($00),Y
    CMP $08
    BNE L0FF3A9
    CLC
L0FF3BC:
    RTS

L0FF3BD:
    TAY
    PHA
    TAX
    PHA
    LDY #0
    LDA ($7A),Y
    BMI L0FF3D1
    LDA #153
    STA $6B
    LDA #225
    STA $6C
    BNE L0FF3D9
L0FF3D1:
    LDA #201
    STA $6B
    LDA #225
    STA $6C
L0FF3D9:
    LDA #255
    LDY #9
L0FF3DD:
    STA $05C4,Y
    DEY
    BPL L0FF3DD
    LDA #0
    STA $05C4
    LDY #10
    LDA ($7A),Y
    STA $05CE
    LDY #1
    LDX #0
L0FF3F3:
    LDA L0FF459.w,X
    CMP #239
    BEQ L0FF426
    CMP ($7A),Y
    BEQ L0FF401
    INX
    BPL L0FF3F3
L0FF401:
    TXA
    ASL
    ASL
    ASL
    TAY
    LDX #0
    STX $05C4
L0FF40B:
    ROR $05CE
    BCC L0FF416
    LDA ($6B),Y
    STA $05C5,X
    INX
L0FF416:
    INY
    INC $05C4
    LDA $05C4
    CMP #8
    BCC L0FF40B
    STX $05C4
    BCS L0FF454
L0FF426:
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L0FF435
    LDY #11
    LDA ($7A),Y
    BNE L0FF44B
L0FF435:
    LDY #1
    LDA ($7A),Y
    CMP #12
    BEQ L0FF445
    CMP #13
    BEQ L0FF445
    CMP #20
    BNE L0FF449
L0FF445:
    LDA #1
    BNE L0FF44B
L0FF449:
    LDA #0
L0FF44B:
    LDY $05C4
    STA $05C5,Y
    INC $05C4
L0FF454:
    PLA
    TAX
    PLA
    TAY
    RTS

L0FF459:
ENCODE("じたちつて")
STOP

L0FF460:
    STA $0B
L0FF462:
    TXA
    PHA
    TYA
    PHA
    LDA #0
    STA $05EC
    LDY #1
    LDA ($7A),Y
    CMP #6
    BNE L0FF47D
    LDA $0B
    CMP #4
    BEQ L0FF4E7
    CMP #7
    BEQ L0FF4E7
L0FF47D:
    LDX $0B
    CPX #48
    BCS L0FF502
    LDA L0FDAFD.w,X
    AND #1
    BEQ L0FF498
    CPX #57
    BNE L0FF492
    LDY #4
    BNE L0FF4C0
L0FF492:
    CPX #59
    BEQ L0FF4E7
    BNE L0FF502
L0FF498:
    LDA L0FD9F4.w,X
    BPL L0FF4A7
    AND #127
    LDY #0
    CMP ($7A),Y
    BNE L0FF4E7
    BEQ L0FF4EB
L0FF4A7:
    LDY #14
    CMP ($7A),Y
    BCS L0FF4E7
    LDY #0
L0FF4AF:
    LDA $0B
    CMP L0FF50C.w,Y
    BCC L0FF4C0
    INY
    STY $05EC
    CPY #6
    BCC L0FF4AF
    BCS L0FF502
L0FF4C0:
    CPY #0
    BEQ L0FF4EB
    DEY
    TYA
    ASL
    TAY
    LDA L0FF512.w,Y
    STA $10
    LDA (L0FF512.w + 1),Y
    STA $11
    LDY #1
    LDA ($7A),Y
    STA $0B
    LDY #0
L0FF4DA:
    LDA ($10),Y
    CMP #239
    BEQ L0FF4E7
    CMP $0B
    BEQ L0FF4EB
    INY
    BNE L0FF4DA
L0FF4E7:
    CLV
    SEC
    BCS L0FF507
L0FF4EB:
    LDA $05EC
    CMP #3
    BNE L0FF4FF
    LDY #0
    LDA ($7A),Y
    CMP #1
    BNE L0FF4FF
    LDA $744A
    BEQ L0FF4E7
L0FF4FF:
    CLC
    BCC L0FF507
L0FF502:
    CLC
    LDA #128
    ADC #128
L0FF507:
    PLA
    TAY
    PLA
    TAX
    RTS

L0FF50C:
.db $02
.db $0B
.db $14
.db $17
.db $28
.db $30

L0FF512:
.dw L0FF51C
.dw L0FF525
.dw L0FF52C
.dw L0FF531
.dw L0FF531

L0FF51C:
.db $01
.db $02
.db $03
.db $04
.db $05
.db $06
.db $07
.db $16
.db $EF

L0FF525:
.db $08
.db $09
.db $0A
.db $0B
.db $15
.db $0E
.db $EF

L0FF52C:
.db $0D
.db $0C
.db $14
.db $15
.db $EF

L0FF531:
.db $0F
.db $10
.db $11
.db $12
.db $13
.db $0B
.db $EF

L0FF538:
.db $30
.db $31
.db $32
.db $33
.db $35

L0FF53D:
.db $03
.db $05
.db $07
.db $0D
.db $0D

L0FF542:
    STA $0A
    TXA
    PHA
    TYA
    PHA
    LDX #0
    LDA $0A
L0FF54C:
    CMP L0FF55E.w,X
    BCC L0FF556
    INX
    CPX #4
    BCC L0FF54C
L0FF556:
    STX $05EC
    PLA
    TAY
    PLA
    TAX
    RTS

L0FF55E:
.db $0B
.db $14
.db $30
.db $36

L0FF562:
    LDA $00
    STA $02
    LDA $01
    STA $03
    RTS

L0FF56B:
    RTS

L0FF56C:
    LDA #4
    STA $06D1
    RTS

L0FF572:
    LDA #1
    STA $06D1
    RTS

L0FF578:
    LDA #8
    STA $06D1
    RTS

L0FF57E:
    LDA #16
    STA $06D5
    RTS

L0FF584:
    LDA #2
    STA $06D1
    RTS

L0FF58A:
    LDX $7442
    BNE L0FF5A1
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
    LDA L0FF5A2.w,X
    STA $06D0,Y
L0FF5A1:
    RTS

L0FF5A2:
.db $01 $02 $04 $08 $10 $20 $40 $80

L0FF5AA:
    LDA #0
    STA $74D4
L0FF5AF:
    LDX $74D4
    LDA $6CF6,X
    BEQ L0FF5CD
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
L0FF5CD:
    STA $74D5,X
    INC $74D4
    LDA $74D4
    CMP #2
    BCC L0FF5AF
    RTS

L0FF5DB:
    LDA #0
    STA $74D4
L0FF5E0:
    JSR L0FF321.w
    LDX $74D4
    LDA $74D5,X
    BEQ L0FF5FD
    JSR L0FF32A.w
    LDA $74D4
    ASL
    TAX
    LDA $00
    STA $6CD2,X
    LDA $01
    STA $6CD3,X
L0FF5FD:
    INC $74D4
    LDA $74D4
    CMP #2
    BCC L0FF5E0
    RTS

L0FF608:
    LDA #0
    STA $74DC
    STA $02
    LDA $6CD2
    STA $00
    LDA $6CD3
    STA $01
L0FF619:
    LDX $02
    LDA $6CF6,X
    BEQ L0FF643
    LDA $02
    ASL
    TAX
    LDA $6CD3,X
    CMP $01
    BCC L0FF643
    BNE L0FF634
    LDA $6CD2,X
    CMP $00
    BCC L0FF643
L0FF634:
    LDA $6CD2,X
    STA $00
    LDA $6CD3,X
    STA $01
    LDA $02
    STA $74DC
L0FF643:
    INC $02
    LDA $02
    CMP #2
    BCC L0FF619
    LDX $74DC
    LDA $6CF6,X
    STA $00
    LDA #12
    STA $01
    JSR L0FC6C9.w
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

L0FF671:
    LDX $74DD
    LDA $74DE
    CMP $6CF6,X
    BCC L0FF67F
    JMP L0FF749.w
L0FF67F:
    JSR L0FF5AA.w
L0FF682:
    LDA $74DD
    ASL
    TAX
    LDA $6CD2,X
    STA $04
    LDA $6CD3,X
    STA $05
    LDA $74DE
    STA $00
    LDA #12
    STA $01
    JSR L0FC6C9.w
    LDA $00
    CLC
    ADC $04
    STA $6B
    LDA $01
    ADC $05
    STA $6C
    LDX $74DD
    LDA $6CF6,X
    SEC
    SBC $74DE
    STA $00
    LDA #12
    STA $01
    JSR L0FC6C9.w
    LDA $00
    STA $6E
    LDA $01
    STA $6F
    LDX $74DD
    LDA $6CF6,X
    STA $00
    LDA #12
    STA $01
    JSR L0FC6C9.w
    LDA $00
    CLC
    ADC $04
    STA $7C
    LDA $01
    ADC $05
    STA $7D
    JSR L0FF321.w
    LDA #0
    JSR L0FF32A.w
    LDA $00
    STA $7431
    SEC
    SBC $7C
    STA $04
    LDA $01
    STA $7432
    SBC $7D
    STA $05
    LDA $04
    ORA $05
    BNE L0FF709
    LDA $74DE
    BEQ L0FF71C
    BNE L0FF738
L0FF709:
    LDA $7C
    STA $00
    LDA $7D
    STA $01
    LDA $6B
    STA $02
    LDA $6C
    STA $03
    JSR L0FC209.w
L0FF71C:
    LDA $7431
    SEC
    SBC $6E
    STA $00
    LDA $7432
    SBC $6F
    STA $01
    LDA $6E
    STA $02
    LDA $6F
    STA $03
    LDA #0
    JSR L0FC225.w
L0FF738:
    LDX $74DD
    LDA $74DE
    STA $6CF6,X
    JSR L0FF5DB.w
    JSR L0FF608.w
    CLC
    RTS
L0FF749:
    SEC
    RTS

L0FF74B:
    JSR L0FF5AA.w
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
    JSR L0FC6C9.w
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
    JSR L0FC6C9.w
    LDA $00
    STA $6E
    LDA $01
    STA $6F
    JSR L0FF321.w
    LDA #0
    JSR L0FF32A.w
    LDA $00
    SEC
    SBC $6B
    STA $4E
    LDA $01
    SBC $6C
    STA $4F
    LDA $4F
    ORA $4E
    BEQ L0FF7DF
    LDA #12
    STA $50
    JSR L0FC6EB.w
    LDA $4F
    BNE L0FF7EE
    LDX $4E
    BEQ L0FF7DF
    LDA #12
    JSR L0FFA5F.w
    LDA $00
    CLC
    ADC $6E
    STA $7C
    LDA $01
    ADC $6F
    STA $7D
L0FF7C9:
    LDY #11
L0FF7CB:
    LDA ($00),Y
    STA ($7C),Y
    DEY
    BPL L0FF7CB
    LDA #12
    JSR L0FFA5F.w
    LDA #12
    JSR L0FFA6F.w
    DEX
    BNE L0FF7C9
L0FF7DF:
    LDX $74DD
    LDA $6CF6,X
    CLC
    ADC $74DE
    STA $6CF6,X
    CLC
    RTS

L0FF7EE:
    SEC
    RTS
L0FF7F0:
    JSR L0FF5AA.w
    LDA #0
    STA $74DE
    LDX $74DD
    STA $74D5,X
    STA $6CC0,X
    JSR L0FF682.w
    JMP L0FF9C7.w

L0FF807:
    LDA #174
    STA $02
    LDA #103
    STA $03
    BNE L0FF83E
L0FF811:
    JSR L0FF321.w
    LDA ($02),Y
    JSR L0FF32A.w
    BCS L0FF839
    LDY #11
L0FF81D:
    LDA ($02),Y
    STA ($00),Y
    DEY
    BPL L0FF81D
    LDY #18
    LDA ($02),Y
    CMP #255
    BNE L0FF839
    LDA #255
    LDY #4
    STA ($00),Y
    LDA $7434
    LDY #11
    STA ($00),Y
L0FF839:
    LDA #21
    JSR L0FC384.w
L0FF83E:
    LDY #0
    LDA ($02),Y
    BNE L0FF811
    JSR L0FF848.w
    RTS

L0FF848:
    JSR L0FF608.w
    LDA #0
    STA $05BF
L0FF850:
    LDX $05BF
    LDA $6CF6,X
    BEQ L0FF889
    STA $05BE
    LDA $05BF
    ASL
    TAX
    LDA $6CD2,X
    STA $7A
    LDA $6CD3,X
    STA $7B
L0FF86A:
    LDY #4
    LDA ($7A),Y
    CMP #255
    BNE L0FF87F
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0FF8FF.w
    JMP L0FF884.w

L0FF87F:
    LDA #12
    JSR L0FC9ED.w
L0FF884:
    DEC $05BE
    BNE L0FF86A
L0FF889:
    INC $05BF
    LDA $05BF
    CMP #2
    BCC L0FF850
    RTS

L0FF894:
    JSR L0FF321.w
    LDA $7484
    JSR L0FF32A.w
    BCS L0FF8AA
L0FF89F:
    LDY #11
L0FF8A1:
    LDA $7484,Y
    STA ($00),Y
    DEY
    BPL L0FF8A1
    CLC
L0FF8AA:
    RTS

L0FF8AB:
    JSR L0FF321.w
    LDA $7484
    JSR L0FF32A.w
    BCS L0FF8C1
L0FF8B6:
    LDY #11
L0FF8B8:
    LDA ($00),Y
    STA $7484,Y
    DEY
    BPL L0FF8B8
    CLC
L0FF8C1:
    RTS

L0FF8C2:
    JSR L0FF8AB.w
    LDA $00
    STA $7C
    LDA $01
    STA $7D
    JSR L0FF321.w
    LDA $749F
    JSR L0FF32A.w
    BCS L0FF8FE
    LDA $01
    STA $6C
    LDA $00
    STA $6B
    LDA $7C
    STA $02
    LDA $7D
    STA $03
    LDA #12
    STA $04
    LDA #0
    STA $05
    JSR L0FC209.w
    LDA $6C
    STA $01
    LDA $6B
    STA $00
    JSR L0FF89F.w
L0FF8FE:
    RTS

L0FF8FF:
    LDA $7484
    JSR L0FF344.w
    BCS L0FF935
    JSR L0FF8B6.w
    LDA $00
    STA $7C
    LDA $01
    STA $7D
    JSR L0FF5AA.w
    JSR L0FF936.w
    LDA $6E
    SEC
    SBC #12
    STA $00
    LDA $6F
    SBC #0
    STA $01
    JSR L0FF89F.w
    LDX $74DD
    DEC $6CF6,X
    JSR L0FF5DB.w
    JSR L0FF608.w
    CLC
L0FF935:
    RTS

L0FF936:
    JSR L0FF321.w
    LDA #0
    JSR L0FF32A.w
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
    BEQ L0FF96D
    JSR L0FC209.w
L0FF96D:
    RTS

L0FF96E:
    JSR L0FF321.w
    LDA $7484
    JSR L0FF32A.w
    BCS L0FF9C6
    LDY #4
    LDA ($00),Y
    CMP #255
    BEQ L0FF9C6
    JSR L0FF8B6.w
    LDA $00
    STA $7C
    LDA $01
    STA $7D
    JSR L0FF5AA.w
    JSR L0FF936.w
    LDA $6E
    SEC
    SBC #12
    STA $00
    LDA $6F
    SBC #0
    STA $01
    LDA #12
    STA $02
    LDA #0
    STA $03
    JSR L0FC225.w
    JSR L0FF5DB.w
    LDA #1
    STA $74DE
    JSR L0FF74B.w
    LDA $6B
    STA $00
    LDA $6C
    STA $01
    JSR L0FF89F.w
    JSR L0FF5DB.w
    JSR L0FF608.w
L0FF9C6:
    RTS

L0FF9C7:
    JSR L0FF2CB.w
    LDA #0
    JSR L0FF389.w
    BCS L0FFA0C
    STX $74DE
    LDA #0
    JSR L0FF321.w
    LDA #0
    JSR L0FF32A.w
    BCS L0FFA0C
L0FF9E0:
    LDA #174
    STA $02
    LDA #103
    STA $03
L0FF9E8:
    LDY #11
L0FF9EA:
    LDA ($02),Y
    STA ($00),Y
    DEY
    BPL L0FF9EA
    LDY #18
    LDA ($02),Y
    CMP #255
    BNE L0FF9FD
    LDY #4
    STA ($00),Y
L0FF9FD:
    LDA #12
    JSR L0FC379.w
    LDA #21
    JSR L0FC384.w
    DEC $74DE
    BNE L0FF9E8
L0FFA0C:
    RTS

L0FFA0D:
    JSR L0FF2CB.w
    LDA #0
    JSR L0FF389.w
    BCS L0FFA0C
    STX $74DE
L0FFA1A:
    JSR L0FF74B.w
    LDA $6B
    STA $00
    LDA $6C
    STA $01
    JSR L0FF9E0.w
    JSR L0FF5DB.w
    JSR L0FF608.w
    RTS

L0FFA2F:
    JSR L0FF2CB.w
    LDA #0
    JSR L0FF389.w
    BCS L0FFA0C
    STX $74DE
    JSR L0FF608.w
    JSR L0FF5AA.w
    LDA $74DD
    ASL
    TAX
    LDA $6D08
    STA $6CD2,X
    LDA $6D09
    STA $6CD3,X
    LDX $74DD
    LDA $67AE
    STA $74D5,X
    JMP L0FFA1A.w

L0FFA5F:
    STA $DC
    LDA $00
    SEC
    SBC $DC
    STA $00
    LDA $01
    SBC #0
    STA $01
    RTS

L0FFA6F:
    STA $DC
    LDA $7C
    SEC
    SBC $DC
    STA $7C
    LDA $7D
    SBC #0
    STA $7D
    RTS

L0FFA7F:
    CLC
    ADC $6B
    STA $6B
    BCC L0FFA88
    INC $6C
L0FFA88:
    RTS

L0FFA89:
    STA $10
    TYA
    PHA
    CPX #1
    BEQ L0FFAB9
    LDA $744E
    BEQ L0FFAAB
    CLC
    ADC $744D
    TAY
    LDA $744E
    STA $11
L0FFAA0:
    LDA $744E,Y
    STA $744F,Y
    DEY
    DEC $11
    BNE L0FFAA0
L0FFAAB:
    LDA $10
    LDY $744D
    STA $744F,Y
    INC $744D
    JMP L0FFAC9.w

L0FFAB9:
    LDA $744D
    CLC
    ADC $744E
    TAY
    LDA $10
    STA $744F,Y
    INC $744E
L0FFAC9:
    PLA
    TAY
    RTS

L0FFACC:
    PHA
    TXA
    PHA
    TYA
    PHA
    LDA $2F
    STA $0571
    LDA #10
    JSR L0FCA40.w
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
L0FFAF2:
    INY
    CPY #7
    BEQ L0FFAFF
    LDA ($00),Y
    STA $0571,Y
    JMP L0FFAF2.w

L0FFAFF:
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
    JSR L0FCA40.w
    PLA
    TAY
    PLA
    TAX
    PLA
    RTS

L0FFB2F:
    LDY #0
L0FFB31:
    LDA L0FFB62.w,Y
    CMP #255
    BEQ L0FFB61
    CMP $7434
    BEQ L0FFB43
    INY
    INY
    INY
    JMP L0FFB31.w

L0FFB43:
    INY
    LDA L0FFB62.w,Y
    STA $00
    INY
    LDA L0FFB62.w,Y
    STA $01
    LDA $05B8
    BNE L0FFB59
    LDA $00
    JMP L0FFB5B.w

L0FFB59:
    LDA $01
L0FFB5B:
    STA $0570
    JSR L0FFACC.w
L0FFB61:
    RTS

L0FFB62:
.db $0C $2A $1B $15 $42 $43 $FF

L0FFB69:
    LDY #0
L0FFB6B:
    LDA L0FFBBA.w,Y
    CMP #255
    BEQ L0FFB79
    STA $6E64,Y
    INY
    JMP L0FFB6B.w

L0FFB79:
    LDY #0
L0FFB7B:
    LDA L0FFB8F.w,Y
    CMP #255
    BEQ L0FFB8E
    TAX
    INY
    LDA L0FFB8F.w,Y
    STA $6E32,X
    INY
    JMP L0FFB7B.w

L0FFB8E:
    RTS

L0FFB8F:
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

L0FFBBA:
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

L0FFBC5:
    LDA #0
    STA $3D
    LDA $29
    BEQ L0FFBD0
    JMP L0FFBD3.w

L0FFBD0:
    JMP $8784

L0FFBD3:
    JSR L0FC288.w
    LDA $2B
    JSR L0FC34C.w

.dw L0FFBE3
.dw L0FFBED
.dw L0FFBFA
.dw L0FFC36

L0FFBE3:
    LDX #5
    STX $4A
    DEX
    TXA
    JSR L0FCA94.w
    RTS

L0FFBED:
    LDA #2
    JSR L0FCA40.w
    JSR $BFFA.w
    LDA #6
    JMP L0FCA40.w

L0FFBFA:
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
    LDA L0FFC43.w
    BEQ L0FFC35
    LDA #11
    STA $05AF
    LDA #1
    STA $29
    INC $2B
L0FFC35:
    RTS

L0FFC36:
    LDA #1
    STA $9D
    LDA #5
    STA $4A
    LDA #11
    JMP L0FCA94.w

L0FFC43:
.db $00
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

.dw NMI
.dw RESET
.dw RESET

.ENDS
