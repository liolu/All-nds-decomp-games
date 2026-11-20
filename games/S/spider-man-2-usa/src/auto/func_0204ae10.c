#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a6cc();
extern void func_0204d468();
extern char data_020ffeb4[];
extern char data_021262b0[];
// clang-format off
asm void func_0204ae10(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r3, =data_020ffeb4
    mov r4, r0
    ldr r2, =data_021262b0
    str r3, [r4, #0x0]
    mov r0, #0xbc
    mov r5, r1
    str r2, [r4, #0x0]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0204ae48
    mov r1, r5
    bl func_0204d468
L_0204ae48:
    str r0, [r4, #0x4]
    ldr r0, [r4, #0x4]
    mov r2, #0x1
    add r1, r0, #0xba
    swpb r0, r2, [r1]
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
