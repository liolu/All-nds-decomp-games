#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066db0();
extern void func_02066dc0();
extern void r2();
extern char data_020e65b0[];
extern char data_020e65b4[];
extern char data_020e65bc[];
// clang-format off
asm void func_02066f0c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_020e65b0
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_02066db0
    ldr r1, =data_020e65b4
    ldr r0, =data_020e65b0
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_020e65bc
    blx r2
    bl func_02066dc0
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
