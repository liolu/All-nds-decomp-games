#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a66c();
// clang-format off
asm void func_0203aa8c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    and r0, r7, #0x3
    mov r6, r1
    rsb r0, r0, #0x4
    mov r5, r2
    mov r4, r7
    and r2, r0, #0x3
    and r1, r6, #0xff
    b L_0203aabc
L_0203aab4:
    swpb r0, r1, [r4]
    add r4, r4, #0x1
L_0203aabc:
    cmp r2, #0x0
    sub r2, r2, #0x1
    beq L_0203aad4
    cmp r5, #0x0
    sub r5, r5, #0x1
    bne L_0203aab4
L_0203aad4:
    cmp r5, #0x1f
    bls L_0203aafc
    and r0, r5, #0x1f
    sub r8, r5, r0
    mov r0, r4
    mov r1, r6
    mov r2, r8
    bl func_0203a66c
    add r4, r4, r8
    sub r5, r5, r8
L_0203aafc:
    cmp r5, #0x3
    bls L_0203ab14
L_0203ab04:
    sub r5, r5, #0x4
    cmp r5, #0x3
    str r6, [r4], #0x4
    bhi L_0203ab04
L_0203ab14:
    cmp r5, #0x0
    sub r5, r5, #0x1
    beq L_0203ab38
    and r1, r6, #0xff
L_0203ab24:
    swpb r0, r1, [r4]
    cmp r5, #0x0
    add r4, r4, #0x1
    sub r5, r5, #0x1
    bne L_0203ab24
L_0203ab38:
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
