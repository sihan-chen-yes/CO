.text
	ori $s0,$0,15#$s0=15
	ori $s1,$0,31#$s1=31
	
	addu $s2,$s0,$s1#$s2=46
	addu $s3,$s0,$s2#$s3=61
	
	subu $s4,$s3,$s2#$s4=15
	subu $s5,$s2,$s1#$s5=16
	
	lui $s6,6666
	
	sw $s0,0($0)
	sw $s1,4($0)
	
	lw $t0,0($0)
	lw $t1,4($0)
	
	beq $s0,$s1,wuhao
	ori $t0,$0,1
wuhao:
	beq $s1,$s1,jintian
	ori $t3,$0,2
jintian:
	ori $t4,$0,66666
