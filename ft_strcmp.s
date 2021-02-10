section .text

global _ft_strcmp

_ft_strcmp:
	xor		rcx, rcx
while:
	movzx	rax, byte[rdi + rcx]
	movzx	rbx, byte[rsi + rcx]
	cmp		rax, 0
	je		return
	cmp		rbx, 0
	je		return
	cmp		rax, rbx
	jne		return
	inc		rcx
	jmp		while

return:
	sub		rax, rbx
	ret	
