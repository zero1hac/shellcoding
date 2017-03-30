;exit.asm
[SECTION .text]
global _start
_start:
	xor eax, ebx
	mov al, 1
	xor ebx, eax
	int 0x80
