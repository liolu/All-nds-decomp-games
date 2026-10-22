#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_01ff9418();
extern void func_01ffb0fc();
extern void func_02000dec();
extern void func_02039fd8();
extern void func_0203a6cc();
extern void func_0203b59c();
extern char data_02078600[];
extern char data_02106a20[];
// clang-format off
asm void func_020059fc(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldrb r3, [sp, #0x2c]
    mov r2, #0x0
    mov r4, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x28]
    ldr r1, [r4, #0x0]
    add r2, sp, #0x20
    mov r5, r0
    bl func_02039fd8
    ldr r0, =data_02106a20
    mov r2, #0x0
    str r0, [r5, #0x0]
    str r4, [r5, #0x370]
    str r2, [r5, #0x374]
    add r1, r5, #0x378
    swpb r0, r2, [r1]
    add r1, r4, #0x14
    mov r0, r5
    str r2, [r5, #0x37c]
    bl func_01ff93d4
    add r2, r5, #0x27c
    ldrb r1, [r2, #0x0]
    mov r0, #0x38
    orr r1, r1, #0x2
    swpb r1, r1, [r2]
    ldrb r1, [r2, #0x0]
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    bl func_0203a6cc
    movs r1, r0
    beq L_02005a94
    mov r1, #0x40
    bl func_0203b59c
    mov r1, r0
L_02005a94:
    mov r0, r5
    bl func_01ff9418
    mov r0, r5
    mov r1, #0x1
    bl func_01ffb0fc
    ldr r0, [r5, #0x2f0]
    ldr r1, =data_02078600
    add r0, r0, #0x1c
    bl func_02000dec
    ldr r1, =0x27d
    mov r0, r5
    add r2, r5, r1
    ldrb r1, [r2, #0x0]
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    ldrb r1, [r2, #0x0]
    orr r1, r1, #0x2
    swpb r1, r1, [r2]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
