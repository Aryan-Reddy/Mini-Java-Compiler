.text
.globl main
main: 
sw $fp, -8($sp)
move $fp, $sp
sw $ra, -4($sp)
subu $sp, $sp, 40
li $v1, 4
move $s0, $v1
move $a0, $s0
jal _halloc
move $s0, $v0
li $v1, 4
move $s1, $v1
move $a0, $s1
jal _halloc
move $s1, $v0
la $s2, Fac_ComputeFac
sw $s0, 0($s2)
sw $s1, 0($s0)
lw $s0, 0($s1)
lw $s0, 0($s0)
li $v1, 10
move $s2, $v1
sw $t0, 32($sp)
sw $t1, 28($sp)
sw $t2, 24($sp)
sw $t3, 20($sp)
sw $t4, 16($sp)
sw $t5, 12($sp)
sw $t6, 8($sp)
sw $t7, 4($sp)
sw $t8, 0($sp)
sw $t9, -4($sp)
move $a0, $s1
move $a1, $s2
jalr $s0
lw $t0, 32($sp)
lw $t1, 28($sp)
lw $t2, 24($sp)
lw $t3, 20($sp)
lw $t4, 16($sp)
lw $t5, 12($sp)
lw $t6, 8($sp)
lw $t7, 4($sp)
lw $t8, 0($sp)
lw $t9, -4($sp)
move $s2, $v0
move $a0, $s2
jal _print
addu $sp, $sp, 40
lw $ra, -4($fp)
lw $fp, -8($fp)
jal _exitret
.text
.globl Fac_ComputeFac
Fac_ComputeFac: 
sw $fp, -8($sp)
move $fp, $sp
sw $ra, -4($sp)
subu $sp, $sp, 72
sw $s0, 64($sp)
sw $s1, 60($sp)
sw $s2, 56($sp)
sw $s3, 52($sp)
sw $s4, 48($sp)
sw $s5, 44($sp)
sw $s6, 40($sp)
sw $s7, 36($sp)
move $s0, $a0
move $s1, $a1
li $v1, 0
move $s2, $v1
sle $s2, $s1, $s2
beqz $s2, L2
li $v1, 1
move $s0, $v1
j L3
L2: move $s2, $s0
lw $s3, 0($s2)
lw $s3, 0($s3)
li $v1, 1
move $s4, $v1
sub $s4, $s1, $s4
sw $t0, 32($sp)
sw $t1, 28($sp)
sw $t2, 24($sp)
sw $t3, 20($sp)
sw $t4, 16($sp)
sw $t5, 12($sp)
sw $t6, 8($sp)
sw $t7, 4($sp)
sw $t8, 0($sp)
sw $t9, -4($sp)
move $a0, $s2
move $a1, $s4
jalr $s3
lw $t0, 32($sp)
lw $t1, 28($sp)
lw $t2, 24($sp)
lw $t3, 20($sp)
lw $t4, 16($sp)
lw $t5, 12($sp)
lw $t6, 8($sp)
lw $t7, 4($sp)
lw $t8, 0($sp)
lw $t9, -4($sp)
move $s4, $v0
mul $s4, $s1, $s4
move $s0, $s4
L3: nop
move $v0, $s0
lw $s0, 64($sp)
lw $s1, 60($sp)
lw $s2, 56($sp)
lw $s3, 52($sp)
lw $s4, 48($sp)
lw $s5, 44($sp)
lw $s6, 40($sp)
lw $s7, 36($sp)
addu $sp, $sp, 72
lw $ra, -4($fp)
lw $fp, -8($fp)
jr $ra
.text
.globl _halloc
_halloc:
li $v0, 9
syscall
jr $ra
.text
.globl _print
_print:
li $v0, 1
syscall
la $a0, newl
li $v0, 4
syscall
jr $ra
.data
.align 0
.text
.globl _exitret
_exitret: 
li $v0, 10
syscall
.data
.align 0
newl: .asciiz "\n"
.data
.align 0
str_er:  .asciiz " ERROR: abnormal termination\n"
