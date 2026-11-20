#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014c50();
extern void func_02014c64();
extern void func_0201505c();
extern void func_0203a6cc();
extern void func_0203b854();
extern void func_0203b920();
// clang-format off
asm void func_020150b4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x0]
    ldr r0, [r4, #0x4c]
    cmp r0, #0x0
    bne L_020150e8
    mov r0, #0x8
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_020150e4
    bl func_0203b920
L_020150e4:
    str r0, [r4, #0x4c]
L_020150e8:
    ldr r0, [r4, #0x4c]
    bl func_0203b854
    mov r0, r4
    bl func_0201505c
    mov r0, r4
    bl func_02014c64
    mov r0, r4
    mov r1, #0x7
    bl func_02014c50
    mov r0, r4
    mov r1, #0x1
    bl func_02014c50
    mov r0, r4
    mov r1, #0x3
    bl func_02014c50
    add r1, r4, #0x60
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0x61
    swpb r0, r2, [r1]
    mov r0, #0x7
    str r0, [r4, #0x54]
    str r2, [r4, #0x28]
    str r2, [r4, #0x1c]
    add r1, r4, #0x74
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
