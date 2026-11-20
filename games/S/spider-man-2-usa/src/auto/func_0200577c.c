#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa43c();
extern void func_02000dec();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_021069f4[];
extern char data_02106a00[];
extern char data_02106a0c[];
// clang-format off
asm void func_0200577c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r6, r0
    add r3, r6, #0x27c
    ldrb r0, [r3, #0x0]
    mov r5, r1
    mov r4, r2
    orr r0, r0, #0x20
    swpb r0, r0, [r3]
    bl func_0204cd18
    ldr r1, [r6, #0x370]
    mov r2, #0x0
    ldr r1, [r1, #0xc]
    bl func_0204c8cc
    ldr r0, [r6, #0x2f0]
    mov r1, r5
    add r0, r0, #0x4
    bl func_02000dec
    ldr r0, [r6, #0x2f0]
    mov r1, r4
    add r0, r0, #0x1c
    bl func_02000dec
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    cmp r0, #0xcc
    bgt L_02005840
    bl func_01ffa43c
    ldr r1, [r0, #0x298]
    ldr r0, [r6, #0x298]
    cmp r1, r0
    ble L_02005820
    ldr r0, =data_02106a0c
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r6, #0x2f0]
    mov r1, r3
    add r0, r0, #0x4
    bl func_02000dec
    b L_02005840
L_02005820:
    ldr r0, =data_02106a00
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r6, #0x2f0]
    mov r1, r3
    add r0, r0, #0x4
    bl func_02000dec
L_02005840:
    ldr r0, [r4, #0x0]
    cmp r0, #0x0
    bne L_0200586c
    ldr r0, =data_021069f4
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r6, #0x2f0]
    mov r1, r3
    add r0, r0, #0x1c
    bl func_02000dec
L_0200586c:
    mov r0, #0x1
    str r0, [r6, #0x374]
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
