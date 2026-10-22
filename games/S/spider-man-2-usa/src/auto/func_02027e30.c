#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb0f0();
extern void func_02000dec();
extern void func_02014ba4();
extern void func_020218cc();
extern void func_020245c0();
extern void func_0202461c();
extern void func_0202aa30();
extern void r2();
extern char data_0215b3d4[];
// clang-format off
asm void func_02027e30(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, =0x27d
    mov r5, r0
    add r3, r5, r2
    ldrb r2, [r3, #0x0]
    mov r4, r1
    bic r1, r2, #0x40
    swpb r1, r1, [r3]
    ldr r1, [r5, #0x28c]
    cmp r1, #0x3
    bne L_02027e70
    bl func_020218cc
    cmp r0, #0x0
    movne r3, #0x1
    bne L_02027e74
L_02027e70:
    mov r3, #0x0
L_02027e74:
    ldr r0, =0x3d1
    mov r2, #0x0
    add r1, r5, r0
    swpb r0, r3, [r1]
    mov r0, r5
    mov r3, r2
    mov r1, #0x1a
    bl func_0202461c
    mov r0, #0x10
    str r0, [r5, #0x388]
    ldr r0, [r4, #0x10]
    cmp r0, #0x0
    bge L_02027ebc
    mov r0, r5
    mov r1, #0x1a
    mov r2, #0x1
    bl func_020245c0
    b L_02027ee8
L_02027ebc:
    cmp r0, #0x0
    ble L_02027ed8
    mov r0, r5
    mov r1, #0x1a
    mov r2, #0x0
    bl func_020245c0
    b L_02027ee8
L_02027ed8:
    mov r0, r5
    mov r1, #0x7
    mov r2, #0x0
    bl func_020245c0
L_02027ee8:
    mov r0, r5
    mov r1, #0x1a
    mov r2, #0x0
    bl func_0202aa30
    ldr r0, [r5, #0x2f0]
    add r1, r4, #0x8
    add r0, r0, #0x4
    bl func_02000dec
    ldr r0, [r5, #0x2f0]
    add r1, r4, #0x14
    add r0, r0, #0x1c
    bl func_02000dec
    mov r1, #0x0
    mov r0, r5
    str r1, [r5, #0x28c]
    bl func_01ffb0f0
    add r0, r0, #0x28
    str r0, [r5, #0x3d4]
    ldr r1, [r4, #0x0]
    ldr r0, =data_0215b3d4
    rsb r2, r1, #0x0
    mov r1, #0x0
    bl func_02014ba4
    ldr r1, [r5, #0x2f4]
    mov r0, r5
    ldr r1, [r1, #0x8c]
    ldrh r2, [r1, #0x6]
    ldrh r1, [r1, #0x4]
    sub r1, r2, r1
    add r4, r1, #0x1
    bl func_01ffb0f0
    add r0, r4, r0
    str r0, [r5, #0x374]
    mov r0, r5
    mov r1, r4
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x7c]
    blx r2
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
