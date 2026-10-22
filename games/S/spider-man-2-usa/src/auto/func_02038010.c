#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02059f70();
extern char data_020ffeb4[];
extern char data_021242c0[];
extern char data_0215d6ec[];
extern char data_0215d6f0[];
// clang-format off
asm void func_02038010(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_021242c0
    mov r4, r0
    ldr r2, =data_0215d6ec
    str r1, [r4, #0x0]
    mov ip, #0x0
    ldr r3, =data_0215d6f0
    swpb r1, ip, [r2]
    ldr r1, =data_020ffeb4
    str ip, [r3, #0x0]
    str r1, [r4, #0x0]
    bl func_02059f70
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
