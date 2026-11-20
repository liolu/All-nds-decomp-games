#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020ffeb4[];
extern char data_021241e0[];
extern char data_0215d634[];
// clang-format off
asm void func_02036848(void) {
    stmfd sp!, {r4, lr}
    ldr r4, =data_020ffeb4
    ldr r3, =data_021241e0
    str r4, [r0, #0x0]
    str r3, [r0, #0x0]
    ldr r3, [r2, #0x0]
    ldr r2, [r2, #0x4]
    ldr ip, =data_0215d634
    str r3, [r0, #0x4]
    str r2, [r0, #0x8]
    ldr r2, [ip, #0x0]
    mov lr, #0x0
    str r2, [r0, #0xc]
    ldr r3, [ip, #0x4]
    add r2, r0, #0x24
    str r3, [r0, #0x10]
    ldr r4, [ip, #0x0]
    add r3, r0, #0x25
    str r4, [r0, #0x14]
    ldr ip, [ip, #0x4]
    str ip, [r0, #0x18]
    str lr, [r0, #0x1c]
    str r1, [r0, #0x20]
    swpb r1, lr, [r2]
    swpb r1, lr, [r3]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
