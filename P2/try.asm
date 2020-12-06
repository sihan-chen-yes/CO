.data
matrix:.word 0:8
.text
li $v0,5
syscall
la $s0,matrix
move $t1,$zero
sw $v0,$s0($t1)