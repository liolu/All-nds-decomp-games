#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02037ffc();
extern void func_0203800c();
extern char data_0215dd64[];
extern char data_0215dd68[];
extern char data_0215dd6c[];
extern char data_0215dd90[];
// clang-format off
asm void func_020381dc(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0215dd64
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
    bl func_02037ffc
    ldr r0, =data_0215dd90
    ldr r1, =data_0215dd68
    ldr r1, [r1, #0x0]
    ldr ip, =data_0215dd6c
    ldr ip, [ip, #0x0]
    ldr lr, =0x203822c
    bx ip
    bl func_0203800c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
