.BANK 12
.ORG $0000

.SECTION "Bank11" FORCE

L0B8000:
    LDA $05A9
    JSR L0FC34C.w

.dw L0B8864
.dw L0B8898
.dw L0B89D4
.dw L0B8C72
.dw L0B8DA1
.dw L0B8EF9
.dw L0B90E5
.dw L0B92F5
.dw L0B92F5
.dw L0B9323
.dw L0B9398
.dw L0B9323
.dw L0B93E0
.dw L0B99B9
.dw L0B9A62
.dw L0B94A4
.dw L0B9631
.dw L0B82BA
.dw L0B965C
.dw L0B968A
.dw L0B968A
.dw L0B96ED
.dw L0B9763
.dw L0B9785
.dw L0B97AD
.dw L0B941F
.dw L0B97CF
.dw L0B9829
.dw L0B986E
.dw L0B9890
.dw L0B98C2
.dw L0B98FC
.dw L0B9935
.dw L0B9AC5
.dw L0B9B30
.dw L0B9B83
.dw L0B9BB1
.dw L0B8D10
.dw L0B9BD4
.dw L0B865D
.dw L0B851C
.dw L0B880A
.dw L0B87E2
.dw L0B860F
.dw L0B84BF
.dw L0B8499
.dw L0B8466
.dw L0B944D
.dw L0B8423
.dw L0B83F9
.dw L0B8359
.dw L0B8263
.dw L0B8233
.dw L0B8233
.dw L0B81BE
.dw L0B80E1
.dw L0B80E1
.dw L0B80B9
.dw L0B8BF2
.dw L0B80B8
.dw L0B8143
.dw L0B80B8
.dw L0B832F
.dw L0B83AA
.dw L0B83CF
.dw L0B8BA4
.dw L0B8629
.dw L0B80B8
.dw L0B9962
.dw L0B8098
.dw L0B85C9
.dw L0B8906
.dw L0B8C33

L0B8098:
    LDA #64
    STA $77
    STA $76
    LDA #16
    STA $0590
    LDA #4
    STA $0591
    JSR L0B9BF6.w
    LDA #112
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B80B8:
    RTS

L0B80B9:
    LDA #12
    STA $0590
    LDA #6
    STA $0591
    JSR L0BA88A.w
    LDA #64
    STA $77
    STA $76
    JSR L0B9BF6.w
    LDA #99
    JSR L0B9D0F.w
    LDA #100
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B80E1:
    LDA #16
    STA $0590
    LDA #6
    STA $0591
    JSR L0BA88A.w
    LDA #64
    STA $77
    STA $76
    JSR L0B9BF6.w
    LDA $6D14
    CLC
    ADC #2
    ASL
    TAY
    LDA $6CD2,Y
    STA $7A
    LDA $6CD3,Y
    STA $7B
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEX
    LDA #5
    STA $0451,X
    INX
    LDA #15
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDY $6D11
    LDA $6D28,Y
    BEQ L0B8136
    LDA #105
    JSR L0B9D0F.w
    JMP L0B813B.w
L0B8136:
    LDA #98
    JSR L0B9D0F.w
L0B813B:
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8143:
    LDA #14
    STA $0590
    LDA #6
    STA $0591
    JSR L0BA88A.w
    LDA #80
    STA $77
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDY #0
    STY $18
L0B815F:
    LDA $6CF8,Y
    BEQ L0B8166
    INC $18
L0B8166:
    INY
    CPY #13
    BCC L0B815F
    LDA #101
    JSR L0B9D0F.w
    LDA $18
    STA $00
    JSR L0B9D2F.w
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #102
    JSR L0B9D0F.w
    LDA $743E
    STA $00
    LDA $743F
    STA $01
    LDA $00
    CLC
    ADC $7477
    STA $00
    BCC L0B8199
    INC $01
L0B8199:
    LDA $01
    CMP #3
    BCC L0B81AD
    LDA $00
    CMP #231
    BCC L0B81AD
    LDA #231
    STA $00
    LDA #3
    STA $01
L0B81AD:
    JSR L0B9D74.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B81BE:
    LDA #16
    STA $0590
    LDA #8
    STA $0591
    JSR L0BA88A.w
    LDA #64
    STA $77
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDA $05E2
    SEC
    SBC #1
    ASL
    TAY
    LDA L0BB821.w,Y
    STA $00
    LDA (L0BB821.w + 1),Y
    STA $01
    JSR L0B9D1B.w
    LDA #22
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA $05E3
    CLC
    ADC #2
    ASL
    TAY
    LDA $6CD2,Y
    STA $7A
    LDA $6CD3,Y
    STA $7B
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEX
    LDA #5
    STA $0451,X
    INX
    LDA #15
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #97
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8233:
    LDA #16
    STA $0590
    LDA #4
    STA $0591
    JSR L0BA88A.w
    LDA #64
    STA $77
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEX
    LDA #94
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8263:
    JSR L0BA88A.w
    LDA #16
    STA $0590
    LDA $05AD
    CMP #2
    BEQ L0B8276
    LDA #4
    BNE L0B8278
L0B8276:
    LDA #6
L0B8278:
    STA $0591
    LDA #64
    STA $77
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDA $05AD
    CMP #2
    BEQ L0B8295
    LDA #93
    JSR L0B9D0F.w
    JMP L0B82B2.w

L0B8295:
    LDA #103
    STA $7B
    LDA #174
    STA $7A
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEX
    LDA #94
    JSR L0B9D0F.w
    LDA #95
    JSR L0B9D0F.w
L0B82B2:
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B82BA:
    LDA #6
    STA $0591
    LDA #16
    STA $0590
    JSR L0BA88A.w
    LDA #64
    STA $77
    LDA #80
    STA $76
    JSR L0B9BF6.w
    LDA $6D14
    CLC
    ADC #2
    ASL
    TAY
    LDA $6CD2,Y
    STA $7A
    LDA $6CD3,Y
    STA $7B
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEX
    LDA $6D13
    CMP #2
    BNE L0B831D
    LDA #8
    STA $0591
    LDA #124
    JSR L0B9D0F.w
    LDA $6D15
    CLC
    ADC #2
    ASL
    TAY
    LDA $6CD2,Y
    STA $7A
    LDA $6CD3,Y
    STA $7B
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEX
L0B831D:
    LDA #125
    JSR L0B9D0F.w
    LDA #91
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B832F:
    LDA #6
    STA $0591
    LDA #16
    STA $0590
    JSR L0BA88A.w
    LDA #64
    STA $77
    LDA #112
    STA $76
    JSR L0B9BF6.w
    LDA #109
    JSR L0B9D0F.w
    LDA #110
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8359:
    LDA #4
    STA $0591
    LDA #16
    STA $0590
    JSR L0BA88A.w
    LDA #80
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDA $7448
    CMP #1
    BEQ L0B839D
    LDA #255
    STA $0451,X
    INX
    LDA #255
    STA $0451,X
    INX
    LDA #118
    JSR L0B9D0F.w
    DEX
    LDA #157
    STA $0451,X
    INX
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    JMP L0B83A2.w

L0B839D:
    LDA #90
    JSR L0B9D0F.w
L0B83A2:
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B83AA:
    LDA #4
    STA $0591
    LDA #16
    STA $0590
    JSR L0BA88A.w
    LDA #80
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDA #106
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B83CF:
    LDA #6
    STA $0591
    LDA #16
    STA $0590
    JSR L0BA88A.w
    LDA #80
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDA #107
    JSR L0B9D0F.w
    LDA #108
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B83F9:
    LDA #6
    STA $0591
    LDA #14
    STA $0590
    JSR L0BA88A.w
    LDA #80
    STA $76
    LDA #48
    STA $77
    JSR L0B9BF6.w
    LDA #89
    JSR L0B9D0F.w
    LDA #81
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8423:
    LDA #6
    STA $0591
    LDA #14
    STA $0590
    JSR L0BA88A.w
    LDA #80
    STA $76
    JSR L0B9BF6.w
    LDA $05BB
    SEC
    SBC #1
    ASL
    TAY
    LDA L0BB821.w,Y
    STA $00
    LDA (L0BB821.w + 1),Y
    STA $01
    JSR L0B9D1B.w
    LDA #22
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #88
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8465:
    RTS

L0B8466:
    LDA #6
    STA $0591
    LDA #6
    STA $0590
    JSR L0BA88A.w
    LDA #128
    STA $76
    JSR L0B9BF6.w
    LDA #34
    JSR L0B9D0F.w
    LDA #35
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    LDX $058F
    LDA #3
    STA $7D73,X
    LDA #1
    STA $7D78,X
    JMP L0B9D99.w

L0B8499:
    LDA #6
    STA $0591
    LDA #14
    STA $0590
    JSR L0BA88A.w
    LDA #80
    STA $76
    JSR L0B9BF6.w
    LDA #80
    JSR L0B9D0F.w
    LDA #81
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B84BF:
    LDA #4
    STA $0591
    LDA #14
    STA $0590
    JSR L0BA88A.w
    LDA #48
    STA $76
    LDA #16
    STA $77
    LDA $7AF9
    AND #2
    BEQ L0B84DF
    LDA #128
    STA $77
L0B84DF:
    LDA $94
    SEC
    SBC $69
    CMP #6
    BCC L0B84F3
    CMP #9
    BCS L0B84F7
    LDA $7AF9
    AND #8
    BEQ L0B84F7
L0B84F3:
    LDA #160
    STA $76
L0B84F7:
    JSR L0B9BF6.w
    LDY $05BB
    DEY
    TYA
    ASL
    TAY
    LDA L0BB821.w,Y
    STA $00
    LDA (L0BB821.w + 1),Y
    STA $01
    JSR L0B9D1B.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B851C:
    LDA #10
    STA $0591
    LDA #12
    STA $0590
    JSR L0BA88A.w
    JSR L0B9BF6.w
    LDA $05B8
    ASL
    TAY
    LDA $6CD2,Y
    STA $7A
    LDA $6CD3,Y
    STA $7B
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    LDA #74
    JSR L0B9D0F.w
    LDY $05B8
    LDA $6CF6,Y
    STA $00
    JSR L0B9D2F.w
    LDA $05B8
    CMP #2
    BCC L0B8577
    LDY #1
    LDA ($7A),Y
    CMP #13
    BNE L0B8577
    LDA #27
    STA $0451,X
    INX
    LDA #31
    STA $0451,X
    INX
    LDA #6
    STA $0451,X
    BNE L0B8582
L0B8577:
    LDA #22
    STA $0451,X
    INX
    LDA #47
    STA $0451,X
L0B8582:
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #75
    JSR L0B9D0F.w
    LDY $05B8
    LDA $7AAA,Y
    STA $00
    LDA $7A98,Y
    STA $01
    JSR L0B9D5A.w
    LDA #237
    STA $0451,X
    INX
    LDY $05B8
    LDA $6CC0,Y
    ASL
    TAY
    DEY
    DEY
    LDA L0BB821.w,Y
    STA $00
    LDA (L0BB821.w + 1),Y
    STA $01
    JSR L0B9D1B.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B85C9:
    JSR L0B9BF6.w
    STX $058D
    LDA $05F0
    BNE L0B85E7
    LDA #21
    STA $0451,X
    INX
    LDA #32
    STA $0451,X
    INX
    LDA #3
    STA $0451,X
    BNE L0B85FD
L0B85E7:
    CLC
    ADC #97
    STA $0451,X
    INX
    LDA #173
    STA $0451,X
    INX
    LDA $05F1
    CLC
    ADC #97
    STA $0451,X
L0B85FD:
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B860F:
    JSR L0B9BF6.w
    STX $058D
    LDA $74B4
    CLC
    ADC #55
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B8629:
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    JSR L0B9BF6.w
    STX $058D
    STX $16
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEX
    STX $0450
    LDA #4
    JSR L0B8B5A.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w
L0B865D:
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    LDA $74B4
    JSR L0FC34C.w

.dw L0B8673
.dw L0B86B8
.dw L0B8734
.dw L0B879F

L0B8673:
    JSR L0B9BF6.w
    STX $058D
    LDY #2
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    INX
    LDY #4
    LDA ($7A),Y
    CMP #90
    BCC L0B8690
    LDA #159
    STA $0451,X
L0B8690:
    INX
    LDY #4
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    INX
    INX
    LDY #3
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    INX
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B86B8:
    JSR L0B9BF6.w
    STX $058D
    LDY #5
    LDA ($7A),Y
    STA $00
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L0B86E3
    LDY #11
    LDA ($7A),Y
    TAY
    CPY #15
    BNE L0B86DB
    LDA L0FD9B9.w,Y
    BNE L0B86E1
L0B86DB:
    LDA $00
    CLC
    ADC L0FD9B9.w,Y
L0B86E1:
    STA $00
L0B86E3:
    JSR L0B9D2F.w
    INX
    LDY #9
    STY $18
    LDA ($7A),Y
    STA $00
    LDY #11
    LDA ($7A),Y
    JSR L0B9610.w
    BCS L0B86FA
    STA $00
L0B86FA:
    JSR L0B9D2F.w
    INX
    LDY #6
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    INX
    LDY #11
    LDA ($7A),Y
    STA $0E
    CMP #56
    BNE L0B8716
    LDA #40
    BNE L0B871D
L0B8716:
    LDA #7
    STA $18
    JSR L0B95ED.w
L0B871D:
    STA $00
    JSR L0B9D2F.w
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B8734:
    JSR L0B9BF6.w
    STX $058D
    LDY #8
    LDA ($7A),Y
    STA $00
    LDY #11
    LDA ($7A),Y
    CMP #55
    BNE L0B874C
    LDA #40
    STA $00
L0B874C:
    JSR L0B9D2F.w
    INX
    LDY #0
    LDA ($7A),Y
    TAY
    DEY
    LDA L0FEE00.w,Y
    STA $00
    LDY #1
    LDA ($7A),Y
    CMP #10
    BNE L0B876D
    TAY
    DEY
    LDA L0FEDEA.w,Y
    CLC
    ADC $00
    STA $00
L0B876D:
    LDY #11
    LDA ($7A),Y
    CMP #53
    BNE L0B877C
    LDA $00
    CLC
    ADC #13
    STA $00
L0B877C:
    JSR L0B9D2F.w
    INX
    STX $16
    JSR L0B9C7F.w
    DEX
    STX $0450
    LDA #5
    JSR L0B8B5A.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B879F:
    JSR L0B9BF6.w
    STX $058D
    LDA #255
    STA $0451,X
    INX
    STA $0451,X
    INX
    STA $0451,X
    INX
    STX $16
    LDY #11
    LDA ($7A),Y
    BEQ L0B87C3
    STY $18
    JSR L0B9C33.w
    JMP L0B87C8.w

L0B87C3:
    LDA #13
    JSR L0B9D0F.w
L0B87C8:
    DEX
    STX $0450
    LDA #8
    JSR L0B8B5A.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B87E2:
    LDA #48
    STA $77
    LDA #16
    STA $76
    LDA #20
    STA $0590
    LDA #4
    STA $0591
    JSR L0B9BF6.w
    LDA #76
    JSR L0B9D0F.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B880A:
    LDA #20
    STA $0590
    LDA #22
    STA $0591
    JSR L0B9BF6.w
    LDA $05B8
    ASL
    TAY
    LDA $6CD2,Y
    STA $02
    LDA $6CD3,Y
    STA $03
    LDY $05B8
    LDA $6CF6,Y
    STA $04
    LDA #10
    STA $05
L0B8832:
    LDA $04
    BNE L0B883F
    LDA #237
    STA $0451,X
    INX
    JMP L0B8853.w

L0B883F:
    LDA $02
    STA $7A
    LDA $03
    STA $7B
    LDY #0
    LDA ($7A),Y
    STA $7484
    JSR L0B9C4D.w
    DEC $04
L0B8853:
    LDA #12
    JSR L0FC384.w
    DEC $05
    BNE L0B8832
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8864:
    LDA #6
    STA $0591
    LDA #12
    STA $0590
    JSR L0BA88A.w
    LDA $77
    EOR #128
    STA $77
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    LDA #30
    JSR L0B9D0F.w
    LDA #31
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8898:
    LDA #8
    STA $0591
    LDA #12
    STA $0590
    JSR L0BA88A.w
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    JSR L0B9C4D.w
    DEX
    LDA #26
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA $7534
    JSR L0B9C37.w
    DEX
    LDA #46
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA $7538
    BEQ L0B88F1
    JSR L0B9C51.w
    DEX
    LDA #22
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #10
    STA $0591
L0B88F1:
    LDY $7536
    LDA L0B8902.w,Y
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8902:
.db $1B $1A $19 $18

L0B8906:
    JSR L0B9BF6.w
    STX $16
    STX $058D
    LDA $05F0
    ASL
    TAY
    LDA L0B8963.w,Y
    STA $00
    LDA (L0B8963.w + 1),Y
    STA $01
    JSR L0B9D1B.w
    LDA #239
    STA $0451,X
    LDA $74F0
    CMP #9
    BCC L0B895D
    LDY $74B4
    INY
    TYA
    JSR L0FC39B.w
    CLC
    ADC #97
    STA $0451
    LDA #173
    STA $0452
    LDA $74F0
    STA $4E
    LDA #0
    STA $4F
    LDA #8
    STA $50
    JSR L0FC6EB.w
    LDA $51
    BNE L0B8955
    DEC $4E
L0B8955:
    LDA $4E
    CLC
    ADC #97
    STA $0453
L0B895D:
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B8963:
.dw L0B8971
.dw L0B897F
.dw L0B898D
.dw L0B899B
.dw L0B89AA
.dw L0B89B8
.dw L0B89C6

L0B8971:
ENCODE("なまえ    LV EXP")
NEWLINE

L0B897F:
ENCODE("なまえ    HP/MAX")
NEWLINE

L0B898D:
ENCODE("なまえ     力 守備 ")
NEWLINE

L0B899B:
ENCODE("なまえ    連さ わざ ")
NEWLINE

L0B89AA:
ENCODE("なまえ    うん 魔守 ")
NEWLINE

L0B89B8:
ENCODE("なまえ    もちもの  ")
NEWLINE

L0B89C6:
ENCODE("なまえ    へいしゅ  ")
NEWLINE

L0B89D4:
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    LDA $05F0
    JSR L0FC34C.w

.dw L0B89F0
.dw L0B8A3F
.dw L0B8A5D
.dw L0B8AE2
.dw L0B8AA8
.dw L0B8B12
.dw L0B8B31

L0B89F0:
    JSR L0B8B45.w
    LDA #255
    STA $0451,X
    INX
    LDY #2
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    INX
    LDY #19
    LDA ($7A),Y
    AND #4
    BEQ L0B8A18
    LDA #63
    STA $0451,X
    INX
    STA $0451,X
    INX
    JMP L0B8A21.w

L0B8A18:
    LDY #4
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
L0B8A21:
    INX
    LDA #255
    STA $0451,X
    INX
    LDA #255
    STA $0451,X
L0B8A2D:
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B8A3F:
    JSR L0B8B45.w
    LDA #255
    STA $0451,X
    INX
    JSR L0B9CD8.w
    LDA #173
    STA $0451,X
    INX
    LDY #3
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    JMP L0B8A21.w

L0B8A5D:
    JSR L0B8B45.w
    LDA #255
    STA $0451,X
    INX
    LDY #5
    LDA ($7A),Y
    STA $00
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L0B8A8B
    LDY #11
    LDA ($7A),Y
    TAY
    CPY #15
    BNE L0B8A83
    LDA L0FD9B9.w,Y
    BNE L0B8A89
L0B8A83:
    LDA $00
    CLC
    ADC L0FD9B9.w,Y
L0B8A89:
    STA $00
L0B8A8B:
    JSR L0B9D2F.w
    INX
    LDY #9
    STY $18
    LDA ($7A),Y
    STA $00
    LDY #11
    LDA ($7A),Y
    JSR L0B9610.w
    BCS L0B8AA2
    STA $00
L0B8AA2:
    JSR L0B9D2F.w
    JMP L0B8A21.w

L0B8AA8:
    JSR L0B8B45.w
    LDA #255
    STA $0451,X
    INX
    LDY #8
    LDA ($7A),Y
    STA $00
    LDY #11
    LDA ($7A),Y
    CMP #55
    BNE L0B8AC3
    LDA #40
    STA $00
L0B8AC3:
    JSR L0B9D2F.w
    INX
    LDY #12
    LDA ($7A),Y
    STA $00
    LDY #11
    LDA ($7A),Y
    CMP #53
    BNE L0B8ADC
    LDA $00
    CLC
    ADC #13
    STA $00
L0B8ADC:
    JSR L0B9D2F.w
    JMP L0B8A21.w

L0B8AE2:
    JSR L0B8B45.w
    LDA #255
    STA $0451,X
    INX
    LDY #11
    LDA ($7A),Y
    STA $0E
    CMP #56
    BNE L0B8AF9
    LDA #40
    BNE L0B8B00
L0B8AF9:
    LDA #7
    STA $18
    JSR L0B95ED.w
L0B8B00:
    STA $00
    JSR L0B9D2F.w
    INX
    LDY #6
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    JMP L0B8A21.w

L0B8B12:
    JSR L0B8B45.w
    LDA #255
    STA $0451,X
    INX
    STX $16
    LDY #11
    STY $18
    JSR L0B9C33.w
    DEX
    STX $0450
    LDA #7
    JSR L0B8B5A.w
    DEX
    JMP L0B8A2D.w

L0B8B31:
    JSR L0B8B45.w
    STX $16
    JSR L0B9C7F.w
    DEX
    STX $0450
    LDA #7
    JSR L0B8B5A.w
    JMP L0B8A2D.w

L0B8B45:
    JSR L0B9BF6.w
    STX $16
    STX $058D
    JSR L0B9C4D.w
    DEX
    STX $0450
    LDA #5
    JSR L0B8B5A.w
    RTS

L0B8B5A:
    STA $17
    LDX $16
L0B8B5E:
    LDA $0451,X
    CMP #15
    BEQ L0B8B6B
    CMP #31
    BEQ L0B8B6B
    DEC $17
L0B8B6B:
    INX
    CPX $0450
    BNE L0B8B5E
    INC $17
L0B8B73:
    LDA #255
    STA $0451,X
    INX
    DEC $17
    BNE L0B8B73
    STX $16
    RTS

L0B8B80:
    LDX #0
L0B8B82:
    INX
    LDA $0311,X
    CMP #237
    BNE L0B8B82
    STX $04
    TXA
    SEC
    ADC #17
    STA $00
    STA $02
    DEC $02
    LDA #3
    STA $01
    STA $03
    LDA #0
    STA $05
    JSR L0FC209.w
    RTS

L0B8BA4:
    LDA #14
    STA $0591
    LDA #12
    STA $0590
    JSR L0BA88A.w
    LDA #112
    STA $76
    JSR L0B9BF6.w
    LDY $058F
    LDA #63
    STA $7D73,Y
    LDA #1
    STA $7D78,Y
L0B8BC5:
    LDA L0B8BD3.w,X
    STA $0451,X
    INX
    CMP #239
    BNE L0B8BC5
    JMP L0B9D99.w

L0B8BD3:
ENCODE("いどう")
NEWLINE
ENCODE("ならびかえ")
NEWLINE
ENCODE("もちもの")
NEWLINE
ENCODE("データ")
NEWLINE
ENCODE("たいき")
NEWLINE
ENCODE("きろく")
NEWLINE
STOP

L0B8BF2:
    LDA #10
    STA $0591
    LDA #12
    STA $0590
    JSR L0BA88A.w
    JSR L0B9BF6.w
    LDY $058F
    LDA #15
    STA $7D73,Y
    LDA #1
    STA $7D78,Y
L0B8C0F:
    LDA L0B8C1D.w,X
    STA $0451,X
    INX
    CMP #239
    BNE L0B8C0F
    JMP L0B9D99.w

L0B8C1D:
ENCODE("じょうきょう")
NEWLINE
ENCODE("たいき")
NEWLINE
ENCODE("スイッチ")
NEWLINE
ENCODE("きろく")
NEWLINE
STOP

L0B8C33:
    LDA #6
    STA $0591
    LDA #12
    STA $0590
    LDA #128
    STA $77
    LDA #112
    STA $76
    JSR L0B9BF6.w
    LDX #0
L0B8C4A:
    LDA L0B8C65.w,X
    STA $0451,X
    INX
    CMP #239
    BNE L0B8C4A
    LDY $058F
    LDA #3
    STA $7D73,Y
    LDA #1
    STA $7D78,Y
    JMP L0B9D99.w

L0B8C65:
ENCODE("NORMAL")
NEWLINE
ENCODE("EASY")
NEWLINE
STOP

L0B8C72:
    LDA #12
    STA $0590
    JSR L0BA88A.w
    JSR L0B9BF6.w
    STX $05AC
    LDA #8
    STA $0D
    LDA #0
    STA $0C
L0B8C88:
    LDA $0C
    CMP #5
    BNE L0B8C93
    JSR L0B8CDA.w
    BCC L0B8CAE
L0B8C93:
    CMP #3
    BNE L0B8CA5
    LDY $7434
    DEY
    LDA L0FE1F9.w,Y
    CMP #255
    BNE L0B8CA5
    CLC
    BCC L0B8CAE
L0B8CA5:
    LDA #116
    CLC
    ADC $0C
    JSR L0B9D0F.w
    SEC
L0B8CAE:
    ROR $05AC
    INC $0C
    DEC $0D
    BNE L0B8C88
    LDA #239
    STA $0451,X
    LDA $05AC
    JSR L0FC9F7.w
    ASL
    CLC
    ADC #2
    STA $0591
    LDX $058F
    LDA $05AC
    STA $7D73,X
    LDA #1
    STA $7D78,X
    JMP L0B9D99.w

L0B8CDA:
    LDA $05F7
    BNE L0B8D0C
    LDA #0
    STA $0E
    JSR L0FF2CB.w
    JMP L0B8D02.w

L0B8CE9:
    LDY #19
    LDA ($00),Y
    AND #4
    BNE L0B8CFD
    LDY #18
    LDA ($00),Y
    BEQ L0B8CFD
    CMP #255
    BEQ L0B8CFD
    INC $0E
L0B8CFD:
    LDA #21
    JSR L0FC379.w
L0B8D02:
    LDY #0
    LDA ($00),Y
    BNE L0B8CE9
    LDA $0E
    BEQ L0B8D0E
L0B8D0C:
    CLC
    RTS

L0B8D0E:
    SEC
    RTS

L0B8D10:
    LDA #14
    STA $0591
    LDA #20
    STA $0590
    LDA #32
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
L0B8D25:
    LDA L0B8D33.w,X
    STA $0451,X
    INX
    CMP #239
    BNE L0B8D25
    JMP L0B9D99.w

L0B8D33:
ENCODE("Aボタン  : ユニット·セレクト")
NEWLINE
ENCODE("Bボタン  : マップにもどる")
NEWLINE
ENCODE("うえ·した : カーソルいどう")
NEWLINE
ENCODE("ひだり·みぎ: もちものをみる")
NEWLINE
ENCODE("のこりが 0のときにスタートを")
NEWLINE
ENCODE("おすと ゲームが はじまります")
NEWLINE
STOP

L0B8DA1:
    LDA #12
    STA $0591
    LDA #12
    STA $0590
    JSR L0BA88A.w
    JSR L0B9BF6.w
    LDA #132
    STA $7A
    LDA #116
    STA $7B
    JSR L0B9C4D.w
    LDY #0
    LDA ($7A),Y
    CMP #177
    BCC L0B8DCC
    LDA #126
    JSR L0B9D0F.w
    JMP L0B8DCF.w

L0B8DCC:
    JSR L0B9C7F.w
L0B8DCF:
    LDA #117
    STA $0451,X
    INX
    LDA #127
    STA $0451,X
    INX
    LDA #141
    STA $0451,X
    INX
    LDY #2
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    LDY #0
    LDA ($7A),Y
    BMI L0B8E0D
    LDY #19
    LDA ($7A),Y
    AND #4
    BNE L0B8E0D
    LDA #192
    STA $0451,X
    INX
    LDA #193
    STA $0451,X
    INX
    LDY #4
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
L0B8E0D:
    LDA #237
    STA $0451,X
    INX
    LDA #113
    JSR L0B9D0F.w
    LDY #0
    LDA ($7A),Y
    BPL L0B8E23
    JSR L0B8EDB.w
    BCS L0B8E5D
L0B8E23:
    LDY #0
    LDA ($7A),Y
    BPL L0B8E35
    LDY #1
    LDA ($7A),Y
    CMP #14
    BNE L0B8E46
    LDA #5
    BNE L0B8E4E
L0B8E35:
    LDY #0
    LDA ($7A),Y
    CMP #1
    BNE L0B8E46
    LDA $744A
    BEQ L0B8E46
    LDA #6
    BNE L0B8E4E
L0B8E46:
    LDY #1
    LDA ($7A),Y
    TAY
    LDA L0B8E99.w,Y
L0B8E4E:
    ASL
    TAY
    LDA L0B8EB2.w,Y
    STA $00
    LDA (L0B8EB2.w + 1),Y
    STA $01
    JSR L0B9D1B.w
L0B8E5D:
    LDA #237
    STA $0451,X
    INX
    LDA #9
    JSR L0B9D0F.w
    JSR L0B9CD8.w
    LDA #173
    STA $0451,X
    INX
    LDY #3
    LDA ($7A),Y
    STA $00
    CMP #53
    BCC L0B8E88
    LDA #156
    STA $0451,X
    INX
    STA $0451,X
    INX
    JMP L0B8E8B.w

L0B8E88:
    JSR L0B9D2F.w
L0B8E8B:
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B8E99:
.db $00
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $04
.db $04
.db $04
.db $04
.db $02
.db $02
.db $04
.db $03
.db $03
.db $03
.db $03
.db $03
.db $02
.db $04
.db $01
.db $00
.db $00

L0B8EB2:
.dw L0B8EC0
.dw L0B8EC6
.dw L0B8EC9
.dw L0B8ECC
.dw L0B8EC1
.dw L0B8ED0
.dw L0B8ED3

L0B8EC0:
STOP

L0B8EC1: ; sword
ENCODE("つるぎ")
STOP

L0B8EC6: ; spear
ENCODE("やり")
STOP

L0B8EC9: ; bow
ENCODE("ゆみ")
STOP

L0B8ECC: ; magic
ENCODE("まほう")
STOP

L0B8ED0: ; axe
ENCODE("おの")
STOP

L0B8ED3: ; sword and bow
ENCODE("つるぎ·ゆみ")
STOP

L0B8EDB:
    LDY #1
    LDA ($7A),Y
    CMP #17
    BEQ L0B8EF8
    CMP #18
    BEQ L0B8EF8
    CMP #11
    BEQ L0B8EF8
    CMP #5
    BEQ L0B8EF8
    CMP #3
    BEQ L0B8EF8
    CMP #21
    BEQ L0B8EF8
    CLC
L0B8EF8:
    RTS

L0B8EF9:
    LDA #10
    STA $0590
    JSR L0BA88A.w
    JSR L0B8FCE.w
    JSR L0B8FE6.w
    JSR L0B9BF6.w
    JSR L0B900C.w
    LDA $7575
    BEQ L0B8F1A
    LDA #14
    JSR L0B9D0F.w
    SEC
    BCS L0B8F1B
L0B8F1A:
    CLC
L0B8F1B:
    ROR $05AC
    LDY #10
    LDA ($7A),Y
    BEQ L0B8F37
    JSR L0B8FCE.w
    JSR L0B8FFE.w
    LDA $7575
    BEQ L0B8F37
    LDA #15
    JSR L0B9D0F.w
    SEC
    BCS L0B8F38
L0B8F37:
    CLC
L0B8F38:
    ROR $05AC
    TXA
    PHA
    LDA #1
    STA $4A
    LDA #6
    JSR L0FCA94.w
    PLA
    TAX
    LDA $75B5
    BNE L0B8F54
    CLC
    LDA $98
    AND #32
    BEQ L0B8F5A
L0B8F54:
    LDA #16
    JSR L0B9D0F.w
    SEC
L0B8F5A:
    ROR $05AC
    TXA
    PHA
    LDA #4
    STA $4A
    LDA #6
    JSR L0FCA94.w
    PLA
    TAX
    BCC L0B8F72
    LDA #20
    JSR L0B9D0F.w
    SEC
L0B8F72:
    ROR $05AC
    LDA #17
    JSR L0B9D0F.w
    SEC
    ROR $05AC
    TXA
    PHA
    LDA #5
    STA $4A
    LDA #6
    JSR L0FCA94.w
    PLA
    TAX
    CLC
    LDA $75B5
    BEQ L0B8FA2
    LDY #11
    LDA ($7A),Y
    BNE L0B8F9C
    JSR L0B908F.w
    BCC L0B8FA2
L0B8F9C:
    LDA #21
    JSR L0B9D0F.w
    SEC
L0B8FA2:
    ROR $05AC
    LSR $05AC
    LSR $05AC
L0B8FAB:
    LDA #239
    STA $0451,X
    LDA $05AC
    JSR L0FC9F7.w
    ASL
    CLC
    ADC #2
    STA $0591
    LDX $058F
    LDA $05AC
    STA $7D73,X
    LDA #1
    STA $7D78,X
    JMP L0B9D99.w

L0B8FCE:
    TXA
    PHA
    LDA #116
    STA $00
    LDA #117
    STA $01
    LDA #60
    STA $02
    LDA #0
    STA $03
    JSR L0FC225.w
    PLA
    TAX
    RTS

L0B8FE6:
    TXA
    PHA
    LDA #180
    STA $00
    LDA #117
    STA $01
    LDA #32
    STA $02
    LDA #0
    STA $03
    JSR L0FC225.w
    PLA
    TAX
    RTS

L0B8FFE:
    TXA
    PHA
    LDA #0
    STA $4A
    LDA #6
    JSR L0FCA94.w
    PLA
    TAX
    RTS

L0B900C:
    LDY #1
    LDA ($7A),Y
    STA $0A
    JSR L0B90C1.w
    BCS L0B9020
    LDA $0A
    CMP #11
    BEQ L0B9020
    JMP L0B908E.w

L0B9020:
    LDY #20
    LDA ($7A),Y
    STA $05F6
    LDY #11
    LDA ($7A),Y
    BEQ L0B9051
    STA $0A
    LDY #1
    LDA ($7A),Y
    CMP #21
    BNE L0B904A
    LDA $744A
    BEQ L0B904A
    LDA $0A
    CMP #22
    BEQ L0B904A
    CMP #21
    BEQ L0B904A
    CMP #20
    BNE L0B906A
L0B904A:
    LDA $0A
    JSR L0FF460.w
    BCC L0B9072
L0B9051:
    LDY #1
    LDA ($7A),Y
    CMP #12
    BEQ L0B906A
    CMP #20
    BEQ L0B906A
    CMP #13
    BEQ L0B906A
    CMP #21
    BNE L0B906E
    LDA $744A
    BEQ L0B906E
L0B906A:
    LDA #1
    BNE L0B9076
L0B906E:
    LDA #0
    BEQ L0B9076
L0B9072:
    LDY #11
    LDA ($7A),Y
L0B9076:
    LDY #20
    STA ($7A),Y
    TXA
    PHA
    LDA #18
    STA $4A
    LDA #6
    JSR L0FCA94.w
    PLA
    TAX
    LDY #20
    LDA $05F6
    STA ($7A),Y
L0B908E:
    RTS

L0B908F:
    LDA $75B4
    SEC
    SBC #1
    ASL
    TAY
L0B9097:
    LDA $75B5,Y
    STA $02
    LDA $75B6,Y
    STA $03
    JSR L0FF280.w
    BCS L0B90B8
    TYA
    PHA
    LDY #19
    LDA ($00),Y
    AND #4
    BNE L0B90B6
    LDY #11
    LDA ($00),Y
    BNE L0B90BE
L0B90B6:
    PLA
    TAY
L0B90B8:
    DEY
    DEY
    BPL L0B9097
    CLC
    RTS

L0B90BE:
    PLA
    SEC
    RTS

L0B90C1:
    LDY #0
L0B90C3:
    LDA L0FF459.w,Y
    CMP #239
    BEQ L0B90D1
    CMP $0A
    BEQ L0B90D3
    INY
    BPL L0B90C3
L0B90D1:
    SEC
    RTS

L0B90D3:
    LDY #0
    LDA ($7A),Y
    BPL L0B90E3
    LDA $0A
    CMP #17
    BEQ L0B90D1
    CMP #18
    BEQ L0B90D1
L0B90E3:
    CLC
    RTS

L0B90E5:
    LDA $7537
    CMP #1
    BNE L0B90FF
    LDY #1
    LDA ($7A),Y
    CMP #21
    BNE L0B90F7
    JMP L0B9205.w

L0B90F7:
    CMP #11
    BNE L0B90FE
    JMP L0B91E8.w

L0B90FE:
    RTS

L0B90FF:
    LDA #14
    STA $0590
    JSR L0BA88A.w
    LDA $7485
    STA $0A
    JSR L0B90C1.w
    BCC L0B9117
    LDA #1
    STA $05AC
    RTS

L0B9117:
    JSR L0B9BF6.w
    STY $0A
    STY $18
    JSR L0FF3BD.w
L0B9121:
    LDY $18
    LDA $05C5,Y
    BPL L0B912B
    JMP L0B91B6.w

L0B912B:
    STA $19
    TAY
    LDA L0FDAFD.w,Y
    AND #16
    BEQ L0B9147
    LDA $7537
    CMP #3
    BNE L0B91B6
    LDA L0FDAFD.w,Y
    AND #32
    BNE L0B9177
    LDY #90
    BNE L0B9150
L0B9147:
    LDA $7537
    CMP #2
    BNE L0B91B6
    LDY #44
L0B9150:
    LDA $7574,Y
    BEQ L0B915B
    LDA #2
    ORA $0A
    STA $0A
L0B915B:
    INY
    LDA $7574,Y
    BEQ L0B9167
    LDA #4
    ORA $0A
    STA $0A
L0B9167:
    LDY $19
    LDA L0FDAFD.w,Y
    AND #6
    AND $0A
    BEQ L0B91B6
    JSR L0B92D4.w
    BCC L0B91B6
L0B9177:
    LDY $18
    LDA $05C5,Y
    JSR L0FF460.w
    BCS L0B91B6
    LDA $05C5,Y
    STX $16
    JSR L0B9C37.w
    DEX
    STX $0450
    LDA #7
    JSR L0B8B5A.w
    DEX
    LDY $18
    LDA $05C5,Y
    TAY
    LDA L0FD9F4.w,Y
    STA $00
    JSR L0B9D2F.w
    LDA #113
    STA $0451,X
    INX
    LDA #121
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    SEC
    BCS L0B91B7
L0B91B6:
    CLC
L0B91B7:
    ROR $05AC
    INC $18
    LDA $18
    CMP #8
    BCS L0B91C5
    JMP L0B9121.w

L0B91C5:
    LDA #239
    STA $0451,X
L0B91CA:
    LDA $05AC
    JSR L0FC9F7.w
    ASL
    CLC
    ADC #2
    STA $0591
    LDX $058F
    LDA $05AC
    STA $7D73,X
    LDA #1
    STA $7D78,X
    JMP L0B9D99.w

L0B91E8:
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L0B91F7
    LDA #11
    LDA ($7A),Y
    BNE L0B91F9
L0B91F7:
    LDA #0
L0B91F9:
    STA $05C5
    LDA #1
    STA $05C4
    STA $7D78
    RTS

L0B9205:
    LDA $744A
    BNE L0B920D
    JMP L0B9297.w

L0B920D:
    LDA #10
    STA $0590
    JSR L0BA88A.w
    JSR L0B9BF6.w
    STX $05AC
    JSR L0FF3BD.w
    JSR L0B929D.w
    LDY #20
    LDA ($7A),Y
    STA $05F6
    LDA #0
    STA $05F8
L0B922D:
    LDY $05F8
    LDA $05C5,Y
    LDY #20
    STA ($7A),Y
    TXA
    PHA
    LDA #18
    STA $4A
    LDA #6
    JSR L0FCA94.w
    PLA
    TAX
    LDA $7575
    BEQ L0B9255
    LDA $05F8
    CLC
    ADC #114
    JSR L0B9D0F.w
    SEC
    BCS L0B9256
L0B9255:
    CLC
L0B9256:
    ROR $05AC
    INC $05F8
    DEC $05C4
    BNE L0B922D
    LDA $05F6
    LDY #20
    STA ($7A),Y
    LDA $05AC
    JSR L0FC39A.w
    LSR
    LSR
    STA $05AC
    LDA $05AC
    BEQ L0B9297
    LDA #239
    STA $0451,X
    LDA $05AC
    JSR L0FC9F7.w
    CMP #2
    BNE L0B928A
    JMP L0B91CA.w

L0B928A:
    LDA $05AC
    AND #2
    BNE L0B9294
    LDA $05AC
L0B9294:
    STA $7D78
L0B9297:
    LDA #0
    STA $058D
    RTS

L0B929D:
    LDY #1
    LDA ($7A),Y
    CMP #21
    BNE L0B92D3
    LDA $744A
    BEQ L0B92D3
    LDY #0
    STY $05C5
    INY
    STY $05C6
    INY
    STY $05C4
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L0B92D3
    LDY #11
    LDA ($7A),Y
    LDY $05EC
    CPY #3
    BEQ L0B92D0
    STA $05C5
    BNE L0B92D3
L0B92D0:
    STA $05C6
L0B92D3:
    RTS

L0B92D4:
    LDA $7537
    CMP #3
    BEQ L0B92F3
    LDY #11
    LDA ($7A),Y
    CMP #57
    BEQ L0B92F3
    LDA $75A2
    BNE L0B92F3
    LDY $18
    LDA $05C5,Y
    CMP #24
    BEQ L0B92F3
    CLC
    RTS
L0B92F3:
    SEC
    RTS

L0B92F5:
    LDA #4
    STA $0591
    LDA #12
    STA $0590
    LDA #80
    STA $77
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDA $747C
    BNE L0B9316
    LDA #11
    JSR L0B9D0F.w
    BEQ L0B931B
L0B9316:
    LDA #18
    JSR L0B9D0F.w
L0B931B:
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B9323:
    LDA #112
    STA $76
    LDA #80
    STA $77
    LDA #14
    STA $0590
    INC $05A4
    INC $05A3
    JSR L0B9BF6.w
    LDA #187
    STA $0451,X
    INX
    JSR L0B9C7F.w
    DEX
    LDA #188
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #127
    JSR L0B9D0F.w
    LDY #19
    LDA ($7A),Y
    AND #4
    BEQ L0B9369
    LDA #63
    STA $0451,X
    INX
    STA $0451,X
    INX
    JMP L0B9372.w
L0B9369:
    LDY #4
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
L0B9372:
    LDA #237
    STA $0451,X
    INX
    JSR L0B93A7.w
    LDA $0591
    CLC
    ADC #4
    STA $0591
    LDY #3
L0B9386:
    LDA $04C8,Y
    STA $04CA,Y
    DEY
    BPL L0B9386
    LDA #255
    STA $04C8
    STA $04C9
    RTS

L0B9398:
    LDA #12
    STA $0590
    JSR L0BA88A.w
    LDA #112
    STA $76
    JSR L0B9BF6.w
L0B93A7:
    LDY #11
    STY $18
    LDA ($7A),Y
    BEQ L0B93BC
    LDA #255
    STA $0451,X
    INX
    JSR L0B9C33.w
    SEC
    ROL $05AC
L0B93BC:
    LDA #239
    STA $0451,X
    LDA $05AC
    BNE L0B93D2
    LDA #23
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    LDA #1
L0B93D2:
    JSR L0FC9F7.w
    ASL
    CLC
    ADC #2
    STA $0591
    JMP L0B9D99.w

L0B93DF:
    RTS

L0B93E0:
    LDA #6
    STA $0591
    LDA #6
    STA $0590
    LDA #144
    STA $76
    LDA #16
    STA $77
    LDA $7554
    CMP #4
    BNE L0B93FD
    LDA #160
    STA $76
L0B93FD:
    JSR L0B9BF6.w
    LDA #34
    JSR L0B9D0F.w
    LDA #35
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    LDX $058F
    LDA #3
    STA $7D73,X
    LDA #1
    STA $7D78,X
    JMP L0B9D99.w

L0B941F:
    LDA #6
    STA $0591
    LDA #6
    STA $0590
    JSR L0BA88A.w
    LDA #128
    STA $76
    JSR L0B9BF6.w
    LDA #46
    JSR L0B9D0F.w
    LDA #47
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    LDX $058F
    LDA #3
    STA $7D73,X
    JMP L0B9D99.w

L0B944D:
    LDA #12
    STA $0590
    LDY #10
    LDA ($7A),Y
    JSR L0FC9F7.w
    CMP #0
    BNE L0B9479
    LDA #6
    STA $0591
    JSR L0BA88A.w
    LDA #128
    STA $76
    JSR L0B9BF6.w
    LDA #82
    JSR L0B9D0F.w
    LDA #83
    JSR L0B9D0F.w
    JMP L0B949C.w

L0B9479:
    ASL
    CLC
    ADC #2
    STA $0591
    JSR L0BA88A.w
    LDA #128
    STA $76
    JSR L0FF3BD.w
    JSR L0B9BF6.w
L0B948D:
    LDY $05C4
    DEY
    LDA $05C5,Y
    JSR L0B9C37.w
    DEC $05C4
    BNE L0B948D
L0B949C:
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B94A4:
    LDA #14
    STA $0590
    LDA #18
    STA $0591
    LDA #80
    STA $76
    LDX #16
    LDA $95
    SEC
    SBC $6A
    CMP #8
    BCC L0B94BF
    LDX #128
L0B94BF:
    STX $77
    JSR L0B9BF6.w
    STX $0E
    LDY #1
    LDA ($7A),Y
    CMP #11
    BEQ L0B94D5
    STA $0A
    JSR L0B90C1.w
    BCC L0B9505
L0B94D5:
    LDA #0
    JSR L0B9D0F.w
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCC L0B94EA
    LDY #5
    LDA ($7A),Y
    JMP L0B94FD.w

L0B94EA:
    LDY #11
    LDA ($7A),Y
    STA $0E
    TAY
    LDA L0FD9B9.w,Y
    CPY #15
    BEQ L0B94FD
    LDY #5
    CLC
    ADC ($7A),Y
L0B94FD:
    STA $00
    JSR L0B9D2F.w
    JMP L0B9513.w

L0B9505:
    LDA #19
    JSR L0B9D0F.w
    LDY #5
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
L0B9513:
    LDA #237
    STA $0451,X
    INX
    LDY #6
L0B951B:
    STY $18
    TYA
    SEC
    SBC #5
    JSR L0B9D0F.w
    LDY #11
    LDA ($7A),Y
    LDY $18
    CPY #9
    BNE L0B9535
    JSR L0B9610.w
    BCC L0B9552
    BCS L0B954E
L0B9535:
    CPY #8
    BNE L0B9541
    CMP #55
    BNE L0B954E
L0B953D:
    LDA #40
    BNE L0B9552
L0B9541:
    CPY #7
    BNE L0B954E
    CMP #56
    BEQ L0B953D
    JSR L0B95ED.w
    BCS L0B9552
L0B954E:
    LDY $18
    LDA ($7A),Y
L0B9552:
    AND #127
    STA $00
    JSR L0B9D2F.w
    LDA #237
    STA $0451,X
    INX
    LDY $18
    INY
    CPY #10
    BNE L0B951B
    LDA #5
    JSR L0B9D0F.w
    LDY #12
    LDA ($7A),Y
    STA $0C
    LDY #11
    LDA ($7A),Y
    CMP #53
    BNE L0B9580
    LDA $0C
    CLC
    ADC #13
    STA $0C
L0B9580:
    LDA $0C
    STA $00
    JSR L0B9D2F.w
    LDA #237
    STA $0451,X
    INX
    LDA #6
    JSR L0B9D0F.w
    LDY #13
    LDA ($7A),Y
    STA $0C
    LDY #11
    LDA ($7A),Y
    CMP #56
    BNE L0B95A7
    LDA $0C
    CLC
    ADC #5
    STA $0C
L0B95A7:
    LDA $0C
    STA $00
    JSR L0B9D2F.w
    LDA #237
    STA $0451,X
    INX
    LDA #40
    JSR L0B9D0F.w
    LDY #0
    LDA ($7A),Y
    AND #128
    BNE L0B95D5
    LDY #19
    LDA ($7A),Y
    AND #4
    BNE L0B95D5
    LDY #4
    LDA ($7A),Y
    STA $00
    JSR L0B9D2F.w
    JMP L0B95DF.w

L0B95D5:
    LDA #63
    STA $0451,X
    INX
    STA $0451,X
    INX
L0B95DF:
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B95ED:
    LDA $0E
    BEQ L0B960A
    LDY #11
    LDA ($7A),Y
    JSR L0FF460.w
    BCS L0B960A
    LDY $18
    LDA ($7A),Y
    LDY $0E
    SEC
    SBC L0FDA24.w,Y
    BCS L0B9608
    LDA #0
L0B9608:
    SEC
    RTS

L0B960A:
    LDY $18
    LDA ($7A),Y
    CLC
    RTS

L0B9610:
    STX $0C
    LDX #0
L0B9614:
    CMP L0FF538.w,X
    BEQ L0B9621
    INX
    CPX #5
    BCC L0B9614
L0B961E:
    LDX $0C
    RTS

L0B9621:
    CPX #3
    BEQ L0B961E
    LDY $18
    LDA ($7A),Y
    CLC
    ADC L0FF53D.w,X
    LDX $0C
    CLC
    RTS

L0B9631:
    LDA #4
    STA $0591
    LDA #16
    STA $0590
    LDA #64
    STA $77
    LDA #96
    STA $76
    JSR L0B9BF6.w
    LDA #16
    STA $06D5
    LDA #83
    CLC
    ADC $05AD
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B965C:
    JSR L0B9BF6.w
    LDA $7DD3
    SEC
    SBC #1
    ASL
    TAX
    LDA L0BB821.w,X
    STA $08
    LDA (L0BB821.w + 1),X
    STA $09
    LDY #0
L0B9673:
    LDA ($08),Y
    STA $0451,Y
    INY
    CMP #239
    BNE L0B9673
    LDA #237
    STA $0450,Y
    LDA #239
    STA $0451,Y
    JMP L0B9D99.w

L0B968A:
    LDA #18
    STA $0590
    LDA #6
    STA $0591
    LDA #80
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDA #45
    JSR L0B9D0F.w
    INX
    LDA $7434
    SEC
    SBC #1
    ASL
    TAY
    LDA L0BB821.w,Y
    STA $00
    LDA (L0BB821.w + 1),Y
    STA $01
    JSR L0B9D1B.w
    LDA #237
    STA $0451,X
    INX
    LDA #10
    JSR L0B9D0F.w
    LDA $743D
    STA $00
    JSR L0B9D2F.w
    LDA #173
    STA $0451,X
    INX
    LDY $7434
    DEY
    LDA L0FE1F9.w,Y
    STA $00
    JSR L0B9D2F.w
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B96ED:
    LDA #16
    STA $0590
    LDA #16
    STA $76
    LDA #16
    STA $77
    JSR L0B9BF6.w
    STX $16
L0B96FF:
    LDA $7556,Y
    CMP #240
    BEQ L0B9740
    STY $18
    JSR L0B9C37.w
    DEX
    STX $0450
    LDA #8
    JSR L0B8B5A.w
    LDY $18
    LDA $7556,Y
    TAY
    DEY
    LDA L0FDAB4.w,Y
    LDY $05B6
    BPL L0B9724
    LSR
L0B9724:
    STA $00
    JSR L0B9D44.w
    LDA #96
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    STX $16
    SEC
    ROL $05AC
    LDY $18
    INY
    BNE L0B96FF
L0B9740:
    LDA #239
    STA $0451,X
    LDA $05AC
    JSR L0FC9F7.w
    ASL
    CLC
    ADC #2
    STA $0591
    LDX $058F
    LDA $05AC
    STA $7D73,X
    LDA #1
    STA $7D78,X
    JMP L0B9D99.w

L0B9763:
    LDA #18
    STA $0590
    LDA #4
    STA $0591
    LDA #48
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDA #43
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B9785:
    LDA #18
    STA $0590
    LDA #18
    STA $0591
    LDA #80
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDY #8
    LDA #237
L0B979E:
    STA $0451,X
    INX
    DEY
    BNE L0B979E
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B97AD:
    LDA #18
    STA $0590
    LDA #4
    STA $0591
    LDA #16
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDA #44
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B97CF:
    LDA #8
    STA $0590
    LDA #12
    STA $0591
    JSR L0BA88A.w
    LDA #128
    STA $76
    JSR L0B9BF6.w
    LDY #0
    STY $18
L0B97E7:
    LDA L0B9824.w,Y
    STA $0451,X
    INX
    INX
    LDY $18
    BNE L0B97FA
    LDA #48
    JSR L0B9D0F.w
    BEQ L0B9805
L0B97FA:
    LDY $18
    CPY #4
    BNE L0B9805
    LDA #49
    JSR L0B9D0F.w
L0B9805:
    LDA #237
    STA $0451,X
    INX
    LDY $18
    INY
    STY $18
    CPY #5
    BNE L0B97E7
    LDA #239
    STA $0451,X
    LDX $058F
    LDA #31
    STA $7D73,X
    JMP L0B9D99.w

L0B9824:
.db $61 $62 $63 $64 $76

L0B9829:
    LDA #8
    STA $0591
    LDA #12
    STA $0590
    JSR L0BA88A.w
    JSR L0B9BF6.w
    LDX $058F
    LDA #7
    STA $7D73,X
    LDA #1
    STA $7D78,X
    LDX #0
L0B9848:
    LDA L0B9856.w,X
    STA $0451,X
    INX
    CMP #239
    BNE L0B9848
    JMP L0B9D99.w

L0B9856:
ENCODE("サウンド")
NEWLINE
ENCODE("アニメーション")
NEWLINE
ENCODE("ウエイトタイマー")
NEWLINE
STOP

L0B986E:
    LDA #12
    STA $0590
    LDA #4
    STA $0591
    LDA #96
    STA $76
    LDA #80
    STA $77
    JSR L0B9BF6.w
    LDA #50
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B9890:
    LDA #6
    STA $0591
    LDA #8
    STA $0590
    LDA #32
    STA $76
    STA $77
    JSR L0B9BF6.w
    LDA #53
    JSR L0B9D0F.w
    LDA #54
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    LDX $058F
    LDA #3
    STA $7D73,X
    LDA #1
    STA $7D78,X
    JMP L0B9D99.w

L0B98C2:
    JSR L0B9BF6.w
    STX $16
    STX $058D
    LDY $74F1
    LDA $744F,Y
    JSR L0B9C37.w
    DEX
    STX $0450
    LDA #8
    JSR L0B8B5A.w
    LDY $74F1
    LDA #255
    STA $0451,X
    INX
    LDA #255
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    LDA #239
    STA $0451,X
    JSR L0B9D99.w
    JMP L0B8B80.w

L0B98FC:
    LDA $7DD1
    ASL
    CLC
    ADC #4
    STA $0591
    LDA $7DD0
    CLC
    ADC #2
    STA $0590
    LDA $7DCE
    STA $77
    LDA $7DCF
    STA $76
    JSR L0B9BF6.w
    LDA $7DD1
    TAY
    INY
L0B9921:
    LDX #0
    LDA #237
L0B9925:
    STA $0451,X
    INX
    DEY
    BNE L0B9925
    INX
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B9935:
    LDX $7DA5
    LDA $7DDB,X
    CLC
    ADC #2
    STA $0591
    LDA $7DD9,X
    CLC
    ADC #2
    STA $0590
    LDA $7DD5,X
    STA $77
    LDA $7DD7,X
    STA $76
    JSR L0B9BF6.w
    LDX $7DA5
    LDA $7DDB,X
    LSR
    TAY
    JMP L0B9921.w

L0B9962:
    LDA #14
    STA $0590
    LDA #48
    STA $76
    LDA #16
    STA $77
    JSR L0B9BF6.w
    LDA #111
    JSR L0B9D0F.w
    LDA #1
    STA $05AC
    LDA #0
    STA $5A
    LDA #1
    JSR L0B9A4F.w
    ROL $5A
    LDA #0
    JSR L0B9A4F.w
    ROL $5A
    LDA $5A
    BEQ L0B99A3
    CMP #3
    BEQ L0B99A3
    LDA #68
    JSR L0B9D0F.w
    LDA $05AC
    ORA #2
    STA $05AC
L0B99A3:
    LDA $5A
    CMP #1
    BCC L0B99B6
    LDA #69
    JSR L0B9D0F.w
    LDA $05AC
    ORA #4
    STA $05AC
L0B99B6:
    JMP L0B8FAB.w

L0B99B9:
    LDA #14
    STA $0590
    LDA #48
    STA $76
    LDA #16
    STA $77
    JSR L0B9BF6.w
    LDA #0
    STA $5A
    LDA #1
    JSR L0B9A4F.w
    ROL $5A
    LDA #0
    JSR L0B9A4F.w
    ROL $5A
    JSR L0B9A39.w
    BCC L0B99E6
    LDA #64
    JSR L0B9D0F.w
    SEC
L0B99E6:
    ROR $05AC
    LDA $5A
    CMP #3
    BEQ L0B99F7
    LDA #63
    JSR L0B9D0F.w
    SEC
    BCS L0B99F8
L0B99F7:
    CLC
L0B99F8:
    ROR $05AC
    LDA $5A
    CMP #1
    BCC L0B9A07
    LDA #65
    JSR L0B9D0F.w
    SEC
L0B9A07:
    ROR $05AC
    LDA $5A
    BEQ L0B9A1A
    CMP #3
    BEQ L0B9A1A
    LDA #68
    JSR L0B9D0F.w
    SEC
    BCS L0B9A1B
L0B9A1A:
    CLC
L0B9A1B:
    ROR $05AC
    LDA $5A
    CMP #1
    BCC L0B9A2A
    LDA #69
    JSR L0B9D0F.w
    SEC
L0B9A2A:
    ROR $05AC
    LDA $05AC
    LSR
    LSR
    LSR
    STA $05AC
    JMP L0B8FAB.w

L0B9A39:
    LDY #3
L0B9A3B:
    LDA $7480,Y
    CMP L0B9A4B.w,Y
    BNE L0B9A49
    DEY
    BPL L0B9A3B
    SEC
    BCS L0B9A4A
L0B9A49:
    CLC
L0B9A4A:
    RTS

L0B9A4B:
.db $7D $6A $77 $72

L0B9A4F:
    STA $6D
    TXA
    PHA
    LDA #7
    STA $4A
    LDA #11
    JSR L0FCA94.w
    LDA $67
    LSR
    PLA
    TAX
    RTS

L0B9A62:
    LDA #14
    STA $0590
    LDA #48
    STA $76
    LDA #128
    STA $77
    JSR L0B9BF6.w
    LDA #0
    JSR L0B9A4F.w
    BCC L0B9A92
    LDA #66
    JSR L0B9D0F.w
    LDA $63C1
    STA $00
    LDA $63C2
    STA $01
    JSR L0B9D74.w
    LDA #237
    STA $0451,X
    INX
    SEC
L0B9A92:
    ROR $05AC
    LDA #1
    JSR L0B9A4F.w
    BCC L0B9AB5
    LDA #67
    JSR L0B9D0F.w
    LDA $6794
    STA $00
    LDA $6795
    STA $01
    JSR L0B9D74.w
    LDA #237
    STA $0451,X
    INX
    SEC
L0B9AB5:
    ROR $05AC
    LDA $05AC
    JSR L0FC399.w
    LSR
    STA $05AC
    JMP L0B8FAB.w

L0B9AC5:
    LDA #14
    STA $0590
    LDA #48
    STA $76
    LDA #128
    STA $77
    JSR L0B9BF6.w
    LDA #0
    JSR L0B9A4F.w
    BCS L0B9AF8
    LDA #66
    JSR L0B9D0F.w
    LDA #63
    STA $0451,X
    INX
    STA $0451,X
    INX
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    SEC
    BCS L0B9AF9
L0B9AF8:
    CLC
L0B9AF9:
    ROR $05AC
    LDA #1
    JSR L0B9A4F.w
    BCS L0B9B1F
    LDA #67
    JSR L0B9D0F.w
    LDA #63
    STA $0451,X
    INX
    STA $0451,X
    INX
    STA $0451,X
    INX
    LDA #237
    STA $0451,X
    INX
    SEC
    BCS L0B9B20
L0B9B1F:
    CLC
L0B9B20:
    ROR $05AC
    LDA $05AC
    JSR L0FC399.w
    LSR
    STA $05AC
    JMP L0B8FAB.w

L0B9B30:
    LDA #0
    STA $00
    LDA #96
    STA $01
    LDA #193
    STA $02
    LDA #99
    STA $03
    LDA $6D
    BEQ L0B9B54
    LDA #211
    STA $00
    LDA #99
    STA $01
    LDA #148
    STA $02
    LDA #103
    STA $03
L0B9B54:
    LDY #4
L0B9B56:
    LDA ($00),Y
    STA $7484,Y
    DEY
    BPL L0B9B56
    LDA $7487
    STA $7492
    LDA $744A
    STA $7534
    LDY #8
    LDA ($02),Y
    STA $744A
    JSR L0B8DA1.w
    LDA $7534
    STA $744A
    LDA #48
    STA $76
    LDA #144
    STA $77
    RTS

L0B9B83:
    LDA #10
    STA $0590
    LDA #48
    STA $76
    STA $77
    JSR L0B9BF6.w
    LDA #53
    JSR L0B9D0F.w
    LDA #70
    JSR L0B9D0F.w
    LDA #3
    STA $05AC
    JSR L0B8FAB.w
    LDA $7560
    BEQ L0B9BB0
    LDX $058F
    LDA #2
    STA $7D78,X
L0B9BB0:
    RTS

L0B9BB1:
    LDA #14
    STA $0590
    LDA #48
    STA $76
    STA $77
    JSR L0B9BF6.w
    LDA $7534
    JSR L0B9C37.w
    LDY #11
    STY $18
    JSR L0B9C33.w
    LDA #3
    STA $05AC
    JMP L0B8FAB.w

L0B9BD4:
    LDA #4
    STA $0591
    LDA #14
    STA $0590
    LDA #48
    STA $76
    LDA #64
    STA $77
    JSR L0B9BF6.w
    LDA #71
    JSR L0B9D0F.w
    LDA #239
    STA $0451,X
    JMP L0B9D99.w

L0B9BF6:
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

L0B9C25:
    TXA
    PHA
    LDA #2
    STA $4A
    LDA #6
    JSR L0FCA94.w
    PLA
    TAX
    RTS

L0B9C33:
    LDY $18
    LDA ($7A),Y
L0B9C37:
    ASL
    TAY
    LDA L0FDCAD.w,Y
    STA $00
    LDA (L0FDCAD.w + 1),Y
    STA $01
    JSR L0B9D1B.w
    LDA #237
    STA $0451,X
    INX
    RTS

L0B9C4D:
    LDY #0
    LDA ($7A),Y
L0B9C51:
    AND #127
    TAY
    DEY
    TYA
    ASL
    TAY
    LDA $7484
    AND #128
    BEQ L0B9C6B
    LDA L0FDFBA.w,Y
    STA $00
    LDA (L0FDFBA.w + 1),Y
    STA $01
    BNE L0B9C75
L0B9C6B:
    LDA L0FDEA9.w,Y
    STA $00
    LDA (L0FDEA9.w+1),Y
    STA $01
L0B9C75:
    JSR L0B9D1B.w
    LDA #237
    STA $0451,X
    INX
    RTS

L0B9C7F:
    LDA #0
    STA $05D6
    LDY #0
    LDA ($7A),Y
    BPL L0B9C90
    INC $05D6
    JMP L0B9CAA.w
L0B9C90:
    CMP #1
    BNE L0B9C9D
    LDA $744A
    BEQ L0B9CAA
    LDA #23
    BNE L0B9CAE
L0B9C9D:
    CMP #2
    BNE L0B9CAA
    LDA $744B
    BEQ L0B9CAA
    LDA #24
    BNE L0B9CAE
L0B9CAA:
    LDY #1
    LDA ($7A),Y
L0B9CAE:
    TAY
    DEY
    TYA
    ASL
    TAY
    LDA $05D6
    BEQ L0B9CC4
    LDA L0FDC2E.w,Y
    STA $00
    LDA (L0FDC2E.w + 1),Y
    STA $01
    BNE L0B9CCE
L0B9CC4:
    LDA L0FDB73.w,Y
    STA $00
    LDA (L0FDB73.w+1),Y
    STA $01
L0B9CCE:
    JSR L0B9D1B.w
    LDA #237
    STA $0451,X
    INX
    RTS

L0B9CD8:
    LDY #14
    LDA ($7A),Y
    STA $00
    CMP #53
    BCC L0B9CED
    LDA #156
    STA $0451,X
    INX
    STA $0451,X
    INX
    RTS

L0B9CED:
    JMP L0B9D2F.w

L0B9CF0:
    LDA $00
    SEC
    SBC #1
    ASL
    TAX
    LDA L0BB821.w,X
    STA $08
    LDA (L0BB821.w + 1),X
    STA $09
    LDY #0
L0B9D03:
    LDA ($08),Y
    STA ($0A),Y
    CMP #239
    BEQ L0B9D0E
    INY
    BPL L0B9D03
L0B9D0E:
    RTS

L0B9D0F:
    ASL
    TAY
    LDA L0B9E22.w,Y
    STA $00
    LDA (L0B9E22.w + 1),Y
    STA $01
L0B9D1B:
    LDY #0
L0B9D1D:
    LDA ($00),Y
    CMP #239
    BEQ L0B9D2E
    STA $0451,X
    INX
    CMP #237
    BEQ L0B9D2E
    INY
    BNE L0B9D1D
L0B9D2E:
    RTS

L0B9D2F:
    CLC
    TXA
    ADC #81
    STA $08
    LDA #4
    ADC #0
    STA $09
    LDA #2
    STA $01
    INX
    INX
    JMP L0FC7EA.w

L0B9D44:
    CLC
    TXA
    ADC #81
    STA $08
    LDA #4
    ADC #0
    STA $09
    LDA #3
    STA $01
    INX
    INX
    INX
    JMP L0FC7EA.w

L0B9D5A:
    CLC
    TXA
    ADC #81
    STA $08
    LDA #4
    ADC #0
    STA $09
    JSR L0FC7BA.w
    LDA #141
    STA $0451,X
    INX
    INX
    INX
    INX
    INX
    RTS

L0B9D74:
    CLC
    TXA
    ADC #81
    STA $08
    LDA #4
    ADC #0
    STA $09
    JSR L0FC7BA.w
    LDA $0453,X
    STA $0451,X
    INX
    LDA $0453,X
    STA $0451,X
    INX
    LDA $0453,X
    STA $0451,X
    INX
    RTS

L0B9D99:
    LDA #81
    STA $7C
    LDA #4
    STA $7D
    LDX #0
    STX $0310
    STX $0450
L0B9DA9:
    LDA $0450
    PHA
L0B9DAD:
    JSR L0B9E09.w
    LDA $06
    CMP #239
    BEQ L0B9DF1
    CMP #237
    BEQ L0B9DC7
    CMP #15
    BEQ L0B9DC6
    CMP #31
    BEQ L0B9DC6
    LDA #255
    BNE L0B9DC7
L0B9DC6:
    DEX
L0B9DC7:
    JSR L0B9DFB.w
    LDA $06
    CMP #237
    BNE L0B9DAD
    PLA
    STA $0450
L0B9DD4:
    JSR L0B9E09.w
    LDA $06
    CMP #237
    BEQ L0B9DE5
    CMP #15
    BEQ L0B9DD4
    CMP #31
    BEQ L0B9DD4
L0B9DE5:
    JSR L0B9DFB.w
    LDA $06
    CMP #237
    BNE L0B9DD4
    JMP L0B9DA9.w

L0B9DF1:
    PLA
    STA $0450
    LDA #255
    STA $05AC
    RTS

L0B9DFB:
    STA $0311,X
    INX
    CPX #255
    BCC L0B9E08
    LDA #239
    STA $0310,X
L0B9E08:
    RTS

L0B9E09:
    TYA
    PHA
    TXA
    PHA
    LDY $0450
    LDA ($7C),Y
    INC $0450
    CMP #237
    BNE L0B9E1B
    INC $0A
L0B9E1B:
    STA $06
    PLA
    TAX
    PLA
    TAY
    RTS

L0B9E22:
.dw L0B9F63
.dw L0B9F6D
.dw L0B9F77
.dw L0B9F81
.dw L0B9F8A
.dw L0B9FA7
.dw L0B9F94
.dw L0B9F9E
.dw L0B9FB2
.dw L0B9FB8
.dw L0B9FBC
.dw L0B9FC1
.dw L0B9FC9
.dw L0B9FCD
.dw L0B9FD1
.dw L0B9FD7
.dw L0B9FDD
.dw L0B9FE3
.dw L0B9FE7
.dw L0B9FEE
.dw L0B9FF7
.dw L0B9FFB
.dw L0BA000
.dw L0BA000
.dw L0BA008
.dw L0BA00C
.dw L0BA011
.dw L0BA016
.dw L0BA01D
.dw L0BA027
.dw L0BA031
.dw L0BA039
.dw L0BA042
.dw L0BA052
.dw L0BA05B
.dw L0BA05E
.dw L0BA062
.dw L0BA067
.dw L0BA06B
.dw L0BA071
.dw L0BA07C
.dw L0BA085
.dw L0BA08A
.dw L0BA090
.dw L0BA09E
.dw L0BA0AB
.dw L0BA0B1
.dw L0BA0B4
.dw L0BA0B8
.dw L0BA0BC
.dw L0BA0C0
.dw L0BA0CB
.dw L0BA0D2
.dw L0BA0DB
.dw L0BA0E1
.dw L0BA179
.dw L0BA185
.dw L0BA191
.dw L0BA19D
.dw L0BA101
.dw L0BA105
.dw L0BA10A
.dw L0BA111
.dw L0BA11C
.dw L0BA123
.dw L0BA12B
.dw L0BA132
.dw L0BA13B
.dw L0BA144
.dw L0BA14C
.dw L0BA153
.dw L0BA159
.dw L0BA163
.dw L0BA169
.dw L0BA169
.dw L0BA170
.dw L0BA175
.dw L0BA179
.dw L0BA185
.dw L0BA191
.dw L0BA1A9
.dw L0BA1B6
.dw L0BA1BF
.dw L0BA1C4
.dw L0BA1CB
.dw L0BA1D8
.dw L0BA1E4
.dw L0BA1ED
.dw L0BA1F3
.dw L0BA1FB
.dw L0BA204
.dw L0BA213
.dw L0BA21D
.dw L0BA22B
.dw L0BA239
.dw L0BA240
.dw L0BA24D
.dw L0BA25A
.dw L0BA262
.dw L0BA26D
.dw L0BA276
.dw L0BA27E
.dw L0BA287
.dw L0BA28E
.dw L0BA293
.dw L0BA2A2
.dw L0BA2AE
.dw L0BA2BC
.dw L0BA2CA
.dw L0BA2D5
.dw L0BA2E1
.dw L0BA2F1
.dw L0BA2F7
.dw L0BA304
.dw L0B9F5A
.dw L0B9F5F
.dw L0B9F26
.dw L0B9F2B
.dw L0B9F31
.dw L0B9F39
.dw L0B9F41
.dw L0B9F48
.dw L0B9F4E
.dw L0B9F53
.dw L0BA309
.dw L0BA30B
.dw L0B9F22
.dw L0BA07E

L0B9F22:
ENCODE("ーーー")
NEWLINE

L0B9F26:
ENCODE("いちらん")
NEWLINE

L0B9F2B:
ENCODE("とつげき")
NEWLINE

L0B9F31:
ENCODE("みんなあつまれ")
NEWLINE

L0B9F39:
ENCODE("じょうきょう")
NEWLINE

L0B9F41:
ENCODE("ちゅうだん")
NEWLINE

L0B9F48:
ENCODE("たいきゃく")
NEWLINE

L0B9F4E:
ENCODE("スイッチ")
NEWLINE

L0B9F53:
ENCODE("ターンおわる")
NEWLINE

L0B9F5A:
ENCODE("つるぎ")
NEWLINE

L0B9F5F:
ENCODE("ゆみや")
NEWLINE

L0B9F63:
ENCODE("こうげきりょく:")
STOP

L0B9F6D:
ENCODE("     わざ:")
STOP

L0B9F77:
ENCODE("   すばやさ:")
STOP

L0B9F81:
ENCODE("  うんのよさ:")
STOP

L0B9F8A:
ENCODE(" しゅびりょく:")
STOP

L0B9F94:
ENCODE(" いどうりょく:")
STOP

L0B9F9E:
ENCODE("   さくてき:")
STOP

L0B9FA7:
ENCODE("まほうぼうぎょ:")
STOP

L0B9FB2:
ENCODE("レベル:")
STOP

L0B9FB8:
ENCODE("HP:")
STOP

L0B9FBC:
ENCODE("ターン:")
STOP

L0B9FC1:
ENCODE(" PLAYER")
NEWLINE

L0B9FC9:
ENCODE("END")
NEWLINE

L0B9FCD:
ENCODE("   ")
NEWLINE

L0B9FD1:
ENCODE("こうげき")
NEWLINE

L0B9FD7:
ENCODE("くろまほう")
NEWLINE

L0B9FDD:
ENCODE("しろまほう")
NEWLINE

L0B9FE3:
ENCODE("たいき")
NEWLINE

L0B9FE7:
ENCODE(" ENEMY")
NEWLINE

L0B9FEE:
ENCODE("   まりょく:")
STOP

L0B9FF7:
ENCODE("あける")
NEWLINE

L0B9FFB:
ENCODE("もちもの")
NEWLINE

L0BA000:
ENCODE("NO ITEM")
NEWLINE

L0BA008:
ENCODE("すてた")
NEWLINE

L0BA00C:
ENCODE("わたした")
NEWLINE

L0BA011:
ENCODE("つかった")
NEWLINE

L0BA016:
ENCODE("そうびした")
NEWLINE

L0BA01D:
ENCODE(" マルスのしょうり")
NEWLINE

L0BA027:
ENCODE("GAME OVER")
NEWLINE

L0BA031:
ENCODE("たいりょくが")
NEWLINE

L0BA039:
ENCODE("かいふくしました")
NEWLINE

L0BA042:
ENCODE(" もちものがいっぱいです")
NEWLINE

L0BA052:
ENCODE("なにかすてますか")
NEWLINE

L0BA05B:
ENCODE("はい")
NEWLINE

L0BA05E:
ENCODE("いいえ")
NEWLINE

L0BA062:
ENCODE("をすてて")
NEWLINE

L0BA067:
ENCODE("をえた")
NEWLINE

L0BA06B:
ENCODE("あきらめた")
NEWLINE

L0BA071:
ENCODE("まほうぼうぎょ:")
STOP

L0BA07C:
ENCODE("  ")
L0BA07E:
ENCODE("けいけんち:")
STOP

L0BA085:
ENCODE("ぶきや")
NEWLINE

L0BA08A:
ENCODE("たずねる")
NEWLINE

L0BA090:
ENCODE("       LV EXP")
NEWLINE

L0BA09E:
ENCODE("ユニットセレクト のこり")
NEWLINE

L0BA0AB:
ENCODE("マップ:")
STOP

L0BA0B1:
ENCODE("ON")
NEWLINE

L0BA0B4:
ENCODE("OFF")
NEWLINE

L0BA0B8:
ENCODE("はやい")
STOP

L0BA0BC:
ENCODE("おそい")
STOP

L0BA0C0:
ENCODE("セーブしますか ?")
NEWLINE

L0BA0CB:
ENCODE("どうぐや")
NEWLINE

L0BA0D2:
ENCODE("とうぎじょう")
NEWLINE

L0BA0DB:
ENCODE("あずける")
NEWLINE

L0BA0E1:
ENCODE("ひきだす")
NEWLINE
ENCODE("たからばこ")
NEWLINE
ENCODE("しろ")
NEWLINE
ENCODE("ぎょくざ")
NEWLINE
ENCODE("あずかりじょ")
NEWLINE

L0BA101:
ENCODE("はなす")
NEWLINE

L0BA105:
ENCODE("へんしん")
NEWLINE

L0BA10A:
ENCODE("ひみつのみせ")
NEWLINE

L0BA111:
ENCODE("NEXT STORY")
NEWLINE

L0BA11C:
ENCODE("さいしょから")
NEWLINE

L0BA123:
ENCODE("つづきをする")
NEWLINE

L0BA12B:
ENCODE("ロードする")
NEWLINE

L0BA132:
ENCODE("きろく1:ターン")
STOP

L0BA13B:
ENCODE("きろく2:ターン")
STOP

L0BA144:
ENCODE("きろくをうつす")
NEWLINE

L0BA14C:
ENCODE("きろくをけす")
NEWLINE

L0BA153:
ENCODE("もちかえる")
NEWLINE

L0BA159:
ENCODE("  あずかりひん")
NEWLINE

L0BA163:
ENCODE("しきかん:")
STOP

L0BA169:
ENCODE("にんずう:")
STOP

L0BA170:
ENCODE("つよさ ")
STOP

L0BA175:
ENCODE("なまえ")
STOP

L0BA179:
ENCODE("LV EXP  HP ")
NEWLINE

L0BA185:
ENCODE(" 力 守備  技 連さ")
NEWLINE

L0BA191:
ENCODE("うん 魔守 へいしゅ ")
NEWLINE

L0BA19D:
ENCODE("   アイテム    ")
NEWLINE

L0BA1A9:
ENCODE("てきのぶたいがいます")
NEWLINE

L0BA1B6:
ENCODE("よろしいですか")
NEWLINE

L0BA1BF:
ENCODE("まほうは")
NEWLINE

L0BA1C4:
ENCODE("つかえません")
NEWLINE

L0BA1CB:
ENCODE("アリティアぐんしょうり")
NEWLINE

L0BA1D8:
ENCODE("  みかた ぜんめつ")
NEWLINE

L0BA1E4:
ENCODE("    ひきわけ")
NEWLINE

L0BA1ED:
ENCODE("たいきゃく")
NEWLINE

L0BA1F3:
ENCODE("はいりますか?")
NEWLINE

L0BA1FB:
ENCODE("たいきゃくします")
NEWLINE

L0BA204:
ENCODE("ぜんいん とつげきせよ!")
NEWLINE

L0BA213:
ENCODE("げきは しました")
NEWLINE

L0BA21D:
ENCODE("とうそつちがあがった!")
NEWLINE

L0BA22B:
ENCODE("ぜんいんてったいせよ!!")
NEWLINE

L0BA239:
ENCODE("は たおれた")
NEWLINE

L0BA240:
ENCODE("へいしは にげだした")
NEWLINE

L0BA24D:
ENCODE("ぐんが あらわれた!")
NEWLINE

L0BA25A:
ENCODE("あらわれた!!")
NEWLINE

L0BA262:
ENCODE("せめこんできた!!")
NEWLINE

L0BA26D:
ENCODE("どのぶたいを")
NEWLINE

L0BA276:
ENCODE("だしますか?")
NEWLINE

L0BA27E:
ENCODE("てきぶたい: ")
STOP

L0BA287:
ENCODE("  ターン:")
STOP

L0BA28E:
ENCODE("かわりに")
STOP

L0BA293:
ENCODE("ぶたいを ひきついだ!!")
NEWLINE

L0BA2A2:
ENCODE("まちぶせしていた!!")
NEWLINE

L0BA2AE:
ENCODE("たいきゃく できない!!")
NEWLINE

L0BA2BC:
ENCODE("アリティアにせめこまれた!")
NEWLINE

L0BA2CA:
ENCODE(" GAME OVER")
NEWLINE

L0BA2D5:
ENCODE("ぶたい ぜんいんの")
NEWLINE

L0BA2E1:
ENCODE("けいけんちが あがった!!")
NEWLINE

L0BA2F1:
ENCODE("きろくする")
NEWLINE

L0BA2F7:
ENCODE("いどうできない!!!")
NEWLINE

L0BA304:
ENCODE("ぶき:")
STOP

L0BA309:
ENCODE("と")
NEWLINE

L0BA30B:
ENCODE("を")
NEWLINE

L0BA30D:
    LDA $059F
    JSR L0FC34C.w

.dw L0FC73D
.dw L0BA321
.dw L0BA35A
.dw L0BA381
.dw L0BA3AD
.dw L0BA3EC
.dw L0BA49B

L0BA321:
    LDY $058F
    CPY #5
    BCC L0BA32F
    LDA #0
    STA $058D
    BEQ L0BA359
L0BA32F:
    INY
    STY $058E
    CPY #1
    BNE L0BA345
    JSR L0FD2BF.w
    JSR L0FE71D.w
    JSR L0FC70D.w
    LDA #0
    JSR L0FCA58.w
L0BA345:
    LDY $058E
    JSR L0BA49B.w
    JSR L0BA4B5.w
    JSR L0BA97C.w
    LDA #0
    STA $0595
    INC $058D
L0BA359:
    RTS

L0BA35A:
    JSR L0BA6C3.w
    LDA $0595
    CMP $0591
    BNE L0BA380
    LDX $058E
    STX $058F
    DEX
    LDA $7D73,X
    BEQ L0BA378
    LDA #5
    STA $058D
    BNE L0BA380
L0BA378:
    LDA #0
    STA $058D
    STA $05A4
L0BA380:
    RTS

L0BA381:
    LDY $058F
    BEQ L0BA3CE
    JSR L0BA49B.w
    LDY #0
    LDA ($74),Y
    STA $0591
    INY
    LDA ($74),Y
    STA $0590
    JSR L0FC70D.w
    JSR L0FD510.w
    LDA #16
    STA $76
    LDA #3
    STA $77
    LDA #0
    STA $0592
    INC $058D
    RTS

L0BA3AD:
    JSR L0BA587.w
    JSR L0BA5FA.w
    LDA $0594
    BNE L0BA3EB
    LDY $058F
    DEY
    STY $058F
    BEQ L0BA3CE
    DEY
    LDA $7D73,Y
    BEQ L0BA3E3
    LDA #5
    STA $058D
    BNE L0BA3EB
L0BA3CE:
    JSR L0FC70D.w
    LDA $05B7
    CMP #6
    BNE L0BA3E0
    LDY $9F
    LDA L_BANKS_ANIMATIONS.w,Y
    JSR L0FCA58.w
L0BA3E0:
    JSR L0FE734.w
L0BA3E3:
    LDA #0
    STA $0595
    STA $058D
L0BA3EB:
    RTS

L0BA3EC:
    LDX $058F
    DEX
    LDA $7D73,X
    JSR L0FC9F7.w
    STA $0B
    LDX $058F
    DEX
    LDY $7D78,X
    LDA $1A
    CMP #128
    BEQ L0BA44A
    CMP #64
    BEQ L0BA437
    LDA $1E
    CMP #4
    BEQ L0BA425
    CMP #8
    BNE L0BA465
    CPY #1
    BNE L0BA41B
    LDA $0B
    BNE L0BA41D
L0BA41B:
    DEY
    TYA
L0BA41D:
    STA $7D78,X
    JSR L0FF578.w
    BNE L0BA465
L0BA425:
    CPY $0B
    BNE L0BA42D
    LDA #1
    BNE L0BA42F
L0BA42D:
    INY
    TYA
L0BA42F:
    STA $7D78,X
    JSR L0FF578.w
    BNE L0BA465
L0BA437:
    LDA #2
    STA $06D1
    LDA $2C
    BEQ L0BA442
    STA $8A
L0BA442:
    LDA #0
    STA $05AC
    JMP L0FE696.w

L0BA44A:
    JSR L0FF572.w
    LDA $7D78,X
    TAX
    LDY $058F
    DEY
    LDA $7D73,Y
    JSR L0BA902.w
    STA $05AC
    LDA #0
    STA $058D
    BEQ L0BA492
L0BA465:
    LDY $058F
    JSR L0BA49B.w
    LDA $7D78,X
    TAX
    DEX
    LDY #4
    LDA ($74),Y
    CLC
    ADC L0BA493.w,X
    STA $3A
    INY
    LDA ($74),Y
    CLC
    ADC #8
    STA $3B
    LDA #0
    STA $41
    STA $3F
    LDA #8
    STA $0587
    LDA #197
    JMP L0FE80F.w

L0BA492:
    RTS

L0BA493:
.db $10 $20 $30 $40 $50 $60 $70 $80

L0BA49B:
    DEY
    TYA
    ASL
    TAY
    LDA L0BA4AB.w,Y
    STA $74
    INY
    LDA L0BA4AB.w,Y
    STA $75
    RTS

L0BA4AB:
.dw $7C35
.dw $7C3B
.dw $7C41
.dw $7C47
.dw $7C4D

L0BA4B5:
    LDA $77
    STA $01
    LDA $76
    STA $00
    JSR L0FC517.w
    LDY #0
    LDA $0591
    STA ($74),Y
    INY
    LDA $0590
    STA ($74),Y
    INY
    LDA $04
    STA ($74),Y
    INY
    LDA $05
    STA ($74),Y
    INY
    LDA $76
    STA ($74),Y
    INY
    LDA $77
    STA ($74),Y
    INY
    STY $0592
    RTS

L0BA4E6:
    LDY #0
    LDA ($74),Y
    TAX
    INY
    INY
    LDA ($74),Y
    STA $00
    INY
    LDA ($74),Y
    STA $01
    LDA $00
    AND #128
    STA $04
    DEX
    LDY #1
L0BA4FF:
    JSR L0FC81C.w
    LDA $00
    AND #128
    EOR $04
    BEQ L0BA511
    INY
    LDA $04
    EOR #128
    STA $04
L0BA511:
    DEX
    BNE L0BA4FF
    STY $81
    LDY #1
    LDA ($74),Y
    TAX
    INY
    LDA ($74),Y
    STA $00
    INY
    LDA ($74),Y
    STA $01
    LDA $00
    AND #4
    STA $04
    DEX
    LDY #1
L0BA52E:
    JSR L0BA8B9.w
    LDA $00
    AND #4
    EOR $04
    BEQ L0BA540
    INY
    LDA $04
    EOR #4
    STA $04
L0BA540:
    DEX
    BNE L0BA52E
    STY $82
    RTS

L0BA546:
    LDY #2
    LDA ($74),Y
    STA $04
    INY
    LDA ($74),Y
    STA $05
    JSR L0FC407.w
    LDY $81
    DEY
    TYA
    ASL
    ASL
    ASL
    CLC
    ADC $78
    ORA #192
    STA $78
    RTS

L0BA563:
    LDY #2
    LDA ($74),Y
    STA $00
    INY
    LDA ($74),Y
    STA $01
    LDA $0591
    CLC
    SBC $0595
    TAX
    BEQ L0BA57E
L0BA578:
    JSR L0FC81C.w
    DEX
    BNE L0BA578
L0BA57E:
    LDA $00
    STA $78
    LDA $01
    STA $79
L0BA586:
    RTS

L0BA587:
    LDY $0594
    BEQ L0BA586
    JSR L0BA563.w
    JSR L0BA5BB.w
    LDA $0590
    JSR L0BA5DC.w
    JSR L0BA5E6.w
    INC $0595
    JSR L0BA5BB.w
    LDA $0590
    JSR L0BA5DC.w
    JSR L0BA5E6.w
    INC $0595
    LDA $0595
    CMP $0591
    BNE L0BA5BA
    LDA #0
    STA $0594
L0BA5BA:
    RTS

L0BA5BB:
    LDA $76
    STA $02
    LDA $77
    STA $03
    LDA $78
    STA $00
    LDA $79
    STA $01
    LDA $0590
    ORA #32
    LDY #0
    STA ($02),Y
    JSR L0FC84E.w
    LDA #0
    STA $27
    RTS

L0BA5DC:
    CLC
    ADC $76
    STA $76
    BCC L0BA5E5
    INC $77
L0BA5E5:
    RTS

L0BA5E6:
    LDA $78
    STA $00
    LDA $79
    STA $01
    JSR L0FCC68.w
    LDA $00
    STA $78
    LDA $01
    STA $79
    RTS

L0BA5FA:
    JSR L0BA4E6.w
    JSR L0BA938.w
    LDY #2
    LDA ($74),Y
    STA $00
    INY
    LDA ($74),Y
    STA $01
    LDA $00
    AND #128
    STA $02
    LDY $81
    DEY
    LDA $0591
    SEC
    SBC $0595
    BEQ L0BA637
    TAX
L0BA61E:
    JSR L0FC81C.w
    LDA $00
    AND #128
    EOR $02
    BEQ L0BA634
    CPY #0
    BEQ L0BA634
    DEY
    LDA $02
    EOR #128
    STA $02
L0BA634:
    DEX
    BNE L0BA61E
L0BA637:
    STY $81
    LDY $058E
    JSR L0BA9D2.w
    LDY $82
    LDX $81
    BEQ L0BA64B
L0BA645:
    JSR L0FC383.w
    DEX
    BNE L0BA645
L0BA64B:
    LDA $82
    STA $07
    LDY #0
L0BA651:
    LDA ($02),Y
    STA $0701,X
    INX
    INY
    DEC $07
    BNE L0BA651
L0BA65C:
    LDA $00
    STA $04
    LDA $01
    STA $05
    JSR L0BA9EC.w
    LDX $00
    LDY $01
    LDA $82
    ORA #32
    STA $0700
    LDA $0780
    STA $0A
    JSR L0FC8CD.w
    JMP L0BA67D.w

L0BA67D:
    LDX $0A
    BPL L0BA6A0
L0BA681:
    STA $05
    INX
    LDA $0781,X
    STA $04
    INX
    LDA $0781,X
    STA $02
    INX
    JSR L0BA6A6.w
    LDY #0
L0BA695:
    LDA $0781,X
    STA ($04),Y
    INY
    INX
    DEC $02
    BNE L0BA695
L0BA6A0:
    LDA $0781,X
    BNE L0BA681
    RTS

L0BA6A6:
    LDA $04
    AND #63
    STA $04
    LDA $05
    AND #4
    BNE L0BA6BA
    LDA #124
    STA $05
    LDA #83
    BNE L0BA6C0
L0BA6BA:
    LDA #124
    STA $05
    LDA #147
L0BA6C0:
    JMP L0FC38F.w

L0BA6C3:
    JSR L0BA6D7.w
    INC $0595
    JSR L0BA6D7.w
    JSR L0BA7C3.w
    INC $0595
    LDA #1
    STA $27
    RTS

L0BA6D7:
    LDA #17
    STA $06
    LDA #3
    STA $07
    LDY #2
    LDA ($74),Y
    STA $00
    INY
    LDA ($74),Y
    STA $01
    LDX $0595
    BEQ L0BA6F5
L0BA6EF:
    JSR L0FC81C.w
    DEX
    BNE L0BA6EF
L0BA6F5:
    LDX $0590
    DEX
    DEX
    STX $05
    LDA #0
    STA $0A
    TAX
    LDA #245
    LDY $0595
    BEQ L0BA719
    LDA #249
    INY
    CPY $0591
    BEQ L0BA719
    LDA #253
    LDY $05A4
    BEQ L0BA719
    LDA #251
L0BA719:
    STA $0701,X
    INX
    JSR L0BA773.w
    LDA $0A
    BNE L0BA73F
    LDY $0595
    BEQ L0BA73F
    INY
    CPY $0591
    BEQ L0BA73F
    LDY $0310
    BNE L0BA735
L0BA734:
    INY
L0BA735:
    LDA ($06),Y
    CMP #237
    BNE L0BA734
    INY
    STY $0310
L0BA73F:
    LDA #246
    LDY $0595
    BEQ L0BA757
    LDA #250
    INY
    CPY $0591
    BEQ L0BA757
    LDA #254
    LDY $05A4
    BEQ L0BA757
    LDA #252
L0BA757:
    STA $0701,X
    INX
    LDA #0
    STA $02
    LDA #7
    STA $03
    LDA $0590
    ORA #32
    STA $0700
    JSR L0FC84E.w
    LDA #0
    STA $27
    RTS

L0BA773:
    LDA #247
    LDY $0595
    BEQ L0BA782
    LDA #248
    INY
    CPY $0591
    BNE L0BA78B
L0BA782:
    STA $0701,X
    INX
    DEC $05
    BNE L0BA773
    RTS

L0BA78B:
    LDA $0595
    AND #1
    BNE L0BA7A5
    LDA $0595
    LSR
    TAY
    DEY
    CPY #8
    BCS L0BA7A5
    LDA $04C8,Y
    BNE L0BA7BA
L0BA7A1:
    LDA $0A
    BEQ L0BA7A9
L0BA7A5:
    LDA #255
    BNE L0BA7BA
L0BA7A9:
    LDY $0310
    LDA ($06),Y
    CMP #237
    BNE L0BA7B6
    INC $0A
    LDA #255
L0BA7B6:
    INY
    STY $0310
L0BA7BA:
    STA $0701,X
    INX
    DEC $05
    BNE L0BA7A1
    RTS

L0BA7C3:
    JSR L0BA4E6.w
    LDY #2
    LDA ($74),Y
    STA $00
    INY
    LDA ($74),Y
    STA $01
    LDA $00
    AND #128
    STA $02
    LDY $81
    DEY
    LDX $0595
    BEQ L0BA7F8
L0BA7DF:
    JSR L0FC81C.w
    LDA $00
    AND #128
    EOR $02
    BEQ L0BA7F5
    CPY #0
    BEQ L0BA7F5
    DEY
    LDA $02
    EOR #128
    STA $02
L0BA7F5:
    DEX
    BNE L0BA7DF
L0BA7F8:
    STY $81
    LDA $00
    STA $08
    LDA $01
    STA $09
    LDY $058E
    JSR L0BA9D2.w
    LDY $82
    LDX $81
    BEQ L0BA814
L0BA80E:
    JSR L0FC383.w
    DEX
    BNE L0BA80E
L0BA814:
    LDA $0590
    STA $05
    LDA $82
    STA $04
    LDY #0
    STY $0700
L0BA822:
    LDA ($02),Y
    STA $06
    JSR L0BA845.w
    LDX $0700
    LDA $06
    STA $0701,X
    INX
    STX $0700
    INY
    DEC $04
    BNE L0BA822
    LDA $08
    STA $00
    LDA $09
    STA $01
    JMP L0BA65C.w

L0BA845:
    LDX #0
    BIT $00
    BVC L0BA84D
    LDX #2
L0BA84D:
    LDA $00
    AND #2
    BEQ L0BA854
    INX
L0BA854:
    LDA $0595
    CMP #2
    BCS L0BA860
    LDA L0BA882.w,X
    BNE L0BA863
L0BA860:
    LDA L0BA886.w,X
L0BA863:
    AND $06
    STA $06
    LDA $00
    AND #4
    STA $07
    JSR L0BA8B9.w
    DEC $05
    JSR L0BA8B9.w
    DEC $05
    BEQ L0BA881
    LDA $00
    AND #4
    EOR $07
    BEQ L0BA845
L0BA881:
    RTS

L0BA882:
.db $FC $F3 $CF $3F

L0BA886:
.db $FC $F3 $CC $33

L0BA88A:
    LDA #16
    STA $77
    LDA $95
    SEC
    SBC $6A
    CMP #8
    BCS L0BA8A1
    LDA $0590
    LSR
    TAY
    LDA L0BA8A6.w,Y
    STA $77
L0BA8A1:
    LDA #16
    STA $76
    RTS

L0BA8A6:
.db $F0 $E0 $D0 $C0 $B0 $A0 $90 $80

L0BA8AE:
    LDA $01
    JSR L0FC4A2.w
    LDA $00
    JSR L0FC4A2.w
    RTS

L0BA8B9:
    INC $00
    LDA $00
    AND #31
    BNE L0BA8D2
    DEC $00
    LDA $00
    AND #224
    STA $00
    LDA $01
    ORA #4
    STA $01
    SEC
    BCS L0BA8D3
L0BA8D2:
    CLC
L0BA8D3:
    RTS

L0BA8D4:
    LDA $00
    AND #31
    ASL
    ASL
    ASL
    STA $02
    LDA $00
    AND #224
    STA $03
    LDA $01
    AND #7
    CLC
    ROR
    ROR $03
    ROR
    ROR $03
    LDA $02
    SEC
    SBC $D1
    STA $01
    LDA $03
    SEC
    SBC $D0
    BCS L0BA8FF
    SEC
    SBC #16
L0BA8FF:
    STA $00
    RTS

L0BA902:
    LDY #0
L0BA904:
    INY
    LSR
    BCC L0BA904
    DEX
    BNE L0BA904
    TYA
    RTS

L0BA90D:
    LDA $7EE5
    JSR L0FC34C.w

L0BA913:
.db $19 $A9 $20 $A9 $2F

L0BA918:
    LDA #32
    CPX #147
    INC $7EE5
    RTS

L0BA920:
    JSR L0FE67F.w
    LDA $05AC
    BEQ L0BA92B
    JSR L0FE696.w
L0BA92B:
    INC $7EE5
    RTS

L0BA92F:
    JSR L0FE67F.w
    LDA #0
    STA $7EE5
    RTS

L0BA938:
    LDY #4
    LDA ($74),Y
    STA $04
    INY
    LDA ($74),Y
    STA $05
    LDA $D0
    CLC
    ADC $04
    BCS L0BA94E
    CMP #240
    BCC L0BA951
L0BA94E:
    CLC
    ADC #16
L0BA951:
    JSR L0FC399.w
    STA $0596
    LDA $05
    CLC
    ADC $D1
    ROL $05
    JSR L0FC399.w
    STA $0597
    LDA $D3
    AND #1
    EOR $05
    LSR
    BCS L0BA973
    LDX #83
    LDY #124
    BNE L0BA977
L0BA973:
    LDX #147
    LDY #124
L0BA977:
    STX $78
    STY $79
    RTS

L0BA97C:
    JSR L0BA4E6.w
    JSR L0BA938.w
    LDA #0
    STA $18
    LDY $058E
    JSR L0BA9D2.w
L0BA98C:
    LDA $78
    STA $00
    LDA $79
    STA $01
    LDA $82
    STA $05
    LDY $81
    DEY
    TYA
    CLC
    ADC $0596
    AND #7
    ASL
    ASL
    ASL
    JSR L0FC379.w
    LDY $0597
    STY $19
L0BA9AD:
    LDY $19
    LDA ($00),Y
    LDY $18
    STA ($02),Y
    INC $18
    LDY $19
    INY
    STY $19
    CPY #8
    BCC L0BA9C9
    LDY #0
    STY $19
    LDA #64
    JSR L0FC379.w
L0BA9C9:
    DEC $05
    BNE L0BA9AD
    DEC $81
    BNE L0BA98C
    RTS

L0BA9D2:
    DEY
    TYA
    ASL
    TAY
    LDA L0BA9E2.w,Y
    STA $02
    INY
    LDA L0BA9E2.w,Y
    STA $03
    RTS

L0BA9E2:
.dw $7CD3
.dw $7CF3
.dw $7D13
.dw $7D33
.dw $7D53

L0BA9EC:
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
    STA $00
    LDA $05
    ORA #3
    STA $01
    RTS

L0BAA14:
.dw $743E
.dw $743F
.dw $7442
.dw $7443
.dw $7444
.dw $7449
.dw $744C
.dw $7434
.dw $744A
.dw $05B8
.dw $7478
.dw $78E0
.dw $78E1
.dw $744B

L0BAA30:
    LDA $05AF
    JSR L0FC34C.w

.dw L0FC73D
.dw L0BAA56
.dw L0BAABE
.dw L0BAAF7
.dw L0BAB5A
.dw L0BAB72
.dw L0BAB89
.dw L0BAB94
.dw L0BABC6
.dw L0BAB72
.dw L0BABD9
.dw L0BAC08
.dw L0BAC54
.dw L0BAC46
.dw L0BAD21
.dw L0BAD3D

L0BAA56:
    LDA $D7
    CMP #85
    BEQ L0BAA5F
    JMP L0BAE5A.w

L0BAA5F:
    JSR L0BAA79.w
    LDA #106
    STA $01
    LDA #248
    STA $00
    LDA #3
    STA $05
    LDA #151
    STA $04
    JSR L0FC209.w
    INC $05AF
    RTS

L0BAA79:
    LDA $6D
    BNE L0BAA87
    LDA #0
    STA $02
    LDA #96
    STA $03
    BNE L0BAA8F
L0BAA87:
    LDA #211
    STA $02
    LDA #99
    STA $03
L0BAA8F:
    RTS

L0BAA90:
    LDA $6D
    BNE L0BAA9E
    LDA #193
    STA $02
    LDA #99
    STA $03
    BNE L0BAAA6
L0BAA9E:
    LDA #148
    STA $02
    LDA #103
    STA $03
L0BAAA6:
    RTS

L0BAAA7:
    LDA $6D
    BNE L0BAAB5
    LDA #151
    STA $02
    LDA #99
    STA $03
    BNE L0BAABD
L0BAAB5:
    LDA #106
    STA $02
    LDA #103
    STA $03
L0BAABD:
    RTS

L0BAABE:
    LDA $D7
    CMP #85
    BEQ L0BAAC7
    JMP L0BAE5A.w
L0BAAC7:
    JSR L0BAA90.w
    LDX #13
L0BAACC:
    TXA
    ASL
    TAY
    LDA L0BAA14.w,Y
    STA $00
    LDA (L0BAA14.w + 1),Y
    STA $01
    LDY #0
    LDA ($00),Y
    STX $18
    LDY $18
    STA ($02),Y
    DEX
    BPL L0BAACC
    JSR L0BAAA7.w
    LDY #41
L0BAAEB:
    LDA $744D,Y
    STA ($02),Y
    DEY
    BPL L0BAAEB
    INC $05AF
    RTS

L0BAAF7:
    LDA $D7
    CMP #85
    BEQ L0BAB00
    JMP L0BAE5A.w
L0BAB00:
    LDA $6D
    BEQ L0BAB2E
    LDA #211
    STA $00
    LDA #99
    STA $01
    LDA #164
    STA $02
    LDA #103
    STA $03
    JSR L0BAD83.w
    LDA $04
    STA $67A4
    LDA $05
    STA $67A5
    LDX #3
L0BAB23:
    LDA L0BAD7F.w,X
    STA $67AA,X
    DEX
    BPL L0BAB23
    BMI L0BAB56
L0BAB2E:
    LDA #0
    STA $00
    LDA #96
    STA $01
    LDA #209
    STA $02
    LDA #99
    STA $03
    JSR L0BAD83.w
    LDA $04
    STA $63D1
    LDA $05
    STA $63D2
    LDX #3
L0BAB4D:
    LDA L0BAD7F.w,X
    STA $67A6,X
    DEX
    BPL L0BAB4D
L0BAB56:
    INC $05AF
    RTS

L0BAB5A:
    LDA #0
    STA $D7
    STA $7DA6
    STA $7DA5
    LDA #176
    STA $7DA9
    LDA #1
    STA $7DAC
    INC $05AF
    RTS

L0BAB72:
    LDA #0
    STA $4A
    LDA #10
    JSR L0FCA94.w
    LDA $7DBF
    BEQ L0BAB88
    LDA #0
    STA $74DF
    INC $05AF
L0BAB88:
    RTS

L0BAB89:
    JSR L0B93E0.w
    LDA #0
    STA $2C
    INC $05AF
    RTS

L0BAB94:
    LDA $05AD
    CMP #2
    BNE L0BABA4
    LDA #2
    STA $4A
    LDA #9
    JSR L0FCA94.w
L0BABA4:
    JSR L0FE684.w
    LDA $05AC
    BEQ L0BABB8
    CMP #2
    BEQ L0BABB8
    LDA #255
    STA $05AF
    INC $059C
L0BABB8:
    LDA $058F
    CMP #3
    BCC L0BABC2
    JSR L0FE696.w
L0BABC2:
    INC $05AF
    RTS

L0BABC6:
    LDA #0
    STA $7DA5
    LDA #176
    STA $7DA9
    LDA #1
    STA $7DA6
    INC $05AF
    RTS

L0BABD9:
    LDA #3
    STA $4A
    LDA #10
    JSR L0FCA94.w
    LDA $1A
    BEQ L0BABFD
    LDX $74DF
    CMP L0BAC02.w,X
    BNE L0BABF8
    INX
    CPX #6
    BEQ L0BABFE
    STX $74DF
    BNE L0BABFD
L0BABF8:
    LDA #0
    STA $74DF
L0BABFD:
    RTS

L0BABFE:
    INC $05AF
    RTS

L0BAC02:
.db $08 $04 $02 $01 $08 $80

L0BAC08:
    JSR L0FC71F.w

L0BAC0B:
    JSR L0FC23D.w
    LDA #>L0BAE28
    STA $01
    LDA #<L0BAE28
    STA $00
    JSR L0FC3E7.w
    LDA #1
    STA $28
    JSR L0FC72D.w
    LDA $D3
    AND #252
    STA $D3
    LDA #0
    STA $D0
    STA $D1
    STA $74E0
    STA $B000
    STA $C000
    STA $D000
    STA $E000
    INC $05AF
    RTS

L0BAC3F:
    INC $05AF
    INC $05AF
    RTS

L0BAC46:
    LDA #0
    STA $74B4
    LDA #3
    STA $4A
    LDA #7
    JMP L0FCA94.w

L0BAC54:
    LDA $1E
    LSR
    LSR
    LSR
    BCS L0BAC81
    LSR
    BCS L0BAC70
    LDA $1E
    ASL
    BCC L0BAC66
    JSR L0BAD03.w
L0BAC66:
    ASL
    BCC L0BACA5
    LDA #1
    STA $06D0
    BNE L0BACA5
L0BAC70:
    INC $74E0
    LDA $74E0
    CMP #96
    BCC L0BAC8E
    LDA #0
    STA $74E0
    BEQ L0BAC8E
L0BAC81:
    DEC $74E0
    LDA $74E0
    BPL L0BAC8E
    LDA #95
    STA $74E0
L0BAC8E:
    LDA #4
    STA $09
    LDA #68
    STA $08
    LDA $74E0
    STA $00
    LDA #0
    STA $01
    JSR L0FC7BA.w
    JSR L0BACA6.w
L0BACA5:
    RTS

L0BACA6:
    LDA #33
    STA $0781
    LDA #115
    STA $0782
    LDA #3
    STA $0783
    LDA $0446
    STA $0784
    LDA $0447
    STA $0785
    LDA $0448
    STA $0786
    LDA #33
    STA $0787
    LDA #174
    STA $0788
    LDA #1
    STA $0789
    LDA $74E0
    JSR L0FC39B.w
    ORA #96
    STA $078A
    LDA #33
    STA $078B
    LDA #178
    STA $078C
    LDA #1
    STA $078D
    LDA $74E0
    AND #7
    ORA #96
    STA $078E
    LDX #0
    STX $078F
    INX
    STX $27
    RTS

L0BAD03:
    LDA $74E0
    JSR L0FC39B.w
    TAX
    LDA $74E0
    AND #7
    TAY
    LDA L0BAD19.w,Y
    STA $06D0,X
    PLA
    PLA
    RTS

L0BAD19:
.db $01 $02 $04 $08 $10 $20 $40 $80

L0BAD21:
    LDA #116
    STA $01
    LDA #180
    STA $00
    LDA #0
    STA $03
    LDA #47
    STA $02
    LDA #0
    STA $058F
    JSR L0FC225.w
    INC $05AF
    RTS

L0BAD3D:
    JSR L0FC288.w
    LDA #0
    STA $3D
    LDA #4
    STA $4A
    JSR L0FCA94.w
    JSR L0FC336.w
    INC $36
    JSR L0FC70D.w
    JMP L0BAD3D.w

L0BAD56:
    LDA $6D
    BNE L0BAD64
    LDA #166
    STA $08
    LDA #103
    STA $09
    BNE L0BAD6C
L0BAD64:
    LDA #170
    STA $08
    LDA #103
    STA $09
L0BAD6C:
    LDA #0
    STA $67
    LDY #3
L0BAD72:
    LDA L0BAD7F.w,Y
    CMP ($08),Y
    BNE L0BAD7E
    DEY
    BPL L0BAD72
    INC $67
L0BAD7E:
    RTS

L0BAD7F:
.db $72 $76 $6A $77

L0BAD83:
    SEC
    LDA $02
    SBC $00
    STA $02
    LDA $03
    SBC $01
    STA $03
    LDA #0
    STA $04
    STA $05
    TAY
    LDX $02
    BEQ L0BAD9D
    INC $03
L0BAD9D:
    LDA ($00),Y
    CLC
    ADC $04
    STA $04
    BCC L0BADA8
    INC $05
L0BADA8:
    INY
    BNE L0BADAD
    INC $01
L0BADAD:
    DEC $02
    BNE L0BAD9D
    DEC $03
    BNE L0BAD9D
    RTS

.dw L0BADC8
.dw L0BADF2
.dw L0BADF2
.dw L0FC73D
.dw L0FC73D
.dw L0FC73D
.dw L0BB091
.dw L0BB0DB
.dw L0BB111

L0BADC8:
.db $40 $90 $14 $04 $E9 $01 $3D $3F
.db $4C $0F $05 $0F $0B $86 $02 $29
.db $87 $02 $0B $20 $0B $10 $8F $ED
.db $09 $19 $20 $20 $38 $0F $3F $52
.db $2E $12 $12 $0F $08 $20 $0C $05
.db $9C $E7

L0BADF2:
.db $43 $0F $3F $40 $05 $0F $06 $03
.db $2A $1A $0F $00 $01 $05 $0F $00
.db $2A $19 $13 $0F $ED $59 $3D $89
.db $44 $3C $31 $89 $41 $2E $04 $0B
.db $15 $05 $0F $28 $ED $13 $0F $2F
.db $08 $0F $2F $2E $06 $85 $13 $07
.db $10 $0F $0A $01 $18 $E7

L0BAE28:
.db $21 $28 $0F $7C $78 $7E $77 $6D
.db $FF $7D $6E $7C $7D $FF $76 $78
.db $6D $6E $21 $6A $0C $7C $78 $7E
.db $77 $6D $FF $77 $78 $FF $FF $FF
.db $60 $21 $AA $0D $72 $6F $77 $FF
.db $60 $FF $FF $6D $60 $FF $6B $72
.db $7D $00

L0BAE5A:
    JSR L0FC71F.w
    JSR L0FC23D.w
    LDA #>L0BAE8C
    STA $01
    LDA #<L0BAE8C
    STA $00
    JSR L0FC3E7.w
    LDA #1
    STA $28
    JSR L0FC72D.w
    LDA $D3
    AND #252
    STA $D3
    LDA #0
    STA $B000
    STA $C000
    STA $D000
    STA $E000
L0BAE86:
    JSR L0FC70D.w
    JMP L0BAE86.w

L0BAE8C:
.db $21
.db $A6
.db $12
.db $79
.db $7B
.db $70
.db $FF
.db $7B
.db $7E
.db $77
.db $FF
.db $7D
.db $72
.db $76
.db $6E
.db $FF
.db $6E
.db $7B
.db $7B
.db $78
.db $7B
.db $21
.db $E4
.db $17
.db $79
.db $75
.db $6E
.db $7C
.db $6E
.db $FF
.db $79
.db $7E
.db $7C
.db $71
.db $FF
.db $7B
.db $6E
.db $7C
.db $6E
.db $7D
.db $FF
.db $6B
.db $7E
.db $7D
.db $7D
.db $78
.db $77
.db $00
.db $C0
.db $AE
.db $E4
.db $AE
.db $3F
.db $00
.db $20
.db $0F
.db $20
.db $10
.db $1A
.db $0F
.db $36
.db $12
.db $1A
.db $0F
.db $27
.db $07
.db $1A
.db $0F
.db $35
.db $15
.db $1A
.db $0F
.db $36
.db $12
.db $0F
.db $0F
.db $36
.db $26
.db $0F
.db $0F
.db $3C
.db $33
.db $0F
.db $0F
.db $35
.db $15
.db $0F
.db $00
.db $3F
.db $00
.db $20
.db $0F
.db $20
.db $10
.db $00
.db $0F
.db $36
.db $11
.db $1A
.db $0F
.db $37
.db $17
.db $1A
.db $0F
.db $36
.db $16
.db $1A
.db $0F
.db $36
.db $12
.db $0F
.db $0F
.db $36
.db $26
.db $0F
.db $0F
.db $3C
.db $33
.db $0F
.db $0F
.db $35
.db $15
.db $0F
.db $00

L0BAF08:
    LDA $05AF
    JSR L0FC34C.w

.dw L0FC73D
.dw L0BAF1E
.dw L0BAF7E
.dw L0BAF28
.dw L0BAF4A
.dw L0BAF78
.dw L0BAFD3
.dw RESET

L0BAF1E:
    JSR L0FC71F.w
    JSR L0FC23D.w
    INC $05AF
    RTS

L0BAF28:
    JSR L0BAA79.w
    LDA $03
    STA $01
    LDA $02
    STA $00
    LDA #106
    STA $03
    LDA #248
    STA $02
    LDA #3
    STA $05
    LDA #151
    STA $04
    JSR L0FC209.w
    INC $05AF
    RTS

L0BAF4A:
    JSR L0BAA90.w
    LDX #13
L0BAF4F:
    TXA
    ASL
    TAY
    LDA L0BAA14.w,Y
    STA $00
    LDA (L0BAA14.w + 1),Y
    STA $01
    TXA
    TAY
    LDA ($02),Y
    LDY #0
    STA ($00),Y
    DEX
    BPL L0BAF4F
    JSR L0BAAA7.w
    LDY #41
L0BAF6C:
    LDA ($02),Y
    STA $744D,Y
    DEY
    BPL L0BAF6C
    INC $05AF
    RTS

L0BAF78:
    LDA #0
    STA $05AF
    RTS

L0BAF7E:
    LDA $6D
    BNE L0BAFA5
    LDA #0
    STA $00
    LDA #96
    STA $01
    LDA #209
    STA $02
    LDA #99
    STA $03
    JSR L0BAD83.w
    LDA $04
    CMP $63D1
    BNE L0BAFCD
    LDA $05
    CMP $63D2
    BNE L0BAFCD
    BEQ L0BAFC6
L0BAFA5:
    LDA #211
    STA $00
    LDA #99
    STA $01
    LDA #164
    STA $02
    LDA #103
    STA $03
    JSR L0BAD83.w
    LDA $04
    CMP $67A4
    BNE L0BAFCD
    LDA $05
    CMP $67A5
    BNE L0BAFCD
L0BAFC6:
    JSR L0FC72D.w
    INC $05AF
    RTS

L0BAFCD:
    LDA #6
    STA $05AF
    RTS

L0BAFD3:
    LDA $6D
    BNE L0BAFDD
    LDX #166
    LDY #103
    BNE L0BAFE1
L0BAFDD:
    LDX #170
    LDY #103
L0BAFE1:
    STX $00
    STY $01
    LDY #3
    LDA #0
L0BAFE9:
    STA ($00),Y
    DEY
    BPL L0BAFE9
    INC $05AF
    RTS

L0BAFF2:
    LDA $05AF
    JSR L0FC34C.w

.dw L0FC73D
.dw L0BB047
.dw L0BAB72
.dw L0BAB89
.dw L0BAB94
.dw L0BB010
.dw L0BB01E
.dw RESET
.dw L0BB030
.dw L0BB010
.dw L0BB01E
.dw RESET

L0BB010:
    LDA #2
    JSR L0FC9BD.w
    LDA #4
    STA $05B5
    INC $05AF
    RTS

L0BB01E:
    LDA #2
    STA $4A
    LDA #4
    JSR L0FCA94.w
    LDA $05B5
    BNE L0BB02F
    INC $05AF
L0BB02F:
    RTS

L0BB030:
    LDA #0
    STA $4A
    LDA #10
    JSR L0FCA94.w
    LDA $7DB9
    BEQ L0BB046
    LDA #0
    STA $74DF
    INC $05AF
L0BB046:
    RTS

L0BB047:
    LDA #2
    STA $06D9
    JSR L0BAD56.w
    LDA $67
    BNE L0BB05F
    LDA #7
    STA $05AF
    LDA #7
    STA $7DA6
    BNE L0BB079
L0BB05F:
    LDA #6
    STA $7DA6
    JSR L0FF2CB.w
    LDA #2
    JSR L0FF389.w
    BCS L0BB079
    LDY #14
    LDA ($00),Y
    BNE L0BB079
    LDA #8
    STA $7DA6
L0BB079:
    LDA #0
    STA $7DA5
    LDA #176
    STA $7DA9
    LDA #1
    STA $7DAC
    LDA #2
    JSR L0FC9BD.w
    INC $05AF
    RTS

L0BB091:
.db $40 $90 $14 $04 $E8 $40 $40 CELICA
.db $E9 $05
ENCODE("アルム····")
NEWLINE
ENCODE("こころざし なかばに")
NEWLINE
ENCODE("いってしまうなんて····")
NEWLINE
WAIT_CLICK
ENCODE("セーブしたところから")
NEWLINE
ENCODE("もういちどはじめますか?")
NEWLINE
.db $E7

L0BB0DB:
.db $40 $80 $14 $05 $E8 $40 $40 MYCEN
.db $E9 $05
ENCODE("セーブデータがありません!")
NEWLINE
ENCODE("もういちど さいしょから")
NEWLINE
ENCODE("やりなおして ください")
STOP

L0BB111:
.db $40 $90 $14 $04 $E8 $40 $40 MYCEN
.db $E9 $05
ENCODE("セリカよ あきらめてはならん")
NEWLINE
ENCODE("おまえには まだ やらねばならぬ")
NEWLINE
ENCODE("ことがある")
NEWLINE
WAIT_CLICK
ENCODE("セーブしたところから")
NEWLINE
ENCODE("もういちどはじめますか?")
NEWLINE
.db $E7

.dw L0BB211
.dw L0BB226
.dw L0BB249
.dw L0BB25E
.dw L0BB278
.dw L0BB2AD
.dw L0BB2E8
.dw L0BB244
.dw L0BB2EA
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB312
.dw L0BB32A
.dw L0BB344
.dw L0BB362
.dw L0BB376
.dw L0BB386
.dw L0BB397
.dw L0BB3AA
.dw L0BB3BB
.dw L0BB3CC
.dw L0BB3D9
.dw L0BB3E6
.dw L0BB3F4
.dw L0BB403
.dw L0BB40F
.dw L0BB421
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB429
.dw L0BB447
.dw L0BB447
.dw L0BB447
.dw L0BB447
.dw L0BB447
.dw L0BB447
.dw L0BB467
.dw L0BB467
.dw L0BB498
.dw L0BB4AA
.dw L0BB4B6
.dw L0BB4BE
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4C6
.dw L0BB4DD
.dw L0BB4E8
.dw L0BB4FA
.dw L0BB52B

L0BB211:
.db $30 $90 $12 $04
.db $E9 $01
.db $E0
ENCODE("%0 は")
NEWLINE
ENCODE("%1 をとなえた")
STOP

L0BB226:
.db $40 $90 $14 $04
.db $E9 $01
.db $E0
ENCODE("%0は %1に")
NEWLINE
ENCODE("なることをのぞみますか?")
NEWLINE
.db $E7

L0BB244:
.db $E8
ENCODE("マタい")
.db $E2

L0BB249:
ENCODE("%0は%1に")
NEWLINE
ENCODE("クラスチェンジした!!!")
.db $E7

L0BB25E:
ENCODE("%0は%1に")
NEWLINE
ENCODE("クラスチェンジするのを")
NEWLINE
ENCODE("あきらめた")
STOP

L0BB278:
.db $30 $90 $14 $04
.db $E9 $01
.db $E0
ENCODE("しかくをもつものはいないようですね")
NEWLINE
ENCODE("もうすこし レベルをあげて")
NEWLINE
ENCODE("また おいでなさい")
STOP

L0BB2AD:
.db $30 $80 $12 $05
.db $E9 $02
.db $E0
ENCODE("だいちのせいれいよ!")
NEWLINE
ENCODE("わがよびかけに おうじよ!!")
NEWLINE
ENCODE("てきは メガクェイク")
NEWLINE
ENCODE("をとなえた!!")
.db $E1 $03
STOP

L0BB2E8:
ENCODE(" ")
STOP

L0BB2EA:
ENCODE("%0は%1に")
NEWLINE
ENCODE("クラスチェンジした!!!")
NEWLINE
ENCODE("まほうぼうぎょが15あがった")
.db $E7

L0BB312:
.db $30 $90 $12 $04
.db $E9 $01
.db $E0
ENCODE("%0 は%1に")
NEWLINE
ENCODE("%2 をわたした")
STOP

L0BB32A:
.db $40 $90 $12 $04
.db $E9 $01
.db $E0
ENCODE("%0 は%1から")
NEWLINE
ENCODE("%3 をうけとった")
STOP

L0BB344:
.db $40 $90 $12 $04
.db $E9 $01
.db $E0
ENCODE("%0と %1は")
NEWLINE
ENCODE("%2と")
NEWLINE
ENCODE("%3を こうかんした")
STOP

L0BB362:
.db $40 $90 $12 $04
.db $E9 $01
.db $E0
ENCODE("%0 は")
NEWLINE
ENCODE("%1 をすてた")
STOP

L0BB376:
ENCODE("たいりょくが%2かいふくした")
STOP

L0BB386:
ENCODE("しゅびりょくが%2あがった")
.db $E7

L0BB397:
ENCODE("まほうぼうぎょが%2あがった")
STOP

L0BB3AA:
ENCODE("いどうりょくが%2あがった")
STOP

L0BB3BB:
ENCODE("ぶきレベルが%2あがった")
STOP

L0BB3CC:
ENCODE("わざが%2あがった")
.db $E7

L0BB3D9:
ENCODE("ちからが%2あがった")
.db $E7

L0BB3E6:
ENCODE("さくてきが%2あがった")
.db $E7

L0BB3F4:
ENCODE("すばやさが%2あがった")
.db $E7

L0BB403:
ENCODE("うんが%2あがった")
.db $E7

L0BB40F:
ENCODE("さいだいヒットポイントが")
.db $E4 $B1
ENCODE("ら")

L0BB421:
ENCODE("%2あがった")
.db $E7

L0BB429:
.db $30 $80 $12 $03
.db $E9 $02
.db $E0
ENCODE("ようじゅつしは")
NEWLINE
ENCODE("リザーブをとなえた")
.db $E1
ENCODE("う")
STOP

L0BB447:
.db $40 $90 $12 $04
.db $E0
.db $E9 $02
ENCODE("もちものがいっぱいです")
NEWLINE
ENCODE("どうしますか ?")
.db $E7

L0BB467:
.db $E1 $02
ENCODE("あずかりじょのそうこが")
NEWLINE
ENCODE("いっぱいで これいじょうものを")
NEWLINE
ENCODE("あずけられません")
WAIT_CLICK
.db $E4 $B1
ENCODE("ト")

L0BB498:
ENCODE("%0 を")
NEWLINE
ENCODE("しょじひんにいれました")
STOP

L0BB4AA:
ENCODE("なにかすててください")
.db $E7

L0BB4B6:
ENCODE("%1 をすてた")
STOP

L0BB4BE:
ENCODE("%0 をすてた")
STOP

L0BB4C6:
.db $40 $90 $12 $04
.db $E9 $01
ENCODE("このセーブ·データをけします")
.db $E7

L0BB4DD:
ENCODE("データをけしました")
STOP

L0BB4E8:
.db $40 $90 $12 $04
.db $E9 $01
ENCODE("データをうつしました")
STOP

L0BB4FA:
.db $40 $90 $12 $04
.db $E9 $03
ENCODE("データエラーがありました!")
NEWLINE
ENCODE("ざんねんながら")
NEWLINE
ENCODE("このきろくは しようできません")
STOP

L0BB52B:
.db $30 $50 $12 $04
.db $E9 $01
SPEAK
ENCODE("ゲームをちゅうだんしました")
NEWLINE
ENCODE("でんげんをきるときには")
NEWLINE
WAIT_CLICK
ENCODE("リセットボタンをおしながら")
NEWLINE
ENCODE("スイッチをきってください")
NEWLINE
WAIT_CLICK
ENCODE("ふたたびゲームをはじめるときは")
NEWLINE
ENCODE("さいしょに,つづきをする")
NEWLINE
ENCODE("をえらんでください")
.db $E7

L0BB59D:
    LDA $059E
    JSR L0FC34C.w

.dw L0BB5A9
.dw L0BB5B1
.dw L0FC73D

L0BB5A9:
    JSR L0BB64C.w
    LDA $92
    BNE L0BB5B1
L0BB5B0:
    RTS

L0BB5B1:
    LDA $05D7
    BNE L0BB5B0
    LDA #0
    STA $0589
    LDA $0502
    STA $3B
    LDA $0503
    STA $3A
    LDY #0
    LDA ($7A),Y
    ASL
    BCC L0BB5D5
    LDY $0505
    DEY
    LDA L0BB7F5.w,Y
    BNE L0BB5DC
L0BB5D5:
    LDY $0505
    DEY
    LDA L0BB719.w,Y
L0BB5DC:
    JSR L0FCA48.w
    JSR L0FCA50.w
    LDA $0504
    CMP #1
    BNE L0BB605
    LDY #0
    LDA ($7A),Y
    ASL
    BCC L0BB5FC
    LDY $0505
    DEY
    LDA L0BB80B.w,Y
    STA $41
    JMP L0BB605.w

L0BB5FC:
    LDY $0505
    DEY
    LDA L0BB72F.w,Y
    STA $41
L0BB605:
    LDA #<L0BB669
    STA $00
    LDA #>L0BB669
    STA $01
    LDY #0
    LDA ($7A),Y
    ASL
    BCC L0BB61D
    INY
    LDA #<L0BB745
    STA $00
    LDA #>L0BB745
    STA $01
L0BB61D:
    LDA L0BB667.w,Y
    STA $3F
    LDY $0505
    BNE L0BB62C
L0BB627:
    LDA #8
    JSR L0FC379.w
L0BB62C:
    DEY
    BNE L0BB627
    LDA $36
    AND #16
    LSR
    LSR
    LSR
    LSR
    STA $04
    LDA $0504
    ASL
    CLC
    ADC $04
    TAY
    LDA #8
    STA $0587
    LDA ($00),Y
    JMP L0FE80F.w

L0BB64B:
    RTS

L0BB64C:
    LDA #0
    STA $3B
    STA $41
    STA $3F
    STA $3E
    STA $0589
    LDA #1
    STA $3A
    LDA #8
    STA $0587
    LDA #224
    JMP L0FE80F.w

L0BB667:
.db $00
.db $03

L0BB669:
.db $01
.db $02
.db $03
.db $04
.db $05
.db $06
.db $03
.db $04
.db $77
.db $78
.db $79
.db $7A
.db $7B
.db $7C
.db $79
.db $7A
.db $7D
.db $7E
.db $7F
.db $80
.db $81
.db $82
.db $7F
.db $80
.db $07
.db $08
.db $09
.db $0A
.db $0B
.db $0C
.db $09
.db $0A
.db $71
.db $72
.db $73
.db $74
.db $75
.db $76
.db $73
.db $74
.db $0D
.db $0E
.db $0F
.db $10
.db $11
.db $12
.db $0F
.db $10
.db $13
.db $14
.db $15
.db $16
.db $17
.db $18
.db $15
.db $16
.db $2D
.db $2E
.db $2F
.db $30
.db $31
.db $32
.db $33
.db $34
.db $35
.db $36
.db $37
.db $38
.db $39
.db $3A
.db $3B
.db $3C
.db $3D
.db $3E
.db $3F
.db $40
.db $41
.db $42
.db $43
.db $44
.db $45
.db $46
.db $47
.db $48
.db $49
.db $4A
.db $47
.db $48
.db $4B
.db $4C
.db $4D
.db $4E
.db $4F
.db $50
.db $4D
.db $4E
.db $51
.db $52
.db $53
.db $54
.db $55
.db $56
.db $57
.db $58
.db $59
.db $5A
.db $5B
.db $5C
.db $5D
.db $5E
.db $5B
.db $5C
.db $1F
.db $20
.db $21
.db $22
.db $23
.db $24
.db $21
.db $22
.db $5F
.db $60
.db $61
.db $62
.db $63
.db $64
.db $61
.db $62
.db $65
.db $66
.db $67
.db $68
.db $69
.db $6A
.db $67
.db $68
.db $19
.db $1A
.db $1B
.db $1C
.db $1D
.db $1E
.db $1B
.db $1C
.db $6B
.db $6C
.db $6D
.db $6E
.db $6F
.db $70
.db $6D
.db $6E
.db $89
.db $8A
.db $8B
.db $8C
.db $8D
.db $8E
.db $8B
.db $8C
.db $25
.db $26
.db $27
.db $28
.db $29
.db $2A
.db $2B
.db $2C
.db $83
.db $84
.db $85
.db $86
.db $87
.db $88
.db $85
.db $86

L0BB719:
.db $13
.db $13
.db $13
.db $13
.db $13
.db $13
.db $13
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1A
.db $1B
.db $1B
.db $1B
.db $1C
.db $1B
.db $1B

L0BB72F:
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $00
.db $00
.db $00
.db $01
.db $01
.db $00
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $00
.db $01

L0BB745:
.db $01
.db $02
.db $03
.db $04
.db $05
.db $06
.db $03
.db $04
.db $77
.db $78
.db $79
.db $7A
.db $7B
.db $7C
.db $79
.db $7A
.db $AD
.db $AE
.db $AF
.db $B0
.db $B1
.db $B2
.db $AF
.db $B0
.db $07
.db $08
.db $09
.db $0A
.db $0B
.db $0C
.db $09
.db $0A
.db $B3
.db $B4
.db $B5
.db $B6
.db $B7
.db $B8
.db $B5
.db $B6
.db $0D
.db $0E
.db $0F
.db $10
.db $11
.db $12
.db $0F
.db $10
.db $13
.db $14
.db $15
.db $16
.db $17
.db $18
.db $15
.db $16
.db $2D
.db $2E
.db $2F
.db $30
.db $31
.db $32
.db $33
.db $34
.db $35
.db $36
.db $37
.db $38
.db $39
.db $3A
.db $3B
.db $3C
.db $3D
.db $3E
.db $3F
.db $40
.db $41
.db $42
.db $43
.db $44
.db $A1
.db $A2
.db $A3
.db $A4
.db $A5
.db $A6
.db $A3
.db $A4
.db $4B
.db $4C
.db $4D
.db $4E
.db $4F
.db $50
.db $4D
.db $4E
.db $51
.db $52
.db $53
.db $54
.db $55
.db $56
.db $57
.db $58
.db $B9
.db $BA
.db $BB
.db $BC
.db $BD
.db $BE
.db $BB
.db $BC
.db $8F
.db $90
.db $91
.db $92
.db $93
.db $94
.db $91
.db $92
.db $5F
.db $60
.db $61
.db $62
.db $63
.db $64
.db $61
.db $62
.db $9B
.db $9C
.db $9D
.db $9E
.db $9F
.db $A0
.db $9D
.db $9E
.db $BF
.db $C0
.db $C1
.db $C2
.db $C3
.db $C4
.db $C1
.db $C2
.db $95
.db $96
.db $97
.db $98
.db $99
.db $9A
.db $97
.db $98
.db $89
.db $8A
.db $8B
.db $8C
.db $8D
.db $8E
.db $8B
.db $8C
.db $A7
.db $A8
.db $A9
.db $AA
.db $AB
.db $AC
.db $A9
.db $AA
.db $83
.db $84
.db $85
.db $86
.db $87
.db $88
.db $85
.db $86

L0BB7F5:
.db $13
.db $13
.db $1C
.db $13
.db $1C
.db $13
.db $13
.db $1A
.db $1A
.db $1A
.db $1B
.db $1A
.db $1A
.db $1B
.db $1B
.db $1A
.db $1B
.db $13
.db $1B
.db $1C
.db $1C
.db $1B
L0BB80B:
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $00
.db $00
.db $00
.db $01
.db $01
.db $00
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01
.db $01

L0BB821:
.dw L0BB8C3
.dw L0BB8CA
.dw L0BB8D3
.dw L0BB8D9
.dw L0BB8E2
.dw L0BB8EC
.dw L0BB8F6
.dw L0BB8FE
.dw L0BB908
.dw L0BB90C
.dw L0BB910
.dw L0BB91B
.dw L0BB91F
.dw L0BB926
.dw L0BB92A
.dw L0BB92E
.dw L0BB934
.dw L0BB93C
.dw L0BB944
.dw L0BB94F
.dw L0BB957
.dw L0BB961
.dw L0BB969
.dw L0BB972
.dw L0BB97C
.dw L0BB983
.dw L0BB98B
.dw L0BB993
.dw L0BB999
.dw L0BB9A4
.dw L0BB9AC
.dw L0BB9B2
.dw L0BB9C0
.dw L0BB9C6
.dw L0BB9CE
.dw L0BB9D6
.dw L0BB9DE
.dw L0BB9E6
.dw L0BB9EE
.dw L0BB9F5
.dw L0BB9FF
.dw L0BBA04
.dw L0BBA0D
.dw L0BBA15
.dw L0BBA1C
.dw L0BBA26
.dw L0BBA2D
.dw L0BBA35
.dw L0BBA3D
.dw L0BB8D9
.dw L0BBA4D
.dw L0BBA5A
.dw L0BBA63
.dw L0BBA6C
.dw L0BB910
.dw L0BB91F
.dw L0BBA76
.dw L0BBA7F
.dw L0BBA85
.dw L0BB957
.dw L0BB972
.dw L0BBA8D
.dw L0BB983
.dw L0BB993
.dw L0BB999
.dw L0BBA96
.dw L0BB9B2
.dw L0BB9B7
.dw L0BBA9D
.dw L0BBAA5
.dw L0BB9F5
.dw L0BBAB0
.dw L0BB9FF
.dw L0BBA1C
.dw L0BBA26
.dw L0BBA2D
.dw L0BBAB8
.dw L0BBA04
.dw L0BBAC0
.dw L0BBA43
.dw L0BBAC8

L0BB8C3:
ENCODE("ラムのはやし")
STOP

L0BB8CA:
ENCODE("とうぞくのもり")
STOP

L0BB8D3:
ENCODE("ラムのたに")
STOP

L0BB8D9:
ENCODE("みなみのとりで")
STOP

L0BB8E2:
ENCODE("ソフィアのみなみ1")
STOP

L0BB8EC:
ENCODE("ソフィアのみなみ2")
STOP

L0BB8F6:
ENCODE("ソフィアのもん")
STOP

L0BB8FE:
ENCODE("ノーヴァのぼち")
STOP

L0BB908:
ENCODE("うみ1")
STOP

L0BB90C:
ENCODE("うみ2")
STOP

L0BB910:
ENCODE("かいぞくのとりで")
STOP

L0BB91B:
ENCODE("うみ3")
STOP

L0BB91F:
ENCODE("うみのほこら")
STOP

L0BB926:
ENCODE("うみ4")
STOP

L0BB92A:
ENCODE("うみ5")
STOP

L0BB92E:
ENCODE("きたのもん")
STOP

L0BB934:
ENCODE("ソフィアのきた")
STOP

L0BB93C:
ENCODE("ソフィアのにし")
STOP

L0BB944:
ENCODE("ソフィアのかいがん")
STOP

L0BB94F:
ENCODE("やまのはかば")
STOP

L0BB957:
ENCODE("さばくのとりで")
STOP

L0BB961:
ENCODE("さばくのきた")
STOP

L0BB969:
ENCODE("さばくのみなみ")
STOP

L0BB972:
ENCODE("ギースのとりで")
STOP

L0BB97C:
ENCODE("ミラへのたに")
STOP

L0BB983:
ENCODE("ミラしんでん")
STOP

L0BB98B:
ENCODE("ソフィアのもり")
STOP

L0BB993:
ENCODE("もりのむら")
STOP

L0BB999:
ENCODE("ドゼーのとりで")
STOP

L0BB9A4:
ENCODE("ソフィアもり2")
STOP

L0BB9AC:
ENCODE("もりのきた")
STOP

L0BB9B2:
ENCODE("すいもん")
STOP

L0BB9B7:
ENCODE("けんじゃのさと")
STOP

L0BB9C0:
ENCODE("こっきょう")
STOP

L0BB9C6:
ENCODE("リゲルへいや")
STOP

L0BB9CE:
ENCODE("リゲルのたに")
STOP

L0BB9D6:
ENCODE("りゅうのかこう")
STOP

L0BB9DE:
ENCODE("リゲルのたき")
STOP

L0BB9E6:
ENCODE("リゲルのもり")
STOP

L0BB9EE:
ENCODE("おそれざん")
STOP

L0BB9F5:
ENCODE("ヌイババやかた")
STOP

L0BB9FF:
ENCODE("ようさい")
STOP

L0BBA04:
ENCODE("リゲルじょう")
STOP

L0BBA0D:
ENCODE("しびとのぬま")
STOP

L0BBA15:
ENCODE("ぬまのぼち")
STOP

L0BBA1C:
ENCODE("ドルクのとりで")
STOP

L0BBA26:
ENCODE("まよいのもり")
STOP

L0BBA2D:
ENCODE("ドーマのもん")
STOP

L0BBA35:
ENCODE("ドーマのぬま")
STOP

L0BBA3D:
ENCODE("ラムのむら")
STOP

L0BBA43:
ENCODE("とうぞくのほこら")
STOP

L0BBA4D:
ENCODE("かいほうぐんのアジト")
STOP

L0BBA5A:
ENCODE("ソフィアじょう")
STOP

L0BBA63:
ENCODE("しゅうどういん")
STOP

L0BBA6C:
ENCODE("ノーヴァのみなと")
STOP

L0BBA76:
ENCODE("ソフィアのみなと")
STOP

L0BBA7F:
ENCODE("やまのむら")
STOP

L0BBA85:
ENCODE("りゅうのほこら")
STOP

L0BBA8D:
ENCODE("さばくのほこら")
STOP

L0BBA96:
ENCODE("もりのほこら")
STOP

L0BBA9D:
ENCODE("リゲルのむら")
STOP

L0BBAA5:
ENCODE("おそれざんのほこら")
STOP

L0BBAB0:
ENCODE("ひみつのほこら")
STOP

L0BBAB8:
ENCODE("ドーマのとう")
STOP

L0BBAC0:
ENCODE("りゅうのかこう")
STOP

L0BBAC8:
ENCODE("ドーマのさいだん")
STOP

.db $05
.db $16
.db $81
.db $00
.db $00
.db $53
.db $58
.db $BC
.db $58
.db $01
.db $32
.db $03
.db $90
.db $00
.db $00
.db $00
.db $00
.db $00
.db $08
.db $00
.db $00
.db $A8
.db $81
.db $13
.db $0E
.db $0A
.db $40
.db $E5
.db $B8
.db $44
.db $14
.db $00
.db $00
.db $01
.db $00
.db $C0
.db $30
.db $80
.db $1C
.db $0A
.db $54
.db $40
.db $05
.db $25
.db $09
.db $08
.db $10
.db $42
.db $00
.db $0D
.db $A2
.db $80
.db $20
.db $02
.db $C8
.db $A0
.db $89
.db $01
.db $8D
.db $19
.db $BA
.db $0C
.db $00
.db $00
.db $00
.db $01
.db $40
.db $80
.db $84
.db $EE
.db $04
.db $90
.db $A8
.db $2C
.db $D3
.db $45
.db $C0
.db $20
.db $22
.db $40
.db $02
.db $20
.db $06
.db $08
.db $00
.db $AD
.db $E9
.db $46
.db $55
.db $30
.db $D9
.db $22
.db $4A
.db $11
.db $00
.db $08
.db $01
.db $00
.db $00
.db $10
.db $80
.db $15
.db $30
.db $48
.db $0D
.db $6A
.db $A5
.db $11
.db $47
.db $00
.db $20
.db $00
.db $00
.db $00
.db $0A
.db $00
.db $18
.db $1D
.db $98
.db $68
.db $01
.db $44
.db $20
.db $3E
.db $1C
.db $00
.db $01
.db $00
.db $00
.db $00
.db $82
.db $10
.db $02
.db $91
.db $11
.db $F1
.db $00
.db $41
.db $C5
.db $97
.db $0E
.db $00
.db $00
.db $00
.db $00
.db $00
.db $08
.db $20
.db $00
.db $88
.db $2F
.db $A9
.db $A4
.db $A8
.db $40
.db $43
.db $7C
.db $10
.db $00
.db $00
.db $10
.db $08
.db $20
.db $01
.db $00
.db $53
.db $C0
.db $13
.db $01
.db $EA
.db $A0
.db $D0
.db $04
.db $00
.db $15
.db $00
.db $80
.db $00
.db $00
.db $30
.db $42
.db $06
.db $4A
.db $16
.db $4B
.db $0C
.db $F8
.db $4E
.db $89
.db $00
.db $44
.db $80
.db $00
.db $00
.db $02
.db $52
.db $00
.db $A5
.db $53
.db $58
.db $83
.db $C0
.db $0A
.db $04
.db $40
.db $10
.db $00
.db $40
.db $02
.db $00
.db $01
.db $00
.db $00
.db $15
.db $F5
.db $B8
.db $A2
.db $56
.db $52
.db $DA
.db $92
.db $00
.db $00
.db $02
.db $20
.db $00
.db $00
.db $01
.db $00
.db $40
.db $05
.db $85
.db $74
.db $01
.db $53
.db $50
.db $D0
.db $00
.db $18
.db $10
.db $00
.db $00
.db $04
.db $02
.db $20
.db $A8
.db $02
.db $AD
.db $86
.db $9A
.db $4F
.db $4E
.db $96
.db $02
.db $00
.db $00
.db $88
.db $00
.db $00
.db $40
.db $08
.db $15
.db $44
.db $54
.db $0B
.db $C3
.db $05
.db $6C
.db $C0
.db $00
.db $80
.db $00
.db $00
.db $02
.db $00
.db $00
.db $00
.db $00
.db $A5
.db $24
.db $05
.db $22
.db $64
.db $39
.db $34
.db $00
.db $20
.db $00
.db $04
.db $00
.db $04
.db $00
.db $00
.db $00
.db $40
.db $65
.db $00
.db $15
.db $44
.db $00
.db $44
.db $90
.db $00
.db $20
.db $08
.db $08
.db $14
.db $00
.db $80
.db $7C
.db $53
.db $20
.db $10
.db $50
.db $C8
.db $74
.db $52
.db $08
.db $04
.db $00
.db $00
.db $00
.db $00
.db $04
.db $00
.db $48
.db $30
.db $E9
.db $04
.db $4C
.db $02
.db $30
.db $00
.db $00
.db $88
.db $02
.db $00
.db $00
.db $40
.db $00
.db $00
.db $19
.db $AF
.db $2B
.db $D3
.db $01
.db $11
.db $CA
.db $2D
.db $86
.db $10
.db $80
.db $00
.db $80
.db $00
.db $28
.db $0A
.db $D0
.db $11
.db $56
.db $41
.db $40
.db $83
.db $82
.db $18
.db $10
.db $00
.db $00
.db $00
.db $80
.db $80
.db $00
.db $00
.db $D5
.db $1D
.db $01
.db $84
.db $96
.db $88
.db $23
.db $02
.db $08
.db $10
.db $00
.db $84
.db $00
.db $08
.db $28
.db $00
.db $32
.db $50
.db $09
.db $5D
.db $C0
.db $0D
.db $01
.db $74
.db $00
.db $80
.db $30
.db $20
.db $10
.db $00
.db $10
.db $04
.db $00
.db $E1
.db $04
.db $A3
.db $E5
.db $1E
.db $8E
.db $32
.db $02
.db $05
.db $00
.db $00
.db $01
.db $20
.db $50
.db $00
.db $11
.db $00
.db $1C
.db $41
.db $95
.db $06
.db $15
.db $47
.db $44
.db $00
.db $80
.db $08
.db $00
.db $00
.db $80
.db $08
.db $6A
.db $02
.db $0C
.db $A8
.db $A9
.db $C9
.db $39
.db $06
.db $01
.db $84
.db $00
.db $00
.db $20
.db $01
.db $00
.db $00
.db $C9
.db $0D
.db $57
.db $71
.db $31
.db $6D
.db $40
.db $74
.db $01
.db $10
.db $00
.db $00
.db $08
.db $05
.db $00
.db $00
.db $F5
.db $25
.db $01
.db $19
.db $D2
.db $4A
.db $83
.db $50
.db $00
.db $03
.db $00
.db $01
.db $02
.db $00
.db $00
.db $00
.db $84
.db $10
.db $06
.db $10
.db $63
.db $26
.db $1B
.db $58
.db $02
.db $00
.db $00
.db $06
.db $08
.db $00
.db $20
.db $02
.db $79
.db $82
.db $25
.db $C4
.db $56
.db $C8
.db $AA
.db $C0
.db $04
.db $01
.db $28
.db $00
.db $00
.db $13
.db $00
.db $10
.db $34
.db $18
.db $11
.db $51
.db $E1
.db $01
.db $99
.db $0C
.db $00
.db $01
.db $08
.db $00
.db $00
.db $00
.db $00
.db $40
.db $03
.db $77
.db $70
.db $1B
.db $00
.db $54
.db $A6
.db $E4
.db $00
.db $20
.db $00
.db $80
.db $00
.db $10
.db $1B
.db $10
.db $00
.db $20
.db $00
.db $8C
.db $14
.db $A8
.db $01
.db $5C
.db $00
.db $00
.db $01
.db $20
.db $00
.db $00
.db $00
.db $00
.db $C4
.db $B1
.db $48
.db $0E
.db $CE
.db $E1
.db $03
.db $05
.db $0A
.db $00
.db $10
.db $10
.db $18
.db $01
.db $00
.db $00
.db $04
.db $48
.db $01
.db $03
.db $E6
.db $85
.db $46
.db $18
.db $09
.db $02
.db $10
.db $02
.db $00
.db $48
.db $00
.db $00
.db $24
.db $3B
.db $61
.db $00
.db $A4
.db $72
.db $38
.db $2F
.db $00
.db $08
.db $00
.db $C0
.db $40
.db $00
.db $40
.db $30
.db $01
.db $71
.db $40
.db $D4
.db $01
.db $22
.db $D3
.db $1C
.db $10
.db $00
.db $80
.db $00
.db $80
.db $00
.db $00
.db $04
.db $76
.db $24
.db $43
.db $64
.db $C8
.db $36
.db $C6
.db $36
.db $00
.db $00
.db $00
.db $10
.db $88
.db $00
.db $00
.db $00
.db $01
.db $11
.db $01
.db $50
.db $08
.db $10
.db $45
.db $01
.db $10
.db $40
.db $00
.db $20
.db $10
.db $00
.db $00
.db $04
.db $B6
.db $0B
.db $89
.db $C1
.db $A9
.db $07
.db $15
.db $20
.db $00
.db $00
.db $80
.db $00
.db $00
.db $00
.db $00
.db $01
.db $00
.db $01
.db $D4
.db $59
.db $01
.db $00
.db $6E
.db $10
.db $10
.db $00
.db $00
.db $00
.db $00
.db $40
.db $2C
.db $20
.db $84
.db $2E
.db $B0
.db $83
.db $61
.db $0D
.db $69
.db $E3
.db $48
.db $80
.db $23
.db $00
.db $80
.db $80
.db $00
.db $00
.db $CB
.db $10
.db $63
.db $40
.db $5B
.db $43
.db $81
.db $0A
.db $00
.db $40
.db $00
.db $40
.db $00
.db $00
.db $00
.db $00
.db $DD
.db $83
.db $58
.db $FE
.db $88
.db $6C
.db $1D
.db $C4
.db $08
.db $06
.db $10
.db $00
.db $00
.db $00
.db $80
.db $00
.db $44
.db $04
.db $48
.db $20
.db $10
.db $C1
.db $02
.db $74
.db $A0
.db $00
.db $08
.db $00
.db $00
.db $00
.db $80
.db $40
.db $D8
.db $78
.db $C0
.db $0F
.db $89
.db $8D
.db $C9
.db $45
.db $20
.db $40
.db $04
.db $08
.db $21
.db $28
.db $20
.db $80
.db $50
.db $01
.db $25
.db $81
.db $49
.db $66
.db $52
.db $01
.db $20
.db $00
.db $00
.db $C0
.db $00
.db $00
.db $02
.db $00
.db $2A
.db $21
.db $7A
.db $00
.db $14
.db $04
.db $0D
.db $A2
.db $20
.db $00
.db $05
.db $01
.db $00
.db $00
.db $20
.db $02
.db $C0
.db $99
.db $C0
.db $68
.db $02
.db $15
.db $24
.db $E4
.db $00
.db $00
.db $00
.db $00
.db $03
.db $11
.db $00
.db $14
.db $20
.db $4D
.db $C3
.db $4C
.db $EE
.db $15
.db $EA
.db $35
.db $02
.db $00
.db $01
.db $00
.db $00
.db $40
.db $10
.db $04
.db $14
.db $25
.db $19
.db $42
.db $76
.db $4F
.db $04
.db $09
.db $20
.db $00
.db $00
.db $00
.db $04
.db $00
.db $08
.db $00
.db $65
.db $11
.db $6F
.db $8C
.db $55
.db $DE
.db $04
.db $80
.db $00
.db $30
.db $00
.db $00
.db $01
.db $09
.db $00
.db $80
.db $19
.db $80
.db $39
.db $79
.db $17
.db $F0
.db $06
.db $03
.db $01
.db $40
.db $00
.db $92
.db $20
.db $00
.db $00
.db $08
.db $91
.db $C5
.db $36
.db $20
.db $4A
.db $80
.db $08
.db $62
.db $02
.db $00
.db $40
.db $02
.db $20
.db $00
.db $10
.db $08
.db $08
.db $84
.db $02
.db $C9
.db $02
.db $17
.db $20
.db $04
.db $80
.db $00
.db $00
.db $00
.db $00
.db $01
.db $00
.db $10
.db $11
.db $5D
.db $69
.db $5C
.db $F7
.db $42
.db $DA
.db $29
.db $01
.db $1C
.db $00
.db $20
.db $00
.db $0A
.db $10
.db $00
.db $4A
.db $21
.db $D5
.db $48
.db $50
.db $05
.db $C0
.db $01
.db $00
.db $03
.db $00
.db $02
.db $04
.db $10
.db $80
.db $01
.db $DD
.db $1A
.db $70
.db $76
.db $B2
.db $50
.db $F3
.db $3B
.db $12
.db $28
.db $11
.db $00
.db $50
.db $02
.db $00
.db $00
.db $23
.db $CA
.db $6B
.db $20
.db $A8
.db $40
.db $45
.db $64
.db $28
.db $00
.db $00
.db $04
.db $80
.db $40
.db $00
.db $00
.db $79
.db $70
.db $08
.db $49
.db $B0
.db $26
.db $39
.db $6B
.db $00
.db $00
.db $28
.db $01
.db $00
.db $00
.db $00
.db $20
.db $66
.db $40
.db $10
.db $11
.db $E9
.db $47
.db $C6
.db $42
.db $08
.db $04
.db $04
.db $20
.db $50
.db $10
.db $00
.db $10
.db $66
.db $41
.db $29
.db $6A
.db $C2
.db $C1
.db $0A
.db $B8
.db $02
.db $04
.db $10
.db $00
.db $88
.db $02
.db $84
.db $48
.db $66
.db $27
.db $26
.db $23
.db $D0
.db $1B
.db $0C
.db $0D
.db $01
.db $00
.db $00
.db $00
.db $00
.db $00
.db $01
.db $00
.db $26
.db $8A
.db $2C
.db $47
.db $06
.db $40
.db $1D
.db $A1
.db $00
.db $00
.db $04
.db $00
.db $09
.db $40
.db $80
.db $00
.db $00
.db $05
.db $40
.db $08
.db $15
.db $9A
.db $00
.db $00
.db $08
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $00
.db $42
.db $FD
.db $99
.db $85
.db $5B
.db $77
.db $4A
.db $87
.db $02
.db $00
.db $42
.db $07
.db $00
.db $00
.db $00
.db $01
.db $60
.db $83
.db $1D
.db $07
.db $85
.db $F2
.db $11
.db $35
.db $21
.db $20
.db $00
.db $01
.db $00
.db $01
.db $00
.db $02
.db $05
.db $10
.db $86
.db $41
.db $0C
.db $B0
.db $A2
.db $88
.db $00
.db $00
.db $00
.db $40
.db $00
.db $14
.db $02
.db $44
.db $14
.db $00
.db $C0
.db $51
.db $80
.db $50
.db $6C
.db $8C
.db $28
.db $00
.db $00
.db $40
.db $00
.db $40
.db $20
.db $08
.db $26
.db $08
.db $8D
.db $AA
.db $69
.db $C2
.db $4C
.db $78
.db $C0
.db $00
.db $00
.db $03
.db $00
.db $80
.db $40
.db $00
.db $01
.db $63
.db $40
.db $DF
.db $CE
.db $47
.db $18
.db $1D
.db $02
.db $00
.db $00
.db $02
.db $34
.db $00
.db $00
.db $00
.db $8B
.db $8B
.db $E3
.db $8B
.db $21
.db $F8
.db $4F
.db $2C
.db $10
.db $18
.db $00
.db $08
.db $00
.db $01
.db $1A
.db $00
.db $44
.db $71
.db $54
.db $05
.db $D3
.db $74
.db $50
.db $3C
.db $20
.db $40
.db $00
.db $03
.db $00
.db $00
.db $00
.db $00
.db $6C
.db $C7
.db $C4
.db $67
.db $44
.db $4F
.db $A8
.db $1F
.db $00
.db $00
.db $00
.db $40
.db $02
.db $B0
.db $13
.db $40
.db $59
.db $64
.db $84
.db $55
.db $32
.db $FD
.db $00
.db $49

L0BBFA0:
.dw L0BA30D
.dw L0B8000
.dw L0FC7EA
.dw L0BB59D
.dw L0BA90D
.dw L0BAA30
.dw L0BAF08
.dw L0BAD56
.dw RESET
.dw RESET
.dw RESET
.dw L0BAFF2
.dw L0BAD83
.dw L0B9D99
.dw L0B9CF0

.db $0B
.db $45
.db $BC
.db $AE
.db $30
.db $00
.db $00
.db $00
.db $00
.db $80
.db $50
.db $F7
.db $12
.db $B1
.db $19
.db $53
.db $34
.db $CC
.db $03
.db $44
.db $40
.db $10
.db $80
.db $20
.db $20
.db $20
.db $04
.db $72
.db $62
.db $09
.db $B1
.db $47
.db $5C
.db $70
.db $B6
.db $AD
.db $61
.db $B1
.db $20
.db $00
.db $00
.db $00
.db $0C
.db $3F
.db $80
.db $0B
.db $04
.db $0A
.db $02
.db $23
.db $40
.db $A1
.db $00
.db $00
.db $00
.db $05
.db $80
.db $00
.db $10
.db $47
.db $21
.db $00
.db $01
.db $04
.db $10
.db $11

.ENDS
