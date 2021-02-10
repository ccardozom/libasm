extern _ft_strlen
extern _ft_strcpy
extern _malloc

section .text
global _ft_strdup

_ft_strdup:
	xor		rax, rax
	push 	rdi	    	;almacena en la pila el string y rdi sigue conteniendo la string
	call 	_ft_strlen
	add		rax, 1		; sumamos 1 a rax para reservar memoria para '\0'
	mov		rdi, rax	; rdi es el argumento que lleva al llamar a malloc
	call	_malloc
	cmp		rax, 0
	je		return
	pop		rsi			;cogemos al elemento de la pila y lo metemos en rsi
	mov		rdi, rax	;rax contiene el puntero a la memoria
	call	_ft_strcpy	;copiamos rsi en rdi que es un puntero al espacio reservado en la memoria
	ret					;devuelve rax que contiene un puntero a la cadena copiada en la memoria
return:
	pop		rdi
	ret	
