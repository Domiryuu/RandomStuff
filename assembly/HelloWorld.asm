section .text
global _start

_start:
	mov	edx,len
	mov	ecx,msg
	mov	ebx,1
	mov	eax,4
	int	0x80
	mov	eax,1
	mov	ebx,0
	int	0x80

section .data

msg	db	'Hi Everyone~!', 0xa
len	equ $ - msg
