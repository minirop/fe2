.BANK 4
.ORG $0000

.SECTION "Bank3" FORCE

L038000:
    JMP L038026.w

L038003:
    JMP L0383A2.w

L038006:
    JMP L03800C.w

L038009:
    JMP L03801A.w

L03800C:
    LDA $053F
    JSR L0FC34C.w

.dw L039226
.dw L038040
.dw L0382DC
.dw L039253

L03801A:
    LDA $053F
    JSR L0FC34C.w

.dw L038040
.dw L03825E
.dw L038047

L038026:
    LDA $053F
    JSR L0FC34C.w

.dw L0390EA
.dw L038036
.dw L038343
.dw L0390F0
.dw L038047

L038036:
    JSR L0380C2.w
    JSR L038051.w
    INC $053F
    RTS

L038040:
    JSR L0380B9.w
    INC $053F
    RTS

L038047:
    LDA #32
    STA $8A
    LDA #0
    STA $053F
    RTS

L038051:
    LDA $743D
    CMP #2
    BCS L038080
    LDA $7477
    BNE L038080
    JSR L038228.w
L038060:
    LDY #0
    LDA ($A3),Y
    BEQ L038080
    LDY #19
    LDA ($A3),Y
    STA $B2
    AND #64
    BNE L038078
    LDA $B2
    AND #204
    ORA #51
    STA ($A3),Y
L038078:
    LDA #21
    JSR L0390C4.w
    JMP L038060.w

L038080:
    RTS

L038081:
    LDX $7440
    INX
    STX $0A
    LDX $7441
    INX
    STX $0B
    LDX #0
L03808F:
    JSR L0381E3.w
    LDY #0
L038094:
    CPY #0
    BEQ L0380AA
    CPY $7441
    BEQ L0380AA
    CPX #0
    BEQ L0380AA
    CPX $7440
    BEQ L0380AA
    LDA #0
    BEQ L0380AC
L0380AA:
    LDA #255
L0380AC:
    STA ($72),Y
    INY
    CPY $0B
    BNE L038094
    INX
    CPX $0A
    BCC L03808F
    RTS

L0380B9:
    JSR L0380F6.w
    JSR L038243.w
    JMP L0380C8.w

L0380C2:
    JSR L0380F6.w
    JSR L03823A.w
L0380C8:
    LDX #0
    STX $B3
L0380CC:
    LDY #0
    LDA ($A5),Y
    BEQ L0380F5
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L0380E8
    LDY #16
    LDA ($A5),Y
    STA $C7
    INY
    LDA ($A5),Y
    STA $C6
    JSR L038118.w
L0380E8:
    LDX $B3
    INX
    STX $B3
    LDA #21
    JSR L0390BA.w
    JMP L0380CC.w

L0380F5:
    RTS

L0380F6:
    LDX $7440
    INX
    STX $0A
    LDX $7441
    INX
    STX $0B
    LDX #0
L038104:
    JSR L0381FA.w
    LDY #0
    LDA #0
L03810B:
    STA ($A1),Y
    INY
    CPY $0B
    BNE L03810B
    INX
    CPX $0A
    BCC L038104
    RTS

L038118:
    LDX #5
    STX $05C1
L03811D:
    STX $A9
    LDA $05C1
    SEC
    SBC $A9
    TAY
L038126:
    JSR L038130.w
    DEY
    BPL L038126
    DEX
    BPL L03811D
    RTS

L038130:
    STY $054B
    STX $054A
    TXA
    BEQ L038142
    JSR L03817A.w
    JSR L038195.w
    JSR L0381B0.w
L038142:
    LDX $054A
    LDY $054B
    JSR L03817A.w
    JSR L0381A3.w
    JSR L0381B0.w
    LDX $054A
    LDY $054B
    BEQ L038179
    JSR L038188.w
    JSR L0381A3.w
    JSR L0381B0.w
    LDY $054B
    LDX $054A
    BEQ L038179
    JSR L038188.w
    JSR L038195.w
    JSR L0381B0.w
    LDX $054A
    LDY $054B
L038179:
    RTS

L03817A:
    TYA
    CLC
    ADC $C6
    CMP $7441
    BCC L038186
    LDA $7441
L038186:
    TAY
    RTS

L038188:
    STY $A9
    LDA $C6
    SEC
    SBC $A9
    BCS L038193
    LDA #0
L038193:
    TAY
    RTS

L038195:
    TXA
    CLC
    ADC $C7
    CMP $7440
    BCC L0381A1
    LDA $7440
L0381A1:
    TAX
    RTS

L0381A3:
    STX $A9
    LDA $C7
    SEC
    SBC $A9
    BCS L0381AE
    LDA #0
L0381AE:
    TAX
    RTS

L0381B0:
    LDA $054B
    CLC
    ADC $054A
    CMP #4
    BCC L0381C0
    LDA #128
    JMP L0381D4.w

L0381C0:
    CMP #3
    BCC L0381C9
    LDA #192
    JMP L0381D4.w

L0381C9:
    CMP #2
    BCC L0381D2
    LDA #224
    JMP L0381D4.w

L0381D2:
    LDA #240
L0381D4:
    STA $0549
    JSR L0381FA.w
    LDA ($A1),Y
    ORA $0549
    STA ($A1),Y
    RTS

L0381E2:
    RTS

L0381E3:
    TXA
    PHA
    CMP #30
    BMI L0381EB
    LDA #0
L0381EB:
    ASL
    TAX
    LDA L0FEE22.w,X
    STA $72
    LDA L0FEE23.w,X
    STA $73
    PLA
    TAX
    RTS

L0381FA:
    TXA
    PHA
    CMP #30
    BMI L038202
    LDA #0
L038202:
    ASL
    TAX
    LDA L0FEEB8.w,X
    STA $A1
    LDA (L0FEEB8.w + 1),X
    STA $A2
    PLA
    TAX
    RTS

L038211:
    TXA
    PHA
    CMP #30
    BMI L038219
    LDA #0
L038219:
    ASL
    TAX
    LDA L0FEE5E.w,X
    STA $04
    LDA (L0FEE5E.w + 1),X
    STA $05
    PLA
    TAX
    RTS

L038228:
    LDA #83
    STA $A3
    LDA #105
    STA $A4
    RTS

L038231:
    LDA #174
    STA $A3
    LDA #103
    STA $A4
    RTS

L03823A:
    LDA #174
    STA $A5
    LDA #103
    STA $A6
    RTS

L038243:
    LDA #83
    STA $A5
    LDA #105
    STA $A6
    RTS

L03824C:
    LDA #83
    STA $02
    LDA #105
    STA $03
    RTS

L038255:
    LDA #174
    STA $02
    LDA #103
    STA $03
    RTS

L03825E:
    JSR L038231.w
    LDX #0
    STX $B3
L038265:
    LDY #0
    LDA ($A3),Y
    BNE L03826E
    JMP L0382D4.w

L03826E:
    LDY #19
    LDA ($A3),Y
    AND #4
    BNE L0382C7
    LDY #18
    LDA ($A3),Y
    BEQ L03827F
    JMP L0382C7.w

L03827F:
    LDY #16
    LDA ($A3),Y
    STA $0539
    INY
    LDA ($A3),Y
    STA $0538
    LDA $7448
    CMP #255
    BNE L038299
    LDA $B3
    BNE L0382AE
    BEQ L0382C7
L038299:
    LDA #0
    STA $B2
    LDY #19
    LDA ($A3),Y
    AND #252
    STA ($A3),Y
    STX $0583
    JSR L03868E.w
    JMP L0382B8.w

L0382AE:
    LDA #2
    STA $B2
    STX $0583
    JSR L038A8A.w
L0382B8:
    LDA #1
    STA $054D
    JSR L0383C5.w
    BCS L0382C7
    LDA #41
    STA $8A
    RTS

L0382C7:
    LDX $B3
    INX
    STX $B3
    LDA #21
    JSR L0390C4.w
    JMP L038265.w

L0382D4:
    INC $053F
    LDA #56
    STA $8A
    RTS

L0382DC:
    JSR L038231.w
    LDX #0
    STX $B3
L0382E3:
    LDY #0
    LDA ($A3),Y
    BNE L0382EC
    JMP L038336.w

L0382EC:
    LDY #19
    LDA ($A3),Y
    AND #4
    BEQ L038329
    LDY #18
    LDA ($A3),Y
    CMP #255
    BEQ L038329
    LDY #16
    LDA ($A3),Y
    STA $0539
    INY
    LDA ($A3),Y
    STA $0538
    LDY #19
    LDA ($A3),Y
    STA ($A3),Y
    STA $B2
    STX $0583
    JSR L038589.w
    JSR L03861A.w
    LDA #2
    STA $054D
    JSR L0383C5.w
    BCS L038329
    LDA #41
    STA $8A
    RTS

L038329:
    LDX $B3
    INX
    STX $B3
    LDA #21
    JSR L0390C4.w
    JMP L0382E3.w

L038336:
    INC $053F
    LDA #1
    STA $059C
    LDA #33
    STA $8A
    RTS

L038343:
    JSR L038228.w
    LDX #0
    STX $B3
L03834A:
    LDY #0
    LDA ($A3),Y
    BNE L038353
    JMP L0383BD.w

L038353:
    LDY #18
    LDA ($A3),Y
    CMP #255
    BEQ L038369
    LDY #19
    LDA ($A3),Y
    AND #8
    BEQ L03836C
    LDA ($A3),Y
    AND #247
    STA ($A3),Y
L038369:
    JMP L0383B0.w

L03836C:
    JSR L03841D.w
    LDX $B3
    LDY #16
    LDA ($A3),Y
    STA $0539
    INY
    LDA ($A3),Y
    STA $0538
    LDY #19
    LDA ($A3),Y
    STA $B2
    STX $0583
    JSR L038589.w
    JSR L03861A.w
    JSR L038DC4.w
    JSR L039358.w
    LDA #0
    STA $054D
    JSR L0383C5.w
    BCS L0383B0
    LDA #41
    STA $8A
    RTS

L0383A2:
    LDY $054D
    BEQ L0383B0
    DEY
    BNE L0383AD
    JMP L0382C7.w

L0383AD:
    JMP L038329.w

L0383B0:
    LDX $B3
    INX
    STX $B3
    LDA #21
    JSR L0390C4.w
    JMP L03834A.w

L0383BD:
    INC $053F
    LDA #40
    STA $8A
    RTS

L0383C5:
    LDY $0538
    LDX $0539
    LDA $0550
    BEQ L0383E3
    STY $0581
    STX $0580
    LDA #255
    STA $0582
    LDA #0
    STA $0550
    JMP L03841B.w

L0383E3:
    CPX $0580
    BNE L0383F6
    CPY $0581
    BNE L0383F6
    LDA $0582
    CMP #255
    BNE L03841B
L0383F4:
    SEC
    RTS

L0383F6:
    LDX $0580
    STX $B9
    LDY $0581
    STY $B8
    JSR L038211.w
    LDA ($04),Y
    TAY
    LDA L0FE9DE.w,Y
    CMP #14
    BEQ L0383F4
    CMP #31
    BEQ L0383F4
    JSR L039042.w
    BCC L0383F4
    JSR L03903C.w
    BCC L0383F4
L03841B:
    CLC
    RTS

L03841D:
    LDY #1
    LDA ($A3),Y
    CMP #16
    BNE L038470
    LDY #0
    LDA ($A3),Y
    CMP #142
    BEQ L038431
    CMP #170
    BNE L038450
L038431:
    JSR L0FC04E.w
    CMP #160
    BCC L038470
    LDA #9
    STA $0549
    LDY #16
    LDA ($A3),Y
    STA $0539
    LDY #17
    LDA ($A3),Y
    STA $0538
    JSR L0393CB.w
    SEC
    RTS

L038450:
    LDY #19
    LDA ($A3),Y
    AND #3
    BNE L038470
    LDY #3
    LDA ($A3),Y
    STA $0549
    LDY #14
    LDA ($A3),Y
    ASL
    CMP $0549
    BCC L038470
    JSR L0FC04E.w
    CMP #64
    BCC L038472
L038470:
    CLC
    RTS

L038472:
    LDA #16
    STA $0533
L038477:
    DEC $0533
    BEQ L038470
    JSR L0FC70D.w
    JSR L0FC04E.w
    STA $0549
    AND #60
    LSR
    LSR
    CMP #10
    BCC L03848F
    LDA #0
L03848F:
    TAX
    JSR L03823A.w
L038493:
    DEX
    BMI L0384A4
    LDA #21
    JSR L0390BA.w
    LDY #0
    LDA ($A5),Y
    BEQ L0384A4
    JMP L038493.w

L0384A4:
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L038477
    LDY #16
    LDA ($A5),Y
    STA $0539
    LDY #17
    LDA ($A5),Y
    STA $0538
    LDA $0549
    AND #7
    SBC #3
    ADC $0539
    BMI L038477
    BEQ L038477
    CMP $7440
    BCS L038477
    STA $0539
    LDA $0549
    JSR L0FC39A.w
    AND #7
    SBC #3
    ADC $0538
    BMI L038477
    BEQ L038477
    CMP $7441
    BCS L038477
    STA $0538
    LDX $0539
    JSR L038211.w
    LDY $0538
    LDA ($04),Y
    STA $7493
    TAY
    LDA L0FE8DE.w,Y
    CMP #14
    BEQ L03851C
    CMP #31
    BEQ L03851C
    PHA
    LDY #16
    DEY
    TYA
    ASL
    TAY
    LDA L0FEADE.w,Y
    STA $00
    LDA L0FEADF.w,Y
    STA $01
    PLA
    TAY
    LDA ($00),Y
    CMP #255
    BNE L03851F
L03851C:
    JMP L038477.w

L03851F:
    LDA #2
    STA $05E5
    LDA $A3
    STA $00
    LDA $A4
    STA $01
    LDA #10
    STA $4A
    LDA #6
    JSR L0FCA94.w
    LDY #16
    LDA $0539
    STA ($A3),Y
    STA $0501
    STA $0511
    LDY #17
    LDA $0538
    STA ($A3),Y
    STA $0500
    STA $0510
    LDY #15
    LDA $7493
    STA ($A3),Y
    LDA #132
    STA $00
    LDA #116
    STA $01
    LDY #0
L038560:
    LDA ($A3),Y
    STA ($00),Y
    INY
    CPY #21
    BNE L038560
    LDA #1
    STA $05E5
    LDA #11
    STA $4A
    LDA #6
    JSR L0FCA94.w
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    LDA #12
    STA $4A
    LDA #6
    JSR L0FCA94.w
    RTS

L038589:
    LDA $B2
    AND #3
    STA $B1
    JSR L0FC34C.w

.dw L03859A
.dw L0385DB
.dw L038607
.dw L03859A

L03859A:
    LDA $B2
    AND #128
    BEQ L0385DA
    LDY #3
    LDA ($A3),Y
    STA $B6
    LDY #14
    LDA ($A3),Y
    ASL
    STA $0549
    LDY #19
    LDA ($A3),Y
    AND #64
    BEQ L0385C5
    LDY #9
    LDA ($A3),Y
    CMP #6
    BCC L0385C5
    LDA $0549
    ASL
    STA $0549
L0385C5:
    LDA $0549
    CMP $B6
    BCS L0385DA
    LDA #1
    STA $B1
L0385D0:
    LDA $B2
    AND #252
    ORA $B1
    LDY #19
    STA ($A3),Y
L0385DA:
    RTS

L0385DB:
    LDY #3
    LDA ($A3),Y
    STA $B6
    LDY #14
    LDA ($A3),Y
    CMP $B6
    BEQ L0385FA
    STA $0549
    LDA $36
    AND #1
    BEQ L038606
    LDA $0549
    ASL
    CMP $B6
    BCC L038606
L0385FA:
    LDA $B2
    AND #48
    JSR L0FC39A.w
    STA $B1
    JMP L0385D0.w

L038606:
    RTS

L038607:
    JSR L03824C.w
    LDY #18
    LDA ($02),Y
    CMP #255
    BNE L038619
    LDA #0
    STA $B1
    JMP L0385D0.w
L038619:
    RTS

L03861A:
    LDY #19
    LDA ($A3),Y
    STA $B2
    JSR L038624.w
    RTS

L038624:
    AND #3
    CMP #1
    BEQ L03868B
    LDY #1
    LDA ($A3),Y
    STA $054A
    CMP #21
    BNE L038641
    LDY #14
    LDA ($A3),Y
    SEC
    CMP #52
    BCS L038641
    JMP L03868B.w

L038641:
    LDA $054A
    CMP #19
    BEQ L03868B
    CMP #16
    BEQ L038650
    CMP #15
    BNE L0386B0
L038650:
    LDY #14
    LDA ($A3),Y
    STA $0549
    LDY #10
    LDA ($A3),Y
    LDY #0
L03865D:
    LSR
    BCS L038665
    INY
    CPY #4
    BNE L03865D
L038665:
    LDX $747C
    BEQ L038676
    LDX $054A
    CPX #16
    BNE L03867B
    LDA L0FE1D9.w,Y
    BNE L03867E
L038676:
    LDA L0FE1A1.w,Y
    BNE L03867E
L03867B:
    LDA L0FE1D1.w,Y
L03867E:
    LDY #20
    STA ($A3),Y
    TAY
    LDA L0FD9F4.w,Y
    CMP $0549
    BCC L0386B0
L03868B:
    JMP L038A8A.w

L03868E:
    LDY #1
    LDA ($A3),Y
    CMP #18
    BEQ L03868B
    TAY
    DEY
    LDA L038756.w,Y
    CMP #2
    BNE L0386B0
    LDY #3
    LDA ($A3),Y
    STA $0549
    LDY #14
    LDA ($A3),Y
    ASL
    CMP $0549
    BCC L03868B
L0386B0:
    LDA #0
    STA $C2
    LDY #9
    LDA ($A3),Y
    STA $B7
    LDY #5
    LDA ($A3),Y
    STA $BB
    LDY #1
    LDA ($A3),Y
    TAY
    DEY
    STY $0549
    LDA L038756.w,Y
    STA $B5
    LDY #11
    LDA ($A3),Y
    TAY
    CPY #7
    BEQ L0386DB
    CPY #4
    BNE L0386EA
L0386DB:
    LDX $0549
    LDA L038770.w,X
    CMP #0
    BNE L038715
    LDA #2
    JMP L038713.w

L0386EA:
    CPY #57
    BNE L0386FB
    LDX $0549
    LDA L038770.w,X
    CMP #3
    BEQ L038711
    JMP L038715.w
L0386FB:
    CPY #20
    BEQ L038707
    CPY #21
    BEQ L038707
    CPY #22
    BNE L038715
L038707:
    LDX $0549
    LDA L038770.w,X
    CMP #2
    BNE L038715
L038711:
    LDA #8
L038713:
    STA $B5
L038715:
    LDA L0FD9B9.w,Y
    CLC
    ADC $BB
    CMP #60
    BCC L038721
    LDA #60
L038721:
    STA $AE
    LDA $0538
    STA $0500
    LDA $0539
    STA $0501
    LDY #13
    LDA ($A3),Y
    STA $C5
    LDY #11
    LDA ($A3),Y
    CMP #56
    BNE L038744
    LDA #5
    CLC
    ADC $C5
    STA $C5
L038744:
    LDA #2
    STA $BE
    JSR L038081.w
    JSR L038EC9.w
    LDA $C2
    BNE L038755
    JMP L038A8A.w

L038755:
    RTS

L038756:
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
.db $04
.db $04
.db $01
.db $02
.db $02
.db $01
.db $01
.db $02
.db $08
.db $01
.db $01

L03876C:
.db $01
.db $02
.db $03
.db $05

L038770:
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $01
.db $01
.db $01
.db $01
.db $02
.db $02
.db $01
.db $03
.db $03
.db $00
.db $00
.db $03
.db $02
.db $01
.db $00

L038786:
    TXA
    PHA
    TYA
    PHA
    LDA $C4
    BEQ L0387AA
    LDX $C7
    JSR L038211.w
    LDY $C6
    LDA ($04),Y
    TAY
    LDA $747C
    BNE L0387A3
    LDA L0FE8DE.w,Y
    JMP L0387A6.w

L0387A3:
    LDA L0FE9DE.w,Y
L0387A6:
    CMP #31
    BEQ L0387CD
L0387AA:
    LDX $C7
    JSR L0381FA.w
    LDY $C6
    LDA ($A1),Y
    AND #240
    JSR L0FC39A.w
    AND $B5
    STA $AC
    BEQ L0387CD
    LDX $7440
    INX
    STX $0A
    LDX $7441
    INX
    STX $0B
    JSR L0387D2.w
L0387CD:
    PLA
    TAY
    PLA
    TAX
    RTS

L0387D2:
    LDX $B5
    CPX #8
    BNE L0387DC
    LDX #5
    BNE L0387E1
L0387DC:
    CPX #4
    BNE L0387E1
    DEX
L0387E1:
    STX $05C1
L0387E4:
    STX $0549
    LDA $05C1
    SEC
    SBC $0549
    TAY
L0387EF:
    JSR L0387F9.w
    DEY
    BPL L0387EF
    DEX
    BPL L0387E4
    RTS

L0387F9:
    STY $054B
    STX $054A
    TXA
    BEQ L03880B
    JSR L03817A.w
    JSR L038195.w
    JSR L038843.w
L03880B:
    LDX $054A
    LDY $054B
    JSR L03817A.w
    JSR L0381A3.w
    JSR L038843.w
    LDX $054A
    LDY $054B
    BEQ L038842
    JSR L038188.w
    JSR L0381A3.w
    JSR L038843.w
    LDY $054B
    LDX $054A
    BEQ L038842
    JSR L038188.w
    JSR L038195.w
    JSR L038843.w
    LDX $054A
    LDY $054B
L038842:
    RTS

L038843:
    TXA
    PHA
    TYA
    PHA
    STX $B9
    STY $B8
    TXA
    ASL
    TAX
    LDA L0FEE5E.w,X
    STA $04
    LDA (L0FEE5E.w + 1),X
    STA $05
    LDA ($04),Y
    TAY
    LDA $747C
    BEQ L03886D
    LDA L0FE9DE.w,Y
    CMP #14
    BNE L038879
    JSR L03903C.w
    JMP L038877.w

L03886D:
    LDA L0FE8DE.w,Y
    CMP #14
    BNE L038879
    JSR L039036.w
L038877:
    BCC L03887C
L038879:
    JMP L038A85.w

L03887C:
    LDY #1
    LDA ($A5),Y
    STA $A9
    LDY #11
    LDA ($A3),Y
    CMP #48
    BCS L0388C4
    TAY
    STY $AA
    LDA L0FDAB4.w,Y
    BEQ L0388C4
    ASL
    TAY
    LDA L0FDAE4.w,Y
    STA $00
    LDA (L0FDAE4.w + 1),Y
    STA $01
    LDY #0
L0388A0:
    LDA ($00),Y
    CMP #255
    BEQ L0388C4
    CMP $A9
    BEQ L0388AE
    INY
    JMP L0388A0.w

L0388AE:
    LDY $AA
    LDA L0FD9B9.w,Y
    STA $A9
    ASL
    CLC
    ADC $A9
    STA $A9
    LDY #5
    LDA ($A3),Y
    CLC
    ADC $A9
    STA $AE
L0388C4:
    LDY #1
    LDA ($A3),Y
    CMP #15
    BEQ L0388DC
    CMP #16
    BEQ L0388DC
    CMP #19
    BEQ L0388DC
    LDY #11
    LDA ($A3),Y
    CMP #15
    BNE L0388E5
L0388DC:
    LDY #12
    LDA ($A5),Y
    STA $A9
    JMP L03890A.w

L0388E5:
    LDY #9
    LDA ($A5),Y
    STA $A9
    LDY #11
    LDA ($A5),Y
    CMP #48
    BNE L0388F7
    LDA #3
    BNE L038905
L0388F7:
    CMP #49
    BNE L0388FF
    LDA #5
    BNE L038905
L0388FF:
    CMP #50
    BNE L03890A
    LDA #7
L038905:
    CLC
    ADC $A9
    STA $A9
L03890A:
    LDA $AE
    SEC
    SBC $A9
    STA $C1
    BCS L038917
    LDA #1
    STA $C1
L038917:
    LDA $B4
    BNE L03891F
    LDA #5
    BNE L038947
L03891F:
    LDY #1
    LDA ($A3),Y
    CMP #15
    BEQ L038945
    CMP #16
    BEQ L038945
    LDA ($A5),Y
    CMP #11
    BNE L038935
    LDA #20
    BNE L038947
L038935:
    CMP #18
    BNE L03893D
    LDA #20
    BNE L038947
L03893D:
    CMP #17
    BNE L038945
    LDA #10
    BNE L038947
L038945:
    LDA #0
L038947:
    STA $C3
    LDY #1
    LDA ($A3),Y
    CMP #3
    BEQ L038976
    CMP #5
    BEQ L038976
    LDA $C4
    BNE L038960
    LDY #15
    LDA ($A3),Y
    JMP L038969.w

L038960:
    LDX $C7
    JSR L038211.w
    LDY $C6
    LDA ($04),Y
L038969:
    TAY
    LDA L0FE9DE.w,Y
    TAY
    LDA L0FECEE.w,Y
    CLC
    ADC $C3
    STA $C3
L038976:
    LDY #14
    LDA ($A5),Y
    STA $A9
    LDA #10
    SEC
    SBC $A9
    BCC L03898B
    ADC #6
    ASL
    CLC
    ADC $C3
    STA $C3
L03898B:
    LDY #1
    LDA ($A5),Y
    TAY
    DEY
    STY $AA
    LDA L038756.w,Y
    LDY #0
L038998:
    LSR
    BCS L0389A0
    INY
    CPY #4
    BNE L038998
L0389A0:
    LDA L03876C.w,Y
    STA $A9
    LDY #11
    LDA ($A5),Y
    TAY
    CPY #7
    BEQ L0389B2
    CPY #4
    BNE L0389C2
L0389B2:
    LDX $AA
    LDA L038770.w,X
    CMP #0
    BNE L0389EB
    LDA #2
    STA $A9
    JMP L0389EB.w

L0389C2:
    CPY #57
    BNE L0389D2
    LDX $AA
    LDA L038770.w,X
    CMP #3
    BEQ L0389E7
    JMP L0389EB.w
L0389D2:
    CPY #20
    BEQ L0389DE
    CPY #21
    BEQ L0389DE
    CPY #22
    BNE L0389EB
L0389DE:
    LDX $AA
    LDA L038770.w,X
    CMP #2
    BNE L0389EB
L0389E7:
    LDA #5
    STA $A9
L0389EB:
    LDA $054A
    CLC
    ADC $054B
    STA $AA
    LDA $A9
    CMP $AA
    BCS L038A03
    LDA #40
    ADC $C3
    STA $C3
    JMP L038A5C.w

L038A03:
    LDY #5
    LDA ($A5),Y
    STA $BB
    LDY #1
    LDA ($A5),Y
    CMP #15
    BEQ L038A21
    CMP #19
    BEQ L038A21
    CMP #16
    BEQ L038A21
    LDY #11
    LDA ($A5),Y
    CMP #15
    BNE L038A2A
L038A21:
    LDY #12
    LDA ($A3),Y
    STA $A9
    JMP L038A4F.w

L038A2A:
    LDY #9
    LDA ($A3),Y
    STA $A9
    LDY #11
    LDA ($A3),Y
    CMP #48
    BNE L038A3C
    LDA #3
    BNE L038A4A
L038A3C:
    CMP #49
    BNE L038A44
    LDA #5
    BNE L038A4A
L038A44:
    CMP #50
    BNE L038A4F
    LDA #7
L038A4A:
    CLC
    ADC $A9
    STA $A9
L038A4F:
    LDA $BB
    SEC
    SBC $A9
    STA $C0
    BCS L038A5C
    LDA #0
    STA $C0
L038A5C:
    LDA $C1
    ASL
    SEC
    SBC $C0
    CLC
    ADC #60
    CLC
    ADC $C3
    BCC L038A6E
    LDA #255
    BNE L038A74
L038A6E:
    CMP $C2
    BCC L038A85
    BEQ L038A85
L038A74:
    STA $C2
    LDA $C7
    STA $0580
    LDA $C6
    STA $0581
    LDA $B4
    STA $0582
L038A85:
    PLA
    TAY
    PLA
    TAX
    RTS

L038A8A:
    LDA $B2
    AND #3
    BNE L038AA3
    LDA $747C
    BEQ L038AA3
    LDY #1
    LDA ($A3),Y
    CMP #19
    BNE L038AA1
    LDA #3
    BNE L038AA3
L038AA1:
    LDA #0
L038AA3:
    STA $B1
    LDA $0538
    STA $0500
    LDA $0539
    STA $0501
    LDA #60
    STA $C5
    LDA #0
    STA $BE
    LDA $053A
    BEQ L038AC9
    JSR L038D70.w
    LDA #0
    STA $053A
    JMP L038ACC.w

L038AC9:
    JSR L038081.w
L038ACC:
    JSR L038EC9.w
    LDA $C4
    BEQ L038AF2
    LDA $BE
    BNE L038B05
    LDA $B1
    CMP #1
    BNE L038AF2
    LDY #19
    LDA ($A3),Y
    PHA
    AND #124
    STA $0549
    PLA
    AND #48
    JSR L0FC39A.w
    ORA $0549
    STA ($A3),Y
L038AF2:
    LDA $0538
    STA $0581
    LDA $0539
    STA $0580
    LDA #255
    STA $0582
    BNE L038B13
L038B05:
    JSR L038C26.w
    JSR L038C8C.w
    LDA $053A
    BEQ L038B13
    JMP L038A8A.w

L038B13:
    RTS

L038B14:
    TXA
    PHA
    TYA
    PHA
    STX $0A
    STY $0B
    LDA #0
    STA $BD
    JSR L038B4E.w
    INC $BD
    LDX $0A
    LDY $0B
    INX
    JSR L038B4E.w
    INC $BD
    LDX $0A
    LDY $0B
    DEX
    JSR L038B4E.w
    INC $BD
    LDX $0A
    LDY $0B
    DEY
    JSR L038B4E.w
    INC $BD
    LDX $0A
    LDY $0B
    INY
    JSR L038B4E.w
    JMP L038BB3.w

L038B4E:
    STY $B8
    STX $B9
    JSR L038211.w
    LDA ($04),Y
    TAY
    LDA $747C
    BNE L038B63
    LDA L0FE8DE.w,Y
    JMP L038B66.w

L038B63:
    LDA L0FE9DE.w,Y
L038B66:
    LDX $BD
    STA $052E,X
    CMP #14
    BNE L038B77
    LDA #64
    STA $0533,X
    JMP L038BB2.w

L038B77:
    CMP #31
    BEQ L038B83
    LDA #0
    STA $0533,X
    JMP L038BB2.w

L038B83:
    LDA $747C
    BNE L038B8E
    JSR L039048.w
    JMP L038B91.w

L038B8E:
    JSR L039042.w
L038B91:
    LDA $BD
    BNE L038BA0
    LDY #15
    LDA ($02),Y
    TAY
    LDA L0FE8DE.w,Y
    STA $052E
L038BA0:
    LDY #1
    LDA ($02),Y
    ORA #128
    STA $0533,X
    LDY $B4
    BNE L038BB2
    ORA #32
    STA $0533,X
L038BB2:
    RTS

L038BB3:
    LDA $B1
    JSR L0FC34C.w

.dw L038BF7
.dw L038BC0
.dw L038BDF
.dw L038C0A

L038BC0:
    LDA $052E
    CMP #15
    BEQ L038C1D
    LDA $C4
    BEQ L038BDC
    LDA $0533
    ASL
    BCC L038BDC
    LSR
    AND #31
    CMP #15
    BEQ L038C1D
    CMP #19
    BEQ L038C1D
L038BDC:
    JMP L038C21.w

L038BDF:
    LDA $0533
    ORA $0534
    ORA $0535
    ORA $0536
    ORA $0537
    AND #160
    CMP #160
    BEQ L038C1D
    JMP L038C21.w

L038BF7:
    LDA $0534
    ORA $0535
    ORA $0536
    ORA $0537
    AND #64
    BEQ L038C21
    JMP L038C1D.w

L038C0A:
    LDA $052E
    CMP #8
    BEQ L038C1D
    CMP #15
    BEQ L038C1D
    CMP #20
    BEQ L038C1D
    CMP #1
    BNE L038C21
L038C1D:
    LDA #255
    STA $BE
L038C21:
    PLA
    TAY
    PLA
    TAX
    RTS

L038C26:
    LDX $C7
    STX $A8
    JSR L0381E3.w
    LDY $C6
    STY $A7
    LDA ($72),Y
    STA $A9
L038C35:
    LDA $A9
    ROL
    ROL
    ROL
    AND #3
    STA $09
    ASL
    TAX
    LDA L038C7C.w,X
    CLC
    ADC $C6
    STA $C6
    LDA (L038C7C.w + 1),X
    CLC
    ADC $C7
    STA $C7
    TAX
    JSR L0381E3.w
    LDY $C6
    LDA ($72),Y
    CMP #61
    BEQ L038C74
    PHA
    AND #192
    STA $A9
    LDA $09
    ROR
    ROR
    ROR
    AND #192
    STA $AA
    PLA
    AND #63
    ORA $AA
    STA ($72),Y
    JMP L038C35.w

L038C74:
    LDA $09
    ROR
    ROR
    ROR
    STA ($72),Y
    RTS

L038C7C:
.db $00 $01
.db $FF $00
.db $00 $FF
.db $01 $00

L038C84:
.db $00 $FF
.db $01 $00
.db $00 $01
.db $FF $00

L038C8C:
    LDA $0538
    STA $C6
    LDA $0539
    STA $C7
    LDY #13
    LDA ($A3),Y
    STA $A9
    LDY #11
    LDA ($A3),Y
    CMP #56
    BNE L038CAB
    LDA #5
    CLC
    ADC $A9
    STA $A9
L038CAB:
    LDA #0
    STA $CA
L038CAF:
    LDX $C7
    STX $CC
    JSR L0381E3.w
    LDY $C6
    STY $CD
    LDA ($72),Y
    ROL
    ROL
    ROL
    AND #3
    STA $09
    LDY $CA
    STA $0520,Y
    ASL
    TAX
    LDA L038C84.w,X
    CLC
    ADC $C6
    STA $C6
    LDA (L038C84.w + 1),X
    CLC
    ADC $C7
    STA $C7
    TAX
    JSR L0381E3.w
    LDY $C6
    LDA ($72),Y
    AND #63
    BEQ L038CFC
    STA $AA
    SEC
    LDA $A9
    SBC $AA
    BCC L038CFC
    CPY $A7
    BNE L038CF7
    CPX $A8
    BEQ L038D06
L038CF7:
    INC $CA
    JMP L038CAF.w

L038CFC:
    DEC $CA
    LDA $CD
    STA $C6
    LDA $CC
    STA $C7
L038D06:
    LDX $C7
    JSR L038211.w
    LDY $C6
    LDA ($04),Y
    STA $054B
    LDY #0
    LDA ($A3),Y
    ROL
    BCS L038D22
    LDY $054B
    LDA L0FE8DE.w,Y
    JMP L038D28.w

L038D22:
    LDY $054B
    LDA L0FE9DE.w,Y
L038D28:
    CMP #31
    BEQ L038D33
    CMP #14
    BEQ L038D33
    JMP L038D5B.w

L038D33:
    LDY $CA
    LDA $0520,Y
    ASL
    TAX
    LDA L038C7C.w,X
    CLC
    ADC $C6
    STA $C6
    LDA (L038C7C.w + 1),X
    CLC
    ADC $C7
    STA $C7
    DEC $CA
    BPL L038D06
    LDA $053A
    BNE L038D5B
    LDA #1
    STA $053A
    JMP L038D6F.w

L038D5B:
    LDA #0
    STA $053A
    LDA $C6
    STA $0581
    LDA $C7
    STA $0580
    LDA #255
    STA $0582
L038D6F:
    RTS

L038D70:
    LDX $7440
    INX
    STX $0A
    LDX $7441
    INX
    STX $0B
    LDX #0
L038D7E:
    JSR L0381E3.w
    LDY #0
L038D83:
    CPY #0
    BEQ L038DB5
    CPY $7441
    BEQ L038DB5
    CPX #0
    BEQ L038DB5
    CPX $7440
    BEQ L038DB5
    STY $A9
    JSR L038211.w
    LDA ($04),Y
    TAY
    LDA $747C
    BNE L038DA8
    LDA L0FE8DE.w,Y
    JMP L038DAB.w

L038DA8:
    LDA L0FE9DE.w,Y
L038DAB:
    LDY $A9
    CMP #31
    BEQ L038DB5
    LDA #0
    BEQ L038DB7
L038DB5:
    LDA #255
L038DB7:
    STA ($72),Y
    INY
    CPY $0B
    BNE L038D83
    INX
    CPX $0A
    BCC L038D7E
    RTS

L038DC4:
    LDY #0
    LDA ($A3),Y
    CMP #167
    BEQ L038DD0
    CMP #144
    BNE L038DE1
L038DD0:
    JSR L0FC04E.w
    STA $054A
    CMP #32
    BCS L038DE1
    LDA #192
    STA $0582
    BNE L038E1E
L038DE1:
    LDA $0582
    CMP #255
    BNE L038E1E
    LDY #1
    LDA ($A3),Y
    CMP #15
    BNE L038E1E
    LDY #10
    LDA ($A3),Y
    AND #32
    BEQ L038E21
    JSR L0FC04E.w
    CMP #64
    BCS L038E1E
    JSR L038E9F.w
    BCS L038E1E
    LDY #36
    LDA L0FD9F4.w,Y
    STA $A9
    LDY #14
    LDA ($A3),Y
    SEC
    SBC $A9
    BCC L038E1E
    BEQ L038E1E
    STA $7492
    LDA #64
    STA $0582
L038E1E:
    JMP L038E5B.w

L038E21:
    LDA ($A3),Y
    AND #16
    BEQ L038E5B
    LDY #35
    LDA L0FD9F4.w,Y
    STA $A9
    LDY #14
    LDA ($A3),Y
    SEC
    SBC $A9
    BCC L038E5B
    BEQ L038E5B
    STA $0549
    LDY $0581
    LDX $0580
    INX
    JSR L038E5C.w
    BCC L038E5B
    DEX
    DEX
    JSR L038E5C.w
    BCC L038E5B
    INX
    INY
    JSR L038E5C.w
    BCC L038E5B
    DEY
    DEY
    JSR L038E5C.w
L038E5B:
    RTS

L038E5C:
    TYA
    PHA
    TXA
    PHA
    STX $B9
    STY $B8
    JSR L038211.w
    LDA ($04),Y
    TAY
    LDA L0FE9DE.w,Y
    CMP #31
    BNE L038E99
    JSR L039042.w
    BCS L038E99
    LDY #14
    LDA ($02),Y
    STA $A9
    LDY #3
    LDA ($02),Y
    CMP $A9
    BEQ L038E99
    LDA $B4
    CMP $0583
    BEQ L038E99
    ORA #128
    STA $0582
    LDA $0549
    STA $7492
    CLC
    BCC L038E9A
L038E99:
    SEC
L038E9A:
    PLA
    TAX
    PLA
    TAY
    RTS

L038E9F:
    JSR L03824C.w
L038EA2:
    LDY #0
    LDA ($02),Y
    CMP #0
    BEQ L038EC8
    LDY #18
    LDA ($02),Y
    CMP #255
    BEQ L038EC0
    LDY #3
    LDA ($02),Y
    STA $AA
    LDY #14
    LDA ($02),Y
    CMP $AA
    BCC L038EC8
L038EC0:
    LDY #21
    JSR L0FC383.w
    JMP L038EA2.w

L038EC8:
    RTS

L038EC9:
    LDX $0539
    LDY $0538
    JSR L0381E3.w
    LDA #61
    STA ($72),Y
    LDA #0
    STA $C4
    STX $C7
    STY $C6
    LDA $BE
    BEQ L038EEF
    CMP #2
    BEQ L038EE9
    JMP L038F5A.w
L038EE9:
    JSR L038786.w
    JMP L038EF2.w

L038EEF:
    JSR L038B14.w
L038EF2:
    LDA $BE
    CMP #255
    BEQ L038F5A
    LDA $C5
    BEQ L038F5A
    JSR L038F5B.w
L038EFF:
    INC $C4
    LDX #1
L038F03:
    LDY #1
    TXA
    PHA
    ASL
    TAX
    LDA L0FEE22.w,X
    STA $72
    LDA L0FEE23.w,X
    STA $73
    PLA
    TAX
L038F15:
    LDA ($72),Y
    AND #63
    CMP $C4
    BNE L038F48
    STX $C7
    STY $C6
    LDA $BE
    BEQ L038F3C
    CMP #1
    BEQ L038F36
    CMP #2
    BEQ L038F30
    JMP L038F5A.w
L038F30:
    JSR L038786.w
    JMP L038F3F.w

L038F36:
    JSR L0381E2.w
    JMP L038F3F.w

L038F3C:
    JSR L038B14.w
L038F3F:
    LDA $BE
    CMP #255
    BEQ L038F5A
    JSR L038F5B.w
L038F48:
    INY
    CPY $7441
    BNE L038F15
    INX
    CPX $7440
    BCC L038F03
    LDA $C4
    CMP $C5
    BNE L038EFF
L038F5A:
    RTS

L038F5B:
    TXA
    PHA
    TYA
    PHA
    LDX #0
L038F61:
    TXA
    PHA
    ASL
    TAY
    LDA L03902E.w,Y
    ADC $C6
    STA $B8
    LDA (L03902E.w + 1),Y
    CLC
    ADC $C7
    STA $B9
    ASL
    TAY
    LDA L0FEE5E.w,Y
    STA $04
    LDA (L0FEE5E.w + 1),Y
    STA $05
    LDY $B8
    LDA ($04),Y
    TAX
    LDY #1
    LDA ($A3),Y
    STA $AB
    LDY #0
    LDA ($A3),Y
    STA $7484
    ROL
    BCS L038F9B
    LDA L0FE8DE.w,X
    JMP L038F9E.w

L038F9B:
    LDA L0FE9DE.w,X
L038F9E:
    PHA
    CMP #31
    BNE L038FC8
    PLA
    LDA $7484
    ROL
    BCS L038FB0
    JSR L039048.w
    JMP L038FB3.w

L038FB0:
    JSR L039042.w
L038FB3:
    LDY #15
    LDA ($02),Y
    TAX
    LDA $7484
    ROL
    BCS L038FC4
    LDA L0FE8DE.w,X
    JMP L038FC7.w

L038FC4:
    LDA L0FE9DE.w,X
L038FC7:
    PHA
L038FC8:
    LDY $AB
    DEY
    TYA
    ASL
    TAY
    LDA L0FEADE.w,Y
    STA $06
    LDA L0FEADF.w,Y
    STA $07
    PLA
    TAY
    LDA ($06),Y
    CLC
    ADC $C4
    BCC L038FE5
L038FE1:
    LDA #62
    BNE L038FE9
L038FE5:
    CMP #61
    BCS L038FE1
L038FE9:
    STA $09
    PLA
    TAX
    CLC
    ROR
    ROR
    ROR
    ORA $09
    STA $0A
    LDA $B9
    ASL
    TAY
    LDA L0FEE22.w,Y
    STA $72
    LDA L0FEE23.w,Y
    STA $73
    LDY $B8
    LDA ($72),Y
    AND #63
    BEQ L03901D
    CMP #60
    BCS L039021
    CMP $09
    BNE L039021
    JSR L0FC04E.w
    CMP #128
    BCC L03901D
    JMP L039021.w

L03901D:
    LDA $0A
    STA ($72),Y
L039021:
    INX
    CPX #4
    BEQ L039029
    JMP L038F61.w

L039029:
    PLA
    TAY
    PLA
    TAX
    RTS

L03902E:
.db $00 $FF
.db $01 $00
.db $00 $01
.db $FF $00

L039036:
    JSR L038243.w
    JMP L039084.w

L03903C:
    JSR L03823A.w
    JMP L039084.w

L039042:
    JSR L03824C.w
    JMP L03904E.w

L039048:
    JSR L038255.w
    JMP L03904E.w

L03904E:
    TYA
    PHA
    TXA
    PHA
    LDX #0
    BEQ L03905C
L039056:
    INX
    LDY #21
    JSR L0FC383.w
L03905C:
    LDY #0
    LDA ($02),Y
    CMP #0
    BEQ L03907F
    LDY #18
    LDA ($02),Y
    CMP #255
    BEQ L039056
    LDY #16
    LDA ($02),Y
    CMP $B9
    BNE L039056
    LDY #17
    LDA ($02),Y
    CMP $B8
    BNE L039056
    CLC
    STX $B4
L03907F:
    PLA
    TAX
    PLA
    TAY
    RTS

L039084:
    TYA
    PHA
    TXA
    PHA
    LDX #0
    BEQ L039092
L03908C:
    INX
    LDA #21
    JSR L0390BA.w
L039092:
    LDY #0
    LDA ($A5),Y
    CMP #0
    BEQ L0390B3
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L03908C
    LDY #16
    LDA ($A5),Y
    CMP $B9
    BNE L03908C
    LDY #17
    LDA ($A5),Y
    CMP $B8
    BNE L03908C
    CLC
L0390B3:
    STX $B4
    PLA
    TAX
    PLA
    TAY
    RTS

L0390BA:
    CLC
    ADC $A5
    STA $A5
    BCC L0390C3
    INC $A6
L0390C3:
    RTS

L0390C4:
    CLC
    ADC $A3
    STA $A3
    BCC L0390CD
    INC $A4
L0390CD:
    RTS

L0390CE:
    TXA
    PHA
    TYA
    PHA
    LDA #132
    STA $00
    LDA #116
    STA $01
    LDY #0
L0390DC:
    LDA ($00),Y
    STA ($A5),Y
    INY
    CPY #21
    BNE L0390DC
    PLA
    TAY
    PLA
    TAX
    RTS

L0390EA:
    JSR L03824C.w
    JMP L0390F3.w

L0390F0:
    JSR L038255.w
L0390F3:
    LDA #5
    STA $AB
    LDX #0
    STX $B3
L0390FB:
    LDY #0
    LDA ($02),Y
    BNE L039104
    JMP L0391E7.w

L039104:
    LDY #18
    LDA ($02),Y
    CMP #255
    BNE L03910F
    JMP L0391DA.w

L03910F:
    LDY #15
    LDA ($02),Y
    TAX
    CMP #218
    BNE L03911B
    JMP L0391A5.w

L03911B:
    LDY #1
    LDA ($02),Y
    CMP #3
    BEQ L039172
    CMP #5
    BEQ L039172
    STA $0549
    LDY #0
    LDA ($02),Y
    BPL L039143
    LDA $0549
    CMP #11
    BEQ L039172
    CMP #17
    BEQ L039172
    CMP #18
    BEQ L039172
    CMP #21
    BEQ L039172
L039143:
    LDA L0FE8DE.w,X
    CMP #16
    BNE L039172
    LDA #9
    STA $05E5
    LDA $02
    STA $04
    LDA $03
    STA $05
    LDA #14
    STA $4A
    LDA #6
    JSR L0FCA94.w
    LDY #14
    LDA ($02),Y
    SEC
    SBC #5
    BCC L03916E
    BEQ L03916E
    JMP L039170.w

L03916E:
    LDA #1
L039170:
    STA ($02),Y
L039172:
    LDY #0
    LDA ($02),Y
    BMI L03917D
    JSR L0391EB.w
    BCS L0391A5
L03917D:
    LDY #1
    LDA ($02),Y
    CMP #19
    BEQ L0391A5
    LDY #11
    LDA ($02),Y
    TAY
    LDA L0FDB38.w,Y
    CMP #10
    BEQ L0391A5
    LDY #0
    LDA ($02),Y
    CMP #167
    BNE L0391DA
    LDY #14
    LDA ($02),Y
    CMP #20
    BCS L0391A5
    LDA #40
    STA $AB
L0391A5:
    LDY #14
    LDA ($02),Y
    STA $A9
    LDY #3
    LDA ($02),Y
    CMP $A9
    BEQ L0391DA
    STA $AA
    LDA #10
    STA $05E5
    LDA $02
    STA $04
    LDA $03
    STA $05
    LDA #14
    STA $4A
    LDA #6
    JSR L0FCA94.w
    CLC
    LDA $AB
    ADC $A9
    CMP $AA
    BCC L0391D6
    LDA $AA
L0391D6:
    LDY #14
    STA ($02),Y
L0391DA:
    LDX $B3
    INX
    STX $B3
    LDY #21
    JSR L0FC383.w
    JMP L0390FB.w

L0391E7:
    INC $053F
    RTS

L0391EB:
    LDY #16
    LDA ($02),Y
    TAX
    LDY #17
    LDA ($02),Y
    TAY
    INX
    JSR L03920F.w
    BCS L03920E
    DEX
    DEX
    JSR L03920F.w
    BCS L03920E
    INX
    INY
    JSR L03920F.w
    BCS L03920E
    DEY
    DEY
    JSR L03920F.w
L03920E:
    RTS

L03920F:
    TYA
    PHA
    TXA
    PHA
    JSR L038211.w
    LDA ($04),Y
    CMP #34
    BEQ L039221
    CMP #146
    BEQ L039221
    CLC
L039221:
    PLA
    TAX
    PLA
    TAY
    RTS

L039226:
    JSR L038255.w
L039229:
    LDY #0
    LDA ($02),Y
    BEQ L039247
    LDY #18
    LDA ($02),Y
    CMP #255
    BEQ L03923F
    LDY #19
    LDA ($02),Y
    AND #4
    BNE L03924A
L03923F:
    LDY #21
    JSR L0FC383.w
    JMP L039229.w

L039247:
    JMP L039253.w

L03924A:
    LDA #1
    STA $7448
    INC $053F
    RTS

L039253:
    LDA #0
    STA $7448
    LDA #2
    STA $059C
    LDA #33
    STA $8A
    LDA #0
    STA $053F
    RTS

L039267:
    JSR L039315.w
    LDY #0
L03926C:
    LDA L03930B.w,Y
    CMP $7484
    BEQ L039286
    CMP #255
    BEQ L039285
    INY
    INY
    INY
    JMP L03926C.w

L03927E:
    LDA #0
    CMP $A9
    BEQ L039285
    CLC
L039285:
    RTS

L039286:
    INY
    LDA L03930B.w,Y
    CLC
    ADC #6
    STA $0549
    INY
    LDA L03930B.w,Y
    STA $054F
    LDA $0500
    STA $054A
    LDA $0501
    STA $054B
    LDA #255
    STA $052E
    LDA $7489
    JSR L0FC068.w
    LSR
    CLC
    ADC #1
    STA $AA
    LDA #0
    STA $A9
    JSR L03823A.w
    LDX #0
    STX $B4
L0392BF:
    LDY #0
    LDA ($A5),Y
    BEQ L0392E2
    CMP #35
    BNE L0392D1
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L0392E2
L0392D1:
    LDX $B4
    INX
    CPX #20
    BCS L03927E
    STX $B4
    LDA #21
    JSR L0390BA.w
    JMP L0392BF.w

L0392E2:
    JSR L0395F3.w
    BCS L03927E
    LDA $0549
    STA $00
    TAX
    LDA L03948A.w,X
    STA $0533
    JSR L03965C.w
    LDA $054A
    STA $0500
    LDA $054B
    STA $0501
    INC $A9
    DEC $AA
    BPL L0392D1
    JMP L03927E.w

L03930B:
.db $0F
.db $00
.db $06
.db $0E
.db $01
.db $0A
.db $1E
.db $02
.db $03
.db $FF

L039315:
    LDX #48
L039317:
    TXA
    LSR
    BCS L039324
    LDA $D2
    ORA #128
    STA $2001
    STA $D2
L039324:
    JSR L0FC70D.w
    LDA $D2
    AND #127
    STA $2001
    STA $D2
    DEX
    BNE L039317
    RTS

L039334:
    JSR L038243.w
    LDX #0
L039339:
    LDY #21
    LDA ($A5),Y
    CMP #0
    BEQ L039357
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L039357
    INX
    CPX #20
    BCS L039356
    LDA #21
    JSR L0390BA.w
    JMP L039339.w

L039356:
    CLC
L039357:
    RTS

L039358:
    LDY #1
    LDA ($A3),Y
    STA $0549
    CMP #19
    BEQ L0393A3
    LDA $0582
    CMP #255
    BNE L0393AF
    LDA $0549
    CMP #18
    BEQ L039379
    CMP #21
    BNE L0393AF
    LDA #11
    BNE L03937B
L039379:
    LDA #10
L03937B:
    STA $0549
    LDA #18
    STA $054F
    JSR L0FC04E.w
    AND #3
    CLC
    ADC #1
    STA $AA
    LDY #17
    LDA ($A3),Y
    STA $054A
    LDY #16
    LDA ($A3),Y
    STA $054B
    LDA #255
    STA $052E
    JMP L03941B.w

L0393A3:
    JSR L039334.w
    BCC L0393AF
    JSR L0FC04E.w
    CMP #128
    BCS L0393B2
L0393AF:
    JMP L039443.w

L0393B2:
    LDY #10
    LDA ($A3),Y
    LDY #0
L0393B8:
    ROL
    BCS L0393C7
    INY
    CPY #4
    BNE L0393B8
    LDA #11
    STA $0549
    BNE L0393CB
L0393C7:
    TYA
    STA $0549
L0393CB:
    LDA $0538
    STA $054A
    STA $0510
    LDA $0539
    STA $054B
    STA $0511
    LDA #255
    STA $052E
    LDY $0549
    LDA L039466.w,Y
    STA $054F
    LDA L039472.w,Y
    STA $A9
    LDY #14
    LDA ($A3),Y
    SEC
    SBC $A9
    BEQ L0393AF
    BCC L0393AF
    STA ($A3),Y
    LDY #5
    LDA ($A3),Y
    JSR L0FC068.w
    LSR
    CLC
    ADC #1
    STA $AA
    LDA #255
    STA $05E5
    LDA #11
    STA $4A
    LDA #6
    JSR L0FCA94.w
    JSR L039315.w
L03941B:
    JSR L038243.w
    LDX #0
    STX $B4
    BEQ L039432
L039424:
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L039444
    LDY #0
    LDA ($A5),Y
    BEQ L039444
L039432:
    LDX $B4
    INX
    CPX #20
    BCS L039443
    STX $B4
    LDA #21
    JSR L0390BA.w
    JMP L039424.w

L039443:
    RTS

L039444:
    JSR L0395F3.w
    BCS L039443
    LDA $0549
    STA $00
    TAX
    LDA L03948A.w,X
    STA $0533
    JSR L03965C.w
    LDA #1
    STA $0550
    DEC $AA
    BEQ L039443
    BMI L039443
    JMP L039432.w

L039466:
.db $05
.db $03
.db $0B
.db $11
.db $00
.db $00
.db $01
.db $01
.db $01
.db $10
.db $12
.db $12

L039472:
.db $06
.db $04
.db $01
.db $02
.db $00
.db $00
.db $01
.db $01
.db $01
.db $00
.db $00
.db $00

L03947E:
.db $04
.db $0B
.db $06
.db $08
.db $FF
.db $FF
.db $01
.db $01
.db $01
.db $01
.db $0B
.db $0B

L03948A:
.db $03
.db $0B
.db $05
.db $07
.db $FF
.db $FF
.db $01
.db $01
.db $01
.db $01
.db $0B
.db $0B

L039496:
    LDA $0584
    BNE L03949C
L03949B:
    RTS

L03949C:
    LDA $747C
    BNE L0394B3
    LDA $7484
    STA $A9
    LDA $74A0
    STA $AA
    LDA $74A9
    STA $AB
    JMP L0394C2.w

L0394B3:
    LDA $749F
    STA $A9
    LDA $7485
    STA $AA
    LDA $748E
    STA $AB
L0394C2:
    LDA $0584
    CMP #1
    BNE L0394EF
    LDY #0
L0394CB:
    LDA L03930B.w,Y
    CMP $A9
    BEQ L0394DC
    CMP #255
    BEQ L03949B
    INY
    INY
    INY
    JMP L0394CB.w

L0394DC:
    INY
    INY
    LDA L03930B.w,Y
    STA $0549
    LDA #2
    STA $0533
    JSR L03823A.w
    JMP L039515.w

L0394EF:
    LDA $AA
    CMP #19
    BEQ L0394F8
    JMP L03949B.w

L0394F8:
    LDA $AB
    LDY #0
L0394FC:
    ROL
    BCS L039506
    INY
    CPY #4
    BNE L0394FC
    LDY #11
L039506:
    LDA L039466.w,Y
    STA $0549
    LDA L03947E.w,Y
    STA $0533
    JSR L038243.w
L039515:
    LDY #0
    LDA ($A5),Y
    BNE L03951E
    JMP L03949B.w

L03951E:
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L039544
    LDY #1
    LDA ($A5),Y
    PHA
    LDY #0
    LDA ($A5),Y
    ROL
    BCS L03953B
    LSR
    CMP #35
    BEQ L03953B
    PLA
    JMP L039544.w

L03953B:
    PLA
    CMP $0549
    BNE L039544
    JSR L03954C.w
L039544:
    LDA #21
    JSR L0390BA.w
    JMP L039515.w

L03954C:
    LDA #255
    LDY #18
    STA ($A5),Y
    LDA $0533
    STA $05E5
    LDA $A5
    STA $00
    LDA $A6
    STA $01
    LDA #10
    STA $4A
    LDA #6
    JSR L0FCA94.w
    RTS

L03956A:
    LDX #48
L03956C:
    TXA
    LSR
    BCS L039579
    LDA $D2
    ORA #32
    STA $2001
    STA $D2
L039579:
    JSR L0FC70D.w
    LDA $D2
    AND #223
    STA $2001
    STA $D2
    DEX
    BNE L03956C
    LDA #0
    STA $AA
    STA $B4
    LDA $7489
    STA $0549
    JSR L038243.w
L039597:
    LDY #0
    LDA ($A5),Y
    BNE L0395A4
    SEC
    LDA $AA
    BEQ L0395A3
    CLC
L0395A3:
    RTS

L0395A4:
    LDY #18
    LDA ($A5),Y
    CMP #255
    BEQ L0395E9
    LDA $B4
    BEQ L0395E9
    LDY #1
    LDA ($A5),Y
    CMP #3
    BEQ L0395C4
    CMP #5
    BEQ L0395C4
    CMP #11
    BEQ L0395C4
    CMP #17
    BNE L0395E9
L0395C4:
    STA $0533
    LDY #3
L0395C9:
    LDA L039466.w,Y
    CMP $0533
    BEQ L0395D4
    DEY
    BPL L0395C9
L0395D4:
    LDA L03947E.w,Y
    STA $0533
    JSR L0FC04E.w
    AND #15
    CMP $0549
    BCS L0395E9
    INC $AA
    JSR L03954C.w
L0395E9:
    LDA #21
    JSR L0390BA.w
    INC $B4
    JMP L039597.w

L0395F3:
    INC $052E
    LDA $052E
    ASL
    TAY
    LDA L03969F.w,Y
    CMP #128
    BNE L039606
    SEC
    JMP L03965B.w

L039606:
    CLC
    ADC $054B
    BMI L0395F3
    BEQ L0395F3
    CMP $7440
    BCS L0395F3
    STA $C7
    INY
    LDA L03969F.w,Y
    CLC
    ADC $054A
    BMI L0395F3
    BEQ L0395F3
    CMP $7441
    BCS L0395F3
    STA $C6
    LDX $C7
    JSR L038211.w
    LDY $C6
    LDA ($04),Y
    STA $7493
    TAY
    LDA L0FE8DE.w,Y
    CMP #14
    BEQ L0395F3
    CMP #31
    BEQ L0395F3
    PHA
    LDY $054F
    DEY
    TYA
    ASL
    TAY
    LDA L0FEADE.w,Y
    STA $00
    LDA L0FEADF.w,Y
    STA $01
    PLA
    TAY
    LDA ($00),Y
    CMP #255
    BEQ L0395F3
    CLC
L03965B:
    RTS

L03965C:
    LDA #7
    STA $4A
    LDA #8
    JSR L0FCA94.w
    LDA $C6
    STA $0500
    STA $0510
    STA $7495
    LDA $C7
    STA $0501
    STA $0511
    STA $7494
    JSR L0390CE.w
    LDA $0533
    STA $05E5
    LDA #11
    STA $4A
    LDA #6
    JSR L0FCA94.w
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    LDA #12
    STA $4A
    LDA #6
    JSR L0FCA94.w
    RTS

L03969F:
.db $FF
.db $00
.db $01
.db $00
.db $00
.db $FF
.db $00
.db $01
.db $FF
.db $FF
.db $FF
.db $01
.db $01
.db $FF
.db $01
.db $01
.db $FE
.db $FE
.db $FE
.db $FF
.db $FE
.db $00
.db $FE
.db $01
.db $FE
.db $02
.db $02
.db $FE
.db $02
.db $FF
.db $02
.db $00
.db $02
.db $01
.db $02
.db $02
.db $FE
.db $FE
.db $FF
.db $FE
.db $00
.db $FE
.db $01
.db $FE
.db $02
.db $FE
.db $FE
.db $02
.db $FF
.db $02
.db $00
.db $02
.db $01
.db $02
.db $02
.db $02
.db $80

DIALOGUES_POINTER:
.dw L039770
.dw L0397D9
.dw L0397FE
.dw L0398F4
.dw L039918
.dw L039943
.dw L039966
.dw L0399AF
.dw L039A69
.dw L039AA6
.dw L039AFB
.dw L039B3F
.dw L039BA4
.dw L039C2D
.dw L039C9A
.dw L039DC5
.dw L039F56
.dw L03A0E5
.dw L03A1DF
.dw L03A401
.dw L03A451
.dw L03A491
.dw L03AE56
.dw L03A4EF
.dw L03A54F
.dw L03A601
.dw L03A64E
.dw L03A6CF
.dw L03A709
.dw L03A797
.dw L03A803
.dw L03A7DB
.dw L03A874
.dw L03A9EC
.dw L03B053
.dw L03B10F
.dw L03B16F
.dw L03BAE7
.dw L03B1F2
.dw L03B3DA
.dw L03B446
.dw L03B580
.dw L03B4B0
.dw L03B4FC
.dw L03B5E3
.dw L03B6CF
.dw L03B73E
.dw L03B7C8
.dw L03998E
.dw L03A3D1
.dw L03A9DC
.dw L03B678
.dw L03B81F
.dw L03B82D
.dw L03B852
.dw L03B867
.dw L03B87A
.dw L03B930
.dw L03B9AD
.dw L03BA31
.dw L03BAAB
.dw L03AE77
.dw L03AED4
.dw L03AFAC
.dw L03BB1B
.dw L03BB5F
.dw L03BBF6
.dw L03BC41
.dw L03BC9D
.dw L03BD31
.dw L03BD85
.dw L03BDF5
.dw L03BCC4
.dw L03BE02
.dw L03BE47
.dw L03BE8F

L039770:
.db $E8
.db $50
.db $40
.db $03
.db $F0
.db $03
.db SPEAK
.db ENCODE("アルム ひとやすみしよう")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("けんのしゅぎょうは おわりだ")
.db NEWLINE
.db ENCODE("もう あそびにいってもいいぞ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だが むらのそとへは ゆくな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("さいきんは このへんにも")
.db NEWLINE
.db ENCODE("さんぞくが うろついてるからな")
.db $EF

L0397D9:
.db SPEAK
.db ENCODE("やあ アルム")
.db NEWLINE
.db ENCODE("いいところにきたな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえも このひとのはなしをきけよ")
.db $EF

L0397FE:
.db $E8
.db $50
.db $40
.db $05
.db $F0
.db $05
.db SPEAK
.db ENCODE("あの あくめいたかい")
.db NEWLINE
.db ENCODE("ドゼーしょうぐんが ついに")
.db NEWLINE
.db ENCODE("クーデターを おこしたのです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアのしろは ドゼーぐんに")
.db NEWLINE
.db ENCODE("せんりょうされ こくおうも")
.db NEWLINE
.db ENCODE("ころされてしまいました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ドゼーは ざんぎゃくなおとこで")
.db NEWLINE
.db ENCODE("まいにち おおくのひとたちが")
.db NEWLINE
.db ENCODE("ひどいめに あっている")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ぼくたちは かいほうぐんをつくって")
.db NEWLINE
.db ENCODE("ドゼーと たたかっているのですが")
.db NEWLINE
.db ENCODE("ざんねんながら うまくいきません")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それで マイセンしょうぐんの")
.db NEWLINE
.db ENCODE("おちからを かりに きたのです")
.db $EF

L0398F4:
.db SPEAK
.db ENCODE("へぇー おまえのじいちゃんって")
.db NEWLINE
.db ENCODE("むかしは しょうぐんだったのか")
.db $EF

L039918:
.db SPEAK
.db ENCODE("なあ アルム")
.db NEWLINE
.db ENCODE("くにの みんなが こまってるんだ")
.db NEWLINE
.db ENCODE("みんなで たすけにいこうぜ")
.db $EF

L039943:
.db SPEAK
.db ENCODE("おれたちは ここでまってるから")
.db NEWLINE
.db ENCODE("じいちゃんに たのんでみろよ")
.db $EF

L039966:
.db $E8 $50 $40 $03 $F0 $03
.db SPEAK
.db ENCODE("なに かいほうぐんにはいるだと!")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だめだ.ゆるさん!!")
.db WAIT_CLICK

L03998E:
.db SPEAK
.db ENCODE("おまえは たたかってはならぬ")
.db NEWLINE
.db ENCODE("かなしいおもいを するだけだ")
.db $EF

L0399AF:
.db $E8 $50 $40 $05 $F0 $05
.db SPEAK
.db ENCODE("だめでしたか··ざんねんです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("マイセンどのも としをとられて")
.db NEWLINE
.db ENCODE("おくびょうに なられたのですね")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("かつては ソフィアいちの")
.db NEWLINE
.db ENCODE("ゆうしゃとして こくみんから")
.db NEWLINE
.db ENCODE("そんけいされていたのに···")
.db $E6
.db $E8 $50 $40 $01 $F0 $01
.db SPEAK
.db ENCODE("まって じいちゃんのかわりに")
.db NEWLINE
.db ENCODE("ぼくが かいほうぐんにはいるよ")
.db $E6
.db $F0
.db ENCODE("か")
.db SPEAK
.db ENCODE("えっ! ")
.db NEWLINE
.db ENCODE("きみが マイセンしょうぐんの")
.db NEWLINE
.db ENCODE("かわりに きてくれるのか")
.db WAIT_CLICK

L039A69:
.db SPEAK
.db ENCODE("ありがとう.なかまたちも")
.db NEWLINE
.db ENCODE("きっと よろこぶよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("じゃあ ぼくといっしょに")
.db NEWLINE
.db ENCODE("かいほうぐんのアジトまでいこう")
.db $EF

L039AA6:
.db $E8 $50 $40 $08 $F0 $08
.db SPEAK
.db ENCODE("アルム ぼくもゆくよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このラムのむらだって")
.db NEWLINE
.db ENCODE("いつかは おそわれるはずだろ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それなら さきに")
.db NEWLINE
.db ENCODE("そのドゼーとかいうやつを")
.db NEWLINE
.db ENCODE("やっつけちまおうぜ")
.db $EF

L039AFB:
.db $E8 $50 $40 $07 $F0 $07
.db SPEAK
.db ENCODE("アルムは おれたちのリーダーだろ")
.db NEWLINE
.db ENCODE("もちろん ひとりでゆかせないぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("いっしょに ソフィアのしろを")
.db NEWLINE
.db ENCODE("とりもどそう")
.db $EF

L039B3F:
.db $E8 $50 $40 $06 $F0 $06
.db SPEAK
.db ENCODE("おれ!?·· どうしょうかな··")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("まぁいいや,いっしょにゆくよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だけど あぶなくなったら")
.db NEWLINE
.db ENCODE("たすけてくれよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おれたちは おまえとはちがって")
.db NEWLINE
.db ENCODE("まだ うまくたたかえないからな")
.db $EF

L039BA4:
.db $E8 $50 $40 $09 $F0 $09
.db SPEAK
.db ENCODE("ありがとう.たすかりました")
.db NEWLINE
.db ENCODE("わたしは ソフィアのきしクレア")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ドゼーのへいしに とらえられて")
.db NEWLINE
.db ENCODE("ここに とじこめられてたの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("かいほうぐんのリーダーの")
.db NEWLINE
.db ENCODE("クレーベは わたしのあにです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わたしも アジトにかえりますから")
.db NEWLINE
.db ENCODE("いっしょに ゆきましょう")
.db $EF

L039C2D:
.db $E8 $50 $40 $14 $F0 $14
.db SPEAK
.db ENCODE("ここは かいほうぐんのアジトだ")
.db NEWLINE
.db ENCODE("あやしいやつは とおさないぞ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("えっ あたらしいなかまなのか")
.db NEWLINE
.db ENCODE("それなら おくのへやにいってくれ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だけど どうくつには まものが")
.db NEWLINE
.db ENCODE("でるから きをつけろよ")
.db $EF

L039C9A:
.db $E8 $50 $40 $86 $F0 $86
.db SPEAK
.db ENCODE("ふふ ソフィアのおうじょか")
.db NEWLINE
.db ENCODE("おまえがくるのを まっていたぞ")
.db $E6
.db $E8 $50 $40 $02 $F0 $02
.db SPEAK
.db ENCODE("あなたは だれ!?")
.db $E6
.db $F0
.db ENCODE("ゅ")
.db SPEAK
.db ENCODE("わしか")
.db NEWLINE
.db ENCODE("わしは ドーマさまの")
.db NEWLINE
.db ENCODE("だいいちの しもべ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ドーマきょうの さいしちょう")
.db NEWLINE
.db ENCODE("ジュダと いうものよ")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("それなら おねがいです")
.db WAIT_CLICK
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("ミラさまを かいほうして!")
.db NEWLINE
.db ENCODE("だいちぼしんミラを")
.db NEWLINE
.db ENCODE("もとにもどしてください!!")
.db $E6
.db $F0
.db ENCODE("ゅ")
.db SPEAK
.db ENCODE("ふふふ···")
.db NEWLINE
.db ENCODE("まあ そうあわてるな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わしのもつ この たまをみてみろ")
.db NEWLINE
.db ENCODE("どうじゃ なつかしいすがたが")
.db NEWLINE
.db ENCODE("みえるじゃろう")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("そうじゃよ アルムだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("やつのもがきくるしむすがたを")
.db NEWLINE
.db ENCODE("しばらく ながめているのじゃな")
.db $EF

L039DC5:
.db $E8 $50 $40 $0C $F0 $0C
.db SPEAK
.db ENCODE("ドゼーは きたのたいこくリゲルに")
.db NEWLINE
.db ENCODE("えんじょを たのんだそうだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("リゲルのきしだんのつよさは")
.db NEWLINE
.db ENCODE("ソフィアとは ひかくにならない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("もし リゲルおうこくが うごけば")
.db NEWLINE
.db ENCODE("おれたちに かちめはないぜ")
.db $E6
.db $E8 $50 $40 $01 $F0 $01
.db SPEAK
.db ENCODE("でも ソフィアとリゲルは")
.db NEWLINE
.db ENCODE("[かみがみのめいやく]によって")
.db NEWLINE
.db ENCODE("たたかえないはずだろ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアのしゅごしんである")
.db NEWLINE
.db ENCODE("ミラさまが そんなこと")
.db NEWLINE
.db ENCODE("ゆるされないはずだ")
.db $E6
.db $F0
.db ENCODE("す")
.db SPEAK
.db ENCODE("ところがさ··· うわさじゃ")
.db NEWLINE
.db ENCODE("そのミラさまが きえたらしい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おいおい そんなにおどろくなよ")
.db NEWLINE
.db ENCODE("だって さいきん なんかへんだろ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このところ さくもつはみのらないし")
.db NEWLINE
.db ENCODE("へんな まものばかりが でてくる")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だいちをまもる ミラさまのちからが")
.db NEWLINE
.db ENCODE("おとろえたとしか かんがえられないよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("まあ このうわさが ほんとかどうか")
.db NEWLINE
.db ENCODE("ミラのしんでんにいけば わかるさ")
.db $EF

L039F56:
.db $E8 $50 $40 $0B $F0 $0B
.db SPEAK
.db ENCODE("やあ きみがアルムか")
.db NEWLINE
.db ENCODE("いもうとが おせわになったね")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("さすがは マイセンしょうぐんの")
.db NEWLINE
.db ENCODE("まごだけあって ゆうかんだな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("なあ アルム.たのみがあるんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("きょうからは きみが ぼくたちの")
.db NEWLINE
.db ENCODE("リーダーになってくれないだろうか")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアのおうけが ほろんだいま")
.db NEWLINE
.db ENCODE("ぼくたちには たよるものがない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だから ソフィアおうこくの")
.db NEWLINE
.db ENCODE("えいゆうだった マイセンどのに")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("われらの おうになってほしいと")
.db NEWLINE
.db ENCODE("おねがいしたのだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だけど しょうぐんは なぜか")
.db NEWLINE
.db ENCODE("たちあがろうとは なさらない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だから かわりに きみが")
.db NEWLINE
.db ENCODE("かいほうぐんを ひきいてほしい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("マイセンどのの ちをひくものが")
.db NEWLINE
.db ENCODE("かいほうぐんのリーダーになれば")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("われわれは おもうぞんぶん")
.db NEWLINE
.db ENCODE("たたかうことができるんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("なっアルム.たのむよ")
.db NEWLINE
.db ENCODE("どうかソフィアを すくってくれ")
.db $EF

L03A0E5:
.db $E8 $50 $40 $03 $F0 $03
.db SPEAK
.db ENCODE("アルム,きたか···")
.db $E6
.db $E8 $50 $40 $01 $F0 $01
.db SPEAK
.db ENCODE("あっ じいちゃん!!")
.db NEWLINE
.db ENCODE("どうして ソフィアのしろに?")
.db $E6
.db SPEAK
.db ENCODE("うんめいとは ざんこくなもの")
.db NEWLINE
.db ENCODE("わしが どうあがいても")
.db NEWLINE
.db ENCODE("さだめは かえられぬ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ならば アルムよ")
.db NEWLINE
.db ENCODE("おまえは おまえのしんじる")
.db NEWLINE
.db ENCODE("みちをゆくがよい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このバレンシアを のろわれた")
.db NEWLINE
.db ENCODE("うんめいから ときはなつこと")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それが おまえと ···そして")
.db NEWLINE
.db ENCODE("もうすぐ このしろを おとずれる")
.db NEWLINE
.db ENCODE("あかいかみのむすめ···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえたちふたりに あたえられた")
.db NEWLINE
.db ENCODE("うんめいなのかも しれぬな···")
.db $EF

L03A1DF:
.db $E8 $50 $40 $02 $F0 $02
.db SPEAK
.db ENCODE("それでは しさいさま")
.db NEWLINE
.db ENCODE("いってまいります")
.db $E6
.db $E8 $50 $40 $04 $F0 $04
.db SPEAK
.db ENCODE("セリカよ··どうしてもゆくのか")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ミラのしんでんまでの みちは")
.db NEWLINE
.db ENCODE("ながい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアおうこくも いまや")
.db NEWLINE
.db ENCODE("ないらんで あれはてて だれも")
.db NEWLINE
.db ENCODE("たびびとを まもってはくれぬ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ギースのかいぞくや まものたちが")
.db NEWLINE
.db ENCODE("しゅつぼつして おまえを")
.db NEWLINE
.db ENCODE("おそうかもしれぬぞ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("いくら [しんかんせんし]でも")
.db NEWLINE
.db ENCODE("おんなのおまえには きけんすぎる")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("しかし しさいさま")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このだいちに みのりがなくなって")
.db NEWLINE
.db ENCODE("すでに 3ねん")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ひとびとは うえにくるしみ")
.db NEWLINE
.db ENCODE("この しゅうどういんにまで")
.db NEWLINE
.db ENCODE("たすけを もとめにきています")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だいちぼしんミラに いったい")
.db NEWLINE
.db ENCODE("なにがあったのか.わたしは")
.db NEWLINE
.db ENCODE("それを たしかめたいのです")
.db $E6
.db $F0
.db ENCODE("お")
.db SPEAK
.db ENCODE("そうか···")
.db NEWLINE
.db ENCODE("そこまでいうなら やむをえまい")
.db NEWLINE
.db ENCODE("だがなセリカよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("マイセンどのが おまえをわしに")
.db NEWLINE
.db ENCODE("あずけたわけを しっているな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("いまや ソフィアおうけの ちを")
.db NEWLINE
.db ENCODE("ひくものは おまえひとりなのだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえは ソフィアおうこくの")
.db NEWLINE
.db ENCODE("たみにとって さいごの きぼう")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("けっして むりはするなよ")
.db $EF

L03A3D1:
.db $E8 $50 $40 $04 $F0 $04
.db SPEAK
.db ENCODE("もう なにもいうことはない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("そなたに ミラの ごかごの")
.db NEWLINE
.db ENCODE("あらんことを···")
.db $EF

L03A401:
.db $E8 $50 $40 $0F $F0 $0F
.db SPEAK
.db ENCODE("セリカさまが いかれるのなら")
.db NEWLINE
.db ENCODE("わたしも まいります")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("すこしぐらいの きずなら")
.db NEWLINE
.db ENCODE("わたしのリカバーのじゅもんで")
.db NEWLINE
.db ENCODE("なおしてあげましょう")
.db $EF

L03A451:
.db $E8 $50 $40 $10 $F0 $10
.db SPEAK
.db ENCODE("セリカさま.おんなのこばかりじゃ")
.db NEWLINE
.db ENCODE("ふあんでしょ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ぼくも いっしょにいきますから")
.db NEWLINE
.db ENCODE("あんしんしてください")
.db $EF

L03A491:
.db $E8 $50 $40 $0D $F0 $0D
.db SPEAK
.db ENCODE("ボーイなんて まだまだこどもよ")
.db NEWLINE
.db ENCODE("だって ほのおのまほうしか")
.db NEWLINE
.db ENCODE("つかえないもの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("セリカさま.わたしなら")
.db NEWLINE
.db ENCODE("いかづちの まほうがつかえます")
.db NEWLINE
.db ENCODE("たよりにしてくださいね")
.db $EF

L03A4EF:
.db $E8 $50 $40 $0E $F0 $0E
.db SPEAK
.db ENCODE("わたしは シルク")
.db NEWLINE
.db ENCODE("ミラのめがみにつかえる")
.db NEWLINE
.db ENCODE("シスターです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("とうぞくたちに とらえられ")
.db NEWLINE
.db ENCODE("このほこらへ つれてこられたの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("どうかわたしを ここから")
.db NEWLINE
.db ENCODE("つれだしてください")
.db $EF

L03A54F:
.db SPEAK
.db ENCODE("バレンシアにわたりたいなら")
.db NEWLINE
.db ENCODE("そのふねにのりな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だが とちゅうのうみには")
.db NEWLINE
.db ENCODE("かいぞくどもが わんさかでるぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("かいぞくのボスはダッハって")
.db NEWLINE
.db ENCODE("いうんだが こいつがひでえやつでよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("さっきも かぞくをころされた")
.db NEWLINE
.db ENCODE("おとこたちが かたきうちに")
.db NEWLINE
.db ENCODE("でかけていった")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("まぁ かわいそうだが いきては")
.db NEWLINE
.db ENCODE("かえってこれないだろうなぁ")
.db $EF

L03A601:
.db SPEAK
.db ENCODE("うみのほこらには")
.db NEWLINE
.db ENCODE("ふしぎなちからをもつ つるぎが")
.db NEWLINE
.db ENCODE("かくされていると いわれています")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だけど あのしまには")
.db NEWLINE
.db ENCODE("おそろしい まものが·····")
.db $EF

L03A64E:
.db $E8 $50 $40 $11 $F0 $11
.db SPEAK
.db ENCODE("まぁ おれは バルボさんに")
.db NEWLINE
.db ENCODE("かねで やとわれただけだから")
.db NEWLINE
.db ENCODE("あんたらだって いいぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だけど ドラゴンゾンビだけは")
.db NEWLINE
.db ENCODE("かんべんしてくれよな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("あれは エンジェルのまほうでも")
.db NEWLINE
.db ENCODE("なければ ぜったい たおせないぜ")
.db $EF

L03A6CF:
.db $E8 $50 $40 $15 $F0 $15
.db SPEAK
.db ENCODE("バルボのあにきが いくなら")
.db NEWLINE
.db ENCODE("おれも いくよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ゆみのうでなら")
.db NEWLINE
.db ENCODE("すこしは じしんがあるぜ")
.db $EF

L03A709:
.db SPEAK
.db ENCODE("ジークしょうぐんは むかしの")
.db NEWLINE
.db ENCODE("きおくが ないんだよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ひどいきずをおって ながれてきたのを")
.db NEWLINE
.db ENCODE("おしろづきのシスターだった")
.db NEWLINE
.db ENCODE("ティータさまが かいほうされたのよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ほら あのとおり 2まいめだから")
.db NEWLINE
.db ENCODE("たちまち テイータさま···")
.db NEWLINE
.db ENCODE("おっと おしゃべりがすぎるわね")
.db $EF

L03A797:
.db $E8 $50 $40 $12 $F0 $12
.db SPEAK
.db ENCODE("すまねぇな たすかったよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ああ あんたには")
.db NEWLINE
.db ENCODE("かりができたからな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("どこでも いっしょにいってやるよ")
.db NEWLINE
.db ENCODE("よろしくな")
.db $EF

L03A7DB:
.db $E8 $50 $40 $20 $F0 $20
.db SPEAK
.db ENCODE("わたしたちは はるかひがしの")
.db NEWLINE
.db ENCODE("アカネイアたいりくから きました")
.db $EF

L03A803:
.db $E8 $50 $40 $1F $F0 $1F
.db SPEAK
.db ENCODE("わたしたちの いもうとが")
.db NEWLINE
.db ENCODE("かいぞくに さらわれたの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それで かいぞくせんを")
.db NEWLINE
.db ENCODE("おいかけたのだけど このふきんで")
.db NEWLINE
.db ENCODE("みうしなってしまいました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ああ はやくたすけだして")
.db NEWLINE
.db ENCODE("いっしょに くににかえりたい")
.db $EF

L03A874:
.db $E8 $50 $40 $03 $F0 $03
.db SPEAK
.db ENCODE("セリカ,ひさしぶりだな")
.db $E6
.db $E8 $50 $40 $02 $F0 $02
.db SPEAK
.db ENCODE("お···おじいさま!")
.db NEWLINE
.db ENCODE("どうして ここに!!")
.db $E6
.db $F0
.db ENCODE("え")
.db SPEAK
.db ENCODE("ふむ")
.db NEWLINE
.db ENCODE("まあ いろいろあっての··")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえも よくぶじに ここまできた")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("はい.いろんなひとに")
.db NEWLINE
.db ENCODE("たすけてもらいました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わたしは かれらといっしょに")
.db NEWLINE
.db ENCODE("ミラのしんでんに ゆくつもりです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("しんでんにいって")
.db NEWLINE
.db ENCODE("また さくもつがみのるように")
.db NEWLINE
.db ENCODE("ミラさまに おねがいしたいのです")
.db $E6
.db $F0
.db ENCODE("え")
.db SPEAK
.db ENCODE("そうか·· やはりな···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("まあ そのまえに そこのかいだんを")
.db NEWLINE
.db ENCODE("あがって うえにいってみるとよい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえが いちばんあいたいと")
.db NEWLINE
.db ENCODE("ねがっているものが")
.db NEWLINE
.db ENCODE("そこにいるはずだ")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("ま··まさか!")
.db NEWLINE
.db ENCODE("··· アルム?")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアを かいほうした")
.db NEWLINE
.db ENCODE("わかい ゆうしゃというのは")
.db NEWLINE
.db ENCODE("アルムのことなの,おじいさま")
.db $E6

L03A9DC:
.db $F0
.db ENCODE("え")
.db SPEAK
.db ENCODE("まあ いってみるがよい")
.db $EF

L03A9EC:
.db $E8 $50 $40 $01 $F0 $01
.db SPEAK
.db ENCODE("?··· きみは···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("セ··セリカ? セリカなの!")
.db $E6
.db $E8 $50 $40 $02 $F0 $02
.db SPEAK
.db ENCODE("アルム··")
.db NEWLINE
.db ENCODE("やっぱりアルムだったのね")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("よかった.あいたかった···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わたしが むらをでてから")
.db NEWLINE
.db ENCODE("もう ずいぶんもあってないもの··")
.db $E6
.db $F0
.db ENCODE("い")
.db SPEAK
.db ENCODE("そうだよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おれたち ちいさいころから")
.db NEWLINE
.db ENCODE("きょうだいみたいに そだって")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("いつも ふたりであそんでいたのに")
.db NEWLINE
.db ENCODE("セリカ,とつぜんいなくなるんだもの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("あのときは おれ···")
.db NEWLINE
.db ENCODE("ほんきで じいちゃんをうらんだよ")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("わたしだって かなしかった")
.db NEWLINE
.db ENCODE("でも しかたなかったの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おじいさまは わたしにいったわ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このまま ラムのむらにいたら")
.db NEWLINE
.db ENCODE("ドゼーが むらをおそってくる")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("そしたら わたしは つかまって")
.db NEWLINE
.db ENCODE("ころされてしまうって···")
.db $E6
.db $F0
.db ENCODE("い")
.db SPEAK
.db ENCODE("なぜ? ")
.db NEWLINE
.db ENCODE("なぜドゼーは セリカを")
.db NEWLINE
.db ENCODE("ころそうとするんだ")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("それは···")
.db NEWLINE
.db ENCODE("ごめんね.いまは いいたくない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それよりも アルム")
.db NEWLINE
.db ENCODE("おねがいが あるの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("リゲルおうこくとの せんそう")
.db NEWLINE
.db ENCODE("なんとか とめられないの")
.db $E6
.db $F0
.db ENCODE("い")
.db SPEAK
.db ENCODE("それは むりだよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("リゲルの ルドルフこうていは")
.db NEWLINE
.db ENCODE("ソフィアがないらんで")
.db NEWLINE
.db ENCODE("よわっている すきをついて")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("しんりゃくをはじめたんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このままでは ソフィアおうこくは")
.db NEWLINE
.db ENCODE("ほろびてしまう")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("でも リゲルもソフィアも")
.db NEWLINE
.db ENCODE("もとはおなじ バレンシアの")
.db NEWLINE
.db ENCODE("にんげんでしょ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("くになんか なくっても")
.db NEWLINE
.db ENCODE("しあわせに くらせるはずだわ")
.db $E6
.db $F0
.db ENCODE("い")
.db SPEAK
.db ENCODE("だめだよ.やばんなリゲルのもとでは")
.db NEWLINE
.db ENCODE("ソフィアのたみは いきてゆけない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("リゲルが ドゼーにてをかし")
.db NEWLINE
.db ENCODE("ソフィアのだいちを おかすいじょう")
.db NEWLINE
.db ENCODE("ぼくらは たたかうしかないんだ")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("そう かなしいものね···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わたしには ルドルフこうていが")
.db NEWLINE
.db ENCODE("みんながいうほど そんなに")
.db NEWLINE
.db ENCODE("あくにんとはおもえない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("はなしあえば きっとわかるのに··")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それともアルムは みんなから")
.db NEWLINE
.db ENCODE("えいゆうに まつりあげられて")
.db NEWLINE
.db ENCODE("こくおうにでも なりたいの")
.db $E6
.db $F0
.db ENCODE("い")
.db SPEAK
.db ENCODE("そんな!")
.db NEWLINE
.db ENCODE("ひどいよ,セリカ")
.db NEWLINE
.db ENCODE("ぼくには そんなやしんはない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ぼくはただ ソフィアのひとたちを")
.db NEWLINE
.db ENCODE("まもってあげたいだけなんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それに ソフィアおうけには")
.db NEWLINE
.db ENCODE("ひとりだけ おうじょがいきのこって")
.db NEWLINE
.db ENCODE("いるらしいから さがしだすつもりさ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("その おうじょさまが みつかれば")
.db NEWLINE
.db ENCODE("ぼくはいつだって むらにかえるよ")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("ソフィアに おうじょなんかいないわ")
.db NEWLINE
.db ENCODE("もう おうけは ほろびたのよ!")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("もういい.わかったわアルム")
.db NEWLINE
.db ENCODE("あなたは リゲルにいけばいい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わたしは なかまたちと")
.db NEWLINE
.db ENCODE("ミラしんでんに ゆきます")
.db $EF

L03AE56:
.db $E8 $50 $40 $01 $F0 $01
.db SPEAK
.db ENCODE("セリカ!?")
.db $E6
.db $E8 $50 $40 $02 $F0 $02
.db SPEAK
.db ENCODE("さよなら,アルム····")
.db $EF

L03AE77:
.db SPEAK
.db ENCODE("あんたたち うみのほこらへは")
.db NEWLINE
.db ENCODE("ちかづいたら ダメよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("あの こじまには")
.db NEWLINE
.db ENCODE("おそろしい ドラゴンゾンビが")
.db NEWLINE
.db ENCODE("すみついていて")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ちかづくものを")
.db NEWLINE
.db ENCODE("ひとのみに してしまうからね")
.db $EF

L03AED4:
.db $E8 $50 $40 $1B $F0 $1B
.db SPEAK
.db ENCODE("うるせーな")
.db NEWLINE
.db ENCODE("さけをのんでるじゃまを")
.db NEWLINE
.db ENCODE("するんじゃねーよ!")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("はっはっはっ")
.db NEWLINE
.db ENCODE("バカいっちゃ いけねーぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえたちだけで")
.db NEWLINE
.db ENCODE("うみをわたれるはずが")
.db NEWLINE
.db ENCODE("ないだろ")
.db $E6
.db $E8 $50 $40 $02 $F0 $02
.db SPEAK
.db ENCODE("だから おねがいしたいの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("あなた ようへいでしょ")
.db NEWLINE
.db ENCODE("わたしたちを まもって")
.db NEWLINE
.db ENCODE("くれませんか")
.db $E6
.db $F0
.db ENCODE("ひ")
.db SPEAK
.db ENCODE("なに?")
.db NEWLINE
.db ENCODE("おれを やといたいっていうのか")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ふむ··")
.db NEWLINE
.db ENCODE("それも おもしろいかもしれんな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("よし いいだろう")
.db NEWLINE
.db ENCODE("いっしょに いってやろう")
.db $EF

L03AFAC:
.db $E8 $50 $40 $14 $F0 $14
.db SPEAK
.db ENCODE("あれ みんないっしょに")
.db NEWLINE
.db ENCODE("どこへいくんだ?")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("なに?")
.db NEWLINE
.db ENCODE("ついに ソフィアじょうに")
.db NEWLINE
.db ENCODE("しんげきするのか")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それなら おれもゆく")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアかいほうを")
.db NEWLINE
.db ENCODE("めざして がんばろうぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("しかし ドゼーのぶたいは")
.db NEWLINE
.db ENCODE("きょうりょくだからな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("とくに しんえいたいちょうの")
.db NEWLINE
.db ENCODE("スレイダーには きをつけないと")
.db NEWLINE
.db ENCODE("きけんだよ")
.db $EF

L03B053:
.db SPEAK
.db ENCODE("ひがしのさばくは とうぞくのおう")
.db NEWLINE
.db ENCODE("ギースが しはいしています")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアをあらしまわっている")
.db NEWLINE
.db ENCODE("さんぞくやかいぞくは すべて")
.db NEWLINE
.db ENCODE("ギースのぶかなのです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このむらも なんどもおそわれて")
.db NEWLINE
.db ENCODE("すっかり さびれてしまいました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わかいものは みんなつれさられ")
.db NEWLINE
.db ENCODE("どれいとして はたらかされている")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ああ,わたしたちは いったい")
.db NEWLINE
.db ENCODE("どうすれば いいのでしょう")
.db $EF

L03B10F:
.db SPEAK
.db ENCODE("きたにある ほこらのいどは")
.db NEWLINE
.db ENCODE("しんだものを いきかえらすことが")
.db NEWLINE
.db ENCODE("できるという うわさです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("しかし ドラゴンがすみついていて")
.db NEWLINE
.db ENCODE("ちかづくものを くいころすとも")
.db NEWLINE
.db ENCODE("いわれています")
.db $EF

L03B16F:
.db $E8 $50 $40 $16 $F0 $16
.db SPEAK
.db ENCODE("あんたら ギースを")
.db NEWLINE
.db ENCODE("やっつけにゆくのか")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("もしそうなら")
.db NEWLINE
.db ENCODE("おれも てつだわせてくれ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おれの おとうとやいもうとも")
.db NEWLINE
.db ENCODE("みんな ギースにつかまって")
.db NEWLINE
.db ENCODE("ゆくえが わからない···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("くそ! ギースのやろう")
.db NEWLINE
.db ENCODE("おれのこのてで")
.db NEWLINE
.db ENCODE("たたきころしてやる!!")
.db $EF

L03B1F2:
.db $E8 $50 $40 $17 $F0 $17
.db SPEAK
.db ENCODE("やぁ,ありがとよ")
.db NEWLINE
.db ENCODE("たすかったぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おれはジェシーっていう")
.db NEWLINE
.db ENCODE("ケチな ようへいさ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ギースのとりでにつかまっていた")
.db NEWLINE
.db ENCODE("おんなのこを たすけようとして")
.db NEWLINE
.db ENCODE("つかまっちまったんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("よそのくにからきた かわいいこで")
.db NEWLINE
.db ENCODE("ギースは どれいにするつもりだ")
.db $E6
.db $E8 $50 $40 $02 $F0 $02
.db SPEAK
.db ENCODE("きっとエストね··")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ねぇ ジェシー,なんとか")
.db NEWLINE
.db ENCODE("たすけるほうほうは ないの")
.db $E6
.db $F0
.db ENCODE("ぬ")
.db SPEAK
.db ENCODE("ムリだよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ギースのぶかには すごいやつが")
.db NEWLINE
.db ENCODE("いっぱいいる")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おれたちだけじゃ とてもむりさ")
.db $E6
.db $F0
.db ENCODE("う")
.db SPEAK
.db ENCODE("でも,なにかほうほうが···")
.db $E6
.db $F0
.db ENCODE("ぬ")
.db SPEAK
.db ENCODE("うーんそうだな···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ギースには")
.db NEWLINE
.db ENCODE("ソニアとディーンという")
.db NEWLINE
.db ENCODE("ふたりのぶかが いるんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それぞれ ぶたいをひきいて")
.db NEWLINE
.db ENCODE("さばくの きたとみなみを")
.db NEWLINE
.db ENCODE("まもっている")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ところが かれらはふたりとも")
.db NEWLINE
.db ENCODE("ギースを きらっているらしい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だが おたがいに けんせいしあって")
.db NEWLINE
.db ENCODE("うらぎることが できないらしいんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だから うまくどちらかをたおせば")
.db NEWLINE
.db ENCODE("のこったほうは みかたになるかも")
.db NEWLINE
.db ENCODE("しれないぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ああ,もちろんおれも てをかすぜ")
.db $EF

L03B3DA:
.db $E8 $50 $40 $1A $F0 $1A
.db SPEAK
.db ENCODE("なに ギースを やったのか")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("まあ あれだけ わるさをすれば")
.db NEWLINE
.db ENCODE("いずれむくいがくると おもっていた")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("うむ···")
.db NEWLINE
.db ENCODE("まあ,おまえたちには")
.db NEWLINE
.db ENCODE("かりができたからな")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("よかろう,ちからをかしてやろう")
.db $EF

L03B446:
.db $E8 $50 $40 $19 $F0 $19
.db SPEAK
.db ENCODE("なに ギースを やったのかい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("まあ あれだけ わるさをすれば")
.db NEWLINE
.db ENCODE("いずれむくいがくるだろうよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("うむ···")
.db NEWLINE
.db ENCODE("まあ,おまえたちには")
.db NEWLINE
.db ENCODE("かりができたからね")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わかった")
.db NEWLINE
.db ENCODE("ちからをかしてやるよ")
.db $EF

L03B4B0:
.db $E8 $50 $40 $21 $F0 $21
.db SPEAK
.db ENCODE("あ·· あなたたちは··")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("えっ ねえさまたちが")
.db NEWLINE
.db ENCODE("きているの!")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わー よかった")
.db NEWLINE
.db ENCODE("それならわたしも あなたたちと")
.db NEWLINE
.db ENCODE("いっしょに ゆきます")
.db $EF

L03B4FC:
.db $E8 $50 $40 $20 $F0 $20
.db SPEAK
.db ENCODE("よかった")
.db NEWLINE
.db ENCODE("あなたをさがしていたの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("わたしたち ここでまってても")
.db NEWLINE
.db ENCODE("しかたないし あなたたちと")
.db NEWLINE
.db ENCODE("いっしょに ゆきます")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("あなたのたびも たいへんな")
.db NEWLINE
.db ENCODE("ようだし わたしたちだって")
.db NEWLINE
.db ENCODE("ちからになれるとおもうわ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ね セリカ")
.db NEWLINE
.db ENCODE("いっしょに ゆきましょう")
.db $EF

L03B580:
.db $E8 $50 $40 $1F $F0 $1F
.db SPEAK
.db ENCODE("ああ")
.db NEWLINE
.db ENCODE("エストが はやくみつかれば")
.db NEWLINE
.db ENCODE("いいのになぁ···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("これは ないしょだけど")
.db NEWLINE
.db ENCODE("わたしたち 3にんそろえば")
.db NEWLINE
.db ENCODE("すごいわざが つかえるのよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("あれ? なんでしってるの?")
.db $EF

L03B5E3:
.db SPEAK
.db ENCODE("とつぜん リゲルぐんが")
.db NEWLINE
.db ENCODE("おそってきたのです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だいちぼしんミラは リゲルの")
.db NEWLINE
.db ENCODE("ルドルフこうていによって")
.db NEWLINE
.db ENCODE("ふういんされてしまいました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だから だいちは あれはてて")
.db NEWLINE
.db ENCODE("さくもつは みのらなくなったの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ああ!")
.db NEWLINE
.db ENCODE("このままでは ソフィアのたみは")
.db NEWLINE
.db ENCODE("みんなうえて しんでしまう···")
.db $EF

L03B678:
.db SPEAK
.db ENCODE("このしんでんから きたは")
.db NEWLINE
.db ENCODE("だいきとうしの ドルクが")
.db NEWLINE
.db ENCODE("しはいしているの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ちかづけば あのおとこが")
.db NEWLINE
.db ENCODE("やみからよびよせる しりゅうに")
.db NEWLINE
.db ENCODE("くいころされてしまいます")
.db $EF

L03B6CF:
.db SPEAK
.db ENCODE("ああ")
.db NEWLINE
.db ENCODE("わしは このすいもんの")
.db NEWLINE
.db ENCODE("ばんにんじゃが··")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("なに すいもんを ひらけだと?")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だめだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("このすいもんを ひらけるのは")
.db NEWLINE
.db ENCODE("ソフィアおうけの ものだけじゃ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえなどの いうことは")
.db NEWLINE
.db ENCODE("きけぬぞ!!")
.db $EF

L03B73E:
.db SPEAK
.db ENCODE("ん? まてよ···")
.db NEWLINE
.db ENCODE("あんたの そのかみかざりは!")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("な,なんと···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おお それはまさしく")
.db NEWLINE
.db ENCODE("ソフィアおうけの もんしょう")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("では あなたが")
.db NEWLINE
.db ENCODE("ゆくえしれずだった")
.db NEWLINE
.db ENCODE("アンテーゼおうじょさま!!")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("こ,これは しつれいしました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ただいま すいもんを")
.db NEWLINE
.db ENCODE("あけまする")
.db $EF

L03B7C8:
.db SPEAK
.db ENCODE("しかし おうじょさま")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ここのすいもんを あけただけでは")
.db NEWLINE
.db ENCODE("だめなのです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("みずを ひくためには")
.db NEWLINE
.db ENCODE("にしの すいもんも どうじに")
.db NEWLINE
.db ENCODE("ひらかなければ なりません")
.db $EF

L03B81F:
.db SPEAK
.db ENCODE("おお ジークさま···")
.db $EF

L03B82D:
.db ENCODE("みぎ せいなるたて")
.db NEWLINE
.db ENCODE("ひだり ぎんのたて")
.db NEWLINE
.db NEWLINE
.db ENCODE("どちらを のぞむか?")
.db $EF

L03B852:
.db SPEAK
.db ENCODE("どうも ありがとうございました")
.db $EF

L03B867:
.db SPEAK
.db ENCODE("えへ たすけてくれて")
.db NEWLINE
.db ENCODE("ありがとう")
.db $EF

L03B87A:
.db SPEAK
.db ENCODE("ミラをふうじた つるぎは")
.db NEWLINE
.db ENCODE("じゃしんドーマが")
.db NEWLINE
.db ENCODE("ルドルフに あたえたもの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ドーマのとうにいけば")
.db NEWLINE
.db ENCODE("ミラさまを すくうことが")
.db NEWLINE
.db ENCODE("できるかもしれません")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だけど わたしたちには")
.db NEWLINE
.db ENCODE("あのおそろしい ぬまやもりを")
.db NEWLINE
.db ENCODE("ぬけることなど とてもむりです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("とくに どくぬまはおそろしい")
.db NEWLINE
.db ENCODE("まちがってはいると かくじつに")
.db NEWLINE
.db ENCODE("ちからが うばわれてゆきます")
.db $EF

L03B930:
.db SPEAK
.db ENCODE("バレンシアのたにに みずが")
.db NEWLINE
.db ENCODE("あるかぎり しんでんから")
.db NEWLINE
.db ENCODE("きたにでることは かないません")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("にしの すいもんを")
.db NEWLINE
.db ENCODE("ひらかなければ")
.db NEWLINE
.db ENCODE("みずは ひいてはくれないのです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("よびの すいもんなら")
.db NEWLINE
.db ENCODE("このしんでんのちかに")
.db NEWLINE
.db ENCODE("あるのですが···")
.db $EF

L03B9AD:
.db SPEAK
.db ENCODE("ミラさまが ふういんされたあと")
.db NEWLINE
.db ENCODE("ここも たびたび ギースの")
.db NEWLINE
.db ENCODE("とうぞくたちに おそわれました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("いまも ギースのとりでには")
.db NEWLINE
.db ENCODE("わたしたちの なかまが")
.db NEWLINE
.db ENCODE("とらわれているはずです")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おねがいです")
.db NEWLINE
.db ENCODE("どうか とらわれたひとたちを")
.db NEWLINE
.db ENCODE("たすけてください")
.db $EF

L03BA31:
.db SPEAK
.db ENCODE("あなたたちのおかげで")
.db NEWLINE
.db ENCODE("ぶじに もどることが")
.db NEWLINE
.db ENCODE("できました")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("きたに いかれるなら")
.db NEWLINE
.db ENCODE("まよいのもりにあるという")
.db NEWLINE
.db ENCODE("けんじゃのさとを おとずれなさい")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だいけんじゃのハルクさまなら")
.db NEWLINE
.db ENCODE("なにか ちからになって")
.db NEWLINE
.db ENCODE("くださるはずです")
.db $EF

L03BAAB:
.db SPEAK
.db ENCODE("このむらを おとしたぐらいで")
.db NEWLINE
.db ENCODE("いいきになるなよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("おまえたちに あの のろわれた")
.db NEWLINE
.db ENCODE("りゅうのやまが こせるものか")
.db $EF

L03BAE7:
.db SPEAK
.db ENCODE("ルドルフこうていは えいゆうさ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ソフィアの ブタどもに")
.db NEWLINE
.db ENCODE("こうていのよさが わかってたまるか")
.db $EF

L03BB1B:
.db SPEAK
.db ENCODE("わたしのむすめが")
.db NEWLINE
.db ENCODE("ガーゴイルにさらわれて")
.db NEWLINE
.db ENCODE("にしのほこらに つれていかれた")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("たすけてくれれば")
.db NEWLINE
.db ENCODE("わしのたからものを あげます")
.db $EF

L03BB5F:
.db $E8 $50 $40 $1C $F0 $1C
.db SPEAK
.db ENCODE("たのむ")
.db NEWLINE
.db ENCODE("いもうとを たすけてくれ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("いもうとはようじゅつしのタタラに")
.db NEWLINE
.db ENCODE("あやつられて リゲルのすいもんを")
.db NEWLINE
.db ENCODE("まもっているのだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("タタラさえ たおせば デューテの")
.db NEWLINE
.db ENCODE("まほうは とけるはずなのだが")
.db NEWLINE
.db ENCODE("どうすればいいのか わからない")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("たのむ いっしょに")
.db NEWLINE
.db ENCODE("たすけにいってくれ!!!")
.db $EF

L03BBF6:
.db SPEAK
.db ENCODE("このさきは りゅうのやまだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("しりゅうに おそわれて")
.db NEWLINE
.db ENCODE("あんたら くわれちまうぜ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("もうすこし")
.db NEWLINE
.db ENCODE("ようすをみたほうが")
.db NEWLINE
.db ENCODE("いいんじゃないかな···")
.db $EF

L03BC41:
.db SPEAK
.db ENCODE("ドゼーのとりでには")
.db NEWLINE
.db ENCODE("かいほうぐんの へいしが")
.db NEWLINE
.db ENCODE("とらわれているんだ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("しかし ちかいうちに")
.db NEWLINE
.db ENCODE("しょけいされるって")
.db NEWLINE
.db ENCODE("うわさがある")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("はやくたすけてやらないと")
.db NEWLINE
.db ENCODE("あぶないぜ")
.db $EF

L03BC9D:
.db $E8 $50 $40 $13 $F0 $13
.db SPEAK
.db ENCODE("ありがとう")
.db NEWLINE
.db ENCODE("きっと たすけにきてくれると")
.db NEWLINE
.db ENCODE("しんじていました")
.db $EF

L03BCC4:
.db SPEAK
.db ENCODE("ミラのしんでんに いくんだって?")
.db NEWLINE
.db ENCODE("それは やめたほうがいいよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("あのへんは ギースのとうぞくが")
.db NEWLINE
.db ENCODE("うようよしてるし")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("それに がけくずれが おこって")
.db NEWLINE
.db ENCODE("みちが ふさがれるって")
.db NEWLINE
.db ENCODE("うわさも あるからね")
.db $EF

L03BD31:
.db SPEAK
.db ENCODE("ドゼーは いなくなったけど")
.db NEWLINE
.db ENCODE("さくもつは みのらないし")
.db NEWLINE
.db ENCODE("へんなばけものは でるし···")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("だいちぼしんミラは いったい")
.db NEWLINE
.db ENCODE("どうなってしまったんでしょう")
.db $EF

L03BD85:
.db $E8 $50 $40 $1D $F0 $1D
.db SPEAK
.db ENCODE("わたし よくわからないの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("きがついたら たたかいのなかにいて")
.db NEWLINE
.db ENCODE("こわくなって にげてきたの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("え,わたし タタラに")
.db NEWLINE
.db ENCODE("あやつられていたの")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("そうだったの···")
.db NEWLINE
.db ENCODE("めいわくを かけたのですね")
.db NEWLINE
.db ENCODE("ごめんなさい")
.db $EF

L03BDF5:
.db SPEAK
.db ENCODE("わーん.こわかったよー")
.db $EF

L03BE02:
.db SPEAK
.db ENCODE("ばんざーい")
.db NEWLINE
.db ENCODE("ソフィアじょうが")
.db NEWLINE
.db ENCODE("かいほうされたぞ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("ドゼーしょうぐんが")
.db NEWLINE
.db ENCODE("じぶんの りょうちに")
.db NEWLINE
.db ENCODE("にげていったぞー")
.db $EF

L03BE47:
.db SPEAK
.db ENCODE("うれしいけどさ··")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("でも しんぱいだなぁ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("リゲルおうこくが")
.db NEWLINE
.db ENCODE("せめこんできたら おれたちきっと")
.db NEWLINE
.db ENCODE("みなごろしにされちまうぜ")
.db $EF

L03BE8F:
.db SPEAK
.db ENCODE("ソフィアに えいゆうが")
.db NEWLINE
.db ENCODE("あらわれたのよ")
.db WAIT_CLICK
.db SPEAK
.db ENCODE("これで このくにも")
.db NEWLINE
.db ENCODE("やっと すくわれるわ")
.db $EF

.db $8D
.db $11
.db $2A
.db $6D
.db $02
.db $80
.db $00
.db $90
.db $02
.db $02
.db $30
.db $08
.db $99
.db $10
.db $15
.db $04
.db $44
.db $80
.db $66
.db $84
.db $00
.db $00
.db $41
.db $01
.db $E4
.db $12
.db $80
.db $00
.db $0E
.db $00
.db $00
.db $44
.db $80
.db $04
.db $05
.db $00
.db $04
.db $00
.db $20
.db $00
.db $00
.db $32
.db $10
.db $0C
.db $12
.db $83
.db $A9
.db $03
.db $30
.db $92
.db $EC
.db $7A
.db $01
.db $05
.db $C0
.db $02
.db $00
.db $00
.db $00
.db $40
.db $B4
.db $23
.db $18
.db $81
.db $40
.db $87
.db $0D
.db $05
.db $00
.db $0A
.db $00
.db $00
.db $20
.db $20
.db $00
.db $00
.db $36
.db $10
.db $D4
.db $70
.db $00
.db $A2
.db $D8
.db $D5
.db $0D
.db $00
.db $18
.db $38
.db $11
.db $11
.db $C2
.db $70
.db $DE
.db $0D
.db $C5
.db $94
.db $01
.db $42
.db $41
.db $00
.db $00
.db $20
.db $80
.db $00
.db $30
.db $20
.db $04
.db $04
.db $8F
.db $86
.db $71
.db $19
.db $00
.db $3D
.db $2B
.db $C5
.db $00
.db $00
.db $00
.db $18
.db $02
.db $23
.db $01
.db $20
.db $12
.db $80
.db $58
.db $70
.db $11
.db $55
.db $10
.db $01
.db $88
.db $06
.db $42
.db $80
.db $00
.db $80
.db $00
.db $00
.db $40
.db $E9
.db $DC
.db $9C
.db $60
.db $F8
.db $41
.db $B3
.db $00
.db $00
.db $00
.db $80
.db $04
.db $02
.db $11
.db $01
.db $30
.db $31
.db $C0
.db $00
.db $60
.db $04
.db $58
.db $4A
.db $00
.db $00
.db $01
.db $08
.db $20
.db $E0
.db $50
.db $00
.db $05
.db $12
.db $4A
.db $6E
.db $98
.db $86
.db $33
.db $30
.db $60
.db $10
.db $00
.db $08
.db $00
.db $40
.db $01
.db $20
.db $58
.db $11
.db $51
.db $F6
.db $0C
.db $75
.db $88
.db $05
.db $00
.db $00
.db $20
.db $08
.db $00
.db $20
.db $10
.db $22
.db $6E
.db $14
.db $44
.db $D5
.db $40
.db $BA
.db $50
.db $70
.db $10
.db $60
.db $40
.db $20
.db $00
.db $00
.db $48
.db $0A
.db $B0
.db $AC
.db $44
.db $90
.db $EE
.db $3A
.db $38
.db $02
.db $26
.db $80
.db $A2
.db $83
.db $67
.db $92
.db $96
.db $94
.db $6A
.db $95
.db $0C
.db $04
.db $41
.db $20
.db $FA
.db $B0
.db $00
.db $C0
.db $22
.db $20
.db $00
.db $40
.db $02
.db $00
.db $10
.db $44
.db $C8
.db $48
.db $00
.db $08
.db $80
.db $72
.db $00
.db $83
.db $20
.db $E0
.db $01
.db $00
.db $40
.db $00
.db $4A
.db $04
.db $21
.db $A8
.db $7C
.db $12
.db $AA
.db $EC
.db $40
.db $5A
.db $34
.db $C0
.db $00
.db $08
.db $00
.db $00
.db $74
.db $01
.db $04
.db $49
.db $C1
.db $4B
.db $14
.db $08
.db $D8
.db $96
.db $00
.db $08
.db $08
.db $20
.db $00
.db $00
.db $44
.db $E5
.db $43
.db $46
.db $E0
.db $45
.db $6F
.db $80
.db $02
.db $8C
.db $00
.db $20
.db $04
.db $0C
.db $08
.db $00
.db $21
.db $74
.db $1C
.db $01
.db $19
.db $40
.db $10
.db $06

.ENDS
