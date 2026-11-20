#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fc20();
extern void r2();
extern char data_0207a480[];
// clang-format off
asm void func_0201fc7c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r1
    bl func_0201fc20
    str r4, [r5, #0xc]
    add r1, r5, #0x10
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r5, #0xc]
    ldr r2, [r5, #0x4]
    mov r1, r0, lsl #0x3
    add r0, r2, r0, lsl #0x3
    ldrb r0, [r0, #0x5]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, [r2, r1]
    ldr r1, =data_0207a480
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1c]
    blx r2
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
