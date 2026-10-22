#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02019d48(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r2, [r0, #0x8]
    add r3, r0, #0x8
    cmp r2, r1
    movlo r1, r2
    ldr r2, [r3, #0x0]
    mov r11, r1
    sub r2, r2, r1
    str r2, [r3, #0x0]
    cmp r1, #0x0
    beq L_02019ee8
    add r2, r0, #0xc
    add r7, r0, #0x19
    add r3, r0, #0x10
    mov r9, #0x80
    ldr r6, =0xfff
    add ip, sp, #0x1
    add lr, sp, #0x0
    add r4, r0, #0x18
L_02019d98:
    ldr r5, [r0, #0x14]
    cmp r5, #0x0
    beq L_02019e08
    ldr r5, [r3, #0x0]
    ldr r8, [r0, #0x10]
    add r5, r5, #0x1
    str r5, [r3, #0x0]
    ldr r10, [r2, #0x0]
    ldr r5, [r0, #0xc]
    add r10, r10, #0x1
    str r10, [r2, #0x0]
    add r8, r0, r8
    add r5, r0, r5
    ldrb r10, [r8, #0x1a]
    add r5, r5, #0x1a
    add r8, r0, #0x14
    swpb r10, r10, [r5]
    sub r1, r1, #0x1
    ldr r5, [r2, #0x0]
    and r5, r5, r6
    str r5, [r2, #0x0]
    ldr r5, [r3, #0x0]
    and r5, r5, r6
    str r5, [r3, #0x0]
    ldr r5, [r8, #0x0]
    sub r5, r5, #0x1
    str r5, [r8, #0x0]
    b L_02019ee0
L_02019e08:
    ldrb r5, [r0, #0x19]
    cmp r5, #0x0
    bne L_02019e2c
    ldr r8, [r0, #0x0]
    add r5, r8, #0x1
    str r5, [r0, #0x0]
    ldrb r5, [r8, #0x0]
    swpb r5, r5, [r4]
    swpb r5, r9, [r7]
L_02019e2c:
    ldrb r8, [r0, #0x18]
    ldrb r5, [r0, #0x19]
    ands r5, r8, r5
    beq L_02019e98
    ldr r8, [r0, #0x0]
    add r5, r8, #0x1
    str r5, [r0, #0x0]
    ldrb r5, [r8, #0x0]
    swpb r5, r5, [ip]
    ldr r8, [r0, #0x0]
    add r5, r8, #0x1
    str r5, [r0, #0x0]
    ldrb r5, [r8, #0x0]
    swpb r5, r5, [lr]
    ldrh r8, [sp, #0x0]
    ldr r5, [r0, #0xc]
    mov r8, r8, lsl #0x14
    sub r5, r5, r8, lsr #0x14
    sub r5, r5, #0x1
    and r5, r5, r6
    str r5, [r0, #0x10]
    ldrh r5, [sp, #0x0]
    mov r5, r5, lsl #0x10
    mov r5, r5, lsr #0x1c
    add r5, r5, #0x3
    str r5, [r0, #0x14]
    b L_02019ed4
L_02019e98:
    ldr r8, [r0, #0x0]
    sub r1, r1, #0x1
    add r5, r8, #0x1
    str r5, [r0, #0x0]
    ldr r10, [r2, #0x0]
    ldr r5, [r0, #0xc]
    add r10, r10, #0x1
    str r10, [r2, #0x0]
    ldrb r8, [r8, #0x0]
    add r5, r0, r5
    add r5, r5, #0x1a
    swpb r8, r8, [r5]
    ldr r5, [r2, #0x0]
    and r5, r5, r6
    str r5, [r2, #0x0]
L_02019ed4:
    ldrb r5, [r7, #0x0]
    mov r5, r5, asr #0x1
    swpb r5, r5, [r7]
L_02019ee0:
    cmp r1, #0x0
    bne L_02019d98
L_02019ee8:
    mov r0, r11
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
