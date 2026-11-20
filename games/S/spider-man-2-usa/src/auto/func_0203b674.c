#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0203b674(void) {
    mov r2, #0x2d
    swpb r2, r2, [r0]
    mov ip, #0x0
    str ip, [r0, #0x4]
    add r3, r0, #0x8
    swpb r2, ip, [r3]
    add r3, r0, #0x9
    swpb r2, ip, [r3]
    add r2, r0, #0x10
    ldr r3, [r1, #0xc]
    add r1, r0, #0x11
    str r3, [r0, #0xc]
    swpb r0, ip, [r2]
    swpb r0, ip, [r1]
    bx lr
}
// clang-format on
