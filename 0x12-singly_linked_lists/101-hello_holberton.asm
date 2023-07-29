section.data
	hello_msg db "Hello, Holberton
	format db %s, 0
section.text
	global main
extern printf
main:
	; Save registers
	push rbp 		; Saving the machine registers
	mov rbp, rsp

	; Clall Printf function to printout the text
	lea rsi, [hello_msg]	; Calling printf function
	lead rdi, [format]
	call printf


	; Restore registers and return
	mov rsp, rbp
	pop rbp				; Restoration of registers and return
	ret				; This is an assembly language.
