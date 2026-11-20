#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02020d84();
extern void func_02035dd8();
// clang-format off
asm void func_02020eb8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0xc
    mov r2, #0x0
    swpb r0, r2, [r1]
    ldr r0, =0x361
    ldr r3, [r4, #0x4]
    ldr r1, [r3, #0x2f4]
    add r3, r3, r0
    ldr r1, [r1, #0xac]
    swpb r0, r2, [r3]
    ldr r0, [r4, #0x8]
    bl func_02020d84
    mov r0, r4
    add r2, r4, #0xd
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02035dd8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
