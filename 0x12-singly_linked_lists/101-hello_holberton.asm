section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8                  ; Align stack
    mov rdi, format             ; Format string
    mov rsi, hello              ; String to print
    call printf                ; Call printf function

    mov rdi, format             ; Format string
    mov rsi, newline            ; String to print
    call printf                ; Call printf function

    add rsp, 8                  ; Restore stack
    mov eax, 0                  ; Return 0
    ret
