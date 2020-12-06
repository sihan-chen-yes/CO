ori $t0,$t0,0x12340000 #t0=0x12340000
ori $t1,12328
jalr $ra,$t1
j test
ori $t1,$t1,2
subu $t2,$t1,$t0
blez $t2,test
ori $t3,$t3,6
test2:
sll $t0,$t0,2
jr $ra
sllv $t0,$t0,$t1
slt $t0,$t2,$t1
slti $t3,$t2,5
test:
ori $t1,0xffffffff #t3=0xffffffff
sw $t0,0($zero)
sw $t1,4($zero)
sh $t0,8($zero)
sh $t1,10($zero)
sb $t0,12($zero)
sb $t1,13($zero)
lhu $t2,2($zero)
lhu $t2,4($zero)
lh $t2,2($zero)
lh $t2,4($zero)
lb $t3,2($zero)
lbu $t3,2($zero)
lbu $t3,4($zero)
lb $t3,4($zero)

