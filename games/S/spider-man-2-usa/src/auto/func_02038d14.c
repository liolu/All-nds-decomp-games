#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02054694();
extern void func_0205657c();
extern void func_02056634();
extern char data_0215d6f8[];
extern char data_0215d6fc[];
extern char data_0215d700[];
extern char data_0215d704[];
extern char func_02038dac[];
// clang-format off
asm void func_02038d14(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, =data_0215d704
    mov ip, #0x0
    add r1, r2, #0xc
    swpb r0, ip, [r1]
    str ip, [r2, #0x0]
    str ip, [r2, #0x4]
    str ip, [r2, #0x8]
    mov r3, ip
L_02038d3c:
    add r0, r2, ip, lsl #0x2
    add ip, ip, #0x1
    str r3, [r0, #0x10]
    cmp ip, #0x8
    blt L_02038d3c
    ldr r1, =func_02038dac
    mov r0, #0x1
    str r3, [r2, #0x30]
    bl func_02056634
    mov r0, #0x1
    bl func_0205657c
    mov r0, #0x1
    bl func_02054694
    ldr r3, =data_0215d6fc
    mov ip, #0x0
    ldr r2, =data_0215d700
    ldr r1, =data_0215d6f8
    swpb r0, ip, [r3]
    swpb r0, ip, [r2]
    swpb r0, ip, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
