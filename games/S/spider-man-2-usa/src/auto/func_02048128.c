#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02046b28();
extern void func_02046b2c();
extern void func_02046e10();
extern void func_02046f60();
extern void func_02046fc8();
extern void func_02047030();
extern void func_0204705c();
extern void func_020482d8();
extern void func_02049c40();
extern char data_021605c4[];
// clang-format off
asm void func_02048128(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    add r7, sp, #0x18
    mov r8, #0x1
    swpb r4, r8, [r7]
    add r5, sp, #0x19
    mov r4, r1
    mov r1, r3
    swpb r3, r8, [r5]
    add r6, sp, #0x1a
    swpb r3, r8, [r6]
    mvn lr, #0x80000000
    mov ip, #0x80000000
    str lr, [sp, #0x1c]
    str ip, [sp, #0x20]
    str r2, [sp, #0x0]
    add r3, sp, #0x1c
    str r3, [sp, #0x4]
    add r2, sp, #0x20
    str r2, [sp, #0x8]
    str r7, [sp, #0xc]
    str r5, [sp, #0x10]
    ldr r2, [sp, #0x48]
    mov r3, r4
    mov r5, r0
    str r6, [sp, #0x14]
    bl func_020482d8
    ldr r0, =data_021605c4
    mov r4, #0x0
    ldr r1, [r0, #0x14]
    cmp r1, #0x1b
    bne L_020481b8
    ldr r1, [r0, #0x28]
    ldr r0, [r0, #0x4]
    cmp r1, r0
    movne r4, r8
L_020481b8:
    ldr r0, =data_021605c4
    ldr r1, [r5, #0x158]
    ldr r0, [r0, #0x4]
    subs r1, r1, r0
    ldr r0, [r5, #0x150]
    rsbmi r1, r1, #0x0
    ldr r0, [r0, #0x124]
    cmp r1, r0
    bgt L_02048204
    mov r0, r5
    bl func_02049c40
    cmp r0, #0x0
    addne sp, sp, #0x30
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r4, #0x0
    addne sp, sp, #0x30
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
L_02048204:
    ldrb r1, [sp, #0x1a]
    add r0, sp, #0x24
    str r1, [sp, #0x0]
    ldrb r1, [sp, #0x18]
    str r1, [sp, #0x4]
    ldrb r3, [sp, #0x19]
    ldr r1, [sp, #0x20]
    ldr r2, [sp, #0x1c]
    bl func_02046e10
    mov r0, r5
    bl func_02049c40
    cmp r0, #0x0
    bne L_02048248
    ldr r0, =data_021605c4
    ldr r0, [r0, #0x14]
    cmp r0, #0x1b
    bne L_020482bc
L_02048248:
    add r0, r5, #0x198
    bl func_02046b28
    ldr r1, =data_021605c4
    ldr r2, [r5, #0x158]
    ldr r1, [r1, #0x4]
    mov r4, r0
    cmp r1, r2
    ble L_02048290
    add r1, sp, #0x24
    mov r2, #0x0
    bl func_02046fc8
    cmp r0, #0x0
    beq L_020482bc
    add r0, sp, #0x24
    mov r1, r4
    mov r2, #0x0
    bl func_0204705c
    b L_020482bc
L_02048290:
    cmp r1, r2
    bge L_020482bc
    add r1, sp, #0x24
    mov r2, #0x0
    bl func_02046f60
    cmp r0, #0x0
    beq L_020482bc
    add r0, sp, #0x24
    mov r1, r4
    mov r2, #0x0
    bl func_02047030
L_020482bc:
    add r1, sp, #0x24
    add r0, r5, #0x198
    bl func_02046b2c
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
