#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020ffeb4[];
extern char data_0212706c[];
// clang-format off
asm void func_0204dcb8(void) {
    ldr r3, =data_020ffeb4
    ldr r2, =data_0212706c
    str r3, [r0, #0x0]
    str r2, [r0, #0x0]
    add r3, r0, #0x10
    mov r2, #0x1
    swpb r2, r2, [r3]
    ldr r2, [r1, #0x0]
    str r2, [r0, #0x4]
    ldr r2, [r1, #0x4]
    str r2, [r0, #0x8]
    ldr r1, [r1, #0x8]
    str r1, [r0, #0xc]
    bx lr
}
// clang-format on
