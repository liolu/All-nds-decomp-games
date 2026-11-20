#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014cac();
extern void func_020151b4();
extern void func_02019a30();
extern void func_0203a6d8();
extern void func_0203b66c();
extern void func_0203b82c();
extern char data_02076ba0[];
extern char data_02077358[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02015374(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x64
    mov r6, r0
    ldr r0, =data_0215b3d4
    mov r5, r1
    bl func_02014cac
    ldr r1, =data_02076ba0
    mov r4, r0
    ldr r7, [r1, #0x0]
    mov r9, #0x0
    cmp r7, #0x0
    ble L_020153cc
    add r8, sp, #0x0
L_020153a8:
    mov r0, r4
    mov r1, r9
    bl func_0203b82c
    bl func_0203b66c
    add r9, r9, #0x1
    swpb r0, r0, [r8]
    cmp r9, r7
    add r8, r8, #0x1
    blt L_020153a8
L_020153cc:
    add r1, sp, #0x0
    add r2, r1, r7
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr r0, =data_02077358
    bl func_02019a30
    mov r1, r0
    add r0, sp, #0x20
    add r2, sp, #0x0
    bl func_0203a6d8
    add r1, sp, #0x20
    mov r0, r6
    mov r2, r5
    bl func_020151b4
    add sp, sp, #0x64
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
