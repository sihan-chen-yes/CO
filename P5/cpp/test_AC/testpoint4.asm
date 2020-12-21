.data
	a: .space 4
.text
ori $t1, $0, 1234
nop
ori $t2, $0, 123
addu $t3, $t1, $t2
subu $t4, $t3, $t1
sw $t4, a
lw $t5, a
lui $t6, 1234
beq $t4, $t5, label1
ori $s0, $0, 1 
label1:
ori $s1, $0, 1
beq $t1, $t2, label2
ori $s2, $0, 1
label2:
ori $s3, $0, 1
jal label3
addu $s4, $s4, $s4
jal label4
label3:
ori $s4, $0, 1
jr $ra
label4:
ori $s5, $0, 1