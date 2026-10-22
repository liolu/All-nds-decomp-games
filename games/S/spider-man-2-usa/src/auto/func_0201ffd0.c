#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a6c0();
extern char data_020ffeb4[];
extern char data_02115858[];
// clang-format off
asm void func_0201ffd0(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020ffeb4
    mov r4, r0
    ldr r0, =data_02115858
    str r2, [r4, #0x0]
    str r0, [r4, #0x0]
    str r1, [r4, #0x8]
    mov r0, #0x0
    str r0, [r4, #0xc]
    add r1, r4, #0x10
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x8]
    mov r0, r0, lsl #0x3
    bl func_0203a6c0
    str r0, [r4, #0x4]
    ldr r0, [r4, #0x8]
    mov r3, #0x0
    cmp r0, #0x0
    ble L_02020048
    mov r2, r3
L_02020020:
    ldr r0, [r4, #0x4]
    str r2, [r0, r3, lsl #0x3]
    ldr r0, [r4, #0x4]
    add r0, r0, r3, lsl #0x3
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    add r3, r3, #0x1
    ldr r0, [r4, #0x8]
    cmp r3, r0
    blt L_02020020
L_02020048:
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
