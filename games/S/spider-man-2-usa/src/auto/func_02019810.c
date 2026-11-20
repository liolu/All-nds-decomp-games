#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02019724();
extern void func_020197f4();
extern void func_0201b098();
extern void r2();
extern char data_02076ba0[];
extern char data_02077f28[];
extern char data_0210c4f8[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02019810(void) {
    stmfd sp!, {r4, lr}
    mov r2, r1
    ldr r1, =data_02077f28
    mov r3, #0x0
    mov r4, r0
    bl func_0201b098
    ldr r0, =data_0210c4f8
    ldr r1, =data_0215b3d4
    str r0, [r4, #0x0]
    ldr r2, [r1, #0x0]
    ldr r0, =data_02076ba0
    str r2, [r4, #0x54]
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    add r0, r1, #0x1
    cmp r2, r0
    moveq r1, #0x1
    movne r1, #0x0
    add r2, r4, #0x58
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_020197f4
    mov r0, r4
    bl func_02019724
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x0
    ldr r2, [r2, #0x28]
    blx r2
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
