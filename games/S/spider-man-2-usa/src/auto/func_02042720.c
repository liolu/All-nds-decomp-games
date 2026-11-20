#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02042720(void) {
    mov ip, #0x0
    mov r3, ip
    mov r2, ip
L_0204272c:
    add r1, r0, ip, lsl #0x2
    ldrh r1, [r1, #0x8c]
    add ip, ip, #0x1
    cmp ip, #0x7
    add r2, r2, r1
    blt L_0204272c
    cmp ip, #0x80
    bge L_02042764
L_0204274c:
    add r1, r0, ip, lsl #0x2
    ldrh r1, [r1, #0x8c]
    add ip, ip, #0x1
    cmp ip, #0x80
    add r3, r3, r1
    blt L_0204274c
L_02042764:
    cmp ip, #0x100
    bge L_02042784
L_0204276c:
    add r1, r0, ip, lsl #0x2
    ldrh r1, [r1, #0x8c]
    add ip, ip, #0x1
    cmp ip, #0x100
    add r2, r2, r1
    blt L_0204276c
L_02042784:
    cmp r2, r3, lsr #0x2
    movls r2, #0x1
    movhi r2, #0x0
    add r1, r0, #0x1c
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
