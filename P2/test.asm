.data
str: .word 0:5
.text
li $v0,12
syscall
move $a0,$v0
li $v0,11
syscall
