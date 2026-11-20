#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_02006db0();
extern void func_02006e04();
extern void func_02007940();
extern void func_02007a58();
extern void func_02007e0c();
extern void func_02007f2c();
extern void func_02008a3c();
extern void func_02008c50();
// clang-format off
asm void func_02007f7c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02008c50
    cmp r0, #0x0
    beq L_02007fe4
    ldrb r0, [r4, #0x3c0]
    cmp r0, #0x0
    bne L_02007fe4
    ldr r1, [r4, #0x3bc]
    ldr r0, [r4, #0x29c]
    subs r1, r1, r0
    ldr r0, =0x2710
    rsbmi r1, r1, #0x0
    cmp r1, r0
    ble L_02007fe4
    add r1, r4, #0x3c0
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x3b4]
    ldrb r0, [r0, #0x24]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_02007fe4
    mov r0, r4
    bl func_02007e0c
L_02007fe4:
    mov r0, r4
    bl func_01ff80fc
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrb r0, [r4, #0x3c0]
    cmp r0, #0x0
    beq L_02008044
    ldr r0, [r4, #0x3b4]
    ldrb r0, [r0, #0x24]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    beq L_02008030
    mov r0, r4
    bl func_02007940
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02008030:
    mov r0, r4
    bl func_02007a58
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02008044:
    ldr r0, [r4, #0x2f4]
    ldrb r0, [r0, #0x86]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0xf
    bl func_02008a3c
    mov r5, r0
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, r5
    bl func_02006e04
    ldrb r2, [r4, #0x363]
    mov r0, r4
    mov r1, r5
    bl func_02006db0
    mov r0, r4
    bl func_02007f2c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
