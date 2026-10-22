#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203660c();
extern void func_02053f1c();
extern void func_02055a90();
extern char data_0215b3d4[];
// clang-format off
asm void func_020453a8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    ldr r1, =data_0215b3d4
    mov r4, r0
    ldr r0, [r1, #0x64]
    cmp r0, #0x14
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    ldr r1, =0x4000440
    mov r7, #0x1
    ldr r0, =0x4000444
    str r7, [r1, #0x0]
    mov r6, #0x0
    str r6, [r0, #0x0]
    ldr r5, [r4, #0x30]
    ldr r3, [r4, #0x2c]
    ldr r2, [r4, #0x28]
    ldr r0, =0x4000470
    ldr r1, =0x40005c4
    str r2, [r0, #0x0]
    str r3, [r0, #0x0]
    str r5, [r0, #0x0]
    str r6, [r1, #0x0]
    ldr r0, =0x4000448
    str r6, [r1, #0x0]
    str r7, [r0, #0x0]
    add r1, r4, #0x24
    swpb r0, r7, [r1]
    add r6, sp, #0x4
    add r5, sp, #0x0
L_02045424:
    mov r0, r6
    mov r1, r5
    bl func_02055a90
    cmp r0, #0x0
    bne L_02045424
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    ble L_02045520
    mov r1, r0, lsl #0x1
    mov r0, #0x1000
    bl func_02053f1c
    ldr r3, [sp, #0x0]
    ldr r2, [sp, #0x4]
    ldr r1, [sp, #0x8]
    add r2, r2, r3
    add r1, r1, r3
    smull r3, r5, r2, r0
    mov lr, #0x800
    adds r6, r3, lr
    mov r3, #0x400
    smull r2, r0, r1, r0
    adc r5, r5, #0x0
    adds r1, r2, lr
    mov r2, r6, lsr #0xc
    orr r2, r2, r5, lsl #0x14
    adc r5, r0, #0x0
    mov r1, r1, lsr #0xc
    rsb r0, r3, #0x0
    cmp r2, r0
    orr r1, r1, r5, lsl #0x14
    mov r5, #0x0
    blt L_02045520
    cmp r2, #0x1400
    bgt L_02045520
    cmp r1, r0
    blt L_02045520
    cmp r1, #0x1400
    bgt L_02045520
    mov r3, #0xff000
    umull r0, r8, r2, r3
    mov ip, #0xbf000
    umull r7, r6, r1, ip
    adds r0, r0, lr
    mla r8, r2, r5, r8
    mov r2, r2, asr #0x1f
    mla r8, r2, r3, r8
    adc r3, r8, r5
    adds r2, r7, lr
    mov r0, r0, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    mov r3, r0, asr #0xc
    mla r6, r1, r5, r6
    mov r0, r1, asr #0x1f
    mla r6, r0, ip, r6
    adc r0, r6, r5
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r1, asr #0xc
    str r3, [r4, #0x4]
    rsb r0, r0, #0xbf
    str r0, [r4, #0x8]
    add r1, r4, #0x24
    swpb r0, r5, [r1]
L_02045520:
    mov r0, r4
    bl func_0203660c
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
