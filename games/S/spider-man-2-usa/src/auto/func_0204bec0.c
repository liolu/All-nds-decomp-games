#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0212634c[];
// clang-format off
asm void func_0204bec0(void) {
    ldr r1, =data_0212634c
    add r2, r0, #0x4
    str r1, [r0, #0x0]
    mov r1, #0x1
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
