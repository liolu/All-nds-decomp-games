#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02006a78(void) {
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
