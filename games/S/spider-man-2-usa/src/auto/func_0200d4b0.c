#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d088();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_02087664[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0200d4b0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, =data_0215b3d4
    mov ip, #0x1
    add r3, r2, #0x50
    swpb r2, ip, [r3]
    mov r5, r0
    ldr r0, [r5, #0x28]
    mov r4, r1
    cmp r0, #0x0
    bne L_0200d4f4
    bl func_0204cd18
    ldr r1, =data_02087664
    mov r2, #0x0
    bl func_0204c8cc
    mov r0, r5
    bl func_0200d088
L_0200d4f4:
    ldr r0, [r4, #0x0]
    str r0, [r5, #0x28]
    ldr r0, [r4, #0x4]
    str r0, [r5, #0x2c]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
