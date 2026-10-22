#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fa30();
extern void func_0201fadc();
extern void func_0202094c();
extern char data_021094f8[];
// clang-format off
asm void func_0200d5a4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    mov r1, #0x1
    mov r5, r0
    bl func_0201fa30
    ldr r0, =data_021094f8
    add r1, r5, #0x15
    str r0, [r5, #0x0]
    mov r2, #0x0
    swpb r0, r2, [r1]
    mov r0, r5
    str r2, [r5, #0x18]
    str r2, [r5, #0x1c]
    str r2, [r5, #0x24]
    str r2, [r5, #0x28]
    str r2, [r5, #0x2c]
    str r4, [r5, #0x30]
    bl func_0201fadc
    mov r0, #0x40
    bl func_0202094c
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
