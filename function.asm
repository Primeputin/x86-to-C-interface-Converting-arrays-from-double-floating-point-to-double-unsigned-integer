section .data
size dq 255.0
section .text
bits 64
default rel
global imgCvtGrayDoubleToInt

imgCvtGrayDoubleToInt:
    xor r12, r12 ; overall counter
    xor rbx, rbx ; outer counter
    outer_repeat:
        xor r11, r11 ; inner counter
        inner_repeat:
            movsd xmm0, [r8 + r12*8] ; getting the inputted pixel value
            mulsd xmm0, [size]
            CVTSD2SI rax, xmm0
            mov qword [r9 + r12*8], rax ; putting it in a different array for a different formal pixel value
            ; movsd qword [r9 + r12*8], xmm0
            inc r12
            inc r11
            cmp r11, rdx ; rdx is col
            jne inner_repeat    
        inc rbx
        cmp rbx, rcx ; rcx is row
        jne outer_repeat
    ret