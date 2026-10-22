#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02019a30();
extern void func_0203725c();
extern char data_02113174[];
extern char data_02157fdc[];
// clang-format off
asm void func_0201b968(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r5, r1
    mov r6, r0
    ldr r0, [r5, #0x0]
    mov r7, r2
    mov r4, r3
    bl func_02019a30
    ldrb r3, [sp, #0x18]
    mov r1, r0
    mov r2, r7
    str r3, [sp, #0x0]
    ldr r3, =data_02157fdc
    mov r0, r6
    bl func_0203725c
    ldr r1, =data_02113174
    ldr r0, =0x12d
    str r1, [r6, #0x0]
    mov r3, #0x0
    add r2, r6, r0
    str r3, [r6, #0x128]
    add r1, r6, #0x12c
    swpb r0, r3, [r1]
    mov r0, #0x1
    swpb r0, r0, [r2]
    mov r0, r6
    ldr r1, [r5, #0x4]
    str r1, [r6, #0x130]
    str r4, [r6, #0x134]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
