#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a6cc();
extern void func_0204bec0();
extern void func_0204dcb8();
extern char data_02126360[];
extern char data_02127098[];
// clang-format off
asm void func_0204de14(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r4, r0
    mov r6, r2
    bl func_0204dcb8
    ldr r1, =data_02127098
    mov r0, #0x18
    str r1, [r4, #0x0]
    bl func_0203a6cc
    movs r5, r0
    beq L_0204de4c
    bl func_0204bec0
    ldr r0, =data_02126360
    str r0, [r5, #0x0]
L_0204de4c:
    str r5, [r4, #0x14]
    add ip, sp, #0x0
    ldmia r6, {r0, r1, r2, r3}
    stmia ip, {r0, r1, r2, r3}
    ldr ip, [r4, #0x14]
    ldr r2, [sp, #0x0]
    ldr r0, [sp, #0x4]
    add r1, r4, #0x18
    str r2, [ip, #0x8]
    str r0, [ip, #0xc]
    ldr r3, [sp, #0x8]
    ldr r2, [sp, #0xc]
    mov r0, #0x1
    str r3, [ip, #0x10]
    str r2, [ip, #0x14]
    swpb r0, r0, [r1]
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
