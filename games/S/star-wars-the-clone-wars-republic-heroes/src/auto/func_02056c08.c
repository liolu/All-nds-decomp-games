#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02056a50();
extern void func_02056a60();
extern char data_020b2f44[];
extern char data_020b2f48[];
extern char data_020b2f4c[];
extern char data_020b2f70[];
// clang-format off
asm void func_02056c08(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020b2f44
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
    bl func_02056a50
    ldr r0, =data_020b2f70
    ldr r1, =data_020b2f48
    ldr r1, [r1, #0x0]
    ldr ip, =data_020b2f4c
    ldr ip, [ip, #0x0]
    ldr lr, =0x2056c58
    bx ip
    bl func_02056a60
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
