#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020322d0();
extern void func_02044e5c();
extern char data_02086ed0[];
extern char data_02086ed8[];
extern char data_02126374[];
extern char data_02126418[];
// clang-format off
asm void func_0204c1a0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov ip, #0x0
    mov r5, r2
    str ip, [sp, #0x0]
    str ip, [sp, #0x4]
    ldr r2, =data_02086ed0
    ldr r3, =data_02086ed8
    mov r4, r0
    str ip, [sp, #0x8]
    bl func_020322d0
    ldr r0, =0x5a8
    mov r1, r5
    add r0, r4, r0
    mov r2, #0x400
    bl func_02044e5c
    ldr r1, =data_02126374
    ldr r0, =data_02126418
    str r1, [r4, #0x0]
    str r0, [r4, #0x5a8]
    ldr r0, [r4, #0x2f4]
    mov r2, #0x1
    add r1, r0, #0xb9
    swpb r0, r2, [r1]
    mov r0, r4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
