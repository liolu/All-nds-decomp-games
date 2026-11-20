#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02057804();
extern void func_02057814();
extern void r2();
extern char data_0216152c[];
extern char data_02161530[];
extern char data_02161538[];
// clang-format off
asm void func_0205793c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_0216152c
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_02057804
    ldr r1, =data_02161530
    ldr r0, =data_0216152c
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_02161538
    blx r2
    bl func_02057814
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
