#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02015044(void) {
    add r2, r0, #0x50
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x68
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
