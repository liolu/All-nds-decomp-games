#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200bb30();
extern void func_0200bfc4();
extern void func_0200c218();
extern void func_0200c408();
extern void func_02019ce4();
extern void func_0202c594();
extern void func_0203a6cc();
extern void func_0204a5b8();
extern void r1();
extern void r2();
extern void r3();
extern char data_02157e28[];
// clang-format off
asm void func_0200c28c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r5, r1
    mov r7, r2
    mov r6, r3
    bl func_0200bb30
    cmp r0, #0x0
    beq L_0200c2b8
    mov r0, r4
    bl func_0200c218
L_0200c2b8:
    mov r0, r5
    mov r1, #0x0
    bl func_0204a5b8
    str r0, [r4, #0x0]
    ldr r5, [r4, #0x0]
    ldr r0, [r5, #0x0]
    mov r0, r0, lsl #0x18
    movs r0, r0, lsr #0x1c
    beq L_0200c2e8
    cmp r0, #0x1
    beq L_0200c308
    b L_0200c324
L_0200c2e8:
    mov r0, #0x24
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0200c300
    mov r1, r5
    bl func_0202c594
L_0200c300:
    str r0, [r4, #0x4]
    b L_0200c324
L_0200c308:
    mov r0, #0x1c
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0200c320
    mov r1, r5
    bl func_02019ce4
L_0200c320:
    str r0, [r4, #0x4]
L_0200c324:
    str r7, [r4, #0xac]
    str r6, [r4, #0xb0]
    mov r0, r6, lsr #0x1
    str r0, [r4, #0xb4]
    ldr r0, [r4, #0x4]
    add r2, r4, #0xc
    ldr r3, [r0, #0x0]
    mov r1, #0x80
    ldr r3, [r3, #0x8]
    blx r3
    ldrh r1, [r4, #0x14]
    ldrh r0, [r4, #0x16]
    mul r0, r1, r0
    str r0, [r4, #0x9c]
    ldr r0, [r4, #0x4]
    ldr r1, [r4, #0x5c]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0xc]
    blx r2
    mov r3, #0x0
    ldr r2, =0x1000100
    add r0, sp, #0x0
    add r1, r4, #0xb8
    strh r3, [sp, #0x0]
    bl func_0200c408
    mov r0, r4
    bl func_0200bfc4
    ldr r0, [r4, #0x4]
    ldr r1, [r4, #0x60]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0xc]
    blx r2
    ldr r0, [r4, #0x4]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
    str r0, [r4, #0x8]
    ldr r1, =data_02157e28
    mov r0, #0x3e8
    ldr r2, [r1, #0x0]
    ldr r1, =0x88888889
    mul r3, r2, r0
    umull r0, r1, r3, r1
    mov r1, r1, lsr #0x5
    str r1, [r4, #0xa4]
    mov r0, #0x1
    str r0, [r4, #0xa0]
    mov r0, #0x0
    add r1, r4, #0x2bc
    str r0, [r4, #0x2b8]
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
