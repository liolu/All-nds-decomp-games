#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_0201fac0[];
// clang-format off
asm void func_02049fcc(void) {
    add r2, r0, #0x1c
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr ip, =func_0201fac0
    ldr r0, [r0, #0x18]
    bx ip
}
// clang-format on
