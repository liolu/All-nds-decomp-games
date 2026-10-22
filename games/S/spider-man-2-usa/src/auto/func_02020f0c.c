#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_02035ddc[];
// clang-format off
asm void func_02020f0c(void) {
    ldr ip, =func_02035ddc
    add r2, r0, #0xc
    mov r1, #0x1
    swpb r1, r1, [r2]
    bx ip
}
// clang-format on
