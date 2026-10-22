#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02157e28[];
// clang-format off
asm void func_0200bb10(void) {
    add r2, r0, #0x2bc
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r1, =data_02157e28
    ldr r1, [r1, #0x0]
    str r1, [r0, #0xa8]
    bx lr
}
// clang-format on
