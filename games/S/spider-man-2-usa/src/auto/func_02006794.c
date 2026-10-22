#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020063f8();
extern void func_02014be0();
extern void func_02018c60();
extern void func_020353f4();
extern void func_0203702c();
extern char data_02106ba8[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02006794(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r1
    bl func_020353f4
    ldr r0, =data_02106ba8
    mov r2, #0x0
    str r0, [r5, #0x0]
    str r2, [r5, #0x70]
    str r2, [r5, #0x74]
    add r1, r5, #0x78
    swpb r0, r2, [r1]
    mvn r0, #0x0
    str r2, [r5, #0x7c]
    ldr r1, [r4, #0x3c]
    str r1, [r5, #0x68]
    ldr r1, [r4, #0x40]
    str r1, [r5, #0x6c]
    ldr r1, [r5, #0x68]
    cmp r1, r0
    beq L_02006808
    ldr r0, [r4, #0x20]
    bl func_02018c60
    str r0, [r5, #0x70]
    ldr r2, [r5, #0x70]
    mov r0, r5
    add r1, r5, #0x68
    mov r3, #0x54
    bl func_020063f8
L_02006808:
    ldr r1, [r5, #0x6c]
    mvn r0, #0x0
    cmp r1, r0
    beq L_02006838
    ldr r0, [r4, #0x20]
    bl func_02018c60
    str r0, [r5, #0x74]
    ldr r2, [r5, #0x74]
    mov r0, r5
    add r1, r5, #0x6c
    mov r3, #0x64
    bl func_020063f8
L_02006838:
    ldr r0, =data_0215b3d4
    mov r1, #0x1
    bl func_02014be0
    str r0, [r5, #0x80]
    ldr r0, =data_0215b3d4
    mov r1, #0x4
    bl func_02014be0
    str r0, [r5, #0x84]
    add r1, r5, #0x88
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_0203702c
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
