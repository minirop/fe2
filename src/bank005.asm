.BANK 6
.ORG $0000

.SECTION "Bank5" FORCE

L050000:
    LDA $04C7
    BNE L050006
    RTS 

L050006:
    LDA $7443
    STA $04D5
    LDA $0306
    CMP #21
    BNE L05001A
    LDA $0320
    CMP #17
    BEQ L050037
L05001A:
    LDA $0307
    CMP #21
    BNE L05003C
    LDA $0320
    CMP #40
    BCC L050037
.db $C9
.db $2D
.db $B0
.db $0B
.db $C9
.db $2A
.db $F0
.db $07
.db $AD
.db $02
.db $03
.db $D0
.db $02
.db $F0
.db $05
L050037:
    LDA #0
    STA $7443
L05003C:
    LDA $0302
    STA $0388
    LDA $05A0
    CMP #2
    BCS L0500BF
    JSR $C71F
    JSR $C23D
    JSR $C72D
    LDA #128
    STA $D1
    LDA #0
    STA $D0
    LDA $7442
    BEQ L050066
.db $A9
.db $01
.db $8D
.db $D0
.db $06
.db $D0
.db $45
L050066:
    LDA $0303
    BEQ L050072
.db $A9
.db $04
.db $8D
.db $DA
.db $06
.db $D0
.db $39
L050072:
    LDA #21
    CMP $0307
    BEQ L05009F
    JSR $80EA
    BCS L0500A6
    LDA $0302
    BNE L050098
    LDA $7434
    CMP #62
    BNE L050091
    LDA #1
    STA $06DB
    BNE L0500AB
L050091:
    LDA #64
    STA $06D8
    BNE L0500AB
L050098:
    LDA #1
    STA $06D8
    BNE L0500AB
L05009F:
    LDA #32
    STA $06DA
    BNE L0500AB
L0500A6:
    LDA #64
    STA $06D7
L0500AB:
    LDA $0302
    BNE L0500B9
    LDA #1
    ORA $D3
    STA $D3
    JMP $80BF

L0500B9:
    LDA #254
    AND $D3
    STA $D3
L0500BF:
    JSR $80FD
    JSR $8994
    JSR $90A6
    JSR $812E
    LDA $05A0
    CMP #2
    BCS L0500DC
    LDA #0
    JSR $CA58
    LDA #0
    JSR $CA60
L0500DC:
    LDA #1
    STA $03F3
    LDA #0
    STA $04AC
    STA $04AD
    RTS 

L0500EA:
    LDX #0
L0500EC:
    LDA $F12D,X
    BEQ L0500F9
    CMP $0305
    BEQ L0500FB
    INX 
    BNE L0500EC
L0500F9:
    CLC 
    RTS 

L0500FB:
    SEC 
    RTS 

L0500FD:
    LDA #0
    LDX #2
L050101:
    STA $03D3,X
    STA $03AF,X
    STA $03CD,X
    STA $03D0,X
    DEX 
    BPL L050101
    STA $04AA
    STA $03F5
    STA $03F6
    STA $04C6
    STA $03E5
    STA $04C7
    STA $0397
    STA $03AA
    LDA #5
    STA $03A9
    RTS 

L05012E:
    LDA #0
    STA $03E9
    LDA $64
    STA $B000
    LDA $65
    STA $C000
    LDA #176
    LDX $0306
    CPX #4
    BEQ L05014C
    CPX #7
    BEQ L05014C
    BNE L050150
L05014C:
    LDA #184
    BNE L050166
L050150:
    LDX $031E
    BEQ L050166
    LDX $0306
    CPX #5
    BEQ L050160
    CPX #3
    BNE L050164
L050160:
    LDA #184
    BNE L050166
L050164:
    LDA #208
L050166:
    STA $03C1
    LDA #64
    LDX $0307
    CPX #4
    BEQ L05017C
    CPX #5
    BEQ L05017C
    CPX #7
    BEQ L05017C
    BNE L050180
L05017C:
    LDA #56
    BNE L050190
L050180:
    LDX $031F
    BEQ L050190
    LDX $0307
    BNE L05018E
.db $A9
.db $38
.db $D0
.db $02
L05018E:
    LDA #32
L050190:
    STA $03C2
    LDA #96
    STA $03C4
    STA $03C5
    RTS 

L05019C:
    LDA $05AE
    BEQ L0501D6
    JSR $C288
    JSR $E3D4
    JSR $81D7
    LDA #1
    STA $D6
    LDA #7
    STA $3D
    JSR $8000
    JSR $823A
    JSR $8209
    JSR $8215
    JSR $820F
    JSR $8805
    JSR $E3D4
    JSR $821E
    JSR $E3EE
    JSR $8203
    JSR $81FD
    JSR $81E2
L0501D6:
    RTS 

L0501D7:
    LDA #0
    STA $8F
    STA $90
    LDA #1
    STA $9D
    RTS 

L0501E2:
    LDA $03AA
    BEQ L0501F1
    LDA #0
    STA $D6
    LDX #8
    LDA #4
    BNE L050218
L0501F1:
    RTS 

L0501F2:
    LDA #1
    TAX 
    BNE L050218
    LDA #1
    LDX #0
    BEQ L050218
    LDA #0
    LDX #3
    BNE L050218
    LDA #4
    LDX #3
    BNE L050218
    LDA #0
    LDX #2
    BNE L050218
    LDA #0
    LDX #1
    BNE L050218
    LDA #0
    TAX 
L050218:
    STX $4A
    JSR $CA94
    RTS 

L05021E:
    LDA $04C6
    CMP #12
    BCS L050229
    LDA #253
    BNE L05022B
L050229:
    LDA #255
L05022B:
    STA $0205
    LDA #0
    STA $0204
    STA $0206
    STA $0207
    RTS 

L05023A:
    LDA $04C6
    JSR $C34C
; start of data
.db $BE
.db $82
.db $40
.db $9B
.db $F9
.db $88
.db $47
.db $88
.db $41
.db $88
.db $57
.db $88
.db $41
.db $88
.db $57
.db $88
.db $2D
.db $88
.db $38
.db $88
.db $F5
.db $88
.db $C0
.db $90
.db $CA
.db $82
.db $E4
.db $84
.db $01
.db $85
.db $83
.db $85
.db $0E
.db $83
.db $D8
.db $83
.db $FD
.db $88
.db $07
.db $85
.db $A9
.db $83
.db $44
.db $84
.db $52
.db $84
.db $20
.db $83
.db $B4
.db $84
.db $01
.db $85
.db $F9
.db $88
.db $4C
.db $83
.db $0E
.db $83
.db $53
.db $86
.db $97
.db $86
.db $33
.db $87
.db $3E
.db $87
.db $50
.db $87
.db $3E
.db $87
.db $9A
.db $82
; end of data
.db $A2
.db $82
; start of data
.db $C2
.db $82
.db $28
.db $83
.db $35
.db $83
.db $F7
.db $81
; end of data
.db $A9
.db $A0
.db $85
.db $33
.db $EE
.db $C6
.db $04
.db $60
L05029A:
    LDA #37
    STA $04C6
    BNE L0502A1
L0502A1:
    RTS 

.db $20
.db $D4
.db $E3
.db $20
.db $0F
.db $88
.db $A9
.db $00
.db $8D
.db $01
.db $03
.db $20
.db $A6
.db $C9
.db $A9
.db $01
.db $8D
.db $C7
.db $04
.db $8D
.db $A5
.db $04
.db $A9
.db $00
.db $8D
.db $C6
.db $04
.db $60
L0502BE:
    INC $04C6
    RTS 

L0502C2:
    LDA #16
    STA $33
    INC $04C6
    RTS 

L0502CA:
    LDA $0303
    BNE L0502EA
    LDA $033C
    BEQ L0502F1
    LDA $033D
    BEQ L0502F1
    LDA $0357
    BNE L0502EA
    LDA $030F
    BEQ L0502EA
    LDA $0308
    CMP #20
    BNE L0502F1
L0502EA:
    LDA #35
    STA $04C6
    BNE L050305
L0502F1:
    LDA $0324
    AND #4
    BEQ L050302
    LDA $032E
    BEQ L0502EA
.db $AD
.db $3D
.db $03
.db $D0
.db $E8
L050302:
    INC $04C6
L050305:
    RTS 

L050306:
    STA $4A
    LDA #1
    JSR $CA94
    RTS 

L05030E:
    LDA $7DA7
    BNE L050316
    INC $04C6
L050316:
    LDA #10
    STA $4A
    LDA #1
    JSR $CA94
    RTS 

L050320:
    LDA $33
    BNE L050327
    INC $04C6
L050327:
    RTS 

L050328:
    LDA $33
    BNE L050334
    LDA #4
    STA $05B5
    INC $04C6
L050334:
    RTS 

L050335:
    LDA #2
    STA $4A
    LDA #4
    JSR $CA94
    LDA $05B5
    BNE L05034B
    LDA #1
    STA $06D3
    INC $04C6
L05034B:
    RTS 

L05034C:
    LDA $033D
    BNE L0503A3
    LDA $032E
    BEQ L0503A3
    ASL 
    TAY 
    LDA $DCAD,Y
    STA $08
    LDA $DCAE,Y
    STA $09
    LDY #0
L050364:
    LDA ($08),Y
    STA $7E9B,Y
    INY 
    CMP #239
    BNE L050364
    LDA #0
    STA $03E8
    JSR $864A
    LDA #1
    STA $03E8
    JSR $864A
    LDY #133
    LDA $0324
    AND #4
    BEQ L050389
.db $A0
.db $8D
L050389:
    STY $7DA6
    LDA #0
    STA $7DA5
    LDA #9
    STA $4A
    LDA #1
    JSR $CA94
    LDA #8
    STA $7DA7
    INC $04C6
    RTS 

L0503A3:
    LDA #29
    STA $04C6
    RTS 

L0503A9:
    LDA #35
    STA $0781
    LDA #46
    STA $0782
    LDA #4
    STA $0783
    LDA #199
    STA $0784
    LDA #200
    STA $0785
    LDA #201
    STA $0786
    LDA #202
    STA $0787
    LDX #0
    STX $0788
    INX 
    STA $27
    INC $04C6
    RTS 

L0503D8:
    LDA $0308
    CMP #20
    BEQ L05043E
    LDA $0324
    AND #4
    BNE L05043E
    LDA $05A1
    BNE L0503F0
    LDA $033C
    BNE L0503F7
L0503F0:
    LDA #35
    STA $04C6
    BNE L05043D
L0503F7:
    LDA #35
    STA $049F
    LDA #13
    STA $049E
    LDA #0
    STA $049D
    LDA #1
    STA $0591
    LDA #14
    STA $0590
    LDA $030E
    STA $04A0
    LDA $030F
    CLC 
    ADC $030E
    STA $04A1
    LDA $0331
    CMP #20
    BNE L050436
    LDA #100
    LDX $0308
    CPX #19
    BEQ L050433
.db $18
.db $69
.db $64
L050433:
    STA $04A1
L050436:
    LDA #16
    STA $33
    INC $04C6
L05043D:
    RTS 

L05043E:
    LDA #27
    STA $04C6
    RTS 

L050444:
    LDA $04A0
    JSR $847A
    LDA $33
    BNE L050479
    INC $04C6
    RTS 

L050452:
    LDA $04A0
    CMP #100
    BCC L05045E
    SBC #100
    JMP $8455

L05045E:
    JSR $847A
    INC $04A0
    LDA $04A0
    CMP $04A1
    BCC L050479
    BEQ L050479
    LDA #0
    STA $32
    LDA #48
    STA $33
    INC $04C6
L050479:
    RTS 

L05047A:
    STA $00
    LDA #4
    STA $01
    JSR $C6C9
    LDA $00
    STA $4E
    LDA $01
    STA $4F
    LDA #10
    STA $50
    JSR $C6EB
    LDA $4E
    STA $02
    LDA #35
    STA $09
    LDA #50
    STA $08
    LDX #0
    LDA #7
    JSR $8306
    LDA #0
    STA $0781,X
    LDA #1
    STA $27
    LDA #32
    STA $06D2
    RTS 

L0504B4:
    LDA $032E
    BNE L0504C1
    LDA $0308
    CMP $0331
    BEQ L0504DE
L0504C1:
    LDA #35
    STA $049F
    LDA #7
    STA $049E
    LDA #1
    STA $049D
    LDA #17
    STA $0590
    LDA #3
    STA $0591
    INC $04C6
    RTS 

L0504DE:
    LDA #35
    STA $04C6
    RTS 

L0504E4:
    LDA #34
    STA $049F
    LDA #39
    STA $049E
    LDA #0
    STA $049D
    LDA #17
    STA $0590
    LDX #9
    STX $0591
    INC $04C6
    RTS 

L050501:
    LDA #4
    JSR $8306
    RTS 

L050507:
    LDA #5
    JSR $8306
    RTS 

L05050D:
    LDA $7DA6
    STA $03AE
    BEQ L050519
    CMP #3
    BNE L050572
L050519:
    LDA $0307
    CMP #21
    BNE L05052C
.db $A9
.db $01
.db $8D
.db $A1
.db $05
.db $A9
.db $00
.db $8D
.db $A6
.db $7D
.db $D0
.db $1A
L05052C:
    LDY #0
    LDA $8573,Y
    BPL L05054D
    CMP $0305
    BEQ L05053C
    INY 
    JMP $852E

L05053C:
    TYA 
    CLC 
    ADC #49
    STA $7DA6
    JSR $8608
    LDA #4
    STA $7DB5
    BNE L050572
L05054D:
    LDA $0307
    CMP #3
    BEQ L050564
    CMP #5
    BEQ L050564
    CMP #11
    BEQ L050564
    CMP #18
    BEQ L050564
    CMP #17
    BNE L050572
L050564:
    LDA $7DA6
    BEQ L05056D
    LDA #8
    BNE L05056F
L05056D:
    LDA #7
L05056F:
    STA $7DA6
L050572:
    RTS 

; start of data
.db $81
.db $82
.db $83
.db $84
.db $85
.db $86
.db $89
.db $8A
.db $8B
.db $8C
.db $8D
.db $8E
.db $8F
.db $90
.db $91
.db $01
; end of data
L050583:
    LDX $7444
    LDA $90BA,X
    STA $7DB5
    LDA #0
    STA $B000
    STA $C000
    STA $7DA5
    LDA $033C
    BEQ L0505CC
    LDA $033D
    BEQ L0505B8
    LDA $04AB
    BEQ L0505B4
    ORA #96
    STA $7EBB
    LDA #239
    STA $7EBC
    LDA #6
    BNE L0505D7
L0505B4:
    LDA #10
    BNE L0505D7
L0505B8:
    TAX 
    LDA $0324
    AND #4
    BNE L0505C8
    TXA 
    LDX $0308
    CPX #20
    BNE L0505D7
L0505C8:
    LDA #3
    BNE L0505D7
L0505CC:
    LDA #1
    STA $06D9
    LDA $0304
    CLC 
    ADC #13
L0505D7:
    STA $7DA6
    JSR $850D
    LDA #9
    STA $4A
    LDA #1
    JSR $CA94
    LDA $033D
    BEQ L0505F0
    LDA $033C
    BEQ L0505F0
L0505F0:
    JSR $8608
    LDA #10
    STA $4A
    LDA #1
    STA $7DA7
    JSR $CA94
    LDA #255
    STA $049C
    INC $04C6
    RTS 

L050608:
    LDA #1
    STA $03E8
    JSR $864A
    LDA #0
    STA $03E8
    JSR $864A
    LDA $030F
    JSR $861F
    RTS 

L05061F:
    STA $00
    LDA #0
    STA $01
    LDA #68
    STA $08
    LDA #4
    STA $09
    JSR $C7BA
    LDX #2
    LDY #0
L050634:
    LDA $0444,X
    CMP #255
    BEQ L05063F
    STA $7E9B,Y
    INY 
L05063F:
    INX 
    CPX #5
    BNE L050634
    LDA #239
    STA $7E9B,Y
    RTS 

L05064A:
    LDA #2
    STA $4A
    LDA #7
    JMP $CA94

L050653:
    LDA $7DA7
    BNE L05068D
    LDA $0331
    CMP $0308
    BNE L050667
    LDA #35
    STA $04C6
    BNE L050696
L050667:
    JSR $861F
    LDA #0
    STA $03E8
    JSR $864A
    LDA #2
    STA $06D8
    LDA #129
    STA $7DA6
    LDA #9
    STA $4A
    LDA #1
    JSR $CA94
    LDA #8
    STA $7DA7
    INC $04C6
L05068D:
    LDA #10
    STA $4A
    LDA #1
    JSR $CA94
L050696:
    RTS 

L050697:
    LDA $7DA7
    BEQ L05069F
    JMP $8729

L05069F:
    INC $049C
    LDA $049C
    CMP #6
    BEQ L050726
    ASL 
    TAY 
    CPY #0
    BNE L0506C5
    LDA $0306
    CMP #15
    BCC L0506C5
    CMP #20
    BCS L0506C5
    LDA #135
    STA $01
    LDA #232
    STA $00
    JMP $86CF

L0506C5:
    LDA $87BB,Y
    STA $00
    LDA $87BC,Y
    STA $01
    LDA $87ED,Y
    STA $02
    LDA $87EE,Y
    STA $03
    LDA $87F9,Y
    STA $04
    LDA $87FA,Y
    STA $05
    LDY #0
L0506E5:
    LDA ($00),Y
    STA $7E8B,Y
    INY 
    CMP #239
    BNE L0506E5
    LDY #0
    LDA ($04),Y
    SEC 
    SBC ($02),Y
    BEQ L05071E
    BMI L05071E
    CMP #3
    BCC L050705
.db $B1
.db $02
.db $91
.db $04
.db $4C
.db $1E
.db $87
L050705:
    JSR $861F
    LDA #130
    STA $7DA6
    LDA #8
    STA $7DA7
    LDA #9
    STA $4A
    LDA #1
    JSR $CA94
    JMP $8729

L05071E:
    INC $049C
    BEQ L050726
    JMP $86A2

L050726:
    INC $04C6
    LDA #10
    STA $4A
    LDA #1
    JSR $CA94
    RTS 

L050733:
    LDA #33
    STA $039B
    LDA #3
    JSR $8306
    RTS 

L05073E:
    LDA $7DA7
    BNE L050746
    INC $04C6
L050746:
    LDA #10
    STA $4A
    LDA #1
    JSR $CA94
    RTS 

L050750:
    LDA $0306
    CMP #14
    BEQ L050770
    LDX #0
L050759:
    LDA $E3A7,X
    BMI L05077E
    CMP $0306
    BEQ L050766
    INX 
    BNE L050759
L050766:
    LDA $0331
    CMP $E3C2,X
    BEQ L050784
    BNE L05077E
L050770:
    LDA $0331
    CMP #3
    BNE L05077E
    JSR $864A
    LDA #140
    BNE L0507A6
L05077E:
    LDA #35
    STA $04C6
    RTS 

L050784:
    LDA $E3B5,X
    ASL 
    TAX 
    DEX 
    DEX 
    LDA $DB74,X
    STA $01
    LDA $DB73,X
    STA $00
    LDY #0
L050797:
    LDA ($00),Y
    STA $7E9B,Y
    INY 
    CMP #239
    BNE L050797
    JSR $864A
    LDA #139
L0507A6:
    STA $7DA6
    LDA #9
    STA $4A
    LDA #1
    JSR $CA94
    LDA #8
    STA $7DA7
    INC $04C6
    RTS 

; start of data
.db $C7
.db $87
.db $CB
.db $87
.db $CF
.db $87
.db $D5
.db $87
.db $D8
.db $87
.db $E0
.db $87
.db $11
.db $05
.db $28
.db $EF
.db $2D
.db $0A
.db $0F
.db $EF
.db $0C
.db $1A
.db $0F
.db $25
.db $0A
.db $EF
.db $02
.db $2F
.db $EF
.db $0B
.db $86
.db $1B
.db $0F
.db $29
.db $87
.db $07
.db $EF
.db $0A
.db $01
.db $10
.db $0F
.db $01
.db $71
.db $79
.db $EF
.db $20
.db $29
.db $87
.db $07
.db $EF
.db $12
.db $03
.db $14
.db $03
.db $18
.db $03
.db $1A
.db $03
.db $1C
.db $03
.db $0C
.db $03
.db $34
.db $03
.db $35
.db $03
.db $37
.db $03
.db $38
.db $03
.db $39
.db $03
.db $32
.db $03
; end of data
L050805:
    LDA $04A5
    BNE L050827
    LDA $04C5
    BEQ L05082C
L05080F:
    LDA $2002
    AND #64
    BNE L05080F
L050816:
    LDA $2002
    AND #64
    BEQ L050816
    LDA #0
    STA $D000
    STA $E000
    BEQ L05082C
L050827:
.db $A9
.db $00
.db $8D
.db $A5
.db $04
L05082C:
    RTS 

L05082D:
    LDA #1
    STA $04C4
    STA $63
    INC $04C6
    RTS 

L050838:
    LDA #1
    STA $04C5
    INC $04C6
    RTS 

L050841:
    LDA #6
    JSR $8306
    RTS 

L050847:
    LDA $27
    BNE L050856
    LDA $7443
    BEQ L050853
    JSR $C71F
L050853:
    INC $04C6
L050856:
    RTS 

L050857:
    LDA $05A0
    CMP #2
    BCS L0508BD
    LDX #8
    LDA $7443
    BEQ L05087F
    LDA $04C6
    CMP #7
    BEQ L050879
    LDA #0
    STA $D1
    LDA $D3
    AND #254
    STA $D3
    JMP $88BD

L050879:
    JSR $C72D
    JMP $88BD

L05087F:
    STX $0386
    LDA $0388
    BEQ L0508C1
    LDA $0302
    BNE L0508A9
    LDA $D1
    CLC 
    ADC $0386
    STA $D1
    BNE L05089C
    LDA #254
    AND $D3
    STA $D3
L05089C:
    LDA $D3
    LSR 
    BCS L0508C0
    LDA $D1
    CMP #128
    BNE L0508C0
    BEQ L0508BD
L0508A9:
    LDA $D1
    CLC 
    ADC $0386
    STA $D1
    BNE L0508C0
    LDA #0
    STA $D1
    LDA $D3
    AND #254
    STA $D3
L0508BD:
    INC $04C6
L0508C0:
    RTS 

L0508C1:
    LDA $0302
    BNE L0508D6
    LDA $D1
    SEC 
    SBC $0386
    STA $D1
    BNE L0508F4
    LDA #0
    STA $D1
    BEQ L0508F1
L0508D6:
    LDA $D1
    SEC 
    SBC $0386
    STA $D1
    BPL L0508E6
    LDA $D3
    ORA #1
    STA $D3
L0508E6:
    LDA $D3
    LSR 
    BCC L0508F4
    LDA $D1
    CMP #128
    BNE L0508F4
L0508F1:
    INC $04C6
L0508F4:
    RTS 

L0508F5:
    LDA #0
    BEQ L0508FF
    LDA #1
    BNE L0508FF
    LDA #3
L0508FF:
    LDX $27
    BNE L05092D
    TAX 
    ASL 
    TAY 
    LDA $898C,Y
    STA $02
    LDA $898D,Y
    STA $03
    LDA $8988,X
    STA $00
    LDY #0
L050917:
    LDA ($02),Y
    STA $0781,Y
    INY 
    DEC $00
    BNE L050917
    LDA #0
    STA $0781,Y
    LDA #1
    STA $27
    INC $04C6
L05092D:
    RTS 

; start of data
.db $23
.db $C0
.db $20
.db $55
.db $55
.db $55
.db $55
.db $00
.db $00
.db $00
.db $00
.db $55
.db $55
.db $55
.db $55
.db $00
.db $00
.db $00
.db $00
.db $55
.db $55
.db $55
.db $55
.db $00
.db $00
.db $00
.db $00
.db $55
.db $55
.db $55
.db $55
.db $00
.db $00
.db $00
.db $00
.db $20
.db $00
.db $D0
.db $FE
.db $20
.db $10
.db $D0
.db $FD
.db $23
.db $E0
.db $20
.db $FF
.db $FF
.db $FF
.db $FF
.db $AA
.db $AA
.db $AA
.db $AA
.db $FF
.db $FF
.db $FF
.db $FF
.db $AA
.db $AA
.db $AA
.db $AA
.db $FF
.db $FF
.db $FF
.db $FF
.db $AA
.db $AA
.db $AA
.db $AA
.db $FF
.db $FF
.db $FF
.db $FF
.db $AA
.db $AA
.db $AA
.db $AA
; end of data
.db $23
.db $E0
.db $60
.db $AA
; start of data
.db $23
.db $F3
.db $05
.db $AA
.db $AA
.db $AA
.db $AA
.db $AA
.db $2B
.db $23
; end of data
.db $04
; start of data
.db $08
.db $2E
.db $89
.db $59
.db $89
; end of data
.db $7C
.db $89
; start of data
.db $80
.db $89
; end of data
L050994:
    LDA #0
    STA $047C
    LDA $04A8
    BEQ L0509AC
.db $A9
.db $01
.db $8D
.db $62
.db $03
.db $8D
.db $03
.db $03
.db $8D
.db $7C
.db $04
.db $8D
.db $61
.db $03
L0509AC:
    JSR $8E3F
    LDX #1
    JSR $908A
    LDY $0306,X
    DEY 
    TYA 
    STA $04D1,X
    CPX #0
    BNE L0509C6
L0509C0:
    LDA $8E98,Y
    JMP $89D3

L0509C6:
    LDA $0302
    BNE L0509D0
    LDA $0303
    BNE L0509C0
L0509D0:
    LDA $8EAE,Y
    STA $64,X
    STA $04CE,X
    JSR $8D85
    TYA 
    ASL 
    TAY 
    CPX #0
    BNE L0509F9
L0509E2:
    LDA $8EF0,Y
    STA $00
    LDA $8EF1,Y
    STA $01
    LDA $8FB1,Y
    STA $02
    LDA $8FB2,Y
    STA $03
    JMP $8A17

L0509F9:
    LDA $0302
    BNE L050A03
    LDA $0303
    BNE L0509E2
L050A03:
    LDA $8F1C,Y
    STA $00
    LDA $8F1D,Y
    STA $01
    LDA $8FDD,Y
    STA $02
    LDA $8FDE,Y
    STA $03
    LDY #0
    LDA $0306,X
    CMP #11
    BNE L050A23
    JMP $8AAD

L050A23:
    CMP #22
    BEQ L050A4A
    CMP #20
    BNE L050A2E
    JMP $8ACF

L050A2E:
    CMP #21
    BNE L050A38
    JSR $8C47
    JMP $8BDC

L050A38:
    CMP #14
    BNE L050A3F
    JMP $8A89

L050A3F:
    CMP #12
    BCC L050A46
    JMP $8ACB

L050A46:
    CMP #8
    BCS L050A89
L050A4A:
    JSR $8D6D
    LDA $0385
    BEQ L050A54
.db $A0
.db $02
L050A54:
    CPX #0
    BNE L050A7B
    LDA $0306,X
    CMP #5
    BNE L050A7B
.db $AD
.db $07
.db $03
.db $C9
.db $0B
.db $F0
.db $10
.db $C9
.db $11
.db $F0
.db $0C
.db $C9
.db $03
.db $F0
.db $08
.db $C9
.db $05
.db $F0
.db $04
.db $C9
.db $12
.db $D0
.db $05
.db $A9
.db $22
.db $9D
.db $EE
.db $03
L050A7B:
    LDA $0320,X
    CMP #4
    BEQ L050A86
    CMP #7
    BNE L050AA0
L050A86:
    INY 
    BNE L050AA0
L050A89:
    JSR $8D6D
    LDA $0385
    BEQ L050A93
.db $A0
.db $02
L050A93:
    LDA $0320,X
    CMP #15
    BNE L050AA0
.db $A9
.db $02
.db $9D
.db $EE
.db $03
.db $C8
L050AA0:
    LDA ($00),Y
    STA $03EB,X
    LDA ($02),Y
    STA $03BE,X
    JMP $8BDC

L050AAD:
    JSR $8D6D
    LDA $0385
    BEQ L050AB7
.db $A0
.db $05
L050AB7:
    CPX #0
    BNE L050A93
    LDA $0320
    CMP #23
    BCC L050A93
    CMP #47
    BCS L050A93
    INY 
    INY 
    JMP $8BC3

L050ACB:
    CMP #14
    BCS L050B07
    JSR $8D6D
    LDA $0385
    BEQ L050AD9
.db $A0
.db $02
L050AD9:
    CPX #0
    BNE L050AFA
    LDA $0320,X
    CMP #21
    BNE L050AFA
.db $C8
.db $A9
.db $03
.db $8D
.db $85
.db $03
.db $BD
.db $06
.db $03
.db $C9
.db $0C
.db $F0
.db $03
.db $EE
.db $85
.db $03
.db $AD
.db $85
.db $03
.db $9D
.db $EE
.db $03
L050AFA:
    LDA ($00),Y
    STA $03EB,X
    LDA ($02),Y
    STA $03BE,X
    JMP $8BDC

L050B07:
    LDA $0306,X
    CMP #18
    BNE L050B6A
    JSR $8D6D
    LDA $0385
    BEQ L050B1B
.db $A0
.db $02
.db $4C
.db $A0
.db $8A
L050B1B:
    CPX #0
    BEQ L050B39
    LDA #5
    JSR $C068
    STY $0383
    TAY 
    LDA $8B65,Y
    LDY $0383
    STA $03EB,X
    LDA #0
    STA $03BE,X
    JMP $8BDC

L050B39:
.db $BD
.db $20
.db $03
.db $38
.db $E9
.db $28
.db $8C
.db $83
.db $03
.db $A8
.db $B9
.db $93
.db $8F
.db $9D
.db $EE
.db $03
.db $C0
.db $02
.db $D0
.db $06
.db $AC
.db $83
.db $03
.db $C8
.db $D0
.db $0F
.db $AC
.db $83
.db $03
.db $E0
.db $01
.db $F0
.db $08
.db $AD
.db $02
.db $03
.db $D0
.db $03
.db $EE
.db $7C
.db $04
.db $4C
.db $A0
.db $8A
; start of data
.db $1C
.db $3B
.db $3C
.db $3D
.db $3E
; end of data
L050B6A:
    LDA $0306,X
    CMP #16
    BEQ L050B75
    CMP #15
    BNE L050B9D
L050B75:
    JSR $8D6D
    LDA $0385
    BEQ L050B82
.db $A0
.db $01
.db $4C
.db $A0
.db $8A
L050B82:
    LDA ($00),Y
    STA $03EB,X
    LDA ($02),Y
    STA $03BE,X
    LDA $0320,X
    BEQ L050B94
    SEC 
    SBC #23
L050B94:
    TAY 
    LDA $8F72,Y
    STA $03EE,X
    BNE L050BDC
L050B9D:
    LDA $0306,X
    CMP #17
    BEQ L050BA8
    CMP #19
    BNE L050BD2
L050BA8:
    JSR $8D6D
    LDA $0385
    BEQ L050BB5
.db $A0
.db $03
.db $4C
.db $A0
.db $8A
L050BB5:
    CPX #0
    BEQ L050BC3
    LDA $0306,X
    CMP #17
    BNE L050BC3
    JMP $8A93

L050BC3:
    LDA $0320,X
    CMP #40
    BCC L050BCD
.db $4C
.db $39
.db $8B
L050BCD:
    INY 
    INY 
    JMP $8B82

L050BD2:
.db $B1
.db $00
.db $9D
.db $EB
.db $03
.db $B1
.db $02
.db $9D
.db $BE
.db $03
L050BDC:
    LDA $0320,X
    CMP #47
    BNE L050C0F
    LDA #31
    STA $03EB,X
    STA $0404
    LDA #0
    STA $03EE,X
    CPX #1
    BNE L050C0A
    LDA $0303
    BEQ L050C0A
.db $AD
.db $06
.db $03
.db $C9
.db $0B
.db $F0
.db $0F
.db $C9
.db $0F
.db $90
.db $06
.db $C9
.db $14
.db $B0
.db $02
.db $90
.db $05
L050C0A:
    LDA #0
    STA $03BE,X
L050C0F:
    DEX 
    BMI L050C15
    JMP $89B1

L050C15:
    LDA $7443
    BEQ L050C46
    LDA #0
    STA $03EE
    STA $03EF
    STA $0403
    LDX #1
L050C27:
    LDY #53
    LDA $0320,X
    CMP #42
    BEQ L050C3F
    LDY #32
    STY $0404
    CMP #23
    BCC L050C3F
    CMP #47
    BCS L050C3F
    LDY #54
L050C3F:
    TYA 
    STA $03EB,X
    DEX 
    BPL L050C27
L050C46:
    RTS 

L050C47:
    JSR $8D6D
    LDA $0385
    BEQ L050C5B
.db $A0
.db $09
.db $AD
.db $4A
.db $74
.db $F0
.db $02
.db $A0
.db $13
.db $4C
.db $A0
.db $8A
L050C5B:
    CPX #0
    BEQ L050C62
    JMP $8D48

L050C62:
    STX $0381
    LDY #0
    LDA $744A
    BEQ L050C6E
    LDY #10
L050C6E:
    STY $0382
    LDA $0320
    CMP #17
    BNE L050CCA
    LDA $0307
    CMP #21
    BNE L050CCA
    LDX $744A
    LDY $8D40,X
    LDA $03A6
    BEQ L050C8D
    LDY $8D42,X
L050C8D:
    TYA 
    STA $03EB
    STA $0404
    LDY $0382
    LDA $905B,Y
    STA $03BE
    STA $0405
    LDA #26
    STA $03EE
    STA $0403
    LDY $8D44,X
    LDA $8D46,X
    TAX 
    LDA $03A7
    BEQ L050CBE
    CMP #1
    BNE L050CC1
    STY $03EB
    STX $03EE
L050CBE:
    JMP $8D3C

L050CC1:
.db $8C
.db $04
.db $04
.db $8E
.db $03
.db $04
.db $4C
.db $3C
.db $8D
L050CCA:
    LDA $0320
    CMP #21
    BNE L050CE0
.db $A9
.db $03
.db $8D
.db $EE
.db $03
.db $8D
.db $03
.db $04
.db $A0
.db $07
.db $8C
.db $82
.db $03
.db $D0
.db $28
L050CE0:
    CMP #1
    BEQ L050CF0
    CMP #20
    BEQ L050CF0
    CMP #21
    BEQ L050CF0
    CMP #22
    BNE L050CF7
L050CF0:
    LDY #5
    STY $0382
    BNE L050D08
L050CF7:
    CMP #15
    BNE L050D08
.db $A9
.db $01
.db $8D
.db $EE
.db $03
.db $8D
.db $03
.db $04
.db $A0
.db $03
.db $8C
.db $82
.db $03
L050D08:
    LDA $8F7E,Y
    LDY $0353
    BEQ L050D16
    LDY $0382
    LDA $8F7F,Y
L050D16:
    STA $03EB
    LDY $0382
    LDA $9059,Y
    STA $03BE
    LDA $8F7E,Y
    LDY $0355
    BEQ L050D30
    LDY $0382
    LDA $8F7F,Y
L050D30:
    LDY $0382
    STA $0404
    LDA $9059,Y
    STA $0405
    LDX $0381
    RTS 

.db $13
; start of data
.db $42
; end of data
.db $3A
; start of data
.db $40
; end of data
.db $0F
; start of data
.db $43
; end of data
.db $1A
; start of data
.db $17
; end of data
L050D48:
    LDA $03A6
    BNE L050D56
    INY 
    LDA $03A8
    CMP #1
    BEQ L050D56
    INY 
L050D56:
    LDA ($02),Y
    STA $03BE,X
    LDA ($00),Y
    STA $03EB,X
    LDY $03A8
    LDA $8D6A,Y
    STA $03EE,X
    RTS 

; start of data
.db $1D
.db $0D
.db $21
; end of data
L050D6D:
    CPX #0
    BEQ L050D7F
    LDA $0302
    BNE L050D7F
    LDA $0303
    BEQ L050D7F
.db $A9
.db $01
.db $D0
.db $02
L050D7F:
    LDA #0
    STA $0385
    RTS 

L050D85:
    TYA 
    PHA 
    JSR $8D8D
    PLA 
    TAY 
    RTS 

L050D8D:
    LDY $0306,X
    DEY 
    STX $0380
    TXA 
    ASL 
    TAX 
    LDA $8E3B,X
    STA $08
    LDA $8E3C,X
    STA $09
    JSR $8DE8
    ASL 
    TAX 
    LDA $BCF1,X
    STA $06
    LDA $BCF2,X
    STA $07
    JSR $8E31
    LDA $08
    CLC 
    ADC #16
    STA $08
    LDA $09
    ADC #0
    STA $09
    JSR $8E31
    LDA $0385
    BEQ L050DE0
    LDA #125
    STA $09
    LDA #156
    STA $08
    CLC 
    LDA $06
    ADC #4
    STA $06
    LDA #0
    ADC $07
    STA $07
    JSR $8E31
L050DE0:
    LDA #128
    STA $28
    LDX $0380
    RTS 

L050DE8:
    LDA $03F5
    BEQ L050DF4
    LDX #0
    STX $0385
    BEQ L050E30
L050DF4:
    LDX #0
    LDA $0380
    BNE L050E0C
L050DFB:
    LDA $0304
    CMP #35
    BNE L050E06
.db $A9
.db $26
.db $D0
.db $16
L050E06:
    LDA $8EC4,Y
    JMP $8E1C

L050E0C:
    LDA $0302
    BNE L050E16
    LDA $0303
    BNE L050DFB
L050E16:
    LDA $8EDA,Y
    JSR $8E56
    BPL L050E22
    AND #127
    LDX #1
L050E22:
    STA $0384
    STX $0385
    LDX $0380
    BEQ L050E2D
L050E2D:
    LDA $0384
L050E30:
    RTS 

L050E31:
    LDY #3
L050E33:
    LDA ($06),Y
    STA ($08),Y
    DEY 
    BPL L050E33
    RTS 

; start of data
.db $80
.db $7D
.db $84
.db $7D
; end of data
L050E3F:
    LDY #0
    LDA $BCC9,Y
    STA $08
    LDA $BCCA,Y
    STA $09
    LDY #35
L050E4D:
    LDA ($08),Y
    STA $7D7D,Y
    DEY 
    BPL L050E4D
    RTS 

L050E56:
    PHA 
    STX $0381
    LDX #0
L050E5C:
    LDA $8E85,X
    BPL L050E69
    CMP $0305
    BEQ L050E79
    INX 
    BNE L050E5C
L050E69:
    LDA $0309
    CMP #10
    BCC L050E80
    PLA 
    LDA $0307
    CLC 
    ADC #92
    BNE L050E81
L050E79:
    PLA 
    TXA 
    CLC 
    ADC #4
    BNE L050E81
L050E80:
    PLA 
L050E81:
    LDX $0381
    RTS 

; start of data
.db $81
.db $82
.db $83
.db $84
.db $85
.db $86
.db $89
.db $8A
.db $8B
.db $8C
.db $8D
.db $8E
.db $8F
.db $90
.db $C7
.db $C8
.db $C9
.db $CA
.db $01
; end of data
.db $07
.db $02
; start of data
.db $08
.db $0B
; end of data
.db $08
; start of data
.db $02
.db $0C
.db $04
.db $04
; end of data
.db $06
; start of data
.db $05
; end of data
.db $06
.db $0D
; start of data
.db $02
.db $0E
.db $0F
.db $04
; end of data
.db $0A
; start of data
.db $0F
.db $03
.db $01
; end of data
.db $0E
; start of data
.db $07
.db $02
.db $0A
.db $0B
.db $09
.db $02
.db $0C
.db $04
.db $04
.db $06
.db $03
.db $06
.db $0D
.db $10
.db $08
.db $0F
.db $0A
.db $03
.db $0E
.db $03
.db $11
.db $0E
; end of data
.db $31
.db $32
; start of data
.db $33
.db $34
; end of data
.db $B5
; start of data
.db $36
.db $37
.db $38
.db $39
; end of data
.db $3A
; start of data
.db $3B
; end of data
.db $3C
.db $3D
; start of data
.db $3E
.db $3F
.db $40
.db $41
; end of data
.db $42
; start of data
.db $43
.db $44
.db $C5
; end of data
.db $46
; start of data
.db $47
.db $48
.db $49
.db $4A
.db $4B
.db $4C
.db $4D
.db $4E
.db $4F
.db $50
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
; end of data
.db $48
.db $8F
.db $4A
.db $8F
; start of data
.db $4C
.db $8F
.db $4E
.db $8F
; end of data
.db $50
.db $8F
; start of data
.db $52
.db $8F
.db $54
.db $8F
.db $56
.db $8F
.db $58
.db $8F
; end of data
.db $5A
.db $8F
; start of data
.db $5C
.db $8F
; end of data
.db $61
.db $8F
.db $63
.db $8F
; start of data
.db $65
.db $8F
.db $69
.db $8F
.db $69
.db $8F
.db $6F
.db $8F
; end of data
.db $6A
.db $8F
; start of data
.db $6C
.db $8F
.db $67
.db $8F
.db $7E
.db $8F
; end of data
.db $91
.db $8F
; start of data
.db $48
.db $8F
.db $4A
.db $8F
.db $9A
.db $8F
.db $98
.db $8F
.db $9C
.db $8F
.db $9E
.db $8F
.db $54
.db $8F
.db $56
.db $8F
.db $58
.db $8F
.db $5A
.db $8F
.db $AA
.db $8F
.db $61
.db $8F
.db $A0
.db $8F
.db $A1
.db $8F
.db $A5
.db $8F
.db $69
.db $8F
.db $A3
.db $8F
.db $A6
.db $8F
.db $A7
.db $8F
.db $AC
.db $8F
.db $AE
.db $8F
.db $91
.db $8F
.db $00
; end of data
.db $19
; start of data
.db $01
; end of data
.db $19
; start of data
.db $02
.db $19
.db $03
; end of data
.db $19
.db $04
.db $19
; start of data
.db $05
; end of data
.db $05
; start of data
.db $06
; end of data
.db $19
; start of data
.db $07
; end of data
.db $1A
; start of data
.db $08
; end of data
.db $1A
; start of data
.db $09
; end of data
.db $1A
; start of data
.db $0A
; end of data
.db $1A
.db $1D
.db $1D
; start of data
.db $1D
.db $0B
; end of data
.db $0C
.db $2A
.db $2B
; start of data
.db $0D
; end of data
.db $1A
; start of data
.db $10
; end of data
.db $14
; start of data
.db $1B
; end of data
.db $17
.db $2E
.db $33
.db $32
; start of data
.db $2F
; end of data
.db $34
.db $31
; start of data
.db $30
.db $06
.db $0A
; end of data
.db $09
; start of data
.db $12
.db $10
.db $11
.db $0F
; end of data
.db $00
; start of data
.db $13
.db $14
.db $15
.db $16
.db $11
.db $12
; end of data
.db $0F
.db $16
.db $16
; start of data
.db $38
.db $38
; end of data
.db $39
.db $39
.db $39
; start of data
.db $3F
.db $40
.db $43
; end of data
.db $41
.db $41
.db $38
.db $38
.db $39
.db $39
; start of data
.db $1E
; end of data
.db $19
.db $05
.db $05
.db $1F
.db $18
.db $05
; start of data
.db $2C
; end of data
.db $19
; start of data
.db $27
; end of data
.db $19
; start of data
.db $28
; end of data
.db $19
; start of data
.db $2D
; end of data
.db $29
; start of data
.db $21
.db $0E
; end of data
.db $1A
; start of data
.db $24
; end of data
.db $1A
; start of data
.db $23
; end of data
.db $1C
.db $22
.db $22
; start of data
.db $22
.db $26
; end of data
.db $1A
; start of data
.db $15
; end of data
.db $18
; start of data
.db $29
.db $25
.db $44
; end of data
.db $09
.db $90
.db $0D
.db $90
; start of data
.db $11
.db $90
.db $15
.db $90
; end of data
.db $19
.db $90
; start of data
.db $1D
.db $90
.db $21
.db $90
.db $25
.db $90
.db $29
.db $90
; end of data
.db $2D
.db $90
; start of data
.db $31
.db $90
; end of data
.db $3B
.db $90
.db $3F
.db $90
; start of data
.db $43
.db $90
.db $47
.db $90
.db $49
.db $90
.db $4B
.db $90
; end of data
.db $4F
.db $90
; start of data
.db $52
.db $90
.db $56
.db $90
.db $59
.db $90
; end of data
.db $6D
.db $90
; start of data
.db $09
.db $90
.db $0D
.db $90
.db $73
.db $90
.db $71
.db $90
.db $75
.db $90
.db $77
.db $90
.db $21
.db $90
.db $25
.db $90
.db $29
.db $90
.db $2D
.db $90
.db $80
.db $90
.db $3B
.db $90
.db $79
.db $90
.db $7A
.db $90
.db $7E
.db $90
.db $7F
.db $90
.db $7C
.db $90
.db $82
.db $90
.db $83
.db $90
.db $86
.db $90
.db $87
.db $90
.db $6D
.db $90
.db $00
; end of data
.db $08
.db $00
.db $08
; start of data
.db $00
; end of data
.db $0E
.db $00
.db $0E
; start of data
.db $00
.db $12
; end of data
.db $12
.db $13
; start of data
.db $00
; end of data
.db $14
.db $16
.db $17
.db $00
.db $18
.db $18
.db $19
; start of data
.db $00
; end of data
.db $00
.db $0E
.db $0E
; start of data
.db $00
; end of data
.db $18
.db $00
.db $18
; start of data
.db $00
; end of data
.db $08
.db $00
.db $08
; start of data
.db $00
; end of data
.db $0C
.db $00
.db $0C
; start of data
.db $00
; end of data
.db $10
.db $00
.db $10
; start of data
.db $00
; end of data
.db $30
.db $31
.db $31
; start of data
.db $31
; end of data
.db $31
.db $32
.db $31
.db $31
.db $31
; start of data
.db $00
; end of data
.db $00
.db $03
.db $03
.db $00
.db $00
.db $0E
.db $0E
; start of data
.db $00
; end of data
.db $10
.db $10
.db $11
; start of data
.db $00
; end of data
.db $03
; start of data
.db $00
; end of data
.db $00
.db $00
.db $00
; start of data
.db $00
; end of data
.db $09
.db $00
.db $00
.db $07
.db $00
.db $00
; start of data
.db $00
; end of data
.db $03
; start of data
.db $00
; end of data
.db $00
.db $03
; start of data
.db $00
; end of data
.db $00
.db $00
.db $00
.db $00
; start of data
.db $41
; end of data
.db $41
.db $41
.db $41
.db $0C
; start of data
.db $1F
; end of data
.db $1F
; start of data
.db $1F
; end of data
.db $1F
.db $1F
.db $41
.db $41
.db $41
.db $41
.db $0D
; start of data
.db $00
; end of data
.db $0C
.db $00
.db $0C
; start of data
.db $0A
; end of data
.db $14
; start of data
.db $09
; end of data
.db $00
; start of data
.db $10
; end of data
.db $00
; start of data
.db $07
; end of data
.db $0C
; start of data
.db $00
.db $08
; end of data
.db $08
; start of data
.db $00
; end of data
.db $00
; start of data
.db $00
.db $00
.db $21
; end of data
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
; end of data
L05108A:
    TXA 
    ASL 
    TAY 
    LDA $E497,Y
    STA $0A
    LDA $E498,Y
    STA $0B
    LDA #255
    LDY #3
L05109B:
    STA ($0A),Y
    DEY 
    BPL L05109B
    LDA #0
    STA $0400,X
    RTS 

L0510A6:
    LDX #5
    LDA #255
L0510AA:
    STA $045E,X
    STA $0452,X
    DEX 
    BPL L0510AA
    RTS 

.db $14
.db $20
; start of data
.db $30
; end of data
.db $40
.db $50
.db $60
.db $01
.db $02
; start of data
.db $03
; end of data
.db $04
.db $05
.db $06
L0510C0:
    JSR $90D0
    JSR $90C7
    RTS 

L0510C7:
    LDA #0
    STA $4A
    LDA #7
    JMP $CA94

L0510D0:
    LDA $03E5
    JSR $C34C
; start of data
.db $9E
.db $93
.db $00
.db $91
.db $2C
.db $91
.db $3E
.db $91
.db $C2
.db $94
.db $C6
.db $94
.db $CB
.db $93
.db $E4
.db $93
.db $39
.db $92
.db $42
.db $92
.db $8E
.db $92
.db $9B
.db $92
.db $AE
.db $92
.db $4E
.db $95
.db $FD
.db $93
.db $EB
.db $93
.db $25
.db $94
.db $C2
.db $94
.db $C6
.db $94
.db $EB
.db $93
.db $1C
.db $9D
; end of data
    LDA $0307
    CMP #21
    BNE L05110C
    LDA $047C
    BEQ L051112
L05110C:
    LDA #4
    STA $03E5
    RTS 

L051112:
    LDX #1
    JSR $94DB
    LDX $04A2
    CPX #1
    BNE L05112B
    INC $03E5
    LDA $33
    STA $0386
    LDA #0
    STA $0383
L05112B:
    RTS 

L05112C:
    LDA #0
    STA $0385
    LDA #37
    STA $33
    INC $03E5
    LDA #8
    STA $06D5
    RTS 

L05113E:
    LDA $36
    AND #1
    BNE L05116D
    LDA $33
    BNE L051165
    LDY $0383
    LDA $9190,Y
    CLC 
    ADC $D1
    STA $0385
    CMP #239
    BEQ L051173
    INY 
    LDA $9190,Y
    STA $33
    INY 
    STY $0383
    JMP $916D

L051165:
    LDA $0385
    STA $D1
    JMP $918F

L05116D:
    LDA #0
    STA $D1
    BEQ L05118F
L051173:
    LDA $D2
    AND #31
    STA $D2
    LDA #0
    STA $D1
    LDA #1
    STA $03E5
    LDA $0386
    STA $33
    INC $04A2
    LDA #1
    STA $06D3
L05118F:
    RTS 

; start of data
.db $00
.db $28
.db $01
.db $08
.db $02
.db $10
.db $03
.db $08
.db $02
.db $0A
.db $01
.db $08
.db $02
.db $08
.db $03
.db $08
.db $04
.db $10
.db $05
.db $08
.db $06
.db $06
.db $07
.db $04
.db $06
.db $06
.db $05
.db $08
.db $04
.db $18
.db $03
.db $20
.db $02
.db $18
.db $01
.db $2D
.db $00
.db $0A
.db $EF
; end of data
.db $AD
.db $9D
.db $04
.db $0A
.db $A8
.db $B9
.db $EB
.db $91
.db $85
.db $00
.db $B9
.db $EC
.db $91
.db $85
.db $01
.db $A9
.db $81
.db $85
.db $02
.db $A9
.db $07
.db $85
.db $03
.db $A9
.db $25
.db $85
.db $04
.db $A9
.db $00
.db $85
.db $05
.db $20
.db $09
.db $C2
.db $A9
.db $01
.db $85
.db $27
.db $EE
.db $9D
.db $04
.db $AD
.db $9D
.db $04
.db $C9
.db $02
.db $90
.db $03
.db $EE
.db $E5
.db $03
.db $60
.db $EF
.db $91
.db $14
.db $92
.db $22
.db $C1
.db $0F
.db $EB
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EC
.db $22
.db $E1
.db $0F
.db $EB
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EC
.db $00
.db $22
.db $D0
.db $0F
.db $EB
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EC
.db $22
.db $F0
.db $0F
.db $EB
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EE
.db $EC
.db $00
L051239:
    LDA $0362
    BNE L05126D
    LDX #1
    BNE L051244
    LDX #0
L051244:
    LDA $030C,X
    STA $02
    STA $03
    LDA $030A,X
    STA $00
    STA $01
    JSR $C9B6
    TXA 
    ASL 
    TAY 
    LDA $9A5F,Y
    STA $09
    STA $0781
    LDA $9A60,Y
    STA $08
    STA $0782
    LDA #8
    JSR $8306
L05126D:
    INC $03E5
    RTS 

.db $AD
.db $C6
.db $04
.db $8D
.db $A3
.db $04
.db $20
.db $01
.db $85
.db $AD
.db $A3
.db $04
.db $CD
.db $C6
.db $04
.db $F0
.db $08
.db $A2
.db $00
.db $8E
.db $9D
.db $04
.db $EE
.db $E5
.db $03
.db $8D
.db $C6
.db $04
.db $60
L05128E:
    LDX #1
    STX $0499
    DEX 
    STX $0498
    INC $03E5
    RTS 

L05129B:
    LDA $0499
    BNE L0512AD
    LDA #5
    STA $0499
    LDA #0
    STA $0498
    INC $03E5
L0512AD:
    RTS 

L0512AE:
    LDY $03E8
    BEQ L0512C8
    LDA $0305
    CMP #167
    BNE L0512C8
    LDA $032D
    BEQ L0512C5
.db $A9
.db $0E
.db $8D
.db $E5
.db $03
.db $60
L0512C5:
    JMP $9372

L0512C8:
    LDA $0320,Y
    CMP #47
    BNE L0512D2
.db $4C
.db $4F
.db $93
L0512D2:
    TAX 
    LDA $D9F4,X
    BPL L0512E6
    AND #127
    LDX $03E8
    BNE L05134F
    CMP $0304
    BEQ L051300
.db $D0
.db $69
L0512E6:
    STA $0385
    INC $0385
    LDA $04AC,Y
    TAY 
    LDA $04B0,Y
    LDX $03E8
    BEQ L0512FB
    LDA $04BA,Y
L0512FB:
    CMP $0385
    BCC L05134F
L051300:
    LDX $03E8
    LDA $0357,X
    BNE L05133B
    LDA $047C
    BNE L051315
    LDY $0320,X
    LDA $0365
    BNE L051355
L051315:
    JSR $C9B6
    LDA $047C
    BEQ L051324
L05131D:
.db $AD
.db $E8
.db $03
.db $D0
.db $2D
.db $F0
.db $4E
L051324:
    LDA $DAFD,Y
    LSR 
    LSR 
    LDY $031E,X
    BEQ L051333
.db $4A
.db $90
.db $1E
.db $B0
.db $03
L051333:
    BCC L05134F
    LSR 
    LSR 
    BCC L05134F
    BCS L051372
L05133B:
    CPX #0
    BEQ L051347
    LDX #12
    CMP #2
    BEQ L051347
.db $A2
.db $00
L051347:
    STX $0498
    LDA #5
    STA $0499
L05134F:
    LDA #14
    STA $03E5
    RTS 

L051355:
    LDA $DAFD,Y
    AND #32
    BNE L05131D
    LDA $DAFD,Y
    LSR 
    LSR 
    LSR 
    BCC L05134F
    LSR 
    BCC L05134F
    LDY $03E8
    LDA $0363,X
    CMP $0365
    BCC L05134F
L051372:
    LDA #5
    STA $0499
    LDA #0
    STA $0498
    STA $03F0
    LDA $035D
    BEQ L05139A
.db $AD
.db $E8
.db $03
.db $D0
.db $11
.db $AD
.db $F3
.db $03
.db $C9
.db $03
.db $F0
.db $0A
.db $AD
.db $5F
.db $03
.db $D0
.db $05
.db $A9
.db $01
.db $8D
.db $99
.db $03
L05139A:
    INC $03E5
    RTS 

L05139E:
    LDA $0302
    STA $03E8
    INC $03E5
    LDA #0
    STA $03EA
    STA $03ED
    STA $03E9
    STA $03F4
    STA $04A2
    STA $0399
    STA $04A4
    STA $04A7
    STA $03A1
    STA $04D6
    DEC $04D6
    RTS 

L0513CB:
    LDA #0
    STA $32
    LDA $7443
    BEQ L0513D8
    LDA #0
    BEQ L0513DE
L0513D8:
    LDX $7444
    LDA $90B4,X
L0513DE:
    STA $33
L0513E0:
    INC $03E5
L0513E3:
    RTS 

L0513E4:
    LDA $7444
    CMP #4
    BEQ L0513F6
    LDA $1E
    ASL 
    BCS L0513E0
    LDA $33
    BNE L0513E3
    BEQ L0513E0
L0513F6:
.db $A5
.db $1E
.db $0A
.db $B0
.db $E5
.db $90
.db $E6
L0513FD:
    LDA #0
    STA $33
    LDX $03E8
    LDA $0357,X
    BNE L051419
    CPX #1
    BEQ L051421
    LDA $05A0
    BEQ L051421
.db $AD
.db $20
.db $03
.db $C9
.db $2F
.db $D0
.db $08
L051419:
    LDX $7444
    LDA $90B4,X
    STA $33
L051421:
    INC $03E5
    RTS 

L051425:
    JSR $90A6
    LDA $03A1
    BEQ L05143A
.db $AE
.db $E8
.db $03
.db $F0
.db $08
.db $A2
.db $00
.db $8E
.db $A1
.db $03
.db $20
.db $85
.db $8D
L05143A:
    INC $03F3
    LDA $03F3
    CMP #3
    BNE L05145D
    LDA $0350
    BEQ L05149F
    LDA $0350
    LSR 
    STA $03E8
    JSR $94A3
    LDX $03E8
    LDA $033C,X
    BEQ L05149F
    BNE L051497
L05145D:
    CMP #4
    BEQ L05149F
    LDA $03E8
    EOR #1
    STA $03E8
    BEQ L051476
    STA $0384
    LDA $0399
    BNE L05149F
    LDA $0384
L051476:
    TAY 
    LDA $0350
    BEQ L051483
    LDA $033E,Y
    BEQ L051488
    BNE L051497
L051483:
    LDA $033C,Y
    BNE L051497
L051488:
    LDA $03E8
    BNE L05149F
    LDA $035D
    BEQ L05149F
.db $A9
.db $01
.db $8D
.db $99
.db $03
L051497:
    LDA #12
    STA $03E5
    JMP $93A7

L05149F:
    INC $03E5
    RTS 

L0514A3:
    LDY $03E8
    BNE L0514C1
    LDA $0306
    CMP #21
    BNE L0514C1
    LDA $0404
    STA $03EB
    LDA $0403
    STA $03EE
    LDA $0405
    STA $03BE
L0514C1:
    RTS 

L0514C2:
    LDX #0
    BEQ L0514E4
    LDA $0362
    BNE L0514EC
    LDX #1
    LDA $0307
    CMP #21
    BNE L0514E4
    LDA $047C
    BNE L0514E4
    BEQ L0514EC
    LDA $03E5
    CMP #14
    BCS L0514EC
    BCC L0514F0
L0514E4:
    LDA #1
    STA $03D0,X
    STA $03CD,X
L0514EC:
    INC $03E5
L0514EF:
    RTS 

L0514F0:
    LDA $33
    BNE L0514EF
    LDA $27
    BNE L0514EF
    LDA $04A2
    BNE L0514FD
L0514FD:
    LDY $04A2
    LDA $952D,Y
    BMI L05151B
    STA $03BE,X
    LDA #1
    STA $03D0,X
    STA $03CD,X
    LDA $953E,Y
    STA $33
    INC $04A2
    JMP $952C

L05151B:
    CMP #255
    BEQ L051527
    LDA $03A6
    BNE L051527
    JMP $9510

L051527:
    LDA #4
    STA $03E5
    RTS 

; start of data
.db $00
; end of data
.db $00
; start of data
.db $07
.db $08
.db $09
.db $0A
.db $09
.db $FE
.db $0A
.db $0A
.db $0B
.db $01
.db $02
.db $03
.db $04
.db $05
.db $FF
.db $40
; end of data
.db $01
; start of data
.db $01
.db $38
.db $18
.db $20
.db $18
.db $01
.db $28
.db $01
.db $01
.db $01
.db $01
.db $01
.db $20
.db $10
; end of data
L05154E:
    JSR $9555
    JSR $A05D
    RTS 

L051555:
    LDA $03E9
    BEQ L05155B
    RTS 

L05155B:
    INC $03E9
    LDX $03E8
    LDA $03EB,X
    ASL 
    TAX 
    LDA $B025,X
    STA $00
    LDA $B026,X
    STA $01
    LDA $03EA
    ASL 
    TAY 
    STY $0382
    LDA ($00),Y
    JSR $C34C
; start of data
.db $BB
.db $95
; end of data
.db $A8
.db $96
; start of data
.db $0B
.db $97
.db $1B
.db $97
.db $34
.db $97
.db $C7
.db $97
.db $E2
.db $97
.db $F4
.db $97
.db $26
.db $98
.db $30
.db $98
.db $3A
.db $98
.db $B5
.db $99
.db $BA
.db $9B
; end of data
.db $09
.db $9D
; start of data
.db $B6
.db $9B
; end of data
.db $20
.db $9D
; start of data
.db $33
.db $9D
.db $73
.db $96
.db $46
.db $9D
.db $6D
.db $9D
; end of data
.db $91
.db $9D
; start of data
.db $EE
.db $95
.db $98
.db $9D
.db $CE
.db $9D
.db $DA
.db $9D
.db $0A
.db $9E
; end of data
.db $28
.db $9E
; start of data
.db $28
.db $9E
.db $38
.db $9E
; end of data
.db $A0
.db $97
.db $86
.db $9E
L0515BB:
    LDX $03E8
    TXA 
    STA $03E2,X
    LDY $0382
    INY 
    LDA ($00),Y
    BPL L0515CF
    AND #127
    DEC $03E9
L0515CF:
    ASL 
    ASL 
    BCC L0515DD
    PHA 
    LDA $03E2,X
    EOR #1
    STA $03E2,X
    PLA 
L0515DD:
    LSR 
    LSR 
    STA $03D9,X
    LDA #1
    STA $03D6,X
    STA $03D3,X
    INC $03EA
    RTS 

L0515EE:
    LDX $03E8
    LDY $0306,X
    DEY 
    CPY #21
    BNE L0515FB
.db $A0
.db $07
L0515FB:
    LDA $966B,Y
    STA $03C0
    LDA #0
    STA $03B1
    LDY $0382
    INY 
    LDA ($00),Y
    ASL 
    TAX 
    JSR $96C5
    LDA #3
    STA $04D0
    JSR $964B
    LDX $03E8
    LDA $0306,X
    CMP #4
    BEQ L05163F
    CMP #3
    BEQ L05162B
.db $C9
.db $05
.db $D0
.db $0C
L05162B:
    JSR $C9B6
    LDA $031E,X
    BEQ L05163F
.db $A9
.db $1D
.db $D0
.db $0A
.db $AD
.db $1E
.db $03
.db $0D
.db $1F
.db $03
.db $D0
.db $05
L05163F:
    LDA #27
    STA $03DB
    DEC $03E9
    INC $03EA
    RTS 

L05164B:
    LDX $03E8
    LDY $0306,X
    DEY 
    CPY #21
    BNE L051658
.db $A0
.db $07
L051658:
    LDA $03C6
    CLC 
    ADC $9663,Y
    STA $03C6
    RTS 

.db $EB
.db $F8
; start of data
.db $EA
; end of data
.db $ED
.db $F0
.db $00
.db $E8
.db $F1
.db $08
.db $0F
; start of data
.db $08
; end of data
.db $14
.db $18
.db $00
.db $19
.db $0C
L051673:
    LDY $0382
    INY 
    LDA ($00),Y
    ASL 
    TAX 
    LDA $BCBD,X
    STA $03C0
    LDA #0
    STA $03B1
    JSR $96C5
    LDX $03E8
    BEQ L051695
    LDA $0306,X
    CMP #13
    BEQ L05169C
L051695:
    LDA $0306,X
    CMP #20
    BNE L0516A1
L05169C:
    LDA #98
    STA $03C6
L0516A1:
    DEC $03E9
    INC $03EA
    RTS 

.db $AC
.db $82
.db $03
.db $C8
.db $B1
.db $00
.db $0A
.db $AA
.db $BD
.db $BD
.db $BC
.db $8D
.db $BA
.db $03
.db $20
.db $C5
.db $96
.db $A9
.db $01
.db $8D
.db $B1
.db $03
.db $CE
.db $E9
.db $03
.db $EE
.db $EA
.db $03
.db $60
L0516C5:
    LDA $BCBE,X
    STA $03DB
    JSR $96FD
    LDX $03E8
    LDA #1
    STA $03CF
    STA $03B4
    STA $03D5
    STA $03D8
    LDA $03C1,X
    STA $03C3
    LDA $04D1,X
    STA $04D3
    LDA $04CE,X
    STA $04D0
    LDA #32
    STA $03CC
    STX $03E4
    STX $03C9
    RTS 

L0516FD:
    LDY $0382
    INY 
    LDA ($00),Y
    TAY 
    LDA $BCC5,Y
    STA $03C6
    RTS 

L05170B:
    LDY $0382
    INY 
    LDA ($00),Y
    STA $03E6
L051714:
    INC $03EA
L051717:
    DEC $03E9
    RTS 

L05171B:
    LDY $0382
    INY 
    LDA ($00),Y
    BMI L05172D
    LDX $03E8
    CMP $03BE,X
    BNE L051717
    BEQ L051714
L05172D:
    DEC $03E6
    BNE L051717
    BEQ L051714
    LDY $0382
    INY 
    LDA ($00),Y
    AND #15
    ASL 
    TAX 
    LDA $03E8
    BNE L05177A
    LDA $9790,X
    STA $03D0
    LDA $9791,X
    STA $03D1
    LDA ($00),Y
    AND #240
    LSR 
    LSR 
    LSR 
    TAX 
    LDA $03E8
    BNE L05176B
    LDA $9798,X
    STA $03CD
    LDA $9799,X
    STA $03CE
    JMP $9789

L05176B:
    LDA $9798,X
    STA $03CE
    LDA $9799,X
    STA $03CD
    JMP $9789

L05177A:
    LDA $9790,X
    STA $03D1
    LDA $9791,X
    STA $03D0
    JMP $974F

L051789:
    DEC $03E9
    INC $03EA
    RTS 

.db $00
.db $00
; start of data
.db $00
.db $01
; end of data
.db $01
.db $00
; start of data
.db $01
.db $01
.db $01
.db $01
.db $01
.db $00
; end of data
.db $00
.db $01
.db $00
.db $00
.db $AE
.db $E8
.db $03
.db $BD
.db $AF
.db $03
.db $F0
.db $18
.db $BD
.db $BE
.db $03
.db $CD
.db $D6
.db $04
.db $F0
.db $13
.db $BD
.db $BE
.db $03
.db $8D
.db $D6
.db $04
.db $A9
.db $01
.db $9D
.db $D0
.db $03
.db $9D
.db $CD
.db $03
.db $D0
.db $03
.db $EE
.db $EA
.db $03
.db $CE
.db $E9
.db $03
.db $60
L0517C7:
    LDY $0382
    INY 
    LDA ($00),Y
    LDX $03E8
    STA $03B8,X
    LDA #1
    STA $03B2,X
    STA $03AF,X
    DEC $03E9
    INC $03EA
    RTS 

L0517E2:
    LDX $03E8
    LDA $03C7,X
    EOR #1
    STA $03C7,X
    DEC $03E9
    INC $03EA
    RTS 

L0517F4:
    LDY $0382
    INY 
    LDA ($00),Y
    LSR 
    EOR $03E8
    ROL 
    ASL 
    TAY 
    LDA $9E95,Y
    STA $02
    LDA $9E96,Y
    STA $03
    LDY #0
    LDA ($02),Y
    BEQ L051818
    STA $0781,Y
    INY 
    JMP $980D

L051818:
    STA $0781,Y
    LDA #1
    STA $27
L05181F:
    DEC $03E9
    INC $03EA
    RTS 

L051826:
    LDX $03E8
    LDA #0
    STA $03AF,X
    BEQ L05181F
    LDX $03E8
    LDA #1
    STA $03AF,X
    BNE L05181F
    LDY $0382
    INY 
    LDA ($00),Y
    JSR $C34C
; start of data
.db $54
.db $98
.db $47
.db $98
; end of data
    LDA #1
    STA $0398
    STA $02
    LDX $03E8
    JMP $988B

L051854:
    LDA #0
    STA $0398
    STA $02
    LDX $03E8
    LDA $03F3
    CMP #3
    BEQ L051888
    CPX #1
    BEQ L051888
    LDA $035D
    BEQ L051888
.db $AE
.db $AC
.db $04
.db $BD
.db $B0
.db $04
.db $8D
.db $F1
.db $03
.db $E8
.db $BD
.db $B0
.db $04
.db $8D
.db $F2
.db $03
.db $8E
.db $AC
.db $04
.db $A9
.db $01
.db $8D
.db $98
.db $03
.db $D0
.db $2A
L051888:
    JSR $C9B6
    LDY $04AC,X
    CPX #1
    BEQ L0518A1
    LDA $04B0,Y
    STA $03F1
    INY 
    LDA $04B0,Y
    STA $03F2
    BPL L0518AE
L0518A1:
    LDA $04BA,Y
    STA $03F1
    INY 
    LDA $04BA,Y
    STA $03F2
L0518AE:
    TYA 
    STA $04AC,X
    LDA $02
    BNE L0518B9
    JSR $98E3
L0518B9:
    LDA $03F2
    CMP $03F1
    BCS L0518D9
    CMP #53
    BCS L0518D1
    LDA #53
    CMP $03F1
    BCS L0518D9
    STA $03F1
    BNE L0518D9
L0518D1:
    LDA #53
    STA $03F1
    STA $03F2
L0518D9:
    JSR $9A63
    DEC $03E9
    INC $03EA
    RTS 

L0518E3:
    LDX $03E8
    BNE L051901
    LDA $035D
    BEQ L051901
.db $AD
.db $F3
.db $03
.db $C9
.db $03
.db $F0
.db $0D
.db $A9
.db $05
.db $8D
.db $99
.db $04
.db $A9
.db $03
.db $8D
.db $98
.db $04
.db $4C
.db $AF
.db $99
L051901:
    LDA $03F3
    CMP #3
    BEQ L05190F
    LDA $034C,X
    BEQ L051919
    BNE L051943
L05190F:
    LDA $0350
    LSR 
    TAX 
    LDA $034E,X
    BNE L05194A
L051919:
    LDA $03E8
    BEQ L05193F
    LDA $0328
    CMP #52
    BNE L05193F
.db $A2
.db $01
.db $BD
.db $20
.db $03
.db $C9
.db $17
.db $90
.db $11
.db $C9
.db $26
.db $B0
.db $0D
.db $A9
.db $05
.db $8D
.db $99
.db $04
.db $A9
.db $0B
.db $8D
.db $98
.db $04
.db $4C
.db $AF
.db $99
L05193F:
    LDA #255
    BNE L051955
L051943:
    LDA $0353,X
    BNE L05194F
    BEQ L051953
L05194A:
    LDA $0355,X
    BEQ L051953
L05194F:
    LDA #1
    BNE L051955
L051953:
    LDA #0
L051955:
    STA $049A
    JSR $C9B6
    LDA $03F3
    CMP #3
    BEQ L051967
    LDA $0359,X
    BPL L05196A
L051967:
    LDA $035B,X
L05196A:
    STA $049B
    LDA $047C
    BEQ L05197C
.db $AD
.db $F2
.db $03
.db $38
.db $ED
.db $F1
.db $03
.db $8D
.db $9B
.db $04
L05197C:
    LDA #5
    STA $0499
    LDA #2
    STA $0498
    CPX #0
    BEQ L051991
    LDA $0320
    CMP #42
    BEQ L0519A2
L051991:
    LDA $0303
    BEQ L0519AF
.db $AD
.db $A9
.db $04
.db $F0
.db $07
.db $A9
.db $0A
.db $8D
.db $98
.db $04
.db $D0
.db $0D
L0519A2:
.db $AD
.db $20
.db $03
.db $38
.db $E9
.db $28
.db $A8
.db $B9
.db $B0
.db $99
.db $8D
.db $98
.db $04
L0519AF:
    RTS 

.db $02
.db $02
.db $05
.db $04
.db $09
L0519B5:
    LDY $0382
    INY 
    LDA ($00),Y
    BNE L0519C5
    LDA $03F6
    BEQ L0519C5
    JMP $9B86

L0519C5:
    LDX $03E8
    LDA $0398
    BNE L0519D0
    JSR $C9B6
L0519D0:
    LDA $030C,X
    STA $02
    STA $03
    LDA $03F1
    CMP $03F2
    BEQ L051A22
    BCS L0519F1
.db $A5
.db $36
.db $29
.db $03
.db $D0
.db $74
.db $A9
.db $04
.db $8D
.db $D1
.db $06
.db $EE
.db $F1
.db $03
.db $10
.db $03
L0519F1:
    DEC $03F1
    JSR $9ABD
    LDA $03F1
    STA $00
    STA $01
    CMP #53
    BCS L051A5B
    LDA $03E8
    EOR $0398
    ASL 
    TAY 
    LDA $9A5F,Y
    STA $09
    STA $0781
    LDA $9A60,Y
    STA $08
    STA $0782
    LDA #8
    JSR $8306
    JMP $9A5B

L051A22:
    LDA $03F2
    BNE L051A58
    LDA #32
    STA $33
    LDA #4
    STA $05B5
    LDX $03E8
    INX 
    STX $03F6
    LDA $0398
    BEQ L051A43
.db $A9
.db $02
.db $8D
.db $F6
.db $03
.db $D0
.db $18
L051A43:
    LDA $03F6
    CMP #2
    BEQ L051A5B
    LDA $0307
    CMP #21
    BNE L051A5B
    LDA #1
    STA $04AA
    BNE L051A5B
L051A58:
    INC $03EA
L051A5B:
    DEC $03E9
    RTS 

; start of data
.db $22
.db $E2
.db $22
.db $F1
; end of data
L051A63:
    LDA $03E8
    EOR $0398
    EOR #1
    TAX 
    LDA $030C,X
    LSR 
    LSR 
    LSR 
    CMP #6
    BCC L051A78
    LDA #7
L051A78:
    TAX 
    LDA $9AB5,X
    STA $03A4
    LDX #0
    LDA $03F1
    CMP $03F2
    BCC L051A9D
    LDA $03F2
    CMP $03A4
    BCS L051AB1
    LDA $03F1
    CMP $03A4
    BCC L051AB1
    LDX #1
    BNE L051AB1
L051A9D:
.db $AD
.db $F2
.db $03
.db $CD
.db $A4
.db $03
.db $90
.db $0C
.db $AD
.db $F1
.db $03
.db $CD
.db $A4
.db $03
.db $B0
.db $04
.db $A2
.db $02
.db $D0
.db $00
L051AB1:
    STX $03A5
    RTS 

.db $04
.db $05
; start of data
.db $07
.db $08
.db $09
.db $0B
; end of data
.db $0E
; start of data
.db $14
; end of data
L051ABD:
    LDY $03A5
    BEQ L051AE5
    LDA $03F1
    CMP $03A4
    BCS L051AD7
    CPY #1
    BNE L051AE5
    LDA #0
    JSR $9AE6
    LDA #0
    BEQ L051AE2
L051AD7:
    CPY #2
    BNE L051AE5
.db $A9
.db $02
.db $20
.db $E6
.db $9A
.db $A9
.db $00
L051AE2:
    STA $03A5
L051AE5:
    RTS 

L051AE6:
    STA $0385
    LDA $03E8
    EOR $0398
    BNE L051AFE
    LDA $03E8
    BNE L051AFC
    LDA $047C
    JMP $9AFE

L051AFC:
    EOR #1
L051AFE:
    CLC 
    ADC $0385
    TAY 
    LDA $9B2C,Y
    TAX 
    LDA $03E8
    EOR $0398
    TAY 
    LDA $9B2A,Y
    CLC 
    ADC #125
    STA $00
    LDA #125
    STA $01
    LDY #3
L051B1C:
    LDA $9B30,X
    STA ($00),Y
    DEX 
    DEY 
    BPL L051B1C
    LDA #128
    STA $28
    RTS 

; start of data
.db $0F
.db $0B
.db $03
.db $07
.db $0B
.db $0F
.db $0F
.db $30
.db $16
.db $05
.db $0F
.db $30
.db $11
.db $0C
.db $0F
.db $30
.db $26
.db $16
.db $0F
.db $30
.db $22
.db $11
; end of data
L051B40:
    LDY #1
L051B42:
    LDA $030C,Y
    LSR 
    LSR 
    LSR 
    CMP #6
    BCC L051B4E
    LDA #7
L051B4E:
    TAX 
    LDA $9AB5,X
    CMP $030A,Y
    BEQ L051B59
    BCS L051B5D
L051B59:
    LDA #2
    BNE L051B5F
L051B5D:
    LDA #0
L051B5F:
    CPY #0
    BEQ L051B6A
    CLC 
    ADC $047C
    JMP $9B6D

L051B6A:
    CLC 
    ADC #1
    TAX 
    LDA $9B2C,X
    TAX 
    STY $0383
    TYA 
    EOR #1
    TAY 
    JSR $9B0E
    LDY $0383
    DEY 
    BPL L051B42
    INC $04C6
    RTS 

L051B86:
    JSR $9EF1
    LDA $04AA
    BEQ L051B8F
    RTS 

L051B8F:
    LDA $33
    BNE L051BB2
    LDA #4
    STA $0381
    LDX #0
    LDA $03F6
    LSR 
    BCC L051BA7
    LDA #8
    STA $0381
    LDX #4
L051BA7:
    JSR $9F50
    LDA $05B5
    BNE L051BB2
    INC $03EA
L051BB2:
    DEC $03E9
    RTS 

L051BB6:
    INC $03E5
    RTS 

L051BBA:
    LDX $03E8
    LDA $03F3
    CMP #3
    BEQ L051BD4
    CPX #1
    BEQ L051BCD
    LDA $035D
    BNE L051BDE
L051BCD:
    LDA $034C,X
    BEQ L051C18
    BNE L051BDE
L051BD4:
    LDA $0350
    LSR 
    TAX 
    LDA $034E,X
    BEQ L051C18
L051BDE:
    LDA $03F4
    BNE L051BEB
    LDA $0303
    BNE L051BEB
    JSR $9C3E
L051BEB:
    JSR $9CA0
    LDX $03F4
    CMP #10
    BEQ L051BFF
    INC $03F4
    LDA $9C33,X
    STA $D1
    BNE L051C2F
L051BFF:
    LDA #0
    STA $D0
    STA $D1
    STA $03F5
    LDA $D2
    AND #223
    STA $D2
    LDX #1
L051C10:
    JSR $8D85
    DEX 
    BPL L051C10
    BMI L051C22
L051C18:
    LDA $0303
    BNE L051C22
    LDA #8
    STA $06D4
L051C22:
    LDA $03A1
    BEQ L051C2C
.db $A9
.db $26
.db $20
.db $CD
.db $AF
L051C2C:
    INC $03EA
L051C2F:
    DEC $03E9
    RTS 

; start of data
.db $03
.db $01
.db $02
.db $01
.db $03
.db $01
.db $02
.db $04
.db $02
.db $01
.db $00
; end of data
L051C3E:
    LDA $0303
    BNE L051C8B
    LDA $03F3
    CMP #3
    BEQ L051C5C
    LDX $03E8
    BNE L051C52
    JSR $9C8C
L051C52:
    JSR $C9B6
    LDA $0359,X
    BNE L051C70
.db $F0
.db $0D
L051C5C:
    LDA $0350
    LSR 
    TAX 
    JSR $C9B6
    LDA $035B,X
    BNE L051C7A
.db $A9
.db $08
.db $8D
.db $D4
.db $06
.db $D0
.db $1B
L051C70:
    JSR $C9B6
    LDA $0353,X
    BNE L051C86
    BEQ L051C82
L051C7A:
    JSR $C9B6
    LDA $0355,X
    BNE L051C86
L051C82:
    LDA #29
    BNE L051C88
L051C86:
    LDA #12
L051C88:
    STA $04A6
L051C8B:
    RTS 

L051C8C:
    LDA $035D
    BEQ L051C9F
.db $AD
.db $F3
.db $03
.db $C9
.db $03
.db $F0
.db $07
.db $A9
.db $08
.db $8D
.db $D0
.db $06
.db $68
.db $68
L051C9F:
    RTS 

L051CA0:
    LDA $36
    AND #3
    TAX 
    LDA #0
    STA $03F5
    LDX $03E8
    BNE L051CBE
    LDY $03F3
    CPY #3
    BEQ L051CBE
    LDY $035D
    BNE L051CBE
    JSR $C9B6
L051CBE:
    JSR $8D85
    LDA $9D05,X
    STA $03F5
    LDX $03E8
    BNE L051CD8
    LDY $03F3
    CPY #3
    BEQ L051CD8
    LDA $035D
    BNE L051CDB
L051CD8:
    JSR $C9B6
L051CDB:
    JSR $8D8D
    LDA $035D
    BEQ L051D04
.db $AD
.db $E8
.db $03
.db $D0
.db $1C
.db $AD
.db $F3
.db $03
.db $C9
.db $03
.db $F0
.db $15
.db $A5
.db $36
.db $29
.db $02
.db $F0
.db $09
.db $A5
.db $D2
.db $09
.db $20
.db $85
.db $D2
.db $4C
.db $04
.db $9D
.db $A5
.db $D2
.db $29
.db $DF
.db $85
.db $D2
L051D04:
    RTS 

; start of data
.db $00
.db $01
; end of data
.db $02
.db $03
.db $AC
.db $82
.db $03
.db $C8
.db $B1
.db $00
.db $AE
.db $E8
.db $03
.db $9D
.db $CA
.db $03
.db $EE
.db $EA
.db $03
.db $CE
.db $E9
.db $03
.db $60
L051D1C:
    INC $04C6
    RTS 

.db $AC
.db $82
.db $03
.db $C8
.db $B1
.db $00
.db $AE
.db $E8
.db $03
.db $9D
.db $C1
.db $03
.db $EE
.db $EA
.db $03
.db $CE
.db $E9
.db $03
.db $60
L051D33:
    LDY $0382
    INY 
    LDA ($00),Y
    LDX $03E8
    STA $03BE,X
    INC $03EA
    DEC $03E9
    RTS 

L051D46:
    LDX $03E8
    LDA $03F3
    CMP #3
    BEQ L051D57
    LDA $034C,X
    BNE L051D61
    BEQ L051D5C
L051D57:
    LDA $034E,X
    BNE L051D61
L051D5C:
    LDA $03D5
    BNE L051D69
L051D61:
    LDA #0
    STA $03CF
    INC $03EA
L051D69:
    DEC $03E9
    RTS 

L051D6D:
    LDA $03E8
    BNE L051D7F
    LDA $03C3
    SEC 
    SBC #16
    CMP $03C2
    BCS L051D8D
    BCC L051D8A
L051D7F:
    LDA $03C3
    CLC 
    ADC #16
    CMP $03C1
    BCC L051D8D
L051D8A:
    INC $03EA
L051D8D:
    DEC $03E9
    RTS 

.db $AD
.db $D5
.db $03
.db $D0
.db $F7
.db $F0
.db $F2
L051D98:
    LDX $03E8
    LDY $0306,X
    CPY #22
    BNE L051DA6
.db $A9
.db $0E
.db $D0
.db $03
L051DA6:
    DEY 
    TYA 
    ASL 
    LDY $0382
    INY 
    CLC 
    ADC ($00),Y
    TAY 
    LDA $9DBE,Y
    STA $03BE,X
    INC $03EA
    DEC $03E9
    RTS 

.db $08
.db $09
.db $0E
.db $0F
; start of data
.db $12
.db $13
; end of data
.db $14
.db $15
.db $18
.db $19
.db $00
.db $00
.db $18
.db $19
.db $0C
.db $0D
L051DCE:
    LDA $03F0
    BEQ L051DD6
    INC $03EA
L051DD6:
    DEC $03E9
    RTS 

L051DDA:
    LDX $03E8
    LDA $03EE,X
    SEC 
    SBC #6
    TAX 
    LDA $9DF7,X
    CPX #23
    BCC L051DED
.db $A9
.db $20
L051DED:
    STA $03E6
    INC $03EA
    DEC $03E9
    RTS 

.db $20
.db $20
.db $30
.db $30
.db $20
.db $20
.db $20
.db $20
.db $20
.db $40
; start of data
.db $20
; end of data
.db $30
.db $18
.db $20
.db $70
.db $10
.db $08
.db $20
.db $20
L051E0A:
    LDY $0382
    INY 
    LDA ($00),Y
    ASL 
    TAX 
    LDY $03E8
    LDA $9E22,X
    STA $03BE,Y
    INC $03EA
    DEC $03E9
    RTS 

; start of data
.db $00
; end of data
.db $03
; start of data
.db $01
; end of data
.db $04
; start of data
.db $02
; end of data
.db $05
L051E28:
    LDY $0382
    INY 
    LDA ($00),Y
    STA $04A6
    INC $03EA
    DEC $03E9
    RTS 

L051E38:
    LDA $04CD
    BEQ L051E71
.db $AD
.db $E6
.db $03
.db $0A
.db $85
.db $08
.db $A5
.db $36
.db $29
.db $01
.db $18
.db $65
.db $08
.db $AA
.db $AD
.db $06
.db $03
.db $C9
.db $05
.db $F0
.db $04
.db $A9
.db $B0
.db $D0
.db $02
.db $A9
.db $B8
.db $18
.db $7D
.db $78
.db $9E
.db $8D
.db $C1
.db $03
.db $A5
.db $34
.db $D0
.db $11
.db $A9
.db $10
.db $85
.db $34
.db $EE
.db $E6
.db $03
.db $AD
.db $E6
.db $03
.db $C9
.db $07
.db $90
.db $03
L051E71:
    INC $03EA
    DEC $03E9
    RTS 

.db $0C
.db $F4
.db $0A
.db $F6
.db $08
.db $F8
.db $06
.db $FA
.db $04
.db $FC
.db $02
.db $FE
.db $00
.db $00
.db $A9
.db $01
.db $8D
.db $D0
.db $03
.db $8D
.db $CD
.db $03
.db $EE
.db $EA
.db $03
.db $CE
.db $E9
.db $03
.db $60
; start of data
.db $9D
.db $9E
.db $B2
.db $9E
.db $C7
.db $9E
.db $DC
.db $9E
.db $20
.db $F3
.db $4B
.db $FF
.db $21
.db $13
.db $4B
.db $FF
.db $21
.db $33
.db $4B
.db $FF
.db $21
.db $53
.db $4B
.db $FF
.db $21
.db $73
.db $45
.db $FF
.db $00
.db $21
.db $78
.db $46
.db $FF
.db $21
.db $93
.db $4B
.db $FF
.db $21
.db $B2
.db $4C
.db $FF
.db $21
.db $D3
.db $4B
.db $FF
.db $21
.db $F3
.db $4B
.db $FF
.db $00
.db $20
.db $E2
.db $4B
.db $FF
.db $21
.db $02
.db $4B
.db $FF
.db $21
.db $22
.db $4B
.db $FF
.db $21
.db $42
.db $4B
.db $FF
.db $21
.db $62
.db $46
.db $FF
.db $00
.db $21
.db $68
.db $45
.db $FF
.db $21
.db $82
.db $4B
.db $FF
.db $21
.db $A2
.db $4C
.db $FF
.db $21
.db $C2
.db $4B
.db $FF
.db $21
.db $E2
.db $4B
.db $FF
.db $00
; end of data
L051EF1:
    LDA $04AA
    JSR $C34C
; start of data
.db $3D
.db $C7
.db $0F
.db $9F
.db $1A
.db $9F
.db $25
.db $9F
.db $35
.db $9F
.db $C4
.db $9F
.db $74
.db $9F
.db $D3
.db $9F
.db $F7
.db $9F
.db $38
.db $A0
.db $23
.db $A0
.db $57
.db $A0
; end of data
    LDA #128
    STA $33
    INC $04AA
    DEC $03E9
    RTS 

L051F1A:
    LDA $33
    BNE L051F21
    INC $04AA
L051F21:
    DEC $03E9
    RTS 

L051F25:
    LDA $33
    BNE L051F31
    LDA #4
    STA $05B5
    INC $04AA
L051F31:
    DEC $03E9
    RTS 

L051F35:
    LDA #16
    STA $0381
    LDX #8
    JSR $9F50
    LDA $05B5
    BNE L051F4C
    LDA #1
    STA $06D3
    INC $04AA
L051F4C:
    DEC $03E9
    RTS 

L051F50:
    LDA $36
    AND #7
    BNE L051F73
    DEC $05B5
L051F59:
    LDA $7D80,X
    CMP #16
    BCC L051F64
    SBC #16
    BPL L051F66
L051F64:
    LDA #15
L051F66:
    STA $7D80,X
    INX 
    CPX $0381
    BNE L051F59
    LDA #128
    STA $28
L051F73:
    RTS 

L051F74:
    LDA $27
    BNE L051FB0
    LDA $03A3
    ASL 
    TAX 
    LDA $9FB4,X
    STA $0781
    LDA $9FB5,X
    STA $0782
    LDA #48
    STA $0783
    TAX 
    LDY #4
    LDA #255
L051F93:
    STA $0780,Y
    INY 
    DEX 
    BNE L051F93
    LDA #0
    STA $0780,Y
    LDA #1
    STA $27
    INC $03A3
    LDA $03A3
    CMP #8
    BNE L051FB0
    INC $04AA
L051FB0:
    DEC $03E9
    RTS 

; start of data
.db $22
.db $00
.db $22
.db $30
.db $22
.db $60
.db $22
.db $90
.db $22
.db $C0
.db $22
.db $F0
.db $23
.db $20
.db $23
.db $50
; end of data
L051FC4:
    LDA #0
    STA $04C5
    STA $04C4
    INC $04AA
    DEC $03E9
    RTS 

L051FD3:
    INC $03C1
    LDA $D1
    SEC 
    SBC #1
    STA $D1
    BPL L051FE5
    LDA $D3
    ORA #1
    STA $D3
L051FE5:
    LDA $D3
    LSR 
    BCC L051FF3
    LDA $D1
    CMP #200
    BNE L051FF3
    INC $04AA
L051FF3:
    DEC $03E9
    RTS 

L051FF7:
    DEC $03C4
    LDA $D0
    CLC 
    ADC #1
    STA $D0
    BNE L052009
.db $A9
.db $FE
.db $25
.db $D3
.db $85
.db $D3
L052009:
    LDA $D3
    LSR 
    LSR 
    BCS L05201F
    LDA $D0
    CMP #32
    BNE L05201F
    BEQ L052017
L052017:
    INC $04AA
    LDA #0
    STA $05B5
L05201F:
    DEC $03E9
    RTS 

L052023:
    LDX #15
    LDY #1
    JSR $9B0E
    LDX #11
    LDY #0
    JSR $9B0E
    INC $04AA
    DEC $03E9
    RTS 

L052038:
    LDA $27
    BNE L05204B
    LDY #5
L05203E:
    LDA $A052,Y
    STA $0781,Y
    DEY 
    BPL L05203E
    LDA #1
    STA $27
L05204B:
    INC $04AA
    DEC $03E9
    RTS 

; start of data
.db $20
.db $10
.db $D0
.db $FF
.db $00
; end of data
L052057:
    LDA #1
    STA $03AA
    RTS 

L05205D:
    LDX $03E8
    LDA $03EE,X
    ASL 
    TAX 
    LDA $BAB8,X
    STA $00
    LDA $BAB9,X
    STA $01
    LDA $03ED
    ASL 
    TAY 
    STY $0382
    LDA ($00),Y
    JSR $C34C
; start of data
.db $3D
.db $C7
.db $04
.db $A1
.db $11
.db $A1
; end of data
.db $29
.db $A1
.db $CC
.db $A1
.db $06
.db $A2
.db $33
.db $A2
.db $7B
.db $A2
.db $50
.db $A3
; start of data
.db $80
.db $A3
.db $A2
.db $A3
.db $E2
.db $A3
; end of data
.db $00
.db $A4
.db $00
.db $A4
; start of data
.db $48
.db $A4
; end of data
.db $51
.db $A4
.db $51
.db $A4
.db $51
.db $A4
.db $7C
.db $A4
.db $01
.db $A5
.db $3E
.db $A5
; start of data
.db $8F
.db $AF
.db $C4
.db $AF
; end of data
.db $D0
.db $A4
.db $4F
.db $A5
; start of data
.db $A8
.db $A5
; end of data
.db $CA
.db $A5
; start of data
.db $01
.db $A6
; end of data
.db $0E
.db $A6
.db $0E
.db $A6
.db $0E
.db $A6
.db $42
.db $A6
.db $63
.db $A6
.db $93
.db $A6
.db $CA
.db $A6
.db $5F
.db $A7
.db $D8
.db $A7
.db $D8
.db $A7
.db $D8
.db $A7
.db $0C
.db $A8
.db $29
.db $A8
.db $63
.db $A8
.db $8F
.db $A8
.db $AB
.db $A8
.db $D7
.db $A8
.db $06
.db $A9
.db $19
.db $A9
.db $34
.db $A9
.db $CC
.db $A9
.db $55
.db $AA
.db $7C
.db $AA
.db $98
.db $AA
.db $40
.db $AB
.db $58
.db $AB
.db $95
.db $AB
; start of data
.db $A8
.db $AB
; end of data
.db $0F
.db $AC
.db $41
.db $AC
.db $C9
.db $AC
.db $0A
.db $AD
.db $9F
.db $AD
.db $D4
.db $AD
; start of data
.db $2E
.db $AE
.db $7D
.db $AE
.db $BE
.db $AE
.db $DC
.db $AE
; end of data
.db $F2
.db $AE
.db $4B
.db $AF
L052104:
    LDY $0382
    INY 
    LDA ($00),Y
    STA $03E7
    INC $03ED
    RTS 

L052111:
    LDY $0382
    INY 
    LDA ($00),Y
    BMI L052120
    CMP $03EA
    BNE L052128
    BEQ L052125
L052120:
    DEC $03E7
    BNE L052128
L052125:
    INC $03ED
L052128:
    RTS 

.db $A5
.db $36
.db $29
.db $01
.db $D0
.db $67
.db $A9
.db $27
.db $20
.db $F7
.db $AF
.db $A9
.db $02
.db $8D
.db $D0
.db $06
.db $20
.db $4E
.db $C0
.db $29
.db $03
.db $AA
.db $BD
.db $C8
.db $A1
.db $8D
.db $5E
.db $04
.db $A9
.db $00
.db $8D
.db $70
.db $04
.db $A9
.db $10
.db $8D
.db $00
.db $B0
.db $AD
.db $E8
.db $03
.db $0A
.db $AA
.db $BD
.db $97
.db $A1
.db $85
.db $00
.db $BD
.db $98
.db $A1
.db $85
.db $01
.db $AE
.db $E8
.db $03
.db $BD
.db $06
.db $03
.db $C9
.db $0B
.db $D0
.db $0E
.db $BD
.db $20
.db $03
.db $C9
.db $18
.db $D0
.db $04
.db $A9
.db $16
.db $D0
.db $03
.db $BD
.db $06
.db $03
.db $38
.db $E9
.db $08
.db $A8
.db $BD
.db $C1
.db $03
.db $18
.db $71
.db $00
.db $8D
.db $64
.db $04
.db $B9
.db $B9
.db $A1
.db $8D
.db $6A
.db $04
.db $CE
.db $E7
.db $03
.db $D0
.db $08
.db $A9
.db $FF
.db $8D
.db $5E
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $9B
.db $A1
.db $AA
.db $A1
.db $03
.db $03
.db $0B
.db $04
.db $00
.db $00
.db $06
.db $FF
.db $01
.db $00
.db $00
.db $10
.db $08
.db $06
.db $04
.db $FD
.db $0A
.db $05
.db $FC
.db $00
.db $00
.db $FB
.db $01
.db $00
.db $00
.db $00
.db $F0
.db $F8
.db $00
.db $FC
.db $0A
.db $0A
.db $20
.db $07
.db $00
.db $00
.db $08
.db $19
.db $1F
.db $00
.db $00
.db $18
.db $15
.db $08
.db $17
.db $4B
.db $4C
.db $4B
.db $4D
.db $A9
.db $01
.db $8D
.db $F0
.db $03
.db $A5
.db $36
.db $29
.db $01
.db $D0
.db $2E
.db $20
.db $4E
.db $C0
.db $29
.db $03
.db $18
.db $69
.db $47
.db $8D
.db $5E
.db $04
.db $A9
.db $10
.db $8D
.db $00
.db $B0
.db $AE
.db $E8
.db $03
.db $20
.db $B6
.db $C9
.db $BD
.db $C1
.db $03
.db $8D
.db $64
.db $04
.db $A9
.db $00
.db $8D
.db $6A
.db $04
.db $CE
.db $E7
.db $03
.db $D0
.db $08
.db $A9
.db $FF
.db $8D
.db $5E
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $20
.db $72
.db $AF
.db $B0
.db $24
.db $A2
.db $01
.db $8E
.db $4B
.db $04
.db $8E
.db $4C
.db $04
.db $CA
.db $8E
.db $52
.db $04
.db $8E
.db $58
.db $04
.db $AD
.db $C2
.db $03
.db $8D
.db $64
.db $04
.db $A9
.db $78
.db $8D
.db $6A
.db $04
.db $A9
.db $0D
.db $8D
.db $00
.db $B0
.db $A9
.db $17
.db $20
.db $F7
.db $AF
.db $EE
.db $ED
.db $03
.db $60
.db $20
.db $69
.db $A2
.db $AE
.db $E8
.db $03
.db $BD
.db $20
.db $03
.db $A0
.db $01
.db $C9
.db $29
.db $F0
.db $01
.db $C8
.db $8C
.db $52
.db $04
.db $BD
.db $C1
.db $03
.db $18
.db $7D
.db $67
.db $A2
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $8D
.db $6A
.db $04
.db $8E
.db $70
.db $04
.db $A9
.db $24
.db $20
.db $F7
.db $AF
.db $A9
.db $17
.db $8D
.db $00
.db $B0
.db $EE
.db $ED
.db $03
.db $60
.db $F2
.db $0E
L052269:
    LDY #0
    PHA 
    LDA #1
    STA $044C,Y
    STA $044B
    LDA #0
    STA $0458,Y
    PLA 
    RTS 

.db $A9
.db $01
.db $8D
.db $E7
.db $03
.db $AC
.db $82
.db $03
.db $C8
.db $B1
.db $00
.db $CD
.db $5E
.db $04
.db $D0
.db $39
.db $20
.db $69
.db $A2
.db $AE
.db $E8
.db $03
.db $20
.db $B6
.db $C9
.db $BD
.db $C1
.db $03
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $69
.db $18
.db $8D
.db $6A
.db $04
.db $20
.db $B6
.db $C9
.db $BD
.db $20
.db $03
.db $C9
.db $29
.db $D0
.db $02
.db $A2
.db $04
.db $C9
.db $28
.db $D0
.db $02
.db $A2
.db $05
.db $C9
.db $2C
.db $F0
.db $02
.db $D0
.db $03
.db $20
.db $C5
.db $A2
.db $8E
.db $52
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $20
.db $B6
.db $C9
.db $A0
.db $60
.db $8C
.db $E7
.db $03
.db $AD
.db $62
.db $03
.db $0A
.db $A8
.db $B9
.db $2A
.db $A3
.db $85
.db $04
.db $B9
.db $2B
.db $A3
.db $85
.db $05
.db $B9
.db $2E
.db $A3
.db $85
.db $06
.db $B9
.db $2F
.db $A3
.db $85
.db $07
.db $A0
.db $05
.db $AD
.db $62
.db $03
.db $F0
.db $04
.db $A9
.db $05
.db $D0
.db $02
.db $A9
.db $03
.db $99
.db $52
.db $04
.db $20
.db $6B
.db $A2
.db $20
.db $4E
.db $C0
.db $29
.db $0F
.db $8D
.db $84
.db $03
.db $AD
.db $62
.db $03
.db $F0
.db $06
.db $B9
.db $4A
.db $A3
.db $8D
.db $84
.db $03
.db $AD
.db $84
.db $03
.db $99
.db $4C
.db $04
.db $BD
.db $C1
.db $03
.db $18
.db $71
.db $04
.db $99
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $71
.db $06
.db $99
.db $6A
.db $04
.db $88
.db $10
.db $C1
.db $A2
.db $04
.db $60
.db $32
.db $A3
.db $3E
.db $A3
.db $38
.db $A3
.db $44
.db $A3
.db $00
.db $10
.db $F0
.db $F0
.db $20
.db $F8
.db $18
.db $20
.db $30
.db $00
.db $08
.db $F8
.db $00
.db $40
.db $F8
.db $60
.db $20
.db $E8
.db $18
.db $00
.db $20
.db $D8
.db $E8
.db $E0
.db $08
.db $10
.db $18
.db $20
.db $28
.db $30
.db $AE
.db $E8
.db $03
.db $BD
.db $C1
.db $03
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $8D
.db $6A
.db $04
.db $A9
.db $06
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $A9
.db $17
.db $20
.db $F7
.db $AF
.db $A9
.db $17
.db $8D
.db $00
.db $B0
.db $A9
.db $00
.db $8D
.db $7D
.db $04
.db $8D
.db $7E
.db $04
.db $8D
.db $7F
.db $04
.db $EE
.db $ED
.db $03
.db $60
L052380:
    JSR $81F2
    BCS L05238C
    LDX #0
    JSR $A422
    BCC L0523A1
L05238C:
    LDX #5
    LDA #255
L052390:
    STA $0452,X
    STA $045E,X
    DEX 
    BPL L052390
    LDA #1
    STA $03F0
    INC $03ED
L0523A1:
    RTS 

L0523A2:
    LDX $03E8
    STX $0470
    LDA $03C1,X
    CLC 
    ADC $A3DE,X
    STA $0464
    LDA $03C4,X
    CLC 
    ADC $A3E0,X
    STA $046A
    LDA #7
    STA $0452
    JSR $A269
    LDA #24
    JSR $AFF7
    LDA #23
    STA $B000
    LDX #1
    STX $047D
    DEX 
    STX $047E
    STX $047F
    INC $03ED
    RTS 

; start of data
.db $F0
; end of data
.db $10
; start of data
.db $20
; end of data
.db $20
L0523E2:
    LDA #8
    STA $0452
    LDY #0
    LDX $03E8
    TXA 
    STA $0470
    JSR $C9B6
    LDA $03C1,X
    STA $0464,Y
    JSR $A26B
    INC $03ED
    RTS 

.db $A2
.db $04
.db $20
.db $F8
.db $AB
.db $AA
.db $AD
.db $7E
.db $04
.db $9D
.db $86
.db $04
.db $20
.db $22
.db $A4
.db $CA
.db $10
.db $F0
.db $A2
.db $00
.db $20
.db $22
.db $A4
.db $90
.db $08
.db $A9
.db $01
.db $8D
.db $F0
.db $03
.db $EE
.db $ED
.db $03
.db $60
L052422:
    LDA $0464,X
    LDY $03E8
    BNE L052434
    JSR $C9AF
    CMP $03C1,Y
    BCC L05243C
    BCS L052446
L052434:
    JSR $C9AF
    CMP $03C1,Y
    BCC L052446
L05243C:
    LDA #255
    STA $0452,X
    STA $045E,X
    SEC 
    RTS 

L052446:
    CLC 
    RTS 

L052448:
    LDA #1
    STA $03F0
    INC $03ED
    RTS 

.db $A9
.db $0D
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $A9
.db $17
.db $8D
.db $00
.db $B0
.db $A9
.db $1B
.db $20
.db $F7
.db $AF
.db $AE
.db $E8
.db $03
.db $BD
.db $C1
.db $03
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $8D
.db $6A
.db $04
.db $AD
.db $E8
.db $03
.db $8D
.db $70
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $AD
.db $E8
.db $03
.db $49
.db $01
.db $AA
.db $A0
.db $05
.db $BD
.db $C1
.db $03
.db $38
.db $E9
.db $04
.db $99
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $79
.db $B7
.db $A4
.db $99
.db $6A
.db $04
.db $A9
.db $00
.db $99
.db $70
.db $04
.db $A9
.db $0E
.db $99
.db $52
.db $04
.db $20
.db $6B
.db $A2
.db $B9
.db $B1
.db $A4
.db $99
.db $4C
.db $04
.db $88
.db $10
.db $D7
.db $EE
.db $ED
.db $03
.db $60
; start of data
.db $01
.db $0A
.db $14
.db $1E
; end of data
.db $28
.db $32
.db $F0
.db $F8
.db $00
.db $08
.db $10
.db $18
.db $A9
.db $00
.db $8D
.db $7E
.db $04
.db $8D
.db $7F
.db $04
.db $A9
.db $0C
.db $8D
.db $00
.db $B0
.db $EE
.db $ED
.db $03
.db $60
.db $E0
.db $28
.db $A9
.db $1E
.db $20
.db $F7
.db $AF
.db $AE
.db $E8
.db $03
.db $BC
.db $06
.db $03
.db $BD
.db $C1
.db $03
.db $18
.db $7D
.db $FF
.db $A4
.db $8D
.db $64
.db $04
.db $AD
.db $C4
.db $03
.db $8D
.db $6A
.db $04
.db $8E
.db $70
.db $04
.db $A9
.db $18
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $A9
.db $0C
.db $8D
.db $00
.db $B0
.db $EE
.db $ED
.db $03
.db $60
.db $EC
.db $1C
.db $A9
.db $27
.db $20
.db $F7
.db $AF
.db $AE
.db $E8
.db $03
.db $A0
.db $02
.db $A9
.db $15
.db $99
.db $52
.db $04
.db $20
.db $6B
.db $A2
.db $BD
.db $C1
.db $03
.db $18
.db $7D
.db $CE
.db $A4
.db $99
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $79
.db $3B
.db $A5
.db $99
.db $6A
.db $04
.db $8A
.db $99
.db $70
.db $04
.db $A9
.db $06
.db $99
.db $80
.db $04
.db $A9
.db $00
.db $99
.db $86
.db $04
.db $88
.db $10
.db $D3
.db $4C
.db $BD
.db $A4
.db $00
.db $0C
.db $F6
.db $A2
.db $02
.db $4C
.db $02
.db $A4
.db $A2
.db $05
.db $20
.db $3C
.db $A4
.db $CA
.db $10
.db $FA
.db $EE
.db $ED
.db $03
.db $60
.db $A5
.db $33
.db $F0
.db $08
.db $A9
.db $25
.db $20
.db $E2
.db $AF
.db $4C
.db $86
.db $A5
.db $A9
.db $00
.db $8D
.db $F5
.db $03
.db $AC
.db $07
.db $03
.db $A2
.db $01
.db $8E
.db $80
.db $03
.db $20
.db $FB
.db $8D
.db $20
.db $56
.db $8E
.db $20
.db $E2
.db $AF
.db $AE
.db $A4
.db $04
.db $BD
.db $87
.db $A5
.db $10
.db $08
.db $A9
.db $25
.db $20
.db $E2
.db $AF
.db $EE
.db $ED
.db $03
.db $85
.db $33
.db $EE
.db $A4
.db $04
.db $60
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
.db $02
.db $02
.db $02
.db $03
.db $03
.db $03
.db $03
.db $03
.db $03
.db $04
.db $04
.db $04
.db $04
.db $04
.db $05
.db $05
.db $05
.db $06
.db $06
.db $FF
L0525A8:
    LDY $0382
    INY 
    DEC $03E7
    BEQ L0525C0
    LDA $36
    AND #3
    BNE L0525C9
    LDA $D2
    EOR ($00),Y
    STA $D2
    JMP $A5C9

L0525C0:
    LDA $D2
    AND #31
    STA $D2
    INC $03ED
L0525C9:
    RTS 

.db $CE
.db $E7
.db $03
.db $AD
.db $E7
.db $03
.db $F0
.db $1D
.db $A5
.db $36
.db $29
.db $03
.db $D0
.db $1F
.db $AE
.db $A4
.db $04
.db $BD
.db $F8
.db $A5
.db $30
.db $08
.db $20
.db $E2
.db $AF
.db $EE
.db $A4
.db $04
.db $10
.db $0F
.db $A9
.db $00
.db $8D
.db $A4
.db $04
.db $F0
.db $E3
.db $A2
.db $01
.db $20
.db $8D
.db $8D
.db $EE
.db $ED
.db $03
.db $60
.db $1A
.db $18
.db $1D
.db $1F
.db $2E
.db $2A
.db $2D
.db $28
.db $FF
L052601:
    LDY $0382
    INY 
    LDA ($00),Y
    STA $04A6
    INC $03ED
    RTS 

.db $20
.db $69
.db $A2
.db $A0
.db $22
.db $8C
.db $52
.db $04
.db $AE
.db $E8
.db $03
.db $20
.db $B6
.db $C9
.db $BD
.db $C1
.db $03
.db $18
.db $69
.db $08
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $69
.db $04
.db $8D
.db $6A
.db $04
.db $20
.db $B6
.db $C9
.db $8E
.db $70
.db $04
.db $A9
.db $1A
.db $20
.db $F7
.db $AF
.db $A9
.db $10
.db $8D
.db $00
.db $B0
.db $EE
.db $ED
.db $03
.db $60
.db $20
.db $69
.db $A2
.db $A0
.db $23
.db $8C
.db $52
.db $04
.db $AE
.db $E8
.db $03
.db $BD
.db $C1
.db $03
.db $18
.db $69
.db $00
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $69
.db $F8
.db $8D
.db $6A
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $AE
.db $E8
.db $03
.db $A9
.db $00
.db $8D
.db $76
.db $04
.db $BD
.db $C1
.db $03
.db $18
.db $69
.db $18
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $69
.db $08
.db $8D
.db $6A
.db $04
.db $A9
.db $24
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $A9
.db $1D
.db $20
.db $F7
.db $AF
.db $A9
.db $10
.db $8D
.db $00
.db $B0
.db $EE
.db $ED
.db $03
.db $60
.db $AD
.db $64
.db $04
.db $18
.db $69
.db $02
.db $8D
.db $64
.db $04
.db $A2
.db $00
.db $20
.db $22
.db $A4
.db $90
.db $26
.db $AE
.db $E8
.db $03
.db $20
.db $B6
.db $C9
.db $BD
.db $C1
.db $03
.db $18
.db $69
.db $08
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $18
.db $69
.db $08
.db $8D
.db $6A
.db $04
.db $20
.db $B6
.db $C9
.db $A9
.db $25
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $EE
.db $ED
.db $03
.db $60
.db $A2
.db $00
.db $AD
.db $12
.db $03
.db $DD
.db $10
.db $A7
.db $90
.db $06
.db $E8
.db $E0
.db $03
.db $D0
.db $F3
.db $CA
.db $BD
.db $13
.db $A7
.db $8D
.db $AB
.db $03
.db $BD
.db $16
.db $A7
.db $8D
.db $AD
.db $03
.db $AC
.db $AB
.db $03
.db $20
.db $2B
.db $A7
.db $B9
.db $19
.db $A7
.db $99
.db $86
.db $04
.db $88
.db $10
.db $F4
.db $A9
.db $1C
.db $20
.db $F7
.db $AF
.db $A9
.db $0E
.db $8D
.db $00
.db $B0
.db $EE
.db $ED
.db $03
.db $A9
.db $01
.db $8D
.db $D4
.db $06
.db $A9
.db $00
.db $8D
.db $9D
.db $03
.db $8D
.db $9E
.db $03
.db $60
.db $14
.db $1E
.db $28
.db $02
.db $04
.db $05
.db $0E
.db $16
.db $20
.db $00
.db $18
.db $0C
.db $12
.db $06
.db $1E
.db $00
.db $F0
.db $F0
.db $10
.db $10
.db $18
.db $04
.db $F8
.db $10
.db $F8
.db $10
.db $04
.db $AD
.db $C1
.db $03
.db $18
.db $79
.db $1F
.db $A7
.db $99
.db $64
.db $04
.db $AD
.db $C4
.db $03
.db $38
.db $F9
.db $25
.db $A7
.db $99
.db $6A
.db $04
.db $A9
.db $00
.db $99
.db $70
.db $04
.db $99
.db $58
.db $04
.db $A9
.db $20
.db $99
.db $52
.db $04
.db $20
.db $6B
.db $A2
.db $A9
.db $20
.db $99
.db $76
.db $04
.db $A9
.db $02
.db $99
.db $80
.db $04
.db $A9
.db $01
.db $99
.db $4C
.db $04
.db $60
.db $A9
.db $FF
.db $8D
.db $9D
.db $03
.db $AE
.db $AB
.db $03
.db $20
.db $F8
.db $AB
.db $AA
.db $AD
.db $7E
.db $04
.db $9D
.db $86
.db $04
.db $BD
.db $64
.db $04
.db $CD
.db $C2
.db $03
.db $90
.db $02
.db $B0
.db $49
.db $BD
.db $52
.db $04
.db $C9
.db $20
.db $D0
.db $1B
.db $A9
.db $21
.db $9D
.db $52
.db $04
.db $8A
.db $A8
.db $20
.db $6B
.db $A2
.db $A9
.db $19
.db $9D
.db $80
.db $04
.db $A9
.db $00
.db $9D
.db $86
.db $04
.db $A9
.db $01
.db $8D
.db $D4
.db $06
.db $F0
.db $27
.db $BD
.db $5E
.db $04
.db $C9
.db $FF
.db $D0
.db $20
.db $AD
.db $9E
.db $03
.db $F0
.db $06
.db $EE
.db $9D
.db $03
.db $4C
.db $C4
.db $A7
.db $CE
.db $AD
.db $03
.db $D0
.db $06
.db $EE
.db $9E
.db $03
.db $4C
.db $C4
.db $A7
.db $8A
.db $A8
.db $20
.db $2B
.db $A7
.db $A9
.db $20
.db $9D
.db $86
.db $04
.db $CA
.db $10
.db $A0
.db $AD
.db $9E
.db $03
.db $F0
.db $0B
.db $AD
.db $9D
.db $03
.db $CD
.db $AB
.db $03
.db $D0
.db $03
.db $EE
.db $ED
.db $03
.db $60
.db $AE
.db $E8
.db $03
.db $A9
.db $48
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $38
.db $E9
.db $20
.db $8D
.db $6A
.db $04
.db $A9
.db $2E
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $A9
.db $21
.db $20
.db $F7
.db $AF
.db $A9
.db $17
.db $8D
.db $00
.db $B0
.db $A2
.db $08
.db $8E
.db $7D
.db $04
.db $A2
.db $00
.db $8E
.db $7E
.db $04
.db $8E
.db $7F
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $20
.db $F2
.db $81
.db $AD
.db $64
.db $04
.db $C9
.db $84
.db $90
.db $12
.db $A9
.db $31
.db $8D
.db $52
.db $04
.db $A0
.db $00
.db $20
.db $6B
.db $A2
.db $EE
.db $ED
.db $03
.db $A9
.db $10
.db $8D
.db $85
.db $03
.db $60
.db $A5
.db $D2
.db $49
.db $E0
.db $85
.db $D2
.db $A9
.db $00
.db $8D
.db $A1
.db $03
.db $AE
.db $E8
.db $03
.db $AD
.db $F3
.db $03
.db $C9
.db $03
.db $F0
.db $07
.db $BD
.db $4C
.db $03
.db $D0
.db $07
.db $F0
.db $0F
.db $BD
.db $4E
.db $03
.db $F0
.db $0A
.db $A9
.db $01
.db $8D
.db $A1
.db $03
.db $A9
.db $1C
.db $20
.db $CD
.db $AF
.db $CE
.db $85
.db $03
.db $10
.db $09
.db $EE
.db $ED
.db $03
.db $A5
.db $D2
.db $29
.db $1F
.db $85
.db $D2
.db $60
.db $A9
.db $26
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $A9
.db $0D
.db $8D
.db $00
.db $B0
.db $A9
.db $1E
.db $20
.db $F7
.db $AF
.db $A2
.db $01
.db $BD
.db $C1
.db $03
.db $18
.db $69
.db $18
.db $8D
.db $64
.db $04
.db $BD
.db $C4
.db $03
.db $8D
.db $6A
.db $04
.db $A9
.db $00
.db $8D
.db $70
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $AE
.db $E8
.db $03
.db $A9
.db $27
.db $8D
.db $52
.db $04
.db $20
.db $69
.db $A2
.db $A2
.db $16
.db $8E
.db $7D
.db $04
.db $A2
.db $00
.db $8E
.db $7E
.db $04
.db $8E
.db $7F
.db $04
.db $EE
.db $ED
.db $03
.db $60
.db $20
.db $F2
.db $81
.db $B0
.db $07
.db $A2
.db $00
.db $20
.db $22
.db $A4
.db $90
.db $1F
.db $A9
.db $28
.db $8D
.db $52
.db $04
.db $A0
.db $00
.db $AD
.db $C1
.db $03
.db $18
.db $69
.db $05
.db $8D
.db $64
.db $04
.db $AD
.db $C4
.db $03
.db $18
.db $69
.db $00
.db $8D
.db $6A
.db $04
.db $20
.db $6B
.db $A2
.db $EE
.db $ED
.db $03
.db $60
.db $A0
.db $04
.db $AD
.db $C1
.db $03
.db $38
.db $69
.db $04
.db $99
.db $64
.db $04
.db $AD
.db $C4
.db $03
.db $18
.db $79
.db $2F
.db $A9
.db $99
.db $6A
.db $04
.db $A9
.db $29
.db $99
.db $52
.db $04
.db $20
.db $6B
.db $A2
.db $B9
.db $2A
.db $A9
.db $99
.db $4C
.db $04
.db $88
.db $D0
.db $DC
.db $EE
.db $ED
.db $03
.db $A9
.db $03
.db $8D
.db $85
.db $03
.db $60
.db $A9
.db $28
.db $20
.db $F7
.db $AF
.db $CE
.db $85
.db $03
.db $D0
.db $08
.db $EE
.db $ED
.db $03
.db $A9
.db $1E
.db $20
.db $F7
.db $AF
.db $60
.db $A2
.db $05
.db $A9
.db $FF
.db $9D
.db $52
.db $04
.db $9D
.db $5E
.db $04
.db $CA
.db $10
.db $F7
.db $EE
.db $ED
.db $03
.db $60
.db $01
.db $1A
.db $2C
.db $3E
.db $50
.db $18
.db $10
.db $08
.db $00
.db $F8
.db $A9
.db $01
.db $8D
.db $4B
.db $04
.db $A9
.db $1E
.db $8D
.db $9C
.db $03
.db $A9
.db $1F
.db $20
.db $F7
.db $AF
.db $A9
.db $0A
.db $8D
.db $00
.db $B0
.db $A9
.db $00
.db $8D
.db $85
.db $03
.db $A9
.db $01
.db $8D
.db $D4
.db $06
.db $AE
.db $E8
.db $03
.db $A9
.db $04
.db $85
.db $06
.db $A5
.db $06
.db $0A
.db $A8
.db $8C
.db $82
.db $03
.db $B9
.db $BD
.db $A9
.db $18
.db $7D
.db $C1
.db $03
.db $A4
.db $06
.db $99
.db $64
.db $04
.db $AC
.db $82
.db $03
.db $C8
.db $B9
.db $BD
.db $A9
.db $18
.db $7D
.db $C4
.db $03
.db $18
.db $6D
.db $85
.db $03
.db $A4
.db $06
.db $99
.db $6A
.db $04
.db $A9
.db $0E
.db $99
.db $80
.db $04
.db $A9
.db $13
.db $99
.db $8C
.db $04
.db $20
.db $AB
.db $A9
.db $B9
.db $C7
.db $A9
.db $99
.db $86
.db $04
.db $A9
.db $00
.db $99
.db $70
.db $04
.db $AD
.db $9C
.db $03
.db $99
.db $52
.db $04
.db $C6
.db $06
.db $10
.db $B7
.db $EE
.db $ED
.db $03
.db $A9
.db $20
.db $8D
.db $85
.db $03
.db $60
.db $A9
.db $00
.db $99
.db $92
.db $04
.db $A4
.db $06
.db $A9
.db $01
.db $99
.db $4C
.db $04
.db $A9
.db $00
.db $99
.db $58
.db $04
.db $60
.db $08
.db $EE
.db $F8
.db $FE
.db $00
.db $12
.db $10
.db $12
.db $18
.db $FE
.db $00
.db $0C
.db $18
.db $24
.db $30
.db $A2
.db $04
.db $20
.db $2E
.db $AA
.db $A0
.db $01
.db $B9
.db $C1
.db $03
.db $AE
.db $07
.db $03
.db $CA
.db $18
.db $7D
.db $18
.db $AA
.db $8D
.db $85
.db $03
.db $AD
.db $66
.db $04
.db $38
.db $ED
.db $67
.db $04
.db $20
.db $08
.db $AA
.db $18
.db $6D
.db $67
.db $04
.db $38
.db $ED
.db $64
.db $04
.db $20
.db $08
.db $AA
.db $18
.db $6D
.db $64
.db $04
.db $CD
.db $85
.db $03
.db $B0
.db $08
.db $EE
.db $ED
.db $03
.db $A9
.db $20
.db $8D
.db $85
.db $03
.db $60
.db $10
.db $0C
.db $38
.db $E9
.db $01
.db $49
.db $FF
.db $4A
.db $49
.db $FF
.db $18
.db $69
.db $01
.db $60
.db $4A
.db $60
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
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $10
.db $00
.db $00
.db $08
.db $20
.db $F8
.db $AB
.db $AA
.db $AD
.db $7E
.db $04
.db $9D
.db $86
.db $04
.db $BD
.db $92
.db $04
.db $8D
.db $7E
.db $04
.db $BD
.db $8C
.db $04
.db $8D
.db $7D
.db $04
.db $8A
.db $48
.db $20
.db $F2
.db $81
.db $68
.db $AA
.db $AD
.db $7E
.db $04
.db $9D
.db $92
.db $04
.db $CA
.db $10
.db $DA
.db $60
.db $A2
.db $04
.db $20
.db $8A
.db $AA
.db $CE
.db $85
.db $03
.db $D0
.db $1C
.db $EE
.db $ED
.db $03
.db $A2
.db $04
.db $A9
.db $32
.db $9D
.db $52
.db $04
.db $A9
.db $00
.db $9D
.db $58
.db $04
.db $CA
.db $10
.db $F3
.db $A9
.db $10
.db $8D
.db $85
.db $03
.db $A9
.db $17
.db $8D
.db $00
.db $B0
.db $60
.db $A2
.db $04
.db $20
.db $8A
.db $AA
.db $CE
.db $85
.db $03
.db $D0
.db $03
.db $EE
.db $ED
.db $03
.db $60
.db $20
.db $F8
.db $AB
.db $AA
.db $AD
.db $7E
.db $04
.db $9D
.db $86
.db $04
.db $CA
.db $10
.db $F3
.db $60
.db $A9
.db $01
.db $8D
.db $4B
.db $04
.db $A2
.db $00
.db $BD
.db $C1
.db $03
.db $38
.db $E9
.db $74
.db $85
.db $09
.db $18
.db $69
.db $40
.db $8D
.db $86
.db $03
.db $BD
.db $C4
.db $03
.db $38
.db $E9
.db $2D
.db $85
.db $08
.db $AE
.db $E8
.db $03
.db $A9
.db $03
.db $85
.db $06
.db $A5
.db $06
.db $0A
.db $A8
.db $8C
.db $82
.db $03
.db $B9
.db $30
.db $AB
.db $18
.db $65
.db $09
.db $A4
.db $06
.db $99
.db $64
.db $04
.db $AC
.db $82
.db $03
.db $C8
.db $B9
.db $30
.db $AB
.db $18
.db $65
.db $08
.db $A4
.db $06
.db $99
.db $6A
.db $04
.db $A9
.db $0A
.db $99
.db $80
.db $04
.db $A9
.db $15
.db $99
.db $8C
.db $04
.db $20
.db $AB
.db $A9
.db $B9
.db $3C
.db $AB
.db $99
.db $86
.db $04
.db $B9
.db $38
.db $AB
.db $99
.db $4C
.db $04
.db $A9
.db $20
.db $99
.db $70
.db $04
.db $A9
.db $2B
.db $99
.db $52
.db $04
.db $C6
.db $06
.db $10
.db $B8
.db $A2
.db $03
.db $A0
.db $04
.db $A9
.db $2A
.db $9D
.db $52
.db $04
.db $A9
.db $19
.db $9D
.db $80
.db $04
.db $99
.db $80
.db $04
.db $99
.db $8C
.db $04
.db $A9
.db $30
.db $8D
.db $9F
.db $03
.db $A9
.db $80
.db $8D
.db $D2
.db $06
.db $EE
.db $ED
.db $03
.db $A9
.db $20
.db $20
.db $F7
.db $AF
.db $A9
.db $08
.db $8D
.db $00
.db $B0
.db $60
.db $FC
.db $E0
.db $E7
.db $0A
.db $12
.db $0A
.db $00
.db $FC
.db $0E
.db $1C
.db $2A
.db $01
.db $00
.db $32
.db $1B
.db $00
.db $A2
.db $03
.db $20
.db $2E
.db $AA
.db $A2
.db $03
.db $BD
.db $64
.db $04
.db $CD
.db $86
.db $03
.db $90
.db $08
.db $EE
.db $ED
.db $03
.db $A9
.db $10
.db $8D
.db $9F
.db $03
.db $60
.db $A2
.db $02
.db $20
.db $2E
.db $AA
.db $CE
.db $9F
.db $03
.db $D0
.db $32
.db $EE
.db $ED
.db $03
.db $A2
.db $04
.db $A0
.db $03
.db $A9
.db $01
.db $9D
.db $4C
.db $04
.db $A9
.db $2D
.db $9D
.db $52
.db $04
.db $A9
.db $00
.db $9D
.db $58
.db $04
.db $A9
.db $20
.db $9D
.db $70
.db $04
.db $B9
.db $64
.db $04
.db $18
.db $69
.db $0A
.db $9D
.db $64
.db $04
.db $B9
.db $6A
.db $04
.db $18
.db $69
.db $03
.db $9D
.db $6A
.db $04
.db $A9
.db $20
.db $8D
.db $9F
.db $03
.db $60
.db $AC
.db $82
.db $03
.db $C8
.db $B1
.db $00
.db $AA
.db $20
.db $8A
.db $AA
.db $CE
.db $9F
.db $03
.db $D0
.db $03
.db $EE
.db $ED
.db $03
.db $60
L052BA8:
    LDY $0382
    INY 
    LDA ($00),Y
    BNE L052BE2
    LDX #1
    LDA #0
    STA $0476
    STA $0477
    LDY $03A6
    LDA $03C1,X
    CLC 
    ADC #255
    STA $0465
    STA $0464
    LDA $03C4,X
    CLC 
    ADC $ABF6,Y
    STA $046B
    STA $046A
    LDA #35
    JSR $AFF7
    LDA #17
    STA $B000
    LDA #0
L052BE2:
    TAY 
    LDA $ABF2,Y
    STA $0453
    LDY #1
    JSR $A26B
    INC $03ED
    RTS 

; start of data
.db $33
.db $38
.db $39
.db $3A
.db $CC
.db $FE
; end of data
.db $BD
.db $86
.db $04
.db $8D
.db $7E
.db $04
.db $BD
.db $80
.db $04
.db $8D
.db $7D
.db $04
.db $8A
.db $8D
.db $7F
.db $04
.db $8A
.db $48
.db $20
.db $F2
.db $81
.db $68
.db $60
.db $A9
.db $01
.db $8D
.db $4B
.db $04
.db $A9
.db $06
.db $8D
.db $9C
.db $03
.db $A9
.db $17
.db $20
.db $F7
.db $AF
.db $A9
.db $17
.db $8D
.db $00
.db $B0
.db $A9
.db $E8
.db $8D
.db $85
.db $03
.db $A9
.db $20
.db $8D
.db $9F
.db $03
.db $AE
.db $E8
.db $03
.db $A9
.db $04
.db $85
.db $06
.db $A9
.db $05
.db $8D
.db $9D
.db $03
.db $A9
.db $40
.db $8D
.db $D0
.db $06
.db $4C
.db $59
.db $A9
.db $A2
.db $04
.db $20
.db $F8
.db $AB
.db $AA
.db $AD
.db $7E
.db $04
.db $9D
.db $86
.db $04
.db $BD
.db $6A
.db $04
.db $C9
.db $7E
.db $B0
.db $14
.db $C9
.db $4C
.db $90
.db $0B
.db $BD
.db $64
.db $04
.db $18
.db $69
.db $06
.db $CD
.db $C1
.db $03
.db $90
.db $42
.db $CA
.db $10
.db $DD
.db $30
.db $58
.db $A0
.db $01
.db $B9
.db $C1
.db $03
.db $DD
.db $64
.db $04
.db $90
.db $0E
.db $CE
.db $9D
.db $03
.db $20
.db $3C
.db $A4
.db $A9
.db $00
.db $9D
.db $6A
.db $04
.db $4C
.db $63
.db $AC
.db $BD
.db $52
.db $04
.db $C9
.db $0B
.db $F0
.db $DC
.db $A9
.db $00
.db $9D
.db $86
.db $04
.db $9D
.db $58
.db $04
.db $A9
.db $80
.db $9D
.db $6A
.db $04
.db $A9
.db $0B
.db $9D
.db $52
.db $04
.db $A9
.db $14
.db $9D
.db $80
.db $04
.db $A9
.db $40
.db $8D
.db $D0
.db $06
.db $D0
.db $BE
.db $BD
.db $80
.db $04
.db $C9
.db $12
.db $F0
.db $B7
.db $A9
.db $00
.db $9D
.db $58
.db $04
.db $9D
.db $86
.db $04
.db $A9
.db $12
.db $9D
.db $80
.db $04
.db $A9
.db $40
.db $8D
.db $D1
.db $06
.db $D0
.db $A3
.db $AD
.db $9D
.db $03
.db $D0
.db $03
.db $EE
.db $ED
.db $03
.db $60
.db $A9
.db $10
.db $8D
.db $00
.db $B0
.db $A0
.db $04
.db $A9
.db $13
.db $99
.db $52
.db $04
.db $A9
.db $60
.db $99
.db $6A
.db $04
.db $A2
.db $01
.db $BD
.db $C1
.db $03
.db $18
.db $79
.db $00
.db $AD
.db $99
.db $64
.db $04
.db $20
.db $6B
.db $A2
.db $B9
.db $05
.db $AD
.db $99
.db $4C
.db $04
.db $A9
.db $19
.db $99
.db $80
.db $04
.db $88
.db $10
.db $D9
.db $EE
.db $ED
.db $03
.db $A9
.db $01
.db $8D
.db $9D
.db $03
.db $60
.db $F0
.db $F8
.db $00
.db $08
.db $10
.db $10
.db $08
.db $01
.db $08
.db $10
.db $A2
.db $04
.db $20
.db $F8
.db $AB
.db $90
.db $11
.db $AA
.db $A9
.db $19
.db $9D
.db $80
.db $04
.db $A9
.db $00
.db $9D
.db $86
.db $04
.db $CE
.db $9D
.db $03
.db $4C
.db $4F
.db $AD
.db $AA
.db $AD
.db $7E
.db $04
.db $9D
.db $86
.db $04
.db $BD
.db $5E
.db $04
.db $C9
.db $FF
.db $D0
.db $1F
.db $BD
.db $52
.db $04
.db $C9
.db $12
.db $F0
.db $18
.db $BD
.db $94
.db $AD
.db $9D
.db $80
.db $04
.db $A9
.db $00
.db $9D
.db $86
.db $04
.db $A9
.db $12
.db $9D
.db $52
.db $04
.db $8A
.db $A8
.db $20
.db $6B
.db $A2
.db $4C
.db $4F
.db $AD
.db $CA
.db $10
.db $BA
.db $AD
.db $9D
.db $03
.db $D0
.db $3C
.db $A9
.db $17
.db $8D
.db $00
.db $B0
.db $EE
.db $ED
.db $03
.db $A2
.db $0A
.db $A0
.db $05
.db $BD
.db $94
.db $AD
.db $99
.db $80
.db $04
.db $A9
.db $00
.db $99
.db $86
.db $04
.db $A9
.db $12
.db $99
.db $52
.db $04
.db $20
.db $6B
.db $A2
.db $CA
.db $88
.db $10
.db $E9
.db $A2
.db $05
.db $A0
.db $01
.db $A9
.db $0C
.db $9D
.db $52
.db $04
.db $B9
.db $C1
.db $03
.db $9D
.db $64
.db $04
.db $A9
.db $60
.db $9D
.db $6A
.db $04
.db $A9
.db $03
.db $8D
.db $85
.db $03
.db $60
.db $87
.db $86
.db $05
.db $06
.db $07
.db $92
.db $91
.db $10
.db $11
.db $12
.db $19
.db $A0
.db $05
.db $B9
.db $5E
.db $04
.db $10
.db $25
.db $20
.db $6B
.db $A2
.db $A9
.db $0C
.db $99
.db $52
.db $04
.db $CE
.db $85
.db $03
.db $AE
.db $85
.db $03
.db $30
.db $0D
.db $BD
.db $D1
.db $AD
.db $18
.db $6D
.db $C2
.db $03
.db $99
.db $64
.db $04
.db $4C
.db $CB
.db $AD
.db $EE
.db $ED
.db $03
.db $A9
.db $01
.db $8D
.db $85
.db $03
.db $A9
.db $01
.db $8D
.db $D2
.db $06
.db $60
.db $FE
.db $07
.db $F4
.db $A0
.db $05
.db $B9
.db $5E
.db $04
.db $10
.db $1A
.db $20
.db $6B
.db $A2
.db $A9
.db $0C
.db $99
.db $52
.db $04
.db $CE
.db $85
.db $03
.db $AE
.db $85
.db $03
.db $30
.db $0A
.db $BD
.db $D1
.db $AD
.db $18
.db $6D
.db $C2
.db $03
.db $99
.db $64
.db $04
.db $A2
.db $04
.db $20
.db $8A
.db $AA
.db $AD
.db $6A
.db $04
.db $C9
.db $60
.db $90
.db $22
.db $A2
.db $05
.db $A9
.db $FF
.db $20
.db $AA
.db $90
.db $A0
.db $04
.db $20
.db $6B
.db $A2
.db $A9
.db $14
.db $99
.db $52
.db $04
.db $B9
.db $29
.db $AE
.db $99
.db $4C
.db $04
.db $88
.db $10
.db $EF
.db $EE
.db $ED
.db $03
.db $A9
.db $10
.db $8D
.db $00
.db $B0
.db $A9
.db $01
.db $8D
.db $D2
.db $06
.db $60
.db $2A
.db $1A
.db $01
.db $10
.db $00
L052E2E:
    LDY $0382
    INY 
    LDA ($00),Y
    TAX 
    LDY #1
L052E37:
    JSR $A26B
    LDA $03A6
    BEQ L052E47
.db $B9
.db $73
.db $AE
.db $99
.db $64
.db $04
.db $D0
.db $06
L052E47:
    LDA $AE77,Y
    STA $0464,Y
    LDA $AE75,Y
    STA $046A,Y
    LDA $AE79,X
    STA $0452,Y
    LDA #0
    STA $0470,Y
    STA $0476,Y
    DEX 
    DEY 
    BPL L052E37
    LDA #23
    STA $B000
    LDA #43
    JSR $AFF7
    INC $03ED
    RTS 

.db $6C
.db $6E
; start of data
.db $48
.db $60
.db $6D
.db $63
.db $15
.db $15
.db $18
.db $19
; end of data
L052E7D:
    LDY #3
L052E7F:
    INY 
    INY 
    JSR $A26B
    DEY 
    DEY 
    LDA $03C1
    SEC 
    SBC #12
    STA $0466,Y
    LDA $03C4
    CLC 
    ADC $AEBA,Y
    STA $046C,Y
    LDA #1
    STA $0472,Y
    LDA #0
    STA $0478,Y
    LDA $AEB6,Y
    STA $0454,Y
    LDA $A4B1,Y
    STA $044E,Y
    DEY 
    BPL L052E7F
    INC $03ED
    RTS 

; start of data
.db $16
.db $16
.db $16
.db $17
.db $10
.db $08
.db $00
.db $F8
; end of data
L052EBE:
    LDA #0
    STA $0476
    STA $047E
    LDA #1
    STA $0470
    JSR $A269
    LDA #59
    STA $0452
    LDA #9
    STA $0480
    INC $03ED
    RTS 

L052EDC:
    JSR $81F2
    LDX #0
    JSR $A422
    BCC L052EF1
    LDA #255
    STA $0452
    STA $045E
    INC $03ED
L052EF1:
    RTS 

.db $20
.db $72
.db $AF
.db $B0
.db $50
.db $A9
.db $01
.db $8D
.db $4B
.db $04
.db $A9
.db $36
.db $8D
.db $9C
.db $03
.db $A9
.db $1F
.db $20
.db $F7
.db $AF
.db $A9
.db $08
.db $8D
.db $00
.db $B0
.db $A9
.db $E8
.db $8D
.db $85
.db $03
.db $A0
.db $00
.db $A2
.db $00
.db $BD
.db $BD
.db $A9
.db $18
.db $6D
.db $C2
.db $03
.db $99
.db $64
.db $04
.db $E8
.db $BD
.db $BD
.db $A9
.db $18
.db $6D
.db $C5
.db $03
.db $99
.db $6A
.db $04
.db $A9
.db $0E
.db $99
.db $80
.db $04
.db $B9
.db $C7
.db $A9
.db $99
.db $86
.db $04
.db $20
.db $6B
.db $A2
.db $A9
.db $00
.db $99
.db $70
.db $04
.db $A9
.db $36
.db $99
.db $52
.db $04
.db $E8
.db $C8
.db $C0
.db $05
.db $D0
.db $CD
.db $EE
.db $ED
.db $03
.db $60
.db $A2
.db $04
.db $20
.db $8A
.db $AA
.db $CE
.db $85
.db $03
.db $D0
.db $1C
.db $EE
.db $ED
.db $03
.db $A2
.db $04
.db $A9
.db $37
.db $9D
.db $52
.db $04
.db $A9
.db $00
.db $9D
.db $58
.db $04
.db $CA
.db $10
.db $F3
.db $A9
.db $10
.db $8D
.db $85
.db $03
.db $A9
.db $08
.db $8D
.db $00
.db $B0
.db $60
.db $AE
.db $E8
.db $03
.db $AD
.db $F3
.db $03
.db $C9
.db $03
.db $F0
.db $07
.db $BD
.db $4C
.db $03
.db $D0
.db $0C
.db $F0
.db $05
.db $BD
.db $4E
.db $03
.db $D0
.db $05
.db $EE
.db $ED
.db $03
.db $38
.db $60
.db $18
.db $60
L052F8F:
    LDA $03C1
    CLC 
    ADC #23
    STA $0464
    LDA $03C4
    CLC 
    ADC #8
    STA $046A
    LDA #28
    STA $0452
    JSR $A269
    LDA #69
    JSR $AFF7
    LDA #17
    STA $B000
    LDA #12
    STA $047D
    LDA #0
    STA $047E
    STA $047F
    INC $03ED
    RTS 

L052FC4:
    JSR $81F2
    BCC L052FCC
    INC $03ED
L052FCC:
    RTS 

.db $48
.db $A9
.db $7D
.db $85
.db $45
.db $A9
.db $80
.db $85
.db $44
.db $A9
.db $7D
.db $85
.db $47
.db $A9
.db $80
.db $85
.db $46
.db $68
.db $4C
.db $09
.db $B0
.db $48
.db $A9
.db $7D
.db $85
.db $45
.db $A9
.db $94
.db $85
.db $44
.db $A9
.db $7D
.db $85
.db $47
.db $A9
.db $84
.db $85
.db $46
.db $68
.db $4C
.db $09
.db $B0
L052FF7:
    PHA 
    LDA #125
    STA $45
    LDA #152
    STA $44
.db $A9
L053001:
    ADC $4785,X
    LDA #152
    STA $46
    PLA 
    ASL 
    TAX 
    LDA $BCF1,X
    STA $06
    LDA $BCF2,X
    STA $07
    LDY #3
L053017:
    LDA ($06),Y
    STA ($44),Y
    STA ($46),Y
    DEY 
    BPL L053017
    LDA #128
    STA $28
    RTS 

; start of data
.db $AF
.db $B0
; end of data
.db $D6
.db $B0
; start of data
.db $0F
.db $B1
.db $3C
.db $B1
; end of data
.db $5D
.db $B1
; start of data
.db $8A
.db $B1
.db $B3
.db $B1
.db $E4
.db $B1
; end of data
.db $05
.db $B2
.db $2A
.db $B2
; start of data
.db $55
.db $B2
.db $7A
.db $B2
; end of data
.db $AB
.db $B2
; start of data
.db $DC
.db $B2
.db $07
.db $B3
; end of data
.db $23
.db $B9
.db $32
.db $B3
; start of data
.db $7E
.db $B3
.db $A9
.db $B3
; end of data
.db $D2
.db $B3
.db $FB
.db $B3
; start of data
.db $51
.db $B3
; end of data
.db $18
.db $B4
.db $37
.db $B4
.db $5C
.db $B4
; start of data
.db $85
.db $B4
; end of data
.db $A6
.db $B4
; start of data
.db $B7
.db $B4
; end of data
.db $DE
.db $B4
.db $FF
.db $B4
.db $2E
.db $B5
.db $D5
.db $B0
; start of data
.db $5F
.db $B5
; end of data
.db $9C
.db $B5
.db $BB
.db $B5
.db $BB
.db $B5
.db $E6
.db $B5
; start of data
.db $0B
.db $B6
; end of data
.db $5D
.db $B6
.db $80
.db $B6
.db $B1
.db $B6
; start of data
.db $E4
.db $B6
; end of data
.db $0F
.db $B7
.db $2E
.db $B7
; start of data
.db $4B
.db $B7
; end of data
.db $6C
.db $B7
.db $95
.db $B7
.db $C0
.db $B7
.db $EF
.db $B7
.db $24
.db $B8
.db $49
.db $B8
.db $70
.db $B8
.db $93
.db $B8
.db $6E
.db $B5
; start of data
.db $89
.db $B5
; end of data
.db $B4
.db $B8
.db $C9
.db $B8
.db $F6
.db $B8
.db $40
.db $B9
.db $65
.db $B9
.db $86
.db $B9
.db $AD
.db $B9
.db $CE
.db $B9
; start of data
.db $EF
.db $B9
; end of data
.db $1A
.db $BA
.db $3F
.db $BA
.db $5E
.db $BA
; start of data
.db $85
.db $BA
.db $32
.db $B6
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $00
.db $00
.db $00
.db $03
.db $07
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $09
; end of data
.db $00
; start of data
.db $03
.db $01
.db $06
; end of data
.db $00
; start of data
.db $00
.db $40
.db $03
.db $00
.db $06
; end of data
.db $00
; start of data
.db $08
; end of data
.db $00
; start of data
.db $10
.db $00
.db $04
.db $13
.db $0E
; end of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $0D
.db $20
.db $05
.db $01
.db $00
.db $04
.db $03
.db $06
.db $0D
.db $00
.db $03
.db $0C
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $03
.db $0B
.db $08
.db $00
.db $02
.db $06
.db $03
.db $FF
.db $06
.db $00
.db $09
.db $00
.db $03
.db $06
.db $08
.db $00
.db $02
.db $08
.db $03
.db $FF
.db $09
.db $00
.db $00
.db $44
.db $06
.db $00
.db $04
.db $13
.db $0E
; start of data
.db $04
.db $01
.db $02
.db $00
.db $1C
; end of data
.db $00
; start of data
.db $07
.db $00
.db $07
.db $01
.db $05
.db $02
.db $00
.db $0A
.db $03
.db $07
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $06
.db $03
.db $FF
.db $09
; end of data
.db $00
; start of data
.db $06
; end of data
.db $00
; start of data
.db $00
.db $0B
.db $06
; end of data
.db $00
; start of data
.db $00
.db $0C
.db $08
; end of data
.db $00
; start of data
.db $10
.db $00
.db $04
.db $13
.db $0E
.db $05
.db $03
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $00
.db $0F
.db $03
.db $01
.db $00
.db $0D
.db $03
.db $06
.db $00
.db $8E
.db $06
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $00
.db $06
; end of data
.db $00
; start of data
.db $04
.db $13
.db $0E
; end of data
.db $04
.db $01
.db $02
.db $00
.db $1C
.db $00
.db $07
.db $00
.db $07
.db $01
.db $05
.db $04
.db $00
.db $31
.db $03
.db $07
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $06
.db $03
.db $FF
.db $09
.db $00
.db $06
.db $00
.db $00
.db $0B
.db $06
.db $00
.db $00
.db $0C
.db $08
.db $00
.db $10
.db $00
.db $04
.db $13
.db $0E
; start of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $05
.db $00
.db $21
.db $03
.db $05
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $09
; end of data
.db $00
; start of data
.db $03
.db $04
.db $02
.db $10
.db $03
.db $FF
.db $06
; end of data
.db $00
; start of data
.db $00
.db $61
.db $06
; end of data
.db $00
; start of data
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $06
.db $03
.db $02
.db $00
.db $0F
.db $03
.db $02
.db $00
.db $25
.db $03
.db $16
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $09
; end of data
.db $00
; start of data
.db $03
.db $01
.db $06
; end of data
.db $00
; start of data
.db $00
.db $66
.db $03
.db $00
.db $06
; end of data
.db $00
; start of data
.db $08
; end of data
.db $00
; start of data
.db $10
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $07
.db $03
.db $02
.db $00
.db $15
.db $03
.db $07
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $09
; end of data
.db $00
; start of data
.db $03
.db $04
.db $00
.db $55
.db $10
.db $00
.db $04
.db $13
.db $0E
; end of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $08
.db $03
.db $02
.db $00
.db $15
.db $03
.db $07
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $03
.db $04
.db $00
.db $55
.db $03
.db $00
.db $08
.db $00
.db $10
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $09
.db $03
.db $0F
.db $00
.db $27
.db $03
.db $09
.db $00
.db $28
.db $03
.db $0C
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $03
.db $0A
.db $00
.db $29
.db $03
.db $08
.db $00
.db $2A
.db $03
.db $00
.db $08
.db $00
.db $04
.db $13
.db $0E
; start of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $0A
.db $03
.db $14
.db $00
.db $15
.db $03
.db $10
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $09
; end of data
.db $00
; start of data
.db $03
.db $19
.db $00
.db $55
.db $03
.db $00
.db $08
; end of data
.db $00
; start of data
.db $10
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $01
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $02
.db $04
.db $03
.db $02
.db $01
.db $03
.db $FF
.db $10
.db $00
.db $04
.db $03
.db $1B
.db $09
.db $11
.db $00
.db $13
; end of data
.db $00
; start of data
.db $12
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $10
.db $00
.db $04
.db $03
.db $02
.db $14
.db $03
.db $FF
.db $0E
; end of data
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $01
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $02
.db $04
.db $03
.db $02
.db $01
.db $03
.db $FF
.db $10
.db $00
.db $04
.db $03
.db $1B
.db $09
.db $11
.db $00
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $10
.db $00
.db $04
.db $03
.db $02
.db $14
.db $03
.db $FF
.db $0E
; start of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $0B
.db $03
.db $02
.db $00
.db $16
.db $03
.db $06
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $09
; end of data
.db $00
; start of data
.db $03
.db $01
.db $06
; end of data
.db $00
; start of data
.db $00
.db $56
.db $06
; end of data
.db $00
; start of data
.db $03
.db $00
.db $08
; end of data
.db $00
; start of data
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $0C
.db $03
.db $0B
.db $00
.db $34
.db $03
.db $0F
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $09
; end of data
.db $00
; start of data
.db $03
.db $0A
.db $06
; end of data
.db $00
; start of data
.db $00
.db $62
.db $06
; end of data
.db $00
; start of data
.db $03
.db $08
.db $08
; end of data
.db $00
; start of data
.db $04
.db $13
.db $0E
; end of data
.db $04
.db $03
.db $05
.db $0E
.db $1D
.db $00
.db $04
.db $03
.db $11
.db $00
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $18
.db $03
.db $FF
.db $05
.db $27
.db $1D
.db $00
.db $04
.db $03
.db $0E
; start of data
.db $04
.db $03
.db $02
.db $28
.db $03
.db $FF
.db $10
.db $01
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $10
.db $02
.db $04
.db $03
.db $1B
.db $09
.db $11
.db $00
.db $13
; end of data
.db $00
; start of data
.db $12
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $04
.db $03
.db $02
.db $08
.db $03
.db $FF
.db $10
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $0F
.db $03
.db $02
.db $00
.db $16
.db $03
.db $09
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $09
; end of data
.db $00
; start of data
.db $03
.db $02
.db $06
; end of data
.db $00
; start of data
.db $00
.db $56
.db $06
; end of data
.db $00
; start of data
.db $03
.db $00
.db $08
; end of data
.db $00
; start of data
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $10
.db $03
.db $0A
.db $00
.db $15
.db $03
.db $09
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $09
; end of data
.db $00
; start of data
.db $03
.db $02
.db $06
; end of data
.db $00
; start of data
.db $00
.db $62
.db $03
.db $00
.db $06
; end of data
.db $00
; start of data
.db $08
; end of data
.db $00
; start of data
.db $10
.db $00
.db $04
.db $13
.db $0E
; end of data
.db $05
.db $11
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $03
.db $02
.db $00
.db $1E
.db $03
.db $0A
.db $00
.db $13
.db $03
.db $1E
.db $00
.db $94
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $01
.db $06
.db $00
.db $00
.db $5E
.db $06
.db $00
.db $08
.db $00
.db $10
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $03
.db $05
.db $0E
.db $1D
.db $00
.db $04
.db $03
.db $1B
.db $09
.db $11
.db $00
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $05
.db $27
.db $1D
.db $00
.db $04
.db $03
.db $0E
.db $04
.db $03
.db $05
.db $1E
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $70
.db $03
.db $FF
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $28
.db $03
.db $FF
.db $04
.db $03
.db $10
.db $00
.db $02
.db $18
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $01
.db $0A
.db $01
.db $0B
.db $00
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $17
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $10
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $04
.db $03
.db $0E
.db $04
.db $03
.db $02
.db $18
.db $03
.db $FF
.db $10
.db $01
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $10
.db $02
.db $04
.db $03
.db $1B
.db $09
.db $11
.db $00
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $04
.db $03
.db $02
.db $08
.db $03
.db $FF
.db $10
.db $00
.db $0E
; start of data
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $16
.db $01
.db $04
.db $03
.db $1B
.db $0F
.db $15
.db $02
.db $13
; end of data
.db $00
; start of data
.db $12
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $16
.db $00
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $0E
; end of data
.db $04
.db $03
.db $02
.db $78
.db $03
.db $FF
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $0E
; start of data
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $19
.db $01
.db $04
.db $03
.db $18
; end of data
.db $00
; start of data
.db $03
.db $FF
.db $19
.db $02
.db $04
.db $03
.db $17
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $19
.db $00
.db $04
.db $03
.db $02
.db $14
.db $03
.db $FF
.db $0E
; end of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $12
.db $02
.db $38
.db $03
.db $FF
.db $00
.db $35
.db $00
.db $92
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $02
.db $08
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $04
.db $13
.db $0E
.db $04
.db $03
.db $05
.db $28
.db $1D
.db $00
.db $02
.db $05
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $18
.db $00
.db $03
.db $FF
.db $05
.db $29
.db $1D
.db $00
.db $04
.db $03
.db $17
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $05
.db $2A
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $14
.db $03
.db $03
.db $00
.db $6E
.db $03
.db $0B
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $03
.db $09
.db $02
.db $18
.db $03
.db $FF
.db $06
.db $00
.db $03
.db $02
.db $00
.db $2E
.db $03
.db $00
.db $06
.db $00
.db $08
.db $00
.db $04
.db $13
.db $0E
; start of data
.db $02
.db $10
.db $03
.db $FF
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $0E
; end of data
.db $02
.db $10
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $01
.db $02
.db $10
.db $03
.db $FF
.db $0E
; start of data
.db $02
.db $10
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $0E
; end of data
.db $04
.db $03
.db $05
.db $23
.db $1D
.db $00
.db $04
.db $03
.db $11
.db $00
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $05
.db $24
.db $1D
.db $00
.db $04
.db $03
.db $0E
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $19
.db $01
.db $04
.db $03
.db $18
.db $00
.db $03
.db $FF
.db $19
.db $02
.db $04
.db $03
.db $17
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $19
.db $00
.db $04
.db $03
.db $02
.db $14
.db $03
.db $FF
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $15
.db $00
.db $39
.db $03
.db $08
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $03
.db $01
.db $06
.db $00
.db $00
.db $79
.db $03
.db $00
.db $06
.db $00
.db $08
.db $00
.db $04
.db $13
.db $0E
; start of data
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $10
.db $06
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $10
.db $05
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $17
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $7B
.db $03
.db $FF
.db $02
.db $18
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $10
.db $06
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $10
.db $05
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $17
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $7B
.db $03
.db $FF
.db $02
.db $18
.db $03
.db $FF
.db $0E
; end of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $16
.db $03
.db $31
.db $00
.db $3C
.db $03
.db $30
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $03
.db $31
.db $00
.db $7C
.db $03
.db $21
.db $08
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $17
.db $00
.db $3D
.db $02
.db $19
.db $03
.db $FF
.db $00
.db $3E
.db $03
.db $0D
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $0A
.db $03
.db $FF
.db $09
.db $00
.db $03
.db $0B
.db $06
.db $00
.db $00
.db $38
.db $06
.db $00
.db $00
.db $37
.db $03
.db $09
.db $08
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $18
.db $02
.db $40
.db $03
.db $FF
.db $00
.db $2B
.db $02
.db $30
.db $03
.db $FF
.db $03
.db $13
.db $00
.db $3A
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $06
.db $00
.db $00
.db $3B
.db $06
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $00
.db $20
.db $03
.db $10
.db $08
.db $00
.db $04
.db $13
.db $0E
; start of data
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $10
.db $0A
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $10
.db $09
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $17
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $7B
.db $03
.db $FF
.db $02
.db $18
.db $03
.db $FF
.db $0E
; end of data
.db $04
.db $03
.db $05
.db $1B
.db $1D
.db $00
.db $04
.db $03
.db $11
.db $00
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $20
.db $03
.db $FF
.db $05
.db $1C
.db $1D
.db $00
.db $04
.db $03
.db $0E
.db $04
.db $03
.db $05
.db $1B
.db $1D
.db $00
.db $04
.db $03
.db $1B
.db $09
.db $11
.db $00
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $05
.db $1C
.db $1D
.db $00
.db $04
.db $03
.db $0E
; start of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $19
.db $00
.db $0F
.db $03
.db $0B
.db $00
.db $0D
.db $03
.db $10
.db $00
.db $8E
.db $06
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $0A
.db $06
; end of data
.db $00
; start of data
.db $04
.db $13
.db $0E
; end of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $1A
.db $00
.db $21
.db $03
.db $0B
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $09
.db $00
.db $03
.db $0A
.db $02
.db $10
.db $03
.db $FF
.db $06
.db $00
.db $00
.db $61
.db $06
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $03
.db $02
.db $08
.db $03
.db $FF
.db $19
.db $01
.db $0A
.db $01
.db $0B
.db $00
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $17
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $01
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $10
.db $00
.db $0E
.db $04
.db $03
.db $05
.db $1D
.db $1D
.db $00
.db $02
.db $05
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $00
.db $18
.db $00
.db $03
.db $FF
.db $05
.db $25
.db $1D
.db $00
.db $04
.db $03
.db $17
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $05
.db $1F
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $05
.db $20
.db $1D
.db $00
.db $0A
.db $01
.db $0B
.db $00
.db $04
.db $03
.db $18
.db $00
.db $03
.db $FF
.db $05
.db $21
.db $1D
.db $00
.db $04
.db $03
.db $17
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $04
.db $03
.db $02
.db $03
.db $03
.db $FF
.db $10
.db $01
.db $04
.db $03
.db $02
.db $03
.db $03
.db $FF
.db $10
.db $00
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $05
.db $20
.db $1D
.db $00
.db $0A
.db $01
.db $0B
.db $00
.db $17
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $30
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $01
.db $05
.db $22
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $05
.db $1D
.db $1D
.db $00
.db $0A
.db $01
.db $0B
.db $00
.db $04
.db $03
.db $17
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $30
.db $03
.db $FF
.db $0A
.db $01
.db $0B
.db $01
.db $05
.db $1F
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $05
.db $26
.db $1D
.db $00
.db $0A
.db $01
.db $0B
.db $00
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $04
.db $03
.db $17
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $05
.db $1F
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $05
.db $20
.db $1D
.db $00
.db $0A
.db $01
.db $0B
.db $00
.db $04
.db $03
.db $02
.db $30
.db $03
.db $FF
.db $17
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $05
.db $22
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $20
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $02
.db $38
.db $03
.db $FF
.db $02
.db $FE
.db $03
.db $FF
.db $0A
.db $00
.db $0B
.db $00
.db $1E
.db $00
.db $02
.db $38
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $42
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $43
.db $04
.db $03
.db $02
.db $01
.db $03
.db $FF
.db $1B
.db $09
.db $11
.db $03
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $10
.db $41
.db $04
.db $03
.db $02
.db $14
.db $03
.db $FF
.db $0E
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $42
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $10
.db $43
.db $04
.db $03
.db $02
.db $01
.db $03
.db $FF
.db $1B
.db $09
.db $11
.db $03
.db $13
.db $00
.db $12
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $10
.db $41
.db $04
.db $03
.db $02
.db $14
.db $03
.db $FF
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $13
.db $03
.db $01
.db $00
.db $2F
.db $00
.db $23
.db $03
.db $1B
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $30
.db $03
.db $FF
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $02
.db $01
.db $02
.db $01
.db $05
.db $0D
.db $03
.db $02
.db $00
.db $15
.db $03
.db $09
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $03
.db $1E
.db $00
.db $55
.db $10
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $12
.db $02
.db $38
.db $03
.db $FF
.db $00
.db $11
.db $00
.db $B6
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $02
.db $08
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $2B
.db $00
.db $2C
.db $02
.db $30
.db $03
.db $FF
.db $00
.db $24
.db $00
.db $B0
.db $06
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $01
.db $06
.db $00
.db $08
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $12
.db $02
.db $38
.db $03
.db $FF
.db $00
.db $11
.db $00
.db $92
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $02
.db $08
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $04
.db $13
.db $0E
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $12
.db $02
.db $30
.db $03
.db $FF
.db $00
.db $07
.db $00
.db $86
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $02
.db $08
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $04
.db $13
.db $0E
; start of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $2C
.db $03
.db $21
.db $00
.db $16
.db $03
.db $28
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $10
.db $03
.db $FF
.db $09
; end of data
.db $00
; start of data
.db $03
.db $21
.db $06
; end of data
.db $00
; start of data
.db $00
.db $56
.db $06
; end of data
.db $00
; start of data
.db $03
.db $1F
.db $08
; end of data
.db $00
; start of data
.db $04
.db $13
.db $0E
; end of data
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $02
.db $01
.db $02
.db $01
.db $05
.db $2D
.db $03
.db $21
.db $00
.db $15
.db $03
.db $3A
.db $08
.db $00
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $09
.db $00
.db $03
.db $3B
.db $00
.db $55
.db $08
.db $00
.db $04
.db $13
.db $0E
.db $04
.db $03
.db $05
.db $2E
.db $1D
.db $00
.db $04
.db $03
.db $02
.db $70
.db $03
.db $FF
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $02
.db $28
.db $03
.db $FF
.db $04
.db $03
.db $10
.db $1F
.db $02
.db $18
.db $03
.db $FF
.db $0E
.db $05
.db $2F
.db $04
.db $01
.db $07
.db $01
.db $07
.db $00
.db $03
.db $21
.db $00
.db $1E
.db $03
.db $29
.db $00
.db $13
.db $03
.db $3B
.db $00
.db $94
.db $0C
.db $00
.db $0A
.db $00
.db $0B
.db $00
.db $03
.db $20
.db $06
.db $00
.db $00
.db $5E
.db $06
.db $00
.db $08
.db $00
.db $04
.db $13
.db $0E
; start of data
.db $04
.db $03
.db $02
.db $10
.db $03
.db $FF
.db $04
.db $03
.db $10
.db $48
.db $02
.db $30
.db $03
.db $FF
.db $04
.db $03
.db $10
.db $00
.db $02
.db $30
.db $03
.db $FF
.db $04
.db $01
.db $07
.db $00
.db $07
.db $01
.db $05
.db $13
.db $03
.db $01
.db $00
.db $2F
.db $00
.db $23
.db $03
.db $1B
.db $08
; end of data
.db $00
; start of data
.db $0C
; end of data
.db $00
; start of data
.db $0A
.db $00
.db $0B
.db $00
; end of data
.db $02
.db $30
.db $03
.db $FF
.db $0E
; start of data
.db $01
.db $BB
; end of data
.db $03
.db $BB
.db $10
.db $BB
.db $1F
.db $BB
.db $26
.db $BB
.db $2D
.db $BB
.db $3A
.db $BB
.db $45
.db $BB
.db $45
.db $BB
.db $45
.db $BB
.db $6E
.db $BB
.db $7B
.db $BB
.db $7B
.db $BB
; start of data
.db $0D
.db $BC
; end of data
.db $7B
.db $BB
.db $A4
.db $BB
; start of data
.db $8A
.db $BB
; end of data
.db $97
.db $BB
.db $7B
.db $BB
.db $B5
.db $BB
.db $C2
.db $BB
.db $E3
.db $BB
.db $F8
.db $BB
; start of data
.db $44
.db $BC
; end of data
.db $2E
.db $BC
.db $3B
.db $BC
.db $3B
.db $BC
.db $FE
.db $BA
.db $FE
.db $BA
; start of data
.db $53
.db $BC
; end of data
.db $3B
.db $BC
.db $9F
.db $BC
.db $B4
.db $BC
; start of data
.db $7A
.db $BC
; end of data
.db $B4
.db $BC
.db $0E
.db $00
.db $00
; start of data
.db $00
; end of data
.db $00
.db $02
.db $04
.db $01
.db $20
.db $03
.db $00
.db $02
.db $06
.db $01
.db $10
.db $04
.db $00
.db $00
.db $02
.db $02
.db $01
.db $20
.db $03
.db $00
.db $01
.db $30
.db $02
.db $FF
.db $01
.db $10
.db $04
.db $00
.db $00
.db $02
.db $11
.db $05
.db $00
.db $1B
.db $03
.db $00
.db $02
.db $08
.db $05
.db $00
.db $1B
.db $03
.db $00
.db $02
.db $06
.db $1B
.db $1B
.db $06
.db $00
.db $07
.db $0F
.db $02
.db $FF
.db $0E
.db $00
.db $00
.db $02
.db $04
.db $08
.db $00
.db $1B
.db $03
.db $02
.db $09
.db $09
.db $00
.db $00
.db $02
.db $04
.db $38
.db $00
.db $02
.db $09
.db $36
.db $04
.db $39
.db $00
.db $01
.db $28
.db $02
.db $FF
.db $3A
.db $00
.db $01
.db $10
.db $02
.db $FF
.db $3B
.db $00
.db $01
.db $06
.db $02
.db $FF
.db $3C
.db $00
.db $3D
.db $00
.db $01
.db $1A
.db $19
.db $60
.db $0E
.db $00
.db $01
.db $28
.db $19
.db $60
.db $00
.db $02
.db $06
.db $01
.db $10
.db $03
.db $00
.db $02
.db $09
.db $01
.db $10
.db $04
.db $00
.db $00
.db $02
.db $04
.db $2F
.db $00
.db $02
.db $09
.db $30
.db $00
.db $31
.db $00
.db $32
.db $00
.db $0E
.db $00
.db $00
; start of data
.db $02
.db $04
.db $1B
.db $1C
.db $0A
; end of data
.db $00
; start of data
.db $02
.db $09
.db $09
; end of data
.db $00
; start of data
.db $0B
; end of data
.db $00
; start of data
.db $00
; end of data
.db $02
.db $07
.db $22
.db $00
.db $02
.db $0B
.db $23
.db $00
.db $1B
.db $14
.db $0E
.db $00
.db $00
.db $02
.db $04
.db $11
.db $00
.db $02
.db $09
.db $1B
.db $19
.db $12
.db $00
.db $01
.db $50
.db $02
.db $FF
.db $0E
.db $00
.db $00
.db $02
.db $08
.db $20
.db $00
.db $1B
.db $19
.db $02
.db $0B
.db $21
.db $00
.db $0E
.db $00
.db $00
.db $02
.db $06
.db $29
.db $00
.db $01
.db $45
.db $02
.db $FF
.db $02
.db $0A
.db $1B
.db $12
.db $2A
.db $00
.db $2B
.db $00
.db $2C
.db $00
.db $01
.db $80
.db $02
.db $FF
.db $2D
.db $00
.db $0E
.db $00
.db $01
.db $28
.db $02
.db $FF
.db $2E
.db $00
.db $00
.db $02
.db $06
.db $33
.db $00
.db $01
.db $30
.db $02
.db $FF
.db $36
.db $03
.db $02
.db $0B
.db $34
.db $00
.db $35
.db $00
.db $36
.db $03
.db $0E
.db $00
.db $00
.db $02
.db $06
.db $26
.db $00
.db $01
.db $30
.db $02
.db $FF
.db $27
.db $00
.db $02
.db $0B
.db $01
.db $18
.db $02
.db $FF
.db $28
.db $00
.db $0E
.db $00
.db $00
; start of data
.db $02
.db $0B
.db $1B
.db $12
.db $3E
.db $01
.db $01
.db $CD
.db $02
.db $FF
.db $3E
.db $03
.db $01
.db $35
.db $02
.db $FF
.db $3F
; end of data
.db $00
; start of data
.db $01
.db $50
.db $02
.db $FF
.db $0E
; end of data
.db $00
; start of data
.db $01
.db $1A
.db $02
.db $FF
.db $01
.db $61
.db $02
.db $FF
.db $00
; end of data
.db $02
.db $06
.db $1B
.db $0A
.db $01
.db $20
.db $19
.db $80
.db $18
.db $00
.db $0E
.db $00
.db $00
.db $02
.db $0A
.db $01
.db $40
.db $19
.db $60
.db $0E
.db $00
.db $00
; start of data
.db $02
.db $01
.db $15
; end of data
.db $00
; start of data
.db $16
; end of data
.db $00
; start of data
.db $02
.db $15
.db $01
.db $40
.db $19
.db $60
.db $0E
; end of data
.db $00
; start of data
.db $00
.db $02
.db $0B
.db $1B
.db $12
.db $37
.db $00
.db $01
.db $CD
.db $02
.db $FF
.db $01
.db $35
.db $02
.db $FF
.db $37
.db $01
.db $01
.db $28
.db $02
.db $FF
.db $37
.db $02
.db $01
.db $06
.db $02
.db $FF
.db $0E
; end of data
.db $00
; start of data
.db $01
.db $1A
.db $02
.db $FF
.db $37
.db $03
.db $01
.db $61
.db $02
.db $FF
.db $00
.db $02
.db $0B
.db $1B
.db $12
.db $37
.db $00
.db $01
.db $CD
.db $02
.db $FF
.db $01
.db $35
.db $02
.db $FF
.db $37
.db $01
.db $01
.db $28
.db $02
.db $FF
.db $40
; end of data
.db $00
; start of data
.db $41
; end of data
.db $00
; start of data
.db $0E
; end of data
.db $00
; start of data
.db $01
.db $1A
.db $02
.db $FF
.db $37
.db $03
.db $01
.db $61
.db $02
.db $FF
.db $00
; end of data
.db $01
.db $20
.db $02
.db $FF
.db $1B
.db $05
.db $1E
.db $00
.db $01
.db $20
.db $02
.db $FF
.db $1F
.db $00
.db $01
.db $20
.db $02
.db $FF
.db $0E
.db $00
.db $00
.db $02
.db $08
.db $42
.db $00
.db $43
.db $00
.db $32
.db $00
.db $00
; start of data
.db $00
.db $18
; end of data
.db $17
.db $19
.db $00
; start of data
.db $1A
; end of data
.db $1D
.db $18
; start of data
.db $67
; end of data
.db $58
; start of data
.db $67
; end of data
.db $67
; start of data
.db $CD
.db $BC
; end of data
.db $CD
.db $BC
; start of data
.db $3F
.db $00
.db $20
.db $0F
.db $36
.db $24
.db $15
.db $0F
.db $36
.db $24
.db $15
.db $0F
.db $30
.db $22
.db $11
.db $0F
.db $30
.db $26
.db $16
.db $0F
.db $20
.db $21
.db $12
.db $0F
.db $36
.db $24
.db $15
.db $0F
.db $16
.db $37
.db $0F
.db $0F
.db $20
.db $31
.db $22
.db $00
; end of data
.db $D7
.db $BD
; start of data
.db $DB
.db $BD
; end of data
.db $DF
.db $BD
.db $E3
.db $BD
; start of data
.db $FB
.db $BE
.db $2B
.db $BF
.db $1B
.db $BF
.db $23
.db $BF
.db $FF
.db $BE
.db $17
.db $BF
.db $03
.db $BF
.db $0B
.db $BF
; end of data
.db $0F
.db $BF
.db $07
.db $BF
.db $13
.db $BF
; start of data
.db $33
.db $BF
.db $27
.db $BF
.db $1F
.db $BF
.db $EB
.db $BE
; end of data
.db $EF
.db $BE
; start of data
.db $F3
.db $BE
.db $F7
.db $BE
; end of data
.db $E7
.db $BD
.db $E7
.db $BD
; start of data
.db $EB
.db $BD
; end of data
.db $EF
.db $BD
.db $F3
.db $BD
.db $F7
.db $BD
.db $FB
.db $BD
.db $FF
.db $BD
.db $03
.db $BE
.db $07
.db $BE
.db $0B
.db $BE
.db $0F
.db $BE
.db $13
.db $BE
; start of data
.db $17
.db $BE
; end of data
.db $1B
.db $BE
.db $1F
.db $BE
.db $2F
.db $BF
.db $23
.db $BE
.db $27
.db $BE
.db $33
.db $BE
.db $E7
.db $BD
; start of data
.db $2B
.db $BE
; end of data
.db $2F
.db $BE
.db $EB
.db $BE
.db $EF
.db $BE
.db $F3
.db $BE
.db $F7
.db $BE
.db $33
.db $BE
.db $37
.db $BE
; start of data
.db $3B
.db $BE
.db $3F
.db $BE
; end of data
.db $43
.db $BE
; start of data
.db $4B
.db $BE
.db $4F
.db $BE
.db $53
.db $BE
.db $57
.db $BE
; end of data
.db $5B
.db $BE
; start of data
.db $5F
.db $BE
; end of data
.db $63
.db $BE
.db $67
.db $BE
; start of data
.db $6B
.db $BE
.db $6F
.db $BE
.db $73
.db $BE
.db $77
.db $BE
; end of data
.db $7B
.db $BE
; start of data
.db $7F
.db $BE
.db $83
.db $BE
.db $87
.db $BE
; end of data
.db $8F
.db $BE
; start of data
.db $93
.db $BE
.db $97
.db $BE
.db $9B
.db $BE
.db $9F
.db $BE
.db $A3
.db $BE
.db $A7
.db $BE
.db $AB
.db $BE
.db $AF
.db $BE
.db $B3
.db $BE
.db $B7
.db $BE
.db $BB
.db $BE
.db $BF
.db $BE
.db $C3
.db $BE
.db $C7
.db $BE
.db $CF
.db $BE
.db $DB
.db $BE
.db $CB
.db $BE
.db $D3
.db $BE
.db $D7
.db $BE
.db $DF
.db $BE
; end of data
.db $E3
.db $BE
; start of data
.db $E7
.db $BE
; end of data
.db $37
.db $BF
.db $4F
.db $BF
; start of data
.db $53
.db $BF
; end of data
.db $57
.db $BF
.db $5B
.db $BF
.db $3B
.db $BF
; start of data
.db $5F
.db $BF
; end of data
.db $63
.db $BF
.db $67
.db $BF
; start of data
.db $3F
.db $BF
; end of data
.db $7B
.db $BF
.db $43
.db $BF
.db $47
.db $BF
; start of data
.db $4F
.db $BF
.db $6B
.db $BF
; end of data
.db $4B
.db $BF
; start of data
.db $6F
.db $BF
; end of data
.db $73
.db $BF
.db $77
.db $BF
; start of data
.db $7F
.db $BF
.db $E3
.db $BE
; end of data
.db $83
.db $BF
.db $0F
.db $03
.db $06
.db $16
; start of data
.db $0F
.db $13
.db $16
.db $26
; end of data
.db $0F
.db $23
.db $26
.db $36
.db $0F
.db $31
.db $32
.db $36
.db $0F
.db $20
.db $26
.db $16
; start of data
.db $0F
.db $20
.db $21
.db $12
; end of data
.db $0F
.db $26
.db $20
.db $16
.db $0F
.db $20
.db $37
.db $27
.db $0F
.db $20
.db $2B
.db $0B
.db $0F
.db $20
.db $21
.db $11
.db $0F
.db $3C
.db $2B
.db $1A
.db $0F
.db $39
.db $1A
.db $09
.db $0F
.db $36
.db $21
.db $11
.db $0F
.db $3C
.db $21
.db $12
.db $0F
.db $20
.db $22
.db $1C
.db $0F
.db $19
.db $08
.db $16
; start of data
.db $0F
.db $15
.db $25
.db $0F
; end of data
.db $0F
.db $20
.db $27
.db $28
.db $0F
.db $0F
.db $0F
.db $0F
.db $0F
.db $20
.db $3C
.db $22
.db $0F
.db $20
.db $35
.db $25
; start of data
.db $0F
.db $37
.db $26
.db $3C
; end of data
.db $06
.db $19
.db $07
.db $17
.db $0F
.db $20
.db $21
.db $11
.db $0F
.db $37
.db $21
.db $1B
; start of data
.db $0F
.db $30
.db $3C
.db $2C
.db $0F
.db $30
.db $31
.db $11
; end of data
.db $0F
.db $20
.db $35
.db $24
.db $0F
.db $35
.db $25
.db $15
; start of data
.db $0F
.db $36
.db $2B
.db $1A
.db $0F
.db $20
.db $32
.db $1B
.db $0F
.db $36
.db $21
.db $1C
.db $0F
.db $36
.db $2C
.db $12
; end of data
.db $0F
.db $37
.db $2C
.db $1C
; start of data
.db $0F
.db $36
.db $25
.db $16
; end of data
.db $0F
.db $37
.db $2B
.db $1C
.db $0F
.db $20
.db $22
.db $13
; start of data
.db $0F
.db $36
.db $2C
.db $1C
.db $0F
.db $37
.db $2B
.db $1C
.db $0F
.db $36
.db $21
.db $12
.db $0F
.db $35
.db $31
.db $21
; end of data
.db $0F
.db $20
.db $36
.db $21
; start of data
.db $0F
.db $34
.db $14
.db $04
.db $0F
.db $20
.db $21
.db $11
.db $0F
.db $36
.db $2C
.db $11
.db $0F
.db $28
.db $1C
.db $0F
; end of data
.db $0F
.db $20
.db $21
.db $1B
; start of data
.db $0F
.db $36
.db $25
.db $15
.db $0F
.db $38
.db $24
.db $15
.db $0F
.db $20
.db $36
.db $15
.db $0F
.db $3C
.db $1C
.db $14
.db $0F
.db $3C
.db $14
.db $09
.db $0F
.db $37
.db $23
.db $14
.db $0F
.db $3C
.db $2C
.db $14
.db $0F
.db $37
.db $25
.db $13
.db $0F
.db $37
.db $24
.db $13
.db $0F
.db $3A
.db $2A
.db $1B
.db $0F
.db $3C
.db $29
.db $18
.db $0F
.db $38
.db $22
.db $13
.db $0F
.db $20
.db $28
.db $1C
.db $0F
.db $35
.db $24
.db $15
.db $0F
.db $38
.db $29
.db $15
.db $0F
.db $3C
.db $29
.db $18
.db $0F
.db $3B
.db $24
.db $12
.db $0F
.db $37
.db $25
.db $13
.db $0F
.db $35
.db $26
.db $15
.db $0F
.db $36
.db $23
.db $14
.db $0F
.db $19
.db $08
.db $16
.db $0F
.db $39
.db $23
.db $15
.db $0F
.db $10
.db $00
.db $0C
; end of data
.db $0F
.db $39
.db $2B
.db $0C
; start of data
.db $0F
.db $20
.db $38
.db $28
.db $0F
.db $28
.db $20
.db $10
.db $0F
.db $38
.db $23
.db $12
.db $0F
.db $20
.db $28
.db $18
.db $0F
.db $28
.db $16
.db $06
; end of data
.db $0F
.db $39
.db $14
.db $03
; start of data
.db $0F
.db $10
.db $00
.db $06
; end of data
.db $0F
.db $3C
.db $22
.db $04
.db $0F
.db $3C
.db $22
.db $15
; start of data
.db $0F
.db $20
.db $1C
.db $02
.db $0F
.db $33
.db $29
.db $18
.db $0F
.db $34
.db $25
.db $16
.db $0F
.db $2A
.db $23
.db $0C
.db $0F
.db $31
.db $19
.db $08
.db $0F
.db $3B
.db $25
.db $14
; end of data
.db $0F
.db $20
.db $10
.db $00
; start of data
.db $0F
.db $35
.db $24
.db $15
; end of data
.db $0F
.db $3C
.db $27
.db $14
.db $0F
.db $20
.db $38
.db $28
; start of data
.db $0F
.db $20
.db $39
.db $29
; end of data
.db $0F
.db $39
.db $25
.db $16
.db $0F
.db $20
.db $3A
.db $28
.db $0F
.db $20
.db $3A
.db $29
; start of data
.db $0F
.db $20
.db $33
.db $23
.db $0F
.db $3B
.db $2C
.db $14
; end of data
.db $0F
.db $32
.db $23
.db $16
.db $0F
.db $35
.db $19
.db $0C
; start of data
.db $0F
.db $20
.db $34
.db $25
; end of data
.db $0F
.db $35
.db $25
.db $16
.db $0F
.db $35
.db $2A
.db $19
; start of data
.db $0F
.db $35
.db $23
.db $14
.db $0F
.db $20
.db $23
.db $1B
; end of data
.db $0F
.db $2C
.db $1B
.db $08
.db $0F
.db $23
.db $1C
.db $08
.db $0F
.db $32
.db $23
.db $14
; start of data
.db $0F
.db $3C
.db $2C
.db $19
; end of data
.db $0F
.db $39
.db $11
.db $0C
.db $00
.db $8B
.db $F2
.db $A8
.db $C7
.db $22
.db $EA
.db $FF
.db $56
.db $40
.db $00
.db $40
.db $00
.db $C8
.db $10
.db $00
.db $00
.db $82
.db $00
.db $42
.db $27
.db $72
.db $2F
.db $54
.db $50
L053FA0:
    JMP $819C

.db $00
.db $9C
.db $81
.db $08
.db $10
.db $D8
.db $4D
.db $6A
.db $64
.db $88
.db $79
.db $2C
.db $9D
.db $82
.db $00
.db $40
.db $08
.db $01
.db $02
.db $08
.db $82
.db $28
.db $10
.db $B0
.db $89
.db $44
.db $10
.db $14
.db $25
.db $C9
.db $BC
.db $00
.db $80
.db $00
.db $00
.db $00
.db $00
.db $C0
.db $08
.db $C2
.db $4D
.db $09
.db $33
.db $D2
.db $80
.db $00
.db $00
.db $80
.db $00
.db $80
.db $00
.db $00
.db $00
.db $08
.db $40
.db $25
.db $09
.db $2C
.db $40
.db $D0
.db $16
.db $28
.db $04
.db $00
.db $00
.db $00
.db $20
.db $20
.db $18
.db $24
.db $ED
.db $76
.db $32
.db $93
.db $24
.db $AC
.db $8D
.db $02
.db $83
.db $02
.db $00
.db $00
.db $00
.db $80
.db $FF
.db $58
.db $48
.db $06
.db $40
.db $01
.db $08
.db $04
.db $1F

.ENDS
