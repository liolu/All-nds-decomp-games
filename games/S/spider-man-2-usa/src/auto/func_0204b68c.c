#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204ae10();
extern char data_021262ec[];
// clang-format off
asm void func_0204b68c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0204ae10
    ldr r0, =data_021262ec
    mov r3, #0x1
    str r0, [r4, #0x0]
    ldr r1, [r4, #0x4]
    mov r0, r4
    add r2, r1, #0xb9
    swpb r1, r3, [r2]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
