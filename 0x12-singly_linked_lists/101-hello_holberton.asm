sección .data

	    mensaje db "Hello, Holberton" , 10

	sección .text

	global  _start
_start:
	mov rax , 1 mov rdi , 1 mov rsi , message mov rdx , 14 syscall
