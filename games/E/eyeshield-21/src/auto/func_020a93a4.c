#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a953c();
extern char data_020d9330[];
extern char func_020a9574[];
extern char func_020a9a0c[];
extern char func_020a9a70[];
// clang-format off
asm void func_020a93a4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    cmp r2, #0x8
    movlt r4, r2
    movge ip, #0x3
    clzlt r4, r4
    rsblt ip, r4, #0x1f
    cmp r3, #0x8
    movge r6, #0x3
    clzlt r4, r3
    rsblt r6, r4, #0x1f
    ldr r4, =data_020d9330
    ldr r5, [sp, #0x28]
    add r4, r4, r6, lsl #0x3
    ldrb r6, [r4, ip, lsl #0x1]
    add ip, r4, ip, lsl #0x1
    ldr r4, =func_020a9a70
    strb r6, [sp, #0x14]
    ldrb r6, [ip, #0x1]
    ldr lr, =func_020a9a0c
    ldr ip, =func_020a9574
    strb r6, [sp, #0x15]
    str r5, [sp, #0x0]
    str r4, [sp, #0x4]
    str lr, [sp, #0x8]
    str ip, [sp, #0xc]
    ldr ip, [sp, #0x14]
    str ip, [sp, #0x10]
    bl func_020a953c
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
