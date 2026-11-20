#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_02006a60();
extern void func_02006b0c();
extern void func_02006db0();
extern void func_02006e04();
extern void func_02008a3c();
extern char data_0206f738[];
// clang-format off
asm void func_02008860(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r3, r5, #0x27c
    ldrb r1, [r3, #0x0]
    ldr r2, =0x27d
    mov r4, #0x2
    bic r1, r1, #0x20
    swpb r1, r1, [r3]
    add r2, r5, r2
    ldrb r1, [r2, #0x0]
    orr r1, r1, #0x40
    swpb r1, r1, [r2]
    bl func_02006a60
    cmp r0, #0x0
    movne r4, #0x1
    mov r0, r5
    mov r1, r4
    bl func_02008a3c
    mov r4, r0
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    mov r3, #0x0
    bl func_02006b0c
    ldrb r2, [r5, #0x362]
    mov r0, r5
    mov r1, r4
    bl func_02006e04
    ldrb r2, [r5, #0x363]
    mov r0, r5
    mov r1, r4
    bl func_02006db0
    ldr r1, =data_0206f738
    mov r0, r5
    bl func_01ff93d4
    mov r0, #0x0
    str r0, [r5, #0x380]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
