#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02038910(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r6, #0x0
    mov r7, r6
    cmp r1, #0x0
    bls L_020389e4
    mov r3, r6
    mov ip, #0x3
L_0203892c:
    ldrb r9, [r0, r6]
    add r4, r0, r6
    ands r5, r9, #0x80
    beq L_020389a8
    ldrb r5, [r4, #0x1]
    add r8, r2, r7
    add lr, r7, #0x2
    swpb r5, r5, [r8]
    and r5, r9, #0x7f
    ldrb r10, [r4, #0x1]
    add r8, r8, #0x1
    and r9, r5, #0xff
    swpb r5, r10, [r8]
    add r5, r9, #0x3
    ldrb r8, [r4, #0x1]
    add r9, r2, lr
    and lr, r5, #0xff
    mov r5, ip
    cmp lr, #0x3
    add r7, r7, #0x3
    swpb r8, r8, [r9]
    bls L_020389a0
L_02038984:
    ldrb r8, [r4, #0x1]
    add r9, r2, r7
    add r5, r5, #0x1
    cmp r5, lr
    swpb r8, r8, [r9]
    add r7, r7, #0x1
    blo L_02038984
L_020389a0:
    add r6, r6, #0x2
    b L_020389dc
L_020389a8:
    add r4, r9, #0x1
    mov r8, r3
    add r6, r6, #0x1
    ands r9, r4, #0xff
    beq L_020389dc
L_020389bc:
    ldrb r4, [r0, r6]
    add r5, r2, r7
    add r8, r8, #0x1
    cmp r8, r9
    swpb r4, r4, [r5]
    add r7, r7, #0x1
    add r6, r6, #0x1
    blo L_020389bc
L_020389dc:
    cmp r7, r1
    blo L_0203892c
L_020389e4:
    ands r0, r7, #0x3
    mov r3, #0x0
    beq L_02038a10
    add r4, r2, r7
    mov r2, r3
L_020389f8:
    add r3, r3, #0x1
    add r1, r7, r3
    swpb r0, r2, [r4]
    add r4, r4, #0x1
    ands r0, r1, #0x3
    bne L_020389f8
L_02038a10:
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
