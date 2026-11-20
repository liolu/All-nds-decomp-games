#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b174();
extern char data_0215b3d4[];
extern char data_0215d6c8[];
// clang-format off
asm void func_02036fd0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_0215b3d4
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    addne sp, sp, #0x4
    ldmnefd sp!, {lr}
    bxne lr
    ldr r2, =data_0215d6c8
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {lr}
    bxne lr
    mov r1, #0x1
    mov r0, #0x130
    swpb r1, r1, [r2]
    bl func_0200b174
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
