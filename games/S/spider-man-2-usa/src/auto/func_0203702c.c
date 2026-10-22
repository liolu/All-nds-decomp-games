#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0215d6c8[];
// clang-format off
asm void func_0203702c(void) {
    ldr r2, =data_0215d6c8
    mov r3, #0x0
    mov r1, r3
L_02037038:
    add r3, r3, #0x1
    swpb r0, r1, [r2]
    cmp r3, #0x3
    add r2, r2, #0x1
    blt L_02037038
    bx lr
}
// clang-format on
