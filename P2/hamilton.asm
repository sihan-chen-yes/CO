.data
a: .word 0:81
b: .word 0:9
.macro getindex(%ans,%i,%j)
move $t9,%i
sll %ans,%i,3
add %ans,%ans,$t9
add %ans,%ans,%j
sll %ans,%ans,2
.end_macro
.text
li $v0,5
syscall
move $s0,$v0 #s0=n
li $v0,5
syscall
move $s1,$v0 #s1=m
li $t0,0
for_i:
slti $t3,$t0,9
bne $t3,1,for_i_end
li $t1,0
for_j:
slti $t3,$t1,9
bne $t3,1,for_j_end
getindex($t3,$t0,$t1)
sw $zero,a($t3)
addi $t1,$t1,1
j for_j

for_j_end:
sll $t3,$t0,2
li $t2,1
sw $t2,b($t3)
addi $t0,$t0,1
j for_i

for_i_end:
li $t0,1
for:
sle $t3,$t0,$s1
bne $t3,1,for_end
li $v0,5
syscall
move $t1,$v0
li $v0,5
syscall
move $t2,$v0         #t1=d1 t2=d2
getindex($t3,$t1,$t2)
li $t4,1
sw $t4,a($t3)
getindex($t3,$t2,$t1)
sw $t4,a($t3)
addi $t0,$t0,1
j  for
for_end:
la $a0,1 #a0 =d1
la $a1,0 #a1= use
jal find
beq $s2,1,print_1 #s2 = judge
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

find:
bne $a1,$s0,for_find
bne $a0,1,for_find
li $s2,1
jr $ra
for_find:
li $t0,1 #t0=d2 a0=d1 a1=use
add $s3,$s0,1 #s3=n+1

for_start:
slt $t1,$t0,$s3
bne $t1,1,for_find_end
getindex($t3,$a0,$t0)
lw $t4,a($t3)
beq $t4,$zero,for_continue
sll $t3,$t0,2
lw $t4,b($t3)
li $t5,1
bne $t4,$t5,for_continue
sw $zero,b($t3)
getindex($t3,$a0,$t0)
lw $t4,a($t3)
addi $t4,$t4,-1
sw $t4,a($t3)
getindex($t3,$t0,$a0)
lw $t4,a($t3)
addi $t4,$t4,-1
sw $t4,a($t3)
addi $sp,$sp,-16
sw $t0,12($sp)
sw $ra,8($sp)
sw $a0,4($sp)
sw $a1,0($sp)
addi $a1,$a1,1
move $a0,$t0
jal find
lw $t0,12($sp)
lw $ra,8($sp)
lw $a0,4($sp)
lw $a1,0($sp)
addi $sp,$sp,16
getindex($t3,$a0,$t0)
lw $t4,a($t3)
addi $t4,$t4,1
sw $t4,a($t3)
getindex($t3,$t0,$a0)
lw $t4,a($t3)
addi $t4,$t4,1
sw $t4,a($t3)
sll $t3,$t0,2
li $t4,1
sw $t4,b($t3)

for_continue:
addi $t0,$t0,1
j for_start

for_find_end:
jr $ra
