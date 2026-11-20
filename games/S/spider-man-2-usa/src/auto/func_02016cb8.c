#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020167bc();
extern void func_0201f9e0();
extern void func_0201fa30();
extern void func_0201fadc();
extern char data_0210c3a8[];
// clang-format off
asm void func_02016cb8(void) {
    stmfd sp!, {r4, lr}
    mov r1, #0x1
    mov r4, r0
    bl func_0201fa30
    ldr r0, =data_0210c3a8
    add r2, r4, #0x15
    str r0, [r4, #0x0]
    mov r1, #0x1
    swpb r0, r1, [r2]
    add r3, r4, #0x16
    add r0, r4, #0x18
    swpb r2, r1, [r3]
    bl func_0201f9e0
    mov r0, r4
    mov r1, #0x0
    bl func_020167bc
    mov r0, r4
    mov r1, #0x1
    bl func_020167bc
    mov r0, r4
    mov r1, #0x2
    bl func_020167bc
    mov r0, r4
    mov r1, #0x8
    bl func_020167bc
    mov r0, r4
    bl func_0201fadc
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
