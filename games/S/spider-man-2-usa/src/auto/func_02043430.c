#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02042440();
// clang-format off
asm void func_02043430(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    add ip, r0, #0x1000
    ldr lr, [ip, #0x6b4]
    cmp lr, #0xd
    ble L_020434d4
    ldr r4, =0x16b0
    mov r6, r3, lsl #0x10
    add r7, r0, r4
    ldrh r5, [r7, #0x0]
    ldr r8, =0x16b4
    add r4, r0, #0x14
    orr r3, r5, r3, lsl lr
    strh r3, [r7, #0x0]
    ldr r3, [r4, #0x0]
    ldr r5, [r0, #0x14]
    add r3, r3, #0x1
    str r3, [r4, #0x0]
    add r7, r0, #0x1600
    ldr r3, [r0, #0x8]
    ldrh lr, [r7, #0xb0]
    add r5, r3, r5
    mov r3, r6, lsr #0x10
    swpb lr, lr, [r5]
    add r6, r0, r8
    ldr r5, [r4, #0x0]
    ldr lr, [r0, #0x14]
    add r5, r5, #0x1
    str r5, [r4, #0x0]
    ldrh r5, [r7, #0xb0]
    ldr r4, [r0, #0x8]
    mov r8, r5, asr #0x8
    add r5, r4, lr
    swpb r4, r8, [r5]
    ldr r4, [ip, #0x6b4]
    rsb r4, r4, #0x10
    mov r3, r3, asr r4
    strh r3, [r7, #0xb0]
    ldr r3, [r6, #0x0]
    sub r3, r3, #0xd
    str r3, [r6, #0x0]
    b L_020434fc
L_020434d4:
    ldr r4, =0x16b0
    ldr ip, =0x16b4
    add r6, r0, r4
    ldrh r5, [r6, #0x0]
    add r4, r0, ip
    orr r3, r5, r3, lsl lr
    strh r3, [r6, #0x0]
    ldr r3, [r4, #0x0]
    add r3, r3, #0x3
    str r3, [r4, #0x0]
L_020434fc:
    mov r3, #0x1
    bl func_02042440
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
