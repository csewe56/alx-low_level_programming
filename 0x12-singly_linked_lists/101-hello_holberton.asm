; File: 101-hello_holberton.asm

; Auth: Jennie chandler

; Desc: 64-bit assembly program that prints

; Hello, Holberton followed by a new line.

extern printf

section .text
   global main

main:
   push rbp

   mov rdi,1
   mov rsi,hello
   mov rax,0
   call printf

   pop rbp

   mov rax,60
   ret

section .data
   hello: db "Hello, Holberton", 0
   1: db "%s", 10, 0
