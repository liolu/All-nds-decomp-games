#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_02000d18();
extern void func_0202f9c8();
extern void func_02031364();
extern void func_020313e0();
extern void func_02031e1c();
extern void func_02031e20();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void func_0204ce64();
extern void func_0204cf50();
extern void r1();
// clang-format off
asm void func_02031a90(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r0, [r4, #0x2f4]
    bl func_0204cf50
    cmp r0, #0x0
    beq L_02031ae4
    ldr r0, [r4, #0x2f4]
    mov r1, #0x3
    bl func_0204ce64
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02031ae4
    ldr r0, [r4, #0x598]
    ldr r5, [r0, #0x20]
    cmp r5, #0x0
    beq L_02031ae4
    bl func_0204cd18
    mov r1, r5
    mov r2, #0x0
    bl func_0204c8cc
L_02031ae4:
    mov r0, r4
    bl func_01ff80fc
    cmp r0, #0x0
    beq L_02031b08
    ldr r0, [r4, #0x2f0]
    cmp r0, #0x0
    beq L_02031b08
    add r0, r0, #0x1c
    bl func_02000d18
L_02031b08:
    ldr r0, [r4, #0x574]
    cmp r0, #0x0
    beq L_02031b48
    add r0, sp, #0x0
    mov r1, r4
    mov r2, #0x4
    bl func_0202f9c8
    ldr r2, [r4, #0x574]
    ldr r1, [sp, #0x4]
    ldr r0, [sp, #0x0]
    str r0, [r2, #0x298]
    str r1, [r2, #0x29c]
    ldr r0, [r4, #0x574]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_02031b48:
    ldr r0, [r4, #0x578]
    cmp r0, #0x0
    beq L_02031b88
    add r0, sp, #0x8
    mov r1, r4
    mov r2, #0x4
    bl func_0202f9c8
    ldr r2, [r4, #0x578]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x8]
    str r0, [r2, #0x298]
    str r1, [r2, #0x29c]
    ldr r0, [r4, #0x578]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_02031b88:
    mov r0, r4
    bl func_02031e20
    ldr r0, [r4, #0x3e8]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    add r1, r4, #0x3d8
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x27c
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x3dc]
    cmp r1, #0x0
    ble L_02031bd4
    mov r0, r4
    sub r1, r1, #0x1
    bl func_020313e0
L_02031bd4:
    ldr r1, [r4, #0x594]
    cmp r1, #0x0
    ble L_02031bec
    mov r0, r4
    sub r1, r1, #0x1
    bl func_02031364
L_02031bec:
    ldr r0, [r4, #0x590]
    cmp r0, #0x0
    beq L_02031c04
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_02031c04:
    mov r0, r4
    bl func_02031e1c
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
