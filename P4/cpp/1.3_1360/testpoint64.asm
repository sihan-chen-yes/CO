addi	$s0,$0,104
sw		$s0,4($0)
addi	$s0,$0,12
sw		$s0,8($0)
addi	$s0,$0,92
sw		$s0,12($0)
addi	$s0,$0,80
sw		$s0,16($0)
addi	$s0,$0,76
sw		$s0,20($0)
addi	$s0,$0,68
sw		$s0,24($0)
addi	$s0,$0,56
sw		$s0,28($0)
addi	$s0,$0,108
sw		$s0,32($0)
addi	$s0,$0,64
sw		$s0,36($0)
addi	$s0,$0,4
sw		$s0,40($0)
addi	$s0,$0,16
sw		$s0,44($0)
addi	$s0,$0,116
sw		$s0,48($0)
addi	$s0,$0,28
sw		$s0,52($0)
addi	$s0,$0,96
sw		$s0,56($0)
addi	$s0,$0,44
sw		$s0,60($0)
addi	$s0,$0,8
sw		$s0,64($0)
addi	$s0,$0,20
sw		$s0,68($0)
addi	$s0,$0,40
sw		$s0,72($0)
addi	$s0,$0,88
sw		$s0,76($0)
addi	$s0,$0,72
sw		$s0,80($0)
addi	$s0,$0,32
sw		$s0,84($0)
addi	$s0,$0,100
sw		$s0,88($0)
addi	$s0,$0,52
sw		$s0,92($0)
addi	$s0,$0,120
sw		$s0,96($0)
addi	$s0,$0,24
sw		$s0,100($0)
addi	$s0,$0,60
sw		$s0,104($0)
addi	$s0,$0,84
sw		$s0,108($0)
addi	$s0,$0,112
sw		$s0,112($0)
addi	$s0,$0,48
sw		$s0,116($0)
addi	$s0,$0,36
sw		$s0,120($0)

#--------------

addi	$1,$0,23333
addi	$2,$0,23333
addi	$3,$0,23333
addi	$4,$0,23333
addi	$5,$0,23333
addi	$6,$0,23333
addi	$7,$0,23333
addi	$8,$0,23333
addi	$9,$0,23333
addi	$10,$0,23333
addi	$11,$0,23333
addi	$12,$0,23333
addi	$13,$0,23333
addi	$14,$0,23333
addi	$15,$0,23333
addi	$16,$0,23333
addi	$17,$0,23333
addi	$18,$0,23333
addi	$19,$0,23333
addi	$20,$0,23333
addi	$21,$0,23333
addi	$22,$0,23333
addi	$23,$0,23333
addi	$24,$0,23333
addi	$25,$0,23333
addi	$26,$0,23333
addi	$27,$0,23333
addi	$28,$0,23333
addi	$29,$0,23333
addi	$30,$0,23333
addi	$31,$0,23333

addi	$t0,$0,8
addi	$t2,$0,-12288

#--------------

addi	$31,$0,16
lw		$31,0($31)
jal		TAG_0
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_0:
nop
jal		TAG_1
addu	$31,$t0,$31
addi	$31,$31,4
TAG_1:
la		$31,TAG_2
jalr	$t3,$31
lw		$31,-12288($31)
addi	$31,$31,4
TAG_2:

addi	$31,$0,12
lw		$31,0($31)
jal		TAG_3
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_3:
nop
jal		TAG_4
addi	$31,$31,4
addu	$31,$t0,$31
TAG_4:
la		$31,TAG_5
jalr	$t3,$31
sw		$31,-8192($31)
addi	$31,$31,4
TAG_5:

la		$t3,TAG_7
addi	$31,$0,24
lw		$31,0($31)
jal		TAG_6
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_6:
nop
jalr	$31,$t3
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_7:
lw		$31,0($31)

la		$t3,TAG_9
addi	$31,$0,20
lw		$31,0($31)
jal		TAG_8
lw		$31,-12288($31)
addi	$31,$31,4
TAG_8:
nop
jalr	$31,$t3
addi	$31,$31,4
sw		$31,-8192($31)
TAG_9:
lw		$31,-12288($31)

la		$t3,TAG_11
addi	$31,$0,8
lw		$31,0($31)
jal		TAG_10
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_10:
nop
jalr	$31,$t3
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_11:
sw		$31,4096($31)

la		$t3,TAG_13
addi	$31,$0,0
lw		$31,0($31)
jal		TAG_12
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_12:
nop
jalr	$31,$t3
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_13:
sw		$31,-8192($31)

la		$t3,TAG_15
addi	$31,$0,24
lw		$31,0($31)
jal		TAG_14
addi	$31,$31,4
addu	$31,$t0,$31
TAG_14:
nop
jalr	$31,$t3
addi	$31,$31,4
addu	$31,$t0,$31
TAG_15:
addu	$31,$t0,$31

la		$t3,TAG_17
addi	$31,$0,16
lw		$31,0($31)
jal		TAG_16
lw		$31,-12288($31)
lw		$31,0($31)
TAG_16:
nop
jalr	$31,$t3
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_17:
addu	$31,$t0,$31

la		$t3,TAG_19
addi	$31,$0,24
lw		$31,0($31)
jal		TAG_18
lw		$31,-12288($31)
addi	$31,$31,4
TAG_18:
nop
jalr	$31,$t3
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_19:
addu	$31,$31,$t0

la		$t3,TAG_21
addi	$31,$0,0
lw		$31,0($31)
jal		TAG_20
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_20:
nop
jalr	$31,$t3
addi	$31,$31,4
addi	$31,$31,4
TAG_21:
addu	$31,$31,$t0

la		$t3,TAG_23
addi	$31,$0,16
lw		$31,0($31)
jal		TAG_22
addu	$31,$31,$t0
addi	$31,$31,4
TAG_22:
nop
jalr	$31,$t3
lw		$31,-12288($31)
addu	$31,$31,$t0
TAG_23:
beq		$31,$31,TAG_24
addu	$31,$t0,$31
sw		$31,4096($31)
TAG_24:

la		$t3,TAG_26
addi	$31,$0,4
lw		$31,0($31)
jal		TAG_25
sw		$31,-8192($31)
addi	$31,$31,4
TAG_25:
nop
jalr	$31,$t3
addi	$31,$31,4
addu	$31,$t0,$31
TAG_26:
beq		$31,$31,TAG_27
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_27:

la		$t3,TAG_29
addi	$31,$0,0
lw		$31,0($31)
jal		TAG_28
addu	$31,$31,$t0
lw		$31,-12288($31)
TAG_28:
nop
jalr	$31,$t3
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_29:
beq		$31,$0,TAG_30
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_30:

la		$t3,TAG_32
addi	$31,$0,12
lw		$31,0($31)
jal		TAG_31
addi	$31,$31,4
addi	$31,$31,4
TAG_31:
nop
jalr	$31,$t3
addu	$31,$t0,$31
addi	$31,$31,4
TAG_32:
beq		$31,$0,TAG_33
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_33:

la		$t3,TAG_35
addi	$31,$0,8
lw		$31,0($31)
jal		TAG_34
addu	$31,$31,$t0
lw		$31,-12288($31)
TAG_34:
nop
jalr	$31,$t3
addi	$31,$31,4
addi	$31,$31,4
TAG_35:
addi	$t1,$31,0
beq		$t1,$31,TAG_36
sw		$31,-8192($31)
addi	$31,$31,4
TAG_36:

la		$t3,TAG_38
addi	$31,$0,20
lw		$31,0($31)
jal		TAG_37
addi	$31,$31,4
addu	$31,$t0,$31
TAG_37:
nop
jalr	$31,$t3
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_38:
addi	$t1,$31,0
beq		$t1,$31,TAG_39
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_39:

la		$t3,TAG_41
addi	$31,$0,28
lw		$31,0($31)
jal		TAG_40
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_40:
nop
jalr	$31,$t3
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_41:
addi	$t1,$31,1
beq		$31,$t1,TAG_42
addu	$31,$31,$t0
addi	$31,$31,4
TAG_42:

la		$t3,TAG_44
addi	$31,$0,4
lw		$31,0($31)
jal		TAG_43
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_43:
nop
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_44:
addi	$t1,$31,1
beq		$31,$t1,TAG_45
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_45:

la		$t3,TAG_47
addi	$31,$0,20
lw		$31,0($31)
jal		TAG_46
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_46:
nop
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_47:
addi	$31,$31,4

la		$t3,TAG_49
addi	$31,$0,16
lw		$31,0($31)
jal		TAG_48
addu	$31,$31,$t0
addi	$31,$31,4
TAG_48:
nop
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_49:
addi	$31,$31,4

la		$t3,TAG_51
addi	$31,$0,8
lw		$31,0($31)
jal		TAG_50
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_50:
nop
jalr	$31,$t3
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_51:
la		$31,TAG_52
jr		$31
lw		$31,-12288($31)
lw		$31,0($31)
TAG_52:

la		$t3,TAG_54
addi	$31,$0,8
lw		$31,0($31)
jal		TAG_53
addi	$31,$31,4
addi	$31,$31,4
TAG_53:
nop
jalr	$31,$t3
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_54:
la		$31,TAG_55
jr		$31
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_55:

la		$t3,TAG_57
addi	$31,$0,20
lw		$31,0($31)
jal		TAG_56
sw		$31,-8192($31)
addi	$31,$31,4
TAG_56:
nop
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_57:
la		$31,TAG_58
jalr	$t3,$31
lw		$31,-12288($31)
lw		$31,0($31)
TAG_58:

la		$t3,TAG_60
addi	$31,$0,8
lw		$31,0($31)
jal		TAG_59
sw		$31,-8192($31)
sw		$31,-8192($31)
TAG_59:
nop
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_60:
la		$31,TAG_61
jalr	$t3,$31
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_61:

addi	$31,$0,16
lw		$31,0($31)
jal		TAG_62
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_62:
nop
nop
lw		$31,-12288($31)

addi	$31,$0,20
lw		$31,0($31)
jal		TAG_63
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_63:
nop
nop
lw		$31,-12288($31)

addi	$31,$0,20
lw		$31,0($31)
jal		TAG_64
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_64:
nop
nop
sw		$31,-8192($31)

addi	$31,$0,28
lw		$31,0($31)
jal		TAG_65
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_65:
nop
nop
sw		$31,-8192($31)

addi	$31,$0,28
lw		$31,0($31)
jal		TAG_66
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_66:
nop
nop
addu	$31,$t0,$31

addi	$31,$0,16
lw		$31,0($31)
jal		TAG_67
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_67:
nop
nop
addu	$31,$t0,$31

addi	$31,$0,28
lw		$31,0($31)
jal		TAG_68
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_68:
nop
nop
addu	$31,$31,$t0

addi	$31,$0,8
lw		$31,0($31)
jal		TAG_69
addi	$31,$31,4
lw		$31,-12288($31)
TAG_69:
nop
nop
addu	$31,$31,$t0

addi	$31,$0,20
lw		$31,0($31)
jal		TAG_70
lw		$31,-12288($31)
lw		$31,0($31)
TAG_70:
nop
nop
beq		$31,$31,TAG_71
sw		$31,4096($31)
sw		$31,4096($31)
TAG_71:

addi	$31,$0,28
lw		$31,0($31)
jal		TAG_72
lw		$31,-12288($31)
addu	$31,$31,$t0
TAG_72:
nop
nop
beq		$31,$31,TAG_73
lw		$31,0($31)
lw		$31,0($31)
TAG_73:

addi	$31,$0,0
lw		$31,0($31)
jal		TAG_74
addi	$31,$31,4
lw		$31,-12288($31)
TAG_74:
nop
nop
beq		$31,$0,TAG_75
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_75:

addi	$31,$0,20
lw		$31,0($31)
jal		TAG_76
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_76:
nop
nop
beq		$31,$0,TAG_77
addu	$31,$31,$t0
lw		$31,-12288($31)
TAG_77:

addi	$31,$0,24
lw		$31,0($31)
jal		TAG_78
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_78:
nop
nop
addi	$t1,$31,0
beq		$t1,$31,TAG_79
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_79:

addi	$31,$0,28
lw		$31,0($31)
jal		TAG_80
addu	$31,$t0,$31
addi	$31,$31,4
TAG_80:
nop
nop
addi	$t1,$31,0
beq		$t1,$31,TAG_81
addu	$31,$31,$t0
addi	$31,$31,4
TAG_81:

addi	$31,$0,28
lw		$31,0($31)
jal		TAG_82
addi	$31,$31,4
lw		$31,-12288($31)
TAG_82:
nop
nop
addi	$t1,$31,1
beq		$31,$t1,TAG_83
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_83:

addi	$31,$0,4
lw		$31,0($31)
jal		TAG_84
addu	$31,$31,$t0
addi	$31,$31,4
TAG_84:
nop
nop
addi	$t1,$31,1
beq		$31,$t1,TAG_85
addi	$31,$31,4
addu	$31,$31,$t0
TAG_85:

addi	$31,$0,28
lw		$31,0($31)
jal		TAG_86
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_86:
nop
nop
addi	$31,$31,4

addi	$31,$0,4
lw		$31,0($31)
jal		TAG_87
addi	$31,$31,4
addu	$31,$31,$t0
TAG_87:
nop
nop
addi	$31,$31,4

addi	$31,$0,24
lw		$31,0($31)
jal		TAG_88
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_88:
nop
nop
la		$31,TAG_89
jr		$31
addu	$31,$31,$t0
lw		$31,-12288($31)
TAG_89:

addi	$31,$0,24
lw		$31,0($31)
jal		TAG_90
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_90:
nop
nop
la		$31,TAG_91
jr		$31
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_91:

addi	$31,$0,8
lw		$31,0($31)
jal		TAG_92
addu	$31,$31,$t0
addi	$31,$31,4
TAG_92:
nop
nop
la		$31,TAG_93
jalr	$t3,$31
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_93:

addi	$31,$0,8
lw		$31,0($31)
jal		TAG_94
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_94:
nop
nop
la		$31,TAG_95
jalr	$t3,$31
lw		$31,-12288($31)
lw		$31,0($31)
TAG_95:

la		$t3,TAG_96
addi	$31,$0,12
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_96:
lw		$31,-12288($31)
lw		$31,0($31)
lw		$31,0($31)

la		$t3,TAG_97
addi	$31,$0,12
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$t0,$31
addi	$31,$31,4
TAG_97:
lw		$31,-12288($31)
lw		$31,0($31)
lw		$31,0($31)

la		$t3,TAG_98
addi	$31,$0,12
lw		$31,0($31)
jalr	$31,$t3
sw		$31,-8192($31)
lw		$31,-12288($31)
TAG_98:
lw		$31,-12288($31)
lw		$31,0($31)
sw		$31,4096($31)

la		$t3,TAG_99
addi	$31,$0,8
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
addi	$31,$31,4
TAG_99:
lw		$31,-12288($31)
lw		$31,0($31)
sw		$31,4096($31)

la		$t3,TAG_100
addi	$31,$0,4
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_100:
lw		$31,-12288($31)
lw		$31,0($31)
addu	$31,$t0,$31

la		$t3,TAG_101
addi	$31,$0,28
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_101:
lw		$31,-12288($31)
lw		$31,0($31)
addu	$31,$t0,$31

la		$t3,TAG_102
addi	$31,$0,8
lw		$31,0($31)
jalr	$31,$t3
lw		$31,-12288($31)
lw		$31,0($31)
TAG_102:
lw		$31,0($31)
lw		$31,0($31)
addu	$31,$31,$t0

la		$t3,TAG_103
addi	$31,$0,16
lw		$31,0($31)
jalr	$31,$t3
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_103:
lw		$31,-12288($31)
lw		$31,0($31)
addu	$31,$31,$t0

la		$t3,TAG_104
addi	$31,$0,0
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
addi	$31,$31,4
TAG_104:
lw		$31,-12288($31)
lw		$31,0($31)
beq		$31,$31,TAG_105
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_105:

la		$t3,TAG_106
addi	$31,$0,20
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
addu	$31,$t0,$31
TAG_106:
lw		$31,-12288($31)
lw		$31,0($31)
beq		$31,$31,TAG_107
lw		$31,0($31)
sw		$31,4096($31)
TAG_107:

la		$t3,TAG_108
addi	$31,$0,20
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$31,$t0
lw		$31,-12288($31)
TAG_108:
lw		$31,-12288($31)
lw		$31,0($31)
beq		$31,$0,TAG_109
sw		$31,4096($31)
sw		$31,4096($31)
TAG_109:

la		$t3,TAG_110
addi	$31,$0,0
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
sw		$31,-8192($31)
TAG_110:
lw		$31,-12288($31)
lw		$31,0($31)
beq		$31,$0,TAG_111
addu	$31,$31,$t0
lw		$31,0($31)
TAG_111:

la		$t3,TAG_112
addi	$31,$0,20
lw		$31,0($31)
jalr	$31,$t3
sw		$31,-8192($31)
lw		$31,-12288($31)
TAG_112:
lw		$31,-12288($31)
lw		$31,0($31)
addi	$t1,$31,0
beq		$t1,$31,TAG_113
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_113:

la		$t3,TAG_114
addi	$31,$0,0
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
addu	$31,$t0,$31
TAG_114:
lw		$31,-12288($31)
lw		$31,0($31)
addi	$t1,$31,0
beq		$t1,$31,TAG_115
addu	$31,$t0,$31
addi	$31,$31,4
TAG_115:

la		$t3,TAG_116
addi	$31,$0,4
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
sw		$31,-8192($31)
TAG_116:
lw		$31,-12288($31)
lw		$31,0($31)
addi	$t1,$31,1
beq		$31,$t1,TAG_117
addu	$31,$31,$t0
addi	$31,$31,4
TAG_117:

la		$t3,TAG_118
addi	$31,$0,0
lw		$31,0($31)
jalr	$31,$t3
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_118:
lw		$31,-12288($31)
lw		$31,0($31)
addi	$t1,$31,1
beq		$31,$t1,TAG_119
sw		$31,4096($31)
addi	$31,$31,4
TAG_119:

la		$t3,TAG_120
addi	$31,$0,16
lw		$31,0($31)
jalr	$31,$t3
lw		$31,-12288($31)
addu	$31,$31,$t0
TAG_120:
lw		$31,0($31)
lw		$31,0($31)
addi	$31,$31,4

la		$t3,TAG_121
addi	$31,$0,24
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_121:
lw		$31,-12288($31)
lw		$31,0($31)
addi	$31,$31,4

la		$t3,TAG_122
addi	$31,$0,4
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
addu	$31,$t0,$31
TAG_122:
lw		$31,-12288($31)
lw		$31,0($31)
la		$31,TAG_123
jr		$31
addu	$31,$t0,$31
addi	$31,$31,4
TAG_123:

la		$t3,TAG_124
addi	$31,$0,28
lw		$31,0($31)
jalr	$31,$t3
addi	$31,$31,4
addi	$31,$31,4
TAG_124:
lw		$31,-12288($31)
lw		$31,0($31)
la		$31,TAG_125
jr		$31
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_125:

la		$t3,TAG_126
addi	$31,$0,8
lw		$31,0($31)
jalr	$31,$t3
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_126:
lw		$31,-12288($31)
lw		$31,0($31)
la		$31,TAG_127
jalr	$t3,$31
addi	$31,$31,4
lw		$31,-12288($31)
TAG_127:

la		$t3,TAG_128
addi	$31,$0,8
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_128:
lw		$31,-12288($31)
lw		$31,0($31)
la		$31,TAG_129
jalr	$t3,$31
addi	$31,$31,4
addu	$31,$31,$t0
TAG_129:

la		$t3,TAG_130
addi	$31,$0,8
lw		$31,0($31)
jalr	$31,$t3
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_130:
lw		$31,0($31)
addu	$31,$t0,$31
lw		$31,0($31)

la		$t3,TAG_131
addi	$31,$0,4
lw		$31,0($31)
jalr	$31,$t3
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_131:
lw		$31,-12288($31)
addu	$31,$t0,$31
lw		$31,0($31)

#--------------

addi	$t0,$0,2222
sw		$t0,2048($0)
addi	$t0,$0,3333
sw		$t0,2052($0)
addi	$t0,$0,4444
sw		$t0,2056($0)