.data 
a:.word 0:1000
.macro print_0
move $a0,$zero
li $v0,1
syscall
.end_macro

.text
li $v0,5
syscall
move $s0,$v0 #s0=n
li $t3,1
li $t1,0
li $t0,1
li $t4,0 #t4=k
li $t5,1 #m=t5
sw $t3,a($t1) #a[0]=1
for_i:
slt $t3,$s0,$t0
beq $t3,1,for_i_end
li $t1,0
for_j:
slt $t3,$t1,$t5
bne $t3,1,for_j_end
sll $t2,$t1,2
lw $t3,a($t2) #a[j]
mult $t3,$t0
mflo $t3
add $t3,$t3,$t4
li $t7,10000
div $t3,$t7
mfhi $t3
mflo $t4
sw $t3,a($t2)
addi $t1,$t1,1
j for_j
for_j_end:
addi $t0,$t0,1
beq $t4,$zero,for_i
sll $t2,$t1,2
sw $t4,a($t2)
addi $t5,$t5,1
li $t4,0
j for_i

for_i_end:
move $t0,$t5
addi $t0,$t0,-1
sll $t2,$t0,2
lw $a0,a($t2)
li $v0,1
syscall
addi $t0,$t0,-1
for:
slt $t4,$t0,$zero
beq $t4,1,for_end
sll $t2,$t0,2
lw $a0,a($t2)
li $t2,10
slt $t4,$a0,$t2 #a[i]<10
beq $t4,1,special_1
li $t2,100
slt $t4,$a0,$t2 #a[i]<100
beq $t4,1,special_2
li $t2,1000
slt $t4,$a0,$t2 #a[i]<1000
beq $t4,1,special_3
li $v0,1
syscall
addi $t0,$t0,-1
j for

special_1:
print_0
print_0
print_0
sll $t2,$t0,2
lw $a0,a($t2)
li $v0,1
syscall
addi $t0,$t0,-1
j for

special_2:
print_0
print_0
sll $t2,$t0,2
lw $a0,a($t2)
li $v0,1
syscall
addi $t0,$t0,-1
j for

special_3:
print_0
sll $t2,$t0,2
lw $a0,a($t2)
li $v0,1
syscall
addi $t0,$t0,-1
j for

for_end:
li $v0,10
syscall
