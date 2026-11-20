#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cec0();
extern char data_021090b4[];
extern char data_02157e30[];
// clang-format off
asm void func_0200cf74(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr ip, =data_021090b4
    mov r4, r0
    str ip, [r4, #0x0]
    str r2, [r4, #0x20]
    ldr r0, [sp, #0x10]
    ldrb ip, [sp, #0x14]
    str r0, [r4, #0x24]
    add r2, r4, #0x28
    mov r0, #0x0
    swpb r0, r0, [r2]
    cmp ip, #0x0
    ldrne r0, =data_02157e30
    mov r5, r3
    strne r4, [r0, ip, lsl #0x2]
    mov r0, r4
    bl func_0200cec0
    cmp r5, #0x0
    strne r5, [r4, #0xc]
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
