[BITS 32]
[GLOBAL outb]

outb:
    mov edx, [esp + 4]
    mov al, [esp + 8]
    out dx, al
    ret