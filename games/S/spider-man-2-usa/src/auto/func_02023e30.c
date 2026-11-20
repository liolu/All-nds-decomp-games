#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_020245c0();
extern void func_0202461c();
extern void func_0202aa30();
extern char data_0207a4a0[];
// clang-format off
asm void func_02023e30(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x28c]
    cmp r0, #0x0
    bne L_02023e60
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    ldr r0, =0x362
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02023e60:
    mov r1, #0x4
    mov r0, r4
    str r1, [r4, #0x28c]
    mov ip, #0x8
    mov r1, #0x7
    mov r2, #0x1
    mov r3, #0x0
    str ip, [r4, #0x388]
    bl func_0202461c
    mov r0, r4
    mov r1, #0x7
    mov r2, #0x0
    bl func_020245c0
    mov r1, #0x1
    mov r0, r4
    mov r2, r1
    bl func_0202aa30
    ldr r1, =data_0207a4a0
    mov r0, r4
    bl func_01ff93d4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
