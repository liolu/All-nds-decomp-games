#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020322d0();
extern char data_02113a3c[];
// clang-format off
asm void func_0201d99c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r2, #0x0
    str r2, [sp, #0x0]
    mov r4, r1
    str r2, [sp, #0x4]
    mov r1, #0x1
    str r1, [sp, #0x8]
    ldr r1, [r4, #0x0]
    add r2, r4, #0x4
    add r3, r4, #0xc
    mov r5, r0
    bl func_020322d0
    ldr r1, =data_02113a3c
    ldr r0, =0x5b4
    str r1, [r5, #0x0]
    ldr r2, [r4, #0x0]
    add r1, r4, #0xc
    str r2, [r5, #0x5a8]
    ldr r3, [r4, #0x4]
    ldr r2, [r4, #0x8]
    add r6, r5, r0
    str r3, [r5, #0x5ac]
    str r2, [r5, #0x5b0]
    ldmia r1, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    ldr r3, =0x5d4
    ldr r1, =0x5dc
    add r0, r5, r3
    str r0, [sp, #0xc]
    ldr r0, =0x5e8
    add r10, r4, #0x18
    add r7, r5, r1
    add r11, r5, r0
    ldmia r10!, {r0, r1, r2, r3}
    add r9, r5, #0x5c0
    stmia r9!, {r0, r1, r2, r3}
    ldr r0, [r10, #0x0]
    add r8, r4, #0x34
    str r0, [r9, #0x0]
    ldrb r1, [r4, #0x2c]
    ldr r0, [sp, #0xc]
    add r6, r4, #0x40
    swpb r1, r1, [r0]
    ldr r0, [r4, #0x30]
    mov lr, #0x0
    str r0, [r5, #0x5d8]
    ldmia r8, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    ldmia r6, {r0, r1, r2}
    stmia r11, {r0, r1, r2}
    ldr r1, [r4, #0x4c]
    add ip, r5, #0x27c
    str r1, [r5, #0x5f4]
    ldr r1, [r4, #0x50]
    mov r0, r5
    str r1, [r5, #0x5f8]
    ldr r1, [r4, #0x54]
    str r1, [r5, #0x5fc]
    ldr r1, [r4, #0x58]
    str r1, [r5, #0x600]
    str lr, [r5, #0x604]
    str lr, [r5, #0x608]
    ldr r1, [r4, #0x4c]
    str r1, [r5, #0x60c]
    ldr r1, [r4, #0x10]
    str r1, [r5, #0x284]
    ldrb r1, [ip, #0x0]
    orr r1, r1, #0x20
    swpb r1, r1, [ip]
    str lr, [r5, #0x610]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
