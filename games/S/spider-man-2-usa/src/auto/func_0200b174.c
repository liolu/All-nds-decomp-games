#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b268();
extern void func_0201fa80();
extern char data_02157e14[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0200b174(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    cmp r0, #0x80
    bne L_0200b1a8
    ldr r1, =data_0215b3d4
    ldrb r2, [r1, #0x74]
    cmp r2, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {lr}
    bxne lr
    add r2, r1, #0x74
    mov r1, #0x1
    swpb r1, r1, [r2]
L_0200b1a8:
    bl func_0200b268
    mov lr, #0x0
    mov ip, lr
    mov r3, r0
    b L_0200b1e4
L_0200b1bc:
    cmp r2, #0x6
    bne L_0200b1dc
    ldr r1, [r3, #0x4]
    cmp r1, #0x1d
    moveq r1, #0xc
    mlaeq r1, ip, r1, r0
    ldreq lr, [r1, #0x8]
    beq L_0200b1fc
L_0200b1dc:
    add r3, r3, #0xc
    add ip, ip, #0x1
L_0200b1e4:
    ldr r2, [r3, #0x0]
    cmp r2, #0x6
    bne L_0200b1bc
    ldr r1, [r3, #0x4]
    cmp r1, #0x6
    bne L_0200b1bc
L_0200b1fc:
    ldr r1, =data_02157e14
    cmp lr, #0x3
    str r0, [r1, #0x8]
    addls pc, pc, lr, lsl #0x2
    b L_0200b24c
L_0200b210:
    b L_0200b244
    b L_0200b238
    b L_0200b22c
    b L_0200b220
L_0200b220:
    mov r0, #0x15
    str r0, [r1, #0x4]
    b L_0200b24c
L_0200b22c:
    mov r0, #0x13
    str r0, [r1, #0x4]
    b L_0200b24c
L_0200b238:
    mov r0, #0x16
    str r0, [r1, #0x4]
    b L_0200b24c
L_0200b244:
    mov r0, #0x14
    str r0, [r1, #0x4]
L_0200b24c:
    ldr r0, =data_02157e14
    bl func_0201fa80
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
