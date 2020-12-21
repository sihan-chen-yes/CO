.data
a: .space 256
.text
ori $t0, $0, 65535
nop
lui $t1, 65535
ori $t1, $t1, 65535
addu $t2, $t1, $t0
subu $t3, $t2, $t1
subu $t4, $t0, $t1
label1:
addu $t5, $t5, $t0
beq $t5, $t0, label1
ori $t6, $0, 65535
addu $t7, $t6, $t7
jal label2
ori $t8, $0, 65535
label2:
jr $ra
ori $t9, $0, 65535