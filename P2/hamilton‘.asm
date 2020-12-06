.data
map:.word 0:81
path:.word 0:9
tag:.word 1:9
.macro getindex(%ans,%i,%j)
li $t9,9
mult %i,$t9
mflo %ans
add %ans,%ans,%j
sll %ans,%ans,2
.end_macro

.text
li $v0,5
syscall
move $s0,$v0
li $v0,5
syscall
move $s1,$v0
seq $t7,$s0,1
seq $t8,$s1,1
and $t6,$t7,$t8
beq $t6,1,print_1
li $t0,1
for_i:
sle $t2,$t0,$s1
bne $t2,1,for_i_end
li $v0,5
syscall
move $t3,$v0
li $v0,5
syscall
move $t4,$v0
getindex($t5,$t3,$t4)
li $t2,1
sw $t2,map($t5)
getindex($t5,$t4,$t3)
sw $t2,map($t5)
add $t0,$t0,1
j for_i

for_i_end:
li $t2,1
sll $t5,$t2,2
sw $t2,path($t5)
li $t2,0
sw $t2,tag($t5)
li $a0,1
jal hamilton
beq $v0,1,print_1
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


hamilton:
li $t0,2
for:
sle $t2,$t0,$s0
bne $t2,1,for_end
sll $t5,$t0,2
lw $t3,tag($t5)
bne $t3,1,for_continue
sll $t5,$a0,2
lw $t3,path($t5)
getindex($t5,$t3,$t0)
lw $t4,map($t5)
bne $t4,1,for_continue
add $t3,$s0,-1
bne $a0,$t3,else
li $t5,1
sll $t5,$t5,2
lw $t3,path($t5)
getindex($t5,$t3,$t0)
lw $t4,map($t5)
move $v0,$t4
jr $ra

else:
sll $t5,$t0,2
li $t3,0
sw $t3,tag($t5)
addi $t3,$a0,1
sll $t5,$t3,2
sw $t0,path($t5)
addi $sp,$sp,-12
sw $a0,0($sp)
sw $ra,4($sp)
sw $t0,8($sp)
add $a0,$a0,1
jal hamilton
lw $a0,0($sp)
lw $ra,4($sp)
lw $t0,8($sp)
addi $sp,$sp,12
beq $v0,1,return_1
sll $t5,$t0,2
li $t3,1
sw $t3,tag($t5)

for_continue:
add $t0,$t0,1
j for
return_1:
jr $ra


for_end:
li $v0,0
jr $ra



