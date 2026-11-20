#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020b623c();
extern void func_020b624c();
extern char data_020f1bf8[];
extern char data_020f1bfc[];
extern char data_020f1c00[];
extern char data_020f1c24[];
// clang-format off
asm void func_020b6408(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020f1bf8
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
    bl func_020b623c
    ldr r0, =data_020f1c24
    ldr r1, =data_020f1bfc
    ldr r1, [r1, #0x0]
    ldr ip, =data_020f1c00
    ldr ip, [ip, #0x0]
    ldr lr, =0x20B6458
    bx ip
    bl func_020b624c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
