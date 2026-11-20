#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d5a4();
extern char data_02115d54[];
// clang-format off
asm void func_0202d050(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r1, #0x3c
    mov r4, r0
    mov r5, r2
    bl func_0200d5a4
    ldr r0, =data_02115d54
    add r1, r4, #0x34
    str r0, [r4, #0x0]
    swpb r0, r5, [r1]
    mov r2, #0x0
    str r2, [r4, #0x38]
    str r6, [r4, #0x3c]
    str r2, [r4, #0x40]
    str r2, [r4, #0x44]
    str r2, [r4, #0x48]
    str r2, [r4, #0x9c]
    add r1, r4, #0xa0
    swpb r0, r2, [r1]
    mov r1, #0x4000000
    ldr r0, [r1, #0x0]
    bic r0, r0, #0x1f00
    orr r0, r0, #0x1800
    str r0, [r1, #0x0]
    mov r1, r2
L_0202d0b4:
    add r0, r4, r2, lsl #0x2
    add r2, r2, #0x1
    str r1, [r0, #0x4c]
    cmp r2, #0x14
    blt L_0202d0b4
    mov r0, r4
    str r1, [r4, #0xa4]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
