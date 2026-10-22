#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb104();
extern void func_01ffc0f0();
extern void func_02009bb8();
extern void r1();
extern void r2();
// clang-format off
asm void func_02009aac(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldr r0, [r4, #0x384]
    cmp r0, #0x0
    beq L_02009b2c
    add r0, sp, #0x0
    mov r1, r4
    mov r2, #0x4
    mov r3, #0x0
    bl func_01ffb104
    ldr r2, [r4, #0x384]
    ldr r1, [sp, #0x4]
    ldr r0, [sp, #0x0]
    str r0, [r2, #0x298]
    str r1, [r2, #0x29c]
    ldr r0, [r4, #0x384]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r4, #0x384]
    ldr r1, [r0, #0x2f4]
    ldrb r1, [r1, #0x86]
    cmp r1, #0x0
    beq L_02009b2c
    cmp r0, #0x0
    beq L_02009b24
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_02009b24:
    mov r0, #0x0
    str r0, [r4, #0x384]
L_02009b2c:
    ldr r0, [r4, #0x3d8]
    cmp r0, #0x0
    ble L_02009b88
    add r2, r4, #0x3d8
    ldr r1, [r2, #0x0]
    mov r0, r4
    sub r1, r1, #0x1
    str r1, [r2, #0x0]
    bl func_02009bb8
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    ldr r0, [r4, #0x3d4]
    moveq r1, #0x1
    ldr r0, [r0, #0x2f4]
    movne r1, #0x0
    ldr r0, [r0, #0x20]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0xc]
    blx r2
    ldr r0, [r4, #0x3d4]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_02009b88:
    add r2, r4, #0x27c
    ldrb r1, [r2, #0x0]
    mov r0, r4
    bic r1, r1, #0x10
    swpb r1, r1, [r2]
    bl func_01ffc0f0
    add r1, r4, #0x3d0
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
