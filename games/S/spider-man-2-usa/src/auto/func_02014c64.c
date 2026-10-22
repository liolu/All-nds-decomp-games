#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02014c64(void) {
    mov ip, #0x0
    mov r3, ip
L_02014c6c:
    add r1, r0, ip
    add r2, r1, #0x58
    add ip, ip, #0x1
    cmp ip, #0x8
    swpb r1, r3, [r2]
    blt L_02014c6c
    bx lr
}
// clang-format on
