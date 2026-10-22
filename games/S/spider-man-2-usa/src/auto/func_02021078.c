#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036020();
extern char data_021158c4[];
// clang-format off
asm void func_02021078(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02036020
    ldr r0, =data_021158c4
    add r1, r4, #0xc
    str r0, [r4, #0x0]
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xd
    swpb r0, r2, [r1]
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
