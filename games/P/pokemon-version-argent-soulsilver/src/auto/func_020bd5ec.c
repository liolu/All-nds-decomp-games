#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020bc6e8();
extern void func_020bd5ec();
extern char data_02109438[];
// clang-format off
asm void func_020bd5ec(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x38
    mov r7, r0
    mov r0, r1
    cmp r0, #0x8
    ldr r0, [sp, #0x60]
    str r1, [sp, #0x10]
    str r0, [sp, #0x60]
    str r2, [sp, #0x14]
    ldrlt r0, [sp, #0x10]
    str r3, [sp, #0x34]
    ldr r6, [sp, #0x64]
    ldr r5, [sp, #0x68]
    ldr r4, [sp, #0x6c]
    movge r2, #0x3
    clzlt r0, r0
    rsblt r2, r0, #0x1f
    ldr r0, [sp, #0x14]
    cmp r0, #0x8
    ldrlt r0, [sp, #0x14]
    movge r1, #0x3
    clzlt r0, r0
    rsblt r1, r0, #0x1f
    ldr r0, =data_02109438
    mvn r3, #0x0
    add r1, r0, r1, lsl #0x3
    add r0, r1, r2, lsl #0x1
    ldrb r11, [r1, r2, lsl #0x1]
    ldrb r1, [r0, #0x1]
    ldr r2, [sp, #0x14]
    cmp r6, #0x0
    str r1, [sp, #0x30]
    ldr r1, [sp, #0x10]
    and r1, r1, r3, lsl r11
    str r1, [sp, #0x2c]
    ldr r1, [sp, #0x30]
    and r1, r2, r3, lsl r1
    str r1, [sp, #0x28]
    moveq r1, #0x1
    streq r1, [sp, #0x18]
    movne r1, #0x2
    strne r1, [sp, #0x18]
    mov r1, #0x0
    str r1, [sp, #0x24]
    bl func_020bc6e8
    ldr r1, [sp, #0x10]
    ldr r2, [sp, #0x14]
    mov r9, r1, asr r11
    ldr r1, [sp, #0x30]
    mov r1, r2, asr r1
    str r1, [sp, #0x20]
    ldr r1, [sp, #0x18]
    mov r2, r1, lsl r11
    ldr r1, [sp, #0x30]
    mov r8, r2, lsl r1
    mov r1, #0x0
    str r1, [sp, #0x1c]
    b L_020bd76c
L_020bd6d4:
    ldr r2, [sp, #0x1c]
    ldr r1, [sp, #0x30]
    mov r10, #0x0
    mov r2, r2, lsl r1
    ldr r1, [sp, #0x60]
    add r1, r1, r2, lsl #0x3
    mov r2, #0x400
    and r3, r1, #0xff
    rsb r2, r2, #0x0
    b L_020bd758
L_020bd6fc:
    mov ip, r10, lsl r11
    ldr r1, [sp, #0x34]
    add r10, r10, #0x1
    add r1, r1, ip, lsl #0x3
    mov lr, r1, lsl #0x17
    ldr ip, [r7, #0x0]
    ldr r1, =0xfe00ff00
    and r1, ip, r1
    orr r1, r1, r3
    orr ip, r1, lr, lsr #0x7
    ldr r1, =0x3fff3fff
    and r1, ip, r1
    orr r1, r1, r0
    str r1, [r7, #0x0]
    ldrh r1, [r7, #0x4]
    and r1, r1, r2
    orr r1, r1, r5
    strh r1, [r7, #0x4]
    ldr r1, [r7, #0x0]
    add r5, r5, r8, asr r4
    bic r1, r1, #0x2000
    orr r1, r1, r6, lsl #0xd
    str r1, [r7], #0x8
L_020bd758:
    cmp r10, r9
    blt L_020bd6fc
    ldr r1, [sp, #0x1c]
    add r1, r1, #0x1
    str r1, [sp, #0x1c]
L_020bd76c:
    ldr r2, [sp, #0x1c]
    ldr r1, [sp, #0x20]
    cmp r2, r1
    blt L_020bd6d4
    ldr r0, [sp, #0x24]
    mla r0, r9, r1, r0
    str r0, [sp, #0x24]
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    bhs L_020bd7f4
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x10]
    stmia sp, {r0, r6}
    ldr r0, [sp, #0x2c]
    ldr r2, [sp, #0x2c]
    sub r8, r1, r0
    ldr r1, [sp, #0x34]
    str r5, [sp, #0x8]
    add r3, r1, r2, lsl #0x3
    ldr r2, [sp, #0x28]
    mov r0, r7
    mov r1, r8
    str r4, [sp, #0xc]
    bl func_020bd5ec
    ldr r1, [sp, #0x18]
    add r7, r7, r0, lsl #0x3
    mul r2, r1, r8
    ldr r1, [sp, #0x28]
    mul r2, r1, r2
    ldr r1, [sp, #0x24]
    add r5, r5, r2, lsr r4
    add r0, r1, r0
    str r0, [sp, #0x24]
L_020bd7f4:
    ldr r1, [sp, #0x28]
    ldr r0, [sp, #0x14]
    cmp r1, r0
    bhs L_020bd860
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x28]
    ldr r3, [sp, #0x34]
    add r0, r1, r0, lsl #0x3
    stmia sp, {r0, r6}
    str r5, [sp, #0x8]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x28]
    str r4, [sp, #0xc]
    sub r8, r1, r0
    ldr r1, [sp, #0x2c]
    mov r0, r7
    mov r2, r8
    bl func_020bd5ec
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x2c]
    add r7, r7, r0, lsl #0x3
    mul r1, r2, r1
    mul r1, r8, r1
    add r5, r5, r1, lsr r4
    ldr r1, [sp, #0x24]
    add r0, r1, r0
    str r0, [sp, #0x24]
L_020bd860:
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    ldrlo r1, [sp, #0x28]
    ldrlo r0, [sp, #0x14]
    cmplo r1, r0
    bhs L_020bd8cc
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x28]
    ldr r2, [sp, #0x10]
    add r0, r1, r0, lsl #0x3
    stmia sp, {r0, r6}
    str r5, [sp, #0x8]
    ldr r1, [sp, #0x2c]
    ldr r3, [sp, #0x14]
    sub r1, r2, r1
    ldr r2, [sp, #0x28]
    ldr r5, [sp, #0x2c]
    sub r2, r3, r2
    ldr r3, [sp, #0x34]
    mov r0, r7
    add r3, r3, r5, lsl #0x3
    str r4, [sp, #0xc]
    bl func_020bd5ec
    ldr r1, [sp, #0x24]
    add r0, r1, r0
    str r0, [sp, #0x24]
L_020bd8cc:
    ldr r0, [sp, #0x24]
    add sp, sp, #0x38
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
