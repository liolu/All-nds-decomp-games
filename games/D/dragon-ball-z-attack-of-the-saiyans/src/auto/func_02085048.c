#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084e6c();
extern void func_02084e7c();
extern char data_020d8884[];
extern char data_020d8888[];
extern char data_020d888c[];
extern char data_020d88b0[];
// clang-format off
asm void func_02085048(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020d8884
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
    bl func_02084e6c
    ldr r0, =data_020d88b0
    ldr r1, =data_020d8888
    ldr r1, [r1, #0x0]
    ldr ip, =data_020d888c
    ldr ip, [ip, #0x0]
    ldr lr, =0x2085098
    bx ip
    bl func_02084e7c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
