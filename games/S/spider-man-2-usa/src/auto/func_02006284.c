#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9418();
extern void func_02000dec();
extern void func_020161b8();
extern void func_0201e018();
extern void func_02039fd8();
extern void func_0203a6cc();
extern void func_02045110();
extern char data_02078600[];
extern char data_02106b14[];
// clang-format off
asm void func_02006284(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldrb r3, [sp, #0x34]
    mov r2, #0x0
    mov r4, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x30]
    ldr r1, [r4, #0x0]
    add r2, sp, #0x28
    mov r5, r0
    bl func_02039fd8
    ldr r1, =data_02106b14
    mov r0, #0x0
    str r1, [r5, #0x0]
    str r4, [r5, #0x370]
    str r0, [r5, #0x374]
    str r0, [r5, #0x378]
    mov r0, #0x1e
    str r0, [r5, #0x37c]
    ldr r1, [r4, #0x20]
    add r0, r4, #0x28
    str r1, [r5, #0x2c0]
    ldr r1, [r4, #0x24]
    add r3, r5, #0x2c8
    str r1, [r5, #0x2c4]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r4, #0x34
    add r3, r5, #0x2d4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrb r0, [r4, #0x1e]
    cmp r0, #0x0
    beq L_02006354
    add r2, r5, #0x27c
    ldrb r1, [r2, #0x0]
    mov r0, #0x34
    orr r1, r1, #0x2
    swpb r1, r1, [r2]
    bl func_0203a6cc
    movs r1, r0
    beq L_0200633c
    bl func_0201e018
    mov r1, r0
L_0200633c:
    mov r0, r5
    bl func_01ff9418
    ldr r0, [r5, #0x2f0]
    ldr r1, =data_02078600
    add r0, r0, #0x1c
    bl func_02000dec
L_02006354:
    ldr r0, [r5, #0x370]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    beq L_020063c0
    mov r0, #0x300
    bl func_0203a6cc
    movs r7, r0
    beq L_020063bc
    mov r0, #0x38
    add r6, r5, #0x298
    bl func_0203a6cc
    movs r1, r0
    beq L_0200639c
    ldr r1, [r5, #0x370]
    mov r2, #0x0
    ldr r1, [r1, #0x8]
    bl func_020161b8
    mov r1, r0
L_0200639c:
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r0, r7
    mov r2, r6
    mov r3, #0x1
    str ip, [sp, #0x4]
    bl func_02045110
    mov r7, r0
L_020063bc:
    str r7, [r5, #0x374]
L_020063c0:
    add r3, r5, #0x27c
    ldrb r2, [r3, #0x0]
    ldrb r1, [r4, #0x1d]
    mov r0, r5
    bic r2, r2, #0x80
    and r1, r1, #0x1
    orr r1, r2, r1, lsl #0x7
    swpb r1, r1, [r3]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
