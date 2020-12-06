.data

.text
li $v0,5
syscall
move $s0,$v0 
move $s1,$v0
while:
beq $s1,0,while_end
li $t0,10
div $s1,$t0
mfhi $t1
mflo $s1
mult $t1,$t1
mflo $t2
mult $t2,$t1
mflo $t1
add $t3,$t3,$t1
j while

while_end:
beq $t3,$s0,print_1
li $a0,0
li $v0,1
syscall
li $v0,10
syscall
print_1:
li $a0,1
li $v0,1
syscall
li $v0,10
syscall

