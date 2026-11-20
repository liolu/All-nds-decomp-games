#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9eec();
extern void func_02014be0();
extern void func_020391a0();
extern void func_02039810();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_02087684[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0202176c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x150
    mov r8, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x3
    bl func_02014be0
    cmp r0, #0x0
    bge L_020217b4
    bl func_0204cd18
    ldr r1, =data_02087684
    mov r2, #0x0
    bl func_0204c8cc
    add r2, r8, #0x3d0
    mov r0, #0x0
    swpb r1, r0, [r2]
    add sp, sp, #0x150
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_020217b4:
    ldr r0, [r8, #0x298]
    add r2, sp, #0x18
    str r0, [sp, #0x8]
    ldr r0, [r8, #0x29c]
    mov r1, #0x0
    str r0, [sp, #0xc]
    ldr r0, [r8, #0x390]
    str r0, [sp, #0x10]
    ldr r0, [r8, #0x394]
    str r0, [sp, #0x14]
    add r0, sp, #0x118
L_020217e0:
    str r1, [r2], #0x8
    cmp r2, r0
    bne L_020217e0
    add r0, sp, #0x18
    bl func_01ff9eec
    ldr r2, [sp, #0x138]
    add r0, sp, #0x8
    add r1, sp, #0x18
    bl func_020391a0
    str r0, [sp, #0x138]
    cmp r0, #0x0
    mov r7, #0x0
    ble L_020218a0
    add r5, sp, #0x18
    add r6, sp, #0x8
    add r4, sp, #0x0
L_02021820:
    ldr r1, [r5, r7, lsl #0x3]
    mov r0, r6
    mov r2, r4
    bl func_02039810
    ldr r1, [r8, #0x298]
    ldr r0, [r8, #0x390]
    subs r2, r0, r1
    ldr r0, [sp, #0x0]
    rsbmi r2, r2, #0x0
    subs r1, r0, r1
    rsbmi r1, r1, #0x0
    cmp r1, r2
    strlt r0, [r8, #0x390]
    ldrlt r0, [r5, r7, lsl #0x3]
    ldrlt r0, [r0, #0x10]
    strlt r0, [r8, #0x38c]
    ldr r1, [r8, #0x29c]
    ldr r0, [r8, #0x394]
    subs r2, r0, r1
    ldr r0, [sp, #0x4]
    rsbmi r2, r2, #0x0
    subs r1, r0, r1
    rsbmi r1, r1, #0x0
    cmp r1, r2
    strlt r0, [r8, #0x394]
    ldrlt r0, [r5, r7, lsl #0x3]
    add r7, r7, #0x1
    ldrlt r0, [r0, #0x10]
    strlt r0, [r8, #0x38c]
    ldr r0, [sp, #0x138]
    cmp r7, r0
    blt L_02021820
L_020218a0:
    cmp r0, #0x0
    movgt r0, #0x1
    movle r0, #0x0
    add r1, r8, #0x3d0
    swpb r0, r0, [r1]
    ldrb r0, [r8, #0x3d0]
    add sp, sp, #0x150
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
