ori $1,$1,1
ori $2,$2,2
##prepare

addu $3,$1,$2
addu $4,$3,$3

addu $4,$3,$3
subu $4,$4,$3

addu $3,$1,$2
ori $4,$3,$0

addu $3,$1,$2
sw $3,0($zero)

addu $3,$1,$2
lw $4,$

