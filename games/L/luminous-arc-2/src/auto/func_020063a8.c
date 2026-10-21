#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020061cc();
extern void func_020061dc();
extern char data_02147b88[];
extern char data_02147b8c[];
extern char data_02147b90[];
extern char data_02147bb4[];
// clang-format off
asm void func_020063a8(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02147b88
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
    bl func_020061cc
    ldr r0, =data_02147bb4
    ldr r1, =data_02147b8c
    ldr r1, [r1, #0x0]
    ldr ip, =data_02147b90
    ldr ip, [ip, #0x0]
    ldr lr, =0x20063F8
    bx ip
    bl func_020061dc
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
