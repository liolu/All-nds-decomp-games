#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9f88();
extern void func_02014bcc();
extern void func_02014be0();
extern void func_0201bfc8();
extern void func_0201c3e4();
extern void func_0201d25c();
extern void func_0203ad70();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void r2();
extern char data_02087164[];
extern char data_02087174[];
extern char data_02107b8c[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0200a748(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r5, =data_02107b8c
    add r4, sp, #0x8
    mov r10, r0
    mov r9, r1
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r0, #0x1
    bl func_0201bfc8
    ldr r5, [r0, #0x4]
    mov r4, #0x0
    ldr r0, [r5, #0xc]
    cmp r0, #0x0
    ble L_0200a7d4
    add r6, sp, #0x8
L_0200a790:
    mov r0, r5
    mov r1, r4
    bl func_01ff9f88
    mov r1, r9
    mov r7, r0
    bl func_0201c3e4
    cmp r0, #0x0
    beq L_0200a7c4
    mov r0, r7
    ldr r2, [r0, #0x0]
    mov r1, r6
    ldr r2, [r2, #0x40]
    blx r2
L_0200a7c4:
    ldr r0, [r5, #0xc]
    add r4, r4, #0x1
    cmp r4, r0
    blt L_0200a790
L_0200a7d4:
    mov r0, #0x5
    bl func_0201bfc8
    ldr r8, [r0, #0x4]
    mov r7, #0x0
    ldr r0, [r8, #0xc]
    cmp r0, #0x0
    addle sp, sp, #0x2c
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxle lr
    ldr r11, =data_0215b3d4
    str r7, [sp, #0x4]
    str r7, [sp, #0x0]
    mov r5, #0x1
    mov r4, #0x2
L_0200a80c:
    mov r0, r8
    mov r1, r7
    bl func_01ff9f88
    mov r6, r0
    mov r1, r9
    bl func_0201d25c
    cmp r0, #0x0
    beq L_0200a8c0
    mov r0, r6
    ldr r2, [r0, #0x0]
    add r1, sp, #0x8
    ldr r2, [r2, #0x40]
    blx r2
    cmp r0, #0x0
    beq L_0200a8c0
    add r1, r10, #0x40
    swpb r0, r5, [r1]
    bl func_0203ad70
    ands r0, r0, #0x1
    beq L_0200a870
    bl func_0204cd18
    ldr r1, =data_02087174
    ldr r2, [sp, #0x0]
    bl func_0204c8cc
    b L_0200a880
L_0200a870:
    bl func_0204cd18
    ldr r1, =data_02087164
    ldr r2, [sp, #0x4]
    bl func_0204c8cc
L_0200a880:
    mov r0, r11
    mov r1, r4
    bl func_02014be0
    ldr r1, [r10, #0x38]
    sub r0, r0, r1
    cmp r0, #0x1
    movlt r2, r5
    blt L_0200a8b4
    mov r0, r11
    mov r1, r4
    bl func_02014be0
    ldr r1, [r10, #0x38]
    sub r2, r0, r1
L_0200a8b4:
    mov r0, r11
    mov r1, r4
    bl func_02014bcc
L_0200a8c0:
    ldr r0, [r8, #0xc]
    add r7, r7, #0x1
    cmp r7, r0
    blt L_0200a80c
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
