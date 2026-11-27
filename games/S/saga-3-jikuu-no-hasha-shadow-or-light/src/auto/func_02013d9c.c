#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02013ae0();
extern void func_02013af0();
extern char data_02136598[];
extern char data_0213659c[];
extern char data_021365a4[];
extern char data_021365c8[];
// clang-format off
asm void func_02013d9c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02136598
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
    bl func_02013ae0
    ldr r0, =data_021365c8
    ldr r1, =data_0213659c
    ldr r1, [r1, #0x0]
    ldr ip, =data_021365a4
    ldr ip, [ip, #0x0]
    ldr lr, =0x2013dec
    bx ip
    bl func_02013af0
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
