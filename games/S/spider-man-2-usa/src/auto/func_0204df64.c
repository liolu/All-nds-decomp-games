#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201f7a0();
extern void func_0205e64c();
extern void func_0205e9ec();
extern void func_0205ea44();
// clang-format off
asm void func_0204df64(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r4, r0
    add r5, sp, #0x0
L_0204df74:
    bl func_0205ea44
    mov r0, r5
    bl func_0205e9ec
    cmp r0, #0x0
    bne L_0204df74
    add r0, sp, #0x8
    add r1, sp, #0x0
    bl func_0205e64c
    ldrh ip, [sp, #0xc]
    add r0, r4, #0x18
    add lr, sp, #0x10
    ldmia r0, {r0, r1, r2, r3}
    stmia lr, {r0, r1, r2, r3}
    cmp ip, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    add r1, r4, #0x20
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x20]
    cmp r0, #0x0
    beq L_0204dfe4
    mov r0, #0x0
    str r0, [r4, #0x24]
    ldrh r0, [sp, #0x8]
    str r0, [r4, #0x18]
    ldrh r0, [sp, #0xa]
    str r0, [r4, #0x1c]
    b L_0204dff8
L_0204dfe4:
    ldr r0, [r4, #0x24]
    add r0, r0, #0x1
    cmp r0, #0x1
    movge r0, #0x1
    str r0, [r4, #0x24]
L_0204dff8:
    ldrb r0, [r4, #0x20]
    cmp r0, #0x0
    beq L_0204e028
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    ble L_0204e028
    add r1, r4, #0x23
    mov r2, #0x1
    swpb r0, r2, [r1]
    add r1, r4, #0x21
    swpb r0, r2, [r1]
    b L_0204e034
L_0204e028:
    add r1, r4, #0x23
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0204e034:
    ldr r0, [r4, #0x24]
    cmp r0, #0x0
    ble L_0204e068
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    bne L_0204e068
    add r1, r4, #0x22
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r4, #0x21
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0204e074
L_0204e068:
    add r1, r4, #0x22
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0204e074:
    mov r0, r4
    bl func_0201f7a0
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
