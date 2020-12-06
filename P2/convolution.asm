.data
matrix1:.word 0:100
matrix2:.word 0:100
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

.macro end
li $v0,10
syscall
.end_macro

.macro print_enter
la $a0,enter
li $v0,4
syscall
.end_macro

.text
li $v0,5
syscall
move $s0,$v0 #s0 = m1
li $v0,5
syscall
move $s1,$v0 #s1 = n1
li $v0,5
syscall
move $s2,$v0 #s2 = m2
li $v0,5
syscall
move $s3,$v0 #s3 = n2
li $t0,0
loop_i_matrix1:
beq $t0,$s0,loop_i_matrix1_end

li $t1,0
loop_j_matrix1:
beq $t1,$s1,loop_j_matrix1_end
li $v0,5
syscall
getindex($t2,$t0,$t1,$s1)
sw $v0,matrix1($t2)
addi $t1,$t1,1
j loop_j_matrix1

loop_j_matrix1_end:
addi $t0,$t0,1
j loop_i_matrix1


loop_i_matrix1_end:

li $t0,0
loop_i_matrix2:
beq $t0,$s2,loop_i_matrix2_end

li $t1,0
loop_j_matrix2:
beq $t1,$s3,loop_j_matrix2_end
li $v0,5
syscall
getindex($t2,$t0,$t1,$s3)
sw $v0,matrix2($t2)
addi $t1,$t1,1
j loop_j_matrix2

loop_j_matrix2_end:
addi $t0,$t0,1
j loop_i_matrix2

loop_i_matrix2_end:

li $t0,0 #t0=i
sub $s4,$s0,$s2
addi $s4,$s4,1 #s4 = m1-m2+1
sub $s5,$s1,$s3
addi $s5,$s5,1 #s5 = n1-n2+1
for_i:
beq $t0,$s4,for_i_end
li $t1,0 #t1=j
for_j:
beq $t1,$s5,for_j_end
li $t2,0 #t2=k
li $t4,0 #t4=sum f(i+k,j+l)*h(k,l)
for_k:
beq $t2,$s2,for_k_end
li $t3,0 #t3=l
for_l:
beq $t3,$s3,for_l_end
add $t5,$t0,$t2   #t5=i+k
add $t6,$t1,$t3  #t6=j+l
getindex($t7,$t5,$t6,$s1)
lw $t8,matrix1($t7)
getindex($t7,$t2,$t3,$s3)
lw $t9,matrix2($t7)
mult $t8,$t9
mflo $t7
add $t4,$t4,$t7
addi $t3,$t3,1
j for_l
for_l_end:
addi $t2,$t2,1
j for_k

for_k_end:
move $a0,$t4
li $v0,1
syscall
print_space
addi $t1,$t1,1
j for_j

for_j_end:
print_enter
addi $t0,$t0,1
j for_i

for_i_end:
end
