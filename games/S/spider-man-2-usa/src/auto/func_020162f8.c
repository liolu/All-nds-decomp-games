#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020546c4();
extern void func_0205657c();
extern void func_02056634();
extern char data_0215b44c[];
extern char func_02016368[];
// clang-format off
asm void func_020162f8(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, =data_0215b44c
    mov ip, #0x0
    add r1, r2, #0xc
    swpb r0, ip, [r1]
    str ip, [r2, #0x0]
    str ip, [r2, #0x4]
    str ip, [r2, #0x8]
    mov r3, ip
L_02016320:
    add r0, r2, ip, lsl #0x2
    add ip, ip, #0x1
    str r3, [r0, #0x10]
    cmp ip, #0x8
    blt L_02016320
    ldr r1, =func_02016368
    mov r0, #0x2
    str r3, [r2, #0x30]
    bl func_02056634
    mov r0, #0x2
    bl func_0205657c
    mov r0, #0x1
    bl func_020546c4
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
