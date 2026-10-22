#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02043990();
extern char data_02084a44[];
// clang-format off
asm void func_02043514(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r4, r0
    add r0, r4, #0x1000
    ldr r5, [r0, #0x6b4]
    str r1, [sp, #0x0]
    str r2, [sp, #0x4]
    cmp r5, #0xb
    ble L_020435d4
    ldr r1, =0x16b0
    mvn r2, #0x100
    add r8, r4, r1
    ldr r1, [sp, #0x0]
    ldrh r7, [r8, #0x0]
    add r1, r1, r2
    mov r6, r1, lsl #0x10
    orr r1, r7, r1, lsl r5
    strh r1, [r8, #0x0]
    add r2, r4, #0x14
    ldr r1, [r2, #0x0]
    ldr r5, [r4, #0x14]
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    add r7, r4, #0x1600
    ldr r1, [r4, #0x8]
    ldrh r9, [r7, #0xb0]
    add r5, r1, r5
    ldr r8, =0x16b4
    swpb r1, r9, [r5]
    ldr r5, [r2, #0x0]
    ldr r1, [r4, #0x14]
    add r5, r5, #0x1
    str r5, [r2, #0x0]
    ldr r2, [r4, #0x8]
    ldrh r9, [r7, #0xb0]
    add r5, r4, r8
    add r2, r2, r1
    mov r8, r9, asr #0x8
    swpb r1, r8, [r2]
    mov r6, r6, lsr #0x10
    ldr r0, [r0, #0x6b4]
    rsb r0, r0, #0x10
    mov r0, r6, asr r0
    strh r0, [r7, #0xb0]
    ldr r0, [r5, #0x0]
    sub r0, r0, #0xb
    str r0, [r5, #0x0]
    b L_02043608
L_020435d4:
    ldr r0, =0x16b0
    mvn r1, #0x100
    add r6, r4, r0
    ldr r0, [sp, #0x0]
    ldrh r2, [r6, #0x0]
    add r1, r0, r1
    ldr r0, =0x16b4
    orr r1, r2, r1, lsl r5
    strh r1, [r6, #0x0]
    add r1, r4, r0
    ldr r0, [r1, #0x0]
    add r0, r0, #0x5
    str r0, [r1, #0x0]
L_02043608:
    add r0, r4, #0x1000
    ldr r1, [r0, #0x6b4]
    cmp r1, #0xb
    ble L_020436b0
    ldr r5, =0x16b0
    ldr r2, [sp, #0x4]
    add r6, r4, r5
    sub r7, r2, #0x1
    ldrh r2, [r6, #0x0]
    mov r5, r7, lsl #0x10
    ldr r8, =0x16b4
    orr r1, r2, r7, lsl r1
    strh r1, [r6, #0x0]
    add r2, r4, #0x14
    ldr r1, [r2, #0x0]
    ldr r6, [r4, #0x14]
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    add r7, r4, #0x1600
    ldr r1, [r4, #0x8]
    ldrh r9, [r7, #0xb0]
    add r6, r1, r6
    mov r1, r5, lsr #0x10
    swpb r5, r9, [r6]
    ldr r9, [r4, #0x14]
    ldr r5, [r2, #0x0]
    add r6, r4, r8
    add r5, r5, #0x1
    str r5, [r2, #0x0]
    ldrh r5, [r7, #0xb0]
    ldr r2, [r4, #0x8]
    mov r8, r5, asr #0x8
    add r5, r2, r9
    swpb r2, r8, [r5]
    ldr r0, [r0, #0x6b4]
    rsb r0, r0, #0x10
    mov r0, r1, asr r0
    strh r0, [r7, #0xb0]
    ldr r0, [r6, #0x0]
    sub r0, r0, #0xb
    str r0, [r6, #0x0]
    b L_020436e0
L_020436b0:
    ldr r0, =0x16b0
    ldr r2, =0x16b4
    add r6, r4, r0
    ldr r0, [sp, #0x4]
    ldrh r5, [r6, #0x0]
    sub r0, r0, #0x1
    add r2, r4, r2
    orr r0, r5, r0, lsl r1
    strh r0, [r6, #0x0]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x5
    str r0, [r2, #0x0]
L_020436e0:
    add r0, r4, #0x1000
    ldr r1, [r0, #0x6b4]
    cmp r1, #0xc
    ble L_02043784
    ldr r2, =0x16b0
    sub r7, r3, #0x4
    add r6, r4, r2
    ldrh r2, [r6, #0x0]
    mov r5, r7, lsl #0x10
    ldr r8, =0x16b4
    orr r1, r2, r7, lsl r1
    strh r1, [r6, #0x0]
    add r2, r4, #0x14
    ldr r1, [r2, #0x0]
    ldr r6, [r4, #0x14]
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    add r7, r4, #0x1600
    ldr r1, [r4, #0x8]
    ldrh r9, [r7, #0xb0]
    add r6, r1, r6
    mov r1, r5, lsr #0x10
    swpb r5, r9, [r6]
    add r6, r4, r8
    ldr r5, [r2, #0x0]
    ldr r9, [r4, #0x14]
    add r5, r5, #0x1
    str r5, [r2, #0x0]
    ldrh r5, [r7, #0xb0]
    ldr r2, [r4, #0x8]
    mov r8, r5, asr #0x8
    add r5, r2, r9
    swpb r2, r8, [r5]
    ldr r0, [r0, #0x6b4]
    rsb r0, r0, #0x10
    mov r0, r1, asr r0
    strh r0, [r7, #0xb0]
    ldr r0, [r6, #0x0]
    sub r0, r0, #0xc
    str r0, [r6, #0x0]
    b L_020437b0
L_02043784:
    ldr r0, =0x16b0
    ldr r2, =0x16b4
    add r6, r4, r0
    ldrh r5, [r6, #0x0]
    sub r0, r3, #0x4
    add r2, r4, r2
    orr r0, r5, r0, lsl r1
    strh r0, [r6, #0x0]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x4
    str r0, [r2, #0x0]
L_020437b0:
    cmp r3, #0x0
    mov r10, #0x0
    ble L_020438b4
    ldr r0, =0x16b0
    ldr r9, =data_02084a44
    ldr r11, =0x16b4
    add r2, r4, r0
L_020437cc:
    add r1, r4, #0x1000
    ldr ip, [r1, #0x6b4]
    cmp ip, #0xd
    ble L_02043878
    ldrb r7, [r9, #0x0]
    ldr r0, =0x16b0
    add r6, r4, r0
    add r0, r4, r7, lsl #0x2
    add r0, r0, #0xa00
    ldrh r8, [r0, #0x76]
    ldrh r5, [r6, #0x0]
    add r7, r4, #0x14
    add r0, r4, #0x1600
    orr r5, r5, r8, lsl ip
    strh r5, [r6, #0x0]
    mov r6, r8, lsl #0x10
    ldr r5, [r7, #0x0]
    ldr r8, [r4, #0x14]
    add r5, r5, #0x1
    str r5, [r7, #0x0]
    mov lr, r6, lsr #0x10
    ldr r5, [r4, #0x8]
    ldrh r6, [r0, #0xb0]
    add r5, r5, r8
    add ip, r4, r11
    swpb r6, r6, [r5]
    ldr r5, [r7, #0x0]
    ldr r6, [r4, #0x14]
    add r5, r5, #0x1
    str r5, [r7, #0x0]
    ldrh r5, [r0, #0xb0]
    ldr r7, [r4, #0x8]
    add r6, r7, r6
    mov r5, r5, asr #0x8
    swpb r5, r5, [r6]
    ldr r1, [r1, #0x6b4]
    rsb r1, r1, #0x10
    mov r1, lr, asr r1
    strh r1, [r0, #0xb0]
    ldr r0, [ip, #0x0]
    sub r0, r0, #0xd
    str r0, [ip, #0x0]
    b L_020438a4
L_02043878:
    ldrb r0, [r9, #0x0]
    ldrh r5, [r2, #0x0]
    add r1, r4, r11
    add r0, r4, r0, lsl #0x2
    add r0, r0, #0xa00
    ldrh r0, [r0, #0x76]
    orr r0, r5, r0, lsl ip
    strh r0, [r2, #0x0]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x3
    str r0, [r1, #0x0]
L_020438a4:
    add r10, r10, #0x1
    cmp r10, r3
    add r9, r9, #0x1
    blt L_020437cc
L_020438b4:
    ldr r2, [sp, #0x0]
    mov r0, r4
    add r1, r4, #0x8c
    sub r2, r2, #0x1
    bl func_02043990
    ldr r2, [sp, #0x4]
    mov r0, r4
    add r1, r4, #0x980
    sub r2, r2, #0x1
    bl func_02043990
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
