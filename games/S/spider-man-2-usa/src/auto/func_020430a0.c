#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02042608();
extern char data_020853f4[];
// clang-format off
asm void func_020430a0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r7, r0
    add r6, r7, #0x1000
    ldr r2, [r6, #0x6b4]
    cmp r2, #0xd
    ble L_02043148
    ldr r0, =0x16b0
    ldr r5, =0x16b4
    add r4, r7, r0
    ldrh r3, [r4, #0x0]
    mov r1, #0x2
    add r0, r7, #0x14
    orr r2, r3, r1, lsl r2
    strh r2, [r4, #0x0]
    ldr r2, [r0, #0x0]
    ldr r3, [r7, #0x14]
    add r2, r2, #0x1
    str r2, [r0, #0x0]
    add r4, r7, #0x1600
    ldr r2, [r7, #0x8]
    ldrh r8, [r4, #0xb0]
    add r3, r2, r3
    add r5, r7, r5
    swpb r2, r8, [r3]
    ldr r2, [r0, #0x0]
    ldr r8, [r7, #0x14]
    add r2, r2, #0x1
    str r2, [r0, #0x0]
    ldrh r2, [r4, #0xb0]
    ldr r0, [r7, #0x8]
    mov r3, r2, asr #0x8
    add r2, r0, r8
    swpb r0, r3, [r2]
    ldr r0, [r6, #0x6b4]
    rsb r0, r0, #0x10
    mov r0, r1, asr r0
    strh r0, [r4, #0xb0]
    ldr r0, [r5, #0x0]
    sub r0, r0, #0xd
    str r0, [r5, #0x0]
    b L_02043174
L_02043148:
    ldr r0, =0x16b0
    ldr r1, =0x16b4
    add r4, r7, r0
    ldrh r3, [r4, #0x0]
    mov r0, #0x2
    add r1, r7, r1
    orr r0, r3, r0, lsl r2
    strh r0, [r4, #0x0]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3
    str r0, [r1, #0x0]
L_02043174:
    ldr r3, =data_020853f4
    add r2, r7, #0x1000
    ldrh r6, [r3, #0x2]
    ldr r0, [r2, #0x6b4]
    rsb r4, r6, #0x10
    cmp r0, r4
    ble L_02043228
    ldr r1, =0x16b0
    ldrh r5, [r3, #0x0]
    add r8, r7, r1
    ldrh r3, [r8, #0x0]
    mov r9, r5, lsl #0x10
    ldr r1, =0x16b4
    orr r0, r3, r5, lsl r0
    strh r0, [r8, #0x0]
    add ip, r7, #0x14
    ldr r0, [ip, #0x0]
    ldr r3, [r7, #0x14]
    add r0, r0, #0x1
    str r0, [ip, #0x0]
    add r0, r7, #0x1600
    ldr lr, [r7, #0x8]
    ldrh r8, [r0, #0xb0]
    add lr, lr, r3
    mov r3, r9, lsr #0x10
    swpb r8, r8, [lr]
    add r1, r7, r1
    ldr r9, [ip, #0x0]
    ldr r8, [r7, #0x14]
    add r9, r9, #0x1
    str r9, [ip, #0x0]
    ldrh lr, [r0, #0xb0]
    ldr ip, [r7, #0x8]
    sub r9, r6, #0x10
    mov lr, lr, asr #0x8
    add ip, ip, r8
    swpb r8, lr, [ip]
    ldr r2, [r2, #0x6b4]
    rsb r2, r2, #0x10
    mov r2, r3, asr r2
    strh r2, [r0, #0xb0]
    ldr r0, [r1, #0x0]
    add r0, r0, r9
    str r0, [r1, #0x0]
    b L_02043254
L_02043228:
    ldr r1, =0x16b0
    ldr r2, =0x16b4
    add r8, r7, r1
    ldrh r5, [r3, #0x0]
    ldrh r3, [r8, #0x0]
    add r1, r7, r2
    orr r0, r3, r5, lsl r0
    strh r0, [r8, #0x0]
    ldr r0, [r1, #0x0]
    add r0, r0, r6
    str r0, [r1, #0x0]
L_02043254:
    mov r0, r7
    bl func_02042608
    add r2, r7, #0x1000
    ldr r1, [r2, #0x6ac]
    ldr r0, [r2, #0x6b4]
    add r1, r1, #0xb
    sub r1, r1, r0
    cmp r1, #0x9
    bge L_0204340c
    cmp r0, #0xd
    ble L_0204330c
    ldr r3, =0x16b0
    ldr r1, =0x16b4
    add r9, r7, r3
    ldrh r3, [r9, #0x0]
    mov r8, #0x2
    add ip, r7, #0x14
    orr r0, r3, r8, lsl r0
    strh r0, [r9, #0x0]
    ldr r0, [ip, #0x0]
    ldr lr, [r7, #0x14]
    add r0, r0, #0x1
    str r0, [ip, #0x0]
    add r0, r7, #0x1600
    ldr r9, [r7, #0x8]
    ldrh r3, [r0, #0xb0]
    add lr, r9, lr
    add r1, r7, r1
    swpb r3, r3, [lr]
    ldr r9, [ip, #0x0]
    ldr r3, [r7, #0x14]
    add r9, r9, #0x1
    str r9, [ip, #0x0]
    ldrh ip, [r0, #0xb0]
    ldr r9, [r7, #0x8]
    mov lr, ip, asr #0x8
    add ip, r9, r3
    swpb r3, lr, [ip]
    ldr r2, [r2, #0x6b4]
    rsb r2, r2, #0x10
    mov r2, r8, asr r2
    strh r2, [r0, #0xb0]
    ldr r0, [r1, #0x0]
    sub r0, r0, #0xd
    str r0, [r1, #0x0]
    b L_02043338
L_0204330c:
    ldr r1, =0x16b0
    ldr r2, =0x16b4
    add r9, r7, r1
    ldrh r8, [r9, #0x0]
    mov r3, #0x2
    add r1, r7, r2
    orr r0, r8, r3, lsl r0
    strh r0, [r9, #0x0]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3
    str r0, [r1, #0x0]
L_02043338:
    add r0, r7, #0x1000
    ldr r1, [r0, #0x6b4]
    cmp r1, r4
    ble L_020433dc
    ldr r2, =0x16b0
    mov r8, r5, lsl #0x10
    add r4, r7, r2
    ldrh r2, [r4, #0x0]
    ldr ip, =0x16b4
    add r3, r7, #0x14
    orr r1, r2, r5, lsl r1
    strh r1, [r4, #0x0]
    ldr r1, [r3, #0x0]
    ldr r4, [r7, #0x14]
    add r1, r1, #0x1
    str r1, [r3, #0x0]
    add r5, r7, #0x1600
    ldr r1, [r7, #0x8]
    ldrh r2, [r5, #0xb0]
    add r4, r1, r4
    mov r1, r8, lsr #0x10
    swpb r2, r2, [r4]
    add r8, r7, ip
    ldr r4, [r3, #0x0]
    ldr r2, [r7, #0x14]
    add r4, r4, #0x1
    str r4, [r3, #0x0]
    ldrh r9, [r5, #0xb0]
    ldr r3, [r7, #0x8]
    sub r4, r6, #0x10
    mov r6, r9, asr #0x8
    add r3, r3, r2
    swpb r2, r6, [r3]
    ldr r0, [r0, #0x6b4]
    rsb r0, r0, #0x10
    mov r0, r1, asr r0
    strh r0, [r5, #0xb0]
    ldr r0, [r8, #0x0]
    add r0, r0, r4
    str r0, [r8, #0x0]
    b L_02043404
L_020433dc:
    ldr r0, =0x16b0
    ldr r2, =0x16b4
    add r3, r7, r0
    ldrh r0, [r3, #0x0]
    add r2, r7, r2
    orr r0, r0, r5, lsl r1
    strh r0, [r3, #0x0]
    ldr r0, [r2, #0x0]
    add r0, r0, r6
    str r0, [r2, #0x0]
L_02043404:
    mov r0, r7
    bl func_02042608
L_0204340c:
    add r0, r7, #0x1000
    mov r1, #0x7
    str r1, [r0, #0x6ac]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
