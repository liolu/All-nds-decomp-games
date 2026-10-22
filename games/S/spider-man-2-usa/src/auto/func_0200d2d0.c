#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0215b3d4[];
extern char func_0200d088[];
// clang-format off
asm void func_0200d2d0(void) {
    mov r3, #0x0
    str r3, [r0, #0x24]
    ldr r1, =data_0215b3d4
    str r3, [r0, #0x28]
    ldr ip, =func_0200d088
    str r3, [r0, #0x2c]
    add r2, r1, #0x50
    swpb r1, r3, [r2]
    bx ip
}
// clang-format on
