#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200bde4();
// clang-format off
asm void func_0200bcfc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x104
    mov r7, r0
    ldrh r0, [r7, #0x16]
    ldr r5, [r7, #0xac]
    mov r6, r1
    cmp r0, #0x0
    mov r4, #0x0
    addls sp, sp, #0x104
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxls lr
    ldr r8, =0x1fffff
    add r9, sp, #0x0
L_0200bd30:
    ldrh r1, [r7, #0x14]
    mov r2, r9
    add r6, r6, #0x1
    cmp r1, #0x0
    beq L_0200bda8
L_0200bd44:
    ldrsb r0, [r6, #0x0]
    add r3, r6, #0x1
    mov r6, r3
    cmp r0, #0x0
    bge L_0200bd7c
    cmp r0, #0x0
    add r1, r1, r0
    beq L_0200bda0
L_0200bd64:
    ldrsb r3, [r6], #0x1
    adds r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    bne L_0200bd64
    b L_0200bda0
L_0200bd7c:
    cmp r0, #0x0
    sub r1, r1, r0
    add r6, r3, #0x1
    ldrb ip, [r3, #0x0]
    beq L_0200bda0
L_0200bd90:
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    subs r0, r0, #0x1
    bne L_0200bd90
L_0200bda0:
    cmp r1, #0x0
    bne L_0200bd44
L_0200bda8:
    ldrh r2, [r7, #0x14]
    mov r0, r9
    mov r1, r5
    and r2, r8, r2, lsr #0x1
    bl func_0200bde4
    ldr r1, [r7, #0xb0]
    ldrh r0, [r7, #0x16]
    add r4, r4, #0x1
    add r5, r5, r1
    cmp r4, r0
    blo L_0200bd30
    add sp, sp, #0x104
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
