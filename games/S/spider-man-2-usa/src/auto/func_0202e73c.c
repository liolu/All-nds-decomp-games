#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014bcc();
extern void func_02014c50();
extern void func_02014c90();
extern void func_02014cac();
extern void func_02015010();
extern void func_020150b4();
extern void func_0203b5f0();
extern void func_0203b5fc();
extern void func_0203b84c();
// clang-format off
asm void func_0202e73c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r8, r1
    mov r9, r0
    mov r0, r8
    bl func_020150b4
    ldrb r2, [r9, #0x7]
    mov r0, r8
    mov r1, #0x1
    bl func_02014bcc
    ldrb r2, [r9, #0x8]
    mov r0, r8
    mov r1, #0x4
    bl func_02014bcc
    ldrb r0, [r9, #0x9]
    add r1, r8, #0x60
    add r2, r8, #0x61
    swpb r0, r0, [r1]
    add r3, r8, #0x74
    ldrb r0, [r9, #0xa]
    mov r7, #0x0
    mov r6, r7
    swpb r0, r0, [r2]
    mov r0, r8
    ldrb r1, [r9, #0xb]
    swpb r1, r1, [r3]
    ldrb r1, [r9, #0x5]
    str r1, [r8, #0x10]
    ldrb r1, [r9, #0x6]
    str r1, [r8, #0x14]
    bl func_02014cac
    bl func_0203b84c
    cmp r0, #0x0
    ble L_0202e854
    add r5, r9, #0x15
    mov r4, #0x1
L_0202e7cc:
    str r6, [r8, #0x0]
    ldrb r0, [r5, #0x0]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    beq L_0202e7f0
    mov r0, r8
    bl func_02014c90
    mov r1, r4
    bl func_0203b5f0
L_0202e7f0:
    ldrb r0, [r5, #0x0]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq L_0202e80c
    mov r0, r8
    bl func_02014c90
    bl func_0203b5fc
L_0202e80c:
    ldrb r0, [r5, #0x0]
    mov r0, r0, lsl #0x1d
    movs r0, r0, lsr #0x1f
    beq L_0202e834
    add r2, r9, r7, lsl #0x3
    ldr r1, [r2, #0x10]
    mov r0, r8
    str r1, [r8, #0x6c]
    ldrb r1, [r2, #0x14]
    bl func_02015010
L_0202e834:
    mov r0, r8
    add r6, r6, #0x1
    add r5, r5, #0x8
    add r7, r7, #0x1
    bl func_02014cac
    bl func_0203b84c
    cmp r6, r0
    blt L_0202e7cc
L_0202e854:
    ldrb r0, [r9, #0x4]
    mov r4, #0x0
    str r0, [r8, #0x0]
    mov r5, #0x1
L_0202e864:
    ldrb r1, [r9, #0xc]
    mov r0, r5, lsl r4
    ands r0, r1, r0
    beq L_0202e880
    mov r0, r8
    mov r1, r4
    bl func_02014c50
L_0202e880:
    add r4, r4, #0x1
    cmp r4, #0x8
    blt L_0202e864
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
