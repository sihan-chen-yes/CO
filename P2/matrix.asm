.data
matrix: .space 256 #matrix[8][8]
enter: .asciiz"\n"
space: .asciiz" "

.macro getindex(%ans,%i,%j) #index = (i*8+j)*4
	sll %ans,%i,3
	add %ans,%ans,%j
	sll %ans,%ans,2
.end_macro


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

.macro end
	li $v0,10
	syscall
.end_macro

.text
li $v0,5
syscall
move $s0,$v0 #s0 = ni
li $v0,5
syscall
move $s1,$v0 #s1 = nj

li $t0,0
in_i: #for(i=0;i<ni;i++)
beq $t0,$s0,in_i_end
li $t1,0

in_j: #for(j=0;j<nj;j++)
beq $t1,$s1,in_j_end
li $v0,5
syscall
getindex($t2,$t0,$t1)
sw $v0,matrix($t2)
addi $t1,$t1,1
j in_j

in_j_end:
addi $t0,$t0,1
j in_i

in_i_end:

li $t0,0
out_i:
beq $t0,$s0,out_i_end
li $t1,0

out_j:  #for(i=0;i<ni;i++)
beq $t1,$s1,out_j_end
getindex($t2,$t0,$t1)
lw $a0,matrix($t2)
li $v0,1
syscall
print_space
addi $t1,$t1,1
j out_j

out_j_end: #for(j=0;j<nj;j++)
print_enter
addi $t0,$t0,1
j out_i

out_i_end:
end


