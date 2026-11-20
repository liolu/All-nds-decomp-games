#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209496c();
extern void func_0209497c();
extern char data_020c93a0[];
extern char data_020c93a4[];
extern char data_020c93a8[];
extern char data_020c93cc[];
// clang-format off
asm void func_02094b24(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020c93a0
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
    bl func_0209496c
    ldr r0, =data_020c93cc
    ldr r1, =data_020c93a4
    ldr r1, [r1, #0x0]
    ldr ip, =data_020c93a8
    ldr ip, [ip, #0x0]
    ldr lr, =0x2094B74
    bx ip
    bl func_0209497c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
