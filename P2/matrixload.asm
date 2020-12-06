.data
matrix: .word 0:255 #matrix[16][16]
.text
li $s0,16
li $s1,16
move $t0,$zero #i
move $t1,$zero #j
move $t2,$zero #N
loop:
mult $t0,$s1
mflo $t3 #address [i][j]
add $t3,$t3,$t1
sll $t3,$t3,2
sw $t2,matrix($t3)
addi $t2,$t2,1
addi $t1,$t1,1
bne $t1,$s1,loop
li $t1,0
addi $t0,$t0,1
bne $t0,$s0,loop
li $v0,10
syscall

