#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0203ad0c(void) {
    ldrb r2, [r0, #0x0]
    mov ip, r0
    cmp r2, #0x0
    beq L_0203ad28
L_0203ad1c:
    ldrb r2, [r0, #0x1]!
    cmp r2, #0x0
    bne L_0203ad1c
L_0203ad28:
    ldrb r2, [r1], #0x1
    mov r3, r0
    swpb r2, r2, [r0]
    add r0, r0, #0x1
    ldrb r2, [r3, #0x0]
    cmp r2, #0x0
    bne L_0203ad28
    mov r0, ip
    bx lr
}
// clang-format on
