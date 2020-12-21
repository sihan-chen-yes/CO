.data
	a: .space 4
.text
	j label1
	ori $t0, 100
label1:
	ori $t1, 1
	addu $t2, $t1, $t1# EM
	sw $t2, ($0)
	lw $t3, ($0)
	addu $t4, $t3, $t3 # EW
	lw $t4, ($0)
	sw $t4, ($t0) # MW
	ori $t2, 1
	nop
	nop
	addu $t2, $t2, $t2
	beq $t1, $t2, label1 # DM
	nop
	ori $t2, 1
	nop
	nop
	lw $t2, ($0)
	beq $t1, $t2, label1 # DW
	nop
	jal label2
	ori $s1, 3
	ori $s3, 3
label2:
	beq $s2, $s1, label3
	nop
	jr $ra
	ori $s2, 3
label3:
	ori $s3, 4
