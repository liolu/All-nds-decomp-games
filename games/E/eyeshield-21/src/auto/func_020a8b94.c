#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a8b94();
extern void func_020aa230();
extern char data_020d9330[];
// clang-format off
asm void func_020a8b94(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r6, r0
    mov r0, r1
    cmp r0, #0x8
    ldr r0, [sp, #0x60]
    str r2, [sp, #0x10]
    str r0, [sp, #0x60]
    movlt r0, r1
    str r1, [sp, #0xc]
    str r3, [sp, #0x34]
    ldr r5, [sp, #0x64]
    ldr r4, [sp, #0x68]
    movge r2, #0x3
    clzlt r0, r0
    rsblt r2, r0, #0x1f
    ldr r0, [sp, #0x10]
    cmp r0, #0x8
    movge r1, #0x3
    clzlt r0, r0
    rsblt r1, r0, #0x1f
    ldr r0, =data_020d9330
    mvn r3, #0x0
    add r1, r0, r1, lsl #0x3
    add r0, r1, r2, lsl #0x1
    ldrb r1, [r1, r2, lsl #0x1]
    cmp r5, #0x0
    moveq r11, #0x1
    str r1, [sp, #0x14]
    ldrb r1, [r0, #0x1]
    ldr r2, [sp, #0xc]
    movne r11, #0x2
    str r1, [sp, #0x18]
    ldr r1, [sp, #0x14]
    and r1, r2, r3, lsl r1
    str r1, [sp, #0x1c]
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x18]
    and r1, r2, r3, lsl r1
    str r1, [sp, #0x20]
    mov r1, #0x0
    str r1, [sp, #0x24]
    bl func_020aa230
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x14]
    mov r10, r2, asr r1
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x18]
    mov r1, r2, asr r1
    str r1, [sp, #0x28]
    mov r1, #0x0
    str r1, [sp, #0x2c]
    str r1, [sp, #0x30]
    b L_020a8d18
L_020a8c6c:
    ldr r2, [sp, #0x2c]
    ldr r1, [sp, #0x18]
    ldr r9, [sp, #0x30]
    mov r8, r2, lsl r1
    ldr r1, [sp, #0x60]
    add r7, r1, r8, lsl #0x3
    b L_020a8d04
L_020a8c88:
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x34]
    mov r1, r9, lsl r1
    add r3, r2, r1, lsl #0x3
    ldr r2, =0x1ff
    add r9, r9, #0x1
    and ip, r3, r2
    add r2, r4, r8, lsl #0x5
    mla lr, r1, r11, r2
    ldr r3, [r6, #0x0]
    ldr r1, =0xfe00ff00
    and r2, r7, #0xff
    and r1, r3, r1
    orr r1, r1, r2
    orr r1, r1, ip, lsl #0x10
    str r1, [r6, #0x0]
    ldr r3, [r6, #0x0]
    ldr r1, =0x3fff3fff
    mov r2, #0x400
    and r1, r3, r1
    orr r1, r1, r0
    str r1, [r6, #0x0]
    rsb r1, r2, #0x0
    ldrh r2, [r6, #0x4]
    and r1, r2, r1
    orr r1, r1, lr
    strh r1, [r6, #0x4]
    ldr r1, [r6, #0x0]
    bic r1, r1, #0x2000
    orr r1, r1, r5, lsl #0xd
    str r1, [r6], #0x8
L_020a8d04:
    cmp r9, r10
    blt L_020a8c88
    ldr r1, [sp, #0x2c]
    add r1, r1, #0x1
    str r1, [sp, #0x2c]
L_020a8d18:
    ldr r2, [sp, #0x2c]
    ldr r1, [sp, #0x28]
    cmp r2, r1
    blt L_020a8c6c
    ldr r0, [sp, #0x24]
    mla r0, r10, r1, r0
    str r0, [sp, #0x24]
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0xc]
    cmp r1, r0
    bhs L_020a8d90
    mov r0, r1
    mla r1, r0, r11, r4
    ldr r0, [sp, #0x60]
    ldr r3, [sp, #0xc]
    str r0, [sp, #0x0]
    str r5, [sp, #0x4]
    str r1, [sp, #0x8]
    ldr r1, [sp, #0x1c]
    ldr r7, [sp, #0x1c]
    sub r1, r3, r1
    ldr r3, [sp, #0x34]
    ldr r2, [sp, #0x20]
    mov r0, r6
    add r3, r3, r7, lsl #0x3
    bl func_020a8b94
    ldr r1, [sp, #0x24]
    add r6, r6, r0, lsl #0x3
    add r0, r1, r0
    str r0, [sp, #0x24]
L_020a8d90:
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    bhs L_020a8dec
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x20]
    ldr r7, [sp, #0x10]
    add r0, r1, r0, lsl #0x3
    str r0, [sp, #0x0]
    ldr r2, [sp, #0x20]
    ldr r1, [sp, #0x1c]
    sub r2, r7, r2
    ldr r7, [sp, #0x20]
    ldr r3, [sp, #0x34]
    mov r0, r6
    str r5, [sp, #0x4]
    add r7, r4, r7, lsl #0x5
    str r7, [sp, #0x8]
    bl func_020a8b94
    ldr r1, [sp, #0x24]
    add r6, r6, r0, lsl #0x3
    add r0, r1, r0
    str r0, [sp, #0x24]
L_020a8dec:
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0xc]
    cmp r1, r0
    bhs L_020a8e6c
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    bhs L_020a8e6c
    mov r0, r1
    add r1, r4, r0, lsl #0x5
    ldr r0, [sp, #0x1c]
    ldr r2, [sp, #0xc]
    mla r4, r0, r11, r1
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x20]
    ldr r3, [sp, #0x10]
    add r0, r1, r0, lsl #0x3
    str r0, [sp, #0x0]
    str r5, [sp, #0x4]
    ldr r1, [sp, #0x1c]
    ldr r5, [sp, #0x1c]
    sub r1, r2, r1
    ldr r2, [sp, #0x20]
    mov r0, r6
    sub r2, r3, r2
    ldr r3, [sp, #0x34]
    str r4, [sp, #0x8]
    add r3, r3, r5, lsl #0x3
    bl func_020a8b94
    ldr r1, [sp, #0x24]
    add r0, r1, r0
    str r0, [sp, #0x24]
L_020a8e6c:
    ldr r0, [sp, #0x24]
    add sp, sp, #0x3c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
