#Rtype
ori $1,$1,5 #101
ori $2,$2,3 #011
add $3,$1,$2
sub $3,$1,$2
and $3,$1,$2
or $3,$1,$2
xor $3,$1,$2
nor $3,$1,$2
lui $4,0xffff
lui $5,0x7fff
slt $3,$2,$1
slt $3,$1,$2
slt $3,$4,$5
sltu $3,$4,$5
sll $3,$1,1
sllv $3,$1,$2
srl $3,$1,1
srlv $3,$1,$2
sra $3,$4,1
sra $3,$5,1
srav $3,$4,$2
srav $3,$5,$2
ori $4,$4,0xfffe #-2
mult $4,$2 #-6
mflo $3
mfhi $4
multu $4,$2#6
mflo $3
mfhi $5
div $1,$4
mfhi $3
mflo $5
divu $1,$4
mfhi $3
mflo $5
mthi $1
mtlo $1
mfhi $1
mflo $1
 
