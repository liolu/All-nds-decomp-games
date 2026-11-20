#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0203b628(void) {
    ldrb r2, [r0, #0x0]
    cmp r1, r2
    blo L_0203b63c
    cmp r2, #0x2d
    bxne lr
L_0203b63c:
    swpb r1, r1, [r0]
    bx lr
}
// clang-format on
