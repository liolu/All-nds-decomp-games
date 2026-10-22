#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02037074();
extern char data_02157fdc[];
extern char data_02158010[];
// clang-format off
asm void func_0201b79c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, =0x12d
    cmp r1, #0x0
    add r2, r0, r2
    swpb r1, r1, [r2]
    beq L_0201b7cc
    ldr r1, =data_02157fdc
    bl func_02037074
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_0201b7cc:
    ldr r1, =data_02158010
    bl func_02037074
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
