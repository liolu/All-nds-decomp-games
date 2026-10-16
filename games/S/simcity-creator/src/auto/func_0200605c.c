#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02005e90();
extern void func_02005ea0();
extern char data_020d0ee8[];
extern char data_020d0eec[];
extern char data_020d0ef0[];
extern char data_020d0f14[];
// clang-format off
asm void func_0200605c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020d0ee8
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
    bl func_02005e90
    ldr r0, =data_020d0f14
    ldr r1, =data_020d0eec
    ldr r1, [r1, #0x0]
    ldr ip, =data_020d0ef0
    ldr ip, [ip, #0x0]
    ldr lr, =0x20060AC
    bx ip
    bl func_02005ea0
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
