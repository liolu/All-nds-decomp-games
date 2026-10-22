#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_02006b0c();
extern void func_02006db0();
extern void func_02006e04();
extern void func_02006ee8();
extern void func_02008a3c();
extern void func_0200a04c();
extern char data_0206f718[];
extern char data_0206f738[];
// clang-format off
asm void func_02008738(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    add r5, r4, #0x27c
    ldrb r2, [r5, #0x0]
    ldr r3, =0x27d
    mov r1, #0x1
    bic r2, r2, #0x20
    swpb r2, r2, [r5]
    add r3, r4, r3
    ldrb r2, [r3, #0x0]
    orr r2, r2, #0x40
    swpb r2, r2, [r3]
    bl func_02008a3c
    mov r5, r0
    mov r0, r4
    mov r1, r5
    mov r2, #0x1
    mov r3, #0x0
    bl func_02006b0c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, r5
    bl func_02006e04
    ldrb r2, [r4, #0x363]
    mov r0, r4
    mov r1, r5
    bl func_02006db0
    ldr r1, =data_0206f738
    mov r0, r4
    bl func_01ff93d4
    ldr r0, =data_0206f718
    bl func_0200a04c
    mov r5, r0
    ldr r0, [r4, #0x3b4]
    add r0, r0, #0x8
    bl func_0200a04c
    add r1, r5, r0
    mov r0, r4
    bl func_02006ee8
    mov r0, #0x1
    str r0, [r4, #0x380]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
