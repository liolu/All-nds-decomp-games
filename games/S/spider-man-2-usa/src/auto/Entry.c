#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000aac();
extern void func_02000b50();
extern void func_02000bc4();
extern void func_02000cac();
extern void func_020580bc();
extern void func_02059ff0();
extern char BuildInfo[];
extern char data_023c0000[];
extern char func_01ffdc70[];
extern char main[];
// clang-format off
asm void Entry(void) {
    mov ip, #0x4000000
    str ip, [ip, #0x208]
    bl func_02000bc4
    mov r0, #0x13
    msr cpsr_c, r0
    ldr r0, =data_023c0000
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12
    msr cpsr_c, r0
    ldr r0, =data_023c0000
    add r0, r0, #0x3fc0
    sub r0, r0, #0x40
    mov sp, r0
    ldr r1, =0x400
    sub r1, r0, r1
    mov r0, #0x1f
    msr cpsr_fsxc, r0
    sub sp, r1, #0x4
    ldr r1, =BuildInfo
    ldr r0, [r1, #0x14]
    bl func_02000aac
    bl func_02000b50
    mov r0, #0x0
    ldr r1, =data_023c0000
    mov r2, #0x4000
    bl func_020580bc
    mov r0, #0x0
    ldr r1, =0x5000000
    mov r2, #0x400
    bl func_020580bc
    mov r0, #0x200
    ldr r1, =0x7000000
    mov r2, #0x400
    bl func_020580bc
    ldr r1, =data_023c0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    ldr r0, =func_01ffdc70
    str r0, [r1, #0x0]
    bl func_02000cac
    bl func_02059ff0
    ldr r1, =main
    ldr lr, =0xffff0000
    bx r1
}
// clang-format on
