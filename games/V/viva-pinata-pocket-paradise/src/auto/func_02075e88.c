#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02075e88(void) {
    add r1, r0, #0x2
    mov r2, #0x1
    swpb r0, r2, [r1]
    eor r0, r0, #0x1
    bx lr
}
// clang-format on
