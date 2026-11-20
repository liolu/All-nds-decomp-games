#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004104();
// clang-format off
asm void func_02003560(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, [r0, #0x2f4]
    ldrb r1, [r1, #0x86]
    cmp r1, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    ldrb r1, [r0, #0x362]
    cmp r1, #0x0
    ldr r1, =0x362
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r0, r1
    swpb r1, r3, [r2]
    bl func_02004104
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
