.data
endl:.asciiz "\n"
to:.asciiz " -> "

.text
li $v0,5
syscall
addi $a0,$v0,0
li $a1,65
li $a2,66
li $a3,67
jal hanoi
li $v0,10
syscall

hanoi:
addi $sp,$sp,-20
sw $a0,0($sp)
sw $a1,4($sp)
sw $a2,8($sp)
sw $a3,12($sp)
sw $ra,16($sp)

ble $a0,1,else
addi $a0,$a0,-1
lw $a2,12($sp)
lw $a3,8($sp)
jal hanoi

li $v0,11
lw $a0,4($sp)
syscall
li $v0,4
la $a0,to
syscall
li $v0,11
lw $a0,12($sp)
syscall
li $v0,4
la $a0,endl
syscall

lw $a0,0($sp)
addi $a0,$a0,-1
lw $a1,8($sp)
lw $a2,4($sp)
lw $a3,12($sp)
jal hanoi
j return

else:
li $v0,11
addi $a0,$a1,0
syscall
li $v0,4
la $a0,to
syscall
li $v0,11
addi $a0,$a3,0
syscall
li $v0,4
la $a0,endl
syscall

return:
lw $a0,0($sp)
lw $a1,4($sp)
lw $a2,8($sp)
lw $a3,12($sp)
lw $ra,16($sp)
addi $sp,$sp,20
jr $ra
