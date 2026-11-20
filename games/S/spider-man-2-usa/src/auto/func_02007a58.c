#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006ac0();
extern void func_02006b0c();
extern void func_02006db0();
extern void func_02006e04();
extern void func_02008a3c();
// clang-format off
asm void func_02007a58(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =0x27d
    mov r4, r0
    add r5, r4, r1
    ldrb r2, [r5, #0x0]
    add r3, r4, #0x27c
    mov r1, #0x0
    bic r2, r2, #0x40
    swpb r2, r2, [r5]
    ldrb r2, [r3, #0x0]
    orr r2, r2, #0x20
    swpb r2, r2, [r3]
    bl func_02006ac0
    mov r0, r4
    mov r1, #0x12
    bl func_02008a3c
    mov r5, r0
    mov r2, #0x0
    mov r0, r4
    mov r1, r5
    mov r3, r2
    bl func_02006b0c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, r5
    bl func_02006e04
    mov r1, r5
    mov r0, r4
    ldrb r2, [r4, #0x363]
    bl func_02006db0
    mov r0, #0xa
    str r0, [r4, #0x380]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
