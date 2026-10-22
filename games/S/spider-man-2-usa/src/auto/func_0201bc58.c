#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036374();
extern void r2();
extern char data_021136c8[];
// clang-format off
asm void func_0201bc58(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r3
    bl func_02036374
    ldr r1, =data_021136c8
    ldr r0, [sp, #0x10]
    str r1, [r5, #0x0]
    mov r1, #0x0
    str r1, [r5, #0x314]
    str r0, [r5, #0x318]
    add r2, r5, #0x27c
    ldrb r0, [r2, #0x0]
    mov r1, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r2]
    ldr r0, [r5, #0x310]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x18]
    blx r2
    ldr r1, [r4, #0x0]
    mov r0, r5
    str r1, [r5, #0x2fc]
    ldr r1, [r4, #0x4]
    str r1, [r5, #0x300]
    ldr r1, [r4, #0x0]
    str r1, [r5, #0x304]
    ldr r1, [r4, #0x4]
    str r1, [r5, #0x308]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
