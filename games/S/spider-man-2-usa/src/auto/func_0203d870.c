#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203d8c8();
extern char data_0215f114[];
// clang-format off
asm void func_0203d870(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrb r0, [r6, #0x0]
    mov r5, #0x0
    cmp r0, #0x0
    beq L_0203d8ac
    ldr r4, =data_0215f114
L_0203d88c:
    ldrb r0, [r6, r5]
    bl func_0203d8c8
    swpb r0, r0, [r4]
    add r5, r5, #0x1
    ldrb r0, [r6, r5]
    add r4, r4, #0x1
    cmp r0, #0x0
    bne L_0203d88c
L_0203d8ac:
    ldr r0, =data_0215f114
    mov r1, #0x0
    add r2, r0, r5
    swpb r1, r1, [r2]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
