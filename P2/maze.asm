.data
matrix: .word 0:64
visited: .word 0:64
.macro getindex(%ans,%i,%j,%r)
mult %i,%r
mflo %ans
add %ans,%ans,%j
sll %ans,%ans,2
.end_macro

.text
li $v0,5
syscall
move $s0,$v0 #s0=m
li $v0,5
syscall
move $s1,$v0 #s1=n
li $t0,1
for_i:
sle $t2,$t0,$s0
beq $t2,0,for_i_end
li $t1,1
for_j:
sle $t2,$t1,$s1
beq $t2,0,for_j_end
getindex($t2,$t0,$t1,$s1)
li $v0,5
syscall
sw $v0,matrix($t2)
addi $t1,$t1,1
j for_j
for_j_end:
addi $t0,$t0,1
j for_i
for_i_end:
li $v0,5
syscall
move $a0,$v0 #a0=m
li $v0,5
syscall
move $a1,$v0 #a1=n
getindex($t2,$a0,$a1,$s1)
li $t0,1
sw $t0,visited($t2) #startx starty
li $v0,5
syscall
move $s3,$v0 #s3=fix
li $v0,5
syscall
move $s4,$v0#s4=fiy
li $s2,0 #s2=ans
jal dfs
move $a0,$s2
li $v0,1
syscall
li $v0,10
syscall

dfs:
bne $a0,$s3,south
bne $a1,$s4,south
addi $s2,$s2,1
jr $ra

south:
addi $t0,$a0,1 #t0=nextx
ble $t0,0,north
bgt $t0,$s0,north
getindex($t1,$t0,$a1,$s1)
lw $t2,visited($t1)
lw $t3,matrix($t1)
bne $t2,$zero,north
bne $t3,$zero,north
li $t4,1
sw $t4,visited($t1) #visited[nextx][y]=1
addi $sp,$sp,-16
sw $t0,12($sp)
sw $ra,8($sp)
sw $a0,4($sp)
sw $a1,0($sp)
move $a0,$t0
jal dfs
lw $t0,12($sp)
lw $ra,8($sp)
lw $a0,4($sp)
lw $a1,0($sp)
addi $sp,$sp,16
getindex($t1,$t0,$a1,$s1)
li $t4,0
sw $t4,visited($t1)

north:
addi $t0,$a0,-1 #t0=nextx
ble $t0,0,east
bgt $t0,$s0,east
getindex($t1,$t0,$a1,$s1)
lw $t2,visited($t1)
lw $t3,matrix($t1)
bne $t2,$zero,east
bne $t3,$zero,east
li $t4,1
sw $t4,visited($t1) #visited[nextx][y]=1
addi $sp,$sp,-16
sw $t0,12($sp)
sw $ra,8($sp)
sw $a0,4($sp)
sw $a1,0($sp)
move $a0,$t0
jal dfs
lw $t0,12($sp)
lw $ra,8($sp)
lw $a0,4($sp)
lw $a1,0($sp)
addi $sp,$sp,16
getindex($t1,$t0,$a1,$s1)
li $t4,0
sw $t4,visited($t1)

east:
addi $t0,$a1,1 #t0=nexty
ble $t0,0,west
bgt $t0,$s1,west
getindex($t1,$a0,$t0,$s1)
lw $t2,visited($t1)
lw $t3,matrix($t1)
bne $t2,$zero,west
bne $t3,$zero,west
li $t4,1
sw $t4,visited($t1) #visited[x][nexty]=1
addi $sp,$sp,-16
sw $t0,12($sp)
sw $ra,8($sp)
sw $a0,4($sp)
sw $a1,0($sp)
move $a1,$t0
jal dfs
lw $t0,12($sp)
lw $ra,8($sp)
lw $a0,4($sp)
lw $a1,0($sp)
addi $sp,$sp,16
getindex($t1,$a0,$t0,$s1)
li $t4,0
sw $t4,visited($t1)

west:
addi $t0,$a1,-1 #t0=nexty
ble $t0,0,end
bgt $t0,$s1,end
getindex($t1,$a0,$t0,$s1)
lw $t2,visited($t1)
lw $t3,matrix($t1)
bne $t2,$zero,end
bne $t3,$zero,end
li $t4,1
sw $t4,visited($t1) #visited[x][nexty]=1
addi $sp,$sp,-16
sw $t0,12($sp)
sw $ra,8($sp)
sw $a0,4($sp)
sw $a1,0($sp)
move $a1,$t0
jal dfs
lw $t0,12($sp)
lw $ra,8($sp)
lw $a0,4($sp)
lw $a1,0($sp)
addi $sp,$sp,16
getindex($t1,$a0,$t0,$s1)
li $t4,0
sw $t4,visited($t1)

end:
jr $ra

