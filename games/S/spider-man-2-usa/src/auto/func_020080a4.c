#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006b0c();
extern void func_02008a3c();
extern void func_02008c50();
// clang-format off
asm void func_020080a4(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =0x27d
    mov r4, r0
    add r2, r4, r1
    ldrb r1, [r2, #0x0]
    add lr, r4, #0x27c
    add r3, r4, #0x3c0
    bic r1, r1, #0x40
    swpb r1, r1, [r2]
    mov ip, #0x0
    ldrb r2, [lr, #0x0]
    mov r1, #0xf
    orr r2, r2, #0x20
    swpb r2, r2, [lr]
    ldr r2, [r4, #0x29c]
    str r2, [r4, #0x3bc]
    swpb r2, ip, [r3]
    bl func_02008a3c
    mov r2, #0x0
    mov r1, r0
    mov r0, r4
    mov r3, r2
    bl func_02006b0c
    mov r1, #0x7
    mov r0, r4
    str r1, [r4, #0x2c4]
    bl func_02008c50
    cmp r0, #0x0
    bne L_0200812c
    mov r0, r4
    mov r1, #0x12
    bl func_02008a3c
    ldr r0, [r0, #0x20]
    str r0, [r4, #0x3b8]
L_0200812c:
    mov r0, #0x7
    str r0, [r4, #0x380]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
