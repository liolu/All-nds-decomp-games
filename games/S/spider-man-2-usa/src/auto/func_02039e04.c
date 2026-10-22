#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void func_01ff93d4();
extern void func_01ff9de8();
extern void func_01ffb9d8();
extern void func_020053c8();
extern void func_0203a6cc();
extern void func_0204d468();
extern char data_02124358[];
extern char data_0215f06c[];
// clang-format off
asm void func_02039e04(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x2c
    mov r4, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl func_01ff9de8
    ldr r0, =data_02124358
    ldr ip, =0x362
    ldr lr, =0x363
    str r0, [r4, #0x0]
    add r3, r4, #0x360
    mov r1, #0x0
    ldr r0, =0x361
    swpb r2, r1, [r3]
    add r3, r4, ip
    swpb r2, r5, [r3]
    ldrb r2, [sp, #0x40]
    add r3, r4, lr
    mov r5, #0x4
    swpb r2, r2, [r3]
    mov r2, #0x1000
    str r1, [r4, #0x364]
    str r5, [r4, #0x368]
    str r1, [r4, #0x36c]
    str r2, [r4, #0x358]
    add r2, r4, r0
    swpb r0, r1, [r2]
    add r2, r4, #0x27c
    ldrb r1, [r2, #0x0]
    mov r0, #0xbc
    orr r1, r1, #0x8
    swpb r1, r1, [r2]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_02039e9c
    mov r1, r7
    bl func_0204d468
L_02039e9c:
    str r0, [r4, #0x2f4]
    ldr r0, [r4, #0x2f4]
    add r1, sp, #0x0
    ldr r2, [r0, #0xac]
    mov r0, r4
    add r2, r2, #0x4
    ldr r7, [r2, #0x20]
    ldr ip, [r2, #0x10]
    rsb r3, r7, #0x0
    rsb r2, ip, #0x0
    add r2, r2, r2, lsr #0x1f
    mov r5, r2, asr #0x1
    add r3, r3, r3, lsr #0x1f
    mov r2, r3, asr #0x1
    strh r2, [sp, #0x2]
    strh r5, [sp, #0x0]
    strh ip, [sp, #0x4]
    strh r7, [sp, #0x6]
    ldr r5, [r6, #0x4]
    ldr r3, [r6, #0x0]
    add r2, r7, r7, lsr #0x1f
    str r3, [r4, #0x298]
    sub r2, r5, r2, asr #0x1
    str r2, [r4, #0x29c]
    bl func_01ff93d4
    add r0, r4, #0x200
    ldrh r5, [r0, #0x94]
    ldrh r6, [r0, #0x96]
    ldr r3, [r4, #0x29c]
    ldr r2, [r4, #0x298]
    add r0, r6, r6, lsr #0x1f
    sub r3, r3, r0, asr #0x1
    add r1, r5, r5, lsr #0x1f
    sub r2, r2, r1, asr #0x1
    add r1, sp, #0x8
    mov r0, r4
    str r2, [sp, #0x8]
    str r3, [sp, #0xc]
    str r5, [sp, #0x10]
    str r6, [sp, #0x14]
    bl func_01ff8000
    mov r0, #0x0
    str r0, [r4, #0x35c]
    ldrb r0, [r4, #0x360]
    mov r5, #0x1
    cmp r0, #0x0
    bne L_02039fa4
    add r0, r4, #0x200
    ldrh ip, [r0, #0x94]
    ldrh r2, [r0, #0x96]
    ldr r3, =data_0215f06c
    ldr r6, [r4, #0x298]
    ldr r7, [r4, #0x29c]
    add r1, ip, ip, lsr #0x1f
    sub r6, r6, r1, asr #0x1
    add r0, r2, r2, lsr #0x1f
    sub r7, r7, r0, asr #0x1
    ldr r1, [r3, #0x0]
    add r0, sp, #0x18
    str r6, [sp, #0x18]
    str r7, [sp, #0x1c]
    str ip, [sp, #0x20]
    str r2, [sp, #0x24]
    bl func_020053c8
    cmp r0, #0x0
    moveq r5, #0x0
L_02039fa4:
    add r2, r4, #0x10
    mov r0, r4
    swpb r1, r5, [r2]
    bl func_01ffb9d8
    mov r0, r4
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
