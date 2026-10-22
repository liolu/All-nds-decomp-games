#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02035a98();
extern void func_02035d38();
extern char data_0215d6f4[];
// clang-format off
asm void func_02035a0c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r5, r2
    bl func_02035a98
    str r5, [r4, #0x8]
    cmp r5, #0x0
    beq L_02035a3c
    cmp r5, #0x1
    beq L_02035a4c
    cmp r5, #0x2
    bne L_02035a60
L_02035a3c:
    mov r0, r4
    mov r1, #0x0
    bl func_02035d38
    b L_02035a60
L_02035a4c:
    ldr r1, [r4, #0xc]
    mov r0, r4
    ldrb r1, [r1, #0x15]
    sub r1, r1, #0x1
    bl func_02035d38
L_02035a60:
    add r1, r4, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_0215d6f4
    ldr r1, [r4, #0xc]
    ldr r2, [r0, #0x0]
    ldrb r0, [r1, #0x14]
    add r0, r0, #0x1
    add r0, r2, r0
    str r0, [r4, #0x14]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
