#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d5a4();
extern char data_02107bf4[];
// clang-format off
asm void func_0200af94(void) {
    stmfd sp!, {r4, lr}
    mov r1, #0x3c
    mov r4, r0
    bl func_0200d5a4
    ldr r0, =data_02107bf4
    mov r2, #0x0
    str r0, [r4, #0x0]
    str r2, [r4, #0x34]
    str r2, [r4, #0x38]
    str r2, [r4, #0x3c]
    add r1, r4, #0x40
    swpb r0, r2, [r1]
    mov r0, r4
    str r2, [r4, #0x48]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
