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
addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_0:
beq		$31,$0,TAG_1
addu	$31,$t0,$31
addi	$31,$31,4
TAG_1:

la		$t3,TAG_2
addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addi	$31,$31,4
addu	$31,$t0,$31
TAG_2:
beq		$31,$0,TAG_3
sw		$31,-8192($31)
lw		$31,-12288($31)
TAG_3:

la		$t3,TAG_4
addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addu	$31,$t0,$31
addi	$31,$31,4
TAG_4:
addi	$t1,$31,0
beq		$t1,$31,TAG_5
sw		$31,-8192($31)
lw		$31,-12288($31)
TAG_5:

la		$t3,TAG_6
addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addi	$31,$31,4
addi	$31,$31,4
TAG_6:
addi	$t1,$31,0
beq		$t1,$31,TAG_7
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_7:

la		$t3,TAG_8
addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_8:
addi	$t1,$31,1
beq		$31,$t1,TAG_9
lw		$31,-12288($31)
addi	$31,$31,4
TAG_9:

la		$t3,TAG_10
addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addu	$31,$t0,$31
addi	$31,$31,4
TAG_10:
addi	$t1,$31,1
beq		$31,$t1,TAG_11
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_11:

la		$t3,TAG_12
addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
lw		$31,-12288($31)
lw		$31,0($31)
TAG_12:
addi	$31,$31,4

la		$t3,TAG_13
addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_13:
addi	$31,$31,4

la		$t3,TAG_14
addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
lw		$31,-12288($31)
lw		$31,0($31)
TAG_14:
la		$31,TAG_15
jr		$31
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_15:

la		$t3,TAG_16
addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addi	$31,$31,4
addu	$31,$31,$t0
TAG_16:
la		$31,TAG_17
jr		$31
addi	$31,$31,4
addu	$31,$t0,$31
TAG_17:

la		$t3,TAG_18
addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
sw		$31,-8192($31)
sw		$31,-8192($31)
TAG_18:
la		$31,TAG_19
jalr	$t3,$31
lw		$31,-12288($31)
addi	$31,$31,4
TAG_19:

la		$t3,TAG_20
addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
addi	$31,$31,4
jalr	$31,$t3
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_20:
la		$31,TAG_21
jalr	$t3,$31
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_21:

addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_22
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_22:
lw		$31,-12288($31)
lw		$31,0($31)

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_23
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_23:
lw		$31,0($31)
lw		$31,0($31)

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_24
lw		$31,-12288($31)
lw		$31,0($31)
TAG_24:
lw		$31,0($31)
sw		$31,4096($31)

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_25
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_25:
lw		$31,-12288($31)
sw		$31,4096($31)

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_26
lw		$31,-12288($31)
lw		$31,0($31)
TAG_26:
lw		$31,0($31)
addu	$31,$t0,$31

addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_27
sw		$31,-8192($31)
addi	$31,$31,4
TAG_27:
lw		$31,-12288($31)
addu	$31,$t0,$31

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_28
addu	$31,$31,$t0
lw		$31,-12288($31)
TAG_28:
lw		$31,-12288($31)
addu	$31,$31,$t0

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_29
addu	$31,$31,$t0
addi	$31,$31,4
TAG_29:
lw		$31,-12288($31)
addu	$31,$31,$t0

addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_30
addu	$31,$31,$t0
lw		$31,-12288($31)
TAG_30:
lw		$31,-12288($31)
beq		$31,$31,TAG_31
addu	$31,$31,$t0
addi	$31,$31,4
TAG_31:

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_32
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_32:
lw		$31,-12288($31)
beq		$31,$31,TAG_33
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_33:

addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_34
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_34:
lw		$31,-12288($31)
beq		$31,$0,TAG_35
addi	$31,$31,4
addu	$31,$31,$t0
TAG_35:

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_36
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_36:
lw		$31,-12288($31)
beq		$31,$0,TAG_37
lw		$31,0($31)
addi	$31,$31,4
TAG_37:

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_38
addi	$31,$31,4
addi	$31,$31,4
TAG_38:
lw		$31,-12288($31)
addi	$t1,$31,0
beq		$t1,$31,TAG_39
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_39:

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_40
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_40:
lw		$31,-12288($31)
addi	$t1,$31,0
beq		$t1,$31,TAG_41
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_41:

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_42
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_42:
lw		$31,0($31)
addi	$t1,$31,1
beq		$31,$t1,TAG_43
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_43:

addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_44
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_44:
lw		$31,-12288($31)
addi	$t1,$31,1
beq		$31,$t1,TAG_45
lw		$31,0($31)
addu	$31,$31,$t0
TAG_45:

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_46
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_46:
lw		$31,-12288($31)
addi	$31,$31,4

addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_47
addi	$31,$31,4
addu	$31,$t0,$31
TAG_47:
lw		$31,-12288($31)
addi	$31,$31,4

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_48
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_48:
lw		$31,-12288($31)
la		$31,TAG_49
jr		$31
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_49:

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_50
lw		$31,-12288($31)
addu	$31,$31,$t0
TAG_50:
lw		$31,0($31)
la		$31,TAG_51
jr		$31
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_51:

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_52
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_52:
lw		$31,0($31)
la		$31,TAG_53
jalr	$t3,$31
addi	$31,$31,4
lw		$31,-12288($31)
TAG_53:

addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_54
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_54:
lw		$31,-12288($31)
la		$31,TAG_55
jalr	$t3,$31
lw		$31,-12288($31)
addu	$31,$31,$t0
TAG_55:

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_56
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_56:
addu	$31,$t0,$31
lw		$31,0($31)

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_57
lw		$31,-12288($31)
addi	$31,$31,4
TAG_57:
addu	$31,$t0,$31
lw		$31,0($31)

addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_58
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_58:
addu	$31,$t2,$31
sw		$31,4096($31)

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_59
addi	$31,$31,4
addu	$31,$31,$t0
TAG_59:
addu	$31,$t2,$31
sw		$31,4096($31)

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_60
sw		$31,-8192($31)
addi	$31,$31,4
TAG_60:
addu	$31,$t2,$31
addu	$31,$t0,$31

addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_61
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_61:
addu	$31,$t2,$31
addu	$31,$t0,$31

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_62
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_62:
addu	$31,$t2,$31
addu	$31,$31,$t0

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_63
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_63:
addu	$31,$t2,$31
addu	$31,$31,$t0

addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_64
addu	$31,$31,$t0
addi	$31,$31,4
TAG_64:
addu	$31,$t2,$31
beq		$31,$31,TAG_65
sw		$31,4096($31)
sw		$31,4096($31)
TAG_65:

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_66
sw		$31,-8192($31)
addi	$31,$31,4
TAG_66:
addu	$31,$t2,$31
beq		$31,$31,TAG_67
addi	$31,$31,4
sw		$31,4096($31)
TAG_67:

addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_68
sw		$31,-8192($31)
lw		$31,-12288($31)
TAG_68:
addu	$31,$t2,$31
beq		$31,$0,TAG_69
addu	$31,$t0,$31
addi	$31,$31,4
TAG_69:

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_70
addi	$31,$31,4
addi	$31,$31,4
TAG_70:
addu	$31,$t2,$31
beq		$31,$0,TAG_71
addu	$31,$31,$t0
addu	$31,$t0,$31
TAG_71:

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_72
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_72:
addu	$31,$t2,$31
addi	$t1,$31,0
beq		$t1,$31,TAG_73
addu	$31,$31,$t0
sw		$31,4096($31)
TAG_73:

addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_74
addi	$31,$31,4
lw		$31,-12288($31)
TAG_74:
addu	$31,$t2,$31
addi	$t1,$31,0
beq		$t1,$31,TAG_75
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_75:

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_76
lw		$31,-12288($31)
lw		$31,0($31)
TAG_76:
addu	$31,$t0,$31
addi	$t1,$31,1
beq		$31,$t1,TAG_77
lw		$31,0($31)
addu	$31,$31,$t0
TAG_77:

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_78
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_78:
addu	$31,$t2,$31
addi	$t1,$31,1
beq		$31,$t1,TAG_79
addi	$31,$31,4
addu	$31,$t0,$31
TAG_79:

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_80
addu	$31,$31,$t0
addu	$31,$31,$t0
TAG_80:
addu	$31,$t2,$31
addi	$31,$31,4

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_81
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_81:
addu	$31,$t0,$31
addi	$31,$31,4

addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_82
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_82:
addu	$31,$t2,$31
la		$31,TAG_83
jr		$31
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_83:

addi	$31,$0,20
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_84
addu	$31,$31,$t0
addi	$31,$31,4
TAG_84:
addu	$31,$t2,$31
la		$31,TAG_85
jr		$31
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_85:

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_86
addi	$31,$31,4
addi	$31,$31,4
TAG_86:
addu	$31,$t2,$31
la		$31,TAG_87
jalr	$t3,$31
addi	$31,$31,4
addu	$31,$31,$t0
TAG_87:

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_88
lw		$31,-12288($31)
addu	$31,$t0,$31
TAG_88:
addu	$31,$t0,$31
la		$31,TAG_89
jalr	$t3,$31
addi	$31,$31,4
addu	$31,$t0,$31
TAG_89:

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_90
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_90:
addu	$31,$31,$t2
lw		$31,0($31)

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_91
addi	$31,$31,4
sw		$31,-8192($31)
TAG_91:
addu	$31,$31,$t2
lw		$31,0($31)

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_92
lw		$31,-12288($31)
lw		$31,0($31)
TAG_92:
addu	$31,$31,$t0
sw		$31,4096($31)

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_93
addu	$31,$31,$t0
addi	$31,$31,4
TAG_93:
addu	$31,$31,$t2
sw		$31,4096($31)

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_94
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_94:
addu	$31,$31,$t2
addu	$31,$t0,$31

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_95
addu	$31,$31,$t0
sw		$31,-8192($31)
TAG_95:
addu	$31,$31,$t2
addu	$31,$t0,$31

addi	$31,$0,12
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_96
addu	$31,$t0,$31
addu	$31,$31,$t0
TAG_96:
addu	$31,$31,$t2
addu	$31,$31,$t0

addi	$31,$0,0
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_97
addu	$31,$t0,$31
addi	$31,$31,4
TAG_97:
addu	$31,$31,$t2
addu	$31,$31,$t0

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_98
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_98:
addu	$31,$31,$t0
beq		$31,$31,TAG_99
addi	$31,$31,4
addu	$31,$31,$t0
TAG_99:

addi	$31,$0,28
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_100
addi	$31,$31,4
addi	$31,$31,4
TAG_100:
addu	$31,$31,$t2
beq		$31,$31,TAG_101
addi	$31,$31,4
lw		$31,0($31)
TAG_101:

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_102
addu	$31,$t0,$31
lw		$31,-12288($31)
TAG_102:
addu	$31,$31,$t2
beq		$31,$0,TAG_103
addu	$31,$t0,$31
lw		$31,0($31)
TAG_103:

addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_104
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_104:
addu	$31,$31,$t0
beq		$31,$0,TAG_105
addu	$31,$31,$t0
lw		$31,0($31)
TAG_105:

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_106
addu	$31,$t0,$31
sw		$31,-8192($31)
TAG_106:
addu	$31,$31,$t2
addi	$t1,$31,0
beq		$t1,$31,TAG_107
addi	$31,$31,4
addi	$31,$31,4
TAG_107:

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_108
lw		$31,-12288($31)
addi	$31,$31,4
TAG_108:
addu	$31,$31,$t0
addi	$t1,$31,0
beq		$t1,$31,TAG_109
sw		$31,4096($31)
lw		$31,0($31)
TAG_109:

addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_110
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_110:
addu	$31,$31,$t2
addi	$t1,$31,1
beq		$31,$t1,TAG_111
addu	$31,$t0,$31
lw		$31,0($31)
TAG_111:

addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_112
addi	$31,$31,4
addi	$31,$31,4
TAG_112:
addu	$31,$31,$t2
addi	$t1,$31,1
beq		$31,$t1,TAG_113
sw		$31,4096($31)
sw		$31,4096($31)
TAG_113:

addi	$31,$0,8
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_114
sw		$31,-8192($31)
addu	$31,$31,$t0
TAG_114:
addu	$31,$31,$t2
addi	$31,$31,4

addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_115
addi	$31,$31,4
addi	$31,$31,4
TAG_115:
addu	$31,$31,$t2
addi	$31,$31,4

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_116
sw		$31,-8192($31)
addu	$31,$t0,$31
TAG_116:
addu	$31,$31,$t2
la		$31,TAG_117
jr		$31
lw		$31,-12288($31)
sw		$31,4096($31)
TAG_117:

addi	$31,$0,24
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_118
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_118:
addu	$31,$31,$t2
la		$31,TAG_119
jr		$31
sw		$31,-8192($31)
lw		$31,-12288($31)
TAG_119:

addi	$31,$0,16
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_120
addu	$31,$t0,$31
addu	$31,$t0,$31
TAG_120:
addu	$31,$31,$t2
la		$31,TAG_121
jalr	$t3,$31
addu	$31,$31,$t0
addi	$31,$31,4
TAG_121:

addi	$31,$0,4
addi	$31,$31,4
lw		$31,0($31)
jal		TAG_122
lw		$31,-12288($31)
addu	$31,$31,$t0
TAG_122:
addu	$31,$31,$t0
la		$31,TAG_123
jalr	$t3,$31
sw		$31,-8192($31)
addi	$31,$31,4
TAG_123:

#--------------

addi	$t0,$0,2222
sw		$t0,2048($0)
addi	$t0,$0,3333
sw		$t0,2052($0)
addi	$t0,$0,4444
sw		$t0,2056($0)