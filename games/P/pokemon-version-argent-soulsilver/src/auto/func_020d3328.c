#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020d315c();
extern void func_020d316c();
extern char data_021e1944[];
extern char data_021e1948[];
extern char data_021e194c[];
extern char data_021e1970[];
// clang-format off
asm void func_020d3328(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_021e1944
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
    bl func_020d315c
    ldr r0, =data_021e1970
    ldr r1, =data_021e1948
    ldr r1, [r1, #0x0]
    ldr ip, =data_021e194c
    ldr ip, [ip, #0x0]
    ldr lr, =0x20D3378
    bx ip
    bl func_020d316c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
