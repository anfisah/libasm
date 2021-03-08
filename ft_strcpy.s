section .text
	global _ft_strcpy

_ft_strcpy:
		xor	rax, rax			
while:	
		mov	dl, byte [rsi + rax]
		mov	byte [rdi + rax], dl
		cmp dl, 0
		je	end	
        inc rax
		jmp	while

end:
	mov rax, 0
	mov	rax, rdi
	ret