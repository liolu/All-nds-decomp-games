#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02035a0c();
// clang-format off
asm void func_0202f33c(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r1, #0x0]
    mov r4, r0
    cmp r2, #0xa
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, [r1, #0x4]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0202f3e0
L_0202f364:
    b L_0202f374
    b L_0202f3a0
    b L_0202f3b8
    b L_0202f3d0
L_0202f374:
    ldr r0, [r4, #0x18]
    ldr r1, [r1, #0x8]
    ldr r0, [r0, #0x20]
    mov r2, #0x0
    bl func_02035a0c
    ldr r0, [r4, #0x18]
    mov r2, #0x0
    add r1, r0, #0x24
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0202f3a0:
    ldr r0, [r4, #0x18]
    mov r2, #0x1
    add r1, r0, #0x24
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0202f3b8:
    ldr r0, [r4, #0x1c]
    mov r2, #0x0
    add r1, r0, #0x24
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0202f3d0:
    ldr r0, [r4, #0x1c]
    mov r2, #0x1
    add r1, r0, #0x24
    swpb r0, r2, [r1]
L_0202f3e0:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
