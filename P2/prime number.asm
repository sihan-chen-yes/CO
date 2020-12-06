.data
.text
li $v0,5
syscall
move $s0,$v0
li $t1,1
li $t0,2
li $t2,2
div $s0,$t2
mflo $t2
for:
sle $t3,$t0,$t2
bne $t3,1,for_end
div $s0,$t0
mfhi $t3
bne $t3,0,for_continue
li $t1,0
for_continue:
addi $t0,$t0,1
j for

for_end:
bne $s0,1,print
li $t1,0
print:
beq $t1,1,print_1
li $a0,0
li $v0,1
syscall
li $v0,10
syscall
print_1:
li $a0,
li $v0,1
syscall
li $v0,10
syscall
