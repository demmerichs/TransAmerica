	.mod_init_func
	.align 3
	.quad	__GLOBAL__I__ZN7DavidAIC2E11PLAYERCOLOR
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
.globl __ZnwmPv
	.weak_definition __ZnwmPv
__ZnwmPv:
LFB243:
	pushq	%rbp
LCFI0:
	movq	%rsp, %rbp
LCFI1:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	leave
	ret
LFE243:
.globl __ZNSt14numeric_limitsItE3maxEv
	.weak_definition __ZNSt14numeric_limitsItE3maxEv
__ZNSt14numeric_limitsItE3maxEv:
LFB565:
	pushq	%rbp
LCFI2:
	movq	%rsp, %rbp
LCFI3:
	movl	$65535, %eax
	leave
	ret
LFE565:
	.align 1
.globl __ZN6EValueC1Ev
	.weak_definition __ZN6EValueC1Ev
__ZN6EValueC1Ev:
LFB1942:
	pushq	%rbp
LCFI4:
	movq	%rsp, %rbp
LCFI5:
	subq	$16, %rsp
LCFI6:
	movq	%rdi, -8(%rbp)
	call	__ZNSt14numeric_limitsItE3maxEv
	movl	%eax, %edx
	shrw	%dx
	movq	-8(%rbp), %rax
	movw	%dx, (%rax)
	movq	-8(%rbp), %rax
	movw	$0, 2(%rax)
	leave
	ret
LFE1942:
	.align 1
.globl __ZN6EValue7addRailEv
	.weak_definition __ZN6EValue7addRailEv
__ZN6EValue7addRailEv:
LFB1943:
	pushq	%rbp
LCFI7:
	movq	%rsp, %rbp
LCFI8:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	2(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 2(%rax)
	leave
	ret
LFE1943:
	.align 1
.globl __ZN6EValue13addConnectionEv
	.weak_definition __ZN6EValue13addConnectionEv
__ZN6EValue13addConnectionEv:
LFB1944:
	pushq	%rbp
LCFI9:
	movq	%rsp, %rbp
LCFI10:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, (%rax)
	leave
	ret
LFE1944:
	.align 1
.globl __ZN6EValue10addBarrierEv
	.weak_definition __ZN6EValue10addBarrierEv
__ZN6EValue10addBarrierEv:
LFB1945:
	pushq	%rbp
LCFI11:
	movq	%rsp, %rbp
LCFI12:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %edx
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	andl	$1, %eax
	leal	(%rdx,%rax), %eax
	leal	2(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, (%rax)
	leave
	ret
LFE1945:
	.align 1
.globl __ZN6EValue15addCheapBarrierEv
	.weak_definition __ZN6EValue15addCheapBarrierEv
__ZN6EValue15addCheapBarrierEv:
LFB1946:
	pushq	%rbp
LCFI13:
	movq	%rsp, %rbp
LCFI14:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	leal	2(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, (%rax)
	leave
	ret
LFE1946:
	.align 1
.globl __ZN6EValueaSEj
	.weak_definition __ZN6EValueaSEj
__ZN6EValueaSEj:
LFB1947:
	pushq	%rbp
LCFI15:
	movq	%rsp, %rbp
LCFI16:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movw	%dx, (%rax)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	leave
	ret
LFE1947:
	.align 1
.globl __ZNK6EValuemiERKS_
	.weak_definition __ZNK6EValuemiERKS_
__ZNK6EValuemiERKS_:
LFB1948:
	pushq	%rbp
LCFI17:
	movq	%rsp, %rbp
LCFI18:
	subq	$32, %rsp
LCFI19:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	leaq	-16(%rbp), %rdi
	call	__ZN6EValueC1Ev
	movq	-24(%rbp), %rax
	movzwl	(%rax), %edx
	movq	-32(%rbp), %rax
	movzwl	(%rax), %eax
	movl	%edx, %ecx
	subw	%ax, %cx
	movl	%ecx, %eax
	movw	%ax, -16(%rbp)
	movq	-24(%rbp), %rax
	movzwl	2(%rax), %edx
	movq	-32(%rbp), %rax
	movzwl	2(%rax), %eax
	movl	%edx, %ecx
	subw	%ax, %cx
	movl	%ecx, %eax
	movw	%ax, -14(%rbp)
	movl	-16(%rbp), %eax
	leave
	ret
LFE1948:
	.align 1
.globl __ZNK6EValuegtEj
	.weak_definition __ZNK6EValuegtEj
__ZNK6EValuegtEj:
LFB1949:
	pushq	%rbp
LCFI20:
	movq	%rsp, %rbp
LCFI21:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %eax
	cmpl	-12(%rbp), %eax
	seta	%al
	movzbl	%al, %eax
	leave
	ret
LFE1949:
	.align 1
.globl __ZNK6EValueeqEj
	.weak_definition __ZNK6EValueeqEj
__ZNK6EValueeqEj:
LFB1950:
	pushq	%rbp
LCFI22:
	movq	%rsp, %rbp
LCFI23:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %eax
	cmpl	-12(%rbp), %eax
	sete	%al
	movzbl	%al, %eax
	leave
	ret
LFE1950:
	.align 1
.globl __ZNK6EValuegeEj
	.weak_definition __ZNK6EValuegeEj
__ZNK6EValuegeEj:
LFB1951:
	pushq	%rbp
LCFI24:
	movq	%rsp, %rbp
LCFI25:
	subq	$16, %rsp
LCFI26:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	-12(%rbp), %esi
	movq	-8(%rbp), %rdi
	call	__ZNK6EValuegtEj
	testb	%al, %al
	jne	L24
	movl	-12(%rbp), %esi
	movq	-8(%rbp), %rdi
	call	__ZNK6EValueeqEj
	testb	%al, %al
	je	L26
L24:
	movb	$1, -13(%rbp)
	jmp	L27
L26:
	movb	$0, -13(%rbp)
L27:
	movzbl	-13(%rbp), %eax
	leave
	ret
LFE1951:
	.align 1
.globl __ZNK6EValueleEj
	.weak_definition __ZNK6EValueleEj
__ZNK6EValueleEj:
LFB1952:
	pushq	%rbp
LCFI27:
	movq	%rsp, %rbp
LCFI28:
	subq	$16, %rsp
LCFI29:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	-12(%rbp), %esi
	movq	-8(%rbp), %rdi
	call	__ZNK6EValuegtEj
	xorl	$1, %eax
	movzbl	%al, %eax
	leave
	ret
LFE1952:
	.align 1
.globl __ZNK6EValueltES_
	.weak_definition __ZNK6EValueltES_
__ZNK6EValueltES_:
LFB1953:
	pushq	%rbp
LCFI30:
	movq	%rsp, %rbp
LCFI31:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %edx
	movzwl	-12(%rbp), %eax
	movzwl	%ax, %eax
	cmpl	%eax, %edx
	jb	L32
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %edx
	movzwl	-12(%rbp), %eax
	movzwl	%ax, %eax
	cmpl	%eax, %edx
	jne	L34
	movq	-8(%rbp), %rax
	movzwl	2(%rax), %eax
	movzwl	%ax, %edx
	movzwl	-10(%rbp), %eax
	movzwl	%ax, %eax
	cmpl	%eax, %edx
	jae	L34
L32:
	movb	$1, -13(%rbp)
	jmp	L36
L34:
	movb	$0, -13(%rbp)
L36:
	movzbl	-13(%rbp), %eax
	leave
	ret
LFE1953:
	.align 1
.globl __ZNK6EValuegtES_
	.weak_definition __ZNK6EValuegtES_
__ZNK6EValuegtES_:
LFB1954:
	pushq	%rbp
LCFI32:
	movq	%rsp, %rbp
LCFI33:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %edx
	movzwl	-12(%rbp), %eax
	movzwl	%ax, %eax
	cmpl	%eax, %edx
	ja	L39
	movq	-8(%rbp), %rax
	movzwl	(%rax), %eax
	movzwl	%ax, %edx
	movzwl	-12(%rbp), %eax
	movzwl	%ax, %eax
	cmpl	%eax, %edx
	jne	L41
	movq	-8(%rbp), %rax
	movzwl	2(%rax), %eax
	movzwl	%ax, %edx
	movzwl	-10(%rbp), %eax
	movzwl	%ax, %eax
	cmpl	%eax, %edx
	jbe	L41
L39:
	movb	$1, -13(%rbp)
	jmp	L43
L41:
	movb	$0, -13(%rbp)
L43:
	movzbl	-13(%rbp), %eax
	leave
	ret
LFE1954:
	.align 1
.globl __ZNK6EValueleES_
	.weak_definition __ZNK6EValueleES_
__ZNK6EValueleES_:
LFB1955:
	pushq	%rbp
LCFI34:
	movq	%rsp, %rbp
LCFI35:
	subq	$16, %rsp
LCFI36:
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	-12(%rbp), %esi
	movq	-8(%rbp), %rdi
	call	__ZNK6EValuegtES_
	xorl	$1, %eax
	movzbl	%al, %eax
	leave
	ret
LFE1955:
	.text
	.align 1,0x90
.globl __ZN7DavidAI11countPointsER5StateRSt6vectorIP10ConnectionSaIS4_EE
__ZN7DavidAI11countPointsER5StateRSt6vectorIP10ConnectionSaIS4_EE:
LFB2063:
	pushq	%rbp
LCFI37:
	movq	%rsp, %rbp
LCFI38:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movl	$0, %eax
	leave
	ret
LFE2063:
	.align 1,0x90
.globl __ZN7DavidAI27gatherInformationEndOfRoundEPK11RoundLogger
__ZN7DavidAI27gatherInformationEndOfRoundEPK11RoundLogger:
LFB2064:
	pushq	%rbp
LCFI39:
	movq	%rsp, %rbp
LCFI40:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leave
	ret
LFE2064:
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
	.align 1
.globl __ZN6VectoraSERKS_
	.weak_definition __ZN6VectoraSERKS_
__ZN6VectoraSERKS_:
LFB2066:
	pushq	%rbp
LCFI41:
	movq	%rsp, %rbp
LCFI42:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movzwl	8(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 8(%rax)
	movq	-16(%rbp), %rax
	movzwl	10(%rax), %edx
	movq	-8(%rbp), %rax
	movw	%dx, 10(%rax)
	movq	-8(%rbp), %rax
	leave
	ret
LFE2066:
.globl __ZSt3minImERKT_S2_S2_
	.weak_definition __ZSt3minImERKT_S2_S2_
__ZSt3minImERKT_S2_S2_:
LFB2069:
	pushq	%rbp
LCFI43:
	movq	%rsp, %rbp
LCFI44:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jae	L54
	movq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp	L56
L54:
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
L56:
	movq	-24(%rbp), %rax
	leave
	ret
LFE2069:
	.text
__ZStL17__verify_groupingPKcmRKSs:
LFB1619:
	pushq	%rbp
LCFI45:
	movq	%rsp, %rbp
LCFI46:
	pushq	%rbx
LCFI47:
	subq	$88, %rsp
LCFI48:
	movq	%rdi, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	%rdx, -88(%rbp)
	movq	-88(%rbp), %rdi
	call	__ZNKSs4sizeEv
	decq	%rax
	movq	%rax, -32(%rbp)
	movq	-80(%rbp), %rax
	decq	%rax
	movq	%rax, -48(%rbp)
	leaq	-48(%rbp), %rsi
	leaq	-32(%rbp), %rdi
	call	__ZSt3minImERKT_S2_S2_
	movq	(%rax), %rax
	movq	%rax, -40(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -56(%rbp)
	movb	$1, -17(%rbp)
	movq	$0, -64(%rbp)
	jmp	L59
L60:
	movq	-56(%rbp), %rsi
	movq	-88(%rbp), %rdi
	call	__ZNKSsixEm
	movzbl	(%rax), %edx
	movq	-64(%rbp), %rax
	addq	-72(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	sete	%al
	movb	%al, -17(%rbp)
	decq	-56(%rbp)
	incq	-64(%rbp)
L59:
	movq	-64(%rbp), %rax
	cmpq	-40(%rbp), %rax
	jae	L63
	cmpb	$0, -17(%rbp)
	jne	L60
	jmp	L63
L64:
	movq	-56(%rbp), %rsi
	movq	-88(%rbp), %rdi
	call	__ZNKSsixEm
	movzbl	(%rax), %edx
	movq	-40(%rbp), %rax
	addq	-72(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	sete	%al
	movb	%al, -17(%rbp)
	decq	-56(%rbp)
L63:
	cmpq	$0, -56(%rbp)
	je	L65
	cmpb	$0, -17(%rbp)
	jne	L64
L65:
	movq	-40(%rbp), %rax
	addq	-72(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jle	L67
	movzbl	-17(%rbp), %ebx
	movq	-88(%rbp), %rdi
	movl	$0, %esi
	call	__ZNKSsixEm
	movzbl	(%rax), %edx
	movq	-40(%rbp), %rax
	addq	-72(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	setle	%al
	movzbl	%al, %eax
	andl	%ebx, %eax
	testl	%eax, %eax
	setne	%al
	movb	%al, -17(%rbp)
L67:
	movzbl	-17(%rbp), %eax
	addq	$88, %rsp
	popq	%rbx
	leave
	ret
LFE1619:
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
	.align 1
.globl __ZNSt15binary_functionI6EValueS0_bEC2Ev
	.weak_definition __ZNSt15binary_functionI6EValueS0_bEC2Ev
__ZNSt15binary_functionI6EValueS0_bEC2Ev:
LFB2093:
	pushq	%rbp
LCFI49:
	movq	%rsp, %rbp
LCFI50:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2093:
	.align 1
.globl __ZNSt4lessI6EValueEC1Ev
	.weak_definition __ZNSt4lessI6EValueEC1Ev
__ZNSt4lessI6EValueEC1Ev:
LFB2096:
	pushq	%rbp
LCFI51:
	movq	%rsp, %rbp
LCFI52:
	subq	$16, %rsp
LCFI53:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNSt15binary_functionI6EValueS0_bEC2Ev
	leave
	ret
LFE2096:
	.align 1
.globl __ZNSt4pairI6EValuePK4CityEC1ERKS0_RKS3_
	.weak_definition __ZNSt4pairI6EValuePK4CityEC1ERKS0_RKS3_
__ZNSt4pairI6EValuePK4CityEC1ERKS0_RKS3_:
LFB2107:
	pushq	%rbp
LCFI54:
	movq	%rsp, %rbp
LCFI55:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	leave
	ret
LFE2107:
	.align 1
.globl __ZNSt4pairIK6EValuePK4CityEC1IS0_S4_EERKS_IT_T0_E
	.weak_definition __ZNSt4pairIK6EValuePK4CityEC1IS0_S4_EERKS_IT_T0_E
__ZNSt4pairIK6EValuePK4CityEC1IS0_S4_EERKS_IT_T0_E:
LFB2110:
	pushq	%rbp
LCFI56:
	movq	%rsp, %rbp
LCFI57:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	leave
	ret
LFE2110:
	.align 1
.globl __ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv
	.weak_definition __ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv
__ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv:
LFB2114:
	pushq	%rbp
LCFI58:
	movq	%rsp, %rbp
LCFI59:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addq	$32, %rax
	leave
	ret
LFE2114:
	.align 1
.globl __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1Ev
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1Ev
__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1Ev:
LFB2134:
	pushq	%rbp
LCFI60:
	movq	%rsp, %rbp
LCFI61:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	leave
	ret
LFE2134:
	.align 1
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv:
LFB2135:
	pushq	%rbp
LCFI62:
	movq	%rsp, %rbp
LCFI63:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	leave
	ret
LFE2135:
	.align 1
.globl __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv
	.weak_definition __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv
__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv:
LFB2140:
	pushq	%rbp
LCFI64:
	movq	%rsp, %rbp
LCFI65:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	leave
	ret
LFE2140:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv:
LFB2174:
	pushq	%rbp
LCFI66:
	movq	%rsp, %rbp
LCFI67:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	leave
	ret
LFE2174:
	.align 1
.globl __ZNSt14unary_functionISt4pairIK6EValuePK4CityES2_EC2Ev
	.weak_definition __ZNSt14unary_functionISt4pairIK6EValuePK4CityES2_EC2Ev
__ZNSt14unary_functionISt4pairIK6EValuePK4CityES2_EC2Ev:
LFB2178:
	pushq	%rbp
LCFI68:
	movq	%rsp, %rbp
LCFI69:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2178:
	.align 1
.globl __ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev
	.weak_definition __ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev
__ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev:
LFB2181:
	pushq	%rbp
LCFI70:
	movq	%rsp, %rbp
LCFI71:
	subq	$16, %rsp
LCFI72:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNSt14unary_functionISt4pairIK6EValuePK4CityES2_EC2Ev
	leave
	ret
LFE2181:
	.align 1
.globl __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE4sizeEv
	.weak_definition __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE4sizeEv
__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE4sizeEv:
LFB2182:
	pushq	%rbp
LCFI73:
	movq	%rsp, %rbp
LCFI74:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	40(%rax), %rax
	leave
	ret
LFE2182:
	.align 1
.globl __ZNKSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE4sizeEv
	.weak_definition __ZNKSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE4sizeEv
__ZNKSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE4sizeEv:
LFB2112:
	pushq	%rbp
LCFI75:
	movq	%rsp, %rbp
LCFI76:
	subq	$16, %rsp
LCFI77:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE4sizeEv
	leave
	ret
LFE2112:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2Ev
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2Ev
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2Ev:
LFB2185:
	pushq	%rbp
LCFI78:
	movq	%rsp, %rbp
LCFI79:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2185:
	.align 1
.globl __ZNSaIPK10CoordinateEC1Ev
	.weak_definition __ZNSaIPK10CoordinateEC1Ev
__ZNSaIPK10CoordinateEC1Ev:
LFB2118:
	pushq	%rbp
LCFI80:
	movq	%rsp, %rbp
LCFI81:
	subq	$16, %rsp
LCFI82:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2Ev
	leave
	ret
LFE2118:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev:
LFB2188:
	pushq	%rbp
LCFI83:
	movq	%rsp, %rbp
LCFI84:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2188:
	.align 1
.globl __ZNSaIPK10CoordinateED1Ev
	.weak_definition __ZNSaIPK10CoordinateED1Ev
__ZNSaIPK10CoordinateED1Ev:
LFB2121:
	pushq	%rbp
LCFI85:
	movq	%rsp, %rbp
LCFI86:
	subq	$16, %rsp
LCFI87:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev
	leave
	ret
LFE2121:
	.align 1
.globl __ZNSaIPK10CoordinateED2Ev
	.weak_definition __ZNSaIPK10CoordinateED2Ev
__ZNSaIPK10CoordinateED2Ev:
LFB2120:
	pushq	%rbp
LCFI88:
	movq	%rsp, %rbp
LCFI89:
	subq	$16, %rsp
LCFI90:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev
	leave
	ret
LFE2120:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_:
LFB2191:
	pushq	%rbp
LCFI91:
	movq	%rsp, %rbp
LCFI92:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leave
	ret
LFE2191:
	.align 1
.globl __ZNSaIPK10CoordinateEC1ERKS2_
	.weak_definition __ZNSaIPK10CoordinateEC1ERKS2_
__ZNSaIPK10CoordinateEC1ERKS2_:
LFB2124:
	pushq	%rbp
LCFI93:
	movq	%rsp, %rbp
LCFI94:
	subq	$16, %rsp
LCFI95:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_
	leave
	ret
LFE2124:
	.align 1
.globl __ZNSaIPK10CoordinateEC2ERKS2_
	.weak_definition __ZNSaIPK10CoordinateEC2ERKS2_
__ZNSaIPK10CoordinateEC2ERKS2_:
LFB2123:
	pushq	%rbp
LCFI96:
	movq	%rsp, %rbp
LCFI97:
	subq	$16, %rsp
LCFI98:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_
	leave
	ret
LFE2123:
	.align 1
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implD1Ev
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implD1Ev
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implD1Ev:
LFB2196:
	pushq	%rbp
LCFI99:
	movq	%rsp, %rbp
LCFI100:
	subq	$16, %rsp
LCFI101:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED2Ev
	leave
	ret
LFE2196:
	.align 1
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv:
LFB2202:
	pushq	%rbp
LCFI102:
	movq	%rsp, %rbp
LCFI103:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leave
	ret
LFE2202:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_:
LFB2204:
	pushq	%rbp
LCFI104:
	movq	%rsp, %rbp
LCFI105:
	subq	$32, %rsp
LCFI106:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rsi
	movl	$8, %edi
	call	__ZnwmPv
	movq	%rax, -32(%rbp)
	cmpq	$0, -32(%rbp)
	je	L124
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rax, (%rdx)
L124:
	leave
	ret
LFE2204:
	.align 1
.globl __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_
__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_:
LFB2208:
	pushq	%rbp
LCFI107:
	movq	%rsp, %rbp
LCFI108:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	leave
	ret
LFE2208:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv
__ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv:
LFB2137:
	pushq	%rbp
LCFI109:
	movq	%rsp, %rbp
LCFI110:
	subq	$32, %rsp
LCFI111:
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rsi
	addq	$8, %rsi
	leaq	-16(%rbp), %rdi
	call	__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_
	movq	-16(%rbp), %rax
	leave
	ret
LFE2137:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv
__ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv:
LFB2136:
	pushq	%rbp
LCFI112:
	movq	%rsp, %rbp
LCFI113:
	subq	$32, %rsp
LCFI114:
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rsi
	leaq	-16(%rbp), %rdi
	call	__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_
	movq	-16(%rbp), %rax
	leave
	ret
LFE2136:
	.align 1
.globl __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEppEi
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEppEi
__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEppEi:
LFB2139:
	pushq	%rbp
LCFI115:
	movq	%rsp, %rbp
LCFI116:
	subq	$32, %rsp
LCFI117:
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rsi
	leaq	8(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	leaq	-16(%rbp), %rdi
	call	__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_
	movq	-16(%rbp), %rax
	leave
	ret
LFE2139:
	.align 1
.globl __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	.weak_definition __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv:
LFB2209:
	pushq	%rbp
LCFI118:
	movq	%rsp, %rbp
LCFI119:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leave
	ret
LFE2209:
.globl __ZN9__gnu_cxxneIPPK10CoordinateSt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_
	.weak_definition __ZN9__gnu_cxxneIPPK10CoordinateSt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_
__ZN9__gnu_cxxneIPPK10CoordinateSt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_:
LFB2138:
	pushq	%rbp
LCFI120:
	movq	%rsp, %rbp
LCFI121:
	pushq	%rbx
LCFI122:
	subq	$24, %rsp
LCFI123:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rbx
	movq	-32(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	movzbl	%al, %eax
	addq	$24, %rsp
	popq	%rbx
	leave
	ret
LFE2138:
	.align 1
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE8capacityEv
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE8capacityEv
__ZNKSt6vectorIPK10CoordinateSaIS2_EE8capacityEv:
LFB2210:
	pushq	%rbp
LCFI124:
	movq	%rsp, %rbp
LCFI125:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	leave
	ret
LFE2210:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev:
LFB2222:
	pushq	%rbp
LCFI126:
	movq	%rsp, %rbp
LCFI127:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2222:
	.align 1
.globl __ZNSaISt4pairIK6EValuePK4CityEEC1Ev
	.weak_definition __ZNSaISt4pairIK6EValuePK4CityEEC1Ev
__ZNSaISt4pairIK6EValuePK4CityEEC1Ev:
LFB2160:
	pushq	%rbp
LCFI128:
	movq	%rsp, %rbp
LCFI129:
	subq	$16, %rsp
LCFI130:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev
	leave
	ret
LFE2160:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEED2Ev
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEED2Ev
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEED2Ev:
LFB2225:
	pushq	%rbp
LCFI131:
	movq	%rsp, %rbp
LCFI132:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2225:
	.align 1
.globl __ZNSaISt4pairIK6EValuePK4CityEED1Ev
	.weak_definition __ZNSaISt4pairIK6EValuePK4CityEED1Ev
__ZNSaISt4pairIK6EValuePK4CityEED1Ev:
LFB2163:
	pushq	%rbp
LCFI133:
	movq	%rsp, %rbp
LCFI134:
	subq	$16, %rsp
LCFI135:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEED2Ev
	leave
	ret
LFE2163:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev:
LFB2237:
	pushq	%rbp
LCFI136:
	movq	%rsp, %rbp
LCFI137:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2237:
	.align 1
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED1Ev
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED1Ev
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED1Ev:
LFB2172:
	pushq	%rbp
LCFI138:
	movq	%rsp, %rbp
LCFI139:
	subq	$16, %rsp
LCFI140:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev
	leave
	ret
LFE2172:
	.align 1
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev:
LFB2171:
	pushq	%rbp
LCFI141:
	movq	%rsp, %rbp
LCFI142:
	subq	$16, %rsp
LCFI143:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev
	leave
	ret
LFE2171:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev:
LFB2102:
	pushq	%rbp
LCFI144:
	movq	%rsp, %rbp
LCFI145:
	subq	$16, %rsp
LCFI146:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev
	leave
	ret
LFE2102:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base:
LFB2239:
	pushq	%rbp
LCFI147:
	movq	%rsp, %rbp
LCFI148:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	leave
	ret
LFE2239:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base:
LFB2240:
	pushq	%rbp
LCFI149:
	movq	%rsp, %rbp
LCFI150:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	leave
	ret
LFE2240:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv:
LFB2242:
	pushq	%rbp
LCFI151:
	movq	%rsp, %rbp
LCFI152:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	leave
	ret
LFE2242:
	.align 1
.globl __ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_
	.weak_definition __ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_
__ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_:
LFB2243:
	pushq	%rbp
LCFI153:
	movq	%rsp, %rbp
LCFI154:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	leave
	ret
LFE2243:
	.align 1
.globl __ZNKSt4lessI6EValueEclERKS0_S3_
	.weak_definition __ZNKSt4lessI6EValueEclERKS0_S3_
__ZNKSt4lessI6EValueEclERKS0_S3_:
LFB2245:
	pushq	%rbp
LCFI155:
	movq	%rsp, %rbp
LCFI156:
	subq	$32, %rsp
LCFI157:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdi
	movl	(%rax), %esi
	call	__ZNK6EValueltES_
	movzbl	%al, %eax
	leave
	ret
LFE2245:
	.align 1
.globl __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E
	.weak_definition __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E
__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E:
LFB2249:
	pushq	%rbp
LCFI158:
	movq	%rsp, %rbp
LCFI159:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	leave
	ret
LFE2249:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE5beginEv
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE5beginEv
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE5beginEv:
LFB2183:
	pushq	%rbp
LCFI160:
	movq	%rsp, %rbp
LCFI161:
	subq	$32, %rsp
LCFI162:
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	24(%rax), %rax
	movq	%rax, %rsi
	leaq	-16(%rbp), %rdi
	call	__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E
	movq	-16(%rbp), %rax
	leave
	ret
LFE2183:
	.align 1
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv:
LFB2113:
	pushq	%rbp
LCFI163:
	movq	%rsp, %rbp
LCFI164:
	subq	$16, %rsp
LCFI165:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE5beginEv
	leave
	ret
LFE2113:
	.align 1
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implC1ERKS3_
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implC1ERKS3_
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implC1ERKS3_:
LFB2252:
	pushq	%rbp
LCFI166:
	movq	%rsp, %rbp
LCFI167:
	subq	$16, %rsp
LCFI168:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	call	__ZNSaIPK10CoordinateEC2ERKS2_
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	leave
	ret
LFE2252:
	.align 1
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EEC2ERKS3_
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EEC2ERKS3_
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EEC2ERKS3_:
LFB2197:
	pushq	%rbp
LCFI169:
	movq	%rsp, %rbp
LCFI170:
	subq	$16, %rsp
LCFI171:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implC1ERKS3_
	leave
	ret
LFE2197:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_
__ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_:
LFB2127:
	pushq	%rbp
LCFI172:
	movq	%rsp, %rbp
LCFI173:
	subq	$16, %rsp
LCFI174:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EEC2ERKS3_
	leave
	ret
LFE2127:
	.align 1
.globl __ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_
__ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_:
LFB2259:
	pushq	%rbp
LCFI175:
	movq	%rsp, %rbp
LCFI176:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	leave
	ret
LFE2259:
	.align 1
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv
__ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv:
LFB2212:
	pushq	%rbp
LCFI177:
	movq	%rsp, %rbp
LCFI178:
	subq	$32, %rsp
LCFI179:
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rsi
	leaq	-16(%rbp), %rdi
	call	__ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_
	movq	-16(%rbp), %rax
	leave
	ret
LFE2212:
	.align 1
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv
__ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv:
LFB2211:
	pushq	%rbp
LCFI180:
	movq	%rsp, %rbp
LCFI181:
	subq	$32, %rsp
LCFI182:
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rsi
	leaq	-16(%rbp), %rdi
	call	__ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_
	movq	-16(%rbp), %rax
	leave
	ret
LFE2211:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2Ev
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2Ev
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2Ev:
LFB2267:
	pushq	%rbp
LCFI183:
	movq	%rsp, %rbp
LCFI184:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2267:
	.align 1
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC1IS6_EERKSaIT_E
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC1IS6_EERKSaIT_E
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC1IS6_EERKSaIT_E:
LFB2232:
	pushq	%rbp
LCFI185:
	movq	%rsp, %rbp
LCFI186:
	subq	$16, %rsp
LCFI187:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2Ev
	leave
	ret
LFE2232:
	.align 1
.globl __ZNSt4pairIK6EValuePK4CityED1Ev
	.weak_definition __ZNSt4pairIK6EValuePK4CityED1Ev
__ZNSt4pairIK6EValuePK4CityED1Ev:
LFB2276:
	pushq	%rbp
LCFI188:
	movq	%rsp, %rbp
LCFI189:
	movq	%rdi, -8(%rbp)
	leave
	ret
LFE2276:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE7destroyEPS7_
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE7destroyEPS7_
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE7destroyEPS7_:
LFB2273:
	pushq	%rbp
LCFI190:
	movq	%rsp, %rbp
LCFI191:
	subq	$16, %rsp
LCFI192:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdi
	call	__ZNSt4pairIK6EValuePK4CityED1Ev
	leave
	ret
LFE2273:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt13_Rb_tree_nodeIS6_E
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt13_Rb_tree_nodeIS6_E
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt13_Rb_tree_nodeIS6_E:
LFB2278:
	pushq	%rbp
LCFI193:
	movq	%rsp, %rbp
LCFI194:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rax
	leave
	ret
LFE2278:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt13_Rb_tree_nodeIS6_E
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt13_Rb_tree_nodeIS6_E
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt13_Rb_tree_nodeIS6_E:
LFB2244:
	pushq	%rbp
LCFI195:
	movq	%rsp, %rbp
LCFI196:
	pushq	%rbx
LCFI197:
	subq	$40, %rsp
LCFI198:
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt13_Rb_tree_nodeIS6_E
	movq	%rax, %rbx
	leaq	-17(%rbp), %rdi
	call	__ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev
	leaq	-17(%rbp), %rdi
	movq	%rbx, %rsi
	call	__ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2244:
.globl __ZSt13__destroy_auxIPPK10CoordinateEvT_S4_St11__true_type
	.weak_definition __ZSt13__destroy_auxIPPK10CoordinateEvT_S4_St11__true_type
__ZSt13__destroy_auxIPPK10CoordinateEvT_S4_St11__true_type:
LFB2281:
	pushq	%rbp
LCFI199:
	movq	%rsp, %rbp
LCFI200:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leave
	ret
LFE2281:
.globl __ZSt8_DestroyIPPK10CoordinateEvT_S4_
	.weak_definition __ZSt8_DestroyIPPK10CoordinateEvT_S4_
__ZSt8_DestroyIPPK10CoordinateEvT_S4_:
LFB2253:
	pushq	%rbp
LCFI201:
	movq	%rsp, %rbp
LCFI202:
	subq	$48, %rsp
LCFI203:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	movzbl	-17(%rbp), %eax
	movb	%al, (%rsp)
	call	__ZSt13__destroy_auxIPPK10CoordinateEvT_S4_St11__true_type
	leave
	ret
LFE2253:
.globl __ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E
	.weak_definition __ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E
__ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E:
LFB2203:
	pushq	%rbp
LCFI204:
	movq	%rsp, %rbp
LCFI205:
	subq	$32, %rsp
LCFI206:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt8_DestroyIPPK10CoordinateEvT_S4_
	leave
	ret
LFE2203:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE15_M_erase_at_endEPS2_
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE15_M_erase_at_endEPS2_
__ZNSt6vectorIPK10CoordinateSaIS2_EE15_M_erase_at_endEPS2_:
LFB2219:
	pushq	%rbp
LCFI207:
	movq	%rsp, %rbp
LCFI208:
	subq	$32, %rsp
LCFI209:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-1(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	movq	-24(%rbp), %rax
	movq	8(%rax), %rsi
	leaq	-1(%rbp), %rdx
	movq	-32(%rbp), %rdi
	call	__ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E
	leaq	-1(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-24(%rbp), %rdx
	movq	-32(%rbp), %rax
	movq	%rax, 8(%rdx)
	leave
	ret
LFE2219:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE5clearEv
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE5clearEv
__ZNSt6vectorIPK10CoordinateSaIS2_EE5clearEv:
LFB2142:
	pushq	%rbp
LCFI210:
	movq	%rsp, %rbp
LCFI211:
	subq	$16, %rsp
LCFI212:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rsi
	movq	-8(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE15_M_erase_at_endEPS2_
	leave
	ret
LFE2142:
	.align 1
.globl __ZNKSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	.weak_definition __ZNKSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
__ZNKSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv:
LFB2283:
	pushq	%rbp
LCFI213:
	movq	%rsp, %rbp
LCFI214:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leave
	ret
LFE2283:
	.align 1
.globl __ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv
	.weak_definition __ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv
__ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv:
LFB2284:
	pushq	%rbp
LCFI215:
	movq	%rsp, %rbp
LCFI216:
	movq	%rdi, -8(%rbp)
	movabsq	$2305843009213693951, %rax
	leave
	ret
LFE2284:
	.align 1
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv
__ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv:
LFB2255:
	pushq	%rbp
LCFI217:
	movq	%rsp, %rbp
LCFI218:
	subq	$16, %rsp
LCFI219:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNKSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rdi
	call	__ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv
	leave
	ret
LFE2255:
	.align 1
.globl __ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	.weak_definition __ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
__ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv:
LFB2287:
	pushq	%rbp
LCFI220:
	movq	%rsp, %rbp
LCFI221:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leave
	ret
LFE2287:
.globl __ZSt13__destroy_auxIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_St11__true_type
	.weak_definition __ZSt13__destroy_auxIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_St11__true_type
__ZSt13__destroy_auxIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_St11__true_type:
LFB2289:
	pushq	%rbp
LCFI222:
	movq	%rsp, %rbp
LCFI223:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leave
	ret
LFE2289:
.globl __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_
	.weak_definition __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_
__ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_:
LFB2263:
	pushq	%rbp
LCFI224:
	movq	%rsp, %rbp
LCFI225:
	subq	$48, %rsp
LCFI226:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	movzbl	-17(%rbp), %eax
	movb	%al, (%rsp)
	call	__ZSt13__destroy_auxIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_St11__true_type
	leave
	ret
LFE2263:
.globl __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEES4_EvT_SA_SaIT0_E
	.weak_definition __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEES4_EvT_SA_SaIT0_E
__ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEES4_EvT_SA_SaIT0_E:
LFB2216:
	pushq	%rbp
LCFI227:
	movq	%rsp, %rbp
LCFI228:
	subq	$32, %rsp
LCFI229:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_
	leave
	ret
LFE2216:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKSA_
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKSA_
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKSA_:
LFB2293:
	pushq	%rbp
LCFI230:
	movq	%rsp, %rbp
LCFI231:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leave
	ret
LFE2293:
	.align 1
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKS8_
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKS8_
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKS8_:
LFB2270:
	pushq	%rbp
LCFI232:
	movq	%rsp, %rbp
LCFI233:
	subq	$16, %rsp
LCFI234:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKSA_
	leave
	ret
LFE2270:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EEC1ERKSaISt13_Rb_tree_nodeIS6_EERKSA_
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EEC1ERKSaISt13_Rb_tree_nodeIS6_EERKSA_
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EEC1ERKSaISt13_Rb_tree_nodeIS6_EERKSA_:
LFB2235:
	pushq	%rbp
LCFI235:
	movq	%rsp, %rbp
LCFI236:
	subq	$32, %rsp
LCFI237:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	call	__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKS8_
	movq	-8(%rbp), %rax
	movl	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 24(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 32(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 40(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 16(%rax)
	movq	-8(%rbp), %rdx
	addq	$8, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 24(%rax)
	movq	-8(%rbp), %rdx
	addq	$8, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 32(%rax)
	leave
	ret
LFE2235:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EEC1ERKSA_RKSB_
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EEC1ERKSA_RKSB_
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EEC1ERKSA_RKSB_:
LFB2169:
	pushq	%rbp
LCFI238:
	movq	%rsp, %rbp
LCFI239:
	subq	$48, %rsp
LCFI240:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rsi
	leaq	-1(%rbp), %rdi
	call	__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC1IS6_EERKSaIT_E
	movq	-24(%rbp), %rdi
	movq	-32(%rbp), %rdx
	leaq	-1(%rbp), %rsi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EEC1ERKSaISt13_Rb_tree_nodeIS6_EERKSA_
	leaq	-1(%rbp), %rdi
	call	__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED1Ev
	leave
	ret
LFE2169:
	.align 1
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev:
LFB2098:
	pushq	%rbp
LCFI241:
	movq	%rsp, %rbp
LCFI242:
	subq	$32, %rsp
LCFI243:
	movq	%rdi, -24(%rbp)
	leaq	-1(%rbp), %rdi
	call	__ZNSaISt4pairIK6EValuePK4CityEEC1Ev
	leaq	-2(%rbp), %rdi
	call	__ZNSt4lessI6EValueEC1Ev
	movq	-24(%rbp), %rdi
	leaq	-1(%rbp), %rdx
	leaq	-2(%rbp), %rsi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EEC1ERKSA_RKSB_
	leaq	-1(%rbp), %rdi
	call	__ZNSaISt4pairIK6EValuePK4CityEED1Ev
	leave
	ret
LFE2098:
	.align 1
.globl __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE21_M_get_Node_allocatorEv
	.weak_definition __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE21_M_get_Node_allocatorEv
__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE21_M_get_Node_allocatorEv:
LFB2295:
	pushq	%rbp
LCFI244:
	movq	%rsp, %rbp
LCFI245:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leave
	ret
LFE2295:
	.align 1
.globl __ZNSaISt4pairIK6EValuePK4CityEEC1ISt13_Rb_tree_nodeIS5_EEERKSaIT_E
	.weak_definition __ZNSaISt4pairIK6EValuePK4CityEEC1ISt13_Rb_tree_nodeIS5_EEERKSaIT_E
__ZNSaISt4pairIK6EValuePK4CityEEC1ISt13_Rb_tree_nodeIS5_EEERKSaIT_E:
LFB2298:
	pushq	%rbp
LCFI246:
	movq	%rsp, %rbp
LCFI247:
	subq	$16, %rsp
LCFI248:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev
	leave
	ret
LFE2298:
	.align 1
.globl __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv
	.weak_definition __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv
__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv:
LFB2272:
	pushq	%rbp
LCFI249:
	movq	%rsp, %rbp
LCFI250:
	pushq	%r12
LCFI251:
	pushq	%rbx
LCFI252:
	subq	$16, %rsp
LCFI253:
	movq	%rdi, %rbx
	movq	%rsi, -24(%rbp)
	movq	%rbx, %r12
	movq	-24(%rbp), %rdi
	call	__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE21_M_get_Node_allocatorEv
	movq	%rax, %rsi
	movq	%r12, %rdi
	call	__ZNSaISt4pairIK6EValuePK4CityEEC1ISt13_Rb_tree_nodeIS5_EEERKSaIT_E
	movq	%rbx, %rax
	addq	$16, %rsp
	popq	%rbx
	popq	%r12
	leave
	ret
LFE2272:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt18_Rb_tree_node_base
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt18_Rb_tree_node_base
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt18_Rb_tree_node_base:
LFB2300:
	pushq	%rbp
LCFI254:
	movq	%rsp, %rbp
LCFI255:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$32, %rax
	leave
	ret
LFE2300:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt18_Rb_tree_node_base
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt18_Rb_tree_node_base
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt18_Rb_tree_node_base:
LFB2279:
	pushq	%rbp
LCFI256:
	movq	%rsp, %rbp
LCFI257:
	pushq	%rbx
LCFI258:
	subq	$40, %rsp
LCFI259:
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt18_Rb_tree_node_base
	movq	%rax, %rbx
	leaq	-17(%rbp), %rdi
	call	__ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev
	leaq	-17(%rbp), %rdi
	movq	%rbx, %rsi
	call	__ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2279:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE9constructEPS7_RKS7_
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE9constructEPS7_RKS7_
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE9constructEPS7_RKS7_:
LFB2302:
	pushq	%rbp
LCFI260:
	movq	%rsp, %rbp
LCFI261:
	subq	$32, %rsp
LCFI262:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rsi
	movl	$16, %edi
	call	__ZnwmPv
	movq	%rax, -32(%rbp)
	cmpq	$0, -32(%rbp)
	je	L250
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-32(%rbp), %rcx
	movq	%rdx, (%rcx)
	movq	8(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rax, 8(%rdx)
L250:
	leave
	ret
LFE2302:
	.align 1
.globl __ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8max_sizeEv
	.weak_definition __ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8max_sizeEv
__ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8max_sizeEv:
LFB2309:
	pushq	%rbp
LCFI263:
	movq	%rsp, %rbp
LCFI264:
	movq	%rdi, -8(%rbp)
	movabsq	$384307168202282325, %rax
	leave
	ret
LFE2309:
	.text
___tcf_1:
LFB2313:
	pushq	%rbp
LCFI265:
	movq	%rsp, %rbp
LCFI266:
	subq	$16, %rsp
LCFI267:
	movq	%rdi, -8(%rbp)
	leaq	__ZL9BOARDNAME(%rip), %rdi
	call	__ZNSsD1Ev
	leave
	ret
LFE2313:
	.cstring
	.align 3
LC0:
	.ascii "hdr/game/boardSettings/standard/\0"
	.section __TEXT,__StaticInit,regular,pure_instructions
__Z41__static_initialization_and_destruction_0ii:
LFB2311:
	pushq	%rbp
LCFI268:
	movq	%rsp, %rbp
LCFI269:
	pushq	%rbx
LCFI270:
	subq	$40, %rsp
LCFI271:
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	cmpl	$1, -36(%rbp)
	jne	L260
	cmpl	$65535, -40(%rbp)
	jne	L260
	leaq	__ZStL8__ioinit(%rip), %rdi
LEHB0:
	call	__ZNSt8ios_base4InitC1Ev
LEHE0:
	movq	___dso_handle@GOTPCREL(%rip), %rdx
	movl	$0, %esi
	leaq	___tcf_0(%rip), %rdi
	call	___cxa_atexit
	leaq	-17(%rbp), %rdi
	call	__ZNSaIcEC1Ev
	leaq	-17(%rbp), %rdx
	leaq	LC0(%rip), %rsi
	leaq	__ZL9BOARDNAME(%rip), %rdi
LEHB1:
	call	__ZNSsC1EPKcRKSaIcE
LEHE1:
	leaq	-17(%rbp), %rdi
	call	__ZNSaIcED1Ev
	movq	___dso_handle@GOTPCREL(%rip), %rdx
	movl	$0, %esi
	leaq	___tcf_1(%rip), %rdi
	call	___cxa_atexit
	jmp	L260
L261:
	movq	%rax, -48(%rbp)
L259:
	movq	-48(%rbp), %rbx
	leaq	-17(%rbp), %rdi
	call	__ZNSaIcED1Ev
	movq	%rbx, -48(%rbp)
	movq	-48(%rbp), %rdi
LEHB2:
	call	__Unwind_Resume
LEHE2:
L260:
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2311:
	.section __TEXT,__gcc_except_tab
GCC_except_table0:
LLSDA2311:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0x27
	.set L$set$0,LEHB0-LFB2311
	.long L$set$0
	.set L$set$1,LEHE0-LEHB0
	.long L$set$1
	.long	0x0
	.byte	0x0
	.set L$set$2,LEHB1-LFB2311
	.long L$set$2
	.set L$set$3,LEHE1-LEHB1
	.long L$set$3
	.set L$set$4,L261-LFB2311
	.long L$set$4
	.byte	0x0
	.set L$set$5,LEHB2-LFB2311
	.long L$set$5
	.set L$set$6,LEHE2-LEHB2
	.long L$set$6
	.long	0x0
	.byte	0x0
	.section __TEXT,__StaticInit,regular,pure_instructions
__GLOBAL__I__ZN7DavidAIC2E11PLAYERCOLOR:
LFB2314:
	pushq	%rbp
LCFI272:
	movq	%rsp, %rbp
LCFI273:
	movl	$65535, %esi
	movl	$1, %edi
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	ret
LFE2314:
	.text
___tcf_0:
LFB2312:
	pushq	%rbp
LCFI274:
	movq	%rsp, %rbp
LCFI275:
	subq	$16, %rsp
LCFI276:
	movq	%rdi, -8(%rbp)
	leaq	__ZStL8__ioinit(%rip), %rdi
	call	__ZNSt8ios_base4InitD1Ev
	leave
	ret
LFE2312:
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
.globl __ZNSt15__copy_backwardILb1ESt26random_access_iterator_tagE8__copy_bIPK10CoordinateEEPT_PKS6_S9_S7_
	.weak_definition __ZNSt15__copy_backwardILb1ESt26random_access_iterator_tagE8__copy_bIPK10CoordinateEEPT_PKS6_S9_S7_
__ZNSt15__copy_backwardILb1ESt26random_access_iterator_tagE8__copy_bIPK10CoordinateEEPT_PKS6_S9_S7_:
LFB2307:
	pushq	%rbp
LCFI277:
	movq	%rsp, %rbp
LCFI278:
	subq	$48, %rsp
LCFI279:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	0(,%rax,8), %rcx
	movq	-8(%rbp), %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	subq	%rdx, %rdi
	movq	-24(%rbp), %rsi
	movq	%rcx, %rdx
	call	_memmove
	movq	-8(%rbp), %rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	subq	%rdx, %rax
	leave
	ret
LFE2307:
.globl __ZSt19__copy_backward_auxIPPK10CoordinateS3_ET0_T_S5_S4_
	.weak_definition __ZSt19__copy_backward_auxIPPK10CoordinateS3_ET0_T_S5_S4_
__ZSt19__copy_backward_auxIPPK10CoordinateS3_ET0_T_S5_S4_:
LFB2303:
	pushq	%rbp
LCFI280:
	movq	%rsp, %rbp
LCFI281:
	subq	$48, %rsp
LCFI282:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt15__copy_backwardILb1ESt26random_access_iterator_tagE8__copy_bIPK10CoordinateEEPT_PKS6_S9_S7_
	leave
	ret
LFE2303:
.globl __ZNSt22__copy_backward_normalILb0ELb0EE10__copy_b_nIPPK10CoordinateS5_EET0_T_S7_S6_
	.weak_definition __ZNSt22__copy_backward_normalILb0ELb0EE10__copy_b_nIPPK10CoordinateS5_EET0_T_S7_S6_
__ZNSt22__copy_backward_normalILb0ELb0EE10__copy_b_nIPPK10CoordinateS5_EET0_T_S7_S6_:
LFB2282:
	pushq	%rbp
LCFI283:
	movq	%rsp, %rbp
LCFI284:
	subq	$32, %rsp
LCFI285:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt19__copy_backward_auxIPPK10CoordinateS3_ET0_T_S5_S4_
	leave
	ret
LFE2282:
.globl __ZSt13copy_backwardIPPK10CoordinateS3_ET0_T_S5_S4_
	.weak_definition __ZSt13copy_backwardIPPK10CoordinateS3_ET0_T_S5_S4_
__ZSt13copy_backwardIPPK10CoordinateS3_ET0_T_S5_S4_:
LFB2254:
	pushq	%rbp
LCFI286:
	movq	%rsp, %rbp
LCFI287:
	subq	$48, %rsp
LCFI288:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$0, -1(%rbp)
	movb	$0, -2(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt22__copy_backward_normalILb0ELb0EE10__copy_b_nIPPK10CoordinateS5_EET0_T_S7_S6_
	leave
	ret
LFE2254:
.globl __ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_
	.weak_definition __ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_
__ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_:
LFB2305:
	pushq	%rbp
LCFI289:
	movq	%rsp, %rbp
LCFI290:
	subq	$32, %rsp
LCFI291:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	leaq	0(,%rax,8), %rdx
	movq	-8(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	_memmove
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	salq	$3, %rax
	addq	-24(%rbp), %rax
	leave
	ret
LFE2305:
.globl __ZSt10__copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_
	.weak_definition __ZSt10__copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_
__ZSt10__copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_:
LFB2290:
	pushq	%rbp
LCFI292:
	movq	%rsp, %rbp
LCFI293:
	subq	$48, %rsp
LCFI294:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_
	leave
	ret
LFE2290:
.globl __ZNSt13__copy_normalILb0ELb0EE8__copy_nIPPK10CoordinateS5_EET0_T_S7_S6_
	.weak_definition __ZNSt13__copy_normalILb0ELb0EE8__copy_nIPPK10CoordinateS5_EET0_T_S7_S6_
__ZNSt13__copy_normalILb0ELb0EE8__copy_nIPPK10CoordinateS5_EET0_T_S7_S6_:
LFB2264:
	pushq	%rbp
LCFI295:
	movq	%rsp, %rbp
LCFI296:
	subq	$32, %rsp
LCFI297:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt10__copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_
	leave
	ret
LFE2264:
.globl __ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_
	.weak_definition __ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_
__ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_:
LFB2217:
	pushq	%rbp
LCFI298:
	movq	%rsp, %rbp
LCFI299:
	subq	$48, %rsp
LCFI300:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$0, -1(%rbp)
	movb	$0, -2(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt13__copy_normalILb0ELb0EE8__copy_nIPPK10CoordinateS5_EET0_T_S7_S6_
	leave
	ret
LFE2217:
.globl __ZSt24__uninitialized_copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_St11__true_type
	.weak_definition __ZSt24__uninitialized_copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_St11__true_type
__ZSt24__uninitialized_copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_St11__true_type:
LFB2291:
	pushq	%rbp
LCFI301:
	movq	%rsp, %rbp
LCFI302:
	subq	$32, %rsp
LCFI303:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_
	leave
	ret
LFE2291:
.globl __ZSt18uninitialized_copyIPPK10CoordinateS3_ET0_T_S5_S4_
	.weak_definition __ZSt18uninitialized_copyIPPK10CoordinateS3_ET0_T_S5_S4_
__ZSt18uninitialized_copyIPPK10CoordinateS3_ET0_T_S5_S4_:
LFB2265:
	pushq	%rbp
LCFI304:
	movq	%rsp, %rbp
LCFI305:
	subq	$48, %rsp
LCFI306:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	movzbl	-25(%rbp), %eax
	movb	%al, (%rsp)
	call	__ZSt24__uninitialized_copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_St11__true_type
	leave
	ret
LFE2265:
.globl __ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E
	.weak_definition __ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E
__ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E:
LFB2218:
	pushq	%rbp
LCFI307:
	movq	%rsp, %rbp
LCFI308:
	subq	$32, %rsp
LCFI309:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt18uninitialized_copyIPPK10CoordinateS3_ET0_T_S5_S4_
	leave
	ret
LFE2218:
.globl __ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_
	.weak_definition __ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_
__ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_:
LFB2288:
	pushq	%rbp
LCFI310:
	movq	%rsp, %rbp
LCFI311:
	subq	$48, %rsp
LCFI312:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_
	leave
	ret
LFE2288:
.globl __ZNSt13__copy_normalILb1ELb0EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_
	.weak_definition __ZNSt13__copy_normalILb1ELb0EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_
__ZNSt13__copy_normalILb1ELb0EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_:
LFB2310:
	pushq	%rbp
LCFI313:
	movq	%rsp, %rbp
LCFI314:
	pushq	%rbx
LCFI315:
	subq	$40, %rsp
LCFI316:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	-32(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rbx
	leaq	-24(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rdi
	movq	-40(%rbp), %rdx
	movq	%rbx, %rsi
	call	__ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2310:
.globl __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_
	.weak_definition __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_
__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_:
LFB2308:
	pushq	%rbp
LCFI317:
	movq	%rsp, %rbp
LCFI318:
	subq	$48, %rsp
LCFI319:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movb	$0, -2(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt13__copy_normalILb1ELb0EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_
	leave
	ret
LFE2308:
.globl __ZSt24__uninitialized_copy_auxIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_St11__true_type
	.weak_definition __ZSt24__uninitialized_copy_auxIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_St11__true_type
__ZSt24__uninitialized_copy_auxIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_St11__true_type:
LFB2304:
	pushq	%rbp
LCFI320:
	movq	%rsp, %rbp
LCFI321:
	subq	$32, %rsp
LCFI322:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_
	leave
	ret
LFE2304:
.globl __ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_
	.weak_definition __ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_
__ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_:
LFB2286:
	pushq	%rbp
LCFI323:
	movq	%rsp, %rbp
LCFI324:
	subq	$48, %rsp
LCFI325:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	movzbl	-25(%rbp), %eax
	movb	%al, (%rsp)
	call	__ZSt24__uninitialized_copy_auxIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_St11__true_type
	leave
	ret
LFE2286:
.globl __ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_S4_ET0_T_SD_SC_SaIT1_E
	.weak_definition __ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_S4_ET0_T_SD_SC_SaIT1_E
__ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_S4_ET0_T_SD_SC_SaIT1_E:
LFB2260:
	pushq	%rbp
LCFI326:
	movq	%rsp, %rbp
LCFI327:
	subq	$32, %rsp
LCFI328:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rdi
	call	__ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_
	leave
	ret
LFE2260:
.globl __ZNSt13__copy_normalILb1ELb1EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEENS3_IPS6_SB_EEEET0_T_SG_SF_
	.weak_definition __ZNSt13__copy_normalILb1ELb1EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEENS3_IPS6_SB_EEEET0_T_SG_SF_
__ZNSt13__copy_normalILb1ELb1EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEENS3_IPS6_SB_EEEET0_T_SG_SF_:
LFB2262:
	pushq	%rbp
LCFI329:
	movq	%rsp, %rbp
LCFI330:
	pushq	%r12
LCFI331:
	pushq	%rbx
LCFI332:
	subq	$48, %rsp
LCFI333:
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	leaq	-56(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %r12
	leaq	-48(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rbx
	leaq	-40(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rdi
	movq	%r12, %rdx
	movq	%rbx, %rsi
	call	__ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_
	movq	%rax, -24(%rbp)
	leaq	-24(%rbp), %rsi
	leaq	-32(%rbp), %rdi
	call	__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_
	movq	-32(%rbp), %rax
	addq	$48, %rsp
	popq	%rbx
	popq	%r12
	leave
	ret
LFE2262:
.globl __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEENS1_IPS4_S9_EEET0_T_SE_SD_
	.weak_definition __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEENS1_IPS4_S9_EEET0_T_SE_SD_
__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEENS1_IPS4_S9_EEET0_T_SE_SD_:
LFB2215:
	pushq	%rbp
LCFI334:
	movq	%rsp, %rbp
LCFI335:
	subq	$48, %rsp
LCFI336:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movb	$1, -1(%rbp)
	movb	$1, -2(%rbp)
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt13__copy_normalILb1ELb1EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEENS3_IPS6_SB_EEEET0_T_SG_SF_
	leave
	ret
LFE2215:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE8allocateEmPKv
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE8allocateEmPKv
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE8allocateEmPKv:
LFB2285:
	pushq	%rbp
LCFI337:
	movq	%rsp, %rbp
LCFI338:
	subq	$32, %rsp
LCFI339:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv
	cmpq	-16(%rbp), %rax
	setb	%al
	movzbl	%al, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	L305
	call	__ZSt17__throw_bad_allocv
L305:
	movq	-16(%rbp), %rax
	leaq	0(,%rax,8), %rdi
	call	__Znwm
	leave
	ret
LFE2285:
	.align 1
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm:
LFB2256:
	pushq	%rbp
LCFI340:
	movq	%rsp, %rbp
LCFI341:
	subq	$16, %rsp
LCFI342:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	-16(%rbp), %rsi
	movl	$0, %edx
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE8allocateEmPKv
	leave
	ret
LFE2256:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8allocateEmPKv
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8allocateEmPKv
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8allocateEmPKv:
LFB2306:
	pushq	%rbp
LCFI343:
	movq	%rsp, %rbp
LCFI344:
	subq	$32, %rsp
LCFI345:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8max_sizeEv
	cmpq	-16(%rbp), %rax
	setb	%al
	movzbl	%al, %eax
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	je	L311
	call	__ZSt17__throw_bad_allocv
L311:
	movq	-16(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	movq	%rax, %rdi
	call	__Znwm
	leave
	ret
LFE2306:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_get_nodeEv
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_get_nodeEv
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_get_nodeEv:
LFB2301:
	pushq	%rbp
LCFI346:
	movq	%rsp, %rbp
LCFI347:
	subq	$16, %rsp
LCFI348:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %edx
	movl	$1, %esi
	call	__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8allocateEmPKv
	leave
	ret
LFE2301:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE10deallocateEPS3_m
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE10deallocateEPS3_m
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE10deallocateEPS3_m:
LFB2261:
	pushq	%rbp
LCFI349:
	movq	%rsp, %rbp
LCFI350:
	subq	$32, %rsp
LCFI351:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdi
	call	__ZdlPv
	leave
	ret
LFE2261:
	.align 1
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m:
LFB2214:
	pushq	%rbp
LCFI352:
	movq	%rsp, %rbp
LCFI353:
	subq	$32, %rsp
LCFI354:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	cmpq	$0, -16(%rbp)
	je	L321
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rsi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE10deallocateEPS3_m
L321:
	leave
	ret
LFE2214:
	.cstring
LC1:
	.ascii "vector::_M_insert_aux\0"
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
__ZNSt6vectorIPK10CoordinateSaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_:
LFB2205:
	pushq	%rbp
LCFI355:
	movq	%rsp, %rbp
LCFI356:
	pushq	%r12
LCFI357:
	pushq	%rbx
LCFI358:
	subq	$80, %rsp
LCFI359:
	movq	%rdi, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	%rdx, -88(%rbp)
	movq	-72(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-72(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, %rdx
	je	L323
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	leaq	-8(%rax), %rdx
	movq	-72(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	leaq	8(%rax), %rdx
	movq	-72(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-88(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	leaq	-8(%rax), %rbx
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	leaq	-16(%rax), %r12
	leaq	-80(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rdi
	movq	%rbx, %rdx
	movq	%r12, %rsi
	call	__ZSt13copy_backwardIPPK10CoordinateS3_ET0_T_S5_S4_
	leaq	-80(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	movq	%rax, (%rdx)
	jmp	L333
L323:
	movq	-72(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
	movq	%rax, -40(%rbp)
	movq	-72(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv
	cmpq	-40(%rbp), %rax
	sete	%al
	testb	%al, %al
	je	L326
	leaq	LC1(%rip), %rdi
	call	__ZSt20__throw_length_errorPKc
L326:
	cmpq	$0, -40(%rbp)
	je	L328
	movq	-40(%rbp), %rax
	addq	%rax, %rax
	movq	%rax, -96(%rbp)
	jmp	L330
L328:
	movq	$1, -96(%rbp)
L330:
	movq	-96(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	cmpq	-40(%rbp), %rax
	jae	L331
	movq	-72(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv
	movq	%rax, -48(%rbp)
L331:
	movq	-72(%rbp), %rdi
	movq	-48(%rbp), %rsi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-17(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	leaq	-80(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rsi
	movq	-72(%rbp), %rax
	movq	(%rax), %rdi
	leaq	-17(%rbp), %rcx
	movq	-56(%rbp), %rdx
	call	__ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E
	movq	%rax, -64(%rbp)
	leaq	-17(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	movq	-88(%rbp), %rdx
	movq	-64(%rbp), %rsi
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_
	addq	$8, -64(%rbp)
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-18(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	movq	-72(%rbp), %rax
	movq	8(%rax), %rbx
	leaq	-80(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv
	movq	(%rax), %rdi
	leaq	-18(%rbp), %rcx
	movq	-64(%rbp), %rdx
	movq	%rbx, %rsi
	call	__ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E
	movq	%rax, -64(%rbp)
	leaq	-18(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-20(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	movq	-72(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-72(%rbp), %rax
	movq	(%rax), %rdi
	leaq	-20(%rbp), %rdx
	call	__ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E
	leaq	-20(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-72(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	movq	(%rax), %rsi
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m
	movq	-72(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rax, (%rdx)
	movq	-72(%rbp), %rdx
	movq	-64(%rbp), %rax
	movq	%rax, 8(%rdx)
	movq	-48(%rbp), %rax
	salq	$3, %rax
	movq	%rax, %rdx
	addq	-56(%rbp), %rdx
	movq	-72(%rbp), %rax
	movq	%rdx, 16(%rax)
L333:
	addq	$80, %rsp
	popq	%rbx
	popq	%r12
	leave
	ret
LFE2205:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_
__ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_:
LFB2131:
	pushq	%rbp
LCFI360:
	movq	%rsp, %rbp
LCFI361:
	subq	$16, %rsp
LCFI362:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	cmpq	%rax, %rdx
	je	L335
	movq	-8(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	-16(%rbp), %rdx
	call	__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	leaq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	jmp	L338
L335:
	movq	-8(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv
	movq	%rax, %rsi
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
L338:
	leave
	ret
LFE2131:
	.text
	.align 1,0x90
.globl __ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb
__ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb:
LFB2067:
	pushq	%rbp
LCFI363:
	movq	%rsp, %rbp
LCFI364:
	pushq	%rbx
LCFI365:
	subq	$456, %rsp
LCFI366:
	movq	%rdi, -328(%rbp)
	movq	%rsi, -336(%rbp)
	movq	%rdx, -344(%rbp)
	movq	%rcx, -352(%rbp)
	movl	%r8d, %eax
	movb	%al, -356(%rbp)
	leaq	-320(%rbp), %rax
	movq	%rax, -448(%rbp)
	movq	-448(%rbp), %rdx
	movq	%rdx, -440(%rbp)
	movq	$5, -432(%rbp)
	jmp	L340
L341:
	movq	-440(%rbp), %rdi
LEHB3:
	call	__ZN6VectorC1Ev
LEHE3:
	addq	$16, -440(%rbp)
	decq	-432(%rbp)
L340:
	cmpq	$-1, -432(%rbp)
	jne	L341
	movl	$0, -20(%rbp)
	jmp	L343
L398:
	movq	%rax, -456(%rbp)
L344:
	movq	-456(%rbp), %rax
	movq	%rax, -376(%rbp)
	cmpq	$0, -448(%rbp)
	je	L345
	movl	$5, %eax
	subq	-432(%rbp), %rax
	salq	$4, %rax
	movq	-448(%rbp), %rdx
	addq	%rax, %rdx
	movq	%rdx, -392(%rbp)
L347:
	movq	-448(%rbp), %rax
	cmpq	%rax, -392(%rbp)
	je	L345
	subq	$16, -392(%rbp)
	movq	-392(%rbp), %rdx
	movq	(%rdx), %rax
	movq	(%rax), %rax
	movq	-392(%rbp), %rdi
	call	*%rax
	jmp	L347
L345:
	movq	-376(%rbp), %rax
	movq	%rax, -456(%rbp)
	movq	-456(%rbp), %rdi
LEHB4:
	call	__Unwind_Resume
LEHE4:
L349:
	movl	-20(%rbp), %esi
	leaq	-96(%rbp), %rdi
LEHB5:
	call	__ZN6Vector18getDirectionVectorE9DIRECTION
	movl	-20(%rbp), %eax
	addl	%eax, %eax
	leaq	-320(%rbp), %rdx
	cltq
	salq	$4, %rax
	leaq	(%rdx,%rax), %rdi
	leaq	-96(%rbp), %rsi
	call	__ZN6VectoraSERKS_
	leaq	-96(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movl	-20(%rbp), %esi
	leaq	-128(%rbp), %rdi
	call	__ZN6Vector18getDirectionVectorE9DIRECTION
LEHE5:
	leaq	-112(%rbp), %rdi
LEHB6:
	call	__ZN6VectorC1Ev
LEHE6:
	leaq	-144(%rbp), %rdi
	leaq	-128(%rbp), %rdx
	leaq	-112(%rbp), %rsi
LEHB7:
	call	__ZNK6VectormiES_
	movl	-20(%rbp), %eax
	addl	%eax, %eax
	incl	%eax
	leaq	-320(%rbp), %rdx
	cltq
	salq	$4, %rax
	leaq	(%rdx,%rax), %rdi
	leaq	-144(%rbp), %rsi
	call	__ZN6VectoraSERKS_
	leaq	-144(%rbp), %rdi
	call	__ZN6VectorD1Ev
LEHE7:
	leaq	-112(%rbp), %rdi
LEHB8:
	call	__ZN6VectorD1Ev
LEHE8:
	jmp	L350
L395:
	movq	%rax, -456(%rbp)
L351:
	movq	-456(%rbp), %rbx
	leaq	-112(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -456(%rbp)
	jmp	L353
L350:
	leaq	-128(%rbp), %rdi
LEHB9:
	call	__ZN6VectorD1Ev
LEHE9:
	jmp	L352
L396:
	movq	%rax, -456(%rbp)
L353:
	movq	-456(%rbp), %rbx
	leaq	-128(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -456(%rbp)
	jmp	L386
L352:
	incl	-20(%rbp)
L343:
	cmpl	$2, -20(%rbp)
	jle	L349
	movl	$0, -24(%rbp)
	jmp	L355
L356:
	movl	-24(%rbp), %edx
	movl	%edx, -420(%rbp)
	movl	-24(%rbp), %eax
	leaq	-320(%rbp), %rdx
	cltq
	salq	$4, %rax
	leaq	(%rdx,%rax), %rsi
	leaq	-160(%rbp), %rdi
LEHB10:
	call	__ZN6VectorC1ERKS_
LEHE10:
	movq	-336(%rbp), %rsi
	leaq	-176(%rbp), %rdi
	leaq	-160(%rbp), %rdx
LEHB11:
	call	__ZNK6VectorplES_
LEHE11:
	movq	-328(%rbp), %rax
	movq	40(%rax), %rdi
	leaq	-176(%rbp), %rsi
LEHB12:
	call	__ZNK5Board13getCoordinateE6Vector
LEHE12:
	movslq	-420(%rbp),%rdx
	movq	%rax, -224(%rbp,%rdx,8)
	leaq	-176(%rbp), %rdi
LEHB13:
	call	__ZN6VectorD1Ev
LEHE13:
	jmp	L357
L393:
	movq	%rax, -456(%rbp)
L358:
	movq	-456(%rbp), %rbx
	leaq	-176(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -456(%rbp)
	jmp	L360
L357:
	leaq	-160(%rbp), %rdi
LEHB14:
	call	__ZN6VectorD1Ev
LEHE14:
	jmp	L359
L394:
	movq	%rax, -456(%rbp)
L360:
	movq	-456(%rbp), %rbx
	leaq	-160(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -456(%rbp)
	jmp	L386
L359:
	incl	-24(%rbp)
L355:
	cmpl	$5, -24(%rbp)
	jle	L356
	movq	$0, -64(%rbp)
	movq	-344(%rbp), %rax
	movq	(%rax), %rdx
	movq	-336(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-336(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	movl	$0, -36(%rbp)
	jmp	L362
L363:
	movl	-36(%rbp), %eax
	cltq
	movq	-224(%rbp,%rax,8), %rax
	testq	%rax, %rax
	je	L364
	movq	-344(%rbp), %rax
	movq	(%rax), %rdx
	movl	-36(%rbp), %eax
	cltq
	movq	-224(%rbp,%rax,8), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movl	-36(%rbp), %eax
	cltq
	movq	-224(%rbp,%rax,8), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -48(%rbp)
	movl	-36(%rbp), %eax
	cltq
	movq	-224(%rbp,%rax,8), %rsi
	movq	-328(%rbp), %rax
	movq	40(%rax), %rdi
	movq	-336(%rbp), %rdx
LEHB15:
	call	__ZNK5Board13getConnectionEPK10CoordinateS2_
	movq	%rax, -72(%rbp)
	movq	-328(%rbp), %rax
	movq	48(%rax), %rax
	movq	32(%rax), %rdx
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-72(%rbp), %rax
	movq	8(%rax), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-72(%rbp), %rax
	movl	24(%rax), %eax
	cltq
	leaq	(%rdx,%rax), %rax
	movzbl	(%rax), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	L366
	movq	-72(%rbp), %rax
	movzbl	28(%rax), %eax
	testb	%al, %al
	je	L368
	cmpb	$0, -356(%rbp)
	je	L370
	leaq	-48(%rbp), %rdi
	call	__ZN6EValue10addBarrierEv
	jmp	L374
L370:
	leaq	-48(%rbp), %rdi
	call	__ZN6EValue15addCheapBarrierEv
	jmp	L374
L368:
	leaq	-48(%rbp), %rdi
	call	__ZN6EValue13addConnectionEv
	jmp	L374
L366:
	leaq	-48(%rbp), %rdi
	call	__ZN6EValue7addRailEv
L374:
	movl	-32(%rbp), %esi
	leaq	-48(%rbp), %rdi
	call	__ZNK6EValueleES_
	testb	%al, %al
	je	L364
	movl	-48(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-36(%rbp), %eax
	cltq
	movq	-224(%rbp,%rax,8), %rax
	movq	%rax, -64(%rbp)
L364:
	incl	-36(%rbp)
L362:
	cmpl	$5, -36(%rbp)
	jle	L363
	movq	-344(%rbp), %rax
	movq	(%rax), %rdx
	movq	-336(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-336(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	-32(%rbp), %esi
	call	__ZNK6EValuegtES_
	testb	%al, %al
	je	L377
	cmpq	$0, -352(%rbp)
	je	L379
	movl	$0, -52(%rbp)
	jmp	L381
L382:
	movl	-52(%rbp), %eax
	cltq
	movq	-224(%rbp,%rax,8), %rax
	testq	%rax, %rax
	je	L383
	movl	-52(%rbp), %eax
	leaq	-224(%rbp), %rdx
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rsi
	movq	-352(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_
LEHE15:
L383:
	incl	-52(%rbp)
L381:
	cmpl	$5, -52(%rbp)
	jle	L382
L379:
	movq	-344(%rbp), %rax
	movq	(%rax), %rdx
	movq	-336(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-336(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	addq	%rax, %rdx
	movl	-32(%rbp), %eax
	movl	%eax, (%rdx)
L377:
	movq	-64(%rbp), %rax
	movq	%rax, -416(%rbp)
	leaq	-320(%rbp), %rax
	addq	$96, %rax
	movq	%rax, -384(%rbp)
	jmp	L385
L397:
	movq	%rax, -456(%rbp)
L386:
	movq	-456(%rbp), %rdx
	movq	%rdx, -368(%rbp)
	leaq	-320(%rbp), %rax
	addq	$96, %rax
	movq	%rax, -384(%rbp)
L387:
	leaq	-320(%rbp), %rax
	cmpq	%rax, -384(%rbp)
	je	L388
	subq	$16, -384(%rbp)
	movq	-384(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -408(%rbp)
	movq	-408(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, -400(%rbp)
	movq	-384(%rbp), %rdi
	call	*-400(%rbp)
	jmp	L387
L388:
	movq	-368(%rbp), %rax
	movq	%rax, -456(%rbp)
	movq	-456(%rbp), %rdi
LEHB16:
	call	__Unwind_Resume
L385:
	leaq	-320(%rbp), %rax
	cmpq	%rax, -384(%rbp)
	je	L390
	subq	$16, -384(%rbp)
	movq	-384(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, -408(%rbp)
	movq	-408(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -400(%rbp)
	movq	-384(%rbp), %rdi
	call	*-400(%rbp)
LEHE16:
	jmp	L385
L390:
	movq	-416(%rbp), %rax
	addq	$456, %rsp
	popq	%rbx
	leave
	ret
LFE2067:
	.section __TEXT,__gcc_except_tab
GCC_except_table1:
LLSDA2067:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0xb6,0x1
	.set L$set$7,LEHB3-LFB2067
	.long L$set$7
	.set L$set$8,LEHE3-LEHB3
	.long L$set$8
	.set L$set$9,L398-LFB2067
	.long L$set$9
	.byte	0x0
	.set L$set$10,LEHB4-LFB2067
	.long L$set$10
	.set L$set$11,LEHE4-LEHB4
	.long L$set$11
	.long	0x0
	.byte	0x0
	.set L$set$12,LEHB5-LFB2067
	.long L$set$12
	.set L$set$13,LEHE5-LEHB5
	.long L$set$13
	.set L$set$14,L397-LFB2067
	.long L$set$14
	.byte	0x0
	.set L$set$15,LEHB6-LFB2067
	.long L$set$15
	.set L$set$16,LEHE6-LEHB6
	.long L$set$16
	.set L$set$17,L396-LFB2067
	.long L$set$17
	.byte	0x0
	.set L$set$18,LEHB7-LFB2067
	.long L$set$18
	.set L$set$19,LEHE7-LEHB7
	.long L$set$19
	.set L$set$20,L395-LFB2067
	.long L$set$20
	.byte	0x0
	.set L$set$21,LEHB8-LFB2067
	.long L$set$21
	.set L$set$22,LEHE8-LEHB8
	.long L$set$22
	.set L$set$23,L396-LFB2067
	.long L$set$23
	.byte	0x0
	.set L$set$24,LEHB9-LFB2067
	.long L$set$24
	.set L$set$25,LEHE9-LEHB9
	.long L$set$25
	.set L$set$26,L397-LFB2067
	.long L$set$26
	.byte	0x0
	.set L$set$27,LEHB10-LFB2067
	.long L$set$27
	.set L$set$28,LEHE10-LEHB10
	.long L$set$28
	.set L$set$29,L397-LFB2067
	.long L$set$29
	.byte	0x0
	.set L$set$30,LEHB11-LFB2067
	.long L$set$30
	.set L$set$31,LEHE11-LEHB11
	.long L$set$31
	.set L$set$32,L394-LFB2067
	.long L$set$32
	.byte	0x0
	.set L$set$33,LEHB12-LFB2067
	.long L$set$33
	.set L$set$34,LEHE12-LEHB12
	.long L$set$34
	.set L$set$35,L393-LFB2067
	.long L$set$35
	.byte	0x0
	.set L$set$36,LEHB13-LFB2067
	.long L$set$36
	.set L$set$37,LEHE13-LEHB13
	.long L$set$37
	.set L$set$38,L394-LFB2067
	.long L$set$38
	.byte	0x0
	.set L$set$39,LEHB14-LFB2067
	.long L$set$39
	.set L$set$40,LEHE14-LEHB14
	.long L$set$40
	.set L$set$41,L397-LFB2067
	.long L$set$41
	.byte	0x0
	.set L$set$42,LEHB15-LFB2067
	.long L$set$42
	.set L$set$43,LEHE15-LEHB15
	.long L$set$43
	.set L$set$44,L397-LFB2067
	.long L$set$44
	.byte	0x0
	.set L$set$45,LEHB16-LFB2067
	.long L$set$45
	.set L$set$46,LEHE16-LEHB16
	.long L$set$46
	.long	0x0
	.byte	0x0
	.text
	.cstring
	.align 3
LC2:
	.ascii "retValue.valid(*this->currentState, playerColor)\0"
LC3:
	.ascii "DavidAI_local.cpp\0"
	.text
	.align 1,0x90
.globl __ZNK7DavidAI21getMoveFromEvaluationEPK10CoordinateRPP6EValueb
__ZNK7DavidAI21getMoveFromEvaluationEPK10CoordinateRPP6EValueb:
LFB2068:
	pushq	%rbp
LCFI367:
	movq	%rsp, %rbp
LCFI368:
	pushq	%rbx
LCFI369:
	subq	$248, %rsp
LCFI370:
	movq	%rdi, -248(%rbp)
	movq	%rsi, -216(%rbp)
	movq	%rdx, -224(%rbp)
	movq	%rcx, -232(%rbp)
	movl	%r8d, %eax
	movb	%al, -236(%rbp)
	movq	-224(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	$0, -48(%rbp)
	movq	$0, -56(%rbp)
	movq	$0, -64(%rbp)
	jmp	L400
L401:
	movq	-40(%rbp), %rax
	movq	%rax, -48(%rbp)
	movzbl	-236(%rbp), %eax
	movq	-232(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	-216(%rbp), %rdi
	movl	%eax, %r8d
	movl	$0, %ecx
LEHB17:
	call	__ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb
	movq	%rax, -40(%rbp)
	movq	-232(%rbp), %rax
	movq	(%rax), %rdx
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-48(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	$2, %esi
	call	__ZNK6EValueleEj
	testb	%al, %al
	je	L400
	movq	-232(%rbp), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rsi
	movq	-232(%rbp), %rax
	movq	(%rax), %rdx
	movq	-48(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-48(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	call	__ZNK6EValuemiERKS_
	movl	%eax, -32(%rbp)
	leaq	-32(%rbp), %rdi
	movl	$1, %esi
	call	__ZNK6EValuegeEj
	testb	%al, %al
	je	L400
	movq	-232(%rbp), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	$0, %esi
	call	__ZNK6EValueeqEj
	testb	%al, %al
	je	L404
	movq	-216(%rbp), %rax
	movq	40(%rax), %rdi
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rsi
	call	__ZNK5Board13getConnectionEPK10CoordinateS2_
	movq	%rax, -56(%rbp)
	jmp	L400
L404:
	movq	-216(%rbp), %rax
	movq	40(%rax), %rdi
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rsi
	call	__ZNK5Board13getConnectionEPK10CoordinateS2_
	movq	%rax, -64(%rbp)
L400:
	movq	-232(%rbp), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	$0, %esi
	call	__ZNK6EValuegtEj
	testb	%al, %al
	jne	L401
	movq	-216(%rbp), %rax
	movl	16(%rax), %esi
	movq	-64(%rbp), %rcx
	movq	-56(%rbp), %rdx
	leaq	-112(%rbp), %rdi
	call	__ZN4MoveC1E11PLAYERCOLORPK10ConnectionS3_
LEHE17:
	movq	-216(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -240(%rbp)
	movq	-216(%rbp), %rax
	movq	48(%rax), %rsi
	leaq	-208(%rbp), %rdi
LEHB18:
	call	__ZN5StateC1ERKS_
LEHE18:
	leaq	-208(%rbp), %rsi
	leaq	-112(%rbp), %rdi
	movl	-240(%rbp), %edx
LEHB19:
	call	__ZN4Move5validE5State11PLAYERCOLOR
	xorl	$1, %eax
	movzbl	%al, %eax
	testq	%rax, %rax
	je	L407
	leaq	LC2(%rip), %rcx
	movl	$244, %edx
	leaq	LC3(%rip), %rsi
	leaq	__ZZNK7DavidAI21getMoveFromEvaluationEPK10CoordinateRPP6EValuebE8__func__(%rip), %rdi
	call	___assert_rtn
LEHE19:
L407:
	leaq	-208(%rbp), %rdi
LEHB20:
	call	__ZN5StateD1Ev
LEHE20:
	jmp	L409
L413:
	movq	%rax, -256(%rbp)
L410:
	movq	-256(%rbp), %rbx
	leaq	-208(%rbp), %rdi
	call	__ZN5StateD1Ev
	movq	%rbx, -256(%rbp)
	jmp	L411
L409:
	movq	-248(%rbp), %rdi
	leaq	-112(%rbp), %rsi
LEHB21:
	call	__ZN4MoveC1ERKS_
LEHE21:
	leaq	-112(%rbp), %rdi
LEHB22:
	call	__ZN4MoveD1Ev
LEHE22:
	jmp	L399
L414:
	movq	%rax, -256(%rbp)
L411:
	movq	-256(%rbp), %rbx
	leaq	-112(%rbp), %rdi
	call	__ZN4MoveD1Ev
	movq	%rbx, -256(%rbp)
	movq	-256(%rbp), %rdi
LEHB23:
	call	__Unwind_Resume
LEHE23:
L399:
	movq	-248(%rbp), %rax
	addq	$248, %rsp
	popq	%rbx
	leave
	ret
LFE2068:
	.section __TEXT,__gcc_except_tab
GCC_except_table2:
LLSDA2068:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0x5b
	.set L$set$47,LEHB17-LFB2068
	.long L$set$47
	.set L$set$48,LEHE17-LEHB17
	.long L$set$48
	.long	0x0
	.byte	0x0
	.set L$set$49,LEHB18-LFB2068
	.long L$set$49
	.set L$set$50,LEHE18-LEHB18
	.long L$set$50
	.set L$set$51,L414-LFB2068
	.long L$set$51
	.byte	0x0
	.set L$set$52,LEHB19-LFB2068
	.long L$set$52
	.set L$set$53,LEHE19-LEHB19
	.long L$set$53
	.set L$set$54,L413-LFB2068
	.long L$set$54
	.byte	0x0
	.set L$set$55,LEHB20-LFB2068
	.long L$set$55
	.set L$set$56,LEHE20-LEHB20
	.long L$set$56
	.set L$set$57,L414-LFB2068
	.long L$set$57
	.byte	0x0
	.set L$set$58,LEHB21-LFB2068
	.long L$set$58
	.set L$set$59,LEHE21-LEHB21
	.long L$set$59
	.set L$set$60,L414-LFB2068
	.long L$set$60
	.byte	0x0
	.set L$set$61,LEHB22-LFB2068
	.long L$set$61
	.set L$set$62,LEHE22-LEHB22
	.long L$set$62
	.long	0x0
	.byte	0x0
	.set L$set$63,LEHB23-LFB2068
	.long L$set$63
	.set L$set$64,LEHE23-LEHB23
	.long L$set$64
	.long	0x0
	.byte	0x0
	.text
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS2_S4_EEEEPS2_mT_SC_
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS2_S4_EEEEPS2_mT_SC_
__ZNSt6vectorIPK10CoordinateSaIS2_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS2_S4_EEEEPS2_mT_SC_:
LFB2213:
	pushq	%rbp
LCFI371:
	movq	%rsp, %rbp
LCFI372:
	subq	$48, %rsp
LCFI373:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%rcx, -48(%rbp)
	movq	-24(%rbp), %rdi
	movq	-32(%rbp), %rsi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-1(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	leaq	-1(%rbp), %rcx
	movq	-16(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	-40(%rbp), %rdi
	call	__ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_S4_ET0_T_SD_SC_SaIT1_E
	leaq	-1(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-16(%rbp), %rax
	leave
	ret
LFE2213:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EEaSERKS4_
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EEaSERKS4_
__ZNSt6vectorIPK10CoordinateSaIS2_EEaSERKS4_:
LFB2141:
	pushq	%rbp
LCFI374:
	movq	%rsp, %rbp
LCFI375:
	pushq	%r13
LCFI376:
	pushq	%r12
LCFI377:
	pushq	%rbx
LCFI378:
	subq	$56, %rsp
LCFI379:
	movq	%rdi, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	-80(%rbp), %rax
	cmpq	-72(%rbp), %rax
	je	L418
	movq	-80(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
	movq	%rax, -48(%rbp)
	movq	-72(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE8capacityEv
	cmpq	-48(%rbp), %rax
	setb	%al
	testb	%al, %al
	je	L420
	movq	-80(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv
	movq	%rax, %rbx
	movq	-80(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv
	movq	%rax, %rdx
	movq	-48(%rbp), %rsi
	movq	-72(%rbp), %rdi
	movq	%rbx, %rcx
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS2_S4_EEEEPS2_mT_SC_
	movq	%rax, -56(%rbp)
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-33(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	movq	-72(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-72(%rbp), %rax
	movq	(%rax), %rdi
	leaq	-33(%rbp), %rdx
	call	__ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E
	leaq	-33(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-72(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	movq	(%rax), %rsi
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m
	movq	-72(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rax, (%rdx)
	movq	-72(%rbp), %rax
	movq	(%rax), %rdx
	movq	-48(%rbp), %rax
	salq	$3, %rax
	addq	%rax, %rdx
	movq	-72(%rbp), %rax
	movq	%rdx, 16(%rax)
	jmp	L422
L420:
	movq	-72(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
	cmpq	-48(%rbp), %rax
	setae	%al
	testb	%al, %al
	je	L423
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-34(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	movq	-72(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv
	movq	%rax, %r12
	movq	-72(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv
	movq	%rax, %r13
	movq	-80(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv
	movq	%rax, %rbx
	movq	-80(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv
	movq	%rax, %rdi
	movq	%r13, %rdx
	movq	%rbx, %rsi
	call	__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEENS1_IPS4_S9_EEET0_T_SE_SD_
	movq	%rax, %rdi
	leaq	-34(%rbp), %rdx
	movq	%r12, %rsi
	call	__ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEES4_EvT_SA_SaIT0_E
	leaq	-34(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	jmp	L422
L423:
	movq	-72(%rbp), %rax
	movq	(%rax), %r12
	movq	-80(%rbp), %rax
	movq	(%rax), %rbx
	movq	-72(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
	salq	$3, %rax
	leaq	(%rbx,%rax), %rsi
	movq	-80(%rbp), %rax
	movq	(%rax), %rdi
	movq	%r12, %rdx
	call	__ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_
	movq	-72(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-35(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	movq	-72(%rbp), %rax
	movq	8(%rax), %r12
	movq	-80(%rbp), %rax
	movq	8(%rax), %r13
	movq	-80(%rbp), %rax
	movq	(%rax), %rbx
	movq	-72(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
	salq	$3, %rax
	leaq	(%rbx,%rax), %rdi
	leaq	-35(%rbp), %rcx
	movq	%r12, %rdx
	movq	%r13, %rsi
	call	__ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E
	leaq	-35(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
L422:
	movq	-72(%rbp), %rax
	movq	(%rax), %rdx
	movq	-48(%rbp), %rax
	salq	$3, %rax
	addq	%rax, %rdx
	movq	-72(%rbp), %rax
	movq	%rdx, 8(%rax)
L418:
	movq	-72(%rbp), %rax
	addq	$56, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	leave
	ret
LFE2141:
	.align 1
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EED2Ev
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EED2Ev
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EED2Ev:
LFB2200:
	pushq	%rbp
LCFI380:
	movq	%rsp, %rbp
LCFI381:
	subq	$16, %rsp
LCFI382:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$3, %rax
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	(%rax), %rsi
	movq	-8(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m
	movq	-8(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implD1Ev
	leave
	ret
LFE2200:
	.align 1
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev:
LFB2130:
	pushq	%rbp
LCFI383:
	movq	%rsp, %rbp
LCFI384:
	subq	$32, %rsp
LCFI385:
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv
	movq	%rax, %rsi
	leaq	-1(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1ERKS2_
	movq	-24(%rbp), %rax
	movq	8(%rax), %rsi
	movq	-24(%rbp), %rax
	movq	(%rax), %rdi
	leaq	-1(%rbp), %rdx
	call	__ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E
	leaq	-1(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-24(%rbp), %rdi
	call	__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EED2Ev
	leave
	ret
LFE2130:
	.align 1
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE10deallocateEPS9_m
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE10deallocateEPS9_m
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE10deallocateEPS9_m:
LFB2299:
	pushq	%rbp
LCFI386:
	movq	%rsp, %rbp
LCFI387:
	subq	$32, %rsp
LCFI388:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdi
	call	__ZdlPv
	leave
	ret
LFE2299:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS6_E
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS6_E
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS6_E:
LFB2277:
	pushq	%rbp
LCFI389:
	movq	%rsp, %rbp
LCFI390:
	subq	$16, %rsp
LCFI391:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	movq	-16(%rbp), %rsi
	movl	$1, %edx
	call	__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE10deallocateEPS9_m
	leave
	ret
LFE2277:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE14_M_create_nodeERKS6_
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE14_M_create_nodeERKS6_
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE14_M_create_nodeERKS6_:
LFB2280:
	pushq	%rbp
LCFI392:
	movq	%rsp, %rbp
LCFI393:
	pushq	%rbx
LCFI394:
	subq	$40, %rsp
LCFI395:
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_get_nodeEv
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rbx
	addq	$32, %rbx
	leaq	-17(%rbp), %rdi
	movq	-40(%rbp), %rsi
	call	__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv
	leaq	-17(%rbp), %rdi
	movq	-48(%rbp), %rdx
	movq	%rbx, %rsi
	call	__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE9constructEPS7_RKS7_
	leaq	-17(%rbp), %rdi
	call	__ZNSaISt4pairIK6EValuePK4CityEED1Ev
	movq	-32(%rbp), %rax
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2280:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS6_E
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS6_E
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS6_E:
LFB2241:
	pushq	%rbp
LCFI396:
	movq	%rsp, %rbp
LCFI397:
	pushq	%rbx
LCFI398:
	subq	$40, %rsp
LCFI399:
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-48(%rbp), %rbx
	addq	$32, %rbx
	leaq	-17(%rbp), %rdi
	movq	-40(%rbp), %rsi
	call	__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv
	leaq	-17(%rbp), %rdi
	movq	%rbx, %rsi
	call	__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE7destroyEPS7_
	leaq	-17(%rbp), %rdi
	call	__ZNSaISt4pairIK6EValuePK4CityEED1Ev
	movq	-48(%rbp), %rsi
	movq	-40(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS6_E
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2241:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E:
LFB2173:
	pushq	%rbp
LCFI400:
	movq	%rsp, %rbp
LCFI401:
	subq	$32, %rsp
LCFI402:
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	jmp	L441
L442:
	movq	-32(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base
	movq	%rax, %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E
	movq	-32(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base
	movq	%rax, -8(%rbp)
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS6_E
	movq	-8(%rbp), %rax
	movq	%rax, -32(%rbp)
L441:
	cmpq	$0, -32(%rbp)
	jne	L442
	leave
	ret
LFE2173:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EED1Ev
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EED1Ev
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EED1Ev:
LFB2104:
	pushq	%rbp
LCFI403:
	movq	%rsp, %rbp
LCFI404:
	pushq	%rbx
LCFI405:
	subq	$40, %rsp
LCFI406:
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv
	movq	%rax, %rsi
	movq	-24(%rbp), %rdi
LEHB24:
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E
LEHE24:
	movq	-24(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev
	jmp	L448
L449:
	movq	%rax, -40(%rbp)
L447:
	movq	-40(%rbp), %rbx
	movq	-24(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev
	movq	%rbx, -40(%rbp)
	movq	-40(%rbp), %rdi
LEHB25:
	call	__Unwind_Resume
LEHE25:
L448:
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2104:
	.section __TEXT,__gcc_except_tab
GCC_except_table3:
LLSDA2104:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0x1a
	.set L$set$65,LEHB24-LFB2104
	.long L$set$65
	.set L$set$66,LEHE24-LEHB24
	.long L$set$66
	.set L$set$67,L449-LFB2104
	.long L$set$67
	.byte	0x0
	.set L$set$68,LEHB25-LFB2104
	.long L$set$68
	.set L$set$69,LEHE25-LEHB25
	.long L$set$69
	.long	0x0
	.byte	0x0
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
	.align 1
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev:
LFB2061:
	pushq	%rbp
LCFI407:
	movq	%rsp, %rbp
LCFI408:
	subq	$16, %rsp
LCFI409:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EED1Ev
	leave
	ret
LFE2061:
	.text
	.align 1,0x90
.globl __ZNK7DavidAI25evaluateBoardMoveDistanceEPK10Coordinateb
__ZNK7DavidAI25evaluateBoardMoveDistanceEPK10Coordinateb:
LFB2065:
	pushq	%rbp
LCFI410:
	movq	%rsp, %rbp
LCFI411:
	pushq	%rbx
LCFI412:
	subq	$552, %rsp
LCFI413:
	movq	%rdi, -408(%rbp)
	movq	%rsi, -416(%rbp)
	movb	%dl, -420(%rbp)
	movl	$160, %edi
LEHB26:
	call	__Znam
	movq	%rax, -72(%rbp)
	movl	$0, -24(%rbp)
	jmp	L454
L455:
	movl	-24(%rbp), %eax
	cltq
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	addq	%rax, %rdx
	movq	%rdx, -544(%rbp)
	movl	$52, %edi
	call	__Znam
LEHE26:
	movq	%rax, -536(%rbp)
	movq	-536(%rbp), %rax
	movq	%rax, -528(%rbp)
	movq	$12, -520(%rbp)
	jmp	L456
L457:
	movq	-528(%rbp), %rdi
	call	__ZN6EValueC1Ev
	addq	$4, -528(%rbp)
	decq	-520(%rbp)
L456:
	cmpq	$-1, -520(%rbp)
	jne	L457
	movq	-536(%rbp), %rax
	movq	-544(%rbp), %rdx
	movq	%rax, (%rdx)
	incl	-24(%rbp)
L454:
	cmpl	$19, -24(%rbp)
	jle	L455
	movl	$0, -28(%rbp)
	jmp	L460
L461:
	movl	$0, -32(%rbp)
	jmp	L462
L463:
	movl	-28(%rbp), %eax
	cltq
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movl	-32(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	(%rdx,%rax), %rbx
	leaq	-48(%rbp), %rdi
	call	__ZN6EValueC1Ev
	movl	-48(%rbp), %eax
	movl	%eax, (%rbx)
	incl	-32(%rbp)
L462:
	cmpl	$12, -32(%rbp)
	jle	L463
	incl	-28(%rbp)
L460:
	cmpl	$19, -28(%rbp)
	jle	L461
	movq	-416(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-416(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	$0, %esi
	call	__ZN6EValueaSEj
	leaq	-17(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1Ev
	leaq	-17(%rbp), %rsi
	leaq	-224(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_
	leaq	-17(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	leaq	-18(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1Ev
	leaq	-18(%rbp), %rsi
	leaq	-256(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_
	leaq	-18(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	leaq	-400(%rbp), %rax
	movq	%rax, -512(%rbp)
	movq	-512(%rbp), %rdx
	movq	%rdx, -504(%rbp)
	movq	$5, -496(%rbp)
	jmp	L466
L467:
	movq	-504(%rbp), %rdi
LEHB27:
	call	__ZN6VectorC1Ev
LEHE27:
	addq	$16, -504(%rbp)
	decq	-496(%rbp)
L466:
	cmpq	$-1, -496(%rbp)
	jne	L467
	movl	$0, -52(%rbp)
	jmp	L469
L514:
	movq	%rax, -560(%rbp)
L470:
	movq	-560(%rbp), %rax
	movq	%rax, -440(%rbp)
	cmpq	$0, -512(%rbp)
	je	L471
	movl	$5, %eax
	subq	-496(%rbp), %rax
	salq	$4, %rax
	movq	-512(%rbp), %rdx
	addq	%rax, %rdx
	movq	%rdx, -456(%rbp)
L473:
	movq	-512(%rbp), %rax
	cmpq	%rax, -456(%rbp)
	je	L471
	subq	$16, -456(%rbp)
	movq	-456(%rbp), %rdx
	movq	(%rdx), %rax
	movq	(%rax), %rax
	movq	-456(%rbp), %rdi
	call	*%rax
	jmp	L473
L471:
	movq	-440(%rbp), %rax
	movq	%rax, -560(%rbp)
	jmp	L506
L475:
	movl	-52(%rbp), %esi
	leaq	-112(%rbp), %rdi
LEHB28:
	call	__ZN6Vector18getDirectionVectorE9DIRECTION
	movl	-52(%rbp), %eax
	addl	%eax, %eax
	leaq	-400(%rbp), %rdx
	cltq
	salq	$4, %rax
	leaq	(%rdx,%rax), %rdi
	leaq	-112(%rbp), %rsi
	call	__ZN6VectoraSERKS_
	leaq	-112(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movl	-52(%rbp), %esi
	leaq	-144(%rbp), %rdi
	call	__ZN6Vector18getDirectionVectorE9DIRECTION
LEHE28:
	leaq	-128(%rbp), %rdi
LEHB29:
	call	__ZN6VectorC1Ev
LEHE29:
	leaq	-160(%rbp), %rdi
	leaq	-144(%rbp), %rdx
	leaq	-128(%rbp), %rsi
LEHB30:
	call	__ZNK6VectormiES_
	movl	-52(%rbp), %eax
	addl	%eax, %eax
	incl	%eax
	leaq	-400(%rbp), %rdx
	cltq
	salq	$4, %rax
	leaq	(%rdx,%rax), %rdi
	leaq	-160(%rbp), %rsi
	call	__ZN6VectoraSERKS_
	leaq	-160(%rbp), %rdi
	call	__ZN6VectorD1Ev
LEHE30:
	leaq	-128(%rbp), %rdi
LEHB31:
	call	__ZN6VectorD1Ev
LEHE31:
	jmp	L476
L511:
	movq	%rax, -560(%rbp)
L477:
	movq	-560(%rbp), %rbx
	leaq	-128(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -560(%rbp)
	jmp	L479
L476:
	leaq	-144(%rbp), %rdi
LEHB32:
	call	__ZN6VectorD1Ev
LEHE32:
	jmp	L478
L512:
	movq	%rax, -560(%rbp)
L479:
	movq	-560(%rbp), %rbx
	leaq	-144(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -560(%rbp)
	jmp	L500
L478:
	incl	-52(%rbp)
L469:
	cmpl	$2, -52(%rbp)
	jle	L475
	movl	$0, -56(%rbp)
	jmp	L481
L482:
	movl	-56(%rbp), %edx
	movl	%edx, -484(%rbp)
	movl	-56(%rbp), %eax
	leaq	-400(%rbp), %rdx
	cltq
	salq	$4, %rax
	leaq	(%rdx,%rax), %rsi
	leaq	-176(%rbp), %rdi
LEHB33:
	call	__ZN6VectorC1ERKS_
LEHE33:
	movq	-416(%rbp), %rsi
	leaq	-192(%rbp), %rdi
	leaq	-176(%rbp), %rdx
LEHB34:
	call	__ZNK6VectorplES_
LEHE34:
	movq	-408(%rbp), %rax
	movq	40(%rax), %rdi
	leaq	-192(%rbp), %rsi
LEHB35:
	call	__ZNK5Board13getCoordinateE6Vector
LEHE35:
	movslq	-484(%rbp),%rdx
	movq	%rax, -304(%rbp,%rdx,8)
	leaq	-192(%rbp), %rdi
LEHB36:
	call	__ZN6VectorD1Ev
LEHE36:
	jmp	L483
L509:
	movq	%rax, -560(%rbp)
L484:
	movq	-560(%rbp), %rbx
	leaq	-192(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -560(%rbp)
	jmp	L486
L483:
	leaq	-176(%rbp), %rdi
LEHB37:
	call	__ZN6VectorD1Ev
LEHE37:
	jmp	L485
L510:
	movq	%rax, -560(%rbp)
L486:
	movq	-560(%rbp), %rbx
	leaq	-176(%rbp), %rdi
	call	__ZN6VectorD1Ev
	movq	%rbx, -560(%rbp)
	jmp	L500
L485:
	incl	-56(%rbp)
L481:
	cmpl	$5, -56(%rbp)
	jle	L482
	movl	$0, -60(%rbp)
	jmp	L488
L489:
	movl	-60(%rbp), %eax
	cltq
	movq	-304(%rbp,%rax,8), %rax
	testq	%rax, %rax
	je	L490
	movl	-60(%rbp), %eax
	leaq	-304(%rbp), %rdx
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rsi
	leaq	-224(%rbp), %rdi
LEHB38:
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_
L490:
	incl	-60(%rbp)
L488:
	cmpl	$5, -60(%rbp)
	jle	L489
	leaq	-80(%rbp), %rdi
	call	__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1Ev
	jmp	L493
L494:
	leaq	-224(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv
	movq	%rax, -80(%rbp)
	jmp	L495
L496:
	movzbl	-420(%rbp), %ebx
	leaq	-80(%rbp), %rdi
	call	__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv
	movq	(%rax), %rsi
	leaq	-256(%rbp), %rcx
	leaq	-72(%rbp), %rdx
	movq	-408(%rbp), %rdi
	movl	%ebx, %r8d
	call	__ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb
	leaq	-80(%rbp), %rdi
	movl	$0, %esi
	call	__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEppEi
L495:
	leaq	-224(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv
	movq	%rax, -96(%rbp)
	leaq	-96(%rbp), %rsi
	leaq	-80(%rbp), %rdi
	call	__ZN9__gnu_cxxneIPPK10CoordinateSt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_
	testb	%al, %al
	jne	L496
	leaq	-256(%rbp), %rsi
	leaq	-224(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EEaSERKS4_
LEHE38:
	leaq	-256(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE5clearEv
L493:
	leaq	-224(%rbp), %rdi
	call	__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	jne	L494
	movq	-72(%rbp), %rax
	movq	%rax, -480(%rbp)
	leaq	-400(%rbp), %rax
	addq	$96, %rax
	movq	%rax, -448(%rbp)
	jmp	L499
L513:
	movq	%rax, -560(%rbp)
L500:
	movq	-560(%rbp), %rdx
	movq	%rdx, -432(%rbp)
	leaq	-400(%rbp), %rax
	addq	$96, %rax
	movq	%rax, -448(%rbp)
L501:
	leaq	-400(%rbp), %rax
	cmpq	%rax, -448(%rbp)
	je	L502
	subq	$16, -448(%rbp)
	movq	-448(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -472(%rbp)
	movq	-472(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, -464(%rbp)
	movq	-448(%rbp), %rdi
	call	*-464(%rbp)
	jmp	L501
L502:
	movq	-432(%rbp), %rax
	movq	%rax, -560(%rbp)
	jmp	L506
L499:
	leaq	-400(%rbp), %rax
	cmpq	%rax, -448(%rbp)
	je	L504
	subq	$16, -448(%rbp)
	movq	-448(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, -472(%rbp)
	movq	-472(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -464(%rbp)
	movq	-448(%rbp), %rdi
LEHB39:
	call	*-464(%rbp)
LEHE39:
	jmp	L499
L504:
	leaq	-256(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
	leaq	-224(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
	movq	-480(%rbp), %rdx
	movq	%rdx, -552(%rbp)
	jmp	L453
L515:
	movq	%rax, -560(%rbp)
L506:
	movq	-560(%rbp), %rbx
	leaq	-256(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
	movq	%rbx, -560(%rbp)
L516:
L507:
	movq	-560(%rbp), %rbx
	leaq	-224(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
	movq	%rbx, -560(%rbp)
	movq	-560(%rbp), %rdi
LEHB40:
	call	__Unwind_Resume
LEHE40:
L453:
	movq	-552(%rbp), %rax
	addq	$552, %rsp
	popq	%rbx
	leave
	ret
LFE2065:
	.section __TEXT,__gcc_except_tab
GCC_except_table4:
LLSDA2065:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0xc3,0x1
	.set L$set$70,LEHB26-LFB2065
	.long L$set$70
	.set L$set$71,LEHE26-LEHB26
	.long L$set$71
	.long	0x0
	.byte	0x0
	.set L$set$72,LEHB27-LFB2065
	.long L$set$72
	.set L$set$73,LEHE27-LEHB27
	.long L$set$73
	.set L$set$74,L514-LFB2065
	.long L$set$74
	.byte	0x0
	.set L$set$75,LEHB28-LFB2065
	.long L$set$75
	.set L$set$76,LEHE28-LEHB28
	.long L$set$76
	.set L$set$77,L513-LFB2065
	.long L$set$77
	.byte	0x0
	.set L$set$78,LEHB29-LFB2065
	.long L$set$78
	.set L$set$79,LEHE29-LEHB29
	.long L$set$79
	.set L$set$80,L512-LFB2065
	.long L$set$80
	.byte	0x0
	.set L$set$81,LEHB30-LFB2065
	.long L$set$81
	.set L$set$82,LEHE30-LEHB30
	.long L$set$82
	.set L$set$83,L511-LFB2065
	.long L$set$83
	.byte	0x0
	.set L$set$84,LEHB31-LFB2065
	.long L$set$84
	.set L$set$85,LEHE31-LEHB31
	.long L$set$85
	.set L$set$86,L512-LFB2065
	.long L$set$86
	.byte	0x0
	.set L$set$87,LEHB32-LFB2065
	.long L$set$87
	.set L$set$88,LEHE32-LEHB32
	.long L$set$88
	.set L$set$89,L513-LFB2065
	.long L$set$89
	.byte	0x0
	.set L$set$90,LEHB33-LFB2065
	.long L$set$90
	.set L$set$91,LEHE33-LEHB33
	.long L$set$91
	.set L$set$92,L513-LFB2065
	.long L$set$92
	.byte	0x0
	.set L$set$93,LEHB34-LFB2065
	.long L$set$93
	.set L$set$94,LEHE34-LEHB34
	.long L$set$94
	.set L$set$95,L510-LFB2065
	.long L$set$95
	.byte	0x0
	.set L$set$96,LEHB35-LFB2065
	.long L$set$96
	.set L$set$97,LEHE35-LEHB35
	.long L$set$97
	.set L$set$98,L509-LFB2065
	.long L$set$98
	.byte	0x0
	.set L$set$99,LEHB36-LFB2065
	.long L$set$99
	.set L$set$100,LEHE36-LEHB36
	.long L$set$100
	.set L$set$101,L510-LFB2065
	.long L$set$101
	.byte	0x0
	.set L$set$102,LEHB37-LFB2065
	.long L$set$102
	.set L$set$103,LEHE37-LEHB37
	.long L$set$103
	.set L$set$104,L513-LFB2065
	.long L$set$104
	.byte	0x0
	.set L$set$105,LEHB38-LFB2065
	.long L$set$105
	.set L$set$106,LEHE38-LEHB38
	.long L$set$106
	.set L$set$107,L513-LFB2065
	.long L$set$107
	.byte	0x0
	.set L$set$108,LEHB39-LFB2065
	.long L$set$108
	.set L$set$109,LEHE39-LEHB39
	.long L$set$109
	.set L$set$110,L515-LFB2065
	.long L$set$110
	.byte	0x0
	.set L$set$111,LEHB40-LFB2065
	.long L$set$111
	.set L$set$112,LEHE40-LEHB40
	.long L$set$112
	.long	0x0
	.byte	0x0
	.text
	.align 1,0x90
.globl __ZN7DavidAI7setPawnER5State
__ZN7DavidAI7setPawnER5State:
LFB2062:
	pushq	%rbp
LCFI414:
	movq	%rsp, %rbp
LCFI415:
	pushq	%rbx
LCFI416:
	subq	$120, %rsp
LCFI417:
	movq	%rdi, -104(%rbp)
	movq	%rsi, -112(%rbp)
	movq	-112(%rbp), %rax
	movq	48(%rax), %rdx
	movq	-104(%rbp), %rax
	movq	%rdx, 40(%rax)
	movl	$400, -24(%rbp)
	movl	$0, -28(%rbp)
	jmp	L518
L519:
	movq	-104(%rbp), %rax
	movq	8(%rax), %rdx
	movl	-28(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rax
	movq	%rax, -56(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -36(%rbp)
	jmp	L520
L521:
	leaq	-17(%rbp), %rdi
	call	__ZNSaIPK10CoordinateEC1Ev
	leaq	-17(%rbp), %rsi
	leaq	-96(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_
	leaq	-17(%rbp), %rdi
	call	__ZNSaIPK10CoordinateED1Ev
	movq	-104(%rbp), %rax
	movq	8(%rax), %rdx
	movl	-36(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rax
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rsi
	leaq	-96(%rbp), %rdi
LEHB41:
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_
	leaq	-96(%rbp), %rdx
	movq	-56(%rbp), %rsi
	movq	-112(%rbp), %rdi
	call	__ZNK5State8distanceEPK10CoordinateRKSt6vectorIS2_SaIS2_EE
LEHE41:
	movzwl	%ax, %eax
	addl	%eax, -32(%rbp)
	leaq	-96(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
	incl	-36(%rbp)
	jmp	L520
L528:
	movq	%rax, -120(%rbp)
L522:
	movq	-120(%rbp), %rbx
	leaq	-96(%rbp), %rdi
	call	__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev
	movq	%rbx, -120(%rbp)
	movq	-120(%rbp), %rdi
LEHB42:
	call	__Unwind_Resume
LEHE42:
L520:
	cmpl	$4, -36(%rbp)
	jle	L521
	movl	-32(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jge	L524
	movl	-32(%rbp), %eax
	movl	%eax, -24(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -48(%rbp)
L524:
	incl	-28(%rbp)
L518:
	cmpl	$4, -28(%rbp)
	jle	L519
	movq	-48(%rbp), %rax
	addq	$120, %rsp
	popq	%rbx
	leave
	ret
LFE2062:
	.section __TEXT,__gcc_except_tab
GCC_except_table5:
LLSDA2062:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0x1a
	.set L$set$113,LEHB41-LFB2062
	.long L$set$113
	.set L$set$114,LEHE41-LEHB41
	.long L$set$114
	.set L$set$115,L528-LFB2062
	.long L$set$115
	.byte	0x0
	.set L$set$116,LEHB42-LFB2062
	.long L$set$116
	.set L$set$117,LEHE42-LEHB42
	.long L$set$117
	.long	0x0
	.byte	0x0
	.text
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE9_M_insertEPSt18_Rb_tree_node_baseSE_RKS6_
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE9_M_insertEPSt18_Rb_tree_node_baseSE_RKS6_
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE9_M_insertEPSt18_Rb_tree_node_baseSE_RKS6_:
LFB2246:
	pushq	%rbp
LCFI418:
	movq	%rsp, %rbp
LCFI419:
	pushq	%rbx
LCFI420:
	subq	$88, %rsp
LCFI421:
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	%rdx, -72(%rbp)
	movq	%rcx, -80(%rbp)
	cmpq	$0, -64(%rbp)
	jne	L530
	movq	-56(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv
	cmpq	-72(%rbp), %rax
	je	L530
	movq	-72(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt18_Rb_tree_node_base
	movq	%rax, %rbx
	leaq	-18(%rbp), %rdi
	call	__ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev
	movq	-80(%rbp), %rsi
	leaq	-18(%rbp), %rdi
	call	__ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_
	movq	%rax, %rsi
	movq	-56(%rbp), %rdi
	movq	%rbx, %rdx
	call	__ZNKSt4lessI6EValueEclERKS0_S3_
	testb	%al, %al
	je	L533
L530:
	movb	$1, -81(%rbp)
	jmp	L534
L533:
	movb	$0, -81(%rbp)
L534:
	movzbl	-81(%rbp), %eax
	movb	%al, -17(%rbp)
	movq	-80(%rbp), %rsi
	movq	-56(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE14_M_create_nodeERKS6_
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rcx
	addq	$8, %rcx
	movq	-32(%rbp), %rsi
	movzbl	-17(%rbp), %edi
	movq	-72(%rbp), %rdx
	call	__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_
	movq	-56(%rbp), %rax
	movq	40(%rax), %rax
	leaq	1(%rax), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, 40(%rax)
	movq	-32(%rbp), %rsi
	leaq	-48(%rbp), %rdi
	call	__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E
	movq	-48(%rbp), %rax
	addq	$88, %rsp
	popq	%rbx
	leave
	ret
LFE2246:
	.align 1
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_insert_equalERKS6_
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_insert_equalERKS6_
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_insert_equalERKS6_:
LFB2175:
	pushq	%rbp
LCFI422:
	movq	%rsp, %rbp
LCFI423:
	pushq	%rbx
LCFI424:
	subq	$72, %rsp
LCFI425:
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	-56(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv
	movq	%rax, -40(%rbp)
	jmp	L537
L538:
	movq	-32(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-32(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt13_Rb_tree_nodeIS6_E
	movq	%rax, %rbx
	leaq	-17(%rbp), %rdi
	call	__ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev
	movq	-64(%rbp), %rsi
	leaq	-17(%rbp), %rdi
	call	__ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_
	movq	%rax, %rsi
	movq	-56(%rbp), %rdi
	movq	%rbx, %rdx
	call	__ZNKSt4lessI6EValueEclERKS0_S3_
	testb	%al, %al
	je	L539
	movq	-32(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base
	movq	%rax, -72(%rbp)
	jmp	L541
L539:
	movq	-32(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base
	movq	%rax, -72(%rbp)
L541:
	movq	-72(%rbp), %rax
	movq	%rax, -32(%rbp)
L537:
	cmpq	$0, -32(%rbp)
	jne	L538
	movq	-40(%rbp), %rdx
	movq	-32(%rbp), %rsi
	movq	-64(%rbp), %rcx
	movq	-56(%rbp), %rdi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE9_M_insertEPSt18_Rb_tree_node_baseSE_RKS6_
	addq	$72, %rsp
	popq	%rbx
	leave
	ret
LFE2175:
	.align 1
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_:
LFB2111:
	pushq	%rbp
LCFI426:
	movq	%rsp, %rbp
LCFI427:
	subq	$16, %rsp
LCFI428:
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rsi
	call	__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_insert_equalERKS6_
	leave
	ret
LFE2111:
	.align 1
.globl __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv
	.weak_definition __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv
__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv:
LFB2115:
	pushq	%rbp
LCFI429:
	movq	%rsp, %rbp
LCFI430:
	subq	$16, %rsp
LCFI431:
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rdi
	call	__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	leave
	ret
LFE2115:
	.cstring
	.align 3
LC4:
	.ascii "toCities[i]->valid(*this->currentState, playerColor)\0"
	.text
	.align 1,0x90
.globl __ZN7DavidAI6doMoveER5StateSt6vectorIP4MoveSaIS4_EE
__ZN7DavidAI6doMoveER5StateSt6vectorIP4MoveSaIS4_EE:
LFB2058:
	pushq	%rbp
LCFI432:
	movq	%rsp, %rbp
LCFI433:
	pushq	%rbx
LCFI434:
	subq	$584, %rsp
LCFI435:
	movq	%rdi, -576(%rbp)
	movq	%rsi, -504(%rbp)
	movq	%rdx, -512(%rbp)
	movq	%rcx, -520(%rbp)
	movq	-504(%rbp), %rdx
	movq	-512(%rbp), %rax
	movq	%rax, 48(%rdx)
	movq	-504(%rbp), %rax
	movl	16(%rax), %edx
	leaq	-320(%rbp), %rdi
	movq	-512(%rbp), %rsi
LEHB43:
	call	__ZNK5State7getPawnE11PLAYERCOLOR
LEHE43:
	leaq	-320(%rbp), %rdi
LEHB44:
	call	__ZN4PawncvPK10CoordinateEv
	movq	%rax, %rsi
	movq	-504(%rbp), %rdi
	movl	$1, %edx
	call	__ZNK7DavidAI25evaluateBoardMoveDistanceEPK10Coordinateb
LEHE44:
	movq	%rax, -72(%rbp)
	leaq	-320(%rbp), %rdi
LEHB45:
	call	__ZN4PawnD1Ev
	movq	-504(%rbp), %rax
	movl	16(%rax), %edx
	leaq	-352(%rbp), %rdi
	movq	-512(%rbp), %rsi
	call	__ZNK5State7getPawnE11PLAYERCOLOR
LEHE45:
	leaq	-352(%rbp), %rdi
LEHB46:
	call	__ZN4PawncvPK10CoordinateEv
LEHE46:
	movq	%rax, -568(%rbp)
	jmp	L549
L613:
	movq	%rax, -584(%rbp)
L550:
	movq	-584(%rbp), %rbx
	leaq	-320(%rbp), %rdi
	call	__ZN4PawnD1Ev
	movq	%rbx, -584(%rbp)
	movq	-584(%rbp), %rdi
LEHB47:
	call	__Unwind_Resume
LEHE47:
L549:
	movq	-504(%rbp), %rdi
	movl	$0, %edx
	movq	-568(%rbp), %rsi
LEHB48:
	call	__ZNK7DavidAI25evaluateBoardMoveDistanceEPK10Coordinateb
LEHE48:
	movq	%rax, -80(%rbp)
	leaq	-352(%rbp), %rdi
LEHB49:
	call	__ZN4PawnD1Ev
LEHE49:
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev
	movl	$0, -20(%rbp)
	jmp	L551
L612:
	movq	%rax, -584(%rbp)
L552:
	movq	-584(%rbp), %rbx
	leaq	-352(%rbp), %rdi
	call	__ZN4PawnD1Ev
	movq	%rbx, -584(%rbp)
	movq	-584(%rbp), %rdi
LEHB50:
	call	__Unwind_Resume
LEHE50:
L553:
	movq	-504(%rbp), %rax
	movq	8(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	addq	-80(%rbp), %rax
	movq	(%rax), %rcx
	movq	-504(%rbp), %rax
	movq	8(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rcx,%rax), %rdi
	movl	$0, %esi
	call	__ZNK6EValuegtEj
	testb	%al, %al
	je	L554
	movq	-504(%rbp), %rax
	movq	8(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rcx
	movq	-504(%rbp), %rax
	movq	8(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	addq	-80(%rbp), %rax
	movq	(%rax), %rsi
	movq	-504(%rbp), %rax
	movq	8(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	addq	%rax, %rsi
	leaq	-256(%rbp), %rdi
	movq	%rcx, %rdx
	call	__ZNSt4pairI6EValuePK4CityEC1ERKS0_RKS3_
	leaq	-256(%rbp), %rsi
	leaq	-272(%rbp), %rdi
	call	__ZNSt4pairIK6EValuePK4CityEC1IS0_S4_EERKS_IT_T0_E
	leaq	-272(%rbp), %rsi
	leaq	-400(%rbp), %rdi
LEHB51:
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_
L554:
	incl	-20(%rbp)
L551:
	cmpl	$4, -20(%rbp)
	jle	L553
	leaq	-400(%rbp), %rdi
	call	__ZNKSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE4sizeEv
	cmpl	$1, %eax
	sete	%al
	testb	%al, %al
	je	L557
	movq	-576(%rbp), %rbx
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv
	movq	%rax, -96(%rbp)
	leaq	-96(%rbp), %rdi
	call	__ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv
	movq	8(%rax), %rax
	movq	%rax, %rdx
	leaq	-72(%rbp), %rcx
	movq	-504(%rbp), %rsi
	movl	$1, %r8d
	movq	%rbx, %rdi
	call	__ZNK7DavidAI21getMoveFromEvaluationEPK10CoordinateRPP6EValueb
	jmp	L559
L557:
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv
	movq	%rax, -112(%rbp)
	leaq	-112(%rbp), %rdi
	call	__ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv
	movl	(%rax), %eax
	movl	%eax, -32(%rbp)
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv
	movq	%rax, -128(%rbp)
	leaq	-128(%rbp), %rdi
	call	__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv
	movq	%rax, %rdi
	call	__ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv
	movl	(%rax), %eax
	movl	%eax, -48(%rbp)
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv
	movq	%rax, -144(%rbp)
	leaq	-144(%rbp), %rdi
	call	__ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv
	movq	8(%rax), %rax
	movq	%rax, -136(%rbp)
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv
	movq	%rax, -160(%rbp)
	leaq	-160(%rbp), %rdi
	call	__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv
	movq	%rax, %rdi
	call	__ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv
	movq	8(%rax), %rax
	movq	%rax, -152(%rbp)
	leaq	-32(%rbp), %rdi
	movl	$1, %esi
	call	__ZNK6EValueeqEj
	xorl	$1, %eax
	testb	%al, %al
	jne	L560
	leaq	-48(%rbp), %rdi
	movl	$1, %esi
	call	__ZNK6EValueeqEj
	xorl	$1, %eax
	testb	%al, %al
	jne	L560
	movb	$1, -553(%rbp)
	jmp	L563
L560:
	movb	$0, -553(%rbp)
L563:
	movzbl	-553(%rbp), %eax
	testb	%al, %al
	je	L564
	movq	-136(%rbp), %rsi
	leaq	-72(%rbp), %rdx
	movq	-504(%rbp), %rdi
	movl	$1, %r8d
	movl	$0, %ecx
	call	__ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb
	movq	%rax, %rdx
	movq	-136(%rbp), %rsi
	movq	-504(%rbp), %rax
	movq	40(%rax), %rdi
	call	__ZNK5Board13getConnectionEPK10CoordinateS2_
	movq	%rax, -168(%rbp)
	movq	-152(%rbp), %rsi
	leaq	-72(%rbp), %rdx
	movq	-504(%rbp), %rdi
	movl	$1, %r8d
	movl	$0, %ecx
	call	__ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb
	movq	%rax, %rdx
	movq	-152(%rbp), %rsi
	movq	-504(%rbp), %rax
	movq	40(%rax), %rdi
	call	__ZNK5Board13getConnectionEPK10CoordinateS2_
	movq	%rax, -176(%rbp)
	movq	-576(%rbp), %rdi
	movq	-504(%rbp), %rax
	movl	16(%rax), %esi
	movq	-176(%rbp), %rcx
	movq	-168(%rbp), %rdx
	call	__ZN4MoveC1E11PLAYERCOLORPK10ConnectionS3_
	jmp	L559
L564:
	movq	$0, -288(%rbp)
	movq	$0, -280(%rbp)
	movl	$0, -52(%rbp)
	jmp	L566
L567:
	movq	$0, -184(%rbp)
	cmpl	$0, -52(%rbp)
	jne	L568
	movq	-136(%rbp), %rax
	movq	%rax, -184(%rbp)
	jmp	L570
L568:
	cmpl	$1, -52(%rbp)
	jne	L570
	movq	-152(%rbp), %rax
	movq	%rax, -184(%rbp)
L570:
	movq	$0, -192(%rbp)
	movq	-184(%rbp), %rax
	movq	%rax, -200(%rbp)
	movq	$0, -208(%rbp)
	movq	$0, -216(%rbp)
	jmp	L572
L573:
	movq	-200(%rbp), %rax
	movq	%rax, -192(%rbp)
	leaq	-72(%rbp), %rdx
	movq	-192(%rbp), %rsi
	movq	-504(%rbp), %rdi
	movl	$1, %r8d
	movl	$0, %ecx
	call	__ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb
	movq	%rax, -200(%rbp)
	movq	-192(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-192(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	$2, %esi
	call	__ZNK6EValueleEj
	testb	%al, %al
	je	L572
	movq	-200(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-200(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rsi
	movq	-192(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-192(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	call	__ZNK6EValuemiERKS_
	movl	%eax, -64(%rbp)
	leaq	-64(%rbp), %rdi
	movl	$1, %esi
	call	__ZNK6EValuegeEj
	testb	%al, %al
	je	L572
	movq	-200(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-200(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	$0, %esi
	call	__ZNK6EValueeqEj
	testb	%al, %al
	je	L576
	movq	-504(%rbp), %rax
	movq	40(%rax), %rdi
	movq	-192(%rbp), %rdx
	movq	-200(%rbp), %rsi
	call	__ZNK5Board13getConnectionEPK10CoordinateS2_
	movq	%rax, -208(%rbp)
	jmp	L572
L576:
	movq	-504(%rbp), %rax
	movq	40(%rax), %rdi
	movq	-192(%rbp), %rdx
	movq	-200(%rbp), %rsi
	call	__ZNK5Board13getConnectionEPK10CoordinateS2_
	movq	%rax, -216(%rbp)
L572:
	movq	-200(%rbp), %rax
	movzwl	8(%rax), %eax
	movswq	%ax,%rax
	salq	$3, %rax
	movq	%rax, %rdx
	movq	-72(%rbp), %rax
	leaq	(%rdx,%rax), %rax
	movq	(%rax), %rdx
	movq	-200(%rbp), %rax
	movzwl	10(%rax), %eax
	movswq	%ax,%rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rdi
	movl	$0, %esi
	call	__ZNK6EValuegtEj
	testb	%al, %al
	jne	L573
	movl	-52(%rbp), %eax
	movl	%eax, -548(%rbp)
	movl	$48, %edi
	call	__Znwm
LEHE51:
	movq	%rax, -544(%rbp)
	movq	-504(%rbp), %rax
	movl	16(%rax), %esi
	movq	-216(%rbp), %rcx
	movq	-208(%rbp), %rdx
	movq	-544(%rbp), %rdi
LEHB52:
	call	__ZN4MoveC1E11PLAYERCOLORPK10ConnectionS3_
LEHE52:
	movslq	-548(%rbp),%rax
	movq	-544(%rbp), %rdx
	movq	%rdx, -288(%rbp,%rax,8)
	movq	-504(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -536(%rbp)
	movq	-504(%rbp), %rax
	movq	48(%rax), %rsi
	leaq	-496(%rbp), %rdi
LEHB53:
	call	__ZN5StateC1ERKS_
LEHE53:
	jmp	L579
L610:
	movq	%rax, -584(%rbp)
L580:
	movq	-584(%rbp), %rbx
	movq	-544(%rbp), %rdi
	call	__ZdlPv
	movq	%rbx, -584(%rbp)
	jmp	L607
L579:
	movl	-52(%rbp), %eax
	cltq
	movq	-288(%rbp,%rax,8), %rdi
	leaq	-496(%rbp), %rsi
	movl	-536(%rbp), %edx
LEHB54:
	call	__ZN4Move5validE5State11PLAYERCOLOR
	xorl	$1, %eax
	movzbl	%al, %eax
	testq	%rax, %rax
	je	L581
	leaq	LC4(%rip), %rcx
	movl	$92, %edx
	leaq	LC3(%rip), %rsi
	leaq	__ZZN7DavidAI6doMoveER5StateSt6vectorIP4MoveSaIS4_EEE8__func__(%rip), %rdi
	call	___assert_rtn
LEHE54:
L581:
	leaq	-496(%rbp), %rdi
LEHB55:
	call	__ZN5StateD1Ev
LEHE55:
	jmp	L583
L609:
	movq	%rax, -584(%rbp)
L584:
	movq	-584(%rbp), %rbx
	leaq	-496(%rbp), %rdi
	call	__ZN5StateD1Ev
	movq	%rbx, -584(%rbp)
	jmp	L607
L583:
	incl	-52(%rbp)
L566:
	cmpq	$0, -152(%rbp)
	je	L585
	movl	$2, -552(%rbp)
	jmp	L587
L585:
	movl	$1, -552(%rbp)
L587:
	movl	-552(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jg	L567
	movq	$0, -224(%rbp)
	movq	$0, -232(%rbp)
	movq	-288(%rbp), %rdi
LEHB56:
	call	__ZNK4Move15getSumRailValueEv
	cmpw	$2, %ax
	je	L589
	cmpq	$0, -152(%rbp)
	jne	L591
L589:
	movb	$1, -530(%rbp)
	jmp	L592
L591:
	movb	$0, -530(%rbp)
L592:
	movzbl	-530(%rbp), %eax
	testb	%al, %al
	je	L593
	movq	-288(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	movq	(%rax), %rax
	movq	%rax, -224(%rbp)
	movq	-288(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, -232(%rbp)
	jmp	L595
L593:
	movq	-280(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	movq	(%rax), %rax
	movzbl	28(%rax), %eax
	xorl	$1, %eax
	xorl	$1, %eax
	testb	%al, %al
	jne	L596
	movq	-288(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	movq	(%rax), %rax
	movq	%rax, -528(%rbp)
	movq	-280(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	movq	(%rax), %rax
	cmpq	%rax, -528(%rbp)
	je	L596
	movb	$1, -529(%rbp)
	jmp	L599
L596:
	movb	$0, -529(%rbp)
L599:
	movzbl	-529(%rbp), %eax
	testb	%al, %al
	je	L600
	movq	-288(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	movq	(%rax), %rax
	movq	%rax, -224(%rbp)
	movq	-280(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	movq	(%rax), %rax
	movq	%rax, -232(%rbp)
	jmp	L595
L600:
	movq	-280(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	movq	(%rax), %rax
	movq	%rax, -224(%rbp)
	movq	-280(%rbp), %rdi
	call	__ZNK4Move9getBelegtEv
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, -232(%rbp)
L595:
	movq	-288(%rbp), %rax
	testq	%rax, %rax
	je	L602
	movq	-288(%rbp), %rax
	movq	(%rax), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	-288(%rbp), %rdi
	call	*%rax
L602:
	movq	-280(%rbp), %rax
	testq	%rax, %rax
	je	L604
	movq	-280(%rbp), %rax
	testq	%rax, %rax
	je	L604
	movq	-280(%rbp), %rax
	movq	(%rax), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	-280(%rbp), %rdi
	call	*%rax
L604:
	movq	-576(%rbp), %rdi
	movq	-504(%rbp), %rax
	movl	16(%rax), %esi
	movq	-232(%rbp), %rcx
	movq	-224(%rbp), %rdx
	call	__ZN4MoveC1E11PLAYERCOLORPK10ConnectionS3_
LEHE56:
	jmp	L559
L611:
	movq	%rax, -584(%rbp)
L607:
	movq	-584(%rbp), %rbx
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev
	movq	%rbx, -584(%rbp)
	movq	-584(%rbp), %rdi
LEHB57:
	call	__Unwind_Resume
L559:
	leaq	-400(%rbp), %rdi
	call	__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev
LEHE57:
	movq	-576(%rbp), %rax
	addq	$584, %rsp
	popq	%rbx
	leave
	ret
LFE2058:
	.section __TEXT,__gcc_except_tab
GCC_except_table6:
LLSDA2058:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0xc3,0x1
	.set L$set$118,LEHB43-LFB2058
	.long L$set$118
	.set L$set$119,LEHE43-LEHB43
	.long L$set$119
	.long	0x0
	.byte	0x0
	.set L$set$120,LEHB44-LFB2058
	.long L$set$120
	.set L$set$121,LEHE44-LEHB44
	.long L$set$121
	.set L$set$122,L613-LFB2058
	.long L$set$122
	.byte	0x0
	.set L$set$123,LEHB45-LFB2058
	.long L$set$123
	.set L$set$124,LEHE45-LEHB45
	.long L$set$124
	.long	0x0
	.byte	0x0
	.set L$set$125,LEHB46-LFB2058
	.long L$set$125
	.set L$set$126,LEHE46-LEHB46
	.long L$set$126
	.set L$set$127,L612-LFB2058
	.long L$set$127
	.byte	0x0
	.set L$set$128,LEHB47-LFB2058
	.long L$set$128
	.set L$set$129,LEHE47-LEHB47
	.long L$set$129
	.long	0x0
	.byte	0x0
	.set L$set$130,LEHB48-LFB2058
	.long L$set$130
	.set L$set$131,LEHE48-LEHB48
	.long L$set$131
	.set L$set$132,L612-LFB2058
	.long L$set$132
	.byte	0x0
	.set L$set$133,LEHB49-LFB2058
	.long L$set$133
	.set L$set$134,LEHE49-LEHB49
	.long L$set$134
	.long	0x0
	.byte	0x0
	.set L$set$135,LEHB50-LFB2058
	.long L$set$135
	.set L$set$136,LEHE50-LEHB50
	.long L$set$136
	.long	0x0
	.byte	0x0
	.set L$set$137,LEHB51-LFB2058
	.long L$set$137
	.set L$set$138,LEHE51-LEHB51
	.long L$set$138
	.set L$set$139,L611-LFB2058
	.long L$set$139
	.byte	0x0
	.set L$set$140,LEHB52-LFB2058
	.long L$set$140
	.set L$set$141,LEHE52-LEHB52
	.long L$set$141
	.set L$set$142,L610-LFB2058
	.long L$set$142
	.byte	0x0
	.set L$set$143,LEHB53-LFB2058
	.long L$set$143
	.set L$set$144,LEHE53-LEHB53
	.long L$set$144
	.set L$set$145,L611-LFB2058
	.long L$set$145
	.byte	0x0
	.set L$set$146,LEHB54-LFB2058
	.long L$set$146
	.set L$set$147,LEHE54-LEHB54
	.long L$set$147
	.set L$set$148,L609-LFB2058
	.long L$set$148
	.byte	0x0
	.set L$set$149,LEHB55-LFB2058
	.long L$set$149
	.set L$set$150,LEHE55-LEHB55
	.long L$set$150
	.set L$set$151,L611-LFB2058
	.long L$set$151
	.byte	0x0
	.set L$set$152,LEHB56-LFB2058
	.long L$set$152
	.set L$set$153,LEHE56-LEHB56
	.long L$set$153
	.set L$set$154,L611-LFB2058
	.long L$set$154
	.byte	0x0
	.set L$set$155,LEHB57-LFB2058
	.long L$set$155
	.set L$set$156,LEHE57-LEHB57
	.long L$set$156
	.long	0x0
	.byte	0x0
	.text
	.align 1,0x90
.globl __ZN7DavidAID0Ev
__ZN7DavidAID0Ev:
LFB2057:
	pushq	%rbp
LCFI436:
	movq	%rsp, %rbp
LCFI437:
	subq	$16, %rsp
LCFI438:
	movq	%rdi, -8(%rbp)
	leaq	16+__ZTV7DavidAI(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rdi
	call	__ZN2AID2Ev
	movl	$1, %eax
	testb	%al, %al
	je	L618
	movq	-8(%rbp), %rdi
	call	__ZdlPv
L618:
	leave
	ret
LFE2057:
	.align 1,0x90
.globl __ZN7DavidAID1Ev
__ZN7DavidAID1Ev:
LFB2056:
	pushq	%rbp
LCFI439:
	movq	%rsp, %rbp
LCFI440:
	subq	$16, %rsp
LCFI441:
	movq	%rdi, -8(%rbp)
	leaq	16+__ZTV7DavidAI(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rdi
	call	__ZN2AID2Ev
	movl	$0, %eax
	testb	%al, %al
	je	L623
	movq	-8(%rbp), %rdi
	call	__ZdlPv
L623:
	leave
	ret
LFE2056:
	.align 1,0x90
.globl __ZN7DavidAID2Ev
__ZN7DavidAID2Ev:
LFB2055:
	pushq	%rbp
LCFI442:
	movq	%rsp, %rbp
LCFI443:
	subq	$16, %rsp
LCFI444:
	movq	%rdi, -8(%rbp)
	leaq	16+__ZTV7DavidAI(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rdi
	call	__ZN2AID2Ev
	movl	$0, %eax
	testb	%al, %al
	je	L628
	movq	-8(%rbp), %rdi
	call	__ZdlPv
L628:
	leave
	ret
LFE2055:
	.cstring
LC5:
	.ascii "David\0"
LC6:
	.ascii "DavidAI\0"
	.text
	.align 1,0x90
.globl __ZN7DavidAIC1E11PLAYERCOLOR
__ZN7DavidAIC1E11PLAYERCOLOR:
LFB2053:
	pushq	%rbp
LCFI445:
	movq	%rsp, %rbp
LCFI446:
	pushq	%rbx
LCFI447:
	subq	$40, %rsp
LCFI448:
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rdi
	movl	-28(%rbp), %esi
LEHB58:
	call	__ZN2AIC2E11PLAYERCOLOR
LEHE58:
	leaq	16+__ZTV7DavidAI(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-24(%rbp), %rdi
	addq	$24, %rdi
	leaq	LC5(%rip), %rsi
LEHB59:
	call	__ZNSsaSEPKc
	movq	-24(%rbp), %rdi
	addq	$32, %rdi
	leaq	LC6(%rip), %rsi
	call	__ZNSsaSEPKc
LEHE59:
	movq	-24(%rbp), %rax
	movq	$0, 40(%rax)
	movq	-24(%rbp), %rax
	movq	$0, 48(%rax)
	jmp	L631
L632:
	movq	%rax, -40(%rbp)
L630:
	movq	-40(%rbp), %rbx
	movq	-24(%rbp), %rdi
	call	__ZN2AID2Ev
	movq	%rbx, -40(%rbp)
	movq	-40(%rbp), %rdi
LEHB60:
	call	__Unwind_Resume
LEHE60:
L631:
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2053:
	.section __TEXT,__gcc_except_tab
GCC_except_table7:
LLSDA2053:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0x27
	.set L$set$157,LEHB58-LFB2053
	.long L$set$157
	.set L$set$158,LEHE58-LEHB58
	.long L$set$158
	.long	0x0
	.byte	0x0
	.set L$set$159,LEHB59-LFB2053
	.long L$set$159
	.set L$set$160,LEHE59-LEHB59
	.long L$set$160
	.set L$set$161,L632-LFB2053
	.long L$set$161
	.byte	0x0
	.set L$set$162,LEHB60-LFB2053
	.long L$set$162
	.set L$set$163,LEHE60-LEHB60
	.long L$set$163
	.long	0x0
	.byte	0x0
	.text
	.align 1,0x90
.globl __ZN7DavidAIC2E11PLAYERCOLOR
__ZN7DavidAIC2E11PLAYERCOLOR:
LFB2052:
	pushq	%rbp
LCFI449:
	movq	%rsp, %rbp
LCFI450:
	pushq	%rbx
LCFI451:
	subq	$40, %rsp
LCFI452:
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rdi
	movl	-28(%rbp), %esi
LEHB61:
	call	__ZN2AIC2E11PLAYERCOLOR
LEHE61:
	leaq	16+__ZTV7DavidAI(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-24(%rbp), %rdi
	addq	$24, %rdi
	leaq	LC5(%rip), %rsi
LEHB62:
	call	__ZNSsaSEPKc
	movq	-24(%rbp), %rdi
	addq	$32, %rdi
	leaq	LC6(%rip), %rsi
	call	__ZNSsaSEPKc
LEHE62:
	movq	-24(%rbp), %rax
	movq	$0, 40(%rax)
	movq	-24(%rbp), %rax
	movq	$0, 48(%rax)
	jmp	L635
L636:
	movq	%rax, -40(%rbp)
L634:
	movq	-40(%rbp), %rbx
	movq	-24(%rbp), %rdi
	call	__ZN2AID2Ev
	movq	%rbx, -40(%rbp)
	movq	-40(%rbp), %rdi
LEHB63:
	call	__Unwind_Resume
LEHE63:
L635:
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
LFE2052:
	.section __TEXT,__gcc_except_tab
GCC_except_table8:
LLSDA2052:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0x27
	.set L$set$164,LEHB61-LFB2052
	.long L$set$164
	.set L$set$165,LEHE61-LEHB61
	.long L$set$165
	.long	0x0
	.byte	0x0
	.set L$set$166,LEHB62-LFB2052
	.long L$set$166
	.set L$set$167,LEHE62-LEHB62
	.long L$set$167
	.set L$set$168,L636-LFB2052
	.long L$set$168
	.byte	0x0
	.set L$set$169,LEHB63-LFB2052
	.long L$set$169
	.set L$set$170,LEHE63-LEHB63
	.long L$set$170
	.long	0x0
	.byte	0x0
	.text
.globl __ZTV7DavidAI
	.const_data
	.align 5
__ZTV7DavidAI:
	.quad	0
	.quad	__ZTI7DavidAI
	.quad	__ZN7DavidAI6doMoveER5StateSt6vectorIP4MoveSaIS4_EE
	.quad	__ZN7DavidAI7setPawnER5State
	.quad	__ZN7DavidAI11countPointsER5StateRSt6vectorIP10ConnectionSaIS4_EE
	.quad	__ZN7DavidAI27gatherInformationEndOfRoundEPK11RoundLogger
	.quad	__ZN7DavidAID1Ev
	.quad	__ZN7DavidAID0Ev
.globl __ZTS7DavidAI
	.cstring
__ZTS7DavidAI:
	.ascii "7DavidAI\0"
.globl __ZTI7DavidAI
	.const_data
	.align 4
__ZTI7DavidAI:
	.quad	__ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	__ZTS7DavidAI
	.quad	__ZTI2AI
.lcomm __ZStL8__ioinit,1,0
.lcomm __ZL9BOARDNAME,8,3
	.cstring
__ZZNK7DavidAI21getMoveFromEvaluationEPK10CoordinateRPP6EValuebE8__func__:
	.ascii "getMoveFromEvaluation\0"
__ZZN7DavidAI6doMoveER5StateSt6vectorIP4MoveSaIS4_EEE8__func__:
	.ascii "doMove\0"
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$171,LECIE1-LSCIE1
	.long L$set$171
LSCIE1:
	.long	0x0
	.byte	0x1
	.ascii "zPLR\0"
	.byte	0x1
	.byte	0x78
	.byte	0x10
	.byte	0x7
	.byte	0x9b
	.long	___gxx_personality_v0+4@GOTPCREL
	.byte	0x10
	.byte	0x10
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.byte	0x90
	.byte	0x1
	.align 3
LECIE1:
.globl __ZnwmPv.eh
	.weak_definition __ZnwmPv.eh
__ZnwmPv.eh:
LSFDE1:
	.set L$set$172,LEFDE1-LASFDE1
	.long L$set$172
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB243-.
	.set L$set$173,LFE243-LFB243
	.quad L$set$173
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$174,LCFI0-LFB243
	.long L$set$174
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$175,LCFI1-LCFI0
	.long L$set$175
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE1:
.globl __ZNSt14numeric_limitsItE3maxEv.eh
	.weak_definition __ZNSt14numeric_limitsItE3maxEv.eh
__ZNSt14numeric_limitsItE3maxEv.eh:
LSFDE3:
	.set L$set$176,LEFDE3-LASFDE3
	.long L$set$176
LASFDE3:
	.long	LASFDE3-EH_frame1
	.quad	LFB565-.
	.set L$set$177,LFE565-LFB565
	.quad L$set$177
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$178,LCFI2-LFB565
	.long L$set$178
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$179,LCFI3-LCFI2
	.long L$set$179
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE3:
.globl __ZN6EValueC1Ev.eh
	.weak_definition __ZN6EValueC1Ev.eh
__ZN6EValueC1Ev.eh:
LSFDE5:
	.set L$set$180,LEFDE5-LASFDE5
	.long L$set$180
LASFDE5:
	.long	LASFDE5-EH_frame1
	.quad	LFB1942-.
	.set L$set$181,LFE1942-LFB1942
	.quad L$set$181
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$182,LCFI4-LFB1942
	.long L$set$182
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$183,LCFI5-LCFI4
	.long L$set$183
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE5:
.globl __ZN6EValue7addRailEv.eh
	.weak_definition __ZN6EValue7addRailEv.eh
__ZN6EValue7addRailEv.eh:
LSFDE7:
	.set L$set$184,LEFDE7-LASFDE7
	.long L$set$184
LASFDE7:
	.long	LASFDE7-EH_frame1
	.quad	LFB1943-.
	.set L$set$185,LFE1943-LFB1943
	.quad L$set$185
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$186,LCFI7-LFB1943
	.long L$set$186
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$187,LCFI8-LCFI7
	.long L$set$187
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE7:
.globl __ZN6EValue13addConnectionEv.eh
	.weak_definition __ZN6EValue13addConnectionEv.eh
__ZN6EValue13addConnectionEv.eh:
LSFDE9:
	.set L$set$188,LEFDE9-LASFDE9
	.long L$set$188
LASFDE9:
	.long	LASFDE9-EH_frame1
	.quad	LFB1944-.
	.set L$set$189,LFE1944-LFB1944
	.quad L$set$189
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$190,LCFI9-LFB1944
	.long L$set$190
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$191,LCFI10-LCFI9
	.long L$set$191
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE9:
.globl __ZN6EValue10addBarrierEv.eh
	.weak_definition __ZN6EValue10addBarrierEv.eh
__ZN6EValue10addBarrierEv.eh:
LSFDE11:
	.set L$set$192,LEFDE11-LASFDE11
	.long L$set$192
LASFDE11:
	.long	LASFDE11-EH_frame1
	.quad	LFB1945-.
	.set L$set$193,LFE1945-LFB1945
	.quad L$set$193
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$194,LCFI11-LFB1945
	.long L$set$194
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$195,LCFI12-LCFI11
	.long L$set$195
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE11:
.globl __ZN6EValue15addCheapBarrierEv.eh
	.weak_definition __ZN6EValue15addCheapBarrierEv.eh
__ZN6EValue15addCheapBarrierEv.eh:
LSFDE13:
	.set L$set$196,LEFDE13-LASFDE13
	.long L$set$196
LASFDE13:
	.long	LASFDE13-EH_frame1
	.quad	LFB1946-.
	.set L$set$197,LFE1946-LFB1946
	.quad L$set$197
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$198,LCFI13-LFB1946
	.long L$set$198
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$199,LCFI14-LCFI13
	.long L$set$199
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE13:
.globl __ZN6EValueaSEj.eh
	.weak_definition __ZN6EValueaSEj.eh
__ZN6EValueaSEj.eh:
LSFDE15:
	.set L$set$200,LEFDE15-LASFDE15
	.long L$set$200
LASFDE15:
	.long	LASFDE15-EH_frame1
	.quad	LFB1947-.
	.set L$set$201,LFE1947-LFB1947
	.quad L$set$201
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$202,LCFI15-LFB1947
	.long L$set$202
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$203,LCFI16-LCFI15
	.long L$set$203
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE15:
.globl __ZNK6EValuemiERKS_.eh
	.weak_definition __ZNK6EValuemiERKS_.eh
__ZNK6EValuemiERKS_.eh:
LSFDE17:
	.set L$set$204,LEFDE17-LASFDE17
	.long L$set$204
LASFDE17:
	.long	LASFDE17-EH_frame1
	.quad	LFB1948-.
	.set L$set$205,LFE1948-LFB1948
	.quad L$set$205
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$206,LCFI17-LFB1948
	.long L$set$206
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$207,LCFI18-LCFI17
	.long L$set$207
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE17:
.globl __ZNK6EValuegtEj.eh
	.weak_definition __ZNK6EValuegtEj.eh
__ZNK6EValuegtEj.eh:
LSFDE19:
	.set L$set$208,LEFDE19-LASFDE19
	.long L$set$208
LASFDE19:
	.long	LASFDE19-EH_frame1
	.quad	LFB1949-.
	.set L$set$209,LFE1949-LFB1949
	.quad L$set$209
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$210,LCFI20-LFB1949
	.long L$set$210
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$211,LCFI21-LCFI20
	.long L$set$211
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE19:
.globl __ZNK6EValueeqEj.eh
	.weak_definition __ZNK6EValueeqEj.eh
__ZNK6EValueeqEj.eh:
LSFDE21:
	.set L$set$212,LEFDE21-LASFDE21
	.long L$set$212
LASFDE21:
	.long	LASFDE21-EH_frame1
	.quad	LFB1950-.
	.set L$set$213,LFE1950-LFB1950
	.quad L$set$213
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$214,LCFI22-LFB1950
	.long L$set$214
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$215,LCFI23-LCFI22
	.long L$set$215
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE21:
.globl __ZNK6EValuegeEj.eh
	.weak_definition __ZNK6EValuegeEj.eh
__ZNK6EValuegeEj.eh:
LSFDE23:
	.set L$set$216,LEFDE23-LASFDE23
	.long L$set$216
LASFDE23:
	.long	LASFDE23-EH_frame1
	.quad	LFB1951-.
	.set L$set$217,LFE1951-LFB1951
	.quad L$set$217
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$218,LCFI24-LFB1951
	.long L$set$218
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$219,LCFI25-LCFI24
	.long L$set$219
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE23:
.globl __ZNK6EValueleEj.eh
	.weak_definition __ZNK6EValueleEj.eh
__ZNK6EValueleEj.eh:
LSFDE25:
	.set L$set$220,LEFDE25-LASFDE25
	.long L$set$220
LASFDE25:
	.long	LASFDE25-EH_frame1
	.quad	LFB1952-.
	.set L$set$221,LFE1952-LFB1952
	.quad L$set$221
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$222,LCFI27-LFB1952
	.long L$set$222
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$223,LCFI28-LCFI27
	.long L$set$223
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE25:
.globl __ZNK6EValueltES_.eh
	.weak_definition __ZNK6EValueltES_.eh
__ZNK6EValueltES_.eh:
LSFDE27:
	.set L$set$224,LEFDE27-LASFDE27
	.long L$set$224
LASFDE27:
	.long	LASFDE27-EH_frame1
	.quad	LFB1953-.
	.set L$set$225,LFE1953-LFB1953
	.quad L$set$225
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$226,LCFI30-LFB1953
	.long L$set$226
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$227,LCFI31-LCFI30
	.long L$set$227
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE27:
.globl __ZNK6EValuegtES_.eh
	.weak_definition __ZNK6EValuegtES_.eh
__ZNK6EValuegtES_.eh:
LSFDE29:
	.set L$set$228,LEFDE29-LASFDE29
	.long L$set$228
LASFDE29:
	.long	LASFDE29-EH_frame1
	.quad	LFB1954-.
	.set L$set$229,LFE1954-LFB1954
	.quad L$set$229
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$230,LCFI32-LFB1954
	.long L$set$230
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$231,LCFI33-LCFI32
	.long L$set$231
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE29:
.globl __ZNK6EValueleES_.eh
	.weak_definition __ZNK6EValueleES_.eh
__ZNK6EValueleES_.eh:
LSFDE31:
	.set L$set$232,LEFDE31-LASFDE31
	.long L$set$232
LASFDE31:
	.long	LASFDE31-EH_frame1
	.quad	LFB1955-.
	.set L$set$233,LFE1955-LFB1955
	.quad L$set$233
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$234,LCFI34-LFB1955
	.long L$set$234
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$235,LCFI35-LCFI34
	.long L$set$235
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE31:
.globl __ZN7DavidAI11countPointsER5StateRSt6vectorIP10ConnectionSaIS4_EE.eh
__ZN7DavidAI11countPointsER5StateRSt6vectorIP10ConnectionSaIS4_EE.eh:
LSFDE33:
	.set L$set$236,LEFDE33-LASFDE33
	.long L$set$236
LASFDE33:
	.long	LASFDE33-EH_frame1
	.quad	LFB2063-.
	.set L$set$237,LFE2063-LFB2063
	.quad L$set$237
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$238,LCFI37-LFB2063
	.long L$set$238
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$239,LCFI38-LCFI37
	.long L$set$239
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE33:
.globl __ZN7DavidAI27gatherInformationEndOfRoundEPK11RoundLogger.eh
__ZN7DavidAI27gatherInformationEndOfRoundEPK11RoundLogger.eh:
LSFDE35:
	.set L$set$240,LEFDE35-LASFDE35
	.long L$set$240
LASFDE35:
	.long	LASFDE35-EH_frame1
	.quad	LFB2064-.
	.set L$set$241,LFE2064-LFB2064
	.quad L$set$241
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$242,LCFI39-LFB2064
	.long L$set$242
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$243,LCFI40-LCFI39
	.long L$set$243
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE35:
.globl __ZN6VectoraSERKS_.eh
	.weak_definition __ZN6VectoraSERKS_.eh
__ZN6VectoraSERKS_.eh:
LSFDE37:
	.set L$set$244,LEFDE37-LASFDE37
	.long L$set$244
LASFDE37:
	.long	LASFDE37-EH_frame1
	.quad	LFB2066-.
	.set L$set$245,LFE2066-LFB2066
	.quad L$set$245
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$246,LCFI41-LFB2066
	.long L$set$246
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$247,LCFI42-LCFI41
	.long L$set$247
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE37:
.globl __ZSt3minImERKT_S2_S2_.eh
	.weak_definition __ZSt3minImERKT_S2_S2_.eh
__ZSt3minImERKT_S2_S2_.eh:
LSFDE39:
	.set L$set$248,LEFDE39-LASFDE39
	.long L$set$248
LASFDE39:
	.long	LASFDE39-EH_frame1
	.quad	LFB2069-.
	.set L$set$249,LFE2069-LFB2069
	.quad L$set$249
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$250,LCFI43-LFB2069
	.long L$set$250
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$251,LCFI44-LCFI43
	.long L$set$251
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE39:
__ZStL17__verify_groupingPKcmRKSs.eh:
LSFDE41:
	.set L$set$252,LEFDE41-LASFDE41
	.long L$set$252
LASFDE41:
	.long	LASFDE41-EH_frame1
	.quad	LFB1619-.
	.set L$set$253,LFE1619-LFB1619
	.quad L$set$253
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$254,LCFI45-LFB1619
	.long L$set$254
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$255,LCFI46-LCFI45
	.long L$set$255
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$256,LCFI48-LCFI46
	.long L$set$256
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE41:
.globl __ZNSt15binary_functionI6EValueS0_bEC2Ev.eh
	.weak_definition __ZNSt15binary_functionI6EValueS0_bEC2Ev.eh
__ZNSt15binary_functionI6EValueS0_bEC2Ev.eh:
LSFDE43:
	.set L$set$257,LEFDE43-LASFDE43
	.long L$set$257
LASFDE43:
	.long	LASFDE43-EH_frame1
	.quad	LFB2093-.
	.set L$set$258,LFE2093-LFB2093
	.quad L$set$258
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$259,LCFI49-LFB2093
	.long L$set$259
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$260,LCFI50-LCFI49
	.long L$set$260
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE43:
.globl __ZNSt4lessI6EValueEC1Ev.eh
	.weak_definition __ZNSt4lessI6EValueEC1Ev.eh
__ZNSt4lessI6EValueEC1Ev.eh:
LSFDE45:
	.set L$set$261,LEFDE45-LASFDE45
	.long L$set$261
LASFDE45:
	.long	LASFDE45-EH_frame1
	.quad	LFB2096-.
	.set L$set$262,LFE2096-LFB2096
	.quad L$set$262
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$263,LCFI51-LFB2096
	.long L$set$263
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$264,LCFI52-LCFI51
	.long L$set$264
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE45:
.globl __ZNSt4pairI6EValuePK4CityEC1ERKS0_RKS3_.eh
	.weak_definition __ZNSt4pairI6EValuePK4CityEC1ERKS0_RKS3_.eh
__ZNSt4pairI6EValuePK4CityEC1ERKS0_RKS3_.eh:
LSFDE47:
	.set L$set$265,LEFDE47-LASFDE47
	.long L$set$265
LASFDE47:
	.long	LASFDE47-EH_frame1
	.quad	LFB2107-.
	.set L$set$266,LFE2107-LFB2107
	.quad L$set$266
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$267,LCFI54-LFB2107
	.long L$set$267
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$268,LCFI55-LCFI54
	.long L$set$268
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE47:
.globl __ZNSt4pairIK6EValuePK4CityEC1IS0_S4_EERKS_IT_T0_E.eh
	.weak_definition __ZNSt4pairIK6EValuePK4CityEC1IS0_S4_EERKS_IT_T0_E.eh
__ZNSt4pairIK6EValuePK4CityEC1IS0_S4_EERKS_IT_T0_E.eh:
LSFDE49:
	.set L$set$269,LEFDE49-LASFDE49
	.long L$set$269
LASFDE49:
	.long	LASFDE49-EH_frame1
	.quad	LFB2110-.
	.set L$set$270,LFE2110-LFB2110
	.quad L$set$270
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$271,LCFI56-LFB2110
	.long L$set$271
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$272,LCFI57-LCFI56
	.long L$set$272
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE49:
.globl __ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv.eh
	.weak_definition __ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv.eh
__ZNKSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEptEv.eh:
LSFDE51:
	.set L$set$273,LEFDE51-LASFDE51
	.long L$set$273
LASFDE51:
	.long	LASFDE51-EH_frame1
	.quad	LFB2114-.
	.set L$set$274,LFE2114-LFB2114
	.quad L$set$274
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$275,LCFI58-LFB2114
	.long L$set$275
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$276,LCFI59-LCFI58
	.long L$set$276
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE51:
.globl __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1Ev.eh
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1Ev.eh
__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1Ev.eh:
LSFDE53:
	.set L$set$277,LEFDE53-LASFDE53
	.long L$set$277
LASFDE53:
	.long	LASFDE53-EH_frame1
	.quad	LFB2134-.
	.set L$set$278,LFE2134-LFB2134
	.quad L$set$278
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$279,LCFI60-LFB2134
	.long L$set$279
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$280,LCFI61-LCFI60
	.long L$set$280
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE53:
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv.eh
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv.eh
__ZNKSt6vectorIPK10CoordinateSaIS2_EE4sizeEv.eh:
LSFDE55:
	.set L$set$281,LEFDE55-LASFDE55
	.long L$set$281
LASFDE55:
	.long	LASFDE55-EH_frame1
	.quad	LFB2135-.
	.set L$set$282,LFE2135-LFB2135
	.quad L$set$282
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$283,LCFI62-LFB2135
	.long L$set$283
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$284,LCFI63-LCFI62
	.long L$set$284
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE55:
.globl __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv.eh
	.weak_definition __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv.eh
__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEdeEv.eh:
LSFDE57:
	.set L$set$285,LEFDE57-LASFDE57
	.long L$set$285
LASFDE57:
	.long	LASFDE57-EH_frame1
	.quad	LFB2140-.
	.set L$set$286,LFE2140-LFB2140
	.quad L$set$286
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$287,LCFI64-LFB2140
	.long L$set$287
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$288,LCFI65-LCFI64
	.long L$set$288
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE57:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_beginEv.eh:
LSFDE59:
	.set L$set$289,LEFDE59-LASFDE59
	.long L$set$289
LASFDE59:
	.long	LASFDE59-EH_frame1
	.quad	LFB2174-.
	.set L$set$290,LFE2174-LFB2174
	.quad L$set$290
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$291,LCFI66-LFB2174
	.long L$set$291
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$292,LCFI67-LCFI66
	.long L$set$292
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE59:
.globl __ZNSt14unary_functionISt4pairIK6EValuePK4CityES2_EC2Ev.eh
	.weak_definition __ZNSt14unary_functionISt4pairIK6EValuePK4CityES2_EC2Ev.eh
__ZNSt14unary_functionISt4pairIK6EValuePK4CityES2_EC2Ev.eh:
LSFDE61:
	.set L$set$293,LEFDE61-LASFDE61
	.long L$set$293
LASFDE61:
	.long	LASFDE61-EH_frame1
	.quad	LFB2178-.
	.set L$set$294,LFE2178-LFB2178
	.quad L$set$294
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$295,LCFI68-LFB2178
	.long L$set$295
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$296,LCFI69-LCFI68
	.long L$set$296
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE61:
.globl __ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev.eh
	.weak_definition __ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev.eh
__ZNSt10_Select1stISt4pairIK6EValuePK4CityEEC1Ev.eh:
LSFDE63:
	.set L$set$297,LEFDE63-LASFDE63
	.long L$set$297
LASFDE63:
	.long	LASFDE63-EH_frame1
	.quad	LFB2181-.
	.set L$set$298,LFE2181-LFB2181
	.quad L$set$298
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$299,LCFI70-LFB2181
	.long L$set$299
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$300,LCFI71-LCFI70
	.long L$set$300
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE63:
.globl __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE4sizeEv.eh
	.weak_definition __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE4sizeEv.eh
__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE4sizeEv.eh:
LSFDE65:
	.set L$set$301,LEFDE65-LASFDE65
	.long L$set$301
LASFDE65:
	.long	LASFDE65-EH_frame1
	.quad	LFB2182-.
	.set L$set$302,LFE2182-LFB2182
	.quad L$set$302
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$303,LCFI73-LFB2182
	.long L$set$303
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$304,LCFI74-LCFI73
	.long L$set$304
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE65:
.globl __ZNKSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE4sizeEv.eh
	.weak_definition __ZNKSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE4sizeEv.eh
__ZNKSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE4sizeEv.eh:
LSFDE67:
	.set L$set$305,LEFDE67-LASFDE67
	.long L$set$305
LASFDE67:
	.long	LASFDE67-EH_frame1
	.quad	LFB2112-.
	.set L$set$306,LFE2112-LFB2112
	.quad L$set$306
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$307,LCFI75-LFB2112
	.long L$set$307
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$308,LCFI76-LCFI75
	.long L$set$308
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE67:
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2Ev.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2Ev.eh
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2Ev.eh:
LSFDE69:
	.set L$set$309,LEFDE69-LASFDE69
	.long L$set$309
LASFDE69:
	.long	LASFDE69-EH_frame1
	.quad	LFB2185-.
	.set L$set$310,LFE2185-LFB2185
	.quad L$set$310
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$311,LCFI78-LFB2185
	.long L$set$311
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$312,LCFI79-LCFI78
	.long L$set$312
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE69:
.globl __ZNSaIPK10CoordinateEC1Ev.eh
	.weak_definition __ZNSaIPK10CoordinateEC1Ev.eh
__ZNSaIPK10CoordinateEC1Ev.eh:
LSFDE71:
	.set L$set$313,LEFDE71-LASFDE71
	.long L$set$313
LASFDE71:
	.long	LASFDE71-EH_frame1
	.quad	LFB2118-.
	.set L$set$314,LFE2118-LFB2118
	.quad L$set$314
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$315,LCFI80-LFB2118
	.long L$set$315
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$316,LCFI81-LCFI80
	.long L$set$316
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE71:
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev.eh
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateED2Ev.eh:
LSFDE73:
	.set L$set$317,LEFDE73-LASFDE73
	.long L$set$317
LASFDE73:
	.long	LASFDE73-EH_frame1
	.quad	LFB2188-.
	.set L$set$318,LFE2188-LFB2188
	.quad L$set$318
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$319,LCFI83-LFB2188
	.long L$set$319
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$320,LCFI84-LCFI83
	.long L$set$320
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE73:
.globl __ZNSaIPK10CoordinateED1Ev.eh
	.weak_definition __ZNSaIPK10CoordinateED1Ev.eh
__ZNSaIPK10CoordinateED1Ev.eh:
LSFDE75:
	.set L$set$321,LEFDE75-LASFDE75
	.long L$set$321
LASFDE75:
	.long	LASFDE75-EH_frame1
	.quad	LFB2121-.
	.set L$set$322,LFE2121-LFB2121
	.quad L$set$322
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$323,LCFI85-LFB2121
	.long L$set$323
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$324,LCFI86-LCFI85
	.long L$set$324
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE75:
.globl __ZNSaIPK10CoordinateED2Ev.eh
	.weak_definition __ZNSaIPK10CoordinateED2Ev.eh
__ZNSaIPK10CoordinateED2Ev.eh:
LSFDE77:
	.set L$set$325,LEFDE77-LASFDE77
	.long L$set$325
LASFDE77:
	.long	LASFDE77-EH_frame1
	.quad	LFB2120-.
	.set L$set$326,LFE2120-LFB2120
	.quad L$set$326
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$327,LCFI88-LFB2120
	.long L$set$327
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$328,LCFI89-LCFI88
	.long L$set$328
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE77:
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_.eh
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateEC2ERKS4_.eh:
LSFDE79:
	.set L$set$329,LEFDE79-LASFDE79
	.long L$set$329
LASFDE79:
	.long	LASFDE79-EH_frame1
	.quad	LFB2191-.
	.set L$set$330,LFE2191-LFB2191
	.quad L$set$330
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$331,LCFI91-LFB2191
	.long L$set$331
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$332,LCFI92-LCFI91
	.long L$set$332
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE79:
.globl __ZNSaIPK10CoordinateEC1ERKS2_.eh
	.weak_definition __ZNSaIPK10CoordinateEC1ERKS2_.eh
__ZNSaIPK10CoordinateEC1ERKS2_.eh:
LSFDE81:
	.set L$set$333,LEFDE81-LASFDE81
	.long L$set$333
LASFDE81:
	.long	LASFDE81-EH_frame1
	.quad	LFB2124-.
	.set L$set$334,LFE2124-LFB2124
	.quad L$set$334
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$335,LCFI93-LFB2124
	.long L$set$335
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$336,LCFI94-LCFI93
	.long L$set$336
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE81:
.globl __ZNSaIPK10CoordinateEC2ERKS2_.eh
	.weak_definition __ZNSaIPK10CoordinateEC2ERKS2_.eh
__ZNSaIPK10CoordinateEC2ERKS2_.eh:
LSFDE83:
	.set L$set$337,LEFDE83-LASFDE83
	.long L$set$337
LASFDE83:
	.long	LASFDE83-EH_frame1
	.quad	LFB2123-.
	.set L$set$338,LFE2123-LFB2123
	.quad L$set$338
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$339,LCFI96-LFB2123
	.long L$set$339
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$340,LCFI97-LCFI96
	.long L$set$340
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE83:
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implD1Ev.eh
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implD1Ev.eh
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implD1Ev.eh:
LSFDE85:
	.set L$set$341,LEFDE85-LASFDE85
	.long L$set$341
LASFDE85:
	.long	LASFDE85-EH_frame1
	.quad	LFB2196-.
	.set L$set$342,LFE2196-LFB2196
	.quad L$set$342
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$343,LCFI99-LFB2196
	.long L$set$343
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$344,LCFI100-LCFI99
	.long L$set$344
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE85:
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv.eh
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv.eh
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv.eh:
LSFDE87:
	.set L$set$345,LEFDE87-LASFDE87
	.long L$set$345
LASFDE87:
	.long	LASFDE87-EH_frame1
	.quad	LFB2202-.
	.set L$set$346,LFE2202-LFB2202
	.quad L$set$346
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$347,LCFI102-LFB2202
	.long L$set$347
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$348,LCFI103-LCFI102
	.long L$set$348
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE87:
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_.eh
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE9constructEPS3_RKS3_.eh:
LSFDE89:
	.set L$set$349,LEFDE89-LASFDE89
	.long L$set$349
LASFDE89:
	.long	LASFDE89-EH_frame1
	.quad	LFB2204-.
	.set L$set$350,LFE2204-LFB2204
	.quad L$set$350
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$351,LCFI104-LFB2204
	.long L$set$351
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$352,LCFI105-LCFI104
	.long L$set$352
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE89:
.globl __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_.eh
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_.eh
__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS4_.eh:
LSFDE91:
	.set L$set$353,LEFDE91-LASFDE91
	.long L$set$353
LASFDE91:
	.long	LASFDE91-EH_frame1
	.quad	LFB2208-.
	.set L$set$354,LFE2208-LFB2208
	.quad L$set$354
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$355,LCFI107-LFB2208
	.long L$set$355
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$356,LCFI108-LCFI107
	.long L$set$356
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE91:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EE3endEv.eh:
LSFDE93:
	.set L$set$357,LEFDE93-LASFDE93
	.long L$set$357
LASFDE93:
	.long	LASFDE93-EH_frame1
	.quad	LFB2137-.
	.set L$set$358,LFE2137-LFB2137
	.quad L$set$358
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$359,LCFI109-LFB2137
	.long L$set$359
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$360,LCFI110-LCFI109
	.long L$set$360
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE93:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EE5beginEv.eh:
LSFDE95:
	.set L$set$361,LEFDE95-LASFDE95
	.long L$set$361
LASFDE95:
	.long	LASFDE95-EH_frame1
	.quad	LFB2136-.
	.set L$set$362,LFE2136-LFB2136
	.quad L$set$362
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$363,LCFI112-LFB2136
	.long L$set$363
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$364,LCFI113-LCFI112
	.long L$set$364
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE95:
.globl __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEppEi.eh
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEppEi.eh
__ZN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEEppEi.eh:
LSFDE97:
	.set L$set$365,LEFDE97-LASFDE97
	.long L$set$365
LASFDE97:
	.long	LASFDE97-EH_frame1
	.quad	LFB2139-.
	.set L$set$366,LFE2139-LFB2139
	.quad L$set$366
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$367,LCFI115-LFB2139
	.long L$set$367
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$368,LCFI116-LCFI115
	.long L$set$368
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE97:
.globl __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv.eh
	.weak_definition __ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv.eh
__ZNK9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv.eh:
LSFDE99:
	.set L$set$369,LEFDE99-LASFDE99
	.long L$set$369
LASFDE99:
	.long	LASFDE99-EH_frame1
	.quad	LFB2209-.
	.set L$set$370,LFE2209-LFB2209
	.quad L$set$370
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$371,LCFI118-LFB2209
	.long L$set$371
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$372,LCFI119-LCFI118
	.long L$set$372
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE99:
.globl __ZN9__gnu_cxxneIPPK10CoordinateSt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_.eh
	.weak_definition __ZN9__gnu_cxxneIPPK10CoordinateSt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_.eh
__ZN9__gnu_cxxneIPPK10CoordinateSt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_.eh:
LSFDE101:
	.set L$set$373,LEFDE101-LASFDE101
	.long L$set$373
LASFDE101:
	.long	LASFDE101-EH_frame1
	.quad	LFB2138-.
	.set L$set$374,LFE2138-LFB2138
	.quad L$set$374
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$375,LCFI120-LFB2138
	.long L$set$375
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$376,LCFI121-LCFI120
	.long L$set$376
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$377,LCFI123-LCFI121
	.long L$set$377
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE101:
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE8capacityEv.eh
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE8capacityEv.eh
__ZNKSt6vectorIPK10CoordinateSaIS2_EE8capacityEv.eh:
LSFDE103:
	.set L$set$378,LEFDE103-LASFDE103
	.long L$set$378
LASFDE103:
	.long	LASFDE103-EH_frame1
	.quad	LFB2210-.
	.set L$set$379,LFE2210-LFB2210
	.quad L$set$379
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$380,LCFI124-LFB2210
	.long L$set$380
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$381,LCFI125-LCFI124
	.long L$set$381
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE103:
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev.eh
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEEC2Ev.eh:
LSFDE105:
	.set L$set$382,LEFDE105-LASFDE105
	.long L$set$382
LASFDE105:
	.long	LASFDE105-EH_frame1
	.quad	LFB2222-.
	.set L$set$383,LFE2222-LFB2222
	.quad L$set$383
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$384,LCFI126-LFB2222
	.long L$set$384
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$385,LCFI127-LCFI126
	.long L$set$385
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE105:
.globl __ZNSaISt4pairIK6EValuePK4CityEEC1Ev.eh
	.weak_definition __ZNSaISt4pairIK6EValuePK4CityEEC1Ev.eh
__ZNSaISt4pairIK6EValuePK4CityEEC1Ev.eh:
LSFDE107:
	.set L$set$386,LEFDE107-LASFDE107
	.long L$set$386
LASFDE107:
	.long	LASFDE107-EH_frame1
	.quad	LFB2160-.
	.set L$set$387,LFE2160-LFB2160
	.quad L$set$387
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$388,LCFI128-LFB2160
	.long L$set$388
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$389,LCFI129-LCFI128
	.long L$set$389
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE107:
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEED2Ev.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEED2Ev.eh
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEED2Ev.eh:
LSFDE109:
	.set L$set$390,LEFDE109-LASFDE109
	.long L$set$390
LASFDE109:
	.long	LASFDE109-EH_frame1
	.quad	LFB2225-.
	.set L$set$391,LFE2225-LFB2225
	.quad L$set$391
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$392,LCFI131-LFB2225
	.long L$set$392
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$393,LCFI132-LCFI131
	.long L$set$393
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE109:
.globl __ZNSaISt4pairIK6EValuePK4CityEED1Ev.eh
	.weak_definition __ZNSaISt4pairIK6EValuePK4CityEED1Ev.eh
__ZNSaISt4pairIK6EValuePK4CityEED1Ev.eh:
LSFDE111:
	.set L$set$394,LEFDE111-LASFDE111
	.long L$set$394
LASFDE111:
	.long	LASFDE111-EH_frame1
	.quad	LFB2163-.
	.set L$set$395,LFE2163-LFB2163
	.quad L$set$395
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$396,LCFI133-LFB2163
	.long L$set$396
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$397,LCFI134-LCFI133
	.long L$set$397
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE111:
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev.eh
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev.eh:
LSFDE113:
	.set L$set$398,LEFDE113-LASFDE113
	.long L$set$398
LASFDE113:
	.long	LASFDE113-EH_frame1
	.quad	LFB2237-.
	.set L$set$399,LFE2237-LFB2237
	.quad L$set$399
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$400,LCFI136-LFB2237
	.long L$set$400
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$401,LCFI137-LCFI136
	.long L$set$401
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE113:
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED1Ev.eh
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED1Ev.eh
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED1Ev.eh:
LSFDE115:
	.set L$set$402,LEFDE115-LASFDE115
	.long L$set$402
LASFDE115:
	.long	LASFDE115-EH_frame1
	.quad	LFB2172-.
	.set L$set$403,LFE2172-LFB2172
	.quad L$set$403
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$404,LCFI138-LFB2172
	.long L$set$404
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$405,LCFI139-LCFI138
	.long L$set$405
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE115:
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev.eh
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev.eh
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEED2Ev.eh:
LSFDE117:
	.set L$set$406,LEFDE117-LASFDE117
	.long L$set$406
LASFDE117:
	.long	LASFDE117-EH_frame1
	.quad	LFB2171-.
	.set L$set$407,LFE2171-LFB2171
	.quad L$set$407
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$408,LCFI141-LFB2171
	.long L$set$408
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$409,LCFI142-LCFI141
	.long L$set$409
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE117:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EED1Ev.eh:
LSFDE119:
	.set L$set$410,LEFDE119-LASFDE119
	.long L$set$410
LASFDE119:
	.long	LASFDE119-EH_frame1
	.quad	LFB2102-.
	.set L$set$411,LFE2102-LFB2102
	.quad L$set$411
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$412,LCFI144-LFB2102
	.long L$set$412
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$413,LCFI145-LCFI144
	.long L$set$413
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE119:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_rightEPSt18_Rb_tree_node_base.eh:
LSFDE121:
	.set L$set$414,LEFDE121-LASFDE121
	.long L$set$414
LASFDE121:
	.long	LASFDE121-EH_frame1
	.quad	LFB2239-.
	.set L$set$415,LFE2239-LFB2239
	.quad L$set$415
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$416,LCFI147-LFB2239
	.long L$set$416
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$417,LCFI148-LCFI147
	.long L$set$417
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE121:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE7_S_leftEPSt18_Rb_tree_node_base.eh:
LSFDE123:
	.set L$set$418,LEFDE123-LASFDE123
	.long L$set$418
LASFDE123:
	.long	LASFDE123-EH_frame1
	.quad	LFB2240-.
	.set L$set$419,LFE2240-LFB2240
	.quad L$set$419
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$420,LCFI149-LFB2240
	.long L$set$420
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$421,LCFI150-LCFI149
	.long L$set$421
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE123:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_M_endEv.eh:
LSFDE125:
	.set L$set$422,LEFDE125-LASFDE125
	.long L$set$422
LASFDE125:
	.long	LASFDE125-EH_frame1
	.quad	LFB2242-.
	.set L$set$423,LFE2242-LFB2242
	.quad L$set$423
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$424,LCFI151-LFB2242
	.long L$set$424
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$425,LCFI152-LCFI151
	.long L$set$425
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE125:
.globl __ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_.eh
	.weak_definition __ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_.eh
__ZNKSt10_Select1stISt4pairIK6EValuePK4CityEEclERKS6_.eh:
LSFDE127:
	.set L$set$426,LEFDE127-LASFDE127
	.long L$set$426
LASFDE127:
	.long	LASFDE127-EH_frame1
	.quad	LFB2243-.
	.set L$set$427,LFE2243-LFB2243
	.quad L$set$427
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$428,LCFI153-LFB2243
	.long L$set$428
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$429,LCFI154-LCFI153
	.long L$set$429
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE127:
.globl __ZNKSt4lessI6EValueEclERKS0_S3_.eh
	.weak_definition __ZNKSt4lessI6EValueEclERKS0_S3_.eh
__ZNKSt4lessI6EValueEclERKS0_S3_.eh:
LSFDE129:
	.set L$set$430,LEFDE129-LASFDE129
	.long L$set$430
LASFDE129:
	.long	LASFDE129-EH_frame1
	.quad	LFB2245-.
	.set L$set$431,LFE2245-LFB2245
	.quad L$set$431
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$432,LCFI155-LFB2245
	.long L$set$432
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$433,LCFI156-LCFI155
	.long L$set$433
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE129:
.globl __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E.eh
	.weak_definition __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E.eh
__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEC1EPSt13_Rb_tree_nodeIS6_E.eh:
LSFDE131:
	.set L$set$434,LEFDE131-LASFDE131
	.long L$set$434
LASFDE131:
	.long	LASFDE131-EH_frame1
	.quad	LFB2249-.
	.set L$set$435,LFE2249-LFB2249
	.quad L$set$435
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$436,LCFI158-LFB2249
	.long L$set$436
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$437,LCFI159-LCFI158
	.long L$set$437
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE131:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE5beginEv.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE5beginEv.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE5beginEv.eh:
LSFDE133:
	.set L$set$438,LEFDE133-LASFDE133
	.long L$set$438
LASFDE133:
	.long	LASFDE133-EH_frame1
	.quad	LFB2183-.
	.set L$set$439,LFE2183-LFB2183
	.quad L$set$439
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$440,LCFI160-LFB2183
	.long L$set$440
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$441,LCFI161-LCFI160
	.long L$set$441
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE133:
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv.eh
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv.eh
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv.eh:
LSFDE135:
	.set L$set$442,LEFDE135-LASFDE135
	.long L$set$442
LASFDE135:
	.long	LASFDE135-EH_frame1
	.quad	LFB2113-.
	.set L$set$443,LFE2113-LFB2113
	.quad L$set$443
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$444,LCFI163-LFB2113
	.long L$set$444
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$445,LCFI164-LCFI163
	.long L$set$445
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE135:
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implC1ERKS3_.eh
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implC1ERKS3_.eh
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE12_Vector_implC1ERKS3_.eh:
LSFDE137:
	.set L$set$446,LEFDE137-LASFDE137
	.long L$set$446
LASFDE137:
	.long	LASFDE137-EH_frame1
	.quad	LFB2252-.
	.set L$set$447,LFE2252-LFB2252
	.quad L$set$447
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$448,LCFI166-LFB2252
	.long L$set$448
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$449,LCFI167-LCFI166
	.long L$set$449
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE137:
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EEC2ERKS3_.eh
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EEC2ERKS3_.eh
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EEC2ERKS3_.eh:
LSFDE139:
	.set L$set$450,LEFDE139-LASFDE139
	.long L$set$450
LASFDE139:
	.long	LASFDE139-EH_frame1
	.quad	LFB2197-.
	.set L$set$451,LFE2197-LFB2197
	.quad L$set$451
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$452,LCFI169-LFB2197
	.long L$set$452
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$453,LCFI170-LCFI169
	.long L$set$453
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE139:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EEC1ERKS3_.eh:
LSFDE141:
	.set L$set$454,LEFDE141-LASFDE141
	.long L$set$454
LASFDE141:
	.long	LASFDE141-EH_frame1
	.quad	LFB2127-.
	.set L$set$455,LFE2127-LFB2127
	.quad L$set$455
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$456,LCFI172-LFB2127
	.long L$set$456
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$457,LCFI173-LCFI172
	.long L$set$457
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE141:
.globl __ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_.eh
	.weak_definition __ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_.eh
__ZN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEEC1ERKS5_.eh:
LSFDE143:
	.set L$set$458,LEFDE143-LASFDE143
	.long L$set$458
LASFDE143:
	.long	LASFDE143-EH_frame1
	.quad	LFB2259-.
	.set L$set$459,LFE2259-LFB2259
	.quad L$set$459
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$460,LCFI175-LFB2259
	.long L$set$460
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$461,LCFI176-LCFI175
	.long L$set$461
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE143:
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv.eh
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv.eh
__ZNKSt6vectorIPK10CoordinateSaIS2_EE3endEv.eh:
LSFDE145:
	.set L$set$462,LEFDE145-LASFDE145
	.long L$set$462
LASFDE145:
	.long	LASFDE145-EH_frame1
	.quad	LFB2212-.
	.set L$set$463,LFE2212-LFB2212
	.quad L$set$463
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$464,LCFI177-LFB2212
	.long L$set$464
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$465,LCFI178-LCFI177
	.long L$set$465
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE145:
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv.eh
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv.eh
__ZNKSt6vectorIPK10CoordinateSaIS2_EE5beginEv.eh:
LSFDE147:
	.set L$set$466,LEFDE147-LASFDE147
	.long L$set$466
LASFDE147:
	.long	LASFDE147-EH_frame1
	.quad	LFB2211-.
	.set L$set$467,LFE2211-LFB2211
	.quad L$set$467
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$468,LCFI180-LFB2211
	.long L$set$468
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$469,LCFI181-LCFI180
	.long L$set$469
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE147:
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2Ev.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2Ev.eh
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2Ev.eh:
LSFDE149:
	.set L$set$470,LEFDE149-LASFDE149
	.long L$set$470
LASFDE149:
	.long	LASFDE149-EH_frame1
	.quad	LFB2267-.
	.set L$set$471,LFE2267-LFB2267
	.quad L$set$471
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$472,LCFI183-LFB2267
	.long L$set$472
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$473,LCFI184-LCFI183
	.long L$set$473
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE149:
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC1IS6_EERKSaIT_E.eh
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC1IS6_EERKSaIT_E.eh
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC1IS6_EERKSaIT_E.eh:
LSFDE151:
	.set L$set$474,LEFDE151-LASFDE151
	.long L$set$474
LASFDE151:
	.long	LASFDE151-EH_frame1
	.quad	LFB2232-.
	.set L$set$475,LFE2232-LFB2232
	.quad L$set$475
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$476,LCFI185-LFB2232
	.long L$set$476
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$477,LCFI186-LCFI185
	.long L$set$477
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE151:
.globl __ZNSt4pairIK6EValuePK4CityED1Ev.eh
	.weak_definition __ZNSt4pairIK6EValuePK4CityED1Ev.eh
__ZNSt4pairIK6EValuePK4CityED1Ev.eh:
LSFDE153:
	.set L$set$478,LEFDE153-LASFDE153
	.long L$set$478
LASFDE153:
	.long	LASFDE153-EH_frame1
	.quad	LFB2276-.
	.set L$set$479,LFE2276-LFB2276
	.quad L$set$479
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$480,LCFI188-LFB2276
	.long L$set$480
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$481,LCFI189-LCFI188
	.long L$set$481
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE153:
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE7destroyEPS7_.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE7destroyEPS7_.eh
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE7destroyEPS7_.eh:
LSFDE155:
	.set L$set$482,LEFDE155-LASFDE155
	.long L$set$482
LASFDE155:
	.long	LASFDE155-EH_frame1
	.quad	LFB2273-.
	.set L$set$483,LFE2273-LFB2273
	.quad L$set$483
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$484,LCFI190-LFB2273
	.long L$set$484
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$485,LCFI191-LCFI190
	.long L$set$485
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE155:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt13_Rb_tree_nodeIS6_E.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt13_Rb_tree_nodeIS6_E.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt13_Rb_tree_nodeIS6_E.eh:
LSFDE157:
	.set L$set$486,LEFDE157-LASFDE157
	.long L$set$486
LASFDE157:
	.long	LASFDE157-EH_frame1
	.quad	LFB2278-.
	.set L$set$487,LFE2278-LFB2278
	.quad L$set$487
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$488,LCFI193-LFB2278
	.long L$set$488
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$489,LCFI194-LCFI193
	.long L$set$489
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE157:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt13_Rb_tree_nodeIS6_E.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt13_Rb_tree_nodeIS6_E.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt13_Rb_tree_nodeIS6_E.eh:
LSFDE159:
	.set L$set$490,LEFDE159-LASFDE159
	.long L$set$490
LASFDE159:
	.long	LASFDE159-EH_frame1
	.quad	LFB2244-.
	.set L$set$491,LFE2244-LFB2244
	.quad L$set$491
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$492,LCFI195-LFB2244
	.long L$set$492
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$493,LCFI196-LCFI195
	.long L$set$493
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$494,LCFI198-LCFI196
	.long L$set$494
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE159:
.globl __ZSt13__destroy_auxIPPK10CoordinateEvT_S4_St11__true_type.eh
	.weak_definition __ZSt13__destroy_auxIPPK10CoordinateEvT_S4_St11__true_type.eh
__ZSt13__destroy_auxIPPK10CoordinateEvT_S4_St11__true_type.eh:
LSFDE161:
	.set L$set$495,LEFDE161-LASFDE161
	.long L$set$495
LASFDE161:
	.long	LASFDE161-EH_frame1
	.quad	LFB2281-.
	.set L$set$496,LFE2281-LFB2281
	.quad L$set$496
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$497,LCFI199-LFB2281
	.long L$set$497
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$498,LCFI200-LCFI199
	.long L$set$498
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE161:
.globl __ZSt8_DestroyIPPK10CoordinateEvT_S4_.eh
	.weak_definition __ZSt8_DestroyIPPK10CoordinateEvT_S4_.eh
__ZSt8_DestroyIPPK10CoordinateEvT_S4_.eh:
LSFDE163:
	.set L$set$499,LEFDE163-LASFDE163
	.long L$set$499
LASFDE163:
	.long	LASFDE163-EH_frame1
	.quad	LFB2253-.
	.set L$set$500,LFE2253-LFB2253
	.quad L$set$500
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$501,LCFI201-LFB2253
	.long L$set$501
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$502,LCFI202-LCFI201
	.long L$set$502
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE163:
.globl __ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E.eh
	.weak_definition __ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E.eh
__ZSt8_DestroyIPPK10CoordinateS2_EvT_S4_SaIT0_E.eh:
LSFDE165:
	.set L$set$503,LEFDE165-LASFDE165
	.long L$set$503
LASFDE165:
	.long	LASFDE165-EH_frame1
	.quad	LFB2203-.
	.set L$set$504,LFE2203-LFB2203
	.quad L$set$504
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$505,LCFI204-LFB2203
	.long L$set$505
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$506,LCFI205-LCFI204
	.long L$set$506
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE165:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE15_M_erase_at_endEPS2_.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE15_M_erase_at_endEPS2_.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EE15_M_erase_at_endEPS2_.eh:
LSFDE167:
	.set L$set$507,LEFDE167-LASFDE167
	.long L$set$507
LASFDE167:
	.long	LASFDE167-EH_frame1
	.quad	LFB2219-.
	.set L$set$508,LFE2219-LFB2219
	.quad L$set$508
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$509,LCFI207-LFB2219
	.long L$set$509
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$510,LCFI208-LCFI207
	.long L$set$510
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE167:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE5clearEv.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE5clearEv.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EE5clearEv.eh:
LSFDE169:
	.set L$set$511,LEFDE169-LASFDE169
	.long L$set$511
LASFDE169:
	.long	LASFDE169-EH_frame1
	.quad	LFB2142-.
	.set L$set$512,LFE2142-LFB2142
	.quad L$set$512
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$513,LCFI210-LFB2142
	.long L$set$513
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$514,LCFI211-LCFI210
	.long L$set$514
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE169:
.globl __ZNKSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv.eh
	.weak_definition __ZNKSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv.eh
__ZNKSt12_Vector_baseIPK10CoordinateSaIS2_EE19_M_get_Tp_allocatorEv.eh:
LSFDE171:
	.set L$set$515,LEFDE171-LASFDE171
	.long L$set$515
LASFDE171:
	.long	LASFDE171-EH_frame1
	.quad	LFB2283-.
	.set L$set$516,LFE2283-LFB2283
	.quad L$set$516
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$517,LCFI213-LFB2283
	.long L$set$517
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$518,LCFI214-LCFI213
	.long L$set$518
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE171:
.globl __ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv.eh
	.weak_definition __ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv.eh
__ZNK9__gnu_cxx13new_allocatorIPK10CoordinateE8max_sizeEv.eh:
LSFDE173:
	.set L$set$519,LEFDE173-LASFDE173
	.long L$set$519
LASFDE173:
	.long	LASFDE173-EH_frame1
	.quad	LFB2284-.
	.set L$set$520,LFE2284-LFB2284
	.quad L$set$520
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$521,LCFI215-LFB2284
	.long L$set$521
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$522,LCFI216-LCFI215
	.long L$set$522
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE173:
.globl __ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv.eh
	.weak_definition __ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv.eh
__ZNKSt6vectorIPK10CoordinateSaIS2_EE8max_sizeEv.eh:
LSFDE175:
	.set L$set$523,LEFDE175-LASFDE175
	.long L$set$523
LASFDE175:
	.long	LASFDE175-EH_frame1
	.quad	LFB2255-.
	.set L$set$524,LFE2255-LFB2255
	.quad L$set$524
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$525,LCFI217-LFB2255
	.long L$set$525
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$526,LCFI218-LCFI217
	.long L$set$526
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE175:
.globl __ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv.eh
	.weak_definition __ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv.eh
__ZNK9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS3_SaIS3_EEE4baseEv.eh:
LSFDE177:
	.set L$set$527,LEFDE177-LASFDE177
	.long L$set$527
LASFDE177:
	.long	LASFDE177-EH_frame1
	.quad	LFB2287-.
	.set L$set$528,LFE2287-LFB2287
	.quad L$set$528
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$529,LCFI220-LFB2287
	.long L$set$529
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$530,LCFI221-LCFI220
	.long L$set$530
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE177:
.globl __ZSt13__destroy_auxIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_St11__true_type.eh
	.weak_definition __ZSt13__destroy_auxIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_St11__true_type.eh
__ZSt13__destroy_auxIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_St11__true_type.eh:
LSFDE179:
	.set L$set$531,LEFDE179-LASFDE179
	.long L$set$531
LASFDE179:
	.long	LASFDE179-EH_frame1
	.quad	LFB2289-.
	.set L$set$532,LFE2289-LFB2289
	.quad L$set$532
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$533,LCFI222-LFB2289
	.long L$set$533
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$534,LCFI223-LCFI222
	.long L$set$534
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE179:
.globl __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_.eh
	.weak_definition __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_.eh
__ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEEEvT_SA_.eh:
LSFDE181:
	.set L$set$535,LEFDE181-LASFDE181
	.long L$set$535
LASFDE181:
	.long	LASFDE181-EH_frame1
	.quad	LFB2263-.
	.set L$set$536,LFE2263-LFB2263
	.quad L$set$536
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$537,LCFI224-LFB2263
	.long L$set$537
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$538,LCFI225-LCFI224
	.long L$set$538
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE181:
.globl __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEES4_EvT_SA_SaIT0_E.eh
	.weak_definition __ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEES4_EvT_SA_SaIT0_E.eh
__ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPPK10CoordinateSt6vectorIS4_SaIS4_EEEES4_EvT_SA_SaIT0_E.eh:
LSFDE183:
	.set L$set$539,LEFDE183-LASFDE183
	.long L$set$539
LASFDE183:
	.long	LASFDE183-EH_frame1
	.quad	LFB2216-.
	.set L$set$540,LFE2216-LFB2216
	.quad L$set$540
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$541,LCFI227-LFB2216
	.long L$set$541
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$542,LCFI228-LCFI227
	.long L$set$542
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE183:
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKSA_.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKSA_.eh
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKSA_.eh:
LSFDE185:
	.set L$set$543,LEFDE185-LASFDE185
	.long L$set$543
LASFDE185:
	.long	LASFDE185-EH_frame1
	.quad	LFB2293-.
	.set L$set$544,LFE2293-LFB2293
	.quad L$set$544
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$545,LCFI230-LFB2293
	.long L$set$545
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$546,LCFI231-LCFI230
	.long L$set$546
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE185:
.globl __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKS8_.eh
	.weak_definition __ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKS8_.eh
__ZNSaISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEEC2ERKS8_.eh:
LSFDE187:
	.set L$set$547,LEFDE187-LASFDE187
	.long L$set$547
LASFDE187:
	.long	LASFDE187-EH_frame1
	.quad	LFB2270-.
	.set L$set$548,LFE2270-LFB2270
	.quad L$set$548
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$549,LCFI232-LFB2270
	.long L$set$549
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$550,LCFI233-LCFI232
	.long L$set$550
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE187:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EEC1ERKSaISt13_Rb_tree_nodeIS6_EERKSA_.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EEC1ERKSaISt13_Rb_tree_nodeIS6_EERKSA_.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13_Rb_tree_implISA_Lb0EEC1ERKSaISt13_Rb_tree_nodeIS6_EERKSA_.eh:
LSFDE189:
	.set L$set$551,LEFDE189-LASFDE189
	.long L$set$551
LASFDE189:
	.long	LASFDE189-EH_frame1
	.quad	LFB2235-.
	.set L$set$552,LFE2235-LFB2235
	.quad L$set$552
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$553,LCFI235-LFB2235
	.long L$set$553
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$554,LCFI236-LCFI235
	.long L$set$554
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE189:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EEC1ERKSA_RKSB_.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EEC1ERKSA_RKSB_.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EEC1ERKSA_RKSB_.eh:
LSFDE191:
	.set L$set$555,LEFDE191-LASFDE191
	.long L$set$555
LASFDE191:
	.long	LASFDE191-EH_frame1
	.quad	LFB2169-.
	.set L$set$556,LFE2169-LFB2169
	.quad L$set$556
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$557,LCFI238-LFB2169
	.long L$set$557
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$558,LCFI239-LCFI238
	.long L$set$558
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE191:
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev.eh
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev.eh
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev.eh:
LSFDE193:
	.set L$set$559,LEFDE193-LASFDE193
	.long L$set$559
LASFDE193:
	.long	LASFDE193-EH_frame1
	.quad	LFB2098-.
	.set L$set$560,LFE2098-LFB2098
	.quad L$set$560
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$561,LCFI241-LFB2098
	.long L$set$561
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$562,LCFI242-LCFI241
	.long L$set$562
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE193:
.globl __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE21_M_get_Node_allocatorEv.eh
	.weak_definition __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE21_M_get_Node_allocatorEv.eh
__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE21_M_get_Node_allocatorEv.eh:
LSFDE195:
	.set L$set$563,LEFDE195-LASFDE195
	.long L$set$563
LASFDE195:
	.long	LASFDE195-EH_frame1
	.quad	LFB2295-.
	.set L$set$564,LFE2295-LFB2295
	.quad L$set$564
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$565,LCFI244-LFB2295
	.long L$set$565
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$566,LCFI245-LCFI244
	.long L$set$566
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE195:
.globl __ZNSaISt4pairIK6EValuePK4CityEEC1ISt13_Rb_tree_nodeIS5_EEERKSaIT_E.eh
	.weak_definition __ZNSaISt4pairIK6EValuePK4CityEEC1ISt13_Rb_tree_nodeIS5_EEERKSaIT_E.eh
__ZNSaISt4pairIK6EValuePK4CityEEC1ISt13_Rb_tree_nodeIS5_EEERKSaIT_E.eh:
LSFDE197:
	.set L$set$567,LEFDE197-LASFDE197
	.long L$set$567
LASFDE197:
	.long	LASFDE197-EH_frame1
	.quad	LFB2298-.
	.set L$set$568,LFE2298-LFB2298
	.quad L$set$568
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$569,LCFI246-LFB2298
	.long L$set$569
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$570,LCFI247-LCFI246
	.long L$set$570
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE197:
.globl __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv.eh
	.weak_definition __ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv.eh
__ZNKSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE13get_allocatorEv.eh:
LSFDE199:
	.set L$set$571,LEFDE199-LASFDE199
	.long L$set$571
LASFDE199:
	.long	LASFDE199-EH_frame1
	.quad	LFB2272-.
	.set L$set$572,LFE2272-LFB2272
	.quad L$set$572
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$573,LCFI249-LFB2272
	.long L$set$573
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$574,LCFI250-LCFI249
	.long L$set$574
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$575,LCFI253-LCFI250
	.long L$set$575
	.byte	0x83
	.byte	0x4
	.byte	0x8c
	.byte	0x3
	.align 3
LEFDE199:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt18_Rb_tree_node_base.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt18_Rb_tree_node_base.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_S_valueEPKSt18_Rb_tree_node_base.eh:
LSFDE201:
	.set L$set$576,LEFDE201-LASFDE201
	.long L$set$576
LASFDE201:
	.long	LASFDE201-EH_frame1
	.quad	LFB2300-.
	.set L$set$577,LFE2300-LFB2300
	.quad L$set$577
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$578,LCFI254-LFB2300
	.long L$set$578
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$579,LCFI255-LCFI254
	.long L$set$579
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE201:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt18_Rb_tree_node_base.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt18_Rb_tree_node_base.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE6_S_keyEPKSt18_Rb_tree_node_base.eh:
LSFDE203:
	.set L$set$580,LEFDE203-LASFDE203
	.long L$set$580
LASFDE203:
	.long	LASFDE203-EH_frame1
	.quad	LFB2279-.
	.set L$set$581,LFE2279-LFB2279
	.quad L$set$581
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$582,LCFI256-LFB2279
	.long L$set$582
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$583,LCFI257-LCFI256
	.long L$set$583
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$584,LCFI259-LCFI257
	.long L$set$584
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE203:
.globl __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE9constructEPS7_RKS7_.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE9constructEPS7_RKS7_.eh
__ZN9__gnu_cxx13new_allocatorISt4pairIK6EValuePK4CityEE9constructEPS7_RKS7_.eh:
LSFDE205:
	.set L$set$585,LEFDE205-LASFDE205
	.long L$set$585
LASFDE205:
	.long	LASFDE205-EH_frame1
	.quad	LFB2302-.
	.set L$set$586,LFE2302-LFB2302
	.quad L$set$586
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$587,LCFI260-LFB2302
	.long L$set$587
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$588,LCFI261-LCFI260
	.long L$set$588
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE205:
.globl __ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8max_sizeEv.eh
	.weak_definition __ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8max_sizeEv.eh
__ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8max_sizeEv.eh:
LSFDE207:
	.set L$set$589,LEFDE207-LASFDE207
	.long L$set$589
LASFDE207:
	.long	LASFDE207-EH_frame1
	.quad	LFB2309-.
	.set L$set$590,LFE2309-LFB2309
	.quad L$set$590
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$591,LCFI263-LFB2309
	.long L$set$591
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$592,LCFI264-LCFI263
	.long L$set$592
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE207:
___tcf_1.eh:
LSFDE209:
	.set L$set$593,LEFDE209-LASFDE209
	.long L$set$593
LASFDE209:
	.long	LASFDE209-EH_frame1
	.quad	LFB2313-.
	.set L$set$594,LFE2313-LFB2313
	.quad L$set$594
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$595,LCFI265-LFB2313
	.long L$set$595
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$596,LCFI266-LCFI265
	.long L$set$596
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE209:
__Z41__static_initialization_and_destruction_0ii.eh:
LSFDE211:
	.set L$set$597,LEFDE211-LASFDE211
	.long L$set$597
LASFDE211:
	.long	LASFDE211-EH_frame1
	.quad	LFB2311-.
	.set L$set$598,LFE2311-LFB2311
	.quad L$set$598
	.byte	0x8
	.quad	LLSDA2311-.
	.byte	0x4
	.set L$set$599,LCFI268-LFB2311
	.long L$set$599
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$600,LCFI269-LCFI268
	.long L$set$600
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$601,LCFI271-LCFI269
	.long L$set$601
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE211:
__GLOBAL__I__ZN7DavidAIC2E11PLAYERCOLOR.eh:
LSFDE213:
	.set L$set$602,LEFDE213-LASFDE213
	.long L$set$602
LASFDE213:
	.long	LASFDE213-EH_frame1
	.quad	LFB2314-.
	.set L$set$603,LFE2314-LFB2314
	.quad L$set$603
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$604,LCFI272-LFB2314
	.long L$set$604
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$605,LCFI273-LCFI272
	.long L$set$605
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE213:
___tcf_0.eh:
LSFDE215:
	.set L$set$606,LEFDE215-LASFDE215
	.long L$set$606
LASFDE215:
	.long	LASFDE215-EH_frame1
	.quad	LFB2312-.
	.set L$set$607,LFE2312-LFB2312
	.quad L$set$607
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$608,LCFI274-LFB2312
	.long L$set$608
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$609,LCFI275-LCFI274
	.long L$set$609
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE215:
.globl __ZNSt15__copy_backwardILb1ESt26random_access_iterator_tagE8__copy_bIPK10CoordinateEEPT_PKS6_S9_S7_.eh
	.weak_definition __ZNSt15__copy_backwardILb1ESt26random_access_iterator_tagE8__copy_bIPK10CoordinateEEPT_PKS6_S9_S7_.eh
__ZNSt15__copy_backwardILb1ESt26random_access_iterator_tagE8__copy_bIPK10CoordinateEEPT_PKS6_S9_S7_.eh:
LSFDE217:
	.set L$set$610,LEFDE217-LASFDE217
	.long L$set$610
LASFDE217:
	.long	LASFDE217-EH_frame1
	.quad	LFB2307-.
	.set L$set$611,LFE2307-LFB2307
	.quad L$set$611
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$612,LCFI277-LFB2307
	.long L$set$612
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$613,LCFI278-LCFI277
	.long L$set$613
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE217:
.globl __ZSt19__copy_backward_auxIPPK10CoordinateS3_ET0_T_S5_S4_.eh
	.weak_definition __ZSt19__copy_backward_auxIPPK10CoordinateS3_ET0_T_S5_S4_.eh
__ZSt19__copy_backward_auxIPPK10CoordinateS3_ET0_T_S5_S4_.eh:
LSFDE219:
	.set L$set$614,LEFDE219-LASFDE219
	.long L$set$614
LASFDE219:
	.long	LASFDE219-EH_frame1
	.quad	LFB2303-.
	.set L$set$615,LFE2303-LFB2303
	.quad L$set$615
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$616,LCFI280-LFB2303
	.long L$set$616
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$617,LCFI281-LCFI280
	.long L$set$617
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE219:
.globl __ZNSt22__copy_backward_normalILb0ELb0EE10__copy_b_nIPPK10CoordinateS5_EET0_T_S7_S6_.eh
	.weak_definition __ZNSt22__copy_backward_normalILb0ELb0EE10__copy_b_nIPPK10CoordinateS5_EET0_T_S7_S6_.eh
__ZNSt22__copy_backward_normalILb0ELb0EE10__copy_b_nIPPK10CoordinateS5_EET0_T_S7_S6_.eh:
LSFDE221:
	.set L$set$618,LEFDE221-LASFDE221
	.long L$set$618
LASFDE221:
	.long	LASFDE221-EH_frame1
	.quad	LFB2282-.
	.set L$set$619,LFE2282-LFB2282
	.quad L$set$619
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$620,LCFI283-LFB2282
	.long L$set$620
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$621,LCFI284-LCFI283
	.long L$set$621
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE221:
.globl __ZSt13copy_backwardIPPK10CoordinateS3_ET0_T_S5_S4_.eh
	.weak_definition __ZSt13copy_backwardIPPK10CoordinateS3_ET0_T_S5_S4_.eh
__ZSt13copy_backwardIPPK10CoordinateS3_ET0_T_S5_S4_.eh:
LSFDE223:
	.set L$set$622,LEFDE223-LASFDE223
	.long L$set$622
LASFDE223:
	.long	LASFDE223-EH_frame1
	.quad	LFB2254-.
	.set L$set$623,LFE2254-LFB2254
	.quad L$set$623
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$624,LCFI286-LFB2254
	.long L$set$624
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$625,LCFI287-LCFI286
	.long L$set$625
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE223:
.globl __ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_.eh
	.weak_definition __ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_.eh
__ZNSt6__copyILb1ESt26random_access_iterator_tagE4copyIPK10CoordinateEEPT_PKS6_S9_S7_.eh:
LSFDE225:
	.set L$set$626,LEFDE225-LASFDE225
	.long L$set$626
LASFDE225:
	.long	LASFDE225-EH_frame1
	.quad	LFB2305-.
	.set L$set$627,LFE2305-LFB2305
	.quad L$set$627
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$628,LCFI289-LFB2305
	.long L$set$628
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$629,LCFI290-LCFI289
	.long L$set$629
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE225:
.globl __ZSt10__copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_.eh
	.weak_definition __ZSt10__copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_.eh
__ZSt10__copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_.eh:
LSFDE227:
	.set L$set$630,LEFDE227-LASFDE227
	.long L$set$630
LASFDE227:
	.long	LASFDE227-EH_frame1
	.quad	LFB2290-.
	.set L$set$631,LFE2290-LFB2290
	.quad L$set$631
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$632,LCFI292-LFB2290
	.long L$set$632
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$633,LCFI293-LCFI292
	.long L$set$633
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE227:
.globl __ZNSt13__copy_normalILb0ELb0EE8__copy_nIPPK10CoordinateS5_EET0_T_S7_S6_.eh
	.weak_definition __ZNSt13__copy_normalILb0ELb0EE8__copy_nIPPK10CoordinateS5_EET0_T_S7_S6_.eh
__ZNSt13__copy_normalILb0ELb0EE8__copy_nIPPK10CoordinateS5_EET0_T_S7_S6_.eh:
LSFDE229:
	.set L$set$634,LEFDE229-LASFDE229
	.long L$set$634
LASFDE229:
	.long	LASFDE229-EH_frame1
	.quad	LFB2264-.
	.set L$set$635,LFE2264-LFB2264
	.quad L$set$635
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$636,LCFI295-LFB2264
	.long L$set$636
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$637,LCFI296-LCFI295
	.long L$set$637
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE229:
.globl __ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_.eh
	.weak_definition __ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_.eh
__ZSt4copyIPPK10CoordinateS3_ET0_T_S5_S4_.eh:
LSFDE231:
	.set L$set$638,LEFDE231-LASFDE231
	.long L$set$638
LASFDE231:
	.long	LASFDE231-EH_frame1
	.quad	LFB2217-.
	.set L$set$639,LFE2217-LFB2217
	.quad L$set$639
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$640,LCFI298-LFB2217
	.long L$set$640
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$641,LCFI299-LCFI298
	.long L$set$641
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE231:
.globl __ZSt24__uninitialized_copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_St11__true_type.eh
	.weak_definition __ZSt24__uninitialized_copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_St11__true_type.eh
__ZSt24__uninitialized_copy_auxIPPK10CoordinateS3_ET0_T_S5_S4_St11__true_type.eh:
LSFDE233:
	.set L$set$642,LEFDE233-LASFDE233
	.long L$set$642
LASFDE233:
	.long	LASFDE233-EH_frame1
	.quad	LFB2291-.
	.set L$set$643,LFE2291-LFB2291
	.quad L$set$643
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$644,LCFI301-LFB2291
	.long L$set$644
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$645,LCFI302-LCFI301
	.long L$set$645
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE233:
.globl __ZSt18uninitialized_copyIPPK10CoordinateS3_ET0_T_S5_S4_.eh
	.weak_definition __ZSt18uninitialized_copyIPPK10CoordinateS3_ET0_T_S5_S4_.eh
__ZSt18uninitialized_copyIPPK10CoordinateS3_ET0_T_S5_S4_.eh:
LSFDE235:
	.set L$set$646,LEFDE235-LASFDE235
	.long L$set$646
LASFDE235:
	.long	LASFDE235-EH_frame1
	.quad	LFB2265-.
	.set L$set$647,LFE2265-LFB2265
	.quad L$set$647
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$648,LCFI304-LFB2265
	.long L$set$648
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$649,LCFI305-LCFI304
	.long L$set$649
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE235:
.globl __ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E.eh
	.weak_definition __ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E.eh
__ZSt22__uninitialized_copy_aIPPK10CoordinateS3_S2_ET0_T_S5_S4_SaIT1_E.eh:
LSFDE237:
	.set L$set$650,LEFDE237-LASFDE237
	.long L$set$650
LASFDE237:
	.long	LASFDE237-EH_frame1
	.quad	LFB2218-.
	.set L$set$651,LFE2218-LFB2218
	.quad L$set$651
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$652,LCFI307-LFB2218
	.long L$set$652
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$653,LCFI308-LCFI307
	.long L$set$653
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE237:
.globl __ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_.eh
	.weak_definition __ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_.eh
__ZSt10__copy_auxIPKPK10CoordinatePS2_ET0_T_S7_S6_.eh:
LSFDE239:
	.set L$set$654,LEFDE239-LASFDE239
	.long L$set$654
LASFDE239:
	.long	LASFDE239-EH_frame1
	.quad	LFB2288-.
	.set L$set$655,LFE2288-LFB2288
	.quad L$set$655
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$656,LCFI310-LFB2288
	.long L$set$656
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$657,LCFI311-LCFI310
	.long L$set$657
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE239:
.globl __ZNSt13__copy_normalILb1ELb0EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_.eh
	.weak_definition __ZNSt13__copy_normalILb1ELb0EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_.eh
__ZNSt13__copy_normalILb1ELb0EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEEPS6_EET0_T_SF_SE_.eh:
LSFDE241:
	.set L$set$658,LEFDE241-LASFDE241
	.long L$set$658
LASFDE241:
	.long	LASFDE241-EH_frame1
	.quad	LFB2310-.
	.set L$set$659,LFE2310-LFB2310
	.quad L$set$659
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$660,LCFI313-LFB2310
	.long L$set$660
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$661,LCFI314-LCFI313
	.long L$set$661
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$662,LCFI316-LCFI314
	.long L$set$662
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE241:
.globl __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_.eh
	.weak_definition __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_.eh
__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_.eh:
LSFDE243:
	.set L$set$663,LEFDE243-LASFDE243
	.long L$set$663
LASFDE243:
	.long	LASFDE243-EH_frame1
	.quad	LFB2308-.
	.set L$set$664,LFE2308-LFB2308
	.quad L$set$664
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$665,LCFI317-LFB2308
	.long L$set$665
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$666,LCFI318-LCFI317
	.long L$set$666
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE243:
.globl __ZSt24__uninitialized_copy_auxIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_St11__true_type.eh
	.weak_definition __ZSt24__uninitialized_copy_auxIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_St11__true_type.eh
__ZSt24__uninitialized_copy_auxIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_St11__true_type.eh:
LSFDE245:
	.set L$set$667,LEFDE245-LASFDE245
	.long L$set$667
LASFDE245:
	.long	LASFDE245-EH_frame1
	.quad	LFB2304-.
	.set L$set$668,LFE2304-LFB2304
	.quad L$set$668
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$669,LCFI320-LFB2304
	.long L$set$669
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$670,LCFI321-LCFI320
	.long L$set$670
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE245:
.globl __ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_.eh
	.weak_definition __ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_.eh
__ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_ET0_T_SD_SC_.eh:
LSFDE247:
	.set L$set$671,LEFDE247-LASFDE247
	.long L$set$671
LASFDE247:
	.long	LASFDE247-EH_frame1
	.quad	LFB2286-.
	.set L$set$672,LFE2286-LFB2286
	.quad L$set$672
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$673,LCFI323-LFB2286
	.long L$set$673
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$674,LCFI324-LCFI323
	.long L$set$674
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE247:
.globl __ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_S4_ET0_T_SD_SC_SaIT1_E.eh
	.weak_definition __ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_S4_ET0_T_SD_SC_SaIT1_E.eh
__ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEEPS4_S4_ET0_T_SD_SC_SaIT1_E.eh:
LSFDE249:
	.set L$set$675,LEFDE249-LASFDE249
	.long L$set$675
LASFDE249:
	.long	LASFDE249-EH_frame1
	.quad	LFB2260-.
	.set L$set$676,LFE2260-LFB2260
	.quad L$set$676
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$677,LCFI326-LFB2260
	.long L$set$677
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$678,LCFI327-LCFI326
	.long L$set$678
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE249:
.globl __ZNSt13__copy_normalILb1ELb1EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEENS3_IPS6_SB_EEEET0_T_SG_SF_.eh
	.weak_definition __ZNSt13__copy_normalILb1ELb1EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEENS3_IPS6_SB_EEEET0_T_SG_SF_.eh
__ZNSt13__copy_normalILb1ELb1EE8__copy_nIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS6_SaIS6_EEEENS3_IPS6_SB_EEEET0_T_SG_SF_.eh:
LSFDE251:
	.set L$set$679,LEFDE251-LASFDE251
	.long L$set$679
LASFDE251:
	.long	LASFDE251-EH_frame1
	.quad	LFB2262-.
	.set L$set$680,LFE2262-LFB2262
	.quad L$set$680
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$681,LCFI329-LFB2262
	.long L$set$681
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$682,LCFI330-LCFI329
	.long L$set$682
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$683,LCFI333-LCFI330
	.long L$set$683
	.byte	0x83
	.byte	0x4
	.byte	0x8c
	.byte	0x3
	.align 3
LEFDE251:
.globl __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEENS1_IPS4_S9_EEET0_T_SE_SD_.eh
	.weak_definition __ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEENS1_IPS4_S9_EEET0_T_SE_SD_.eh
__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKPK10CoordinateSt6vectorIS4_SaIS4_EEEENS1_IPS4_S9_EEET0_T_SE_SD_.eh:
LSFDE253:
	.set L$set$684,LEFDE253-LASFDE253
	.long L$set$684
LASFDE253:
	.long	LASFDE253-EH_frame1
	.quad	LFB2215-.
	.set L$set$685,LFE2215-LFB2215
	.quad L$set$685
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$686,LCFI334-LFB2215
	.long L$set$686
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$687,LCFI335-LCFI334
	.long L$set$687
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE253:
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE8allocateEmPKv.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE8allocateEmPKv.eh
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE8allocateEmPKv.eh:
LSFDE255:
	.set L$set$688,LEFDE255-LASFDE255
	.long L$set$688
LASFDE255:
	.long	LASFDE255-EH_frame1
	.quad	LFB2285-.
	.set L$set$689,LFE2285-LFB2285
	.quad L$set$689
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$690,LCFI337-LFB2285
	.long L$set$690
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$691,LCFI338-LCFI337
	.long L$set$691
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE255:
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm.eh
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm.eh
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE11_M_allocateEm.eh:
LSFDE257:
	.set L$set$692,LEFDE257-LASFDE257
	.long L$set$692
LASFDE257:
	.long	LASFDE257-EH_frame1
	.quad	LFB2256-.
	.set L$set$693,LFE2256-LFB2256
	.quad L$set$693
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$694,LCFI340-LFB2256
	.long L$set$694
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$695,LCFI341-LCFI340
	.long L$set$695
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE257:
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8allocateEmPKv.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8allocateEmPKv.eh
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE8allocateEmPKv.eh:
LSFDE259:
	.set L$set$696,LEFDE259-LASFDE259
	.long L$set$696
LASFDE259:
	.long	LASFDE259-EH_frame1
	.quad	LFB2306-.
	.set L$set$697,LFE2306-LFB2306
	.quad L$set$697
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$698,LCFI343-LFB2306
	.long L$set$698
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$699,LCFI344-LCFI343
	.long L$set$699
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE259:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_get_nodeEv.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_get_nodeEv.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_get_nodeEv.eh:
LSFDE261:
	.set L$set$700,LEFDE261-LASFDE261
	.long L$set$700
LASFDE261:
	.long	LASFDE261-EH_frame1
	.quad	LFB2301-.
	.set L$set$701,LFE2301-LFB2301
	.quad L$set$701
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$702,LCFI346-LFB2301
	.long L$set$702
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$703,LCFI347-LCFI346
	.long L$set$703
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE261:
.globl __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE10deallocateEPS3_m.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorIPK10CoordinateE10deallocateEPS3_m.eh
__ZN9__gnu_cxx13new_allocatorIPK10CoordinateE10deallocateEPS3_m.eh:
LSFDE263:
	.set L$set$704,LEFDE263-LASFDE263
	.long L$set$704
LASFDE263:
	.long	LASFDE263-EH_frame1
	.quad	LFB2261-.
	.set L$set$705,LFE2261-LFB2261
	.quad L$set$705
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$706,LCFI349-LFB2261
	.long L$set$706
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$707,LCFI350-LCFI349
	.long L$set$707
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE263:
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m.eh
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m.eh
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EE13_M_deallocateEPS2_m.eh:
LSFDE265:
	.set L$set$708,LEFDE265-LASFDE265
	.long L$set$708
LASFDE265:
	.long	LASFDE265-EH_frame1
	.quad	LFB2214-.
	.set L$set$709,LFE2214-LFB2214
	.quad L$set$709
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$710,LCFI352-LFB2214
	.long L$set$710
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$711,LCFI353-LCFI352
	.long L$set$711
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE265:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_.eh:
LSFDE267:
	.set L$set$712,LEFDE267-LASFDE267
	.long L$set$712
LASFDE267:
	.long	LASFDE267-EH_frame1
	.quad	LFB2205-.
	.set L$set$713,LFE2205-LFB2205
	.quad L$set$713
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$714,LCFI355-LFB2205
	.long L$set$714
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$715,LCFI356-LCFI355
	.long L$set$715
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$716,LCFI359-LCFI356
	.long L$set$716
	.byte	0x83
	.byte	0x4
	.byte	0x8c
	.byte	0x3
	.align 3
LEFDE267:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EE9push_backERKS2_.eh:
LSFDE269:
	.set L$set$717,LEFDE269-LASFDE269
	.long L$set$717
LASFDE269:
	.long	LASFDE269-EH_frame1
	.quad	LFB2131-.
	.set L$set$718,LFE2131-LFB2131
	.quad L$set$718
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$719,LCFI360-LFB2131
	.long L$set$719
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$720,LCFI361-LCFI360
	.long L$set$720
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE269:
.globl __ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb.eh
__ZNK7DavidAI21calculateMoveDistanceEPK10CoordinateRPP6EValuePSt6vectorIS2_SaIS2_EEb.eh:
LSFDE271:
	.set L$set$721,LEFDE271-LASFDE271
	.long L$set$721
LASFDE271:
	.long	LASFDE271-EH_frame1
	.quad	LFB2067-.
	.set L$set$722,LFE2067-LFB2067
	.quad L$set$722
	.byte	0x8
	.quad	LLSDA2067-.
	.byte	0x4
	.set L$set$723,LCFI363-LFB2067
	.long L$set$723
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$724,LCFI364-LCFI363
	.long L$set$724
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$725,LCFI366-LCFI364
	.long L$set$725
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE271:
.globl __ZNK7DavidAI21getMoveFromEvaluationEPK10CoordinateRPP6EValueb.eh
__ZNK7DavidAI21getMoveFromEvaluationEPK10CoordinateRPP6EValueb.eh:
LSFDE273:
	.set L$set$726,LEFDE273-LASFDE273
	.long L$set$726
LASFDE273:
	.long	LASFDE273-EH_frame1
	.quad	LFB2068-.
	.set L$set$727,LFE2068-LFB2068
	.quad L$set$727
	.byte	0x8
	.quad	LLSDA2068-.
	.byte	0x4
	.set L$set$728,LCFI367-LFB2068
	.long L$set$728
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$729,LCFI368-LCFI367
	.long L$set$729
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$730,LCFI370-LCFI368
	.long L$set$730
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE273:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS2_S4_EEEEPS2_mT_SC_.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS2_S4_EEEEPS2_mT_SC_.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS2_S4_EEEEPS2_mT_SC_.eh:
LSFDE275:
	.set L$set$731,LEFDE275-LASFDE275
	.long L$set$731
LASFDE275:
	.long	LASFDE275-EH_frame1
	.quad	LFB2213-.
	.set L$set$732,LFE2213-LFB2213
	.quad L$set$732
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$733,LCFI371-LFB2213
	.long L$set$733
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$734,LCFI372-LCFI371
	.long L$set$734
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE275:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EEaSERKS4_.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EEaSERKS4_.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EEaSERKS4_.eh:
LSFDE277:
	.set L$set$735,LEFDE277-LASFDE277
	.long L$set$735
LASFDE277:
	.long	LASFDE277-EH_frame1
	.quad	LFB2141-.
	.set L$set$736,LFE2141-LFB2141
	.quad L$set$736
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$737,LCFI374-LFB2141
	.long L$set$737
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$738,LCFI375-LCFI374
	.long L$set$738
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$739,LCFI379-LCFI375
	.long L$set$739
	.byte	0x83
	.byte	0x5
	.byte	0x8c
	.byte	0x4
	.byte	0x8d
	.byte	0x3
	.align 3
LEFDE277:
.globl __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EED2Ev.eh
	.weak_definition __ZNSt12_Vector_baseIPK10CoordinateSaIS2_EED2Ev.eh
__ZNSt12_Vector_baseIPK10CoordinateSaIS2_EED2Ev.eh:
LSFDE279:
	.set L$set$740,LEFDE279-LASFDE279
	.long L$set$740
LASFDE279:
	.long	LASFDE279-EH_frame1
	.quad	LFB2200-.
	.set L$set$741,LFE2200-LFB2200
	.quad L$set$741
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$742,LCFI380-LFB2200
	.long L$set$742
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$743,LCFI381-LCFI380
	.long L$set$743
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE279:
.globl __ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev.eh
	.weak_definition __ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev.eh
__ZNSt6vectorIPK10CoordinateSaIS2_EED1Ev.eh:
LSFDE281:
	.set L$set$744,LEFDE281-LASFDE281
	.long L$set$744
LASFDE281:
	.long	LASFDE281-EH_frame1
	.quad	LFB2130-.
	.set L$set$745,LFE2130-LFB2130
	.quad L$set$745
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$746,LCFI383-LFB2130
	.long L$set$746
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$747,LCFI384-LCFI383
	.long L$set$747
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE281:
.globl __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE10deallocateEPS9_m.eh
	.weak_definition __ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE10deallocateEPS9_m.eh
__ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIK6EValuePK4CityEEE10deallocateEPS9_m.eh:
LSFDE283:
	.set L$set$748,LEFDE283-LASFDE283
	.long L$set$748
LASFDE283:
	.long	LASFDE283-EH_frame1
	.quad	LFB2299-.
	.set L$set$749,LFE2299-LFB2299
	.quad L$set$749
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$750,LCFI386-LFB2299
	.long L$set$750
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$751,LCFI387-LCFI386
	.long L$set$751
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE283:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS6_E.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS6_E.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS6_E.eh:
LSFDE285:
	.set L$set$752,LEFDE285-LASFDE285
	.long L$set$752
LASFDE285:
	.long	LASFDE285-EH_frame1
	.quad	LFB2277-.
	.set L$set$753,LFE2277-LFB2277
	.quad L$set$753
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$754,LCFI389-LFB2277
	.long L$set$754
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$755,LCFI390-LCFI389
	.long L$set$755
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE285:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE14_M_create_nodeERKS6_.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE14_M_create_nodeERKS6_.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE14_M_create_nodeERKS6_.eh:
LSFDE287:
	.set L$set$756,LEFDE287-LASFDE287
	.long L$set$756
LASFDE287:
	.long	LASFDE287-EH_frame1
	.quad	LFB2280-.
	.set L$set$757,LFE2280-LFB2280
	.quad L$set$757
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$758,LCFI392-LFB2280
	.long L$set$758
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$759,LCFI393-LCFI392
	.long L$set$759
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$760,LCFI395-LCFI393
	.long L$set$760
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE287:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS6_E.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS6_E.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS6_E.eh:
LSFDE289:
	.set L$set$761,LEFDE289-LASFDE289
	.long L$set$761
LASFDE289:
	.long	LASFDE289-EH_frame1
	.quad	LFB2241-.
	.set L$set$762,LFE2241-LFB2241
	.quad L$set$762
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$763,LCFI396-LFB2241
	.long L$set$763
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$764,LCFI397-LCFI396
	.long L$set$764
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$765,LCFI399-LCFI397
	.long L$set$765
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE289:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE8_M_eraseEPSt13_Rb_tree_nodeIS6_E.eh:
LSFDE291:
	.set L$set$766,LEFDE291-LASFDE291
	.long L$set$766
LASFDE291:
	.long	LASFDE291-EH_frame1
	.quad	LFB2173-.
	.set L$set$767,LFE2173-LFB2173
	.quad L$set$767
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$768,LCFI400-LFB2173
	.long L$set$768
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$769,LCFI401-LCFI400
	.long L$set$769
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE291:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EED1Ev.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EED1Ev.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EED1Ev.eh:
LSFDE293:
	.set L$set$770,LEFDE293-LASFDE293
	.long L$set$770
LASFDE293:
	.long	LASFDE293-EH_frame1
	.quad	LFB2104-.
	.set L$set$771,LFE2104-LFB2104
	.quad L$set$771
	.byte	0x8
	.quad	LLSDA2104-.
	.byte	0x4
	.set L$set$772,LCFI403-LFB2104
	.long L$set$772
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$773,LCFI404-LCFI403
	.long L$set$773
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$774,LCFI406-LCFI404
	.long L$set$774
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE293:
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev.eh
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev.eh
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev.eh:
LSFDE295:
	.set L$set$775,LEFDE295-LASFDE295
	.long L$set$775
LASFDE295:
	.long	LASFDE295-EH_frame1
	.quad	LFB2061-.
	.set L$set$776,LFE2061-LFB2061
	.quad L$set$776
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$777,LCFI407-LFB2061
	.long L$set$777
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$778,LCFI408-LCFI407
	.long L$set$778
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE295:
.globl __ZNK7DavidAI25evaluateBoardMoveDistanceEPK10Coordinateb.eh
__ZNK7DavidAI25evaluateBoardMoveDistanceEPK10Coordinateb.eh:
LSFDE297:
	.set L$set$779,LEFDE297-LASFDE297
	.long L$set$779
LASFDE297:
	.long	LASFDE297-EH_frame1
	.quad	LFB2065-.
	.set L$set$780,LFE2065-LFB2065
	.quad L$set$780
	.byte	0x8
	.quad	LLSDA2065-.
	.byte	0x4
	.set L$set$781,LCFI410-LFB2065
	.long L$set$781
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$782,LCFI411-LCFI410
	.long L$set$782
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$783,LCFI413-LCFI411
	.long L$set$783
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE297:
.globl __ZN7DavidAI7setPawnER5State.eh
__ZN7DavidAI7setPawnER5State.eh:
LSFDE299:
	.set L$set$784,LEFDE299-LASFDE299
	.long L$set$784
LASFDE299:
	.long	LASFDE299-EH_frame1
	.quad	LFB2062-.
	.set L$set$785,LFE2062-LFB2062
	.quad L$set$785
	.byte	0x8
	.quad	LLSDA2062-.
	.byte	0x4
	.set L$set$786,LCFI414-LFB2062
	.long L$set$786
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$787,LCFI415-LCFI414
	.long L$set$787
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$788,LCFI417-LCFI415
	.long L$set$788
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE299:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE9_M_insertEPSt18_Rb_tree_node_baseSE_RKS6_.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE9_M_insertEPSt18_Rb_tree_node_baseSE_RKS6_.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE9_M_insertEPSt18_Rb_tree_node_baseSE_RKS6_.eh:
LSFDE301:
	.set L$set$789,LEFDE301-LASFDE301
	.long L$set$789
LASFDE301:
	.long	LASFDE301-EH_frame1
	.quad	LFB2246-.
	.set L$set$790,LFE2246-LFB2246
	.quad L$set$790
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$791,LCFI418-LFB2246
	.long L$set$791
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$792,LCFI419-LCFI418
	.long L$set$792
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$793,LCFI421-LCFI419
	.long L$set$793
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE301:
.globl __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_insert_equalERKS6_.eh
	.weak_definition __ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_insert_equalERKS6_.eh
__ZNSt8_Rb_treeI6EValueSt4pairIKS0_PK4CityESt10_Select1stIS6_ESt4lessIS0_ESaIS6_EE15_M_insert_equalERKS6_.eh:
LSFDE303:
	.set L$set$794,LEFDE303-LASFDE303
	.long L$set$794
LASFDE303:
	.long	LASFDE303-EH_frame1
	.quad	LFB2175-.
	.set L$set$795,LFE2175-LFB2175
	.quad L$set$795
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$796,LCFI422-LFB2175
	.long L$set$796
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$797,LCFI423-LCFI422
	.long L$set$797
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$798,LCFI425-LCFI423
	.long L$set$798
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE303:
.globl __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_.eh
	.weak_definition __ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_.eh
__ZNSt8multimapI6EValuePK4CitySt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_.eh:
LSFDE305:
	.set L$set$799,LEFDE305-LASFDE305
	.long L$set$799
LASFDE305:
	.long	LASFDE305-EH_frame1
	.quad	LFB2111-.
	.set L$set$800,LFE2111-LFB2111
	.quad L$set$800
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$801,LCFI426-LFB2111
	.long L$set$801
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$802,LCFI427-LCFI426
	.long L$set$802
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE305:
.globl __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv.eh
	.weak_definition __ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv.eh
__ZNSt17_Rb_tree_iteratorISt4pairIK6EValuePK4CityEEppEv.eh:
LSFDE307:
	.set L$set$803,LEFDE307-LASFDE307
	.long L$set$803
LASFDE307:
	.long	LASFDE307-EH_frame1
	.quad	LFB2115-.
	.set L$set$804,LFE2115-LFB2115
	.quad L$set$804
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$805,LCFI429-LFB2115
	.long L$set$805
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$806,LCFI430-LCFI429
	.long L$set$806
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE307:
.globl __ZN7DavidAI6doMoveER5StateSt6vectorIP4MoveSaIS4_EE.eh
__ZN7DavidAI6doMoveER5StateSt6vectorIP4MoveSaIS4_EE.eh:
LSFDE309:
	.set L$set$807,LEFDE309-LASFDE309
	.long L$set$807
LASFDE309:
	.long	LASFDE309-EH_frame1
	.quad	LFB2058-.
	.set L$set$808,LFE2058-LFB2058
	.quad L$set$808
	.byte	0x8
	.quad	LLSDA2058-.
	.byte	0x4
	.set L$set$809,LCFI432-LFB2058
	.long L$set$809
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$810,LCFI433-LCFI432
	.long L$set$810
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$811,LCFI435-LCFI433
	.long L$set$811
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE309:
.globl __ZN7DavidAID0Ev.eh
__ZN7DavidAID0Ev.eh:
LSFDE311:
	.set L$set$812,LEFDE311-LASFDE311
	.long L$set$812
LASFDE311:
	.long	LASFDE311-EH_frame1
	.quad	LFB2057-.
	.set L$set$813,LFE2057-LFB2057
	.quad L$set$813
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$814,LCFI436-LFB2057
	.long L$set$814
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$815,LCFI437-LCFI436
	.long L$set$815
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE311:
.globl __ZN7DavidAID1Ev.eh
__ZN7DavidAID1Ev.eh:
LSFDE313:
	.set L$set$816,LEFDE313-LASFDE313
	.long L$set$816
LASFDE313:
	.long	LASFDE313-EH_frame1
	.quad	LFB2056-.
	.set L$set$817,LFE2056-LFB2056
	.quad L$set$817
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$818,LCFI439-LFB2056
	.long L$set$818
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$819,LCFI440-LCFI439
	.long L$set$819
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE313:
.globl __ZN7DavidAID2Ev.eh
__ZN7DavidAID2Ev.eh:
LSFDE315:
	.set L$set$820,LEFDE315-LASFDE315
	.long L$set$820
LASFDE315:
	.long	LASFDE315-EH_frame1
	.quad	LFB2055-.
	.set L$set$821,LFE2055-LFB2055
	.quad L$set$821
	.byte	0x8
	.quad	0x0
	.byte	0x4
	.set L$set$822,LCFI442-LFB2055
	.long L$set$822
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$823,LCFI443-LCFI442
	.long L$set$823
	.byte	0xd
	.byte	0x6
	.align 3
LEFDE315:
.globl __ZN7DavidAIC1E11PLAYERCOLOR.eh
__ZN7DavidAIC1E11PLAYERCOLOR.eh:
LSFDE317:
	.set L$set$824,LEFDE317-LASFDE317
	.long L$set$824
LASFDE317:
	.long	LASFDE317-EH_frame1
	.quad	LFB2053-.
	.set L$set$825,LFE2053-LFB2053
	.quad L$set$825
	.byte	0x8
	.quad	LLSDA2053-.
	.byte	0x4
	.set L$set$826,LCFI445-LFB2053
	.long L$set$826
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$827,LCFI446-LCFI445
	.long L$set$827
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$828,LCFI448-LCFI446
	.long L$set$828
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE317:
.globl __ZN7DavidAIC2E11PLAYERCOLOR.eh
__ZN7DavidAIC2E11PLAYERCOLOR.eh:
LSFDE319:
	.set L$set$829,LEFDE319-LASFDE319
	.long L$set$829
LASFDE319:
	.long	LASFDE319-EH_frame1
	.quad	LFB2052-.
	.set L$set$830,LFE2052-LFB2052
	.quad L$set$830
	.byte	0x8
	.quad	LLSDA2052-.
	.byte	0x4
	.set L$set$831,LCFI449-LFB2052
	.long L$set$831
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$832,LCFI450-LCFI449
	.long L$set$832
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$833,LCFI452-LCFI450
	.long L$set$833
	.byte	0x83
	.byte	0x3
	.align 3
LEFDE319:
	.constructor
	.destructor
	.align 1
	.subsections_via_symbols
