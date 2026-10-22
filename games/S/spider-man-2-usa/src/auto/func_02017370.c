#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020ffeb4[];
extern char data_0210c424[];
// clang-format off
asm void func_02017370(void) {
    ldr r3, =data_020ffeb4
    ldr r2, =data_0210c424
    str r3, [r0, #0x0]
    str r2, [r0, #0x0]
    add r2, r0, #0x24
    swpb r1, r1, [r2]
    add r2, r0, #0x4
    mov r1, #0x0
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
