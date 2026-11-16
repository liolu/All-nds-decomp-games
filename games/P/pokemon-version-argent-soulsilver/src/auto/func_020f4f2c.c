/* compiler: 1.2/sp2p3 */
#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020f47a0();
// clang-format off
asm void func_020f4f2c(void) {
    mov ip, sp
    sub sp, sp, #0x70
    str r4, [sp, #0x2c]
    str r5, [sp, #0x30]
    str r6, [sp, #0x34]
    str r7, [sp, #0x38]
    str r8, [sp, #0x3c]
    str r9, [sp, #0x40]
    str r10, [sp, #0x44]
    str r11, [sp, #0x48]
    str ip, [sp, #0x14]
    str ip, [sp, #0x5c]
    str lr, [sp, #0x10]
    mov ip, #0x0
    str ip, [sp, #0x0]
    str ip, [sp, #0x4]
    str ip, [sp, #0x8]
    mov r0, sp
    b func_020f47a0
}
// clang-format on
