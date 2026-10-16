#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02016534();
extern void func_02016544();
extern char data_02034c64[];
extern char data_02034c68[];
extern char data_02034c70[];
extern char data_02034c94[];
// clang-format off
asm void func_0201680c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02034c64
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
    bl func_02016534
    ldr r0, =data_02034c94
    ldr r1, =data_02034c68
    ldr r1, [r1, #0x0]
    ldr ip, =data_02034c70
    ldr ip, [ip, #0x0]
    ldr lr, =0x201685c
    bx ip
    bl func_02016544
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
