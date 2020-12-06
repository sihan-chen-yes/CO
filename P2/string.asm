.data
string: .word 0:20
.macro getindex(%ans,%i)
sll %ans,%i,2
.end_macro

.macro end
li $v0,10
syscall
.end_macro


.text
li $v0,5
syscall
move $s0,$v0 #s0 = n
li $t0,0 #t0 = i
loop:
beq $t0,$s0,loop_end
li $v0,12
syscall
getindex($t1,$t0)
sw $v0,string($t1)
addi $t0,$t0,1
j loop

loop_end:
addi $s0,$s0,-1 #s0 =len - 1
li $t0,0 #t0 = i

loop_judge:
sub $t1,$s0,$t0 #t1=len-1-i
slt $t3,$t0,$t1
beq $t3,$zero,loop_judge_end1
getindex($t3,$t0)
lw $t4,string($t3) #string[i]
getindex($t3,$t1)
lw $t5,string($t3) #string[len-1-i]
bne $t4,$t5,loop_judge_end0
addi $t0,$t0,1
j loop_judge

loop_judge_end1: #print 1
la $a0,1
li $v0,1
syscall
end
loop_judge_end0:#print 0
la $a0,0
li $v0,1
syscall
end

