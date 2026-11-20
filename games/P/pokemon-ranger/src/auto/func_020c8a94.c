#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020c8a94(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    ldr r3, [r0, #0x0]
    ldr r4, [r0, #0x4]
    ldrb r5, [r0, #0xb]
    ldrb r6, [r0, #0xc]
    ldrb r7, [r0, #0xd]
    ldrb r8, [r0, #0xe]
L_020c8ab0:
    cmp r4, #0x0
    ble L_020c8b70
    cmp r6, #0x0
    beq L_020c8b58
L_020c8ac0:
    cmp r2, #0x0
    beq L_020c8b70
    tst r5, #0x80
    bne L_020c8ae8
    ldrb r9, [r1], #0x1
    sub r4, r4, #0x1
    sub r2, r2, #0x1
    swpb r9, r9, [r3]
    add r3, r3, #0x1
    b L_020c8b44
L_020c8ae8:
    cmp r8, #0x0
    bne L_020c8afc
    ldrb r7, [r1], #0x1
    mov r8, #0x1
    sub r2, r2, #0x1
L_020c8afc:
    cmp r2, #0x0
    beq L_020c8b70
    and r9, r7, #0xf
    mov r10, r9, lsl #0x8
    ldrb r9, [r1], #0x1
    mov r8, #0x0
    sub r2, r2, #0x1
    orr r9, r9, r10
    add r9, r9, #0x1
    mov r10, #0x3
    adds r7, r10, r7, asr #0x4
    beq L_020c8b44
L_020c8b2c:
    ldrb r10, [r3, -r9]
    sub r4, r4, #0x1
    swpb r10, r10, [r3]
    add r3, r3, #0x1
    subs r7, r7, #0x1
    bgt L_020c8b2c
L_020c8b44:
    cmp r4, #0x0
    beq L_020c8b70
    mov r5, r5, lsl #0x1
    subs r6, r6, #0x1
    bne L_020c8ac0
L_020c8b58:
    cmp r2, #0x0
    beq L_020c8b70
    ldrb r5, [r1], #0x1
    mov r6, #0x8
    sub r2, r2, #0x1
    b L_020c8ab0
L_020c8b70:
    str r3, [r0, #0x0]
    str r4, [r0, #0x4]
    strb r5, [r0, #0xb]
    strb r6, [r0, #0xc]
    strb r7, [r0, #0xd]
    strb r8, [r0, #0xe]
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    bx lr
}
// clang-format on
