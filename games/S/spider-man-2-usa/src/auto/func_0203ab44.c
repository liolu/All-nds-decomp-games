#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a640();
// clang-format off
asm void func_0203ab44(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r6, r1
    and r1, r7, #0x3
    and r0, r6, #0x3
    mov r5, r2
    mov r4, r7
    cmp r1, r0
    bne L_0203abe4
    rsb r0, r1, #0x4
    and r1, r0, #0x3
    b L_0203ab80
L_0203ab74:
    ldrb r0, [r6], #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
L_0203ab80:
    cmp r1, #0x0
    sub r1, r1, #0x1
    beq L_0203ab98
    cmp r5, #0x0
    sub r5, r5, #0x1
    bne L_0203ab74
L_0203ab98:
    cmp r5, #0x1f
    bls L_0203abc4
    and r0, r5, #0x1f
    sub r8, r5, r0
    mov r0, r4
    mov r1, r6
    mov r2, r8
    bl func_0203a640
    add r4, r4, r8
    add r6, r6, r8
    sub r5, r5, r8
L_0203abc4:
    cmp r5, #0x3
    bls L_0203ac38
L_0203abcc:
    ldr r0, [r6], #0x4
    sub r5, r5, #0x4
    cmp r5, #0x3
    str r0, [r4], #0x4
    bhi L_0203abcc
    b L_0203ac38
L_0203abe4:
    add r0, r1, r0
    ands r0, r0, #0x1
    bne L_0203ac38
    and r1, r1, #0x1
    b L_0203ac04
L_0203abf8:
    ldrb r0, [r6], #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
L_0203ac04:
    cmp r1, #0x0
    sub r1, r1, #0x1
    beq L_0203ac1c
    cmp r5, #0x0
    sub r5, r5, #0x1
    bne L_0203abf8
L_0203ac1c:
    cmp r5, #0x1
    bls L_0203ac38
L_0203ac24:
    ldrsh r0, [r6], #0x2
    sub r5, r5, #0x2
    cmp r5, #0x1
    strh r0, [r4], #0x2
    bhi L_0203ac24
L_0203ac38:
    cmp r5, #0x0
    sub r5, r5, #0x1
    beq L_0203ac5c
L_0203ac44:
    ldrb r0, [r6], #0x1
    cmp r5, #0x0
    sub r5, r5, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    bne L_0203ac44
L_0203ac5c:
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
