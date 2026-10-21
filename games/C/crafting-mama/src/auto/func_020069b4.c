#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020069b4(void) {
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
