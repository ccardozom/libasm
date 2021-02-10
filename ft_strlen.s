section .text

global _ft_strlen

_ft_strlen:
	xor rax,rax

loop:
	cmp byte[rdi + rax], 0
	je retorno
	inc rax
	jmp loop

retorno:
	ret
