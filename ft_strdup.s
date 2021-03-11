global _ft_strdup
extern _ft_strlen
extern _malloc
extern _ft_strcpy

section .text
_ft_strdup:
	push rdi
    call _ft_strlen
    add rax, 1
	mov rdi, rax
    call _malloc
    pop rsi
    mov rdi,rax
    call _ft_strcpy
    ret