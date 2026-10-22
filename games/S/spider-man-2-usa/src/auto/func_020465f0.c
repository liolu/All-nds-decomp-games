#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a6cc();
extern void func_0204bc6c();
extern char data_020ffeb4[];
extern char data_021248d4[];
extern char data_02160594[];
// clang-format off
asm void func_020465f0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r3, =data_020ffeb4
    mov r5, r0
    ldr r0, =data_021248d4
    str r3, [r5, #0x0]
    str r0, [r5, #0x0]
    ldr r0, =data_02160594
    str r1, [r5, #0x4]
    mov r4, r2
    str r5, [r0, #0x0]
    mov r3, #0x0
    mov r2, r3
L_02046624:
    add r1, r5, r3, lsl #0x2
    add r0, r5, r3
    add r3, r3, #0x1
    str r2, [r1, #0x8]
    add r1, r0, #0x14
    cmp r3, #0x3
    swpb r0, r2, [r1]
    blt L_02046624
    mov r0, #0xc
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0204665c
    mov r1, r4
    bl func_0204bc6c
L_0204665c:
    str r0, [r5, #0x18]
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
