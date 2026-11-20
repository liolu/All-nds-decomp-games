#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202b678();
extern char data_020ffeb4[];
extern char data_021157e0[];
// clang-format off
asm void func_0202b6ac(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr r3, =data_020ffeb4
    mov r4, r0
    str r3, [r4, #0x0]
    ldr r2, =data_021157e0
    mov ip, #0x0
    str r2, [r4, #0x0]
    add r2, r4, #0x28
    swpb r1, r1, [r2]
    mov r3, #0x100
    str ip, [r4, #0x1c]
    mov r2, #0xc0
    add r1, sp, #0x0
    str ip, [sp, #0x0]
    str ip, [sp, #0x4]
    str r3, [sp, #0x8]
    str r2, [sp, #0xc]
    bl func_0202b678
    mov r1, #0x0
    mov r0, r4
    str r1, [r4, #0x24]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
