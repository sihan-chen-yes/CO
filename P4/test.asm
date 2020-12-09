.data
a: .word 0:32
.text
ori $t0,$t0,7 #$t0=7
ori $t1,$t1,15 #t1=15
ori $t3,$t3,4 #t3=4
ori $t5,$t5,1 #t5=1
nop
ori $t6,$t6,1
beq $t5,$t6,next
ori $t0,$t0,6
ori $t1,$t1,6
ori $t3,$t3,6
next:
addu $t1,$t0,$t0 #t1=14
subu $t2,$t1,$t0 #t2=7
lw $t4,4($zero)
sw $t1,4($zero)
jal test
addu $s0,$s0,$t5
subu $s0,$s0,$t5
test:
lui $s0,1
jr $ra
