#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036020();
extern char data_021000f8[];
// clang-format off
asm void func_0200516c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02036020
    ldr r1, =data_021000f8
    mov r0, #0x0
    str r1, [r4, #0x0]
    str r0, [r4, #0xc]
    str r0, [r4, #0x10]
    add r1, r4, #0x14
    swpb r0, r0, [r1]
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
