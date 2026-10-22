#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201f6ec();
extern void func_0201f758();
// clang-format off
asm void func_0200d054(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x15]
    cmp r1, #0x0
    beq L_0200d078
    bl func_0201f6ec
    add r1, r4, #0x15
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0200d078:
    mov r0, r4
    bl func_0201f758
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
