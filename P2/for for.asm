.data
array: .space 40 #each:4Bytes int:32bits  all:40Bytes n<=10
str: .asciiz"The numbers are:\n"

space: .asciiz" "
.text
li $v0,5
syscall
move $s0,$v0 #s0=n

li $t0,0 #i=0
loop_in:
beq $t0,$s0,loop_in_end
li $v0,5
syscall #scanf(N)
sll $t1,$t0,2
sw $v0,array($t1)#array[i]=N
addi $t0,$t0,1#i++
j loop_in

loop_in_end:
la $a0,str
li $v0,4
syscall#print(str)

li $t0,0 #i=0
loop_out:
beq $t0,$s0,loop_out_end
sll $t1,$t0,2
lw $a0,array($t1)
li $v0,1
syscall #print(array[i])
addi $t0,$t0,1#i++
la $a0,space #print(space)
li $v0,4
syscall
j loop_out

loop_out_end:
li $v0,10
syscall
