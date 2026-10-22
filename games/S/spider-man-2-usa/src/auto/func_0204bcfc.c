#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02057cf0();
extern char data_023c0000[];
// clang-format off
asm void func_0204bcfc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldrb r0, [r5, #0xc]
    cmp r0, #0x0
    beq L_0204bd2c
    mov r4, #0x3
L_0204bd18:
    mov r0, r4
    bl func_02057cf0
    ldrb r0, [r5, #0xc]
    cmp r0, #0x0
    bne L_0204bd18
L_0204bd2c:
    ldr r1, =data_023c0000
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
