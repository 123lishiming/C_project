bits 32
global _start

section .data
  str : db "Hello", 0xa, 0x0
  strsize: dd 0x6

section .text

_start:
  mov eax, 0
  mov ebx, 0
  jmp print
  mov ecx, 0
  mov edx, 0

print:
  mov eax, 0x4
  mov ebx,0x1
  mov ecx, str
  mov esi, strsize
  mov edx, [esi]
  int 0x80

exit:
  mov eax,0x1
  xor ebx,ebx
  int 0x80

