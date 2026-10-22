#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02038b00(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    subs ip, r1, #0x1
    mov lr, #0x0
    beq L_02038b30
L_02038b14:
    ldrb r3, [r0, #0x0]
    add lr, lr, #0x1
    cmp lr, ip
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    add r0, r0, #0x1
    blo L_02038b14
L_02038b30:
    ldrb r3, [r0, #0x0]
    mov r0, r1
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
