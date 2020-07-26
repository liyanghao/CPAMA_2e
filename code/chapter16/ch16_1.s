	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset %rbx, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movl	l___const.main.part1+32(%rip), %eax
	movl	%eax, -40(%rbp)
	movq	l___const.main.part1+24(%rip), %rax
	movq	%rax, -48(%rbp)
	movq	l___const.main.part1+16(%rip), %rax
	movq	%rax, -56(%rbp)
	movq	l___const.main.part1+8(%rip), %rax
	movq	%rax, -64(%rbp)
	movq	l___const.main.part1(%rip), %rax
	movq	%rax, -72(%rbp)
	leaq	-40(%rbp), %r14
	movl	-72(%rbp), %esi
	leaq	L_.str(%rip), %r15
	movq	%r15, %rdi
	xorl	%eax, %eax
	callq	_printf
	leaq	-68(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	movl	-40(%rbp), %esi
	leaq	L_.str.2(%rip), %rbx
	movq	%rbx, %rdi
	xorl	%eax, %eax
	callq	_printf
	movl	$258, -72(%rbp)         ## imm = 0x102
	incl	-40(%rbp)
	movq	%r15, %rdi
	movl	$258, %esi              ## imm = 0x102
	xorl	%eax, %eax
	callq	_printf
	movl	-40(%rbp), %esi
	movq	%rbx, %rdi
	xorl	%eax, %eax
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movq	%r14, %rsi
	xorl	%eax, %eax
	callq	_scanf
	movl	-40(%rbp), %esi
	movq	%rbx, %rdi
	xorl	%eax, %eax
	callq	_printf
	movq	-72(%rbp), %rsi
	movq	-64(%rbp), %rax
	movq	%rsi, -112(%rbp)
	movq	%rax, -104(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -96(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -88(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -80(%rbp)
	leaq	L_.str.4(%rip), %rdi
                                        ## kill: def $esi killed $esi killed $rsi
	xorl	%eax, %eax
	callq	_printf
	leaq	-108(%rbp), %rsi
	leaq	L_.str.5(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	movl	-80(%rbp), %esi
	leaq	L_.str.6(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	cmpq	-32(%rbp), %rax
	jne	LBB0_2
## %bb.1:
	xorl	%eax, %eax
	addq	$88, %rsp
	popq	%rbx
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB0_2:
	callq	___stack_chk_fail
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__const
	.p2align	2               ## @__const.main.part1
l___const.main.part1:
	.long	528                     ## 0x210
	.asciz	"Disk drive\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.space	2
	.long	10                      ## 0xa

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Part1 number: %d\n"

L_.str.1:                               ## @.str.1
	.asciz	"Part1 name: %s\n"

L_.str.2:                               ## @.str.2
	.asciz	"Part1 Quantity on hand: %d\n"

L_.str.3:                               ## @.str.3
	.asciz	"%d"

L_.str.4:                               ## @.str.4
	.asciz	"Part2 number: %d\n"

L_.str.5:                               ## @.str.5
	.asciz	"Part2 name: %s\n"

L_.str.6:                               ## @.str.6
	.asciz	"Part2 Quantity on hand: %d\n"


.subsections_via_symbols
