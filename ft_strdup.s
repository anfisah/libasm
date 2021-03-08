global _ft_strdup
extern _ft_strlen
extern _malloc
extern _ft_strcpy

section .text
_ft_strdup:
    call _ft_strlen
    add rax, 1
    push rdi
    call _malloc
    pop r8
    mov rdi,rax
    mov rsi, r8
    call _ft_strcpy
    ret