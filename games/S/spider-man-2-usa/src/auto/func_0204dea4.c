#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a6cc();
extern void func_0204bec0();
extern void func_0204dcb8();
extern char data_02126360[];
extern char data_02127098[];
// clang-format off
asm void func_0204dea4(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    mov r6, r0
    mov r5, r2
    mov r4, r3
    bl func_0204dcb8
    ldr r1, =data_02127098
    mov r0, #0x18
    str r1, [r6, #0x0]
    bl func_0203a6cc
    movs r7, r0
    beq L_0204dee0
    bl func_0204bec0
    ldr r0, =data_02126360
    str r0, [r7, #0x0]
L_0204dee0:
    str r7, [r6, #0x14]
    ldr r2, [sp, #0x38]
    ldr r1, [sp, #0x3c]
    add r0, sp, #0x0
    add ip, sp, #0x10
    str r5, [sp, #0x0]
    str r4, [sp, #0x4]
    str r2, [sp, #0x8]
    str r1, [sp, #0xc]
    ldmia r0, {r0, r1, r2, r3}
    stmia ip, {r0, r1, r2, r3}
    ldr r4, [r6, #0x14]
    ldr r2, [sp, #0x10]
    ldr r0, [sp, #0x14]
    add r1, r6, #0x18
    str r2, [r4, #0x8]
    str r0, [r4, #0xc]
    ldr r3, [sp, #0x18]
    ldr r2, [sp, #0x1c]
    mov r0, #0x1
    str r3, [r4, #0x10]
    str r2, [r4, #0x14]
    swpb r0, r0, [r1]
    mov r0, r6
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
