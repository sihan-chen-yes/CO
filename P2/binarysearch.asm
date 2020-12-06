.data 
number: .word 0:10
.text
li $v0,5
syscall
move $s0,$v0
li $t0,0
for:
slt $t5,$t0,$s0
bne $t5,1,for_end
sll $t6,$t0,2
li $v0,5
syscall
sw $v0,number($t6)
addi $t0,$t0,1
j for
for_end:
li $v0,5
syscall
move $s1,$v0
move $a0,$s1
move $a1,$s0
jal binary
bne $v0,0,print
li $a0,0
li $v0,1
syscall
li $v0,10
syscall
print:
move $a0,$v0
li $v0,1
syscall
li $v0,10
syscall

binary:
li $t0,0
add $t2,$a1,-1
while:
sle $t5,$t0,$t2
bne $t5,1,while_end
add $t1,$t0,$t2
div $t1,$t1,2
sll $t6,$t1,2
lw $t3,number($t6)
beq $t3,$a0,equal
blt $t3,$a0,less
add $t2,$t1,-1
j while
equal:
move $v0,$t1
jr $ra

less:
add $t0,$t1,1
j while

while_end:
li $v0,0
jr $ra