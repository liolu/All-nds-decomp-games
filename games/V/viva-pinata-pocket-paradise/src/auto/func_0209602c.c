#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0209602c(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020960a0
    cmn ip, r3, lsl #0x1
    bhs L_020960b4
L_02096040:
    orrs ip, r3, r1
    bmi L_02096070
    cmp r1, r3
    cmpeq r0, r2
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_0209605c:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02096070:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_020960a0:
    bne L_0209605c
    cmp r0, #0x0
    bhi L_0209605c
    cmn ip, r3, lsl #0x1
    blo L_02096040
L_020960b4:
    bne L_0209605c
    cmp r2, #0x0
    bhi L_0209605c
    b L_02096040
}
// clang-format on
