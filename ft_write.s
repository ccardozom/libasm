extern	___error
section .text
global	_ft_write

_ft_write:
	mov 	rax, 0x02000004
	syscall
	jnc		return
	push	rax
	call	 ___error
	pop		qword [rax]
	mov	rax, -1

return:
	ret
