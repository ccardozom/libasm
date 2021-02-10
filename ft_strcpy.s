section .text
global _ft_strcpy

_ft_strcpy:
	xor rcx,rcx
_copy:
	movzx	r8, byte[rsi + rcx]
	mov		[rdi + rcx],r8
	cmp		r8, 0
	je		return
	inc		rcx
	jmp		_copy
return:
	mov		rax, rdi
	ret

