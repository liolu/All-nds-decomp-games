#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0209615c(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020961c4
    cmn ip, r3, lsl #0x1
    bhs L_020961d8
L_02096170:
    orrs ip, r3, r1
    bmi L_020961a0
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_0209618c:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_020961a0:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_020961c4:
    bne L_0209618c
    cmp r0, #0x0
    bhi L_0209618c
    cmn ip, r3, lsl #0x1
    blo L_02096170
L_020961d8:
    bne L_0209618c
    cmp r2, #0x0
    bhi L_0209618c
    b L_02096170
}
// clang-format on
