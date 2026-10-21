#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02018fc0();
extern void func_02018fd0();
extern char data_02094340[];
extern char data_02094344[];
extern char data_0209434c[];
extern char data_02094370[];
// clang-format off
asm void func_02019288(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02094340
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_02018fc0
    ldr r0, =data_02094370
    ldr r1, =data_02094344
    ldr r1, [r1, #0x0]
    ldr ip, =data_0209434c
    ldr ip, [ip, #0x0]
    ldr lr, =0x20192d8
    bx ip
    bl func_02018fd0
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
