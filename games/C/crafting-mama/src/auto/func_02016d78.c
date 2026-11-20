#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02016d78(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    ldr r5, [r0], #0x4
    mov r2, r5, lsr #0x8
    mov r7, #0x0
    tst r5, #0xf
    movne r7, #0x1
L_02016d90:
    cmp r2, #0x0
    ble L_02016e50
    ldrb lr, [r0], #0x1
    mov r4, #0x8
L_02016da0:
    subs r4, r4, #0x1
    blt L_02016d90
    tst lr, #0x80
    bne L_02016dc4
    ldrb r6, [r0], #0x1
    swpb r6, r6, [r1]
    add r1, r1, #0x1
    sub r2, r2, #0x1
    b L_02016e40
L_02016dc4:
    ldrb r5, [r0, #0x0]
    cmp r7, #0x0
    moveq r6, #0x3
    beq L_02016e0c
    tst r5, #0xe0
    movne r6, #0x1
    bne L_02016e0c
    add r0, r0, #0x1
    and r6, r5, #0xf
    mov r6, r6, lsl #0x4
    tst r5, #0x10
    beq L_02016e04
    mov r6, r6, lsl #0x8
    ldrb r5, [r0], #0x1
    add r6, r6, r5, lsl #0x4
    add r6, r6, #0x100
L_02016e04:
    add r6, r6, #0x11
    ldrb r5, [r0, #0x0]
L_02016e0c:
    add r3, r6, r5, asr #0x4
    add r0, r0, #0x1
    and r5, r5, #0xf
    mov ip, r5, lsl #0x8
    ldrb r6, [r0], #0x1
    orr r5, r6, ip
    add ip, r5, #0x1
    sub r2, r2, r3
L_02016e2c:
    ldrb r5, [r1, -ip]
    swpb r5, r5, [r1]
    add r1, r1, #0x1
    subs r3, r3, #0x1
    bgt L_02016e2c
L_02016e40:
    cmp r2, #0x0
    movgt lr, lr, lsl #0x1
    bgt L_02016da0
    b L_02016d90
L_02016e50:
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
