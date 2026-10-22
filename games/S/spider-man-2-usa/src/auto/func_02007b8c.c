#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_02007a58();
extern void func_02007b1c();
extern void func_02007e0c();
extern void func_02008c50();
// clang-format off
asm void func_02007b8c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02008c50
    cmp r0, #0x0
    beq L_02007bf0
    ldrb r0, [r4, #0x3c0]
    cmp r0, #0x0
    bne L_02007bf0
    ldr r1, [r4, #0x3bc]
    ldr r0, [r4, #0x29c]
    subs r1, r1, r0
    ldr r0, =0x2710
    rsbmi r1, r1, #0x0
    cmp r1, r0
    ble L_02007bf0
    add r1, r4, #0x3c0
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x3b4]
    ldrb r0, [r0, #0x24]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_02007bf0
    mov r0, r4
    bl func_02007e0c
L_02007bf0:
    mov r0, r4
    bl func_01ff80fc
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrb r0, [r4, #0x3c0]
    cmp r0, #0x0
    beq L_02007c20
    mov r0, r4
    bl func_02007a58
    ldmfd sp!, {r4, lr}
    bx lr
L_02007c20:
    mov r0, r4
    bl func_02007b1c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
