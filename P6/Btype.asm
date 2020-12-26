#Btype
ori $1,$1,1
lui $2,0xf000
lui $3,0x7000
bne $1,$2,test1
lui $2,0xf000
lui $2,0xf000
test1:
lui $2,0xf000
lui $2,0xf000
blez $2,test2
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test2:
bltz $0,test3
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test3:
bgtz $1,test4
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test4:
bgtz $0,test5
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test5:
lui $2,0xf000
bne $1,$3,test6
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test6:
blez $0,test7
lui $2,0xf000
lui $2,0xf000
test7:
bltz $2,test8
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test8:
blez $1,test9
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test9:
bltz $1,test10
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test10:
bgtz $1,test11
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test11:
bgez $0,test12
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test12:
bgez $1,test13
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test13:
bgez $2,test14
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000
test14:
lui $2,0xf000
lui $2,0xf000
lui $2,0xf000

