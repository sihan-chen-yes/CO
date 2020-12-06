.data
matrix1:.word 0:64
matrix2:.word 0:64
enter:.asciiz "\n"
space:.asciiz " "

.macro print_space
la $a0,space
li $v0,4
syscall
.end_macro

.macro print_enter
la $a0,enter
li $v0,4
syscall
.end_macro

.macro getindex(%ans,%i,%j,%r)
mult %i,%r
mflo %ans
add %ans,%ans,%j
sll %ans,%ans,2
.end_macro

.text
li $v0,5
syscall
move $s0,$v0
li $t0,0
loop_i_matrix1:
beq $t0,$s0,loop_i_end_matrix1
li $t1,0

loop_j_matrix1:
beq $t1,$s0,loop_j_end_matrix1
getindex($t2,$t0,$t1,$s0)
li $v0,5
syscall
sw $v0,matrix1($t2)
addi $t1,$t1,1
j loop_j_matrix1
loop_j_end_matrix1:
addi $t0,$t0,1
j loop_i_matrix1
loop_i_end_matrix1:
li $t0,0
loop_i_matrix2:
beq $t0,$s0,loop_i_end_matrix2
li $t1,0

loop_j_matrix2:
beq $t1,$s0,loop_j_end_matrix2
getindex($t2,$t0,$t1,$s0)
li $v0,5
syscall
sw $v0,matrix2($t2)
addi $t1,$t1,1
j loop_j_matrix2
loop_j_end_matrix2:
addi $t0,$t0,1
j loop_i_matrix2
loop_i_end_matrix2:
li $t0,0
loop_i:
beq $t0,$s0,loop_i_end
li $t1,0

loop_j:
beq $t1,$s0,loop_j_end
li $t2,0

loop_k:
beq $t2,$s0,loop_k_end
getindex($t3,$t0,$t2,$s0) #matrix1[i][k]
lw $t4,matrix1($t3)
getindex($t3,$t2,$t1,$s0) #matrix2[k][j]
lw $t5,matrix2($t3)
mult $t4,$t5 #matrix1[i][k]*matrix2[k][j]
mflo $t6
add $s1,$s1,$t6 #matrix[i][j]
addi $t2,$t2,1
j loop_k

loop_k_end:
move $a0,$s1
li $v0,1
syscall
print_space
addi $t1,$t1,1
move $s1,$zero
j loop_j

loop_j_end:
addi $t0,$t0,1
print_enter
j loop_i

loop_i_end:
li $v0,10
syscall






