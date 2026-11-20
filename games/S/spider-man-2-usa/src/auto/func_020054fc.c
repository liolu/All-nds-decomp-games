#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02039fd8();
extern char data_02106968[];
// clang-format off
asm void func_020054fc(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldrb r3, [sp, #0x2c]
    mov r2, #0x0
    mov r5, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x28]
    ldr r1, [r5, #0x0]
    add r2, sp, #0x20
    mov r4, r0
    bl func_02039fd8
    ldr r0, =data_02106968
    mov r3, #0x0
    str r0, [r4, #0x0]
    str r5, [r4, #0x370]
    ldr ip, [r4, #0x2f4]
    add r2, r4, #0x27c
    add r1, ip, #0x85
    swpb r0, r3, [r1]
    add r1, ip, #0x86
    swpb r0, r3, [r1]
    ldrb r1, [r2, #0x0]
    mov r0, r4
    orr r1, r1, #0x80
    swpb r1, r1, [r2]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
