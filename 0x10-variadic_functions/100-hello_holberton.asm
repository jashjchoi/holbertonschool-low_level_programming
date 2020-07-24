section   .text
	global main
main:
	mov	rax, 1	; system call for write
        mov	rdi, 1	; file handle 1 is stdout
	mov	rsi, message	; address of string "Hello, Holberton\n" to output
	mov	rdx, 17	; number of bytes of str
	syscall	; invoke operating system to do the write
	mov	rax, 60	; system call for exit
	mov	rdi, rdi	; exit code 0
	syscall	; invoke operating system to exit
section	.data
msg db	"Hello, Holberton", 10	; note the newline at the end
