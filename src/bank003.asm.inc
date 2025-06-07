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
FACE MYCEN
NAME MYCEN
SPEAK
ENCODE("アルム ひとやすみしよう")
WAIT_CLICK
SPEAK
ENCODE("けんのしゅぎょうは おわりだ")
NEWLINE
ENCODE("もう あそびにいってもいいぞ")
WAIT_CLICK
SPEAK
ENCODE("だが むらのそとへは ゆくな")
WAIT_CLICK
SPEAK
ENCODE("さいきんは このへんにも")
NEWLINE
ENCODE("さんぞくが うろついてるからな")
STOP

L0397D9:
SPEAK
ENCODE("やあ アルム")
NEWLINE
ENCODE("いいところにきたな")
WAIT_CLICK
SPEAK
ENCODE("おまえも このひとのはなしをきけよ")
STOP

L0397FE:
FACE LUKAS
NAME LUKAS
SPEAK
ENCODE("あの あくめいたかい")
NEWLINE
ENCODE("ドゼーしょうぐんが ついに")
NEWLINE
ENCODE("クーデターを おこしたのです")
WAIT_CLICK
SPEAK
ENCODE("ソフィアのしろは ドゼーぐんに")
NEWLINE
ENCODE("せんりょうされ こくおうも")
NEWLINE
ENCODE("ころされてしまいました")
WAIT_CLICK
SPEAK
ENCODE("ドゼーは ざんぎゃくなおとこで")
NEWLINE
ENCODE("まいにち おおくのひとたちが")
NEWLINE
ENCODE("ひどいめに あっている")
WAIT_CLICK
SPEAK
ENCODE("ぼくたちは かいほうぐんをつくって")
NEWLINE
ENCODE("ドゼーと たたかっているのですが")
NEWLINE
ENCODE("ざんねんながら うまくいきません")
WAIT_CLICK
SPEAK
ENCODE("それで マイセンしょうぐんの")
NEWLINE
ENCODE("おちからを かりに きたのです")
STOP

L0398F4:
SPEAK
ENCODE("へぇー おまえのじいちゃんって")
NEWLINE
ENCODE("むかしは しょうぐんだったのか")
STOP

L039918:
SPEAK
ENCODE("なあ アルム")
NEWLINE
ENCODE("くにの みんなが こまってるんだ")
NEWLINE
ENCODE("みんなで たすけにいこうぜ")
STOP

L039943:
SPEAK
ENCODE("おれたちは ここでまってるから")
NEWLINE
ENCODE("じいちゃんに たのんでみろよ")
STOP

L039966:
FACE MYCEN
NAME MYCEN
SPEAK
ENCODE("なに かいほうぐんにはいるだと!")
WAIT_CLICK
SPEAK
ENCODE("だめだ.ゆるさん!!")
WAIT_CLICK

L03998E:
SPEAK
ENCODE("おまえは たたかってはならぬ")
NEWLINE
ENCODE("かなしいおもいを するだけだ")
STOP

L0399AF:
FACE LUKAS
NAME LUKAS
SPEAK
ENCODE("だめでしたか··ざんねんです")
WAIT_CLICK
SPEAK
ENCODE("マイセンどのも としをとられて")
NEWLINE
ENCODE("おくびょうに なられたのですね")
WAIT_CLICK
SPEAK
ENCODE("かつては ソフィアいちの")
NEWLINE
ENCODE("ゆうしゃとして こくみんから")
NEWLINE
ENCODE("そんけいされていたのに···")
PAGE
FACE ALM
NAME ALM
SPEAK
ENCODE("まって じいちゃんのかわりに")
NEWLINE
ENCODE("ぼくが かいほうぐんにはいるよ")
PAGE
NAME LUKAS
SPEAK
ENCODE("えっ! ")
NEWLINE
ENCODE("きみが マイセンしょうぐんの")
NEWLINE
ENCODE("かわりに きてくれるのか")
WAIT_CLICK

L039A69:
SPEAK
ENCODE("ありがとう.なかまたちも")
NEWLINE
ENCODE("きっと よろこぶよ")
WAIT_CLICK
SPEAK
ENCODE("じゃあ ぼくといっしょに")
NEWLINE
ENCODE("かいほうぐんのアジトまでいこう")
STOP

L039AA6:
FACE GRAY
NAME GRAY
SPEAK
ENCODE("アルム ぼくもゆくよ")
WAIT_CLICK
SPEAK
ENCODE("このラムのむらだって")
NEWLINE
ENCODE("いつかは おそわれるはずだろ")
WAIT_CLICK
SPEAK
ENCODE("それなら さきに")
NEWLINE
ENCODE("そのドゼーとかいうやつを")
NEWLINE
ENCODE("やっつけちまおうぜ")
STOP

L039AFB:
FACE TOBIN
NAME TOBIN
SPEAK
ENCODE("アルムは おれたちのリーダーだろ")
NEWLINE
ENCODE("もちろん ひとりでゆかせないぜ")
WAIT_CLICK
SPEAK
ENCODE("いっしょに ソフィアのしろを")
NEWLINE
ENCODE("とりもどそう")
STOP

L039B3F:
FACE KLIFF
NAME KLIFF
SPEAK
ENCODE("おれ!?·· どうしょうかな··")
WAIT_CLICK
SPEAK
ENCODE("まぁいいや,いっしょにゆくよ")
WAIT_CLICK
SPEAK
ENCODE("だけど あぶなくなったら")
NEWLINE
ENCODE("たすけてくれよ")
WAIT_CLICK
SPEAK
ENCODE("おれたちは おまえとはちがって")
NEWLINE
ENCODE("まだ うまくたたかえないからな")
STOP

L039BA4:
FACE CLAIR
NAME CLAIR
SPEAK
ENCODE("ありがとう.たすかりました")
NEWLINE
ENCODE("わたしは ソフィアのきしクレア")
WAIT_CLICK
SPEAK
ENCODE("ドゼーのへいしに とらえられて")
NEWLINE
ENCODE("ここに とじこめられてたの")
WAIT_CLICK
SPEAK
ENCODE("かいほうぐんのリーダーの")
NEWLINE
ENCODE("クレーベは わたしのあにです")
WAIT_CLICK
SPEAK
ENCODE("わたしも アジトにかえりますから")
NEWLINE
ENCODE("いっしょに ゆきましょう")
STOP

L039C2D:
FACE PYTHON
NAME PYTHON
SPEAK
ENCODE("ここは かいほうぐんのアジトだ")
NEWLINE
ENCODE("あやしいやつは とおさないぞ")
WAIT_CLICK
SPEAK
ENCODE("えっ あたらしいなかまなのか")
NEWLINE
ENCODE("それなら おくのへやにいってくれ")
WAIT_CLICK
SPEAK
ENCODE("だけど どうくつには まものが")
NEWLINE
ENCODE("でるから きをつけろよ")
STOP

L039C9A:
FACE DUMA
NAME DUMA
SPEAK
ENCODE("ふふ ソフィアのおうじょか")
NEWLINE
ENCODE("おまえがくるのを まっていたぞ")
.db $E6
FACE CELICA
NAME CELICA
SPEAK
ENCODE("あなたは だれ!?")
.db $E6
NAME DUMA
SPEAK
ENCODE("わしか")
NEWLINE
ENCODE("わしは ドーマさまの")
NEWLINE
ENCODE("だいいちの しもべ")
WAIT_CLICK
SPEAK
ENCODE("ドーマきょうの さいしちょう")
NEWLINE
ENCODE("ジュダと いうものよ")
.db $E6
NAME CELICA
SPEAK
ENCODE("それなら おねがいです")
WAIT_CLICK
NAME CELICA
SPEAK
ENCODE("ミラさまを かいほうして!")
NEWLINE
ENCODE("だいちぼしんミラを")
NEWLINE
ENCODE("もとにもどしてください!!")
.db $E6
NAME DUMA
SPEAK
ENCODE("ふふふ···")
NEWLINE
ENCODE("まあ そうあわてるな")
WAIT_CLICK
SPEAK
ENCODE("わしのもつ この たまをみてみろ")
NEWLINE
ENCODE("どうじゃ なつかしいすがたが")
NEWLINE
ENCODE("みえるじゃろう")
WAIT_CLICK
SPEAK
ENCODE("そうじゃよ アルムだ")
WAIT_CLICK
SPEAK
ENCODE("やつのもがきくるしむすがたを")
NEWLINE
ENCODE("しばらく ながめているのじゃな")
STOP

L039DC5:
FACE FORSYTH
NAME FORSYTH
SPEAK
ENCODE("ドゼーは きたのたいこくリゲルに")
NEWLINE
ENCODE("えんじょを たのんだそうだ")
WAIT_CLICK
SPEAK
ENCODE("リゲルのきしだんのつよさは")
NEWLINE
ENCODE("ソフィアとは ひかくにならない")
WAIT_CLICK
SPEAK
ENCODE("もし リゲルおうこくが うごけば")
NEWLINE
ENCODE("おれたちに かちめはないぜ")
.db $E6
FACE ALM
NAME ALM
SPEAK
ENCODE("でも ソフィアとリゲルは")
NEWLINE
ENCODE("[かみがみのめいやく]によって")
NEWLINE
ENCODE("たたかえないはずだろ")
WAIT_CLICK
SPEAK
ENCODE("ソフィアのしゅごしんである")
NEWLINE
ENCODE("ミラさまが そんなこと")
NEWLINE
ENCODE("ゆるされないはずだ")
.db $E6
NAME FORSYTH
SPEAK
ENCODE("ところがさ··· うわさじゃ")
NEWLINE
ENCODE("そのミラさまが きえたらしい")
WAIT_CLICK
SPEAK
ENCODE("おいおい そんなにおどろくなよ")
NEWLINE
ENCODE("だって さいきん なんかへんだろ")
WAIT_CLICK
SPEAK
ENCODE("このところ さくもつはみのらないし")
NEWLINE
ENCODE("へんな まものばかりが でてくる")
WAIT_CLICK
SPEAK
ENCODE("だいちをまもる ミラさまのちからが")
NEWLINE
ENCODE("おとろえたとしか かんがえられないよ")
WAIT_CLICK
SPEAK
ENCODE("まあ このうわさが ほんとかどうか")
NEWLINE
ENCODE("ミラのしんでんにいけば わかるさ")
STOP

L039F56:
FACE CLIVE_B
NAME CLIVE_B
SPEAK
ENCODE("やあ きみがアルムか")
NEWLINE
ENCODE("いもうとが おせわになったね")
WAIT_CLICK
SPEAK
ENCODE("さすがは マイセンしょうぐんの")
NEWLINE
ENCODE("まごだけあって ゆうかんだな")
WAIT_CLICK
SPEAK
ENCODE("なあ アルム.たのみがあるんだ")
WAIT_CLICK
SPEAK
ENCODE("きょうからは きみが ぼくたちの")
NEWLINE
ENCODE("リーダーになってくれないだろうか")
WAIT_CLICK
SPEAK
ENCODE("ソフィアのおうけが ほろんだいま")
NEWLINE
ENCODE("ぼくたちには たよるものがない")
WAIT_CLICK
SPEAK
ENCODE("だから ソフィアおうこくの")
NEWLINE
ENCODE("えいゆうだった マイセンどのに")
WAIT_CLICK
SPEAK
ENCODE("われらの おうになってほしいと")
NEWLINE
ENCODE("おねがいしたのだ")
WAIT_CLICK
SPEAK
ENCODE("だけど しょうぐんは なぜか")
NEWLINE
ENCODE("たちあがろうとは なさらない")
WAIT_CLICK
SPEAK
ENCODE("だから かわりに きみが")
NEWLINE
ENCODE("かいほうぐんを ひきいてほしい")
WAIT_CLICK
SPEAK
ENCODE("マイセンどのの ちをひくものが")
NEWLINE
ENCODE("かいほうぐんのリーダーになれば")
WAIT_CLICK
SPEAK
ENCODE("われわれは おもうぞんぶん")
NEWLINE
ENCODE("たたかうことができるんだ")
WAIT_CLICK
SPEAK
ENCODE("なっアルム.たのむよ")
NEWLINE
ENCODE("どうかソフィアを すくってくれ")
STOP

L03A0E5:
FACE MYCEN
NAME MYCEN
SPEAK
ENCODE("アルム,きたか···")
.db $E6
FACE ALM
NAME ALM
SPEAK
ENCODE("あっ じいちゃん!!")
NEWLINE
ENCODE("どうして ソフィアのしろに?")
.db $E6
SPEAK
ENCODE("うんめいとは ざんこくなもの")
NEWLINE
ENCODE("わしが どうあがいても")
NEWLINE
ENCODE("さだめは かえられぬ")
WAIT_CLICK
SPEAK
ENCODE("ならば アルムよ")
NEWLINE
ENCODE("おまえは おまえのしんじる")
NEWLINE
ENCODE("みちをゆくがよい")
WAIT_CLICK
SPEAK
ENCODE("このバレンシアを のろわれた")
NEWLINE
ENCODE("うんめいから ときはなつこと")
WAIT_CLICK
SPEAK
ENCODE("それが おまえと ···そして")
NEWLINE
ENCODE("もうすぐ このしろを おとずれる")
NEWLINE
ENCODE("あかいかみのむすめ···")
WAIT_CLICK
SPEAK
ENCODE("おまえたちふたりに あたえられた")
NEWLINE
ENCODE("うんめいなのかも しれぬな···")
STOP

L03A1DF:
FACE CELICA
NAME CELICA
SPEAK
ENCODE("それでは しさいさま")
NEWLINE
ENCODE("いってまいります")
.db $E6
FACE NOMA
NAME NOMA
SPEAK
ENCODE("セリカよ··どうしてもゆくのか")
WAIT_CLICK
SPEAK
ENCODE("ミラのしんでんまでの みちは")
NEWLINE
ENCODE("ながい")
WAIT_CLICK
SPEAK
ENCODE("ソフィアおうこくも いまや")
NEWLINE
ENCODE("ないらんで あれはてて だれも")
NEWLINE
ENCODE("たびびとを まもってはくれぬ")
WAIT_CLICK
SPEAK
ENCODE("ギースのかいぞくや まものたちが")
NEWLINE
ENCODE("しゅつぼつして おまえを")
NEWLINE
ENCODE("おそうかもしれぬぞ")
WAIT_CLICK
SPEAK
ENCODE("いくら [しんかんせんし]でも")
NEWLINE
ENCODE("おんなのおまえには きけんすぎる")
.db $E6
NAME CELICA
SPEAK
ENCODE("しかし しさいさま")
WAIT_CLICK
SPEAK
ENCODE("このだいちに みのりがなくなって")
NEWLINE
ENCODE("すでに 3ねん")
WAIT_CLICK
SPEAK
ENCODE("ひとびとは うえにくるしみ")
NEWLINE
ENCODE("この しゅうどういんにまで")
NEWLINE
ENCODE("たすけを もとめにきています")
WAIT_CLICK
SPEAK
ENCODE("だいちぼしんミラに いったい")
NEWLINE
ENCODE("なにがあったのか.わたしは")
NEWLINE
ENCODE("それを たしかめたいのです")
.db $E6
NAME NOMA
SPEAK
ENCODE("そうか···")
NEWLINE
ENCODE("そこまでいうなら やむをえまい")
NEWLINE
ENCODE("だがなセリカよ")
WAIT_CLICK
SPEAK
ENCODE("マイセンどのが おまえをわしに")
NEWLINE
ENCODE("あずけたわけを しっているな")
WAIT_CLICK
SPEAK
ENCODE("いまや ソフィアおうけの ちを")
NEWLINE
ENCODE("ひくものは おまえひとりなのだ")
WAIT_CLICK
SPEAK
ENCODE("おまえは ソフィアおうこくの")
NEWLINE
ENCODE("たみにとって さいごの きぼう")
WAIT_CLICK
SPEAK
ENCODE("けっして むりはするなよ")
STOP

L03A3D1:
FACE NOMA
NAME NOMA
SPEAK
ENCODE("もう なにもいうことはない")
WAIT_CLICK
SPEAK
ENCODE("そなたに ミラの ごかごの")
NEWLINE
ENCODE("あらんことを···")
STOP

L03A401:
FACE GENNY
NAME GENNY
SPEAK
ENCODE("セリカさまが いかれるのなら")
NEWLINE
ENCODE("わたしも まいります")
WAIT_CLICK
SPEAK
ENCODE("すこしぐらいの きずなら")
NEWLINE
ENCODE("わたしのリカバーのじゅもんで")
NEWLINE
ENCODE("なおしてあげましょう")
STOP

L03A451:
FACE BOEY
NAME BOEY
SPEAK
ENCODE("セリカさま.おんなのこばかりじゃ")
NEWLINE
ENCODE("ふあんでしょ")
WAIT_CLICK
SPEAK
ENCODE("ぼくも いっしょにいきますから")
NEWLINE
ENCODE("あんしんしてください")
STOP

L03A491:
FACE MAE
NAME MAE
SPEAK
ENCODE("ボーイなんて まだまだこどもよ")
NEWLINE
ENCODE("だって ほのおのまほうしか")
NEWLINE
ENCODE("つかえないもの")
WAIT_CLICK
SPEAK
ENCODE("セリカさま.わたしなら")
NEWLINE
ENCODE("いかづちの まほうがつかえます")
NEWLINE
ENCODE("たよりにしてくださいね")
STOP

L03A4EF:
FACE SILQUE
NAME SILQUE
SPEAK
ENCODE("わたしは シルク")
NEWLINE
ENCODE("ミラのめがみにつかえる")
NEWLINE
ENCODE("シスターです")
WAIT_CLICK
SPEAK
ENCODE("とうぞくたちに とらえられ")
NEWLINE
ENCODE("このほこらへ つれてこられたの")
WAIT_CLICK
SPEAK
ENCODE("どうかわたしを ここから")
NEWLINE
ENCODE("つれだしてください")
STOP

L03A54F:
SPEAK
ENCODE("バレンシアにわたりたいなら")
NEWLINE
ENCODE("そのふねにのりな")
WAIT_CLICK
SPEAK
ENCODE("だが とちゅうのうみには")
NEWLINE
ENCODE("かいぞくどもが わんさかでるぜ")
WAIT_CLICK
SPEAK
ENCODE("かいぞくのボスはダッハって")
NEWLINE
ENCODE("いうんだが こいつがひでえやつでよ")
WAIT_CLICK
SPEAK
ENCODE("さっきも かぞくをころされた")
NEWLINE
ENCODE("おとこたちが かたきうちに")
NEWLINE
ENCODE("でかけていった")
WAIT_CLICK
SPEAK
ENCODE("まぁ かわいそうだが いきては")
NEWLINE
ENCODE("かえってこれないだろうなぁ")
STOP

L03A601:
SPEAK
ENCODE("うみのほこらには")
NEWLINE
ENCODE("ふしぎなちからをもつ つるぎが")
NEWLINE
ENCODE("かくされていると いわれています")
WAIT_CLICK
SPEAK
ENCODE("だけど あのしまには")
NEWLINE
ENCODE("おそろしい まものが·····")
STOP

L03A64E:
FACE KAMUI
NAME KAMUI
SPEAK
ENCODE("まぁ おれは バルボさんに")
NEWLINE
ENCODE("かねで やとわれただけだから")
NEWLINE
ENCODE("あんたらだって いいぜ")
WAIT_CLICK
SPEAK
ENCODE("だけど ドラゴンゾンビだけは")
NEWLINE
ENCODE("かんべんしてくれよな")
WAIT_CLICK
SPEAK
ENCODE("あれは エンジェルのまほうでも")
NEWLINE
ENCODE("なければ ぜったい たおせないぜ")
STOP

L03A6CF:
FACE LEO
NAME LEO
SPEAK
ENCODE("バルボのあにきが いくなら")
NEWLINE
ENCODE("おれも いくよ")
WAIT_CLICK
SPEAK
ENCODE("ゆみのうでなら")
NEWLINE
ENCODE("すこしは じしんがあるぜ")
STOP

L03A709:
SPEAK
ENCODE("ジークしょうぐんは むかしの")
NEWLINE
ENCODE("きおくが ないんだよ")
WAIT_CLICK
SPEAK
ENCODE("ひどいきずをおって ながれてきたのを")
NEWLINE
ENCODE("おしろづきのシスターだった")
NEWLINE
ENCODE("ティータさまが かいほうされたのよ")
WAIT_CLICK
SPEAK
ENCODE("ほら あのとおり 2まいめだから")
NEWLINE
ENCODE("たちまち テイータさま···")
NEWLINE
ENCODE("おっと おしゃべりがすぎるわね")
STOP

L03A797:
FACE VALBAR
NAME VALBAR
SPEAK
ENCODE("すまねぇな たすかったよ")
WAIT_CLICK
SPEAK
ENCODE("ああ あんたには")
NEWLINE
ENCODE("かりができたからな")
WAIT_CLICK
SPEAK
ENCODE("どこでも いっしょにいってやるよ")
NEWLINE
ENCODE("よろしくな")
STOP

L03A7DB:
FACE PALLA
NAME PALLA
SPEAK
ENCODE("わたしたちは はるかひがしの")
NEWLINE
ENCODE("アカネイアたいりくから きました")
STOP

L03A803:
FACE CATRIA
NAME CATRIA
SPEAK
ENCODE("わたしたちの いもうとが")
NEWLINE
ENCODE("かいぞくに さらわれたの")
WAIT_CLICK
SPEAK
ENCODE("それで かいぞくせんを")
NEWLINE
ENCODE("おいかけたのだけど このふきんで")
NEWLINE
ENCODE("みうしなってしまいました")
WAIT_CLICK
SPEAK
ENCODE("ああ はやくたすけだして")
NEWLINE
ENCODE("いっしょに くににかえりたい")
STOP

L03A874:
FACE MYCEN
NAME MYCEN
SPEAK
ENCODE("セリカ,ひさしぶりだな")
.db $E6
FACE CELICA
NAME CELICA
SPEAK
ENCODE("お···おじいさま!")
NEWLINE
ENCODE("どうして ここに!!")
.db $E6
NAME MYCEN
SPEAK
ENCODE("ふむ")
NEWLINE
ENCODE("まあ いろいろあっての··")
WAIT_CLICK
SPEAK
ENCODE("おまえも よくぶじに ここまできた")
.db $E6
NAME CELICA
SPEAK
ENCODE("はい.いろんなひとに")
NEWLINE
ENCODE("たすけてもらいました")
WAIT_CLICK
SPEAK
ENCODE("わたしは かれらといっしょに")
NEWLINE
ENCODE("ミラのしんでんに ゆくつもりです")
WAIT_CLICK
SPEAK
ENCODE("しんでんにいって")
NEWLINE
ENCODE("また さくもつがみのるように")
NEWLINE
ENCODE("ミラさまに おねがいしたいのです")
.db $E6
NAME MYCEN
SPEAK
ENCODE("そうか·· やはりな···")
WAIT_CLICK
SPEAK
ENCODE("まあ そのまえに そこのかいだんを")
NEWLINE
ENCODE("あがって うえにいってみるとよい")
WAIT_CLICK
SPEAK
ENCODE("おまえが いちばんあいたいと")
NEWLINE
ENCODE("ねがっているものが")
NEWLINE
ENCODE("そこにいるはずだ")
.db $E6
NAME CELICA
SPEAK
ENCODE("ま··まさか!")
NEWLINE
ENCODE("··· アルム?")
WAIT_CLICK
SPEAK
ENCODE("ソフィアを かいほうした")
NEWLINE
ENCODE("わかい ゆうしゃというのは")
NEWLINE
ENCODE("アルムのことなの,おじいさま")
.db $E6

L03A9DC:
NAME MYCEN
SPEAK
ENCODE("まあ いってみるがよい")
STOP

L03A9EC:
FACE ALM
NAME ALM
SPEAK
ENCODE("?··· きみは···")
WAIT_CLICK
SPEAK
ENCODE("セ··セリカ? セリカなの!")
.db $E6
FACE CELICA
NAME CELICA
SPEAK
ENCODE("アルム··")
NEWLINE
ENCODE("やっぱりアルムだったのね")
WAIT_CLICK
SPEAK
ENCODE("よかった.あいたかった···")
WAIT_CLICK
SPEAK
ENCODE("わたしが むらをでてから")
NEWLINE
ENCODE("もう ずいぶんもあってないもの··")
.db $E6
NAME ALM
SPEAK
ENCODE("そうだよ")
WAIT_CLICK
SPEAK
ENCODE("おれたち ちいさいころから")
NEWLINE
ENCODE("きょうだいみたいに そだって")
WAIT_CLICK
SPEAK
ENCODE("いつも ふたりであそんでいたのに")
NEWLINE
ENCODE("セリカ,とつぜんいなくなるんだもの")
WAIT_CLICK
SPEAK
ENCODE("あのときは おれ···")
NEWLINE
ENCODE("ほんきで じいちゃんをうらんだよ")
.db $E6
NAME CELICA
SPEAK
ENCODE("わたしだって かなしかった")
NEWLINE
ENCODE("でも しかたなかったの")
WAIT_CLICK
SPEAK
ENCODE("おじいさまは わたしにいったわ")
WAIT_CLICK
SPEAK
ENCODE("このまま ラムのむらにいたら")
NEWLINE
ENCODE("ドゼーが むらをおそってくる")
WAIT_CLICK
SPEAK
ENCODE("そしたら わたしは つかまって")
NEWLINE
ENCODE("ころされてしまうって···")
.db $E6
NAME ALM
SPEAK
ENCODE("なぜ? ")
NEWLINE
ENCODE("なぜドゼーは セリカを")
NEWLINE
ENCODE("ころそうとするんだ")
.db $E6
NAME CELICA
SPEAK
ENCODE("それは···")
NEWLINE
ENCODE("ごめんね.いまは いいたくない")
WAIT_CLICK
SPEAK
ENCODE("それよりも アルム")
NEWLINE
ENCODE("おねがいが あるの")
WAIT_CLICK
SPEAK
ENCODE("リゲルおうこくとの せんそう")
NEWLINE
ENCODE("なんとか とめられないの")
.db $E6
NAME ALM
SPEAK
ENCODE("それは むりだよ")
WAIT_CLICK
SPEAK
ENCODE("リゲルの ルドルフこうていは")
NEWLINE
ENCODE("ソフィアがないらんで")
NEWLINE
ENCODE("よわっている すきをついて")
WAIT_CLICK
SPEAK
ENCODE("しんりゃくをはじめたんだ")
WAIT_CLICK
SPEAK
ENCODE("このままでは ソフィアおうこくは")
NEWLINE
ENCODE("ほろびてしまう")
.db $E6
NAME CELICA
SPEAK
ENCODE("でも リゲルもソフィアも")
NEWLINE
ENCODE("もとはおなじ バレンシアの")
NEWLINE
ENCODE("にんげんでしょ")
WAIT_CLICK
SPEAK
ENCODE("くになんか なくっても")
NEWLINE
ENCODE("しあわせに くらせるはずだわ")
.db $E6
NAME ALM
SPEAK
ENCODE("だめだよ.やばんなリゲルのもとでは")
NEWLINE
ENCODE("ソフィアのたみは いきてゆけない")
WAIT_CLICK
SPEAK
ENCODE("リゲルが ドゼーにてをかし")
NEWLINE
ENCODE("ソフィアのだいちを おかすいじょう")
NEWLINE
ENCODE("ぼくらは たたかうしかないんだ")
.db $E6
NAME CELICA
SPEAK
ENCODE("そう かなしいものね···")
WAIT_CLICK
SPEAK
ENCODE("わたしには ルドルフこうていが")
NEWLINE
ENCODE("みんながいうほど そんなに")
NEWLINE
ENCODE("あくにんとはおもえない")
WAIT_CLICK
SPEAK
ENCODE("はなしあえば きっとわかるのに··")
WAIT_CLICK
SPEAK
ENCODE("それともアルムは みんなから")
NEWLINE
ENCODE("えいゆうに まつりあげられて")
NEWLINE
ENCODE("こくおうにでも なりたいの")
.db $E6
NAME ALM
SPEAK
ENCODE("そんな!")
NEWLINE
ENCODE("ひどいよ,セリカ")
NEWLINE
ENCODE("ぼくには そんなやしんはない")
WAIT_CLICK
SPEAK
ENCODE("ぼくはただ ソフィアのひとたちを")
NEWLINE
ENCODE("まもってあげたいだけなんだ")
WAIT_CLICK
SPEAK
ENCODE("それに ソフィアおうけには")
NEWLINE
ENCODE("ひとりだけ おうじょがいきのこって")
NEWLINE
ENCODE("いるらしいから さがしだすつもりさ")
WAIT_CLICK
SPEAK
ENCODE("その おうじょさまが みつかれば")
NEWLINE
ENCODE("ぼくはいつだって むらにかえるよ")
.db $E6
NAME CELICA
SPEAK
ENCODE("ソフィアに おうじょなんかいないわ")
NEWLINE
ENCODE("もう おうけは ほろびたのよ!")
WAIT_CLICK
SPEAK
ENCODE("もういい.わかったわアルム")
NEWLINE
ENCODE("あなたは リゲルにいけばいい")
WAIT_CLICK
SPEAK
ENCODE("わたしは なかまたちと")
NEWLINE
ENCODE("ミラしんでんに ゆきます")
STOP

L03AE56:
FACE ALM
NAME ALM
SPEAK
ENCODE("セリカ!?")
.db $E6
FACE CELICA
NAME CELICA
SPEAK
ENCODE("さよなら,アルム····")
STOP

L03AE77:
SPEAK
ENCODE("あんたたち うみのほこらへは")
NEWLINE
ENCODE("ちかづいたら ダメよ")
WAIT_CLICK
SPEAK
ENCODE("あの こじまには")
NEWLINE
ENCODE("おそろしい ドラゴンゾンビが")
NEWLINE
ENCODE("すみついていて")
WAIT_CLICK
SPEAK
ENCODE("ちかづくものを")
NEWLINE
ENCODE("ひとのみに してしまうからね")
STOP

L03AED4:
FACE SABER
NAME SABER
SPEAK
ENCODE("うるせーな")
NEWLINE
ENCODE("さけをのんでるじゃまを")
NEWLINE
ENCODE("するんじゃねーよ!")
WAIT_CLICK
SPEAK
ENCODE("はっはっはっ")
NEWLINE
ENCODE("バカいっちゃ いけねーぜ")
WAIT_CLICK
SPEAK
ENCODE("おまえたちだけで")
NEWLINE
ENCODE("うみをわたれるはずが")
NEWLINE
ENCODE("ないだろ")
.db $E6
FACE CELICA
NAME CELICA
SPEAK
ENCODE("だから おねがいしたいの")
WAIT_CLICK
SPEAK
ENCODE("あなた ようへいでしょ")
NEWLINE
ENCODE("わたしたちを まもって")
NEWLINE
ENCODE("くれませんか")
.db $E6
NAME SABER
SPEAK
ENCODE("なに?")
NEWLINE
ENCODE("おれを やといたいっていうのか")
WAIT_CLICK
SPEAK
ENCODE("ふむ··")
NEWLINE
ENCODE("それも おもしろいかもしれんな")
WAIT_CLICK
SPEAK
ENCODE("よし いいだろう")
NEWLINE
ENCODE("いっしょに いってやろう")
STOP

L03AFAC:
FACE PYTHON
NAME PYTHON
SPEAK
ENCODE("あれ みんないっしょに")
NEWLINE
ENCODE("どこへいくんだ?")
WAIT_CLICK
SPEAK
ENCODE("なに?")
NEWLINE
ENCODE("ついに ソフィアじょうに")
NEWLINE
ENCODE("しんげきするのか")
WAIT_CLICK
SPEAK
ENCODE("それなら おれもゆく")
WAIT_CLICK
SPEAK
ENCODE("ソフィアかいほうを")
NEWLINE
ENCODE("めざして がんばろうぜ")
WAIT_CLICK
SPEAK
ENCODE("しかし ドゼーのぶたいは")
NEWLINE
ENCODE("きょうりょくだからな")
WAIT_CLICK
SPEAK
ENCODE("とくに しんえいたいちょうの")
NEWLINE
ENCODE("スレイダーには きをつけないと")
NEWLINE
ENCODE("きけんだよ")
STOP

L03B053:
SPEAK
ENCODE("ひがしのさばくは とうぞくのおう")
NEWLINE
ENCODE("ギースが しはいしています")
WAIT_CLICK
SPEAK
ENCODE("ソフィアをあらしまわっている")
NEWLINE
ENCODE("さんぞくやかいぞくは すべて")
NEWLINE
ENCODE("ギースのぶかなのです")
WAIT_CLICK
SPEAK
ENCODE("このむらも なんどもおそわれて")
NEWLINE
ENCODE("すっかり さびれてしまいました")
WAIT_CLICK
SPEAK
ENCODE("わかいものは みんなつれさられ")
NEWLINE
ENCODE("どれいとして はたらかされている")
WAIT_CLICK
SPEAK
ENCODE("ああ,わたしたちは いったい")
NEWLINE
ENCODE("どうすれば いいのでしょう")
STOP

L03B10F:
SPEAK
ENCODE("きたにある ほこらのいどは")
NEWLINE
ENCODE("しんだものを いきかえらすことが")
NEWLINE
ENCODE("できるという うわさです")
WAIT_CLICK
SPEAK
ENCODE("しかし ドラゴンがすみついていて")
NEWLINE
ENCODE("ちかづくものを くいころすとも")
NEWLINE
ENCODE("いわれています")
STOP

L03B16F:
FACE ATLAS
NAME ATLAS
SPEAK
ENCODE("あんたら ギースを")
NEWLINE
ENCODE("やっつけにゆくのか")
WAIT_CLICK
SPEAK
ENCODE("もしそうなら")
NEWLINE
ENCODE("おれも てつだわせてくれ")
WAIT_CLICK
SPEAK
ENCODE("おれの おとうとやいもうとも")
NEWLINE
ENCODE("みんな ギースにつかまって")
NEWLINE
ENCODE("ゆくえが わからない···")
WAIT_CLICK
SPEAK
ENCODE("くそ! ギースのやろう")
NEWLINE
ENCODE("おれのこのてで")
NEWLINE
ENCODE("たたきころしてやる!!")
STOP

L03B1F2:
FACE JESSE
NAME JESSE
SPEAK
ENCODE("やぁ,ありがとよ")
NEWLINE
ENCODE("たすかったぜ")
WAIT_CLICK
SPEAK
ENCODE("おれはジェシーっていう")
NEWLINE
ENCODE("ケチな ようへいさ")
WAIT_CLICK
SPEAK
ENCODE("ギースのとりでにつかまっていた")
NEWLINE
ENCODE("おんなのこを たすけようとして")
NEWLINE
ENCODE("つかまっちまったんだ")
WAIT_CLICK
SPEAK
ENCODE("よそのくにからきた かわいいこで")
NEWLINE
ENCODE("ギースは どれいにするつもりだ")
.db $E6
FACE CELICA
NAME CELICA
SPEAK
ENCODE("きっとエストね··")
WAIT_CLICK
SPEAK
ENCODE("ねぇ ジェシー,なんとか")
NEWLINE
ENCODE("たすけるほうほうは ないの")
.db $E6
NAME JESSE
SPEAK
ENCODE("ムリだよ")
WAIT_CLICK
SPEAK
ENCODE("ギースのぶかには すごいやつが")
NEWLINE
ENCODE("いっぱいいる")
WAIT_CLICK
SPEAK
ENCODE("おれたちだけじゃ とてもむりさ")
.db $E6
NAME CELICA
SPEAK
ENCODE("でも,なにかほうほうが···")
.db $E6
NAME JESSE
SPEAK
ENCODE("うーんそうだな···")
WAIT_CLICK
SPEAK
ENCODE("ギースには")
NEWLINE
ENCODE("ソニアとディーンという")
NEWLINE
ENCODE("ふたりのぶかが いるんだ")
WAIT_CLICK
SPEAK
ENCODE("それぞれ ぶたいをひきいて")
NEWLINE
ENCODE("さばくの きたとみなみを")
NEWLINE
ENCODE("まもっている")
WAIT_CLICK
SPEAK
ENCODE("ところが かれらはふたりとも")
NEWLINE
ENCODE("ギースを きらっているらしい")
WAIT_CLICK
SPEAK
ENCODE("だが おたがいに けんせいしあって")
NEWLINE
ENCODE("うらぎることが できないらしいんだ")
WAIT_CLICK
SPEAK
ENCODE("だから うまくどちらかをたおせば")
NEWLINE
ENCODE("のこったほうは みかたになるかも")
NEWLINE
ENCODE("しれないぜ")
WAIT_CLICK
SPEAK
ENCODE("ああ,もちろんおれも てをかすぜ")
STOP

L03B3DA:
FACE DEEN
NAME DEEN
SPEAK
ENCODE("なに ギースを やったのか")
WAIT_CLICK
SPEAK
ENCODE("まあ あれだけ わるさをすれば")
NEWLINE
ENCODE("いずれむくいがくると おもっていた")
WAIT_CLICK
SPEAK
ENCODE("うむ···")
NEWLINE
ENCODE("まあ,おまえたちには")
NEWLINE
ENCODE("かりができたからな")
WAIT_CLICK
SPEAK
ENCODE("よかろう,ちからをかしてやろう")
STOP

L03B446:
FACE SONYA
NAME SONYA
SPEAK
ENCODE("なに ギースを やったのかい")
WAIT_CLICK
SPEAK
ENCODE("まあ あれだけ わるさをすれば")
NEWLINE
ENCODE("いずれむくいがくるだろうよ")
WAIT_CLICK
SPEAK
ENCODE("うむ···")
NEWLINE
ENCODE("まあ,おまえたちには")
NEWLINE
ENCODE("かりができたからね")
WAIT_CLICK
SPEAK
ENCODE("わかった")
NEWLINE
ENCODE("ちからをかしてやるよ")
STOP

L03B4B0:
FACE EST
NAME EST
SPEAK
ENCODE("あ·· あなたたちは··")
WAIT_CLICK
SPEAK
ENCODE("えっ ねえさまたちが")
NEWLINE
ENCODE("きているの!")
WAIT_CLICK
SPEAK
ENCODE("わー よかった")
NEWLINE
ENCODE("それならわたしも あなたたちと")
NEWLINE
ENCODE("いっしょに ゆきます")
STOP

L03B4FC:
FACE PALLA
NAME PALLA
SPEAK
ENCODE("よかった")
NEWLINE
ENCODE("あなたをさがしていたの")
WAIT_CLICK
SPEAK
ENCODE("わたしたち ここでまってても")
NEWLINE
ENCODE("しかたないし あなたたちと")
NEWLINE
ENCODE("いっしょに ゆきます")
WAIT_CLICK
SPEAK
ENCODE("あなたのたびも たいへんな")
NEWLINE
ENCODE("ようだし わたしたちだって")
NEWLINE
ENCODE("ちからになれるとおもうわ")
WAIT_CLICK
SPEAK
ENCODE("ね セリカ")
NEWLINE
ENCODE("いっしょに ゆきましょう")
STOP

L03B580:
FACE CATRIA
NAME CATRIA
SPEAK
ENCODE("ああ")
NEWLINE
ENCODE("エストが はやくみつかれば")
NEWLINE
ENCODE("いいのになぁ···")
WAIT_CLICK
SPEAK
ENCODE("これは ないしょだけど")
NEWLINE
ENCODE("わたしたち 3にんそろえば")
NEWLINE
ENCODE("すごいわざが つかえるのよ")
WAIT_CLICK
SPEAK
ENCODE("あれ? なんでしってるの?")
STOP

L03B5E3:
SPEAK
ENCODE("とつぜん リゲルぐんが")
NEWLINE
ENCODE("おそってきたのです")
WAIT_CLICK
SPEAK
ENCODE("だいちぼしんミラは リゲルの")
NEWLINE
ENCODE("ルドルフこうていによって")
NEWLINE
ENCODE("ふういんされてしまいました")
WAIT_CLICK
SPEAK
ENCODE("だから だいちは あれはてて")
NEWLINE
ENCODE("さくもつは みのらなくなったの")
WAIT_CLICK
SPEAK
ENCODE("ああ!")
NEWLINE
ENCODE("このままでは ソフィアのたみは")
NEWLINE
ENCODE("みんなうえて しんでしまう···")
STOP

L03B678:
SPEAK
ENCODE("このしんでんから きたは")
NEWLINE
ENCODE("だいきとうしの ドルクが")
NEWLINE
ENCODE("しはいしているの")
WAIT_CLICK
SPEAK
ENCODE("ちかづけば あのおとこが")
NEWLINE
ENCODE("やみからよびよせる しりゅうに")
NEWLINE
ENCODE("くいころされてしまいます")
STOP

L03B6CF:
SPEAK
ENCODE("ああ")
NEWLINE
ENCODE("わしは このすいもんの")
NEWLINE
ENCODE("ばんにんじゃが··")
WAIT_CLICK
SPEAK
ENCODE("なに すいもんを ひらけだと?")
WAIT_CLICK
SPEAK
ENCODE("だめだ")
WAIT_CLICK
SPEAK
ENCODE("このすいもんを ひらけるのは")
NEWLINE
ENCODE("ソフィアおうけの ものだけじゃ")
WAIT_CLICK
SPEAK
ENCODE("おまえなどの いうことは")
NEWLINE
ENCODE("きけぬぞ!!")
STOP

L03B73E:
SPEAK
ENCODE("ん? まてよ···")
NEWLINE
ENCODE("あんたの そのかみかざりは!")
WAIT_CLICK
SPEAK
ENCODE("な,なんと···")
WAIT_CLICK
SPEAK
ENCODE("おお それはまさしく")
NEWLINE
ENCODE("ソフィアおうけの もんしょう")
WAIT_CLICK
SPEAK
ENCODE("では あなたが")
NEWLINE
ENCODE("ゆくえしれずだった")
NEWLINE
ENCODE("アンテーゼおうじょさま!!")
WAIT_CLICK
SPEAK
ENCODE("こ,これは しつれいしました")
WAIT_CLICK
SPEAK
ENCODE("ただいま すいもんを")
NEWLINE
ENCODE("あけまする")
STOP

L03B7C8:
SPEAK
ENCODE("しかし おうじょさま")
WAIT_CLICK
SPEAK
ENCODE("ここのすいもんを あけただけでは")
NEWLINE
ENCODE("だめなのです")
WAIT_CLICK
SPEAK
ENCODE("みずを ひくためには")
NEWLINE
ENCODE("にしの すいもんも どうじに")
NEWLINE
ENCODE("ひらかなければ なりません")
STOP

L03B81F:
SPEAK
ENCODE("おお ジークさま···")
STOP

L03B82D:
ENCODE("みぎ せいなるたて")
NEWLINE
ENCODE("ひだり ぎんのたて")
NEWLINE
NEWLINE
ENCODE("どちらを のぞむか?")
STOP

L03B852:
SPEAK
ENCODE("どうも ありがとうございました")
STOP

L03B867:
SPEAK
ENCODE("えへ たすけてくれて")
NEWLINE
ENCODE("ありがとう")
STOP

L03B87A:
SPEAK
ENCODE("ミラをふうじた つるぎは")
NEWLINE
ENCODE("じゃしんドーマが")
NEWLINE
ENCODE("ルドルフに あたえたもの")
WAIT_CLICK
SPEAK
ENCODE("ドーマのとうにいけば")
NEWLINE
ENCODE("ミラさまを すくうことが")
NEWLINE
ENCODE("できるかもしれません")
WAIT_CLICK
SPEAK
ENCODE("だけど わたしたちには")
NEWLINE
ENCODE("あのおそろしい ぬまやもりを")
NEWLINE
ENCODE("ぬけることなど とてもむりです")
WAIT_CLICK
SPEAK
ENCODE("とくに どくぬまはおそろしい")
NEWLINE
ENCODE("まちがってはいると かくじつに")
NEWLINE
ENCODE("ちからが うばわれてゆきます")
STOP

L03B930:
SPEAK
ENCODE("バレンシアのたにに みずが")
NEWLINE
ENCODE("あるかぎり しんでんから")
NEWLINE
ENCODE("きたにでることは かないません")
WAIT_CLICK
SPEAK
ENCODE("にしの すいもんを")
NEWLINE
ENCODE("ひらかなければ")
NEWLINE
ENCODE("みずは ひいてはくれないのです")
WAIT_CLICK
SPEAK
ENCODE("よびの すいもんなら")
NEWLINE
ENCODE("このしんでんのちかに")
NEWLINE
ENCODE("あるのですが···")
STOP

L03B9AD:
SPEAK
ENCODE("ミラさまが ふういんされたあと")
NEWLINE
ENCODE("ここも たびたび ギースの")
NEWLINE
ENCODE("とうぞくたちに おそわれました")
WAIT_CLICK
SPEAK
ENCODE("いまも ギースのとりでには")
NEWLINE
ENCODE("わたしたちの なかまが")
NEWLINE
ENCODE("とらわれているはずです")
WAIT_CLICK
SPEAK
ENCODE("おねがいです")
NEWLINE
ENCODE("どうか とらわれたひとたちを")
NEWLINE
ENCODE("たすけてください")
STOP

L03BA31:
SPEAK
ENCODE("あなたたちのおかげで")
NEWLINE
ENCODE("ぶじに もどることが")
NEWLINE
ENCODE("できました")
WAIT_CLICK
SPEAK
ENCODE("きたに いかれるなら")
NEWLINE
ENCODE("まよいのもりにあるという")
NEWLINE
ENCODE("けんじゃのさとを おとずれなさい")
WAIT_CLICK
SPEAK
ENCODE("だいけんじゃのハルクさまなら")
NEWLINE
ENCODE("なにか ちからになって")
NEWLINE
ENCODE("くださるはずです")
STOP

L03BAAB:
SPEAK
ENCODE("このむらを おとしたぐらいで")
NEWLINE
ENCODE("いいきになるなよ")
WAIT_CLICK
SPEAK
ENCODE("おまえたちに あの のろわれた")
NEWLINE
ENCODE("りゅうのやまが こせるものか")
STOP

L03BAE7:
SPEAK
ENCODE("ルドルフこうていは えいゆうさ")
WAIT_CLICK
SPEAK
ENCODE("ソフィアの ブタどもに")
NEWLINE
ENCODE("こうていのよさが わかってたまるか")
STOP

L03BB1B:
SPEAK
ENCODE("わたしのむすめが")
NEWLINE
ENCODE("ガーゴイルにさらわれて")
NEWLINE
ENCODE("にしのほこらに つれていかれた")
WAIT_CLICK
SPEAK
ENCODE("たすけてくれれば")
NEWLINE
ENCODE("わしのたからものを あげます")
STOP

L03BB5F:
FACE LUTHIER
NAME LUTHIER
SPEAK
ENCODE("たのむ")
NEWLINE
ENCODE("いもうとを たすけてくれ")
WAIT_CLICK
SPEAK
ENCODE("いもうとはようじゅつしのタタラに")
NEWLINE
ENCODE("あやつられて リゲルのすいもんを")
NEWLINE
ENCODE("まもっているのだ")
WAIT_CLICK
SPEAK
ENCODE("タタラさえ たおせば デューテの")
NEWLINE
ENCODE("まほうは とけるはずなのだが")
NEWLINE
ENCODE("どうすればいいのか わからない")
WAIT_CLICK
SPEAK
ENCODE("たのむ いっしょに")
NEWLINE
ENCODE("たすけにいってくれ!!!")
STOP

L03BBF6:
SPEAK
ENCODE("このさきは りゅうのやまだ")
WAIT_CLICK
SPEAK
ENCODE("しりゅうに おそわれて")
NEWLINE
ENCODE("あんたら くわれちまうぜ")
WAIT_CLICK
SPEAK
ENCODE("もうすこし")
NEWLINE
ENCODE("ようすをみたほうが")
NEWLINE
ENCODE("いいんじゃないかな···")
STOP

L03BC41:
SPEAK
ENCODE("ドゼーのとりでには")
NEWLINE
ENCODE("かいほうぐんの へいしが")
NEWLINE
ENCODE("とらわれているんだ")
WAIT_CLICK
SPEAK
ENCODE("しかし ちかいうちに")
NEWLINE
ENCODE("しょけいされるって")
NEWLINE
ENCODE("うわさがある")
WAIT_CLICK
SPEAK
ENCODE("はやくたすけてやらないと")
NEWLINE
ENCODE("あぶないぜ")
STOP

L03BC9D:
FACE MATHILDA
NAME MATHILDA
SPEAK
ENCODE("ありがとう")
NEWLINE
ENCODE("きっと たすけにきてくれると")
NEWLINE
ENCODE("しんじていました")
STOP

L03BCC4:
SPEAK
ENCODE("ミラのしんでんに いくんだって?")
NEWLINE
ENCODE("それは やめたほうがいいよ")
WAIT_CLICK
SPEAK
ENCODE("あのへんは ギースのとうぞくが")
NEWLINE
ENCODE("うようよしてるし")
WAIT_CLICK
SPEAK
ENCODE("それに がけくずれが おこって")
NEWLINE
ENCODE("みちが ふさがれるって")
NEWLINE
ENCODE("うわさも あるからね")
STOP

L03BD31:
SPEAK
ENCODE("ドゼーは いなくなったけど")
NEWLINE
ENCODE("さくもつは みのらないし")
NEWLINE
ENCODE("へんなばけものは でるし···")
WAIT_CLICK
SPEAK
ENCODE("だいちぼしんミラは いったい")
NEWLINE
ENCODE("どうなってしまったんでしょう")
STOP

L03BD85:
FACE DELTHEA
NAME DELTHEA
SPEAK
ENCODE("わたし よくわからないの")
WAIT_CLICK
SPEAK
ENCODE("きがついたら たたかいのなかにいて")
NEWLINE
ENCODE("こわくなって にげてきたの")
WAIT_CLICK
SPEAK
ENCODE("え,わたし タタラに")
NEWLINE
ENCODE("あやつられていたの")
WAIT_CLICK
SPEAK
ENCODE("そうだったの···")
NEWLINE
ENCODE("めいわくを かけたのですね")
NEWLINE
ENCODE("ごめんなさい")
STOP

L03BDF5:
SPEAK
ENCODE("わーん.こわかったよー")
STOP

L03BE02:
SPEAK
ENCODE("ばんざーい")
NEWLINE
ENCODE("ソフィアじょうが")
NEWLINE
ENCODE("かいほうされたぞ")
WAIT_CLICK
SPEAK
ENCODE("ドゼーしょうぐんが")
NEWLINE
ENCODE("じぶんの りょうちに")
NEWLINE
ENCODE("にげていったぞー")
STOP

L03BE47:
SPEAK
ENCODE("うれしいけどさ··")
WAIT_CLICK
SPEAK
ENCODE("でも しんぱいだなぁ")
WAIT_CLICK
SPEAK
ENCODE("リゲルおうこくが")
NEWLINE
ENCODE("せめこんできたら おれたちきっと")
NEWLINE
ENCODE("みなごろしにされちまうぜ")
STOP

L03BE8F:
SPEAK
ENCODE("ソフィアに えいゆうが")
NEWLINE
ENCODE("あらわれたのよ")
WAIT_CLICK
SPEAK
ENCODE("これで このくにも")
NEWLINE
ENCODE("やっと すくわれるわ")
STOP

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
