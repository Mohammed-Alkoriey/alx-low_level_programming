/*extern printf
section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

section .text
	global main
main:
	push rbp
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp
	mov rax,0
	ret
	*/
extern _printf
global _main

section .text
_main :
	push msg
	call _printf
	ret

section .data
msg : db "Hello, Holberton\n"
