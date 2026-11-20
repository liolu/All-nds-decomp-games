#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02042608(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    add ip, r0, #0x1000
    ldr r1, [ip, #0x6b4]
    cmp r1, #0x10
    bne L_02042684
    add r5, r0, #0x14
    ldr r1, [r5, #0x0]
    ldr r2, [r0, #0x14]
    add r1, r1, #0x1
    str r1, [r5, #0x0]
    add r3, r0, #0x1600
    ldr r1, [r0, #0x8]
    ldrh r4, [r3, #0xb0]
    add r2, r1, r2
    mov lr, #0x0
    swpb r1, r4, [r2]
    ldr r4, [r0, #0x14]
    ldr r1, [r5, #0x0]
    add sp, sp, #0x4
    add r1, r1, #0x1
    str r1, [r5, #0x0]
    ldrh r1, [r3, #0xb0]
    ldr r0, [r0, #0x8]
    mov r2, r1, asr #0x8
    add r1, r0, r4
    swpb r0, r2, [r1]
    strh lr, [r3, #0xb0]
    str lr, [ip, #0x6b4]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02042684:
    cmp r1, #0x8
    addlt sp, sp, #0x4
    ldmltfd sp!, {r4, r5, lr}
    bxlt lr
    add r2, r0, #0x14
    ldr r1, [r2, #0x0]
    ldr r3, [r0, #0x14]
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    add r1, r0, #0x1600
    ldr r2, [r0, #0x8]
    ldrh r1, [r1, #0xb0]
    add r2, r2, r3
    ldr r3, =0x16b0
    swpb r1, r1, [r2]
    add r3, r0, r3
    ldrh r2, [r3, #0x0]
    ldr r1, =0x16b4
    mov r2, r2, asr #0x8
    strh r2, [r3, #0x0]
    add r1, r0, r1
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x8
    str r0, [r1, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
