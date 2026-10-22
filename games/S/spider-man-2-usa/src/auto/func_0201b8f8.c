#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203725c();
extern char data_02113174[];
extern char data_02157fdc[];
// clang-format off
asm void func_0201b8f8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldrb ip, [sp, #0x10]
    mov r4, r3
    ldr r3, =data_02157fdc
    mov r5, r0
    str ip, [sp, #0x0]
    bl func_0203725c
    ldr r0, =data_02113174
    ldr r2, =0x12d
    str r0, [r5, #0x0]
    mov r0, #0x0
    str r0, [r5, #0x128]
    add r1, r5, #0x12c
    swpb r0, r0, [r1]
    add r1, r5, r2
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, [sp, #0x14]
    mov r0, r5
    str r1, [r5, #0x130]
    str r4, [r5, #0x134]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
