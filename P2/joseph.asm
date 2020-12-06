.data
a: .word 0:20
.text
li $v0,5
syscall
move $s0,$v0
li $v0,5
syscall
move $s1,$v0
li $t0,0
li $t1,1
for:
slt $t2,$t0,$s0
bne $t2,1,for_end
sll $t3,$t0,2
sw $t1,a($t3)
addi $t0,$t0,1
addi $t1,$t1,1
j for
for_end:
move $t4,$s0 #t4=j
li $t0,0 #t0=i
while_j:
beq $t4,1,print
bne $t4,$s0,else
addi $t0,$s1,-1
sll $t3,$t0,2
li $t2,0
sw $t2,a($t3)
j if_end
else:
li $t5,0 #t5 = r
while_r:
beq $t5,$s1,while_r_end
addi $t0,$t0,1
div $t0,$s0
mfhi $t0
sll $t3,$t0,2
lw $t6,a($t3)
beq $t6,0,while_r
addi $t5,$t5,1
j while_r

while_r_end:
sll $t3,$t0,2
li $t2,0
sw $t2,a($t3)
if_end:
addi $t4,$t4,-1
j while_j



print:
li $t0,0
for_print:
slt $t2,$t0,$s0
bne $t2,1,end
sll $t3,$t0,2
lw $t2,a($t3)
beq $t2,0,for_continue
move $a0,$t2
li $v0,1
syscall
j end

for_continue:
addi $t0,$t0,1
j for_print
end:
li $v0,10
syscall