bits 64
global main
section .data ; /*la section donnée*/
    hello db 'Hello, World', 10 ; /*db correspond a data byte et 10 correspond a un retour à la ligne*/

section .text ; #section code
main:
	mov rax, 1 ; /*appel la fonction write*/
    mov rdi, 1 ; /*stdout*/
    mov rsi, hello ; /*le string*/
    mov rdx, 13
    syscall

    mov rax, 60 ; /*quitter la fonction*/
    xor rdi, rdi ; /*exit 0*/
    syscall