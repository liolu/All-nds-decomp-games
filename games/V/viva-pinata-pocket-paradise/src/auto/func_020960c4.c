#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020960c4(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02096138
    cmn ip, r3, lsl #0x1
    bhs L_0209614c
L_020960d8:
    orrs ip, r3, r1
    bmi L_02096108
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_020960f4:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02096108:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_02096138:
    bne L_020960f4
    cmp r0, #0x0
    bhi L_020960f4
    cmn ip, r3, lsl #0x1
    blo L_020960d8
L_0209614c:
    bne L_020960f4
    cmp r2, #0x0
    bhi L_020960f4
    b L_020960d8
}
// clang-format on
