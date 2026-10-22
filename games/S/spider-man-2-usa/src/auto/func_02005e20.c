#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02005d68();
extern void func_0201fadc();
extern char data_020ffeb4[];
extern char data_02106aec[];
extern char data_02157e10[];
// clang-format off
asm void func_02005e20(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_020ffeb4
    mov r4, r0
    ldr r2, =data_02106aec
    str r1, [r4, #0x0]
    ldr r1, =data_02157e10
    str r2, [r4, #0x0]
    str r4, [r1, #0x0]
    bl func_0201fadc
    mov r0, r4
    bl func_02005d68
    ldr r0, =data_02157e10
    mov r3, #0x1
    ldr r1, [r0, #0x0]
    mov r0, r4
    add r2, r1, #0x4
    swpb r1, r3, [r2]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
