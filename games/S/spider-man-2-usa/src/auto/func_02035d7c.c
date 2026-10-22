#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02035a0c();
extern char data_021240c0[];
// clang-format off
asm void func_02035d7c(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_021240c0
    mov r4, r0
    str r3, [r4, #0x0]
    mov lr, #0x0
    str lr, [r4, #0x20]
    str lr, [r4, #0x24]
    str lr, [r4, #0x28]
    add ip, r4, #0x2c
    swpb r3, lr, [ip]
    add ip, r4, #0x2d
    swpb r3, lr, [ip]
    add r3, r4, #0x2e
    swpb r2, r2, [r3]
    mov r2, lr
    str lr, [r4, #0x1c]
    bl func_02035a0c
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
