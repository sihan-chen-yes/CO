.data
a: .word 0:10
space:.asciiz" "
.macro print_space
la $a0,space
li $v0,4
syscall
.end_macro
.text
li $v0,5
syscall
move $s0,$v0
li $t0,0
for_in:
slt $t5,$t0,$s0
bne $t5,1,for_in_end
sll $t6,$t0,2
li $v0,5
syscall
sw $v0,a($t6)
add $t0,$t0,1
j for_in 

for_in_end:
li $a0,0
addi $a1,$s0,-1
jal quicksort

li $t0,0
for_out:
slt $t5,$t0,$s0
bne $t5,1,for_out_end
sll $t6,$t0,2
lw $a0,a($t6)
li $v0,1
syscall
print_space
add $t0,$t0,1
j for_out

for_out_end:
li $v0,10
syscall

quicksort:
move $t1,$a0
move $t2,$a1
sll $t6,$t1,2
lw $t3,a($t6)
bge $a0,$a1,end
while:
slt $t5,$t1,$t2
bne $t5,1,while_end
while1:
slt $t5,$t1,$t2
bne $t5,1,while1_end
sll $t6,$t2,2
lw $t4,a($t6)
sle $t5,$t3,$t4
bne $t5,1,while1_end
addi $t2,$t2,-1
j while1

while1_end:
sll $t6,$t2,2
lw $t4,a($t6)
sll $t6,$t1,2
sw $t4,a($t6)

while2:
slt $t5,$t1,$t2
bne $t5,1,while2_end
sll $t6,$t1,2
lw $t4,a($t6)
slt $t5,$t4,$t3
bne $t5,1,while2_end
addi $t1,$t1,1
j while2

while2_end:
sll $t6,$t1,2
lw $t4,a($t6)
sll $t6,$t2,2
sw $t4,a($t6)
j while



while_end:
sll $t6,$t1,2
sw $t3,a($t6)

addi $sp,$sp,-12
sw $ra,8($sp)
sw $a0,4($sp)
sw $a1,0($sp)
move $a0,$a0
addi $a1,$t1,-1
jal quicksort
lw $ra,8($sp)
lw $a0,4($sp)
lw $a1,0($sp)

#addi $sp,$sp,12
#addi $sp,$sp,-12
#sw $ra,8($sp)
#sw $a0,4($sp)
#sw $a1,0($sp)
addi $a0,$t1,1
move $a1,$a1
jal quicksort
lw $ra,8($sp)
lw $a0,4($sp)
lw $a1,0($sp)
addi $sp,$sp,12
jr $ra


end:
jr $ra