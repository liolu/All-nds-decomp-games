#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a910();
extern void func_0203ae74();
// clang-format off
asm void func_0203a708(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldrb r3, [r1, #0x0]
    mov r7, r1
    str r0, [sp, #0x4]
    mov r9, r2
    mov r8, r0
    cmp r3, #0x0
    add r7, r7, #0x1
    beq L_0203a8f4
    add r11, sp, #0x8
    mov r10, #0x10
    mov r4, #0xa
    mov r5, #0x20
    mov r6, #0x30
L_0203a744:
    cmp r3, #0x25
    bne L_0203a8e0
    ldrb r1, [r7], #0x1
    cmp r1, #0x63
    bgt L_0203a7d4
    cmp r1, #0x63
    bge L_0203a894
    cmp r1, #0x39
    bgt L_0203a7c8
    subs r0, r1, #0x25
    addpl pc, pc, r0, lsl #0x2
    b L_0203a8d4
    b L_0203a85c
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a8d4
    b L_0203a7fc
    b L_0203a828
    b L_0203a828
    b L_0203a828
    b L_0203a828
    b L_0203a828
    b L_0203a828
    b L_0203a828
    b L_0203a828
    b L_0203a828
L_0203a7c8:
    cmp r1, #0x58
    beq L_0203a8bc
    b L_0203a8d4
L_0203a7d4:
    cmp r1, #0x73
    bgt L_0203a7f0
    cmp r1, #0x73
    bge L_0203a868
    cmp r1, #0x64
    beq L_0203a8a4
    b L_0203a8d4
L_0203a7f0:
    cmp r1, #0x78
    beq L_0203a8bc
    b L_0203a8d4
L_0203a7fc:
    mov r0, r8
    mov r1, r7
    mov r2, r9
    mov r3, r6
    str r11, [sp, #0x0]
    bl func_0203a910
    ldr r1, [sp, #0x8]
    mov r8, r0
    add r7, r7, r1
    add r9, r9, #0x4
    b L_0203a8e8
L_0203a828:
    add r1, sp, #0xc
    str r1, [sp, #0x0]
    mov r0, r8
    mov r2, r9
    mov r3, r5
    sub r1, r7, #0x1
    bl func_0203a910
    ldr r1, [sp, #0xc]
    mov r8, r0
    sub r0, r1, #0x1
    add r7, r7, r0
    add r9, r9, #0x4
    b L_0203a8e8
L_0203a85c:
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    b L_0203a8e8
L_0203a868:
    ldr r0, [r9], #0x4
    ldrb r1, [r0, #0x0]
    cmp r1, #0x0
    beq L_0203a8e8
L_0203a878:
    ldrb r1, [r0, #0x0]
    swpb r1, r1, [r8]
    add r8, r8, #0x1
    ldrb r1, [r0, #0x1]!
    cmp r1, #0x0
    bne L_0203a878
    b L_0203a8e8
L_0203a894:
    ldrb r0, [r9], #0x4
    swpb r0, r0, [r8]
    add r8, r8, #0x1
    b L_0203a8e8
L_0203a8a4:
    ldr r0, [r9], #0x4
    mov r1, r8
    mov r2, r4
    bl func_0203ae74
    add r8, r8, r0
    b L_0203a8e8
L_0203a8bc:
    ldr r0, [r9], #0x4
    mov r1, r8
    mov r2, r10
    bl func_0203ae74
    add r8, r8, r0
    b L_0203a8e8
L_0203a8d4:
    swpb r0, r1, [r8]
    add r8, r8, #0x1
    b L_0203a8e8
L_0203a8e0:
    swpb r0, r3, [r8]
    add r8, r8, #0x1
L_0203a8e8:
    ldrb r3, [r7], #0x1
    cmp r3, #0x0
    bne L_0203a744
L_0203a8f4:
    mov r0, #0x0
    swpb r0, r0, [r8]
    ldr r0, [sp, #0x4]
    sub r0, r8, r0
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
