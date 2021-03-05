global _ft_strlen

section .text

_ft_strlen:
	xor rax, rax
while:
	movzx rdx, BYTE [rdi + rax]
	cmp	rdx, 0
	je	end
	inc rax
	jmp while

end:
	ret
