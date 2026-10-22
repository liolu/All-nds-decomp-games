#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020353f4();
extern void func_0203a6cc();
extern void func_02049fcc();
extern void func_02049fe8();
extern void r1();
extern void r2();
extern char data_020869ac[];
extern char data_02106fbc[];
extern char data_02106fe0[];
// clang-format off
asm void func_0200a4b8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_020353f4
    ldr r0, =data_02106fbc
    add r2, r6, #0x58
    str r0, [r6, #0x0]
    mov r1, #0x0
    swpb r0, r1, [r2]
    add r2, r6, #0x59
    swpb r0, r1, [r2]
    mov r0, r6
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x20]
    blx r2
    ldr r2, [r5, #0x34]
    ldr r1, =data_02106fe0
    mov r0, #0x20
    str r2, [r1, #0x8]
    ldr r2, [r4, #0x0]
    str r2, [r1, #0x24]
    ldr r2, [r4, #0x4]
    str r2, [r1, #0x28]
    ldr r2, [r4, #0x8]
    str r2, [r1, #0x2c]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0200a548
    mov r1, #0x0
    str r1, [sp, #0x0]
    ldr r3, [r5, #0x2c]
    ldr r1, =data_02106fe0
    ldr r2, =data_020869ac
    bl func_02049fe8
L_0200a548:
    str r0, [r6, #0x68]
    ldr r0, [r6, #0x68]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r6, #0x68]
    bl func_02049fcc
    mov r0, r6
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
