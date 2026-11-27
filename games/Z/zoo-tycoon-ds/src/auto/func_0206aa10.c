#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206a8d0();
extern void func_0206a8e0();
extern void r2();
extern char data_02184900[];
extern char data_02184904[];
extern char data_0218490c[];
// clang-format off
asm void func_0206aa10(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_02184900
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_0206a8d0
    ldr r1, =data_02184904
    ldr r0, =data_02184900
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_0218490c
    blx r2
    bl func_0206a8e0
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
