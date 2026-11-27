#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205c490();
extern void func_0205c4a0();
extern void r2();
extern char data_0211b298[];
extern char data_0211b29c[];
extern char data_0211b2a4[];
// clang-format off
asm void func_0205c5d8(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_0211b298
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_0205c490
    ldr r1, =data_0211b29c
    ldr r0, =data_0211b298
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_0211b2a4
    blx r2
    bl func_0205c4a0
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
