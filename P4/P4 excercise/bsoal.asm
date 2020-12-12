ori $t0,$t0,0x000000ff1
ori $t2,$t2,1
nop#bsoal1
ori $t1,$t1,2
ori $t2,$t2,1
subu $t0,$t0,$t2
nop#bsoal2
addu $t0,$t0,$t2
nop#bsoal2
bsoal1:
jr $ra
ori $t1,$t1,2
ori $t2,$t2,1
bsoal2:
ori $t3,$t3,1
