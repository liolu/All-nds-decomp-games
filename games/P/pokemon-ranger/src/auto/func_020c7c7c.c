#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c7b34();
extern void func_020c7b44();
extern void r2();
extern char data_020f6c0c[];
extern char data_020f6c10[];
extern char data_020f6c18[];
// clang-format off
asm void func_020c7c7c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_020f6c0c
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_020c7b34
    ldr r1, =data_020f6c10
    ldr r0, =data_020f6c0c
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_020f6c18
    blx r2
    bl func_020c7b44
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
