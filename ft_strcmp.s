global _ft_strcmp
section .text
_ft_strcmp:
	xor rax, rax
	xor r8, r8
	xor r9, r9
	xor rcx, rcx
while:
	movzx r8, BYTE [rdi + rcx]
	movzx r9, BYTE [rsi + rcx]
	cmp r8, r9
	jg sup
	jl inf
	cmp rdi, rsi
	je end
	inc rcx
	jmp while

sup:
	mov rax, 1
	ret

inf:
	mov rax, -1
	ret

end:
	mov rax, 0
	ret