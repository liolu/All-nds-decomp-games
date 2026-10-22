#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9418();
extern void func_01ffb0fc();
extern void func_01ffb288();
extern void func_0200516c();
extern void func_0202fb60();
extern void func_0202fb98();
extern void func_02032e30();
extern void func_02039fd8();
extern void func_0203a6cc();
extern void func_0203b59c();
extern void func_0204c284();
extern char data_02080f90[];
extern char data_02123e10[];
// clang-format off
asm void func_020322d0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    mov r4, r3
    ldrh r3, [r4, #0x0]
    mov r6, r0
    mov r5, r1
    mov r0, r3, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldrh r0, [r4, #0x0]
    movne r3, #0x1
    moveq r3, #0x0
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    movne r0, #0x1
    moveq r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r1, [r5, #0x4]
    mov r0, r6
    bl func_02039fd8
    ldr r0, =data_02123e10
    mov r2, #0x0
    str r0, [r6, #0x0]
    str r2, [r6, #0x3d4]
    add r1, r6, #0x3d8
    swpb r0, r2, [r1]
    str r2, [r6, #0x3dc]
    str r2, [r6, #0x3e0]
    mov r0, #0x28
    str r2, [r6, #0x3e4]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_02032364
    ldr r1, [r5, #0x24]
    mov r2, r6
    bl func_02032e30
L_02032364:
    str r0, [r6, #0x3e8]
    mov ip, #0x0
    str ip, [r6, #0x54c]
    ldr r1, [r5, #0x4]
    ldr r0, =data_02080f90
    str r1, [r6, #0x550]
    str ip, [r6, #0x554]
    ldr lr, =0x558
    add r3, sp, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add lr, r6, lr
    ldmia r3, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldr r7, =0x564
    ldmia r3, {r0, r1, r2}
    add lr, r6, r7
    stmia lr, {r0, r1, r2}
    mov r0, #0x1
    ldr r8, =0x584
    str r0, [r6, #0x570]
    str ip, [r6, #0x574]
    add r7, r6, r8
    str ip, [r6, #0x578]
    swpb r0, ip, [r7]
    ldr r2, [sp, #0x30]
    ldrsh r3, [r4, #0x8]
    ldr r0, =0x5a4
    str r3, [r6, #0x588]
    str r5, [r6, #0x58c]
    str ip, [r6, #0x590]
    str ip, [r6, #0x594]
    str r5, [r6, #0x598]
    add r1, r6, r0
    ldr r3, [sp, #0x34]
    str r2, [r6, #0x59c]
    ldr r0, =0x5a5
    str r3, [r6, #0x5a0]
    add r2, r6, r0
    swpb r0, ip, [r1]
    swpb r1, ip, [r2]
    mov r0, #0x38
    str ip, [r6, #0x2c4]
    bl func_0203a6cc
    movs r1, r0
    beq L_02032428
    mov r1, #0x40
    bl func_0203b59c
    mov r1, r0
L_02032428:
    mov r0, r6
    bl func_01ff9418
    mov r0, r6
    mov r1, #0x1
    bl func_01ffb0fc
    add r2, r6, #0x298
    ldr r1, [r2, #0x0]
    mov r0, r6
    str r1, [r6, #0x57c]
    ldr r1, [r2, #0x4]
    mov r2, #0x0
    str r1, [r6, #0x580]
    mov r1, #0x40
    str r2, [r6, #0x370]
    bl func_0202fb98
    cmp r0, #0x0
    beq L_0203248c
    mov r0, r6
    mov r1, #0x40
    bl func_0202fb60
    ldr r0, [r0, #0x4]
    bl func_0204c284
    mov r1, r0
    mov r0, r6
    bl func_01ffb288
L_0203248c:
    ldrb r0, [sp, #0x38]
    cmp r0, #0x0
    beq L_020324b4
    mov r0, #0x18
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_020324b0
    mov r1, r6
    bl func_0200516c
L_020324b0:
    str r0, [r6, #0x590]
L_020324b4:
    mov r0, r6
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
