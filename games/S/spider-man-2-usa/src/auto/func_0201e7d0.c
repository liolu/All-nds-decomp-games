#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201b098();
extern void func_0201e224();
extern void func_0201e3ec();
extern void func_0201fadc();
extern char data_02077af0[];
extern char data_0211403c[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0201e7d0(void) {
    stmfd sp!, {r4, lr}
    mov r2, r1
    ldr r1, =data_02077af0
    mov r3, #0x0
    mov r4, r0
    bl func_0201b098
    ldr r0, =data_0211403c
    mov r1, #0x0
    str r0, [r4, #0x0]
    mov r0, r4
    str r1, [r4, #0x54]
    add r2, r4, #0x80
    swpb r1, r1, [r2]
    bl func_0201fadc
    mov r2, #0x0
    mov r1, r2
L_0201e810:
    add r0, r4, r2, lsl #0x2
    add r2, r2, #0x1
    str r1, [r0, #0x58]
    cmp r2, #0x8
    blt L_0201e810
    mov r0, r4
    bl func_0201e3ec
    ldr r1, =data_0215b3d4
    mov r0, r4
    ldr r1, [r1, #0x54]
    bl func_0201e224
    add r1, r4, #0x81
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
