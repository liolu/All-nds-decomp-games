#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000dc4();
extern void func_02006b0c();
extern void func_02006e04();
extern void func_02008a3c();
// clang-format off
asm void func_02007c34(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =0x27d
    mov r4, r0
    add r2, r4, r1
    ldrb r1, [r2, #0x0]
    add ip, r4, #0x27c
    add r3, r4, #0x3c0
    bic r1, r1, #0x40
    swpb r1, r1, [r2]
    mov r5, #0x0
    ldrb r2, [ip, #0x0]
    mov r1, #0x19
    orr r2, r2, #0x20
    swpb r2, r2, [ip]
    ldr r2, [r4, #0x29c]
    str r2, [r4, #0x3bc]
    swpb r2, r5, [r3]
    bl func_02008a3c
    mov r5, r0
    mov r2, #0x0
    mov r0, r4
    mov r1, r5
    mov r3, r2
    bl func_02006b0c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, r5
    bl func_02006e04
    ldr r0, [r4, #0x2f0]
    mov r1, #0x31
    add r0, r0, #0x1c
    mov r2, #0x700
    bl func_02000dc4
    mov r0, #0x14
    str r0, [r4, #0x380]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
