#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r2();
extern char data_0207a474[];
// clang-format off
asm void func_0201fc20(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x10]
    cmp r0, #0x0
    beq L_0201fc64
    ldr r0, [r4, #0xc]
    ldr r2, [r4, #0x4]
    mov r1, r0, lsl #0x3
    add r0, r2, r0, lsl #0x3
    ldrb r0, [r0, #0x5]
    cmp r0, #0x0
    beq L_0201fc64
    ldr r0, [r2, r1]
    ldr r1, =data_0207a474
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1c]
    blx r2
L_0201fc64:
    add r1, r4, #0x10
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
