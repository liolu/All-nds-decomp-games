#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02039da0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8}
    ldr r3, [r0, #0x0]
    ldr r4, [r0, #0x4]
    ldrb r5, [r0, #0xb]
    ldrh r6, [r0, #0xc]
L_02039db4:
    cmp r4, #0x0
    ble L_02039e30
    tst r5, #0x80
    bne L_02039dec
L_02039dc4:
    cmp r6, #0x0
    ble L_02039e14
    sub r6, r6, #0x1
    ldrb r7, [r1], #0x1
    sub r4, r4, #0x1
    swpb r8, r7, [r3]
    add r3, r3, #0x1
    subs r2, r2, #0x1
    beq L_02039e30
    b L_02039dc4
L_02039dec:
    cmp r6, #0x0
    ble L_02039e14
    ldrb r7, [r1], #0x1
L_02039df8:
    sub r4, r4, #0x1
    swpb r8, r7, [r3]
    add r3, r3, #0x1
    subs r6, r6, #0x1
    bgt L_02039df8
    subs r2, r2, #0x1
    beq L_02039e30
L_02039e14:
    ldrb r5, [r1], #0x1
    and r6, r5, #0x7f
    tst r5, #0x80
    addne r6, r6, #0x2
    add r6, r6, #0x1
    subs r2, r2, #0x1
    bne L_02039db4
L_02039e30:
    str r3, [r0, #0x0]
    str r4, [r0, #0x4]
    strb r5, [r0, #0xb]
    strh r6, [r0, #0xc]
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8}
    bx lr
}
// clang-format on
