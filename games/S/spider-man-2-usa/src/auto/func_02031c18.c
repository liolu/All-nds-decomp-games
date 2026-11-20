#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb96c();
extern void func_02005020();
extern void r1();
// clang-format off
asm void func_02031c18(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x574]
    cmp r0, #0x0
    beq L_02031c44
    ldrb r1, [r0, #0x10]
    cmp r1, #0x0
    beq L_02031c44
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
L_02031c44:
    mov r0, r4
    bl func_01ffb96c
    ldr r1, [r4, #0x578]
    cmp r1, #0x0
    beq L_02031c84
    ldrb r0, [r1, #0x10]
    cmp r0, #0x0
    beq L_02031c84
    ldr r0, =0x362
    ldrb r2, [r4, #0x362]
    add r1, r1, r0
    swpb r0, r2, [r1]
    ldr r0, [r4, #0x578]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
L_02031c84:
    ldr r0, [r4, #0x590]
    cmp r0, #0x0
    beq L_02031c94
    bl func_02005020
L_02031c94:
    ldrb r0, [r4, #0x584]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, [r4, #0x3e8]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
