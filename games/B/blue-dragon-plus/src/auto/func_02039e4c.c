#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02039e4c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11}
    ldr r3, [r0, #0x0]
    ldr r4, [r0, #0x4]
    ldrb r5, [r0, #0xf]
    ldrb r6, [r0, #0x10]
    ldr r7, [r0, #0x8]
    ldrb r8, [r0, #0x11]
    ldrb r11, [r0, #0x12]
L_02039e6c:
    cmp r4, #0x0
    ble L_02039fa8
    cmp r6, #0x0
    beq L_02039f90
L_02039e7c:
    cmp r2, #0x0
    beq L_02039fa8
    tst r5, #0x80
    bne L_02039ea4
    ldrb r9, [r1], #0x1
    sub r4, r4, #0x1
    sub r2, r2, #0x1
    swpb r9, r9, [r3]
    add r3, r3, #0x1
    b L_02039f7c
L_02039ea4:
    cmp r8, #0x0
    beq L_02039f40
    cmp r11, #0x1
    bne L_02039f2c
    subs r8, r8, #0x1
    beq L_02039f14
    cmp r8, #0x1
    beq L_02039f08
    ldrb r7, [r1], #0x1
    tst r7, #0xe0
    beq L_02039edc
    add r7, r7, #0x10
    mov r8, #0x0
    b L_02039f38
L_02039edc:
    mov r10, #0x110
    tst r7, #0x10
    beq L_02039ef8
    and r7, r7, #0xf
    add r10, r10, #0x1000
    add r7, r10, r7, lsl #0x10
    b L_02039f20
L_02039ef8:
    and r7, r7, #0xf
    add r7, r10, r7, lsl #0x8
    mov r8, #0x1
    b L_02039f20
L_02039f08:
    ldrb r10, [r1], #0x1
    add r7, r7, r10, lsl #0x8
    b L_02039f20
L_02039f14:
    ldrb r10, [r1], #0x1
    add r7, r7, r10
    b L_02039f38
L_02039f20:
    subs r2, r2, #0x1
    beq L_02039fa8
    b L_02039ea4
L_02039f2c:
    ldrb r7, [r1], #0x1
    add r7, r7, #0x30
    mov r8, #0x0
L_02039f38:
    subs r2, r2, #0x1
    beq L_02039fa8
L_02039f40:
    and r9, r7, #0xf
    mov r10, r9, lsl #0x8
    ldrb r9, [r1], #0x1
    mov r8, #0x3
    sub r2, r2, #0x1
    orr r9, r9, r10
    add r9, r9, #0x1
    movs r7, r7, asr #0x4
    beq L_02039f7c
L_02039f64:
    ldrb r10, [r3, -r9]
    sub r4, r4, #0x1
    swpb r10, r10, [r3]
    add r3, r3, #0x1
    subs r7, r7, #0x1
    bgt L_02039f64
L_02039f7c:
    cmp r4, #0x0
    beq L_02039fa8
    mov r5, r5, lsl #0x1
    subs r6, r6, #0x1
    bne L_02039e7c
L_02039f90:
    cmp r2, #0x0
    beq L_02039fa8
    ldrb r5, [r1], #0x1
    mov r6, #0x8
    sub r2, r2, #0x1
    b L_02039e6c
L_02039fa8:
    str r3, [r0, #0x0]
    str r4, [r0, #0x4]
    strb r5, [r0, #0xf]
    strb r6, [r0, #0x10]
    str r7, [r0, #0x8]
    strb r8, [r0, #0x11]
    strb r11, [r0, #0x12]
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11}
    bx lr
}
// clang-format on
