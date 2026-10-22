#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0203b6b0(void) {
    mov r1, #0x2d
    swpb r1, r1, [r0]
    mov r3, #0x0
    str r3, [r0, #0x4]
    add r2, r0, #0x8
    swpb r1, r3, [r2]
    add r2, r0, #0x9
    swpb r1, r3, [r2]
    add r2, r0, #0x10
    swpb r1, r3, [r2]
    add r2, r0, #0x11
    swpb r1, r3, [r2]
    bx lr
}
// clang-format on
