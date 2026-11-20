#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r0();
extern char data_0215d6f8[];
extern char data_0215d704[];
extern char data_023c0000[];
// clang-format off
asm void func_02038dac(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_023c0000
    ldr r0, =0x3ff8
    ldr r5, =data_0215d704
    ldr r0, [r1, r0]!
    mov r4, #0x0
    orr r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r5, #0x30]
    cmp r0, #0x0
    ble L_02038df8
L_02038ddc:
    add r0, r5, r4, lsl #0x2
    ldr r0, [r0, #0x10]
    blx r0
    ldr r0, [r5, #0x30]
    add r4, r4, #0x1
    cmp r4, r0
    blt L_02038ddc
L_02038df8:
    ldr r0, =data_0215d704
    ldr r1, =data_0215d6f8
    ldr r3, [r0, #0x0]
    mov r2, #0x1
    add r3, r3, #0x1
    str r3, [r0, #0x0]
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
