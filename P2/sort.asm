.data
symbol:.word 0:6
array: .word 0:6
enter: .asciiz"\n"
space: .asciiz" "
.macro print_enter
la $a0,enter
li $v0,4
syscall
.end_macro

.macro print_space
la $a0,space
li $v0,4
syscall
.end_macro



.text
li $v0,5
syscall
move $s0,$v0 #s0=n
move $a0,$zero
jal FullArray
li $v0,10
syscall


FullArray:
slt $t0,$a0,$s0 #if index < n
beq $t0,1,else
li $t0,0
print:
beq $t0,$s0,print_end
sll $t1,$t0,2 
lw $a0,array($t1)
li $v0,1
syscall
print_space
addi $t0,$t0,1
j print

print_end:
print_enter
jr $ra

else:
li $t0,0 #t0 = i
for:
beq $t0,$s0,for_end
sll $t1,$t0,2
lw $t2,symbol($t1) #t2=symbol[i]
bne $t2,$zero,for_continue
move $t3,$t0
addi $t3,$t3,1 #t3=i+1
sll $t4,$a0,2
sw $t3,array($t4) #a0=index
li $t3,1
sw $t3,symbol($t1) #symbol[i]=1
addi $sp,$sp,-12
sw $t0,8($sp)
sw $ra,4($sp)
sw $a0,0($sp) #befor jal sw
addi $a0,$a0,1
jal FullArray #after jr lw
lw $t0,8($sp)
lw $ra,4($sp)
lw $a0,0($sp)
addi $sp,$sp,12
sll $t1,$t0,2
sw $zero,symbol($t1)
j for_continue

for_continue:
addi $t0,$t0,1
j for
for_end:
jr $ra




