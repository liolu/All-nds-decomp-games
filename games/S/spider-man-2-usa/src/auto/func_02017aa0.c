#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020ffeb4[];
extern char data_0210c458[];
// clang-format off
asm void func_02017aa0(void) {
    ldr r3, =data_020ffeb4
    ldr r2, =data_0210c458
    str r3, [r0, #0x0]
    str r2, [r0, #0x0]
    str r1, [r0, #0x4]
    mov ip, #0x0
    str ip, [r0, #0x10]
    mov r3, ip
L_02017ac0:
    add r1, r0, ip
    add r2, r1, #0x8
    add ip, ip, #0x1
    cmp ip, #0x8
    swpb r1, r3, [r2]
    blt L_02017ac0
    bx lr
}
// clang-format on
