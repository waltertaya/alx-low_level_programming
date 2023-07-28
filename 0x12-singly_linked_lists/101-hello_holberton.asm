section .data
    hello_msg db "Hello, Holberton", 0x0A, 0   ; 0x0A is the newline character
    format db "%s", 0

section .text
    global main
    extern printf

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Pass the arguments to printf
    mov rdi, format
    mov rsi, hello_msg

    ; Call printf
    call printf

    ; Clean up and exit
    pop rbp
    ret
