.data 
a:.word 0:1000


.text
li $v0,5
syscall
move $s0,$v0 #s0=n
beq $s0,0,print_1
li $t0,0 #t0=i
li $t1,1
sw $t1,a($t0) #a[0]=1
li $t0,1 #i=1
move $t6,$t0 #t6=m=1
for_i:
slt $t4,$s0,$t0 #n<i
beq $t4,1,for_i_end
li $t1,0 #j=t1=0
li $t2,0 #c=t2=0
for_j:
slt $t4,$t1,$t6
bne $t4,1,for_j_end
sll $t4,$t1,2
lw $t5,a($t4)
mult $t5,$t0
mflo $t3 
add $t3,$t3,$t2 #s=t3
li $t5,10
div $t3,$t5
mflo $t2
mfhi $t5
sw $t5,a($t4)
addi $t1,$t1,1
j for_j
for_j_end:
addi $t0,$t0,1
beq $t2,$zero,for_i
addi $t6,$t6,1
sll $t4,$t1,2
sw $t2,a($t4)
j for_i

for_i_end:

print:
move $t0,$t6 #i=m-1
addi $t0,$t0,-1
for:
slt $t4,$t0,$zero
beq $t4,1,end
sll $t4,$t0,2
lw $a0,a($t4)
li $v0,1
syscall
addi $t0,$t0,-1
j for






print_1:
la $a0,1
li $v0,1
syscall

end:
li $v0,10
syscall



