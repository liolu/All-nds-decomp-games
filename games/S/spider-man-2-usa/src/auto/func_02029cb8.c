#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_02014ba4();
extern void func_020245c0();
extern void func_0202461c();
extern void func_0202aa30();
extern char data_0207a4b8[];
extern char data_0215b3d4[];
extern char data_0215d5d4[];
// clang-format off
asm void func_02029cb8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x3
    mov r2, #0x0
    bl func_02014ba4
    ldr r0, =data_0215d5d4
    ldr r1, =data_0215d5d4
    ldrb r0, [r0, #0x0]
    mov r2, #0x0
    mov r3, r2
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    swpb r0, r0, [r1]
    ldrb r0, [r1, #0x0]
    cmp r0, #0x0
    movne r1, #0x13
    moveq r1, #0x14
    mov r0, r4
    bl func_0202461c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x13
    bl func_020245c0
    mov r0, r4
    mov r1, #0x13
    mov r2, #0x0
    bl func_0202aa30
    mov r2, #0xc
    ldr r1, =data_0207a4b8
    mov r0, r4
    str r2, [r4, #0x388]
    bl func_01ff93d4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
