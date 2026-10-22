#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020ffeb4[];
extern char data_021242c0[];
extern char data_0215d6ec[];
extern char data_0215d6f0[];
// clang-format off
asm void func_0203805c(void) {
    ldr r1, =data_021242c0
    ldr r2, =data_0215d6ec
    str r1, [r0, #0x0]
    mov ip, #0x0
    ldr r3, =data_0215d6f0
    swpb r1, ip, [r2]
    ldr r1, =data_020ffeb4
    str ip, [r3, #0x0]
    str r1, [r0, #0x0]
    bx lr
}
// clang-format on
