.BANK 15
.ORG $0000

.SECTION "Bank14" FORCE

L0E8000:
    JSR L0E80AA.w
    JSR L0E8898.w
    LDA #0
    STA $06D0
    STA $06D1
    STA $06D2
    STA $06D3
    STA $06D4
    STA $06D5
    STA $06D6
    STA $06D7
    STA $06D8
    STA $06D9
    STA $06DA
    STA $06DB
    RTS

L0E802D:
    LDA $0648
    LSR
    BCS L0E8073
L0E8033:
    LSR
    BCS L0E8067
L0E8036:
    LSR
    BCS L0E805B
L0E8039:
    LSR
    BCS L0E804F
L0E803C:
    RTS

L0E803D:
    JSR L0E802D.w
    LDA #0
    STA $0677
    STA $0678
    STA $067A
    STA $067B
    RTS

L0E804F:
    LDX #16
    STX $4000
    LDX #127
    STX $4001
    BNE L0E803C
L0E805B:
    LDX #16
    STX $4004
    LDX #127
    STX $4005
    BNE L0E8039
L0E8067:
    LDX #0
    STX $4008
    LDX #24
    STX $400B
    BNE L0E8036
L0E8073:
    LDX #16
    STX $400C
    LDX #0
    STX $400F
    BEQ L0E8033
L0E807F:
    LDA $0648
    BEQ L0E808F
    JSR L0E803D.w
    LDA #0
    STA $0648
    STA $0649
L0E808F:
    RTS

L0E8090:
    JSR L0E824E.w
    JSR L0E8252.w
    JSR L0E83F1.w
    JSR L0E8497.w
    JSR L0E803D.w
    LDA #0
    STA $0648
    STA $0649
    JMP L0E8807.w

L0E80AA:
    LDA $06D0
    LSR
    BCS L0E8090
    LDA $06D3
    LSR
    BCS L0E807F
    LDA $06D7
    BNE L0E8101
    LDA $06D8
    BNE L0E8106
    LDA $06D9
    BNE L0E810B
    LDA $06DA
    BNE L0E8110
    LDA $06DB
    BNE L0E8115
L0E80CF:
    JSR L0E87A0.w
    JSR L0E81D0.w
    JSR L0E82EB.w
    JSR L0E827E.w
    JSR L0E81D4.w
    JSR L0E82F5.w
    JSR L0E8288.w
    JSR L0E8397.w
    JSR L0E82FF.w
    JSR L0E841C.w
    JSR L0E8436.w
    LDA $0647
    BEQ L0E8100
    LDA #0
    STA $0647
    LDX $0646
    JMP L0E8128.w

L0E8100:
    RTS

L0E8101:
    LDX #0
    JMP L0E8117.w

L0E8106:
    LDX #8
    JMP L0E8117.w

L0E810B:
    LDX #16
    JMP L0E8117.w

L0E8110:
    LDX #24
    JMP L0E8117.w

L0E8115:
    LDX #32
L0E8117:
    LDY #0
    STY $0645
    STY $0639
    STY $063A
    LSR
    BCS L0E8128
    INX
    BNE L0E8117
L0E8128:
    CPX #38
    BEQ L0E8134
    CPX #10
    BEQ L0E8134
    CPX #12
    BEQ L0E8134
L0E8134:
    LDA $0644
    CMP #38
    BEQ L0E8146
    CMP #10
    BEQ L0E8146
    CMP #12
    BEQ L0E8146
    STA $0646
L0E8146:
    TXA
    STA $0644
    ASL
    TAX
    LDA L0E92DF.w,X
    STA $FC
    LDA (L0E92DF.w + 1),X
    STA $FD
    CMP #0
    BNE L0E815D
    JMP L0E80CF

L0E815D:
    LDY #0
L0E815F:
    LDA ($FC),Y
    STA $00E0,Y
    CMP #0
    BEQ L0E819E
L0E8168:
    INY
    CPY #8
    BNE L0E815F
    LDA ($FC),Y
    STA $0610
    LDA #0
    STA $0611
    STA $0601
    STA $0603
    STA $0605
    STA $0607
    STA $063B
    STA $063D
    STA $063F
    LDA #1
    STA $0600
    STA $0602
    STA $0604
    STA $0606
    JSR L0E8647.w
    RTS

L0E819E:
    CPY #0
    BEQ L0E81AC
    CPY #2
    BEQ L0E81B8
    CPY #4
    BEQ L0E81C4
    BNE L0E8168
L0E81AC:
    LDA #16
    STA $4000
    LDA #127
    STA $4001
    BNE L0E8168
L0E81B8:
    LDA #16
    STA $4004
    LDA #127
    STA $4005
    BNE L0E8168
L0E81C4:
    LDA #0
    STA $4008
    LDA #24
    STA $400B
    BNE L0E8168
L0E81D0:
    LDX #0
    BEQ L0E81D6
L0E81D4:
    LDX #2
L0E81D6:
    LDA $E1,X
    BEQ L0E824D
    JSR L0E84C9.w
    BPL L0E824D
    JSR L0E854D.w
    BCS L0E8254
    STA $0643
    CPX #0
    BNE L0E81F6
    LDA $0648
    LSR
    LSR
    LSR
    LSR
    BCS L0E824D
    BCC L0E81FE
L0E81F6:
    LDA $0648
    LSR
    LSR
    LSR
    BCS L0E824D
L0E81FE:
    LDA $0643
    CMP #127
    BEQ L0E825A
    CLC
    ADC $063B,X
    ASL
    TAY
    LDA L0E86F8.w,Y
    ORA $0612,X
    STA $0625,X
    STA $FB
    LDA (L0E86F8.w + 1),Y
    STA $0624,X
    STA $FA
    TXA
    ASL
    TAY
    LDA $0616,X
    STA $4001,Y
    LDA $FA
    STA $4002,Y
    LDA $FB
    STA $4003,Y
    LDA #0
    STA $062B,X
    STA $0630,X
    LDA $ED,X
    STA $062A,X
    LDA $E9,X
    BNE L0E8270
    LDA $0613,X
    STA $4000,Y
    LDA #0
    STA $061A,X
L0E824D:
    RTS

L0E824E:
    LDX #0
    BEQ L0E8254
L0E8252:
    LDX #2
L0E8254:
    LDA #0
    STA $E0,X
    STA $E1,X
L0E825A:
    LDA #0
    STA $061A,X
    STA $062A,X
    LDA #16
    CPX #0
    BNE L0E826C
    STA $4000
    RTS

L0E826C:
    STA $4004
    RTS

L0E8270:
    LDA #0
    STA $061B,X
    STA $0620,X
    LDA #1
    STA $061A,X
    RTS

L0E827E:
    LDX #0
    LDY $061B,X
    LDA ($E8),Y
    JMP L0E828F.w

L0E8288:
    LDX #2
    LDY $061B,X
    LDA ($EA),Y
L0E828F:
    LDY $061A,X
    BEQ L0E82E1
    STA $F6
    CMP #255
    BEQ L0E82BF
    DEC $0620,X
    BPL L0E82BF
    LSR
    LSR
    LSR
    LSR
    TAY
    LDA L0E932F.w,Y
    STA $0620,X
    LDA $F6
    AND #15
    STA $F6
    LDA $0613,X
    AND #192
    ORA #48
    ORA $F6
    STA $0621,X
    INC $061B,X
L0E82BF:
    CPX #0
    BNE L0E82D3
    LDA $0648
    LSR
    LSR
    LSR
    LSR
    BCS L0E82E2
    LDA $0621,X
    STA $4000
    RTS

L0E82D3:
    LDA $0648
    LSR
    LSR
    LSR
    BCS L0E82E2
    LDA $0621,X
    STA $4004
L0E82E1:
    RTS

L0E82E2:
    LDA #0
    STA $061A,X
    STA $062A,X
    RTS

L0E82EB:
    LDX #0
    LDY $062B,X
    LDA ($EC),Y
    JMP L0E8306.w

L0E82F5:
    LDX #2
    LDY $062B,X
    LDA ($EE),Y
    JMP L0E8306.w

L0E82FF:
    LDX #4
    LDY $062B,X
    LDA ($F0),Y
L0E8306:
    LDY $062A,X
    BEQ L0E82E1
    STA $F6
    CMP #248
    BEQ L0E836D
    CMP #232
    BNE L0E8327
    LDA #0
    STA $062B,X
    STA $0630,X
    CPX #0
    BEQ L0E82EB
    CPX #2
    BEQ L0E82F5
    BNE L0E82FF
L0E8327:
    DEC $0630,X
    BPL L0E836D
    INC $062B,X
    LSR
    LSR
    LSR
    LSR
    LSR
    TAY
    LDA L0E933F.w,Y
    STA $0630,X
    LDA $F6
    AND #31
    ASL
    STA $0631,X
    LDY $0631,X
    LDA $0624,X
    CLC
    ADC L0E9348.w,Y
    STA $FA
    LDA $0625,X
    ADC (L0E9348.w + 1),Y
    STA $FB
    CPX #2
    BEQ L0E836E
    CPX #4
    BEQ L0E837C
    LDA $0648
    LSR
    LSR
    LSR
    LSR
    BCS L0E838E
    LDA $FA
    STA $4002
L0E836D:
    RTS

L0E836E:
    LDA $0648
    LSR
    LSR
    LSR
    BCS L0E838E
    LDA $FA
    STA $4006
    RTS

L0E837C:
    LDA $0648
    LSR
    LSR
    BCS L0E838E
    LDA $FA
    STA $400A
    LDA $FB
    STA $400B
    RTS

L0E838E:
    LDA #0
    STA $061A,X
    STA $062A,X
    RTS

L0E8397:
    LDA $E5
    BEQ L0E83F0
    LDX #4
    JSR L0E84C9.w
    BPL L0E83F0
    JSR L0E854D.w
    BCS L0E83F1
    STA $0643
    LDA $0648
    LSR
    LSR
    BCS L0E83F0
    LDA $0643
    CMP #127
    BEQ L0E83F7
    CLC
    ADC $063B,X
    ASL
    TAY
    LDA L0E86F8.w,Y
    STA $0629
    ORA $0637
    STA $400B
    LDA (L0E86F8.w + 1),Y
    STA $0628
    STA $400A
    LDA #0
    STA $062B,X
    STA $0630,X
    LDA $ED,X
    STA $062A,X
    LDA $0638
    BNE L0E8403
    LDA $0636
    STA $4008
    LDA #0
    STA $061E
L0E83F0:
    RTS

L0E83F1:
    LDA #0
    STA $E4
    STA $E5
L0E83F7:
    LDA #0
    STA $4008
    STA $061E
    STA $062E
    RTS

L0E8403:
    LDA #1
    STA $061E
    LDA $0638
    STA $061F
    LDA #>L0EBF08
    STA $4008
    LDA $0629
    ORA #<L0EBF08
    STA $400B
    RTS

L0E841C:
    LDA $061E
    BEQ L0E8435
    DEC $061F
    BNE L0E8435
    LDA $0648
    LSR
    LSR
    BCS L0E8435
    LDA #0
    STA $4008
    STA $061E
L0E8435:
    RTS

L0E8436:
    LDA $E7
    BEQ L0E84A2
    LDX #6
    JSR L0E84C9.w
    BPL L0E84A2
    JSR L0E854D.w
    BCS L0E8497
    STA $0643
    LDA $0648
    LSR
    BCS L0E84A2
    LDA $0643
    CMP #127
    BEQ L0E849D
    CMP #64
    BEQ L0E84A3
    CMP #65
    BEQ L0E84AA
    CMP #0
    BEQ L0E8484
    TAX
L0E8463:
    CMP #3
    BEQ L0E8484
    BCC L0E846E
    SEC
    SBC #3
    BCS L0E8463
L0E846E:
    CMP #2
    BEQ L0E847C
    JSR L0E84A3.w
    TXA
    SEC
    SBC #1
    TAX
    BCS L0E8484
L0E847C:
    JSR L0E84AA.w
    TXA
    SEC
    SBC #2
    TAX
L0E8484:
    LDA L0E95C0.w,X
    STA $400C
    LDA (L0E95C0.w + 1),X
    STA $400E
    LDA (L0E95C0.w + 2),X
    STA $400F
    RTS

L0E8497:
    LDA #0
    STA $E6
    STA $E7
L0E849D:
    LDA #16
    STA $400C
L0E84A2:
    RTS

L0E84A3:
    LDY #248
    LDA #7
    JMP L0E84AE.w

L0E84AA:
    LDY #250
    LDA #16
L0E84AE:
    STA $4013
    STY $4012
    LDA #15
    STA $4010
    LDA #15
    STA $4015
    LDA #0
    STA $4011
    LDA #31
    STA $4015
    RTS

L0E84C9:
    LDA $0600,X
    SEC
    SBC $0610
    STA $0600,X
    LDA $0601,X
    SBC $0611
    STA $0601,X
    RTS

L0E84DD:
    LDA $0608,X
    CLC
    ADC $0600,X
    STA $0600,X
    LDA $0609,X
    ADC $0601,X
    STA $0601,X
    RTS

L0E84F1:
    CMP #126
    BNE L0E84FC
    INY
    JSR L0E84DD.w
    JMP L0E8557.w

L0E84FC:
    JSR L0E84DD.w
    TYA
    SEC
    ADC $FC
    STA $E0,X
    LDA $FD
    ADC #0
    STA $E1,X
    LDA $F7
    CLC
    RTS

L0E850F:
    CMP #189
    BEQ L0E8544
    CMP #191
    BEQ L0E8532
    CMP #190
    BEQ L0E853B
    STY $F8
    AND #31
    ASL
    TAY
    LDA L0E86CE.w,Y
    STA $0608,X
    LDA (L0E86CE.w + 1),Y
    STA $0609,X
    LDY $F8
    JMP L0E8557.w

L0E8532:
    LDA ($FC),Y
    STA $0610
    INY
    JMP L0E8557.w

L0E853B:
    LDA ($FC),Y
    STA $063B,X
    INY
    JMP L0E8557.w

L0E8544:
    LDA #1
    STA $0647
    INY
    JMP L0E8557.w

L0E854D:
    LDA $E0,X
    STA $FC
    LDA $E1,X
    STA $FD
    LDY #0
L0E8557:
    LDA ($FC),Y
    STA $F7
    BPL L0E84F1
    INY
    CMP #192
    BCC L0E850F
    CMP #224
    BCS L0E8571
    JMP L0E8661.w

L0E8569:
    LDA #0
    STA $E1,X
    STA $E0,X
    SEC
    RTS

L0E8571:
    STY $F8
    CMP #255
    BEQ L0E8569
    CMP #252
    BEQ L0E85EE
    CMP #239
    BEQ L0E85AA
    CMP #253
    BEQ L0E85CE
    CMP #254
    BEQ L0E8600
    LDY $0686,X
    AND #15
    STA $0690,Y
    LDA $F8
    STA $0691,Y
    LDA $FC
    STA $0692,Y
    LDA $FD
    STA $0693,Y
    JSR L0E861F.w
L0E85A1:
    TYA
    STA $0686,X
L0E85A5:
    LDY $F8
    JMP L0E8557.w

L0E85AA:
    LDY $0686,X
    JSR L0E862F.w
    BCS L0E85A5
    LDA $0690,Y
    SEC
    SBC #1
    STA $0690,Y
    BEQ L0E85A1
    LDA $0692,Y
    STA $FC
    LDA $0693,Y
    STA $FD
    LDA $0691,Y
    TAY
    JMP L0E8557.w

L0E85CE:
    LDY $0686,X
    LDA #255
    STA $0690,Y
    LDA $F8
    STA $0691,Y
    LDA $FC
    STA $0692,Y
    LDA $FD
    STA $0693,Y
    JSR L0E861F.w
    TYA
    STA $0686,X
    LDY $F8
L0E85EE:
    LDA ($FC),Y
    STA $F6
    INY
    LDA ($FC),Y
    STA $FD
    LDA $F6
    STA $FC
    LDY #0
    JMP L0E8557.w

L0E8600:
    LDY $0686,X
    JSR L0E862F.w
    BCS L0E85A5
    TYA
    STA $0686,X
    LDA $0692,Y
    STA $FC
    LDA $0693,Y
    STA $FD
    LDA $0691,Y
    TAY
    INY
    INY
    JMP L0E8557.w

L0E861F:
    TYA
    AND #240
    STA $F6
    INY
    INY
    INY
    INY
    TYA
    AND #15
    ORA $F6
    TAY
    RTS

L0E862F:
    TYA
    AND #240
    STA $F6
    TYA
    AND #15
    BEQ L0E8645
    DEY
    DEY
    DEY
    DEY
    TYA
    AND #15
    ORA $F6
    TAY
    CLC
    RTS

L0E8645:
    SEC
    RTS

L0E8647:
    LDA #0
    STA $0686
    LDA #16
    STA $0688
    LDA #32
    STA $068A
    LDA #48
    STA $068C
    LDA #64
    STA $068E
    RTS

L0E8661:
    LDA ($FC),Y
    STA $FA
    INY
    LDA ($FC),Y
    STA $FB
    INY
    LDA $F7
    CMP #192
    BEQ L0E867C
    CMP #193
    BEQ L0E867C
    CMP #194
    BEQ L0E86AA
    JMP L0E8557.w

L0E867C:
    STY $F8
    LDY #0
    LDA ($FA),Y
    STA $0613,X
    INY
    LDA ($FA),Y
    STA $0616,X
    INY
    LDA ($FA),Y
    STA $0612,X
    INY
    LDA ($FA),Y
    STA $E8,X
    INY
    LDA ($FA),Y
    STA $E9,X
    INY
    LDA ($FA),Y
    STA $EC,X
    INY
    LDA ($FA),Y
    STA $ED,X
    LDY $F8
    JMP L0E8557.w

L0E86AA:
    STY $F8
    LDY #0
    LDA ($FA),Y
    STA $0636
    INY
    LDA ($FA),Y
    STA $0637
    INY
    LDA ($FA),Y
    STA $0638
    INY
    LDA ($FA),Y
    STA $F0
    INY
    LDA ($FA),Y
    STA $F1
    LDY $F8
    JMP L0E8557.w

L0E86CE:
; index is & $1F therefore it has 32 values
; but is ASL so 64 bytes but that
; overlaps with L0E86F8???
.db $00 $06 $00 $03 $80 $01 $C0 $00
.db $60 $00 $30 $00 $18 $00 $00 $09
.db $80 $04 $40 $02 $20 $01 $90 $00
.db $48 $00 $00 $04 $00 $02 $00 $01
.db $80 $00 $40 $00 $20 $00 $C0 $00
.db $F0 $00

L0E86F8:
.db $0F
.db $FF
.db $06
.db $AE
.db $06
.db $4E
.db $05
.db $F3
.db $05
.db $9E
.db $05
.db $4D
.db $05
.db $01
.db $04
.db $B9
.db $04
.db $75
.db $04
.db $35
.db $03
.db $F8
.db $03
.db $BF
.db $03
.db $89
.db $03
.db $57
.db $03
.db $27
.db $02
.db $F9
.db $02
.db $CF
.db $02
.db $A6
.db $02
.db $80
.db $02
.db $5C
.db $02
.db $3A
.db $02
.db $1A
.db $01
.db $FC
.db $01
.db $DF
.db $01
.db $C4
.db $01
.db $AB
.db $01
.db $93
.db $01
.db $7C
.db $01
.db $67
.db $01
.db $52
.db $01
.db $3F
.db $01
.db $2D
.db $01
.db $1C
.db $01
.db $0C
.db $00
.db $FD
.db $00
.db $EE
.db $00
.db $E1
.db $00
.db $D4
.db $00
.db $C8
.db $00
.db $BD
.db $00
.db $B2
.db $00
.db $A8
.db $00
.db $9F
.db $00
.db $96
.db $00
.db $8D
.db $00
.db $85
.db $00
.db $7E
.db $00
.db $76
.db $00
.db $70
.db $00
.db $69
.db $00
.db $63
.db $00
.db $5E
.db $00
.db $58
.db $00
.db $53
.db $00
.db $4F
.db $00
.db $4A
.db $00
.db $46
.db $00
.db $42
.db $00
.db $3E
.db $00
.db $3A
.db $00
.db $37
.db $00
.db $34
.db $00
.db $31
.db $00
.db $2E
.db $00
.db $2B
.db $00
.db $29
.db $00
.db $27
.db $00
.db $24
.db $00
.db $22
.db $00
.db $20
.db $00
.db $1E
.db $00
.db $1C
.db $00
.db $1A
.db $00
.db $19

L0E878C:
.dw L0E8792
.dw L0E8797
.dw L0E879C

L0E8792:
.db $06 $04 $43 $01 $FF

L0E8797:
.db $04 $03 $42 $01 $FF

L0E879C:
.db $03 $02 $01 $FF

L0E87A0:
    LDA $0645
    CMP #0
    BEQ L0E8801
    LDA $063A
    CMP #31
    BNE L0E8802
    LDA $0639
    CMP #3
    BEQ L0E8807
    CMP #1
    BNE L0E87CD
    LDA $0648
    CMP #4
    BEQ L0E87C3
    JSR L0E83F1.w
L0E87C3:
    LDA $0648
    CMP #8
    BEQ L0E87CD
    JSR L0E8497.w
L0E87CD:
    LDX #0
    LDY #0
L0E87D1:
    CPX $0639
    BEQ L0E87DB
    INY
    INY
    INX
    BNE L0E87D1
L0E87DB:
    LDX #0
    LDY #0
    LDA L0E878C.w,Y
    STA $E8,X
    INY
    LDA L0E878C.w,Y
    STA $E9,X
    LDX #2
    LDY #0
    LDA L0E878C.w,Y
    STA $E8,X
    INY
    LDA L0E878C.w,Y
    STA $E9,X
    INC $0639
    LDA #0
    STA $063A
L0E8801:
    RTS

L0E8802:
    INC $063A
    BNE L0E8801
L0E8807:
    LDA $0648
    CMP #1
    BEQ L0E8818
    JSR L0E824E.w
    LDA $0648
    CMP #2
    BEQ L0E881B
L0E8818:
    JSR L0E8252.w
L0E881B:
    LDA #0
    STA $0645
    STA $0639
    STA $063A
    BEQ L0E8801
; again? it can fallthrough to the data?

L0E8828:
.dw $0000
.dw L0E8CC6
.dw L0E8CD5
.dw L0E8CE2
.dw L0E8CF1
.dw L0E8CFE
.dw L0E8D0A
.dw L0E8D19
.dw L0E8DC9
.dw L0E8DD8
.dw L0E8E15
.dw L0E8DE5
.dw $0000
.dw L0E8EB8
.dw L0E8DB5
.dw L0E8EC7
.dw $0000
.dw L0E8E92
.dw L0E8D8F
.dw L0E8E9E
.dw $0000
.dw L0E8DBF
.dw L0E8EAB
.dw L0E8E85
.dw $0000
.dw L0E8DA2
.dw L0E8E76
.dw L0E8E4B
.dw $0000
.dw $0000
.dw L0E8E5A
.dw L0E8E69
.dw L0E8E06
.dw L0E8E2F
.dw L0E8EF9
.dw L0E8D44
.dw L0E8E22
.dw L0E8D53
.dw L0E8EE0
.dw L0E8E3D
.dw L0E8D62
.dw L0E8D71
.dw L0E8F12
.dw L0E8D80
.dw L0E8DEF
.dw L0E8DF9
.dw $0000
.dw $0000
.dw L0E8D26
.dw L0E8D35
.dw $0000
.dw $0000
.dw $0000
.dw $0000
.dw $0000
.dw $0000

L0E8898:
    JSR L0E88B0.w
    CMP #255
    BEQ L0E88A5
    CMP #254
    BEQ L0E88AF
    BNE L0E88F3
L0E88A5:
    JSR L0E88DC.w
    CMP #255
    BEQ L0E88AF
    JMP L0E8AA9.w

L0E88AF:
    RTS

L0E88B0:
    LDA $06D5
    AND #64
    CMP #0
    BEQ L0E88C0
    LDA #1
    STA $0645
    BNE L0E88F0
L0E88C0:
    LDA $06D0
    LSR
    BCS L0E88F0
    LDA $06D3
    LSR
    BCS L0E88F0
    LDY #0
L0E88CE:
    LDA $06D0,Y
    CMP #0
    BNE L0E88EC
    INY
    CPY #7
    BEQ L0E88ED
    BNE L0E88CE
L0E88DC:
    LDY #0
L0E88DE:
    LDA $0677,Y
    CMP #0
    BNE L0E88EC
    INY
    CPY #8
    BEQ L0E88ED
    BNE L0E88DE
L0E88EC:
    RTS

L0E88ED:
    LDA #255
    RTS

L0E88F0:
    LDA #254
    RTS

L0E88F3:
    LDX $0649
    CPX #0
    BNE L0E88AF
    JSR L0E8A88.w
    LDA $06D0,Y
    STA $0677,Y
    JSR L0E8A51.w
    LDA $064A
    STA $FC
    LDA $064B
    STA $FD
    CMP #0
    BEQ L0E88EC
    LDY #0
    LDA ($FC),Y
    AND #15
    STA $0648
    LDA ($FC),Y
    LSR
    LSR
    LSR
    LSR
    AND #1
    STA $0649
    LDA #0
    STA $066A
    LDA $0648
    AND #8
    CMP #0
    BEQ L0E8945
    INC $066A
    LDA $066A
    TAY
    LDA ($FC),Y
    TAY
    LDX #0
    JSR L0E89AC.w
L0E8945:
    LDA $0648
    AND #4
    CMP #0
    BEQ L0E8967
    LDA $064A
    STA $FC
    LDA $064B
    STA $FD
    INC $066A
    LDA $066A
    TAY
    LDA ($FC),Y
    TAY
    LDX #1
    JSR L0E89AC.w
L0E8967:
    LDA $0648
    AND #2
    CMP #0
    BEQ L0E8989
    LDA $064A
    STA $FC
    LDA $064B
    STA $FD
    INC $066A
    LDA $066A
    TAY
    LDA ($FC),Y
    TAY
    LDX #2
    JSR L0E89AC.w
L0E8989:
    LDA $0648
    AND #1
    CMP #0
    BEQ L0E89AB
    LDA $064A
    STA $FC
    LDA $064B
    STA $FD
    INC $066A
    LDA $066A
    TAY
    LDA ($FC),Y
    TAY
    LDX #3
    JSR L0E89AC.w
L0E89AB:
    RTS

L0E89AC:
    JSR L0E8A47.w
    TYA
    PHA
    LDY #3
    LDA ($FA),Y
    STA $066B,X
    JSR L0E8C88.w
    PLA
    TAY
    INY
    LDA ($FC),Y
    STA $0654,X
    LDA #0
    STA $065C,X
    STA $0660,X
    STA $0658,X
    LDA #255
    STA $0664,X
    TYA
    SEC
    ADC $064A
    STA $FC
    LDA #0
    ADC $064B
    STA $FD
    TXA
    ASL
    TAX
    LDA $FC
    STA $064C,X
    LDA $FD
    STA $064D,X
    TXA
    LSR
    TAX
    LDA #0
    STA $0673,X
    STA $066F,X
    TXA
    ASL
    TAX
    LDA $064C,X
    STA $FC
    LDA $064D,X
    STA $FD
    TXA
    LSR
    TAX
    LDY #4
    LDA ($FC),Y
    CMP #0
    BNE L0E8A46
    TXA
    PHA
    INY
    LDA ($FC),Y
    LSR
    BCS L0E8A1E
L0E8A19:
    LSR
    BCS L0E8A25
    BCC L0E8A2A
L0E8A1E:
    LDA #255
    STA $0673,X
    BNE L0E8A19
L0E8A25:
    LDA #255
    STA $066F,X
L0E8A2A:
    PLA
    TAX
    LDA $0673,X
    CMP #0
    BEQ L0E8A39
    INY
    LDA ($FC),Y
    STA $0673,X
L0E8A39:
    LDA $066F,X
    CMP #0
    BEQ L0E8A46
    INY
    LDA ($FC),Y
    STA $066F,X
L0E8A46:
    RTS

L0E8A47:
    LDA ($FC),Y
    STA $FA
    INY
    LDA ($FC),Y
    STA $FB
    RTS

L0E8A51:
    LDA $06D0,Y
    LDX #0
L0E8A56:
    LSR
    BCS L0E8A5E
    INX
    CPX #8
    BNE L0E8A56
L0E8A5E:
    STX $F2
    LDA $F2
    ASL
    STA $F2
    TAX
    LDA #0
L0E8A68:
    DEY
    BMI L0E8A70
    CLC
    ADC #16
    BNE L0E8A68
L0E8A70:
    CLC
    ADC $F2
    TAY
    LDA #<L0E8828
    STA $FC
    LDA #>L0E8828
    STA $FD
    LDA ($FC),Y
    STA $064A
    INY
    LDA ($FC),Y
    STA $064B
L0E8A87:
    RTS

L0E8A88:
    JSR L0E802D.w
    LDA #0
    STA $0648
    STA $0649
    STA $0677
    STA $0678
    STA $0679
    STA $067A
    STA $067B
    STA $067C
    STA $067D
L0E8AA8:
    RTS

L0E8AA9:
    LDA $0648
    AND #8
    CMP #0
    BEQ L0E8AB7
    LDX #0
    JSR L0E8ADE.w
L0E8AB7:
    LDA $0648
    AND #4
    CMP #0
    BEQ L0E8AC5
    LDX #1
    JSR L0E8ADE.w
L0E8AC5:
    LDA $0648
    AND #2
    CMP #0
    BEQ L0E8AD3
    LDX #2
    JSR L0E8ADE.w
L0E8AD3:
    LDA $0648
    AND #1
    CMP #0
    BEQ L0E8AA8
    LDX #3
L0E8ADE:
    JSR L0E8CB5.w
    BNE L0E8A87
    TXA
    ASL
    TAX
    LDA $064C,X
    STA $FC
    LDA $064D,X
    STA $FD
    TXA
    LSR
    TAX
    LDY #0
    LDA ($FC),Y
    AND #127
    CMP $065C,X
    BNE L0E8B48
    LDA ($FC),Y
    ASL
    BCC L0E8A88
    LDA #0
    STA $065C,X
    STA $0660,X
    LDA #255
    STA $0664,X
    LDY #4
    LDA ($FC),Y
    CMP #0
    BNE L0E8B48
    INY
    LDA ($FC),Y
    STA $0669
    AND #1
    BNE L0E8B32
L0E8B22:
    LDA $0669
    AND #2
    BNE L0E8B3A
L0E8B29:
    LDA $0669
    AND #16
    BNE L0E8B42
    BEQ L0E8B48
L0E8B32:
    INY
    LDA ($FC),Y
    STA $0673,X
    BNE L0E8B22
L0E8B3A:
    INY
    LDA ($FC),Y
    STA $066F,X
    BNE L0E8B29
L0E8B42:
    INY
    LDA ($FC),Y
    STA $066B,X
L0E8B48:
    INC $065C,X
    LDY #1
    LDA ($FC),Y
    LSR
    BCC L0E8B72
    AND #7
    CMP $065C,X
    BEQ L0E8B72
    INY
    LDA ($FC),Y
    STA $FA
    INY
    LDA ($FC),Y
    STA $FB
    STY $F2
    LDY $0660,X
    LDA ($FA),Y
    STA $0654,X
    LDY $F2
    JMP L0E8B74.w
L0E8B72:
    INY
    INY
L0E8B74:
    INY
    LDA ($FC),Y
    CMP #0
    BNE L0E8BD1
    INY
    LDA ($FC),Y
    LSR
    BCC L0E8BAD
    LSR
    LSR
    AND #15
    BCC L0E8B98
    CLC
    ADC $0673,X
    STA $0673,X
    LDA $066B,X
    ADC #0
    STA $066B,X
    BNE L0E8BAD
L0E8B98:
    STA $0669
    LDA $0673,X
    SEC
    SBC $0669
    STA $0673,X
    LDA $066B,X
    SBC #0
    STA $066B,X
L0E8BAD:
    LDA ($FC),Y
    LSR
    LSR
    BCC L0E8C0C
    LSR
    AND #15
    BCC L0E8BC1
    CLC
    ADC $066F,X
    STA $066F,X
    BNE L0E8C0C
L0E8BC1:
    STA $0669
    LDA $066F,X
    SEC
    SBC $0669
    STA $066F,X
    JMP L0E8C0C.w

L0E8BD1:
    INC $0664,X
    INY
    LDA ($FC),Y
    LSR
    STA $0668
    BCC L0E8BED
    INY
    LDA ($FC),Y
    STA $FA
    INY
    LDA ($FC),Y
    STA $FB
    JSR L0E8C33.w
    STA $0673,X
L0E8BED:
    LDA $0668
    LSR
    BCC L0E8C0C
    INY
    LDA ($FC),Y
    STA $FA
    INY
    LDA ($FC),Y
    STA $FB
    JSR L0E8C33.w
    STA $066F,X
    CMP #0
    BNE L0E8C0C
    ORA #16
    STA $066F,X
L0E8C0C:
    JSR L0E8C63.w
    LDA $0673,X
    CMP #0
    BEQ L0E8C1A
    LDY #2
    STA ($F2),Y
L0E8C1A:
    LDA $066F,X
    CMP #0
    BEQ L0E8C27
    LDY #0
    ORA #16
    STA ($F2),Y
L0E8C27:
    LDA $066B,X
    CMP #0
    BEQ L0E8C32
    LDY #3
    STA ($F2),Y
L0E8C32:
    RTS

L0E8C33:
    STY $F3
    LDY $0664,X
    LDA $0648
    CMP #1
    BNE L0E8C5E
    LDA $0664,X
    PHA
    LSR
    TAY
    LDA ($FA),Y
    STA $F2
    PLA
    AND #1
    BEQ L0E8C55
    LDA $F2
    AND #15
    LDY $F3
    RTS

L0E8C55:
    LDA $F2
    LSR
    LSR
    LSR
    LSR
    LDY $F3
    RTS

L0E8C5E:
    LDA ($FA),Y
    LDY $F3
    RTS

L0E8C63:
    CPX #0
    BEQ L0E8C73
    CPX #1
    BEQ L0E8C77
    CPX #2
    BEQ L0E8C7F
    CPX #3
    BEQ L0E8C7B
L0E8C73:
    LDA #0
    BEQ L0E8C81
L0E8C77:
    LDA #4
    BNE L0E8C81
L0E8C7B:
    LDA #12
    BNE L0E8C81
L0E8C7F:
    LDA #8
L0E8C81:
    STA $F2
    LDA #64
    STA $F3
    RTS

L0E8C88:
    CPX #1
    BEQ L0E8CA0
    CPX #2
    BEQ L0E8C98
    CPX #3
    BEQ L0E8C9C
    LDA #0
    BEQ L0E8CA2
L0E8C98:
    LDA #8
    BNE L0E8CA2
L0E8C9C:
    LDA #12
    BNE L0E8CA2
L0E8CA0:
    LDA #4
L0E8CA2:
    STA $F2
    LDA #64
    STA $F3
    LDY #0
L0E8CAA:
    LDA ($FA),Y
    STA ($F2),Y
    INY
    TYA
    CMP #4
    BNE L0E8CAA
    RTS

L0E8CB5:
    INC $0658,X
    LDA $0658,X
    CMP $0654,X
    BNE L0E8CC5
    LDA #0
    STA $0658,X
L0E8CC5:
    RTS

L0E8CC6:
.db $01 $02 $3B $8F $01 $20 $00 $00
.db $00 $01 $03 $EF $8F $07 $90

L0E8CD5:
.db $01 $02 $3F $8F $01 $20 $00 $00
.db $00 $01 $02 $1F $90

L0E8CE2:
.db $01 $02 $43 $8F $01 $20 $00 $00
.db $00 $01 $03 $2F $90 $3F $90

L0E8CF1:
.db $01 $02 $47 $8F $01 $10 $00 $00
.db $00 $01 $02 $4F $90

L0E8CFE:
.db $01 $02 $4B $8F $03 $0E $00 $00
.db $00 $00 $09 $0F

L0E8D0A:
.db $01 $02 $53 $8F $01 $10 $00 $00
.db $00 $01 $03 $F1 $90 $21 $91

L0E8D19:
.db $11 $02 $4F $8F $01 $20 $00 $00
.db $00 $01 $02 $72 $90

L0E8D26:
.db $01 $02 $57 $8F $0B $04 $00 $00
.db $00 $05 $03 $8D $90 $21 $91

L0E8D35:
.db $01 $02 $5B $8F $0B $04 $00 $00
.db $00 $05 $03 $8F $90 $21 $91

L0E8D44:
.db $01 $02 $5F $8F $01 $0C $00 $00
.db $00 $01 $03 $91 $90 $99 $90

L0E8D53:
.db $01 $02 $63 $8F $01 $20 $00 $00
.db $00 $01 $03 $A1 $90 $B1 $90

L0E8D62:
.db $01 $02 $53 $8F $02 $7F $00 $00
.db $00 $01 $03 $C1 $90 $21 $91

L0E8D71:
.db $01 $02 $4F $8F $01 $36 $00 $00
.db $00 $01 $03 $57 $90 $72 $90

L0E8D80:
.db $01 $02 $53 $8F $01 $90 $00 $00
.db $00 $01 $03 $D9 $90 $09 $91

L0E8D8F:
.db $0C $03 $0B $73 $8F $14 $00 $00
.db $00 $00 $00 $77 $8F $14 $00 $00
.db $00 $00 $00

L0E8DA2:
.db $0C $03 $0B $7B $8F $40 $00 $00
.db $00 $00 $00 $7F $8F $40 $00 $00
.db $00 $00 $00

L0E8DB5:
.db $08 $02 $83 $8F $40 $00 $00 $00
.db $00 $00

L0E8DBF:
.db $02 $02 $CF $8F $01 $00 $00 $00
.db $00 $00

L0E8DC9:
.db $08 $02 $87 $8F $02 $05 $00 $00
.db $00 $01 $03 $61 $91 $66 $91

L0E8DD8:
.db $08 $02 $8B $8F $02 $04 $00 $00
.db $00 $01 $02 $6B $91

L0E8DE5:
.db $08 $02 $8F $8F $02 $00 $00 $00
.db $00 $00

L0E8DEF:
.db $08 $02 $93 $8F $02 $00 $00 $00
.db $00 $00

L0E8DF9:
.db $02 $02 $D3 $8F $05 $02 $00 $00
.db $00 $01 $01 $62 $91

L0E8E06:
.db $08 $02 $97 $8F $09 $09 $00 $00
.db $00 $01 $03 $75 $91 $7F $91

L0E8E15:
.db $08 $02 $A3 $8F $04 $01 $00 $00
.db $00 $01 $81 $1A $92

L0E8E22:
.db $08 $02 $A7 $8F $01 $18 $00 $00
.db $00 $01 $02 $8A $91

L0E8E2F:
.db $08 $02 $B3 $8F $07 $81 $00 $00
.db $00 $00 $03 $A0 $93 $40

L0E8E3D:
.db $08 $02 $B7 $8F $0F $81 $00 $00
.db $00 $00 $03 $90 $94 $40

L0E8E4B:
.db $01 $02 $67 $8F $01 $90 $00 $00
.db $00 $01 $03 $A6 $91 $B6 $91

L0E8E5A:
.db $08 $02 $BB $8F $05 $84 $00 $00
.db $00 $01 $03 $C6 $91 $CA $91

L0E8E69:
.db $01 $02 $6B $8F $0A $81 $00 $00
.db $00 $00 $82 $1E $18

L0E8E76:
.db $01 $02 $6F $8F $05 $84 $00 $00
.db $00 $01 $03 $16 $92 $18 $92

L0E8E85:
.db $02 $02 $E7 $8F $05 $04 $00 $00
.db $00 $01 $81 $1B $92

L0E8E92:
.db $02 $02 $DB $8F $01 $40 $00 $00
.db $00 $00 $F9 $39

L0E8E9E:
.db $02 $02 $E3 $8F $01 $9A $00 $00
.db $00 $00 $F9 $37 $B2

L0E8EAB:
.db $02 $02 $DF $8F $01 $90 $00 $00
.db $00 $00 $FD $AA $B0

L0E8EB8:
.db $08 $02 $BF $8F $01 $20 $00 $00
.db $00 $01 $03 $CE $91 $EE $91

L0E8EC7:
.db $0C $03 $0E $9B $8F $0C $01 $00
.db $00 $00 $01 $01 $88 $91 $9F $8F
.db $0C $01 $00 $00 $00 $01 $01 $89
.db $91

L0E8EE0:
.db $0C $03 $0E $AB $8F $0A $04 $00
.db $00 $00 $01 $02 $A2 $91 $AF $8F
.db $0A $04 $00 $00 $00 $01 $02 $A2
.db $91

L0E8EF9:
.db $0C $03 $0E $C3 $8F $02 $84 $00
.db $00 $00 $01 $81 $0E $92 $C7 $8F
.db $02 $84 $00 $00 $00 $01 $81 $12
.db $92

L0E8F12:
.db $0B $04 $11 $1C $CB $8F $02 $60
.db $00 $00 $00 $01 $83

L0E8F1F:
.dw L0E921F
.dw L0E927F
.dw L0E8FEB

L0E8F25:
.db $02
.db $90
.db $00
.db $00
.db $00
.db $00
.db $FD
.db $50
.db $B1
.db $43
.db $8F
.db $02
.db $90
.db $00
.db $00
.db $00
.db $01
.db $03
.db $2F
.db $90
.db $0F
.db $90
.db $1F
.db $7F
.db $0F
.db $C0
.db $1F
.db $7F
.db $0F
.db $C0
.db $0F
.db $7F
.db $0D
.db $C0
.db $1F
.db $7F
.db $0B
.db $30
.db $17
.db $7F
.db $0F
.db $C0
.db $10
.db $7F
.db $0E
.db $C0
.db $10
.db $7F
.db $0F
.db $C0
.db $1F
.db $7F
.db $02
.db $28
.db $1F
.db $7F
.db $0D
.db $28
.db $16
.db $7F
.db $08
.db $C0
.db $1F
.db $7F
.db $0F
.db $C0
.db $1F
.db $7F
.db $0F
.db $30
.db $1F
.db $7F
.db $0C
.db $18
.db $1C
.db $7F
.db $0E
.db $88
.db $3C
.db $EB
.db $50
.db $87
.db $3C
.db $EB
.db $50
.db $86
.db $34
.db $B7
.db $E0
.db $05
.db $34
.db $B7
.db $E3
.db $05
.db $94
.db $A5
.db $70
.db $40
.db $DF
.db $DB
.db $FF
.db $80
.db $97
.db $7F
.db $50
.db $18
.db $97
.db $7F
.db $40
.db $18
.db $97
.db $7F
.db $30
.db $80
.db $9C
.db $83
.db $20
.db $C8
.db $44
.db $7F
.db $A0
.db $92
.db $44
.db $7F
.db $A9
.db $92
.db $98
.db $7F
.db $40
.db $18
.db $04
.db $7F
.db $62
.db $20
.db $4F
.db $7F
.db $FF
.db $87
.db $4F
.db $7F
.db $FF
.db $86
.db $93
.db $AC
.db $A0
.db $40
.db $94
.db $AC
.db $90
.db $40
.db $9F
.db $7F
.db $55
.db $1A
.db $00
.db $7F
.db $16
.db $20
.db $00
.db $7F
.db $08
.db $20
.db $00
.db $7F
.db $09
.db $20
.db $1F
.db $81
.db $80
.db $30
.db $05
.db $7F
.db $40
.db $18
.db $05
.db $7F
.db $BB
.db $28
.db $05
.db $7F
.db $B0
.db $28
.db $7F
.db $7C
.db $39
.db $B3
.db $7F
.db $7C
.db $AA
.db $B0
.db $7F
.db $7C
.db $37
.db $B2
.db $7F
.db $7F
.db $3B
.db $08

L0E8FEB:
.db $7F
.db $7C
.db $50
.db $B3
.db $AF
.db $EF
.db $EF
.db $34
.db $56
.db $78
.db $92
.db $AB
.db $CC
.db $DD
.db $EE
.db $FF
.db $EE
.db $FF
.db $FF
.db $FF
.db $FF
.db $FF
.db $EE
.db $FF
.db $EE
.db $76
.db $54
.db $32
.db $E6
.db $2B
.db $BA
.db $A9
.db $99
.db $88
.db $88
.db $77
.db $66
.db $55
.db $44
.db $33
.db $32
.db $22
.db $22
.db $22
.db $21
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $FE
.db $A9
.db $87
.db $65
.db $43
.db $21
.db $18
.db $64
.db $32
.db $11
.db $11
.db $11
.db $43
.db $21
.db $11
.db $11
.db $FD
.db $FA
.db $BD
.db $F9
.db $87
.db $65
.db $43
.db $21
.db $11
.db $23
.db $45
.db $67
.db $89
.db $AB
.db $CD
.db $EF
.db $F5
.db $FA
.db $BB
.db $99
.db $88
.db $77
.db $66
.db $55
.db $44
.db $33
.db $33
.db $22
.db $22
.db $11
.db $11
.db $11
.db $65
.db $43
.db $22
.db $11
.db $43
.db $21
.db $11
.db $11
.db $FF
.db $FE
.db $FF
.db $EF
.db $FD
.db $DF
.db $FE
.db $ED
.db $EF
.db $BD
.db $EF
.db $AE
.db $BF
.db $FF
.db $EE
.db $EE
.db $DF
.db $EF
.db $FF
.db $BF
.db $FF
.db $EF
.db $EF
.db $EE
.db $EF
.db $EF
.db $EE
.db $FF
.db $FE
.db $EE
.db $DD
.db $DC
.db $CC
.db $BB
.db $BA
.db $AA
.db $99
.db $87
.db $65
.db $44
.db $33
.db $22
.db $22
.db $33
.db $22
.db $22
.db $22
.db $22
.db $22
.db $22
.db $22
.db $22
.db $22
.db $22
.db $48
.db $B0
.db $B8
.db $40
.db $43
.db $21
.db $65
.db $43
.db $21
.db $11
.db $43
.db $21
.db $FE
.db $DC
.db $BA
.db $97
.db $53
.db $11
.db $22
.db $11
.db $87
.db $65
.db $43
.db $21
.db $65
.db $43
.db $21
.db $65
.db $43
.db $21
.db $65
.db $43
.db $21
.db $65
.db $43
.db $21
.db $FE
.db $CD
.db $BB
.db $AA
.db $98
.db $76
.db $54
.db $32
.db $21
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $11
.db $22
.db $34
.db $FF
.db $EF
.db $FD
.db $DF
.db $FE
.db $ED
.db $EF
.db $BD
.db $EF
.db $AE
.db $BF
.db $FF
.db $EE
.db $DB
.db $89
.db $75
.db $54
.db $23
.db $10
.db $09
.db $25
.db $8B
.db $FF
.db $FE
.db $FF
.db $EF
.db $FD
.db $DF
.db $FE
.db $ED
.db $EF
.db $BD
.db $EF
.db $AE
.db $BF
.db $FF
.db $EE
.db $EE
.db $DF
.db $EF
.db $FF
.db $BF
.db $FF
.db $EF
.db $EF
.db $EE
.db $FF
.db $FE
.db $FF
.db $EF
.db $FD
.db $DF
.db $FE
.db $ED
.db $EF
.db $BD
.db $EF
.db $AE
.db $BF
.db $FF
.db $EE
.db $EE
.db $DF
.db $EF
.db $FF
.db $BF
.db $FF
.db $EF
.db $EF
.db $EE
.db $55
.db $66
.db $55
.db $55
.db $66
.db $77
.db $77
.db $77
.db $88
.db $88
.db $88
.db $99
.db $88
.db $99
.db $AA
.db $AA
.db $BB
.db $BB
.db $DD
.db $DD
.db $EE
.db $EE
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
.db $98
.db $76
.db $54
.db $32
.db $10
.db $01
.db $23
.db $45
.db $67
.db $89
.db $AB
.db $CD
.db $EF
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
.db $CB
.db $A9
.db $86
.db $53
.db $21
.db $23
.db $45
.db $68
.db $9A
.db $BB
.db $CC
.db $BA
.db $97
.db $53
.db $21
.db $10
.db $80
.db $B0
.db $80
.db $B0
.db $40
.db $9A
.db $97
.db $94
.db $92
.db $00
.db $95
.db $92
.db $91
.db $91
.db $91
.db $91
.db $91
.db $91
.db $91
.db $91
.db $50
.db $50
.db $50
.db $50
.db $50
.db $B0
.db $80
.db $B0
.db $20
.db $20
.db $9A
.db $9A
.db $97
.db $97
.db $94
.db $94
.db $92
.db $92
.db $00
.db $A0
.db $A9
.db $04
.db $84
.db $84
.db $C4
.db $04
.db $84
.db $84
.db $C4
.db $04
.db $84
.db $84
.db $C4
.db $04
.db $84
.db $84
.db $C4
.db $04
.db $84
.db $84
.db $C4
.db $04
.db $84
.db $84
.db $C4
.db $4F
.db $00
.db $4F
.db $4F
.db $98
.db $76
.db $54
.db $32
.db $10
.db $01
.db $23
.db $45
.db $67
.db $89
.db $AB
.db $CD
.db $EF
.db $FF
.db $FF
.db $FF
.db $CB
.db $A9
.db $86
.db $53
.db $21
.db $23
.db $45
.db $68
.db $9A
.db $BB
.db $CC
.db $BA
.db $97
.db $53
.db $21
.db $10
.db $55
.db $33
.db $00
.db $55
.db $9F
.db $9E
.db $90
.db $9F
.db $0A
.db $0A
.db $0A
.db $0A
.db $0A
.db $0B
.db $0B
.db $0B
.db $0B
.db $0B
.db $0C
.db $0C
.db $0C
.db $0C
.db $0D
.db $0D
.db $0D
.db $0D
.db $0F
.db $0F
.db $0F
.db $08
.db $08
.db $08
.db $08
.db $08
.db $08
.db $08
.db $08
.db $08
.db $08
.db $08
.db $8F
.db $85
.db $8F
.db $8A
.db $8B
.db $8B
.db $89
.db $89
.db $88
.db $88
.db $87
.db $87
.db $86
.db $86
.db $85
.db $85
.db $84
.db $84
.db $83
.db $81
.db $81
.db $81
.db $81
.db $81
.db $81
.db $82
.db $81
.db $81
.db $81
.db $81
.db $81
.db $81
.db $0A
.db $0C
.db $0E
.db $08
.db $0B
.db $0D
.db $0F
.db $09
.db $F0
.db $B0
.db $80
.db $80
.db $48
.db $2E
.db $1E
.db $0E
.db $00

L0E921F:
.db $80
.db $70
.db $80
.db $70
.db $9A
.db $8A
.db $9A
.db $8A
.db $9A
.db $8A
.db $9A
.db $8A
.db $A0
.db $BA
.db $A0
.db $BA
.db $AA
.db $B0
.db $AA
.db $B0
.db $AA
.db $B0
.db $AA
.db $B0
.db $B0
.db $C0
.db $B0
.db $C0
.db $80
.db $70
.db $80
.db $70
.db $9A
.db $8A
.db $9A
.db $8A
.db $9A
.db $8A
.db $9A
.db $8A
.db $A0
.db $BA
.db $A0
.db $BA
.db $AA
.db $B0
.db $AA
.db $B0
.db $AA
.db $B0
.db $AA
.db $B0
.db $B0
.db $C0
.db $B0
.db $C0
.db $80
.db $70
.db $80
.db $70
.db $9A
.db $8A
.db $9A
.db $8A
.db $9A
.db $8A
.db $9A
.db $8A
.db $A0
.db $BA
.db $A0
.db $BA
.db $AA
.db $B0
.db $AA
.db $B0
.db $AA
.db $B0
.db $AA
.db $B0
.db $B0
.db $C0
.db $B0
.db $C0
.db $60
.db $60
.db $60
.db $60
.db $60
.db $60
.db $60
.db $60
.db $60
.db $60
.db $60
.db $60

L0E927F:
.db $0F
.db $0E
.db $0D
.db $0C
.db $0B
.db $0A
.db $0B
.db $0D
.db $0F
.db $0F
.db $0E
.db $0E
.db $0D
.db $0D
.db $0C
.db $0C
.db $0B
.db $0B
.db $0A
.db $06
.db $0F
.db $0E
.db $0D
.db $0C
.db $0B
.db $0A
.db $0B
.db $0D
.db $0F
.db $0F
.db $0E
.db $0E
.db $0D
.db $0D
.db $0C
.db $0C
.db $0B
.db $0A
.db $08
.db $06
.db $0F
.db $0E
.db $0D
.db $0C
.db $0B
.db $0A
.db $0B
.db $0D
.db $0F
.db $0F
.db $0E
.db $0E
.db $0D
.db $0D
.db $0C
.db $0C
.db $0B
.db $0B
.db $0A
.db $06
.db $0F
.db $0E
.db $0D
.db $0C
.db $0B
.db $0A
.db $0B
.db $0D
.db $0F
.db $0F
.db $0E
.db $0E
.db $0D
.db $0D
.db $0C
.db $0C
.db $0B
.db $0A
.db $08
.db $06
.db $0F
.db $0E
.db $0D
.db $0C
.db $0B
.db $0A
.db $09
.db $08
.db $07
.db $06
.db $05
.db $03
.db $07
.db $06
.db $05
.db $03

L0E92DF:
.dw L0EAC65
.dw L0EAA26
.dw L0EBBB7
.dw L0E9A36
.dw $0000
.dw $0000
.dw L0EB6E6
.dw L0EAB53
.dw L0EB7FB
.dw L0E9FC5
.dw L0E9F94
.dw L0EB486
.dw L0EA007
.dw L0EA453
.dw L0E9CA0
.dw L0E9C3D
.dw L0E9F33
.dw L0E9F50
.dw $0000
.dw L0E95CF
.dw L0EB24C
.dw L0EA6EC
.dw L0E9627
.dw $0000
.dw L0EA24A
.dw L0E988B
.dw L0EA6C9
.dw L0EADA4
.dw L0E9D86
.dw L0EA7E5
.dw L0EA3B2
.dw L0EAF7F
.dw L0EBB6D
.dw $0000
.dw L0EA4BC
.dw L0EA93D
.dw L0EB983
.dw L0EB5F3
.dw L0EA6AD
.dw L0EA041

L0E932F:
.db $00 $01 $02 $03 $04 $05 $06 $07
.db $09 $0E $13 $1D $27 $31 $3B $00

L0E933F:
.db $00 $01 $02 $03 $04 $05 $06 $09
.db $27

L0E9348:
.db $00
.db $00
.db $01
.db $00
.db $02
.db $00
.db $03
.db $00
.db $04
.db $00
.db $05
.db $00
.db $06
.db $00
.db $07
.db $00
.db $08
.db $00
.db $09
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $0C
.db $00
.db $0D
.db $00
.db $0E
.db $00
.db $0F
.db $00
.db $00
.db $00
.db $F1
.db $FF
.db $F2
.db $FF
.db $F3
.db $FF
.db $F4
.db $FF
.db $F5
.db $FF
.db $F6
.db $FF
.db $F7
.db $FF
.db $F8
.db $FF
.db $F9
.db $FF
.db $FA
.db $FF
.db $FB
.db $FF
.db $FC
.db $FF
.db $FD
.db $FF
.db $FE
.db $FF
.db $FF
.db $FF
.db $C0
.db $A0
.db $01
.db $40
.db $01
.db $20
.db $1F
.db $60
.db $21
.db $60
.db $3F
.db $21
.db $02
.db $01
.db $00
.db $3F
.db $1E
.db $1F
.db $00
.db $21
.db $02
.db $01
.db $00
.db $3F
.db $1E
.db $1F
.db $00
.db $21
.db $02
.db $01
.db $00
.db $3F
.db $1E
.db $1F
.db $00
.db $21
.db $02
.db $01
.db $00
.db $3F
.db $1E
.db $1F
.db $20
.db $21
.db $40
.db $3F
.db $40
.db $21
.db $40
.db $3F
.db $40
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $60
.db $01
.db $60
.db $1F
.db $20
.db $F8
.db $00
.db $01
.db $02
.db $03
.db $02
.db $01
.db $00
.db $1F
.db $1E
.db $1D
.db $1E
.db $1F
.db $E8
.db $20
.db $01
.db $03
.db $01
.db $00
.db $1F
.db $1D
.db $1F
.db $20
.db $22
.db $05
.db $22
.db $40
.db $3E
.db $1B
.db $3E
.db $40
.db $22
.db $05
.db $22
.db $40
.db $3E
.db $1B
.db $3E
.db $40
.db $22
.db $05
.db $22
.db $40
.db $3E
.db $1B
.db $3E
.db $40
.db $22
.db $05
.db $22
.db $40
.db $3E
.db $1B
.db $F8
.db $60
.db $21
.db $60
.db $3F
.db $E8
.db $84
.db $00
.db $20
.db $2D
.db $94
.db $88
.db $93
.db $12
.db $33
.db $12
.db $C1
.db $FF
.db $84
.db $00
.db $20
.db $39
.db $94
.db $88
.db $93
.db $03
.db $04
.db $05
.db $16
.db $07
.db $56
.db $05
.db $04
.db $03
.db $04
.db $23
.db $02
.db $01
.db $33
.db $12
.db $01
.db $00
.db $FF
.db $8D
.db $1D
.db $10
.db $52
.db $94
.db $88
.db $93
.db $0D
.db $0C
.db $08
.db $87
.db $A6
.db $05
.db $04
.db $FF
.db $CD
.db $00
.db $00
.db $61
.db $94
.db $21
.db $94
.db $03
.db $A4
.db $03
.db $FF
.db $8D
.db $1D
.db $10
.db $6C
.db $94
.db $00
.db $00
.db $04
.db $05
.db $04
.db $84
.db $83
.db $42
.db $01
.db $FF
.db $CD
.db $1D
.db $10
.db $7B
.db $94
.db $88
.db $93
.db $03
.db $14
.db $25
.db $36
.db $37
.db $88
.db $87
.db $A6
.db $04
.db $03
.db $FF
.db $4D
.db $00
.db $00
.db $8D
.db $94
.db $88
.db $93
.db $0C
.db $68
.db $01
.db $FF
.db $8D
.db $00
.db $00
.db $8D
.db $94
.db $88
.db $93
.db $CD
.db $00
.db $00
.db $52
.db $94
.db $88
.db $93
.db $4D
.db $00
.db $00
.db $A6
.db $94
.db $88
.db $93
.db $09
.db $18
.db $16
.db $01
.db $FF
.db $80
.db $00
.db $00
.db $B2
.db $94
.db $88
.db $93
.db $09
.db $0B
.db $0A
.db $09
.db $48
.db $06
.db $FF
.db $C0
.db $00
.db $00
.db $C0
.db $94
.db $88
.db $93
.db $0A
.db $07
.db $05
.db $03
.db $01
.db $FF
.db $8F
.db $00
.db $08
.db $CD
.db $94
.db $88
.db $93
.db $0C
.db $79
.db $18
.db $07
.db $04
.db $02
.db $01
.db $FF
.db $8F
.db $00
.db $08
.db $DC
.db $94
.db $88
.db $93
.db $07
.db $76
.db $15
.db $04
.db $02
.db $01
.db $FF
.db $83
.db $07
.db $00
.db $EA
.db $94
.db $00
.db $00
.db $0C
.db $08
.db $86
.db $85
.db $04
.db $FF
.db $00
.db $7F
.db $80
.db $F7
.db $94
.db $89
.db $93
.db $0C
.db $0B
.db $08
.db $B4
.db $FF
.db $84
.db $00
.db $20
.db $03
.db $95
.db $88
.db $93
.db $04
.db $05
.db $06
.db $17
.db $09
.db $58
.db $07
.db $06
.db $05
.db $04
.db $23
.db $02
.db $01
.db $33
.db $12
.db $01
.db $00
.db $FF
.db $8D
.db $00
.db $00
.db $1C
.db $95
.db $21
.db $94
.db $07
.db $08
.db $49
.db $4A
.db $88
.db $87
.db $86
.db $85
.db $44
.db $03
.db $02
.db $FF
.db $00
.db $7F
.db $80
.db $2F
.db $95
.db $89
.db $93
.db $0F
.db $0F
.db $0C
.db $B5
.db $FF
.db $00
.db $7F
.db $80
.db $3B
.db $95
.db $88
.db $93
.db $01
.db $02
.db $03
.db $B1
.db $FF
.db $00
.db $7F
.db $80
.db $47
.db $95
.db $88
.db $93
.db $03
.db $05
.db $06
.db $B1
.db $FF
.db $00
.db $7F
.db $80
.db $53
.db $95
.db $88
.db $93
.db $07
.db $08
.db $09
.db $B1
.db $FF
.db $00
.db $7F
.db $80
.db $5F
.db $95
.db $88
.db $93
.db $09
.db $0A
.db $0B
.db $B1
.db $FF
.db $00
.db $7F
.db $80
.db $6B
.db $95
.db $88
.db $93
.db $0C
.db $0D
.db $0E
.db $B1
.db $FF
.db $00
.db $7F
.db $80
.db $77
.db $95
.db $88
.db $93
.db $03
.db $04
.db $05
.db $B2
.db $FF
.db $00
.db $7F
.db $80
.db $83
.db $95
.db $88
.db $93
.db $05
.db $06
.db $07
.db $B2
.db $FF
.db $00
.db $7F
.db $80
.db $8F
.db $95
.db $88
.db $93
.db $08
.db $09
.db $0A
.db $B2
.db $FF
.db $00
.db $7F
.db $80
.db $9B
.db $95
.db $88
.db $93
.db $0B
.db $0C
.db $0D
.db $B2
.db $FF
.db $00
.db $7F
.db $80
.db $A7
.db $95
.db $88
.db $93
.db $0E
.db $0E
.db $0F
.db $B2
.db $FF
.db $55
.db $80
.db $00
.db $00
.db $00
.db $75
.db $80
.db $0D
.db $00
.db $00
.db $2F
.db $00
.db $C0
.db $88
.db $93
.db $65
.db $80
.db $00
.db $88
.db $93

L0E95C0: ; list of groups of 3 bytes
.db $00 $0A $58
.db $01 $02 $40
.db $00 $03 $48
.db $05 $02 $C0
.db $00 $00 $00

L0E95CF:
.db $F7 $95 $D8 $95 $11 $96 $00 $00
.db $08 $BE $00 $C0 $74 $94 $81 $29
.db $2A $27 $80 $29 $82 $2A $29 $81
.db $25 $22 $25 $82 $27 $28 $81 $27
.db $2A $80 $29 $91 $7F $FC $D8 $95
.db $BE $00 $C1 $74 $94 $81 $20 $22
.db $1E $82 $20 $24 $80 $22 $81 $1E
.db $1B $80 $1C $1E $20 $91 $7F $FC
.db $F7 $95 $BE $00 $C2 $B6 $95 $81
.db $25 $27 $20 $25 $80 $1E $20 $80
.db $21 $23 $25 $91 $7F $FC $11 $96

L0E9627:
.db $30 $96 $5E $97 $D6 $97 $23 $98
.db $0F $BE $00 $C0 $65 $94 $90 $E2
.db $1E $1B $1E $22 $1E $22 $1E $1B
.db $1E $1B $16 $1B $1D $19 $1D $19
.db $14 $19 $20 $1D $20 $1D $19 $1D
.db $1E $1B $1E $1B $22 $1B $16 $12
.db $16 $12 $0F $12 $19 $14 $19 $14
.db $11 $14 $19 $14 $19 $1D $20 $1D
.db $EF $1E $1B $1E $20 $1D $20 $1E
.db $1B $1E $1D $19 $1D $1E $1B $1E
.db $1B $16 $1B $22 $1E $22 $1E $1B
.db $1E $20 $1D $20 $1D $19 $14 $1D
.db $19 $1D $19 $14 $11 $1E $1B $1E
.db $1B $16 $1B $1E $1B $1E $1B $16
.db $1B $1E $1B $1E $20 $1D $20 $1E
.db $1B $1E $1D $19 $1D $1E $1B $1E
.db $1B $16 $1B $22 $1E $22 $1E $1B
.db $1E $25 $20 $25 $20 $1D $19 $20
.db $1D $20 $1D $19 $14 $1D $19 $1D
.db $19 $14 $19 $1E $19 $1E $20 $1D
.db $20 $1E $1B $1E $1B $1D $1E $1B
.db $16 $0F $16 $1B $1E $1D $19 $1D
.db $19 $1B $1D $20 $1D $20 $1D $19
.db $1D $1E $1B $1E $1B $16 $1B $1B
.db $16 $1B $16 $12 $0F $1D $19 $1D
.db $19 $14 $19 $14 $11 $14 $19 $1D
.db $20 $1E $1B $1E $1B $1D $1E $1B
.db $16 $1B $16 $0F $1E $1D $19 $1D
.db $19 $14 $19 $1E $1B $1E $20 $1B
.db $20 $1E $16 $0F $1E $16 $1B $1D
.db $16 $1B $1D $16 $1B $1B $16 $1B
.db $1B $16 $1B $1A $16 $1A $1A $16
.db $1A $E2 $FD $68 $98 $EF $89 $19
.db $83 $1B $81 $7E $82 $17 $17 $1D
.db $1B $82 $19 $83 $19 $1B $81 $7E
.db $82 $17 $17 $1D $1B $89 $19 $83
.db $1B $81 $7E $82 $17 $17 $19 $1B
.db $82 $19 $83 $19 $1B $81 $7E $82
.db $17 $19 $1B $1D $FC $30 $96 $BE
.db $00 $C1 $4B $94 $E2 $82 $22 $27
.db $22 $1E $81 $20 $23 $22 $1B $80
.db $1D $EF $82 $22 $23 $22 $20 $81
.db $22 $27 $25 $20 $80 $22 $82 $22
.db $23 $22 $20 $81 $22 $27 $29 $25
.db $20 $82 $22 $23 $81 $22 $1E $20
.db $23 $22 $1E $80 $20 $81 $22 $1E
.db $20 $82 $22 $23 $81 $22 $20 $1E
.db $1D $E2 $FD $45 $98 $EF $89 $1D
.db $83 $1E $81 $7E $82 $1B $1B $20
.db $1E $82 $1D $83 $1D $1E $81 $7E
.db $82 $1B $1B $20 $1E $89 $1D $83
.db $1E $81 $7E $82 $1B $1B $1D $1E
.db $82 $1D $83 $1D $1E $81 $7E $82
.db $1B $1D $1E $20 $FC $5E $97 $BE
.db $00 $C2 $B1 $95 $82 $E7 $1B $1B
.db $1B $1B $EF $E7 $1B $1B $1B $1B
.db $EF $E2 $19 $19 $19 $19 $EF $E6
.db $17 $17 $17 $17 $EF $E2 $16 $16
.db $16 $16 $EF $E2 $E2 $0F $1B $0F
.db $1B $EF $E2 $0D $19 $0D $19 $EF
.db $E2 $0B $17 $0B $17 $EF $E2 $0A
.db $16 $0A $16 $EF $EF $E4 $17 $17
.db $17 $17 $EF $E4 $19 $19 $19 $19
.db $EF $FC $D6 $97 $80 $E8 $7F $7F
.db $7F $EF $82 $E7 $0D $0E $0D $0E
.db $0D $0E $0D $0E $EF $0D $0E $0D
.db $0E $0D $0D $0D $0D $E8 $0D $0D
.db $0D $0D $EF $FC $23 $98 $E3 $89
.db $1B $83 $1B $81 $7E $82 $22 $90
.db $20 $22 $20 $83 $1E $7F $1D $7F
.db $EF $89 $1B $83 $1B $81 $7E $82
.db $22 $83 $20 $7F $1E $7F $1D $7F
.db $FE $E3 $89 $16 $83 $16 $81 $7E
.db $82 $1E $90 $1D $1E $1D $83 $1B
.db $7F $19 $7F $EF $89 $16 $83 $16
.db $81 $7E $82 $1E $83 $1D $7F $1B
.db $7F $19 $7F $FE

L0E988B:
.db $45 $99 $94 $98 $6E $99 $AB $99
.db $10 $BE $00 $C1 $4B $94 $83 $7F
.db $BF $10 $C1 $4B $94 $81 $29 $90
.db $22 $25 $29 $2C $29 $25 $82 $2B
.db $90 $22 $27 $2B $82 $2A $90 $22
.db $27 $2A $29 $22 $25 $27 $1E $27
.db $25 $24 $22 $1D $7F $1D $21 $24
.db $27 $2A $27 $2A $81 $25 $81 $29
.db $90 $22 $25 $29 $2C $29 $25 $82
.db $2B $90 $22 $27 $2B $82 $2A $90
.db $22 $27 $2A $80 $29 $88 $7F $90
.db $29 $7F $29 $81 $2A $90 $22 $27
.db $2A $2E $2A $27 $82 $2C $90 $22
.db $25 $2C $82 $2A $90 $22 $27 $2A
.db $29 $22 $25 $27 $1E $27 $25 $24
.db $22 $1D $7F $1D $21 $24 $27 $2A
.db $27 $2A $81 $25 $81 $2A $90 $22
.db $27 $2A $2E $2A $27 $82 $2C $90
.db $22 $25 $2C $82 $2A $90 $22 $27
.db $2A $82 $2C $90 $22 $25 $2C $82
.db $2A $90 $22 $27 $2C $BF $0E $88
.db $2A $BF $0D $82 $29 $BF $0F $C1
.db $4B $94 $E2 $FD $07 $9A $EF $FC
.db $9B $98 $BE $00 $C0 $91 $94 $83
.db $7F $C0 $91 $94 $FD $D1 $99 $C0
.db $5A $94 $E3 $80 $2A $89 $2A $2E
.db $82 $2A $80 $2C $29 $EF $80 $2A
.db $89 $2A $2C $82 $2A $80 $29 $35
.db $FC $4C $99 $BE $00 $C2 $B1 $95
.db $83 $7F $BE $00 $C2 $B1 $95 $FD
.db $E7 $99 $C2 $B6 $95 $BE $F4 $E3
.db $FD $1B $9A $EF $E2 $84 $24 $7F
.db $24 $7F $7F $7F $24 $7F $81 $24
.db $EF $84 $22 $7F $22 $7F $7F $7F
.db $22 $7F $81 $22 $83 $22 $7F $22
.db $7F $22 $7F $22 $7F $FC $75 $99
.db $83 $7F $82 $E8 $E2 $0D $0D $0D
.db $0D $EF $EF $E7 $81 $07 $89 $0E
.db $83 $40 $82 $40 $40 $81 $0B $EF
.db $81 $07 $89 $0E $83 $40 $82 $0D
.db $0D $0D $0D $FC $AD $99 $83 $E8
.db $11 $7F $11 $7F $11 $7F $11 $7F
.db $EF $E8 $16 $7F $16 $7F $16 $7F
.db $16 $7F $EF $FE $82 $E7 $16 $16
.db $16 $16 $EF $16 $16 $16 $90 $16
.db $7F $1A $82 $E5 $1B $1B $1B $1B
.db $EF $E2 $1C $1C $1C $1C $EF $1B
.db $1B $1B $19 $FE $80 $27 $89 $23
.db $27 $82 $2E $80 $29 $25 $27 $89
.db $27 $29 $82 $2A $80 $29 $25 $FE
.db $E2 $84 $23 $7F $23 $7F $7F $7F
.db $23 $7F $81 $23 $EF $E2 $84 $25
.db $7F $25 $7F $7F $7F $25 $7F $81
.db $25 $EF $FE

L0E9A36:
.dw L0E9A87
.dw L0E9A3F
.dw L0E9AB8
.dw $0000

.db $0E ; ???

L0E9A3F:
.db $BE $01 $C1 $28 $95 $82 $18 $FD
.db $EF $A4 $BE $00 $BF $0D $C1 $32
.db $94 $FD $7F $9B $81 $1B $82 $1B
.db $1D $1E $20 $88 $22 $81 $20 $FD
.db $7F $9B $81 $1B $82 $1E $1D $20
.db $27 $88 $19 $81 $22 $82 $22 $81
.db $20 $82 $20 $81 $22 $82 $20 $88
.db $7E $81 $1E $C1 $4B $94 $BE $F4
.db $FD $BC $9B $BE $00 $FC $4D $9A

L0E9A87:
.db $BE $01 $C0 $28 $95 $82 $11 $FD
.db $8C $A5 $BE $00 $C0 $26 $94 $90
.db $7F $FD $7F $9B $81 $1B $82 $1B
.db $1D $1E $20 $88 $22 $82 $20 $90
.db $7F $7F $C0 $32 $94 $FD $91 $9B
.db $C0 $4B $94 $FD $BC $9B $FC $93
.db $9A

L0E9AB8:
.db $BE $01 $C2 $B1 $95 $82 $18 $FD
.db $29 $A6 $BE $00 $82 $7F $C2 $B6
.db $95 $83 $FD $18 $9C $1E $22 $25
.db $2A $25 $22 $19 $20 $25 $29 $25
.db $20 $FD $18 $9C $16 $22 $25 $29
.db $25 $22 $1B $22 $25 $2A $25 $22
.db $19 $23 $25 $29 $2C $29 $19 $23
.db $25 $29 $2C $23 $1E $2A $25 $2A
.db $19 $25 $88 $1E $83 $E4 $20 $1E
.db $22 $25 $29 $25 $EF $19 $24 $25
.db $29 $2C $29 $22 $24 $25 $29 $2C
.db $29 $20 $24 $25 $29 $2C $29 $22
.db $24 $25 $29 $2C $29 $E4 $1D $21
.db $24 $27 $29 $27 $EF $83 $16 $22
.db $26 $29 $82 $2E $83 $16 $22 $26
.db $29 $82 $2D $83 $16 $22 $26 $29
.db $82 $2C $83 $16 $22 $26 $29 $82
.db $2B $83 $E2 $E2 $1C $22 $25 $28
.db $2C $28 $EF $E2 $1B $23 $27 $2A
.db $2F $2A $EF $EF $19 $20 $25 $28
.db $2C $28 $1E $22 $25 $28 $2C $28
.db $17 $23 $27 $2A $2F $2A $17 $23
.db $27 $2A $2F $2A $BF $0C $0D $19
.db $1D $20 $25 $27 $BF $0B $81 $29
.db $82 $7F $BF $0D $FC $C6 $9A $83
.db $1E $20 $81 $22 $82 $22 $22 $20
.db $1E $81 $20 $82 $20 $20 $1E $1D
.db $FE $83 $22 $23 $81 $25 $82 $25
.db $25 $23 $22 $81 $23 $82 $23 $23
.db $22 $20 $81 $1E $82 $22 $20 $23
.db $2A $88 $29 $81 $25 $82 $25 $81
.db $23 $82 $23 $81 $25 $82 $23 $88
.db $7E $81 $22 $FE $82 $1E $81 $24
.db $82 $25 $81 $27 $82 $29 $88 $2A
.db $81 $27 $82 $2C $88 $7E $88 $7E
.db $88 $7E $81 $29 $82 $1D $81 $24
.db $82 $25 $81 $27 $82 $29 $88 $2A
.db $81 $2C $82 $2A $88 $7E $88 $7E
.db $88 $7E $88 $29 $81 $22 $82 $23
.db $81 $25 $82 $2C $88 $2A $81 $23
.db $82 $23 $81 $22 $82 $23 $81 $25
.db $82 $2C $88 $2A $81 $23 $82 $25
.db $81 $27 $82 $27 $25 $23 $25 $88
.db $7E $88 $23 $88 $20 $81 $25 $FE
.db $1E $22 $25 $2A $25 $22 $17 $23
.db $27 $2A $27 $23 $16 $22 $25 $29
.db $25 $22 $1B $22 $25 $2A $19 $22
.db $17 $23 $27 $2A $27 $23 $17 $23
.db $25 $2C $25 $23 $FE

L0E9C3D:
.db $46 $9C $51 $9C $00 $00 $00 $00
.db $0B $BE $00 $C0 $32 $94 $FD $60
.db $9C $FC $46 $9C $BE $00 $C1 $26
.db $94 $83 $7F $91 $7F $FD $60 $9C
.db $FC $5A $9C $83 $1B $1F $22 $27
.db $2B $2E $1C $1F $22 $25 $28 $2E
.db $E3 $1D $20 $24 $29 $2C $30 $EF
.db $1E $21 $24 $27 $2A $30 $E3 $1F
.db $22 $26 $2B $2E $32 $EF $18 $1F
.db $24 $28 $2B $2E $E3 $1D $20 $24
.db $29 $2C $30 $EF $16 $1D $20 $22
.db $26 $29 $E2 $1B $1F $22 $27 $2B
.db $2E $EF $FE

L0E9CA0:
.db $BE $9C $A9 $9C $D3 $9C $E8 $9C
.db $15 $C1 $86 $94 $BE $F4 $FD $0E
.db $9D $BE $F9 $FD $0E $9D $BE $F5
.db $FD $0E $9D $FC $A9 $9C $BE $F4
.db $C0 $86 $94 $FD $33 $9D $BE $F9
.db $FD $33 $9D $BE $F5 $FD $33 $9D
.db $FC $BE $9C $C2 $AC $95 $BE $F4
.db $FD $58 $9D $BE $F9 $FD $58 $9D
.db $BE $F5 $FD $58 $9D $FC $D3 $9C
.db $83 $E2 $83 $01 $7F $7F $01 $7F
.db $7F $82 $0A $0A $EF $E2 $83 $01
.db $7F $7F $01 $7F $7F $82 $0A $0A
.db $0A $EF $83 $E3 $01 $00 $01 $00
.db $01 $00 $EF $FC $E8 $9C $E2 $83
.db $29 $25 $22 $29 $25 $22 $82 $2A
.db $2A $EF $E2 $82 $29 $83 $22 $82
.db $29 $83 $22 $82 $2A $27 $23 $EF
.db $82 $29 $25 $22 $27 $24 $1D $28
.db $25 $22 $FE $E2 $83 $25 $22 $1D
.db $25 $22 $1D $82 $23 $23 $EF $E2
.db $82 $25 $83 $1D $82 $25 $83 $1D
.db $82 $27 $23 $1E $EF $82 $25 $22
.db $1D $24 $21 $18 $25 $21 $1C $FE
.db $83 $E2 $22 $22 $22 $22 $22 $22
.db $23 $23 $23 $23 $EF $E2 $22 $22
.db $22 $22 $22 $22 $23 $23 $23 $23
.db $23 $23 $EF $22 $22 $22 $22 $22
.db $22 $21 $21 $21 $21 $21 $21 $1F
.db $1F $1F $1F $1F $1F $FE

L0E9D86:
.db $FA $9D $8F $9D $2D $9E $57 $9E
.db $11 $BE $01 $C1 $32 $94 $83 $7F
.db $80 $7F $BE $01 $C1 $32 $94 $FD
.db $99 $9E $84 $29 $BE $EE $C1 $98
.db $94 $E2 $FD $E7 $9E $EF $80 $7F
.db $BE $F5 $80 $35 $8F $35 $36 $33
.db $35 $31 $33 $30 $31 $2E $30 $2C
.db $2E $2A $2C $29 $2A $27 $29 $25
.db $27 $24 $25 $22 $24 $20 $22 $1E
.db $20 $1D $1E $E2 $8F $16 $22 $1D
.db $83 $16 $7F $22 $7F $8F $17 $23
.db $1E $83 $17 $7F $23 $7F $8F $18
.db $24 $1F $83 $18 $7F $24 $7F $8F
.db $19 $25 $20 $83 $19 $7F $25 $7F
.db $EF $FC $98 $9D $BE $01 $C0 $26
.db $94 $83 $7F $80 $7F $C0 $26 $94
.db $85 $7F $FD $99 $9E $85 $29 $C0
.db $5A $94 $FD $E7 $9E $BE $06 $FD
.db $E7 $9E $80 $7F $C0 $5A $94 $BE
.db $01 $80 $E3 $29 $2A $EF $E2 $29
.db $2A $2B $2C $EF $FC $03 $9E $C2
.db $AC $95 $83 $7F $80 $7F $C2 $AC
.db $95 $BE $01 $E4 $FD $FB $9E $EF
.db $BE $FA $FD $E7 $9E $BE $01 $FD
.db $E7 $9E $80 $7F $E3 $FD $FB $9E
.db $EF $E2 $FD $0E $9F $EF $FC $34
.db $9E $83 $7F $82 $00 $00 $00 $84
.db $0E $0E $0D $7F $82 $E8 $01 $0B
.db $8A $01 $84 $01 $82 $0B $EF $83
.db $E2 $02 $02 $7F $02 $02 $7F $02
.db $02 $7F $02 $02 $7F $02 $02 $7F
.db $02 $EF $82 $00 $00 $00 $84 $0E
.db $0E $0D $7F $E2 $E7 $82 $01 $0B
.db $8A $01 $84 $01 $82 $0B $EF $EF
.db $FC $62 $9E $80 $7E $83 $1D $84
.db $1B $1D $83 $1E $84 $1D $1E $83
.db $20 $84 $1E $20 $83 $22 $84 $23
.db $20 $80 $7E $83 $22 $84 $20 $22
.db $83 $23 $84 $22 $23 $83 $25 $84
.db $23 $25 $83 $27 $84 $28 $23 $80
.db $7E $83 $22 $84 $29 $22 $83 $29
.db $84 $22 $29 $E4 $83 $22 $84 $29
.db $22 $83 $29 $84 $22 $29 $EF $83
.db $22 $84 $29 $22 $83 $29 $84 $22
.db $FE $83 $29 $29 $7F $29 $82 $29
.db $83 $29 $29 $7F $29 $82 $29 $83
.db $2A $2A $7F $2A $FE $83 $22 $22
.db $1D $22 $7F $22 $1D $22 $83 $23
.db $23 $1E $23 $7F $23 $1E $23 $FE
.db $83 $22 $22 $1D $22 $7F $22 $1D
.db $22 $83 $23 $23 $1E $23 $7F $23
.db $1F $23 $83 $24 $24 $1F $24 $7F
.db $24 $1F $24 $83 $25 $25 $20 $25
.db $7F $25 $20 $25 $FE

L0E9F33:
.db $3C $9F $46 $9F $00 $00 $00 $00
.db $0A $BE $00 $C0 $5A $94 $82 $15
.db $81 $14 $FF $BE $00 $C1 $5A $94
.db $82 $17 $81 $10 $FF

L0E9F50:
.db $59 $9F $76 $9F $00 $00 $00 $00
.db $0C $BE $00 $C0 $74 $94 $81 $21
.db $26 $28 $1C $BF $09 $81 $26 $82
.db $25 $23 $80 $25 $82 $BF $0B $7F
.db $1C $21 $1C $FC $6F $9F $BE $00
.db $C1 $74 $94 $82 $28 $2D $83 $2C
.db $2A $28 $26 $81 $25 $82 $23 $21
.db $BF $09 $80 $21 $21 $BF $0B $15
.db $15 $FC $8F $9F

L0E9F94:
.db $9D $9F $AA $9F $B6 $9F $00 $00
.db $14 $BE $00 $C0 $28 $95 $83 $24
.db $24 $24 $80 $24 $BD $FF $BE $00
.db $C1 $28 $95 $83 $1F $1F $1F $80
.db $21 $FF $BE $00 $C2 $AC $95 $83
.db $1D $1D $1D $C2 $B6 $95 $80 $1D
.db $FF

L0E9FC5:
.db $E0 $9F $CE $9F $F2 $9F $00 $00
.db $15 $BE $00 $C1 $4B $94 $90 $1F
.db $22 $27 $22 $27 $2B $29 $26 $29
.db $88 $2E $FF $BE $00 $C0 $4B $94
.db $90 $1B $1F $22 $1B $1F $22 $22
.db $22 $22 $88 $26 $FF $BE $0C $C2
.db $AC $95 $90 $1B $1F $22 $1F $22
.db $27 $26 $22 $26 $C2 $B6 $95 $88
.db $26 $FF

L0EA007:
.db $28 $A0 $10 $A0 $00 $00 $00 $00
.db $1A $BE $06 $C1 $28 $95 $90 $1B
.db $20 $24 $82 $27 $90 $1B $20 $24
.db $82 $27 $90 $1B $20 $24 $88 $27
.db $FF $BE $06 $C0 $28 $95 $90 $18
.db $1B $20 $82 $24 $90 $18 $1B $20
.db $82 $24 $90 $18 $1B $20 $88 $24
.db $BD $FF

L0EA041:
.db $EE $A0 $4A $A0 $7E $A1 $00 $00
.db $0E $BE $00 $C1 $4B $94 $88 $7F
.db $7F $C1 $4B $94 $FD $DF $A1 $C1
.db $98 $94 $88 $7E $7E $81 $2E $82
.db $2C $81 $2A $82 $29 $E3 $81 $27
.db $82 $25 $81 $27 $82 $28 $81 $2A
.db $82 $7E $2C $2A $28 $EF $88 $7E
.db $7E $81 $27 $82 $24 $81 $20 $82
.db $1E $BF $0F $C1 $4B $94 $81 $1C
.db $1B $1C $83 $1E $20 $22 $25 $81
.db $23 $22 $20 $82 $1E $83 $1C $1B
.db $81 $1C $1E $20 $83 $22 $23 $22
.db $1E $83 $E6 $20 $27 $25 $EF $20
.db $82 $27 $25 $83 $20 $1C $1E $88
.db $20 $83 $27 $25 $20 $82 $27 $25
.db $83 $20 $22 $23 $88 $25 $83 $19
.db $20 $1E $25 $22 $1E $25 $20 $23
.db $1E $27 $22 $23 $22 $2A $25 $BF
.db $0C $82 $27 $83 $25 $BF $0B $82
.db $23 $83 $22 $BF $09 $82 $23 $83
.db $22 $BF $0E $81 $20 $80 $1E $7F
.db $81 $7F $FC $52 $A0 $BE $00 $C0
.db $4B $94 $88 $7F $7F $C0 $5A $94
.db $FD $0D $A2 $81 $35 $82 $2E $88
.db $7E $7E $31 $E3 $88 $7E $2A $81
.db $27 $82 $25 $81 $27 $82 $28 $EF
.db $88 $7E $7E $81 $24 $82 $27 $81
.db $2C $82 $2A $C0 $4B $94 $81 $19
.db $17 $19 $83 $1B $1C $1E $22 $81
.db $20 $1E $1C $82 $1B $83 $19 $17
.db $81 $19 $1B $1C $83 $1E $20 $1E
.db $1B $83 $E6 $1C $23 $22 $EF $1C
.db $82 $23 $22 $83 $1C $19 $1B $88
.db $1C $83 $23 $22 $1C $82 $23 $22
.db $83 $1C $1E $20 $88 $22 $83 $16
.db $1C $1B $22 $1E $1B $22 $1E $20
.db $1B $23 $1E $20 $1E $27 $22 $82
.db $20 $83 $20 $82 $1E $83 $1E $82
.db $1C $83 $1C $81 $1B $80 $19 $7F
.db $81 $7F $FC $F6 $A0 $BE $00 $C2
.db $B6 $95 $83 $E2 $1B $1E $22 $25
.db $29 $2A $EF $BE $00 $FD $30 $A2
.db $E4 $1E $22 $25 $29 $2C $2E $EF
.db $E4 $1C $20 $23 $27 $2A $2C $EF
.db $E4 $1B $1E $22 $25 $29 $2A $EF
.db $E4 $19 $1C $20 $23 $27 $28 $EF
.db $E4 $18 $1B $20 $24 $20 $1B $EF
.db $E7 $19 $1C $20 $23 $1B $1E $22
.db $25 $1C $20 $23 $27 $1E $22 $25
.db $28 $EF $20 $23 $27 $1E $22 $25
.db $1C $20 $23 $E4 $1B $1E $22 $25
.db $29 $2A $EF $FC $8C $A1 $81 $27
.db $82 $2E $81 $29 $82 $25 $22 $25
.db $29 $81 $2A $82 $25 $81 $23 $82
.db $2E $81 $2C $82 $2A $29 $2A $2C
.db $2A $29 $27 $81 $25 $82 $27 $81
.db $29 $82 $2A $81 $2C $82 $2E $81
.db $2F $82 $31 $FE $88 $33 $35 $82
.db $33 $35 $36 $35 $33 $31 $88 $38
.db $2F $2C $82 $2E $2C $2A $81 $29
.db $82 $2A $81 $2C $82 $2E $81 $35
.db $82 $36 $81 $38 $82 $3A $FE $83
.db $E4 $1B $1E $22 $25 $29 $2A $EF
.db $E4 $20 $23 $27 $2A $2E $2F $EF
.db $E4 $19 $1D $20 $23 $27 $29 $EF
.db $FE

L0EA24A:
.db $D6 $A2 $53 $A2 $1F $A3 $6B $A3
.db $0E $BE $00 $C1 $98 $94 $83 $7F
.db $FD $89 $A3 $90 $20 $22 $24 $82
.db $25 $27 $8A $29 $84 $2A $81 $29
.db $82 $27 $25 $90 $22 $24 $25 $82
.db $27 $25 $8A $24 $84 $22 $81 $24
.db $20 $90 $22 $24 $25 $82 $27 $25
.db $8A $24 $84 $22 $80 $27 $FD $89
.db $A3 $E2 $90 $20 $22 $24 $82 $25
.db $EF $89 $24 $84 $20 $20 $81 $20
.db $81 $20 $82 $29 $83 $27 $25 $81
.db $22 $83 $24 $25 $27 $24 $82 $20
.db $83 $22 $24 $25 $20 $1E $20 $22
.db $24 $25 $22 $22 $24 $25 $22 $81
.db $7E $83 $24 $25 $27 $20 $88 $29
.db $82 $2A $82 $29 $83 $27 $25 $82
.db $22 $83 $24 $25 $82 $24 $22 $20
.db $1E $FC $5A $A2 $BE $00 $C0 $98
.db $94 $83 $7F $82 $E8 $1D $1E $20
.db $1E $EF $E2 $1B $1B $1B $1B $1B
.db $1B $1B $1B $EF $E6 $1D $1E $20
.db $1E $EF $1D $1D $1C $1C $88 $20
.db $82 $20 $19 $19 $1D $1D $1B $1B
.db $1B $1B $24 $24 $29 $29 $25 $25
.db $25 $25 $27 $27 $27 $27 $25 $25
.db $24 $24 $25 $25 $25 $25 $20 $1E
.db $1D $1B $FC $DD $A2 $BE $00 $C2
.db $B1 $95 $83 $7F $82 $E8 $19 $1B
.db $1D $1B $EF $E2 $1F $1F $1F $1F
.db $20 $20 $20 $20 $EF $E6 $19 $1B
.db $1D $1B $EF $19 $19 $19 $19 $88
.db $1B $82 $19 $C2 $AC $95 $1D $1D
.db $22 $20 $1E $1E $20 $20 $1D $1D
.db $22 $22 $1E $1E $1F $1F $20 $20
.db $1E $1E $1D $1D $1B $1B $1D $1D
.db $1F $1F $27 $25 $24 $22 $FC $26
.db $A3 $83 $7F $E5 $E4 $90 $0C $0C
.db $0C $82 $0C $0C $8A $0C $84 $0C
.db $EF $EF $E8 $82 $0C $0C $0C $8A
.db $0C $84 $0C $EF $FC $6D $A3 $90
.db $20 $22 $24 $82 $25 $27 $8A $29
.db $84 $2A $80 $2C $90 $20 $22 $24
.db $82 $25 $27 $8A $29 $84 $2A $81
.db $29 $25 $90 $20 $22 $24 $82 $25
.db $27 $8A $29 $84 $2A $80 $2C $FE

L0EA3B2:
.db $25 $A4 $BB $A3 $36 $A4 $00 $00
.db $0D $BE $0C $C1 $98 $94 $E2 $FD
.db $41 $A4 $EF $BE $00 $C1 $4B $94
.db $83 $27 $2E $81 $29 $83 $27 $31
.db $81 $29 $83 $27 $2E $82 $2A $83
.db $29 $27 $88 $2A $C1 $98 $94 $FD
.db $41 $A4 $C1 $4B $94 $83 $27 $2A
.db $89 $33 $82 $31 $2E $2F $2C $2E
.db $83 $2A $29 $27 $88 $31 $C1 $98
.db $94 $FD $41 $A4 $C1 $4B $94 $83
.db $7F $35 $33 $36 $35 $33 $7F $7F
.db $C1 $98 $94 $FD $41 $A4 $C1 $4B
.db $94 $83 $2F $2E $31 $2C $7F $2F
.db $7F $2E $C1 $98 $94 $FD $41 $A4
.db $FC $BB $A3 $BE $00 $C0 $98 $94
.db $83 $0F $16 $0F $16 $0F $17 $0F
.db $17 $FC $25 $A4 $BE $0C $C2 $B1
.db $95 $FD $41 $A4 $FC $36 $A4 $83
.db $16 $1B $16 $1B $16 $1D $16 $1D
.db $16 $1E $16 $1E $16 $20 $16 $20
.db $FE

L0EA453:
.db $67 $A4 $5C $A4 $74 $A4 $00 $00
.db $0E $BE $0C $C1 $9F $94 $FD $97
.db $A4 $FC $5C $A4 $BE $0C $C0 $26
.db $94 $84 $7F $FD $97 $A4 $FC $6E
.db $A4 $BE $00 $C2 $B6 $95 $E2 $E2
.db $83 $22 $29 $2A $89 $2C $EF $E2
.db $83 $20 $27 $29 $89 $2A $EF $EF
.db $83 $E4 $22 $29 $2A $31 $30 $2E
.db $EF $FC $74 $A4 $E4 $90 $24 $22
.db $24 $22 $24 $22 $24 $22 $24 $22
.db $24 $22 $24 $22 $24 $22 $24 $22
.db $EF $E3 $90 $24 $29 $24 $22 $24
.db $29 $24 $22 $24 $29 $24 $22 $EF
.db $FE

L0EA4BC:
.db $D2 $A4 $C5 $A4 $DF $A4 $00 $00
.db $0D $BE $00 $C1 $28 $95 $82 $18
.db $FD $EF $A4 $FC $CC $A4 $BE $00
.db $C0 $28 $95 $82 $11 $FD $8C $A5
.db $FC $D9 $A4 $BE $00 $C2 $B1 $95
.db $82 $18 $C2 $B1 $95 $FD $29 $A6
.db $FC $E6 $A4 $E2 $89 $1D $84 $1C
.db $1D $82 $1F $8A $24 $84 $22 $81
.db $21 $1F $82 $1D $8A $1C $84 $1D
.db $82 $1F $8A $18 $84 $1F $81 $21
.db $1F $89 $1D $84 $1C $1D $82 $1F
.db $8A $18 $84 $1F $81 $21 $24 $82
.db $29 $8A $28 $84 $29 $82 $2B $24
.db $80 $29 $81 $7E $83 $1A $1A $1C
.db $1D $89 $1D $84 $1C $1A $81 $1C
.db $81 $7E $83 $1D $1D $1F $21 $89
.db $21 $84 $1F $1D $82 $1F $18 $EF
.db $89 $21 $84 $21 $21 $82 $21 $21
.db $82 $21 $24 $22 $21 $89 $21 $84
.db $21 $21 $82 $21 $22 $80 $1F $89
.db $21 $84 $21 $21 $82 $21 $21 $82
.db $21 $24 $22 $21 $89 $21 $83 $1F
.db $89 $1F $83 $26 $89 $26 $83 $24
.db $82 $24 $22 $89 $21 $84 $21 $21
.db $82 $21 $21 $80 $21 $89 $21 $84
.db $21 $21 $82 $21 $21 $80 $1F $FE
.db $E2 $89 $15 $84 $15 $15 $82 $18
.db $8A $1C $84 $1C $81 $18 $16 $82
.db $1A $8A $18 $84 $1A $82 $1C $8A
.db $13 $84 $1C $81 $18 $16 $89 $15
.db $84 $15 $15 $82 $18 $8A $13 $84
.db $18 $81 $18 $1F $82 $21 $8A $21
.db $84 $21 $82 $24 $1F $80 $21 $81
.db $7E $83 $16 $16 $18 $1A $89 $1A
.db $84 $16 $16 $81 $18 $81 $7E $83
.db $1A $1A $1C $1D $89 $1D $84 $1C
.db $1A $82 $1C $15 $EF $89 $1D $84
.db $1D $1D $82 $1D $1D $82 $1D $21
.db $1F $1D $89 $1D $84 $1D $1D $82
.db $1D $1F $80 $1C $89 $1D $84 $1D
.db $1D $82 $1D $1D $82 $1D $21 $1F
.db $1D $89 $1D $83 $1C $89 $1C $83
.db $21 $89 $21 $83 $1F $82 $1F $1A
.db $89 $1A $84 $1A $1A $82 $1A $1A
.db $80 $1A $89 $1A $84 $1A $1A $82
.db $1A $1A $80 $1C $FE $E2 $82 $1D
.db $1D $18 $18 $1D $1D $18 $18 $16
.db $16 $18 $18 $11 $11 $18 $18 $1D
.db $1D $18 $18 $1D $1D $1C $1C $1A
.db $1A $18 $18 $1D $1C $1A $18 $E2
.db $16 $16 $16 $16 $18 $18 $18 $18
.db $EF $EF $89 $1D $84 $1D $1D $82
.db $1D $1D $82 $1D $1D $1D $1D $89
.db $18 $84 $18 $18 $82 $18 $18 $C2
.db $B6 $95 $80 $18 $C2 $B1 $95 $89
.db $1D $84 $1D $1D $82 $1D $1D $82
.db $1D $1D $1D $1D $89 $18 $83 $18
.db $89 $18 $83 $18 $89 $18 $83 $18
.db $82 $18 $18 $89 $16 $84 $16 $16
.db $82 $16 $16 $C2 $B6 $95 $80 $16
.db $C2 $B1 $95 $89 $18 $84 $18 $18
.db $82 $18 $18 $C2 $B6 $95 $80 $18
.db $FE

L0EA6AD:
.db $B6 $A6 $CE $9F $F2 $9F $00 $00
.db $15 $BE $00 $C0 $4B $94 $90 $1B
.db $1F $22 $1B $1F $22 $22 $22 $22
.db $88 $26 $BD $FF

L0EA6C9:
.db $DF $A6 $D2 $A6 $00 $00 $00 $00
.db $0E $BE $00 $C0 $74 $94 $83 $23
.db $21 $27 $20 $FC $D2 $A6 $BE $00
.db $C0 $74 $94 $83 $19 $1A $1C $1E
.db $FC $DF $A6

L0EA6EC:
.db $26 $A7 $F5 $A6 $5B $A7 $00 $00
.db $0E $BE $00 $C0 $9F $94 $84 $E8
.db $FD $A4 $A7 $EF $E4 $FD $B5 $A7
.db $EF $E2 $FD $C5 $A7 $EF $E3 $FD
.db $D5 $A7 $EF $86 $7F $BF $0C $90
.db $20 $22 $24 $BF $0B $25 $24 $22
.db $BF $09 $20 $22 $24 $BF $0E $FC
.db $F5 $A6 $BE $0C $C0 $26 $94 $86
.db $7F $84 $E8 $FD $A4 $A7 $EF $E4
.db $FD $B5 $A7 $EF $E4 $FD $C5 $A7
.db $EF $BE $00 $1D $1E $20 $22 $20
.db $1E $1D $1E $20 $22 $20 $1E $1D
.db $1E $20 $90 $1D $1E $20 $22 $20
.db $1E $1D $1E $20 $FC $26 $A7 $BE
.db $00 $C2 $B6 $95 $80 $1D $19 $16
.db $18 $1D $19 $16 $88 $18 $83 $7F
.db $1C $C2 $B1 $95 $8A $1D $1D $1D
.db $1D $1D $19 $19 $19 $19 $19 $16
.db $16 $16 $16 $16 $18 $18 $18 $18
.db $18 $19 $19 $19 $19 $19 $1B $1B
.db $1B $1B $1B $E2 $1D $1D $1D $1D
.db $1D $EF $1E $1E $1E $1E $1E $86
.db $7F $82 $1E $1E $1E $FC $5B $A7
.db $1F $20 $1D $22 $1F $20 $1D $22
.db $1F $20 $24 $20 $1F $20 $1D $22
.db $FE $1F $20 $1D $22 $1F $20 $1D
.db $22 $1F $20 $24 $20 $1F $20 $1D
.db $FE $1D $1F $20 $22 $20 $1F $1D
.db $1F $20 $22 $20 $1F $1D $1F $20
.db $FE $20 $22 $24 $25 $24 $22 $20
.db $22 $24 $25 $24 $22 $20 $22 $24
.db $FE

L0EA7E5:
.db $3A $A8 $EE $A7 $7A $A8 $BB $A8
.db $10 $BE $04 $C1 $9F $94 $82 $7F
.db $BF $1A $C1 $5A $94 $FD $F7 $A8
.db $BF $10 $C1 $9F $94 $E4 $FD $17
.db $A9 $EF $BF $1A $C1 $5A $94 $FD
.db $06 $A9 $BF $10 $C1 $9F $94 $E5
.db $FD $21 $A9 $EF $85 $7F $C1 $34
.db $95 $FD $2F $A9 $C1 $40 $95 $FD
.db $2F $A9 $C1 $4C $95 $FD $2F $A9
.db $C1 $58 $95 $FD $2F $A9 $84 $7F
.db $85 $7F $FC $F5 $A7 $BE $04 $C0
.db $9F $94 $82 $7F $C0 $5A $94 $83
.db $7F $FD $F7 $A8 $C0 $9F $94 $E4
.db $FD $17 $A9 $EF $C0 $5A $94 $FD
.db $06 $A9 $C0 $9F $94 $E5 $FD $21
.db $A9 $EF $C0 $34 $95 $FD $2F $A9
.db $C0 $40 $95 $FD $2F $A9 $C0 $4C
.db $95 $FD $2F $A9 $C0 $58 $95 $FD
.db $2F $A9 $FC $41 $A8 $BE $04 $C2
.db $B1 $95 $82 $7F $C2 $B1 $95 $E4
.db $89 $0D $14 $82 $1B $14 $EF $83
.db $E2 $E2 $0D $19 $0F $1B $EF $EF
.db $E4 $89 $0D $14 $82 $1B $14 $EF
.db $83 $7F $C2 $B6 $95 $88 $12 $FD
.db $21 $A9 $89 $32 $35 $36 $30 $80
.db $33 $88 $7F $81 $7F $E4 $82 $14
.db $83 $7F $EF $FC $81 $A8 $85 $7F
.db $00 $00 $00 $00 $00 $00 $00 $83
.db $E4 $07 $07 $40 $07 $07 $07 $07
.db $41 $07 $41 $EF $E4 $01 $01 $01
.db $01 $EF $E4 $07 $07 $40 $07 $07
.db $07 $07 $40 $07 $40 $EF $88 $7F
.db $7F $7F $7F $7F $7F $7F $0A $81
.db $0A $83 $7F $7F $84 $07 $07 $FC
.db $C4 $A8 $80 $7E $82 $37 $80 $7E
.db $82 $3A $80 $7E $7E $82 $7E $33
.db $FE $80 $7E $82 $38 $80 $7E $82
.db $3F $80 $7E $82 $3B $80 $7E $82
.db $3C $FE $84 $19 $1C $1F $1C $22
.db $1C $23 $1C $FE $84 $12 $15 $14
.db $15 $12 $15 $14 $15 $12 $15 $14
.db $15 $FE $84 $7F $14 $17 $14 $19
.db $14 $1B $14 $1C $14 $1B $14 $FE

L0EA93D:
.db $51 $A9 $46 $A9 $00 $00 $00 $00
.db $0F $BE $FF $C1 $15 $95 $FD $CE
.db $A9 $FC $46 $A9 $BE $FF $C0 $FC
.db $94 $FD $5C $A9 $FC $56 $A9 $83
.db $E2 $14 $17 $1B $20 $EF $E2 $12
.db $17 $1B $20 $EF $E2 $11 $17 $1B
.db $20 $EF $E2 $0F $16 $1B $1F $EF
.db $E2 $14 $17 $1B $20 $EF $E2 $12
.db $17 $1B $20 $EF $E2 $11 $17 $1B
.db $20 $EF $E2 $10 $17 $1B $20 $EF
.db $E4 $0F $16 $1B $1F $EF $E2 $10
.db $17 $1C $20 $EF $E2 $12 $19 $1E
.db $22 $EF $E4 $14 $1B $20 $23 $EF
.db $E2 $10 $17 $1C $20 $EF $E2 $12
.db $16 $19 $1E $EF $E3 $14 $17 $1B
.db $20 $EF $12 $16 $19 $1E $E2 $10
.db $17 $1C $20 $EF $E2 $0F $16 $1B
.db $1E $EF $E4 $14 $17 $1B $20 $EF
.db $FE $81 $2E $7E $82 $2F $2E $2F
.db $31 $81 $33 $82 $31 $2F $81 $2E
.db $82 $27 $2B $2E $2F $81 $7E $82
.db $27 $2E $2F $27 $2E $2F $81 $7E
.db $82 $27 $25 $2A $28 $80 $7E $81
.db $27 $82 $7F $27 $81 $27 $7E $82
.db $28 $25 $2A $2E $2E $2F $81 $7E
.db $81 $27 $82 $7F $27 $81 $27 $7E
.db $82 $28 $25 $2A $2E $2E $2F $81
.db $7E $82 $33 $31 $2F $2E $81 $2E
.db $80 $2C $81 $2A $80 $7E $80 $2C
.db $FE

L0EAA26:
.dw L0EAA8E
.dw L0EAA2F
.dw L0EAAD7
.dw L0EAB27

.db $10 ; ???

L0EAA2F:
.db $BE $00 $C1 $74 $94 $80 $7F $7F
.db $25 $82 $2C $2F $2E $2A $80 $7E
.db $2C $80 $7F $7F $20 $81 $25 $28
.db $80 $27 $81 $25 $23 $80 $7E $7E
.db $20 $BF $0D $88 $7F $7F $7F $7F
.db $E2 $14 $17 $16 $12 $7E $14 $EF
.db $E2 $14 $17 $16 $19 $EF $E3 $88
.db $17 $1A $19 $89 $1C $83 $7F $1C
.db $19 $EF $88 $7E $17 $7E $19 $7F
.db $BF $0B $89 $7F $BF $09 $7F $BF
.db $0B $88 $20 $89 $25 $28 $88 $27
.db $89 $2A $2F $88 $7E $31 $FF

L0EAA8E:
.db $BE $00 $C0 $74 $94 $80 $7F $7E
.db $7E $7E $7E $19 $7F $7E $7E $7E
.db $7E $7E $7E $7E $19 $88 $7F $7F
.db $7F $7F $E2 $10 $14 $12 $0E $7E
.db $11 $EF $E2 $10 $14 $12 $16 $EF
.db $E3 $88 $12 $15 $14 $89 $17 $83
.db $7F $15 $14 $EF $88 $7E $12 $7E
.db $11 $7F $7F $88 $1B $89 $1E $21
.db $88 $20 $89 $23 $27 $88 $7E $29
.db $FF

L0EAAD7:
.db $BE $00 $C2 $BB $95 $80 $7E $7E
.db $7E $7E $19 $7F $7E $7E $7E $7E
.db $7E $7E $7E $19 $7F $C2 $AC $95
.db $E2 $E8 $FD $47 $AB $EF $EF $BE
.db $FE $E4 $E5 $FD $47 $AB $EF $EF
.db $E2 $FD $47 $AB $EF $BE $00 $E3
.db $FD $47 $AB $EF $84 $19 $7F $7F
.db $19 $19 $7F $83 $19 $19 $19 $C2
.db $B6 $95 $88 $19 $89 $19 $19 $88
.db $19 $89 $19 $19 $88 $7E $19 $FF

L0EAB27:
.db $80 $7F $7F $7F $7F $7F $7F $7F
.db $7F $7F $7F $7F $7F $7F $7F $7F
.db $E4 $EA $84 $0E $7F $7F $0E $0E
.db $7F $83 $0E $0E $0E $EF $EF $FF
.db $84 $19 $7F $7F $19 $19 $7F $83
.db $19 $19 $19 $FE

L0EAB53:
.db $B7 $AB $5C $AB $FB $AB $3E $AC
.db $13 $BE $F3 $C1 $4B $94 $82 $7F
.db $88 $7F $7F $C1 $4B $94 $E2 $83
.db $FD $4D $AC $22 $FD $4D $AC $23
.db $22 $23 $25 $27 $28 $2C $2B $27
.db $25 $28 $27 $23 $25 $22 $21 $22
.db $23 $25 $28 $29 $2A $29 $28 $29
.db $22 $24 $25 $27 $29 $2C $2B $27
.db $25 $29 $27 $24 $25 $84 $23 $22
.db $81 $7E $88 $21 $EF $C1 $5A $94
.db $89 $26 $29 $28 $2B $88 $2A $C1
.db $91 $94 $83 $7F $23 $24 $21 $22
.db $1F $FC $66 $AB $BE $FF $C0 $AB
.db $94 $82 $7F $83 $E2 $0F $0F $7F
.db $0F $0F $0F $EF $E2 $E8 $0F $0F
.db $7F $0F $0F $0F $EF $E7 $11 $11
.db $7F $11 $11 $11 $EF $12 $12 $7F
.db $12 $12 $12 $EF $C1 $5A $94 $91
.db $7F $89 $21 $24 $23 $26 $88 $25
.db $83 $7F $2F $30 $2D $2E $91 $2B
.db $7F $C0 $AB $94 $83 $FC $C7 $AB
.db $BE $FF $C2 $AC $95 $82 $7F $83
.db $E2 $20 $20 $7F $20 $20 $20 $EF
.db $BE $FF $E2 $E8 $20 $20 $7F $20
.db $20 $20 $EF $E7 $22 $22 $7F $22
.db $22 $22 $EF $23 $23 $7F $23 $23
.db $23 $EF $C2 $B6 $95 $89 $17 $1A
.db $19 $1C $88 $1D $BE $FA $C2 $AC
.db $95 $83 $7F $17 $18 $15 $16 $13
.db $FC $0B $AC $82 $7F $88 $00 $00
.db $83 $01 $0C $0C $01 $0C $0C $FC
.db $43 $AC $20 $23 $27 $2A $29 $25
.db $27 $23 $25 $22 $23 $20 $22 $1F
.db $22 $25 $28 $25 $23 $25 $23 $22
.db $20 $FE

L0EAC65:
.dw L0EACE9
.dw L0EAC6E
.dw L0EAD3E
.dw L0EAD93

.db $0F ; ???

L0EAC6E:
.db $BE $F4 $C1 $98 $94 $83 $7F $80
.db $7F $7F $E2 $8A $25 $84 $2C $81
.db $2B $90 $27 $2A $27 $EF $8A $22
.db $84 $29 $81 $27 $90 $25 $27 $23
.db $80 $22 $8A $20 $84 $23 $82 $2B
.db $81 $2A $8A $20 $84 $23 $82 $2C
.db $81 $2B $E2 $90 $29 $27 $29 $2A
.db $2C $2A $EF $80 $29 $7F $7F $E2
.db $88 $26 $82 $1F $88 $21 $82 $24
.db $8A $22 $84 $29 $88 $7E $80 $26
.db $EF $7F $7F $82 $26 $1F $21 $24
.db $81 $22 $21 $82 $1F $21 $22 $29
.db $80 $26 $81 $27 $25 $82 $23 $22
.db $23 $25 $80 $7E $20 $81 $29 $27
.db $82 $25 $22 $21 $24 $80 $7E $22
.db $FC $75 $AC

L0EACE9:
.db $BE $F4 $C0 $AB $94 $83 $7F $82
.db $E5 $1D $1D $1D $1E $EF $1D $1D
.db $1D $1B $E3 $1D $1D $1D $1E $EF
.db $1D $1D $1D $1B $E5 $1A $1A $1A
.db $1B $EF $1A $1A $1A $19 $E3 $1A
.db $1A $1A $1B $EF $1A $1A $1A $19
.db $83 $EB $1A $1A $1B $1B $EF $1A
.db $1A $19 $19 $E7 $1B $1B $1C $1C
.db $EF $1B $1B $1A $1A $E4 $1D $1D
.db $1E $1E $EF $82 $E2 $1D $1D $1D
.db $1D $EF $FC $F0 $AC

L0EAD3E:
.db $BE $F4 $C2 $B1 $95 $83 $7F $82
.db $E5 $22 $22 $22 $23 $EF $22 $22
.db $22 $21 $E3 $22 $22 $22 $23 $EF
.db $22 $22 $22 $21 $E5 $1F $1F $1F
.db $20 $EF $1F $1F $1F $1E $E3 $1F
.db $1F $1F $20 $EF $1F $1F $1F $1E
.db $83 $EB $1F $1F $20 $20 $EF $1F
.db $1F $1E $1E $E7 $20 $20 $21 $21
.db $EF $20 $20 $1F $1F $E4 $22 $22
.db $23 $23 $EF $82 $E2 $22 $22 $22
.db $22 $EF $FC $45 $AD

L0EAD93:
.db $83 $7F $E3 $83 $0D $84 $0C $0C
.db $EF $84 $0D $0C $0C $0C $FC $95
.db $AD

L0EADA4:
.db $35 $AE $AD $AD $C6 $AE $29 $AF
.db $11 $BE $FD $C1 $4B $94 $83 $7F
.db $BF $10 $C1 $4B $94 $81 $29 $90
.db $22 $25 $29 $2C $29 $25 $82 $2B
.db $90 $22 $27 $2B $82 $2A $90 $22
.db $27 $2A $80 $7E $29 $81 $29 $90
.db $22 $25 $29 $2C $29 $25 $82 $2B
.db $90 $22 $27 $2B $82 $2A $90 $22
.db $27 $2A $80 $7E $88 $29 $90 $29
.db $7F $29 $81 $29 $90 $20 $25 $29
.db $2C $29 $25 $82 $2B $90 $22 $27
.db $2B $82 $2E $90 $27 $2B $2E $88
.db $7E $83 $2E $84 $30 $2E $80 $2D
.db $89 $2D $84 $2F $2D $81 $2C $89
.db $2C $84 $2E $2C $81 $2B $89 $2B
.db $84 $2C $2B $81 $2A $89 $2A $84
.db $2C $2A $81 $29 $BF $0F $C1 $4B
.db $94 $E2 $FD $07 $9A $EF $FC $B4
.db $AD $BE $FD $C0 $4B $94 $83 $7F
.db $C0 $4B $94 $81 $25 $90 $1D $22
.db $25 $29 $25 $22 $82 $27 $90 $1D
.db $22 $27 $82 $27 $90 $1D $22 $27
.db $80 $7E $26 $81 $25 $90 $1D $22
.db $25 $29 $25 $22 $82 $27 $90 $1D
.db $22 $27 $82 $27 $90 $1D $22 $27
.db $80 $7E $88 $26 $90 $26 $7F $26
.db $81 $25 $90 $1D $20 $25 $29 $25
.db $20 $82 $27 $90 $1F $22 $27 $82
.db $2B $90 $22 $27 $2B $88 $7E $83
.db $2B $84 $2D $2B $80 $29 $89 $28
.db $84 $28 $28 $81 $28 $89 $27 $84
.db $27 $27 $81 $27 $89 $26 $84 $26
.db $26 $81 $26 $89 $25 $84 $25 $25
.db $81 $25 $C0 $5A $94 $E3 $FD $4F
.db $AF $EF $E5 $1E $1B $1E $22 $23
.db $22 $EF $1E $1B $80 $2E $29 $FC
.db $3C $AE $BE $FD $C2 $AC $95 $83
.db $7F $C2 $AC $95 $90 $E8 $22 $7F
.db $22 $22 $7F $22 $22 $7F $22 $22
.db $7F $22 $EF $E8 $20 $7F $20 $EF
.db $E8 $1D $7F $1D $EF $E4 $1C $7F
.db $1C $EF $E4 $1B $7F $1B $EF $E4
.db $1A $7F $1A $EF $E4 $19 $7F $19
.db $EF $C2 $B6 $95 $E3 $FD $1B $9A
.db $EF $E2 $84 $24 $7F $24 $7F $7F
.db $7F $24 $7F $81 $24 $EF $84 $22
.db $7F $22 $7F $7F $7F $22 $7F $81
.db $22 $83 $22 $7F $22 $7F $22 $7F
.db $22 $7F $FC $CD $AE $83 $7F $82
.db $E8 $E2 $0D $0D $0D $0D $EF $EF
.db $E7 $81 $07 $89 $0E $83 $40 $82
.db $40 $40 $81 $0B $EF $81 $07 $89
.db $0E $83 $40 $82 $0D $0D $0D $0D
.db $FC $2B $AF $88 $2A $84 $17 $1B
.db $1E $23 $82 $27 $84 $1B $1E $23
.db $27 $82 $2A $84 $1E $23 $27 $2A
.db $82 $29 $84 $2C $29 $25 $20 $29
.db $25 $20 $1D $25 $20 $1D $19 $81
.db $20 $84 $20 $1D $19 $14 $11 $14
.db $19 $1D $FE

L0EAF7F:
.db $40 $B0 $88 $AF $03 $B1 $6C $B1
.db $12 $BE $FE $C1 $26 $94 $83 $7F
.db $80 $7F $BF $12 $C1 $B9 $94 $83
.db $E2 $7F $29 $29 $7F $27 $27 $7F
.db $29 $7F $2A $2A $7F $29 $29 $7F
.db $2A $7F $2E $2E $7F $2C $2C $7F
.db $2E $7F $2F $2F $7F $2E $2E $7F
.db $2F $7F $31 $EF $E2 $7F $33 $33
.db $7F $31 $31 $7F $2E $7F $2F $7F
.db $2C $7F $2E $7F $2A $7F $29 $29
.db $7F $27 $27 $7F $2A $7F $2C $7F
.db $2E $7F $2F $7F $2C $EF $C1 $5A
.db $94 $80 $7E $7E $7E $2E $C1 $B9
.db $94 $83 $7F $84 $25 $27 $83 $29
.db $84 $25 $27 $81 $29 $82 $7F $83
.db $27 $29 $82 $2A $2C $83 $7F $84
.db $25 $27 $83 $29 $84 $25 $27 $81
.db $29 $8F $7F $2A $29 $27 $25 $23
.db $22 $25 $29 $81 $2C $8F $22 $25
.db $29 $89 $2C $83 $2A $C1 $98 $94
.db $80 $29 $2A $BF $11 $88 $29 $90
.db $29 $29 $29 $88 $2A $90 $2A $2A
.db $2A $88 $2A $90 $2A $2A $2A $89
.db $2A $84 $29 $7E $81 $29 $FC $91
.db $AF $BE $FE $C0 $B9 $94 $83 $7F
.db $80 $7F $C0 $B9 $94 $83 $E2 $7F
.db $22 $22 $7F $20 $20 $7F $22 $7F
.db $23 $23 $7F $22 $22 $7F $23 $7F
.db $25 $25 $7F $23 $23 $7F $25 $7F
.db $27 $27 $7F $25 $25 $7F $27 $7F
.db $28 $EF $E2 $7F $2A $2A $7F $29
.db $29 $7F $25 $7F $27 $7F $23 $7F
.db $25 $7F $22 $7F $20 $20 $7F $1E
.db $1E $7F $22 $7F $23 $7F $25 $7F
.db $27 $7F $23 $EF $C1 $5A $94 $80
.db $7E $7E $7E $25 $C0 $B9 $94 $83
.db $7F $84 $22 $24 $83 $25 $84 $22
.db $24 $81 $25 $82 $7F $83 $23 $25
.db $82 $27 $29 $83 $7F $84 $22 $24
.db $83 $25 $84 $22 $24 $81 $25 $8F
.db $7F $27 $25 $23 $22 $20 $1D $20
.db $22 $81 $25 $8F $1B $1E $20 $89
.db $23 $83 $22 $E4 $83 $1D $84 $1D
.db $1B $EF $E3 $83 $1E $84 $1E $1D
.db $EF $90 $1E $20 $22 $C1 $98 $94
.db $88 $20 $90 $20 $20 $20 $88 $22
.db $90 $22 $22 $22 $88 $20 $90 $20
.db $20 $20 $89 $20 $84 $20 $7E $81
.db $20 $FC $49 $B0 $BE $FE $C2 $AC
.db $95 $83 $7F $80 $7F $C2 $B1 $95
.db $E2 $89 $22 $1D $82 $22 $89 $23
.db $1E $82 $23 $89 $22 $1D $82 $22
.db $89 $23 $1E $82 $23 $23 $EF $E2
.db $89 $22 $22 $82 $22 $22 $22 $22
.db $22 $89 $23 $23 $82 $23 $23 $23
.db $23 $23 $EF $E6 $83 $22 $84 $7F
.db $22 $83 $1D $22 $7F $22 $1D $22
.db $83 $23 $84 $7F $23 $83 $1E $23
.db $7F $23 $1E $23 $EF $88 $22 $90
.db $22 $22 $22 $88 $23 $90 $23 $23
.db $23 $88 $24 $90 $24 $24 $24 $81
.db $25 $25 $FC $0C $B1 $83 $7F $82
.db $00 $00 $00 $84 $0E $0E $0D $7F
.db $E2 $E3 $82 $01 $0B $8A $01 $84
.db $01 $82 $0B $EF $82 $01 $0B $8A
.db $01 $84 $01 $83 $00 $0B $00 $0B
.db $EF $E4 $82 $01 $0B $8A $01 $84
.db $01 $82 $0B $01 $0B $01 $0B $EF
.db $E2 $E6 $82 $01 $0B $8A $01 $84
.db $01 $82 $0B $EF $EF $88 $0A $90
.db $01 $01 $01 $88 $0A $90 $01 $01
.db $01 $88 $0A $90 $01 $01 $01 $81
.db $0A $0A $FC $77 $B1 $80 $7E $83
.db $1D $84 $1B $1D $83 $1E $84 $1D
.db $1E $83 $20 $84 $1E $20 $83 $22
.db $84 $23 $20 $80 $7E $83 $22 $84
.db $20 $22 $83 $23 $84 $22 $23 $83
.db $25 $84 $23 $25 $83 $27 $84 $28
.db $23 $80 $7E $83 $22 $84 $29 $22
.db $83 $29 $84 $22 $29 $E4 $83 $22
.db $84 $29 $22 $83 $29 $84 $22 $29
.db $EF $83 $22 $84 $29 $22 $83 $29
.db $84 $22 $FE $83 $29 $29 $7F $29
.db $82 $29 $83 $29 $29 $7F $29 $82
.db $29 $83 $2A $2A $7F $2A $FE $FE
.db $83 $22 $22 $1D $22 $7F $22 $1D
.db $22 $83 $23 $23 $1E $23 $7F $23
.db $1F $23 $83 $24 $24 $1F $24 $7F
.db $24 $1F $24 $83 $25 $25 $20 $25
.db $7F $25 $20 $25 $FE

L0EB24C:
.db $75 $B2 $55 $B2 $95 $B2 $C2 $B2
.db $0F $BE $00 $C1 $C6 $94 $83 $7F
.db $80 $7F $BE $03 $C1 $E3 $94 $E2
.db $FD $01 $B3 $EF $BE $FE $81 $27
.db $82 $29 $2A $FD $92 $B3 $FC $5E
.db $B2 $BE $00 $C0 $D5 $94 $83 $7F
.db $80 $7F $BE $03 $C0 $65 $94 $E2
.db $FD $2D $B3 $EF $BE $FE $81 $1E
.db $82 $20 $22 $FD $EB $B3 $FC $7E
.db $B2 $BE $03 $C2 $B1 $95 $83 $7F
.db $82 $20 $20 $20 $20 $BE $03 $FD
.db $59 $B3 $E2 $82 $1B $90 $1B $1B
.db $1B $EF $FD $59 $B3 $82 $1B $1B
.db $1B $1B $BE $FE $20 $14 $18 $1B
.db $FD $44 $B4 $FC $A1 $B2 $83 $7F
.db $82 $0C $90 $0C $0C $0C $82 $0C
.db $0C $E8 $E2 $82 $0D $90 $0D $0D
.db $0D $EF $EF $E7 $E2 $82 $0D $90
.db $0D $0D $0D $EF $EF $82 $0D $0D
.db $0D $0D $82 $E6 $0D $0D $0D $0D
.db $EF $E4 $89 $0D $83 $0E $EF $E2
.db $E8 $82 $0D $84 $0C $0C $0C $0C
.db $EF $EF $FC $CD $B2 $81 $1B $24
.db $24 $82 $22 $20 $89 $20 $83 $1F
.db $89 $1F $83 $25 $89 $25 $83 $24
.db $81 $24 $81 $7E $83 $1B $1B $20
.db $24 $81 $27 $82 $25 $24 $24 $22
.db $22 $20 $89 $20 $83 $1F $81 $1F
.db $FE $81 $18 $1B $1D $82 $1D $1D
.db $89 $1B $83 $1B $89 $1B $83 $1D
.db $89 $1D $83 $1B $81 $1B $81 $7E
.db $83 $18 $18 $1B $20 $81 $20 $82
.db $1D $1D $1D $1D $1D $1D $89 $1B
.db $83 $1B $81 $1B $FE $E2 $82 $20
.db $90 $20 $20 $20 $EF $E2 $82 $19
.db $90 $19 $19 $19 $EF $E2 $82 $1B
.db $90 $1B $1B $1B $EF $E2 $82 $20
.db $90 $20 $20 $20 $EF $E2 $82 $20
.db $90 $20 $20 $20 $EF $E2 $82 $19
.db $90 $19 $19 $19 $EF $E2 $82 $1A
.db $90 $1A $1A $1A $EF $FE $89 $2A
.db $83 $29 $81 $29 $29 $82 $2B $2C
.db $89 $2C $83 $2B $81 $2B $2B $82
.db $2C $2E $89 $2E $83 $30 $81 $2C
.db $C1 $F0 $94 $83 $7F $84 $29 $2B
.db $83 $2C $84 $29 $2B $81 $2C $83
.db $7F $84 $29 $2B $83 $2C $84 $29
.db $2B $82 $2C $2E $C1 $4B $94 $81
.db $24 $27 $2C $82 $2B $2C $81 $29
.db $27 $82 $25 $24 $22 $27 $81 $24
.db $27 $25 $82 $24 $22 $81 $24 $8F
.db $22 $24 $22 $81 $22 $21 $FE $89
.db $22 $83 $20 $81 $20 $20 $82 $22
.db $24 $89 $24 $83 $22 $81 $22 $22
.db $82 $24 $25 $89 $25 $83 $27 $81
.db $24 $C0 $F0 $94 $83 $7F $84 $20
.db $22 $83 $24 $84 $20 $22 $81 $24
.db $83 $7F $84 $20 $22 $83 $24 $84
.db $20 $22 $82 $24 $25 $C0 $65 $94
.db $81 $1B $22 $24 $82 $24 $24 $81
.db $20 $1F $82 $1D $1B $19 $1F $81
.db $1B $22 $20 $82 $1F $1F $81 $1E
.db $8F $1E $1E $1E $81 $1D $1D $FE
.db $19 $19 $19 $18 $16 $16 $16 $16
.db $1B $1B $1B $19 $18 $18 $18 $18
.db $1D $1D $1D $1B $E2 $89 $19 $83
.db $19 $EF $E2 $89 $1B $83 $1B $EF
.db $82 $20 $20 $1F $1F $1D $1D $1B
.db $1B $19 $19 $18 $18 $16 $16 $1B
.db $1B $20 $20 $1F $1F $1D $1D $1C
.db $1C $1B $1B $1B $1B $1D $1D $1D
.db $1D $FE

L0EB486:
.db $DE $B4 $8F $B4 $66 $B5 $00 $00
.db $0B $BE $08 $C1 $4B $94 $83 $7F
.db $C1 $4B $94 $E2 $83 $7F $11 $81
.db $19 $83 $7F $11 $81 $1B $EF $FD
.db $AD $B5 $C1 $FC $94 $BF $0A $88
.db $1D $BF $09 $7F $BF $0B $88 $7E
.db $81 $1D $83 $22 $29 $E2 $81 $24
.db $83 $25 $27 $82 $25 $24 $22 $88
.db $1D $82 $1D $1E $20 $88 $7E $82
.db $22 $24 $25 $88 $7E $83 $20 $1B
.db $20 $22 $24 $25 $EF $FC $96 $B4
.db $BE $08 $C0 $AB $94 $83 $7F $C0
.db $AB $94 $E2 $83 $7F $11 $81 $14
.db $83 $7F $11 $81 $12 $EF $E3 $83
.db $11 $11 $7F $11 $82 $11 $83 $12
.db $12 $7F $12 $82 $12 $EF $E2 $83
.db $11 $11 $7F $11 $82 $11 $EF $E2
.db $E2 $83 $12 $12 $7F $12 $82 $12
.db $EF $E2 $83 $11 $11 $7F $11 $82
.db $11 $EF $EF $C0 $32 $94 $83 $06
.db $0D $11 $12 $16 $18 $83 $19 $1B
.db $82 $1D $1E $C0 $32 $94 $E2 $83
.db $0A $11 $18 $7E $82 $19 $EF $E2
.db $E2 $83 $0A $11 $18 $7E $82 $19
.db $EF $E2 $83 $08 $11 $18 $7E $82
.db $19 $EF $E2 $83 $06 $0D $11 $7E
.db $82 $12 $EF $E2 $83 $05 $0C $13
.db $7E $82 $14 $EF $EF $FC $E5 $B4
.db $BE $08 $C2 $B6 $95 $83 $7F $C2
.db $B6 $95 $E4 $89 $16 $83 $7F $16
.db $7F $EF $C2 $B1 $95 $E8 $83 $16
.db $16 $7F $16 $82 $16 $EF $E2 $E2
.db $83 $17 $17 $7F $17 $82 $17 $EF
.db $E2 $83 $16 $16 $7F $16 $82 $16
.db $EF $EF $83 $12 $19 $1D $1E $22
.db $24 $83 $25 $27 $82 $29 $2A $88
.db $E9 $7F $7F $EF $FC $6D $B5 $81
.db $7F $83 $22 $29 $81 $24 $82 $22
.db $81 $1D $83 $1B $1E $81 $20 $83
.db $1E $1B $81 $1D $83 $22 $29 $81
.db $27 $82 $25 $81 $24 $83 $22 $24
.db $82 $25 $24 $22 $81 $1D $83 $1B
.db $1D $82 $1E $20 $22 $81 $24 $83
.db $22 $1D $81 $24 $82 $22 $81 $1D
.db $83 $1B $1D $82 $1E $89 $20 $83
.db $1E $88 $7E $1D $FE

L0EB5F3:
.db $30 $B6 $FC $B5 $66 $B6 $00 $00
.db $0A $BE $00 $C1 $4B $94 $83 $7F
.db $C1 $9F $94 $82 $21 $26 $27 $2A
.db $1E $1F $25 $23 $29 $81 $2A $2A
.db $BE $0C $C0 $5A $94 $FD $BD $B6
.db $80 $7F $7F $7F $90 $7F $C1 $4C
.db $95 $83 $E7 $E2 $21 $22 $21 $22
.db $EF $EF $FC $03 $B6 $BE $00 $C0
.db $4B $94 $83 $7F $C0 $26 $94 $90
.db $7F $82 $21 $26 $27 $2A $1E $1F
.db $25 $23 $29 $81 $2A $2A $BE $0C
.db $C0 $5A $94 $FD $BD $B6 $80 $7F
.db $7F $7F $BE $00 $C0 $4C $95 $83
.db $E7 $E2 $17 $1B $17 $1B $EF $EF
.db $FC $37 $B6 $BE $00 $C2 $4B $94
.db $83 $7F $C2 $BB $95 $80 $7F $7F
.db $7F $82 $7F $90 $7F $85 $E4 $E2
.db $16 $22 $16 $22 $EF $E2 $17 $23
.db $17 $23 $EF $E2 $1A $26 $1A $26
.db $EF $E2 $0F $1B $0F $1B $EF $E2
.db $12 $1E $12 $1E $EF $E2 $16 $22
.db $16 $22 $EF $E2 $15 $21 $15 $21
.db $EF $E2 $18 $24 $18 $24 $EF $E2
.db $16 $22 $16 $22 $EF $E2 $17 $23
.db $17 $23 $EF $EF $FD $BD $B6 $FC
.db $6D $B6 $83 $7F $36 $35 $30 $81
.db $33 $83 $7F $39 $38 $31 $81 $34
.db $83 $35 $30 $88 $33 $83 $2A $2D
.db $88 $30 $85 $2E $2F $2E $2C $88
.db $33 $83 $7F $82 $33 $36 $81 $7E
.db $80 $30 $FE

L0EB6E6:
.db $48 $B7 $EF $B6 $A1 $B7 $F3 $B7
.db $17 $BE $00 $C1 $28 $95 $83 $7F
.db $1D $20 $1F $1E $25 $24 $23 $80
.db $22 $83 $7F $1D $20 $1F $1E $25
.db $24 $2A $80 $29 $E2 $83 $7F $1D
.db $7F $20 $7F $1F $7F $1E $80 $1D
.db $EF $E4 $83 $7F $1D $7F $20 $7F
.db $1F $7F $1E $EF $E2 $1D $20 $1F
.db $1E $EF $84 $C1 $7C $95 $1D $20
.db $1F $1E $C1 $88 $95 $1D $20 $1F
.db $1E $C1 $94 $95 $1D $20 $1F $1E
.db $C1 $A0 $95 $1D $20 $1F $1E $FC
.db $EF $B6 $BE $00 $C1 $28 $95 $83
.db $7F $18 $1B $1A $19 $20 $1F $1E
.db $80 $1D $83 $7F $18 $1B $1A $19
.db $20 $1F $25 $80 $24 $E2 $83 $7F
.db $18 $7F $1B $7F $1A $7F $19 $80
.db $18 $EF $E4 $83 $7F $18 $7F $1B
.db $7F $1A $7F $19 $EF $E2 $18 $1B
.db $1A $19 $EF $84 $C0 $40 $95 $18
.db $1B $1A $19 $C0 $4C $95 $18 $1B
.db $1A $19 $C0 $58 $95 $18 $1B $1A
.db $19 $C0 $64 $95 $18 $1B $1A $19
.db $FC $48 $B7 $BE $00 $C2 $B6 $95
.db $85 $16 $7F $88 $16 $84 $7F $7F
.db $7F $C2 $AC $95 $83 $7F $E7 $16
.db $EF $C2 $B6 $95 $85 $17 $7F $88
.db $17 $84 $7F $7F $7F $C2 $AC $95
.db $83 $7F $E7 $17 $EF $83 $E8 $16
.db $16 $EF $E8 $16 $16 $EF $E8 $17
.db $17 $EF $E4 $18 $18 $EF $E4 $19
.db $19 $EF $1B $1B $1B $1B $19 $19
.db $19 $19 $18 $18 $18 $18 $17 $17
.db $17 $17 $FC $A1 $B7 $82 $EA $0D
.db $0D $EF $FC $F3 $B7

L0EB7FB:
.db $94 $B8 $04 $B8 $2F $B9 $72 $B9
.db $20 $BE $01 $C1 $98 $94 $E2 $82
.db $1E $83 $7F $80 $7E $82 $1D $82
.db $1E $83 $7F $80 $7E $82 $20 $83
.db $E4 $16 $14 $16 $0F $19 $16 $EF
.db $16 $14 $EF $7F $7F $2A $7F $7F
.db $2C $7F $7F $29 $7F $7F $84 $2A
.db $7F $83 $2A $7F $7F $25 $7F $7F
.db $27 $7F $7F $24 $7F $7F $84 $25
.db $7F $83 $25 $88 $7E $83 $1E $88
.db $1E $88 $7E $83 $1E $88 $1E $83
.db $12 $14 $16 $0F $11 $12 $88 $7E
.db $83 $11 $12 $14 $16 $0F $12 $19
.db $88 $7E $83 $16 $83 $17 $1B $20
.db $23 $27 $23 $20 $1B $20 $23 $27
.db $23 $20 $1A $1D $22 $1D $26 $16
.db $1A $1D $1A $1D $22 $26 $29 $E2
.db $1B $7F $1B $7F $7F $1B $7F $7F
.db $1B $7F $7F $1B $1B $EF $FC $04
.db $B8 $BE $01 $C0 $98 $94 $E2 $82
.db $19 $83 $7F $80 $7E $82 $18 $82
.db $19 $83 $7F $80 $7E $82 $1B $83
.db $E4 $0A $08 $0A $0F $0D $0A $EF
.db $0A $08 $EF $7F $7F $25 $7F $7F
.db $25 $7F $7F $24 $7F $7F $84 $25
.db $7F $83 $25 $7F $7F $1E $7F $7F
.db $20 $7F $7F $1D $7F $7F $84 $1E
.db $7F $83 $1E $88 $7E $83 $16 $88
.db $17 $88 $7E $83 $18 $88 $19 $84
.db $7F $83 $06 $08 $0A $03 $05 $84
.db $06 $88 $7E $83 $05 $84 $7F $83
.db $06 $08 $0A $03 $06 $84 $0D $88
.db $7E $83 $0A $84 $7F $83 $17 $1B
.db $20 $23 $27 $23 $20 $1B $20 $23
.db $27 $23 $20 $1A $1D $22 $1D $26
.db $16 $1A $1D $1A $1D $22 $26 $84
.db $29 $83 $E2 $16 $7F $16 $7F $7F
.db $16 $7F $7F $16 $7F $7F $16 $16
.db $EF $FC $94 $B8 $BE $01 $C2 $AC
.db $95 $83 $E7 $E2 $1B $7F $1B $7F
.db $20 $22 $27 $1B $7F $1B $20 $22
.db $27 $EF $EF $14 $7F $14 $7F $17
.db $1B $20 $14 $7F $14 $17 $1B $20
.db $16 $7F $16 $7F $1A $1D $22 $16
.db $7F $16 $1A $1D $22 $E2 $1B $7F
.db $1B $7F $1F $22 $27 $1B $7F $1B
.db $1F $22 $27 $EF $FC $2F $B9 $83
.db $0C $7F $0C $7F $0C $0C $0C $0C
.db $7F $0C $0C $0C $0C $FC $72 $B9

L0EB983:
.db $01 $BA $8C $B9 $6F $BA $FA $BA
.db $11 $BE $02 $C1 $E3 $94 $83 $7F
.db $E2 $FD $3C $BB $EF $82 $7F $27
.db $25 $20 $81 $22 $82 $1E $20 $81
.db $22 $2A $29 $25 $82 $7F $27 $25
.db $20 $81 $22 $82 $1E $20 $81 $22
.db $27 $26 $22 $81 $20 $80 $1E $8F
.db $1B $1D $1E $81 $20 $1E $1D $19
.db $81 $20 $80 $1E $8F $1B $1D $1E
.db $81 $1D $1B $8F $1D $1E $20 $22
.db $23 $25 $82 $27 $7F $8F $1E $20
.db $22 $82 $25 $7F $8F $1D $1E $20
.db $82 $25 $7F $8F $1B $1D $1E $82
.db $25 $7F $8F $1D $1E $20 $E4 $90
.db $27 $7F $1B $1D $1E $1D $8F $1B
.db $1D $1E $EF $FC $93 $B9 $BE $02
.db $C0 $AB $94 $83 $7F $90 $E3 $FD
.db $4C $BB $EF $E2 $90 $12 $7F $12
.db $12 $12 $12 $8F $12 $12 $12 $EF
.db $E2 $90 $11 $7F $11 $11 $11 $11
.db $8F $11 $11 $11 $EF $E2 $90 $12
.db $7F $12 $12 $12 $12 $8F $12 $12
.db $12 $EF $90 $11 $7F $11 $11 $11
.db $11 $8F $E3 $11 $11 $11 $EF $E2
.db $82 $16 $90 $16 $16 $16 $8F $16
.db $16 $16 $82 $14 $90 $14 $14 $14
.db $8F $14 $14 $14 $82 $12 $90 $12
.db $12 $12 $8F $12 $12 $12 $82 $11
.db $90 $11 $11 $11 $8F $11 $11 $11
.db $EF $FC $08 $BA $BE $02 $C2 $AC
.db $95 $83 $7F $90 $E3 $E2 $1B $7F
.db $1B $1B $1B $1B $EF $E2 $19 $7F
.db $19 $19 $19 $19 $EF $E2 $17 $7F
.db $17 $17 $17 $17 $EF $E2 $16 $7F
.db $16 $16 $16 $16 $EF $EF $E2 $90
.db $17 $7F $17 $17 $17 $17 $8F $17
.db $17 $17 $EF $E2 $90 $16 $7F $16
.db $16 $16 $16 $8F $16 $16 $16 $EF
.db $E2 $90 $17 $7F $17 $17 $17 $17
.db $8F $17 $17 $17 $EF $90 $16 $7F
.db $16 $16 $16 $16 $8F $E3 $16 $16
.db $16 $EF $E2 $82 $1B $90 $1B $1B
.db $1B $8F $1B $1B $1B $82 $19 $90
.db $19 $19 $19 $8F $19 $19 $19 $82
.db $17 $90 $17 $17 $17 $8F $17 $17
.db $17 $82 $16 $90 $16 $16 $16 $8F
.db $16 $16 $16 $EF $FC $76 $BA $83
.db $7F $90 $E3 $E3 $E4 $01 $7F $01
.db $EF $EF $E3 $01 $7F $01 $EF $02
.db $02 $01 $EF $E3 $90 $E3 $01 $7F
.db $01 $01 $01 $01 $EF $8F $01 $01
.db $01 $EF $90 $E2 $01 $7F $01 $01
.db $01 $01 $EF $8F $01 $01 $01 $01
.db $01 $01 $E8 $82 $01 $90 $01 $01
.db $01 $8F $01 $01 $01 $EF $FC $FC
.db $BA $90 $E3 $1B $7F $1E $1D $1E
.db $1D $EF $1B $1D $1E $20 $1E $1D
.db $FE $E2 $16 $7F $16 $16 $16 $16
.db $EF $E2 $14 $7F $14 $14 $14 $14
.db $EF $E2 $12 $7F $12 $12 $12 $12
.db $EF $E2 $11 $7F $11 $11 $11 $11
.db $EF $FE

L0EBB6D:
.db $8B $BB $76 $BB $A2 $BB $E8 $9C
.db $16 $C1 $86 $94 $BE $FE $FD $0E
.db $9D $BE $FC $FD $0E $9D $BE $FB
.db $FD $0E $9D $FC $76 $BB $BE $F4
.db $C0 $86 $94 $BE $FE $FD $33 $9D
.db $BE $FC $FD $33 $9D $BE $FB $FD
.db $33 $9D $FC $8B $BB $C2 $AC $95
.db $BE $FE $FD $58 $9D $BE $FC $FD
.db $58 $9D $BE $FB $FD $58 $9D $FC
.db $A2 $BB

L0EBBB7:
.dw L0EBC9D
.dw L0EBBC0
.dw L0EBD79
.dw L0EBE62

.db $08 ; ???

L0EBBC0:
.db $BE $FB $C1 $74 $94 $FD $E1 $BE
.db $88 $25 $82 $23 $82 $22 $82 $7E
.db $83 $2A $27 $25 $24 $89 $2C $83
.db $29 $82 $25 $83 $25 $24 $82 $22
.db $7E $83 $2E $2C $2A $27 $80 $29
.db $82 $22 $82 $7E $83 $2A $27 $25
.db $24 $89 $2C $83 $29 $82 $31 $83
.db $31 $30 $82 $2E $7E $83 $2E $30
.db $31 $33 $81 $31 $30 $BE $00 $BF
.db $0F $80 $2C $81 $2C $82 $7F $C1
.db $4B $94 $82 $2C $BE $00 $FD $89
.db $A3 $E2 $90 $20 $22 $24 $82 $25
.db $EF $90 $20 $22 $23 $83 $25 $23
.db $22 $20 $1E $1D $90 $1E $1D $1E
.db $89 $22 $83 $20 $1B $1D $81 $1E
.db $BF $0E $83 $1E $1D $1B $1A $BE
.db $F4 $C1 $32 $94 $FD $30 $A2 $83
.db $E3 $1E $22 $25 $29 $2C $2E $EF
.db $7E $86 $1E $83 $22 $25 $2A $2E
.db $2A $BE $FB $BF $0F $C1 $4B $94
.db $FD $92 $B3 $BE $02 $BF $10 $FD
.db $45 $98 $E3 $FD $3C $BB $EF $E3
.db $1B $7F $1E $1D $1E $1D $EF $BF
.db $0E $82 $1B $1A $BE $00 $C1 $E3
.db $94 $81 $1D $1F $20 $22 $1F $20
.db $22 $8F $24 $25 $27 $BF $0E $81
.db $25 $7E $23 $BF $0C $82 $28 $BF
.db $0A $2C $80 $2B $FF

L0EBC9D:
.db $BE $FB $C0 $74 $94 $FD $29 $BF
.db $88 $1D $82 $1A $82 $1B $82 $7E
.db $83 $22 $20 $1D $1D $89 $24 $83
.db $20 $82 $1D $83 $1D $1B $82 $19
.db $7E $83 $25 $24 $22 $1E $80 $20
.db $82 $1B $82 $7E $83 $22 $20 $1D
.db $1D $89 $24 $83 $20 $82 $29 $83
.db $29 $27 $82 $25 $7E $83 $25 $27
.db $29 $2A $81 $29 $27 $BE $00 $81
.db $25 $24 $89 $25 $84 $27 $25 $83
.db $24 $7F $C0 $4B $94 $82 $24 $BE
.db $00 $90 $1D $1E $20 $82 $22 $24
.db $8A $25 $84 $27 $80 $29 $90 $1D
.db $1E $20 $82 $22 $24 $8A $25 $84
.db $27 $81 $25 $20 $90 $1D $1E $20
.db $82 $22 $24 $8A $25 $84 $27 $80
.db $29 $C0 $B9 $94 $82 $19 $19 $19
.db $19 $17 $17 $17 $17 $16 $16 $14
.db $14 $14 $14 $13 $13 $BE $F4 $C0
.db $26 $94 $86 $7F $FD $30 $A2 $83
.db $E3 $1E $22 $25 $29 $2C $2E $EF
.db $1E $22 $25 $2A $2E $2A $BE $FB
.db $C0 $4B $94 $FD $EB $B3 $BE $02
.db $FD $68 $98 $90 $E2 $FD $4C $BB
.db $EF $BE $00 $C0 $E3 $94 $81 $19
.db $1B $1D $1F $1B $1D $1F $8F $20
.db $22 $24 $81 $21 $7E $20 $82 $20
.db $23 $80 $22 $FF

L0EBD79:
.db $BE $07 $C2 $B6 $95 $FD $05 $BF
.db $88 $20 $82 $20 $82 $1E $82 $7E
.db $83 $27 $24 $20 $20 $89 $29 $83
.db $24 $82 $22 $83 $22 $20 $82 $1E
.db $7E $83 $2A $27 $27 $22 $80 $25
.db $82 $1E $82 $7E $83 $27 $24 $20
.db $20 $89 $29 $83 $24 $82 $2E $83
.db $2E $2C $82 $2A $7E $83 $2A $2C
.db $2C $22 $81 $2C $2C $BE $00 $C2
.db $B1 $95 $82 $E4 $20 $20 $EF $BE
.db $00 $82 $E6 $19 $1B $1D $1B $EF
.db $C2 $AC $95 $29 $29 $28 $28 $27
.db $27 $26 $26 $25 $25 $24 $24 $23
.db $23 $22 $22 $BE $0C $C2 $B6 $95
.db $FD $DF $A1 $86 $7E $88 $7E $7E
.db $2E $89 $30 $31 $BE $07 $C2 $B1
.db $95 $82 $FD $44 $B4 $BE $02 $C2
.db $B1 $95 $82 $E2 $0F $1B $0F

L0EBE08:
.db $1B $EF $E2 $0D $19 $0D $19 $EF
.db $E2 $0B $17 $0B $17 $EF $E2 $0A
.db $16 $0A $16 $EF $C2 $AC $95 $90
.db $E2 $E2 $1B $7F $1B $1B $1B $1B
.db $EF $E2 $19 $7F $19 $19 $19 $19
.db $EF $E2 $17 $7F $17 $17 $17 $17
.db $EF $E2 $16 $7F $16 $16 $16 $16
.db $EF $EF $BE $00 $C2 $AC $95 $E4
.db $82 $19 $83 $19 $19 $EF $E4 $82
.db $1B $83 $1B $1B $EF $E4 $82 $1C
.db $83 $1C $1C $EF $C2 $B6 $95 $80
.db $1B $FF

L0EBE62:
.db $80 $E8 $7F $7F $EF $E3 $82 $01
.db $90 $01 $01 $01 $EF $82 $01 $01
.db $E6 $90 $00 $00 $00 $82 $00 $00
.db $8A $00 $84 $00 $EF $E2 $90 $00
.db $00 $00 $8A $00 $84 $0C $EF $82
.db $E2 $00 $00 $00 $00 $EF $00 $00
.db $00 $83 $00 $00 $88 $E7 $7F $7F
.db $EF $82 $00 $00 $00 $01 $01 $83
.db $02 $01 $82 $E5 $01 $01 $01 $01
.db $EF $E4 $89 $07 $83 $02 $EF $E2
.db $E8 $82 $04 $84 $00 $00 $00 $00
.db $EF $EF $82 $E7 $01 $02 $01 $02
.db $EF $01 $02 $01 $01 $90 $E4 $E7
.db $01 $7F $01 $EF $02 $02 $01 $EF
.db $E6 $82 $07 $83 $07 $07 $82 $07
.db $83 $07 $07 $EF $80 $03 $FF

.db $81
.db $20
.db $82
.db $25
.db $29
.db $81
.db $29
.db $22
.db $81
.db $7E
.db $83
.db $22
.db $24
.db $25
.db $27
.db $81
.db $25
.db $24
.db $81
.db $20
.db $82
.db $25
.db $29
.db $81
.db $2C
.db $82
.db $2A
.db $29
.db $81
.db $7E
.db $83
.db $22
.db $24
.db $25
.db $27
.db $FE
.db $81
.db $1D
.db $82

L0EBF08:
.db $20
.db $25
.db $81
.db $25
.db $1E
.db $81
.db $7E
.db $83
.db $1E
.db $20
.db $22
.db $24
.db $81
.db $20
.db $20
.db $81
.db $1D
.db $82
.db $20
.db $25
.db $81
.db $26
.db $82
.db $22
.db $20
.db $81
.db $7E
.db $83
.db $1B
.db $1B
.db $1D
.db $1E
.db $FE
.db $81
.db $19
.db $82
.db $1D
.db $20
.db $81
.db $1E
.db $19
.db $81
.db $7E
.db $83
.db $1B
.db $1B
.db $1B
.db $1B
.db $81
.db $1E
.db $1E
.db $81
.db $19
.db $82
.db $1D
.db $20
.db $81
.db $26
.db $82
.db $22
.db $20
.db $81
.db $7E
.db $83
.db $19
.db $1B
.db $1D
.db $1E
.db $FE
.db $57
.db $00
.db $30
.db $0A
.db $08
.db $10
.db $0A
.db $50
.db $00
.db $08
.db $00
.db $68
.db $B6
.db $00
.db $04
.db $00
.db $45
.db $0C
.db $48
.db $00
.db $02
.db $01
.db $00
.db $00
.db $04
.db $00
.db $40
.db $A2
.db $02
.db $DC
.db $A0
.db $0C
.db $42
.db $E8
.db $BC
.db $08
.db $00
.db $02
.db $04
.db $40
.db $00
.db $01
.db $04
.db $23
.db $66
.db $21
.db $02
.db $00
.db $99
.db $2D
.db $44
.db $00
.db $84
.db $00
.db $40
.db $00
.db $80
.db $00
.db $00
.db $06
.db $4E
.db $D3
.db $52
.db $7E
.db $97
.db $61
.db $1E
.db $01
.db $01
.db $02
.db $80
.db $81
.db $A0
.db $00
.db $00
.db $26
.db $4A
.db $54
.db $84
.db $91
.db $47
.db $56
.db $26
.db $00
.db $10
.db $00
.db $00
.db $00
.db $00
.db $00
.db $81
.db $23
.db $53
.db $87
.db $C0
.db $AC
.db $D8
.db $0F
.db $30
.db $00
.db $00
.db $00
.db $00
.db $04
.db $01
.db $42
.db $02
.db $27
.db $08
.db $21
.db $90
.db $21
.db $00
.db $59
.db $61
.db $00
.db $00
.db $02
.db $02
.db $15
.db $20
.db $00
.db $10
.db $48
.db $96
.db $32
.db $AE
.db $02
.db $7C
.db $40
.db $10
.db $10
.db $02
.db $01
.db $80
.db $41
.db $10
.db $09
.db $00
.db $20
.db $34
.db $08
.db $12
.db $22
.db $BD
.db $54
.db $7A
.db $04
.db $10
.db $00
.db $00
.db $00
.db $00
.db $20
.db $00
.db $8A
.db $08
.db $7E
.db $03
.db $22
.db $CD
.db $80
.db $28
.db $00
.db $04
.db $01
.db $00
.db $10
.db $40
.db $00
.db $00
.db $02
.db $0D
.db $04
.db $00
.db $14
.db $35
.db $60
.db $46

.ENDS
