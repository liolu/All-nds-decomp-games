#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02035ba4();
extern char data_0215d6f4[];
// clang-format off
asm void func_02035aa4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldrb r2, [r5, #0x4]
    mov r4, r1
    cmp r2, #0x0
    beq L_02035b90
    ldr r1, =data_0215d6f4
    cmp r4, #0x0
    ldr r1, [r1, #0x0]
    beq L_02035ae4
    cmp r4, #0x1
    beq L_02035b34
    cmp r4, #0x2
    beq L_02035b84
    b L_02035b90
L_02035ae4:
    ldr r2, [r5, #0x8]
    cmp r2, #0x0
    beq L_02035b90
    cmp r2, #0x1
    beq L_02035b04
    cmp r2, #0x2
    beq L_02035b18
    b L_02035b90
L_02035b04:
    bl func_02035ba4
    add r1, r5, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02035b90
L_02035b18:
    add r3, r5, #0x14
    ldr r0, [r5, #0x18]
    ldr r2, [r3, #0x0]
    sub r0, r1, r0
    add r0, r2, r0
    str r0, [r3, #0x0]
    b L_02035b90
L_02035b34:
    ldr r2, [r5, #0x8]
    cmp r2, #0x0
    beq L_02035b54
    cmp r2, #0x1
    beq L_02035b90
    cmp r2, #0x2
    beq L_02035b68
    b L_02035b90
L_02035b54:
    bl func_02035ba4
    add r1, r5, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02035b90
L_02035b68:
    add r3, r5, #0x14
    ldr r0, [r5, #0x18]
    ldr r2, [r3, #0x0]
    sub r0, r1, r0
    add r0, r2, r0
    str r0, [r3, #0x0]
    b L_02035b90
L_02035b84:
    ldr r0, [r5, #0x8]
    cmp r0, #0x2
    strne r1, [r5, #0x18]
L_02035b90:
    str r4, [r5, #0x8]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
