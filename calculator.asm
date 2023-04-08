section .data
    argError db "ERROR: Invalid number of arguments", 0ah

section .text
    global _start
    
; 1. Get input and check if there are any spaces
; 2. Assign input to 'expression' (64 bytes?? or 128??)
; 3. Call calculate and store that value in 'result'
; 4. Print out result
; 5. Exit with code 0

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, argError
    mov rdx, 35
    syscall
    mov rax, 60
    mov rdi, 1
    syscall