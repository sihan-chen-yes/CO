.text
li $v0,5
syscall
move $s0,$v0
move $a0,$s0
jal fac #fac(n)
move $a0,$v0
li $v0,1
syscall
li $v0,10
syscall






fac: 
addi $sp,$sp,-8
sw $ra,4($sp)
sw $a0,0($sp)
li $t0,2
slt $t0,$a0,$t0
beq $t0,$zero,else
li $v0,1
addi $sp,$sp,8
jr $ra
else:
addi $a0,$a0,-1
jal fac
lw $a0,0($sp)
lw $ra,4($sp)
mult $a0,$v0
mflo $v0
addi $sp,$sp,8
jr $ra