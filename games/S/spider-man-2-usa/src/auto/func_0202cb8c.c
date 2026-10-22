#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d38c();
extern void func_0202ca98();
extern void func_0202d0dc();
extern void func_0202d11c();
extern void func_0202d9f8();
extern void func_0202da04();
extern void func_02035bc8();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void r1();
extern char data_02087294[];
extern char data_0215d63c[];
extern char data_0215d690[];
extern char data_0215d694[];
// clang-format off
asm void func_0202cb8c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    mov r5, r0
    bl func_0200d38c
    ldrb r0, [r5, #0x34]
    cmp r0, #0x0
    beq L_0202cbbc
    ldr r0, =data_0215d694
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0202cbbc:
    ldr r0, [r5, #0xa4]
    cmp r0, #0x0
    beq L_0202cbcc
    bl func_02035bc8
L_0202cbcc:
    ldr r0, =data_0215d690
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x44]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, =data_0215d63c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0202ccb0
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r5, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0202ccb0:
    ldr r0, [r5, #0x38]
    cmp r0, #0x0
    ble L_0202ccf8
    ldr r0, [r5, #0x4c]
    bl func_0202d0dc
    cmp r0, #0x0
    beq L_0202cce8
    ldrb r0, [r5, #0xa0]
    cmp r0, #0x0
    bne L_0202cce8
    bl func_0204cd18
    ldr r1, =data_02087294
    mov r2, #0x0
    bl func_0204c8cc
L_0202cce8:
    ldr r0, [r5, #0x4c]
    bl func_0202d0dc
    add r1, r5, #0xa0
    swpb r0, r0, [r1]
L_0202ccf8:
    ldr r0, [r5, #0x38]
    mov r4, #0x0
    cmp r0, #0x0
    addle sp, sp, #0x24
    ldmlefd sp!, {r4, r5, r6, r7, lr}
    bxle lr
    add r7, sp, #0x0
    add r6, sp, #0x10
L_0202cd18:
    add r0, r5, r4, lsl #0x2
    ldr r0, [r0, #0x4c]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r1, [r5, #0x44]
    mov r0, r7
    bl func_0202da04
    add r0, r5, r4, lsl #0x2
    ldr r1, [r0, #0x4c]
    mov r0, r6
    bl func_0202d11c
    mov r0, r5
    mov r1, r7
    mov r2, r6
    bl func_0202ca98
    cmp r0, #0x0
    beq L_0202cd7c
    add r0, r5, r4, lsl #0x2
    ldr r0, [r0, #0x4c]
    bl func_0202d0dc
    cmp r0, #0x0
    beq L_0202cd7c
    ldr r0, [r5, #0x44]
    bl func_0202d9f8
L_0202cd7c:
    ldr r0, [r5, #0x38]
    add r4, r4, #0x1
    cmp r4, r0
    blt L_0202cd18
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
