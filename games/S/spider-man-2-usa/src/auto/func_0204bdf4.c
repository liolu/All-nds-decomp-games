#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa9a0();
extern void func_01ffaa04();
extern void func_0201f054();
extern char data_023c0004[];
// clang-format off
asm void func_0204bdf4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    mov r0, #0x0
    str r0, [r5, #0x0]
    str r0, [r5, #0x4]
    str r0, [r5, #0x8]
    add r2, r5, #0xc
    mov r4, r1
    swpb r0, r0, [r2]
    ldr r2, =data_023c0004
    mov r0, #0x10
    mov r1, #0x2
    str r5, [r2, #0x0]
    bl func_01ffa9a0
    str r0, [r5, #0x0]
    mov r8, #0x0
    mov r7, #0x10
    mov r6, #0x2
L_0204be3c:
    mov r0, r7
    mov r1, r6
    bl func_01ffaa04
    cmp r0, #0x0
    beq L_0204be58
    ldr r1, [r4, r8, lsl #0x2]
    bl func_0201f054
L_0204be58:
    ldr r1, [r5, #0x0]
    str r0, [r1, r8, lsl #0x2]
    add r8, r8, #0x1
    cmp r8, #0x4
    blt L_0204be3c
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
