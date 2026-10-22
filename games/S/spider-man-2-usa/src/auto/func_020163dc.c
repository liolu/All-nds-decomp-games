#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0215b480[];
extern char data_0215b484[];
// clang-format off
asm void func_020163dc(void) {
    ldr r1, =data_0215b484
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    bxeq lr
    cmp r0, #0x0
    movne r0, #0x1
    ldr r1, =data_0215b480
    moveq r0, #0x0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
