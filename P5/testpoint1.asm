ori $1,$1,1
ori $2,$2,4
ori $8,$8,0x306c
subu $3,$1,$2
addu $1,$3,$2
lui $1,1234
sw $1,0($zero)
lw $4,0($zero)
addu $4,$4,$1
ori $5,$5,5
ori $6,$6,5
beq $5,$6,beqt1
addu $2,$2,$1
subu $2,$2,$1
beqt1:
addu $5,$5,$1
beq $5,$6,beqt2
addu $2,$2,$1
subu $2,$2,$1

beqt2:
j jt
addu $5,$5,$1
subu $5,$5,$1

jt:
jal jalt
addu $5,$5,$1
subu $5,$5,$1
addu $5,$5,$1
subu $5,$5,$1
jalt:
ori $7,$7,4
addu $31,$31,$7
beq $31,$8,end
sw $31,0($zero)
lw $31,0($zero)
jr $ra
end:
addu $1,$1,$1
