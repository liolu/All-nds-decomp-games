#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fadc();
extern char data_020ffeb4[];
extern char data_02124298[];
// clang-format off
asm void func_02037d30(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_020ffeb4
    mov r4, r0
    ldr r2, =data_02124298
    str r3, [r4, #0x0]
    str r2, [r4, #0x0]
    mov r2, #0x0
    str r2, [r4, #0x4]
    add r2, r4, #0x14
    swpb r1, r1, [r2]
    bl func_0201fadc
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
