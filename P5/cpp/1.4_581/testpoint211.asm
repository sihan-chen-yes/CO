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

la		$t3,TAG_0
la		$t4,TAG_1
addi	$31,$0,8
jalr	$0,$t3
lw		$31,0($31)
lw		$31,0($31)
TAG_0:
addi	$0,$31,4
jalr	$0,$t4
lw		$31,0($31)
addu	$0,$31,$t0
TAG_1:
beq		$31,$31,TAG_2
lw		$31,0($31)
lw		$0,0($31)
TAG_2:

la		$t3,TAG_3
la		$t4,TAG_4
addi	$31,$0,0
jalr	$0,$t3
addu	$0,$31,$t0
sw		$31,4096($31)
TAG_3:
addi	$0,$31,4
jalr	$0,$t4
lw		$0,0($31)
addu	$31,$t0,$31
TAG_4:
beq		$31,$0,TAG_5
addu	$0,$31,$t0
lw		$31,0($31)
TAG_5:

la		$t3,TAG_6
la		$t4,TAG_7
addi	$31,$0,24
jalr	$0,$t3
lw		$31,0($31)
sw		$31,4096($31)
TAG_6:
addi	$0,$31,4
jalr	$0,$t4
lw		$31,0($31)
addu	$31,$t0,$31
TAG_7:
beq		$31,$0,TAG_8
sw		$31,4096($31)
sw		$31,4096($31)
TAG_8:

la		$t3,TAG_9
la		$t4,TAG_10
addi	$31,$0,12
jalr	$0,$t3
sw		$31,4096($31)
addu	$31,$t0,$31
TAG_9:
addi	$0,$31,4
jalr	$0,$t4
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_10:
addi	$t1,$31,0
beq		$t1,$31,TAG_11
addu	$31,$t0,$31
lw		$31,0($31)
TAG_11:

la		$t3,TAG_12
la		$t4,TAG_13
addi	$31,$0,0
jalr	$0,$t3
lw		$0,0($31)
lw		$0,0($31)
TAG_12:
addi	$0,$31,4
jalr	$0,$t4
sw		$31,4096($31)
sw		$31,4096($31)
TAG_13:
addi	$t1,$31,0
beq		$t1,$31,TAG_14
sw		$31,4096($31)
sw		$31,4096($31)
TAG_14:

la		$t3,TAG_15
la		$t4,TAG_16
addi	$31,$0,12
jalr	$0,$t3
addu	$0,$31,$t0
addu	$31,$t0,$31
TAG_15:
addi	$0,$31,4
jalr	$0,$t4
lw		$0,0($31)
lw		$31,0($31)
TAG_16:
addi	$t1,$31,1
beq		$31,$t1,TAG_17
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_17:

la		$t3,TAG_18
la		$t4,TAG_19
addi	$31,$0,28
jalr	$0,$t3
lw		$31,0($31)
lw		$0,0($31)
TAG_18:
addi	$0,$31,4
jalr	$0,$t4
lw		$0,0($31)
addu	$31,$t0,$31
TAG_19:
addi	$t1,$31,1
beq		$31,$t1,TAG_20
addu	$0,$31,$t0
addu	$31,$t0,$31
TAG_20:

la		$t3,TAG_21
la		$t4,TAG_22
addi	$31,$0,4
jalr	$0,$t3
lw		$0,0($31)
addu	$0,$31,$t0
TAG_21:
addi	$0,$31,4
jalr	$0,$t4
lw		$31,0($31)
lw		$31,0($31)
TAG_22:
addi	$31,$31,4

la		$t3,TAG_23
la		$t4,TAG_24
addi	$31,$0,4
jalr	$0,$t3
lw		$0,0($31)
addu	$31,$t0,$31
TAG_23:
addi	$0,$31,4
jalr	$0,$t4
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_24:
addi	$31,$31,4

la		$t3,TAG_25
la		$t4,TAG_26
addi	$31,$0,20
jalr	$0,$t3
lw		$0,0($31)
sw		$31,4096($31)
TAG_25:
addi	$0,$31,4
jalr	$0,$t4
sw		$31,4096($31)
lw		$0,0($31)
TAG_26:
la		$31,TAG_27
jr		$31
lw		$0,-12288($31)
addu	$31,$t0,$31
TAG_27:

la		$t3,TAG_28
la		$t4,TAG_29
addi	$31,$0,12
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_28:
addi	$0,$31,4
jalr	$0,$t4
lw		$0,0($31)
addu	$31,$t0,$31
TAG_29:
la		$31,TAG_30
jr		$31
lw		$31,-12288($31)
addu	$0,$31,$t0
TAG_30:

la		$t3,TAG_31
la		$t4,TAG_32
addi	$31,$0,8
jalr	$0,$t3
addu	$31,$t0,$31
lw		$0,0($31)
TAG_31:
addi	$0,$31,4
jalr	$0,$t4
addu	$0,$31,$t0
addu	$31,$t0,$31
TAG_32:
la		$31,TAG_33
jalr	$t3,$31
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_33:

la		$t3,TAG_34
la		$t4,TAG_35
addi	$31,$0,0
jalr	$0,$t3
addu	$31,$t0,$31
lw		$0,0($31)
TAG_34:
addi	$0,$31,4
jalr	$0,$t4
lw		$31,0($31)
lw		$31,0($31)
TAG_35:
la		$31,TAG_36
jalr	$t3,$31
lw		$31,-12288($31)
lw		$31,0($31)
TAG_36:

la		$t3,TAG_37
addi	$31,$0,16
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_37:
addi	$0,$31,4
nop
lw		$31,0($31)

la		$t3,TAG_38
addi	$31,$0,4
jalr	$0,$t3
sw		$31,4096($31)
addu	$0,$31,$t0
TAG_38:
addi	$0,$31,4
nop
lw		$31,0($31)

la		$t3,TAG_39
addi	$31,$0,4
jalr	$0,$t3
lw		$31,0($31)
addu	$31,$t0,$31
TAG_39:
addi	$0,$31,4
nop
sw		$31,4096($31)

la		$t3,TAG_40
addi	$31,$0,12
jalr	$0,$t3
addu	$0,$31,$t0
addu	$0,$31,$t0
TAG_40:
addi	$0,$31,4
nop
sw		$31,4096($31)

la		$t3,TAG_41
addi	$31,$0,8
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_41:
addi	$0,$31,4
nop
addu	$31,$t0,$31

la		$t3,TAG_42
addi	$31,$0,20
jalr	$0,$t3
addu	$0,$31,$t0
lw		$0,0($31)
TAG_42:
addi	$0,$31,4
nop
addu	$31,$t0,$31

la		$t3,TAG_43
addi	$31,$0,12
jalr	$0,$t3
addu	$31,$t0,$31
lw		$0,0($31)
TAG_43:
addi	$0,$31,4
nop
addu	$31,$31,$t0

la		$t3,TAG_44
addi	$31,$0,0
jalr	$0,$t3
lw		$0,0($31)
lw		$31,0($31)
TAG_44:
addi	$0,$31,4
nop
addu	$31,$31,$t0

la		$t3,TAG_45
addi	$31,$0,0
jalr	$0,$t3
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_45:
addi	$0,$31,4
nop
beq		$31,$31,TAG_46
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_46:

la		$t3,TAG_47
addi	$31,$0,0
jalr	$0,$t3
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_47:
addi	$0,$31,4
nop
beq		$31,$31,TAG_48
lw		$0,0($31)
lw		$0,0($31)
TAG_48:

la		$t3,TAG_49
addi	$31,$0,24
jalr	$0,$t3
addu	$31,$t0,$31
lw		$31,0($31)
TAG_49:
addi	$0,$31,4
nop
beq		$31,$0,TAG_50
sw		$31,4096($31)
addu	$31,$t0,$31
TAG_50:

la		$t3,TAG_51
addi	$31,$0,12
jalr	$0,$t3
addu	$0,$31,$t0
addu	$0,$31,$t0
TAG_51:
addi	$0,$31,4
nop
beq		$31,$0,TAG_52
addu	$0,$31,$t0
lw		$0,0($31)
TAG_52:

la		$t3,TAG_53
addi	$31,$0,12
jalr	$0,$t3
addu	$0,$31,$t0
lw		$0,0($31)
TAG_53:
addi	$0,$31,4
nop
addi	$t1,$31,0
beq		$t1,$31,TAG_54
sw		$31,4096($31)
sw		$31,4096($31)
TAG_54:

la		$t3,TAG_55
addi	$31,$0,28
jalr	$0,$t3
lw		$0,0($31)
addu	$31,$t0,$31
TAG_55:
addi	$0,$31,4
nop
addi	$t1,$31,0
beq		$t1,$31,TAG_56
lw		$0,0($31)
sw		$31,4096($31)
TAG_56:

la		$t3,TAG_57
addi	$31,$0,12
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_57:
addi	$0,$31,4
nop
addi	$t1,$31,1
beq		$31,$t1,TAG_58
lw		$0,0($31)
addu	$31,$t0,$31
TAG_58:

la		$t3,TAG_59
addi	$31,$0,8
jalr	$0,$t3
lw		$0,0($31)
sw		$31,4096($31)
TAG_59:
addi	$0,$31,4
nop
addi	$t1,$31,1
beq		$31,$t1,TAG_60
sw		$31,4096($31)
addu	$0,$31,$t0
TAG_60:

la		$t3,TAG_61
addi	$31,$0,28
jalr	$0,$t3
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_61:
addi	$0,$31,4
nop
addi	$31,$31,4

la		$t3,TAG_62
addi	$31,$0,24
jalr	$0,$t3
lw		$0,0($31)
sw		$31,4096($31)
TAG_62:
addi	$0,$31,4
nop
addi	$31,$31,4

la		$t3,TAG_63
addi	$31,$0,16
jalr	$0,$t3
addu	$31,$t0,$31
sw		$31,4096($31)
TAG_63:
addi	$0,$31,4
nop
la		$31,TAG_64
jr		$31
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_64:

la		$t3,TAG_65
addi	$31,$0,20
jalr	$0,$t3
addu	$0,$31,$t0
lw		$0,0($31)
TAG_65:
addi	$0,$31,4
nop
la		$31,TAG_66
jr		$31
lw		$0,-12288($31)
addu	$0,$31,$t0
TAG_66:

la		$t3,TAG_67
addi	$31,$0,0
jalr	$0,$t3
lw		$0,0($31)
lw		$0,0($31)
TAG_67:
addi	$0,$31,4
nop
la		$31,TAG_68
jalr	$t3,$31
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_68:

la		$t3,TAG_69
addi	$31,$0,16
jalr	$0,$t3
lw		$0,0($31)
lw		$31,0($31)
TAG_69:
addi	$0,$31,4
nop
la		$31,TAG_70
jalr	$t3,$31
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_70:

la		$t3,TAG_71
addi	$31,$0,24
jalr	$0,$t3
lw		$31,0($31)
lw		$0,0($31)
TAG_71:
jal		TAG_72
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_72:
lw		$31,-12288($31)
lw		$31,0($31)

la		$t3,TAG_73
addi	$31,$0,20
jalr	$0,$t3
lw		$0,0($31)
lw		$31,0($31)
TAG_73:
jal		TAG_74
lw		$0,-12288($31)
sw		$31,-8192($31)
TAG_74:
lw		$31,-12288($31)
lw		$31,0($31)

la		$t3,TAG_75
addi	$31,$0,8
jalr	$0,$t3
lw		$31,0($31)
sw		$31,4096($31)
TAG_75:
jal		TAG_76
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_76:
lw		$31,0($31)
sw		$31,4096($31)

la		$t3,TAG_77
addi	$31,$0,4
jalr	$0,$t3
lw		$31,0($31)
lw		$0,0($31)
TAG_77:
jal		TAG_78
lw		$0,-12288($31)
addu	$31,$t0,$31
TAG_78:
lw		$31,-12288($31)
sw		$31,4096($31)

la		$t3,TAG_79
addi	$31,$0,0
jalr	$0,$t3
addu	$0,$31,$t0
sw		$31,4096($31)
TAG_79:
jal		TAG_80
addu	$0,$31,$t0
lw		$31,-12288($31)
TAG_80:
lw		$31,-12288($31)
addu	$31,$t0,$31

la		$t3,TAG_81
addi	$31,$0,24
jalr	$0,$t3
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_81:
jal		TAG_82
lw		$31,-12288($31)
lw		$0,0($31)
TAG_82:
lw		$31,0($31)
addu	$31,$t0,$31

la		$t3,TAG_83
addi	$31,$0,0
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_83:
jal		TAG_84
lw		$31,-12288($31)
lw		$0,0($31)
TAG_84:
lw		$31,0($31)
addu	$31,$31,$t0

la		$t3,TAG_85
addi	$31,$0,20
jalr	$0,$t3
addu	$31,$t0,$31
lw		$0,0($31)
TAG_85:
jal		TAG_86
addu	$0,$31,$t0
addu	$31,$t0,$31
TAG_86:
lw		$31,-12288($31)
addu	$31,$31,$t0

la		$t3,TAG_87
addi	$31,$0,12
jalr	$0,$t3
lw		$31,0($31)
lw		$31,0($31)
TAG_87:
jal		TAG_88
addu	$31,$t0,$31
lw		$0,-12288($31)
TAG_88:
lw		$31,-12288($31)
beq		$31,$31,TAG_89
sw		$31,4096($31)
lw		$0,0($31)
TAG_89:

la		$t3,TAG_90
addi	$31,$0,16
jalr	$0,$t3
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_90:
jal		TAG_91
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_91:
lw		$31,-12288($31)
beq		$31,$31,TAG_92
sw		$31,4096($31)
addu	$31,$t0,$31
TAG_92:

la		$t3,TAG_93
addi	$31,$0,8
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_93:
jal		TAG_94
addu	$0,$31,$t0
addu	$31,$t0,$31
TAG_94:
lw		$31,-12288($31)
beq		$31,$0,TAG_95
lw		$31,0($31)
addu	$31,$t0,$31
TAG_95:

la		$t3,TAG_96
addi	$31,$0,16
jalr	$0,$t3
sw		$31,4096($31)
addu	$31,$t0,$31
TAG_96:
jal		TAG_97
sw		$31,-8192($31)
lw		$0,-12288($31)
TAG_97:
lw		$31,-12288($31)
beq		$31,$0,TAG_98
lw		$0,0($31)
addu	$0,$31,$t0
TAG_98:

la		$t3,TAG_99
addi	$31,$0,24
jalr	$0,$t3
sw		$31,4096($31)
lw		$31,0($31)
TAG_99:
jal		TAG_100
lw		$0,-12288($31)
lw		$31,-12288($31)
TAG_100:
lw		$31,-12288($31)
addi	$t1,$31,0
beq		$t1,$31,TAG_101
sw		$31,4096($31)
addu	$31,$t0,$31
TAG_101:

la		$t3,TAG_102
addi	$31,$0,4
jalr	$0,$t3
addu	$0,$31,$t0
addu	$0,$31,$t0
TAG_102:
jal		TAG_103
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_103:
lw		$31,-12288($31)
addi	$t1,$31,0
beq		$t1,$31,TAG_104
lw		$31,0($31)
lw		$31,0($31)
TAG_104:

la		$t3,TAG_105
addi	$31,$0,24
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_105:
jal		TAG_106
addu	$0,$31,$t0
lw		$0,-12288($31)
TAG_106:
lw		$31,-12288($31)
addi	$t1,$31,1
beq		$31,$t1,TAG_107
lw		$31,0($31)
addu	$31,$t0,$31
TAG_107:

la		$t3,TAG_108
addi	$31,$0,8
jalr	$0,$t3
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_108:
jal		TAG_109
lw		$0,-12288($31)
sw		$31,-8192($31)
TAG_109:
lw		$31,-12288($31)
addi	$t1,$31,1
beq		$31,$t1,TAG_110
addu	$0,$31,$t0
sw		$31,4096($31)
TAG_110:

la		$t3,TAG_111
addi	$31,$0,12
jalr	$0,$t3
lw		$0,0($31)
lw		$0,0($31)
TAG_111:
jal		TAG_112
lw		$0,-12288($31)
lw		$0,-12288($31)
TAG_112:
lw		$31,-12288($31)
addi	$31,$31,4

la		$t3,TAG_113
addi	$31,$0,4
jalr	$0,$t3
lw		$0,0($31)
sw		$31,4096($31)
TAG_113:
jal		TAG_114
addu	$0,$31,$t0
lw		$31,-12288($31)
TAG_114:
lw		$31,-12288($31)
addi	$31,$31,4

la		$t3,TAG_115
addi	$31,$0,12
jalr	$0,$t3
lw		$31,0($31)
addu	$31,$t0,$31
TAG_115:
jal		TAG_116
addu	$0,$31,$t0
lw		$31,-12288($31)
TAG_116:
lw		$31,-12288($31)
la		$31,TAG_117
jr		$31
lw		$31,-12288($31)
lw		$0,0($31)
TAG_117:

la		$t3,TAG_118
addi	$31,$0,12
jalr	$0,$t3
lw		$31,0($31)
lw		$0,0($31)
TAG_118:
jal		TAG_119
addu	$0,$31,$t0
addu	$31,$t0,$31
TAG_119:
lw		$31,-12288($31)
la		$31,TAG_120
jr		$31
lw		$0,-12288($31)
addu	$0,$31,$t0
TAG_120:

la		$t3,TAG_121
addi	$31,$0,24
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_121:
jal		TAG_122
sw		$31,-8192($31)
lw		$0,-12288($31)
TAG_122:
lw		$31,-12288($31)
la		$31,TAG_123
jalr	$t3,$31
lw		$0,-12288($31)
sw		$31,-8192($31)
TAG_123:

la		$t3,TAG_124
addi	$31,$0,4
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_124:
jal		TAG_125
lw		$31,-12288($31)
lw		$31,0($31)
TAG_125:
lw		$31,0($31)
la		$31,TAG_126
jalr	$t3,$31
lw		$31,-12288($31)
addu	$0,$31,$t0
TAG_126:

la		$t3,TAG_127
addi	$31,$0,28
jalr	$0,$t3
sw		$31,4096($31)
addu	$0,$31,$t0
TAG_127:
jal		TAG_128
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_128:
lw		$0,-12288($31)
lw		$31,-12288($31)

la		$t3,TAG_129
addi	$31,$0,12
jalr	$0,$t3
lw		$0,0($31)
addu	$31,$t0,$31
TAG_129:
jal		TAG_130
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_130:
lw		$0,0($31)
lw		$31,0($31)

la		$t3,TAG_131
addi	$31,$0,12
jalr	$0,$t3
addu	$0,$31,$t0
lw		$31,0($31)
TAG_131:
jal		TAG_132
lw		$31,-12288($31)
lw		$0,0($31)
TAG_132:
lw		$0,0($31)
sw		$31,4096($31)

la		$t3,TAG_133
addi	$31,$0,20
jalr	$0,$t3
addu	$31,$t0,$31
addu	$0,$31,$t0
TAG_133:
jal		TAG_134
lw		$0,-12288($31)
lw		$0,-12288($31)
TAG_134:
lw		$0,-12288($31)
sw		$31,-8192($31)

la		$t3,TAG_135
addi	$31,$0,28
jalr	$0,$t3
addu	$31,$t0,$31
lw		$0,0($31)
TAG_135:
jal		TAG_136
addu	$0,$31,$t0
lw		$0,-12288($31)
TAG_136:
lw		$0,-12288($31)
addu	$31,$t0,$31

la		$t3,TAG_137
addi	$31,$0,4
jalr	$0,$t3
lw		$0,0($31)
addu	$31,$t0,$31
TAG_137:
jal		TAG_138
addu	$0,$31,$t0
lw		$31,-12288($31)
TAG_138:
lw		$0,-12288($31)
addu	$31,$t0,$31

la		$t3,TAG_139
addi	$31,$0,8
jalr	$0,$t3
sw		$31,4096($31)
sw		$31,4096($31)
TAG_139:
jal		TAG_140
lw		$0,-12288($31)
lw		$31,-12288($31)
TAG_140:
lw		$0,-12288($31)
addu	$31,$31,$t0

la		$t3,TAG_141
addi	$31,$0,24
jalr	$0,$t3
sw		$31,4096($31)
lw		$0,0($31)
TAG_141:
jal		TAG_142
addu	$0,$31,$t0
addu	$31,$t0,$31
TAG_142:
lw		$0,-12288($31)
addu	$31,$31,$t0

la		$t3,TAG_143
addi	$31,$0,24
jalr	$0,$t3
lw		$0,0($31)
addu	$0,$31,$t0
TAG_143:
jal		TAG_144
lw		$0,-12288($31)
addu	$31,$t0,$31
TAG_144:
lw		$0,-12288($31)
beq		$31,$31,TAG_145
addu	$0,$31,$t0
addu	$0,$31,$t0
TAG_145:

la		$t3,TAG_146
addi	$31,$0,20
jalr	$0,$t3
lw		$31,0($31)
addu	$31,$t0,$31
TAG_146:
jal		TAG_147
lw		$31,-12288($31)
lw		$31,0($31)
TAG_147:
lw		$0,0($31)
beq		$31,$31,TAG_148
addu	$31,$t0,$31
lw		$0,0($31)
TAG_148:

la		$t3,TAG_149
addi	$31,$0,0
jalr	$0,$t3
sw		$31,4096($31)
sw		$31,4096($31)
TAG_149:
jal		TAG_150
sw		$31,-8192($31)
lw		$0,-12288($31)
TAG_150:
lw		$0,-12288($31)
beq		$31,$0,TAG_151
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_151:

la		$t3,TAG_152
addi	$31,$0,16
jalr	$0,$t3
lw		$0,0($31)
lw		$0,0($31)
TAG_152:
jal		TAG_153
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_153:
lw		$0,-12288($31)
beq		$31,$0,TAG_154
lw		$0,-12288($31)
lw		$31,-12288($31)
TAG_154:

#--------------

addi	$t0,$0,2222
sw		$t0,2048($0)
addi	$t0,$0,3333
sw		$t0,2052($0)
addi	$t0,$0,4444
sw		$t0,2056($0)