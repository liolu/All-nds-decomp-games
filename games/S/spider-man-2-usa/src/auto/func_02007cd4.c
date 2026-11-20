#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_02000dc4();
extern void func_02006ee8();
extern void func_02007940();
extern void func_02007a58();
extern void func_02007e0c();
extern void func_02008738();
extern void func_02008c50();
extern void func_0200a04c();
extern char data_0206f750[];
// clang-format off
asm void func_02007cd4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02008c50
    cmp r0, #0x0
    beq L_02007d3c
    ldrb r0, [r4, #0x3c0]
    cmp r0, #0x0
    bne L_02007d3c
    ldr r1, [r4, #0x3bc]
    ldr r0, [r4, #0x29c]
    subs r1, r1, r0
    ldr r0, =0x2710
    rsbmi r1, r1, #0x0
    cmp r1, r0
    ble L_02007d3c
    add r1, r4, #0x3c0
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x3b4]
    ldrb r0, [r0, #0x24]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_02007d3c
    mov r0, r4
    bl func_02007e0c
L_02007d3c:
    mov r0, r4
    bl func_01ff80fc
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrb r0, [r4, #0x3c0]
    cmp r0, #0x0
    beq L_02007d9c
    ldr r0, [r4, #0x3b4]
    ldrb r0, [r0, #0x24]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    beq L_02007d88
    mov r0, r4
    bl func_02007940
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02007d88:
    mov r0, r4
    bl func_02007a58
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02007d9c:
    ldr r0, [r4, #0x2f4]
    ldrb r0, [r0, #0x86]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, [r4, #0x2f0]
    mov r1, #0x31
    add r0, r0, #0x1c
    mov r2, #0x700
    bl func_02000dc4
    mov r0, r4
    bl func_02008738
    ldr r0, =data_0206f750
    bl func_0200a04c
    ldr r1, [r4, #0x3b4]
    mov r5, r0
    add r0, r1, #0x8
    bl func_0200a04c
    mov r1, r0
    mov r0, r4
    add r1, r5, r1
    bl func_02006ee8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
