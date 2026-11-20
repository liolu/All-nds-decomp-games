#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02005b00();
extern void func_02014bf8();
extern void func_0201a898();
extern void func_0201e224();
extern void r1();
extern char data_02157e10[];
extern char data_0215b3d4[];
extern char data_0215d694[];
// clang-format off
asm void func_0201e120(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r1, =data_02157e10
    mov r4, r0
    ldr r0, [r1, #0x0]
    bl func_02005b00
    ldrb r1, [r4, #0x81]
    cmp r1, r0
    beq L_0201e194
    ldr r0, =data_02157e10
    ldr r0, [r0, #0x0]
    bl func_02005b00
    add r1, r4, #0x81
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x81]
    cmp r0, #0x0
    bne L_0201e194
    ldr r0, =data_0215b3d4
    ldr r1, [r0, #0x54]
    bl func_02014bf8
    cmp r0, #0x0
    bne L_0201e184
    mov r0, r4
    mov r1, #0x7
    bl func_0201e224
    b L_0201e194
L_0201e184:
    ldr r1, =data_0215b3d4
    mov r0, r4
    ldr r1, [r1, #0x54]
    bl func_0201e224
L_0201e194:
    mov r0, r4
    bl func_0201a898
    ldr r0, [r4, #0x54]
    cmp r0, #0x0
    beq L_0201e1b4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0201e1b4:
    ldr r5, =data_02157e10
    mov r6, #0x0
L_0201e1bc:
    add r0, r4, r6, lsl #0x2
    ldr r0, [r0, #0x58]
    cmp r0, #0x0
    beq L_0201e1f0
    ldr r0, [r5, #0x0]
    bl func_02005b00
    cmp r0, #0x0
    bne L_0201e1f0
    add r0, r4, r6, lsl #0x2
    ldr r0, [r0, #0x58]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0201e1f0:
    add r6, r6, #0x1
    cmp r6, #0x8
    blt L_0201e1bc
    ldr r0, =data_0215d694
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
