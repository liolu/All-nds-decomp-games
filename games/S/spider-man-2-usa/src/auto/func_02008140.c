#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_02000dec();
extern void func_02006ac0();
extern void func_02006b0c();
extern void func_02007a58();
extern void func_020080a4();
extern void func_02008a3c();
extern void func_02008c50();
extern void func_0200a04c();
extern char data_0206f738[];
extern char data_0206f768[];
// clang-format off
asm void func_02008140(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    mov r1, #0xe
    bl func_02008a3c
    add r4, r6, #0x27c
    ldrb r1, [r4, #0x0]
    add r2, r6, #0x3c0
    mov r3, #0x0
    orr r1, r1, #0x20
    swpb r1, r1, [r4]
    mov r4, r0
    ldr r0, [r6, #0x29c]
    add r1, r5, #0x8
    str r0, [r6, #0x3bc]
    swpb r0, r3, [r2]
    ldr r0, [r6, #0x2f0]
    add r0, r0, #0x4
    bl func_02000dec
    ldr r0, [r6, #0x2f0]
    add r1, r5, #0x14
    add r0, r0, #0x1c
    bl func_02000dec
    ldr r0, =data_0206f768
    bl func_0200a04c
    mov r1, r0
    mov r0, r6
    bl func_02006ac0
    ldr r0, [r5, #0x4]
    cmp r0, #0xb
    addls pc, pc, r0, lsl #0x2
    b L_02008200
L_020081c0:
    b L_02008200
    b L_02008200
    b L_020081f0
    b L_02008200
    b L_02008200
    b L_02008200
    b L_02008200
    b L_020081f0
    b L_02008200
    b L_02008200
    b L_020081f0
    b L_020081f0
L_020081f0:
    mov r0, r6
    bl func_020080a4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02008200:
    mov r0, r6
    bl func_02008c50
    cmp r0, #0x0
    bne L_02008220
    mov r0, r6
    bl func_02007a58
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02008220:
    mov r2, #0x0
    mov r5, #0x6
    mov r0, r6
    mov r1, r4
    mov r3, r2
    str r5, [r6, #0x380]
    bl func_02006b0c
    ldr r1, =data_0206f738
    mov r0, r6
    bl func_01ff93d4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
