#ls
lui $1,0x1234
lui $3,0xffff
ori $1,$1,0x5678
ori $3,$3,0xffff
sw $1,0($zero)
sh $1,6($zero)
sb $1,8($zero)
sh $3,10($zero)
lw $2,0($zero)
lh $1,10($zero)
lhu $1,10($zero)
lb $1,10($zero)
lbu $1,10($zero)
