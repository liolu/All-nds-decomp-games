#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd008();
extern void func_0203a6c0();
extern void func_0203a6cc();
extern void func_0204d234();
extern void func_0204d278();
extern void func_0204d328();
extern void func_0204d39c();
extern void func_02053a2c();
// clang-format off
asm void func_0204d468(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r3, #0x0
    str r3, [r4, #0x80]
    add lr, r4, #0x84
    mov r2, #0x1
    swpb ip, r2, [lr]
    add lr, r4, #0x85
    swpb ip, r2, [lr]
    add lr, r4, #0x86
    swpb ip, r3, [lr]
    mov r5, #0x3
    str r3, [r4, #0x88]
    str r1, [r4, #0x8c]
    str r1, [r4, #0x90]
    ldrh r1, [r1, #0x4]
    add ip, r4, #0xb9
    add lr, r4, #0xba
    mov r1, r1, lsl #0x2
    str r1, [r4, #0x94]
    str r3, [r4, #0x9c]
    str r5, [r4, #0xa0]
    str r5, [r4, #0xa4]
    str r2, [r4, #0xa8]
    swpb r1, r3, [ip]
    swpb r1, r3, [lr]
    bl func_0204d39c
    mov r0, r4
    bl func_0204d328
    mov r0, r4
    bl func_0204d278
    mov r0, r4
    bl func_0204d234
    add r0, r4, #0x4
    bl func_02053a2c
    add r0, r4, #0x44
    bl func_02053a2c
    mov r0, #0x0
    str r0, [r4, #0x0]
    str r0, [r4, #0x34]
    str r0, [r4, #0x40]
    str r0, [r4, #0x74]
    ldr r0, [r4, #0xb4]
    cmp r0, #0x0
    beq L_0204d5a0
    mov r0, #0x8
    bl func_0203a6cc
    movs r5, r0
    beq L_0204d54c
    ldr r1, [r4, #0xac]
    mov r0, #0x30
    ldr r1, [r1, #0x38]
    mul r0, r1, r0
    str r1, [r5, #0x0]
    bl func_0203a6c0
    str r0, [r5, #0x4]
L_0204d54c:
    mov r0, #0x8
    str r5, [r4, #0x0]
    bl func_0203a6cc
    movs r5, r0
    beq L_0204d57c
    ldr r1, [r4, #0xac]
    mov r0, #0x30
    ldr r1, [r1, #0x38]
    mul r0, r1, r0
    str r1, [r5, #0x0]
    bl func_0203a6c0
    str r0, [r5, #0x4]
L_0204d57c:
    str r5, [r4, #0x40]
    ldr r0, [r4, #0xb4]
    ldr r1, [r4, #0x0]
    ldr r2, [r4, #0x94]
    bl func_01ffd008
    ldr r0, [r4, #0xb4]
    ldr r1, [r4, #0x40]
    ldr r2, [r4, #0x94]
    bl func_01ffd008
L_0204d5a0:
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
