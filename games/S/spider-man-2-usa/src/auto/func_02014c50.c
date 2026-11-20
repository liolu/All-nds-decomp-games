#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02014c50(void) {
    add r0, r0, r1
    add r1, r0, #0x58
    mov r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
