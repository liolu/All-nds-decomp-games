#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020163dc();
extern void func_02032eb4();
extern void func_0203333c();
extern void func_020334d4();
extern void func_02033664();
extern void func_0203a1f0();
extern void func_0203a21c();
extern char data_02113f20[];
extern char data_0215d694[];
// clang-format off
asm void func_0201e608(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x24]
    cmp r0, #0x0
    beq L_0201e624
    bl func_0203a1f0
    b L_0201e628
L_0201e624:
    bl func_0203a21c
L_0201e628:
    mov r0, #0x1
    bl func_020163dc
    ldr r0, =data_02113f20
    mov r1, #0x1
    bl func_02033664
    mov r0, #0x0
    bl func_020163dc
    ldr r0, =data_0215d694
    ldr r0, [r0, #0x0]
    bl func_02032eb4
    ldr r1, [r0, #0x0]
    ldr r0, =data_0215d694
    str r1, [r4, #0x78]
    ldr r0, [r0, #0x0]
    bl func_02032eb4
    ldr r1, [r0, #0x4]
    ldr r0, =data_0215d694
    str r1, [r4, #0x7c]
    ldr r0, [r0, #0x0]
    ldr r1, [r4, #0x78]
    ldr r2, [r4, #0x7c]
    bl func_0203333c
    ldr r0, =data_0215d694
    ldr r0, [r0, #0x0]
    bl func_020334d4
    add r1, r4, #0x80
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
