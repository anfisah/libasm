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
	jne diff
	inc rcx
	jmp while

diff:
	sub r8, r9
	mov rax, r8
	ret

