#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208b480();
extern void func_0208b490();
extern char data_020d3e88[];
extern char data_020d3e8c[];
extern char data_020d3e90[];
extern char data_020d3eb4[];
// clang-format off
asm void func_0208b628(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020d3e88
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_0208b480
    ldr r0, =data_020d3eb4
    ldr r1, =data_020d3e8c
    ldr r1, [r1, #0x0]
    ldr ip, =data_020d3e90
    ldr ip, [ip, #0x0]
    ldr lr, =0x208b678
    bx ip
    bl func_0208b490
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
