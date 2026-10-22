#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a6c0();
extern void func_0203aa8c();
extern void func_0203ba60();
extern void func_0203c6cc();
extern void func_0203cd4c();
extern void func_0204aa74();
extern void func_0204ab28();
extern void func_020536bc();
extern void func_0205376c();
extern char data_02126290[];
extern char data_02160638[];
extern char data_0216063c[];
extern char data_02160640[];
extern char data_02160644[];
extern char data_02160648[];
extern char func_0204a978[];
extern char func_0204a9a8[];
extern char func_0204a9d8[];
extern char func_0204aa20[];
extern char func_0204aa68[];
extern char func_0204aa80[];
extern char func_0204aaa4[];
extern char func_0204aaac[];
extern char func_0204aab8[];
extern char func_0204aaf0[];
// clang-format off
asm void func_0204a7f4(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x48
    ldr r1, =data_02160648
    mov r2, #0x0
    mov r0, #0x2
    str r2, [r1, #0x0]
    bl func_020536bc
    mov r0, #0x0
    mov r1, r0
    bl func_0205376c
    mov r4, r0
    bl func_0204aa74
    ldr r2, =data_02160640
    mov r1, r4
    str r0, [r2, #0x0]
    bl func_0205376c
    ldr r1, =func_0204aa74
    ldr r0, =func_0204aa68
    str r1, [sp, #0x4]
    ldr r1, =func_0204aaf0
    str r0, [sp, #0x8]
    ldr r0, =func_0204aab8
    str r1, [sp, #0xc]
    ldr r1, =func_0204aaac
    str r0, [sp, #0x10]
    ldr r0, =func_0204aaa4
    str r1, [sp, #0x14]
    ldr r1, =func_0204aa80
    str r0, [sp, #0x18]
    mov r0, #0x2
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
    mov r2, #0x63
    str r2, [sp, #0x28]
    mov r2, #0x3e8
    str r2, [sp, #0x38]
    mov r0, #0x7a
    add r1, sp, #0x24
    swpb r0, r0, [r1]
    ldr r1, =func_0204a9a8
    ldr r0, =func_0204a978
    str r1, [sp, #0x2c]
    str r0, [sp, #0x30]
    mov r0, #0x30
    add r1, sp, #0x34
    swpb r0, r0, [r1]
    ldr r1, =func_0204aa20
    ldr r0, =func_0204a9d8
    str r1, [sp, #0x3c]
    str r0, [sp, #0x40]
    add r0, sp, #0x4
    add r1, sp, #0xc
    add r2, sp, #0x20
    mov r3, #0x0
    bl func_0203cd4c
    ldr r1, =data_02160644
    ldr r0, =data_02126290
    str r1, [sp, #0x0]
    mov r1, #0x0
    mov r2, r1
    mov r3, #0x1
    bl func_0203c6cc
    ldr r0, =data_02160644
    ldr r0, [r0, #0x0]
    bl func_0203ba60
    ldr r1, =data_02160638
    str r0, [r1, #0x0]
    mov r0, r0, lsl #0x3
    bl func_0203a6c0
    ldr r2, =data_0216063c
    mov r1, #0x0
    str r0, [r2, #0x0]
    ldr r2, =data_02160638
    ldr r2, [r2, #0x0]
    mov r2, r2, lsl #0x3
    bl func_0203aa8c
    bl func_0204ab28
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
