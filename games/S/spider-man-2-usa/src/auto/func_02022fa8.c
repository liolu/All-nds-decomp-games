#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb9d8();
extern void func_01ffc5e8();
extern void func_02021758();
extern void func_0202315c();
extern void func_0202316c();
extern void func_0204b9cc();
extern void func_0204ce64();
extern void func_0204d1a0();
extern void func_02053b80();
extern void func_02053ea4();
extern void r1();
// clang-format off
asm void func_02022fa8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x80
    mov r6, r0
    ldr r0, [r6, #0x2f4]
    mov r1, #0x4
    bl func_0204ce64
    ldr r1, [r0, #0x0]
    cmp r1, #0x0
    addle sp, sp, #0x80
    ldmlefd sp!, {r4, r5, r6, r7, r8, lr}
    bxle lr
    ldrb r0, [r6, #0x3d0]
    cmp r0, #0x0
    addeq sp, sp, #0x80
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    cmp r1, #0x0
    addle r0, r6, #0x298
    ldrle r4, [r0, #0x0]
    ldrle r5, [r0, #0x4]
    ble L_02023010
    add r0, sp, #0x0
    mov r1, r6
    bl func_02021758
    ldr r4, [sp, #0x0]
    ldr r5, [sp, #0x4]
L_02023010:
    ldr r0, [r6, #0x3cc]
    str r4, [r0, #0x298]
    str r5, [r0, #0x29c]
    ldr r0, [r6, #0x3cc]
    ldr r0, [r0, #0x2f4]
    bl func_0204d1a0
    ldr r0, [r6, #0x3cc]
    bl func_01ffb9d8
    ldr r0, [r6, #0x394]
    ldr r1, [r6, #0x390]
    sub r7, r0, r5
    mul r0, r7, r7
    sub r5, r1, r4
    mla r0, r5, r5, r0
    bl func_02053ea4
    mov r4, r0, asr #0x6
    ldr r2, [r6, #0x3cc]
    mov r0, r7, lsl #0xc
    mov r1, r4
    add r8, r2, #0x328
    bl func_0204b9cc
    mov r7, r0
    mov r0, r5, lsl #0xc
    mov r1, r4
    bl func_0204b9cc
    mov r2, r0
    mov r1, r7
    add r0, sp, #0x20
    bl func_0202315c
    add r0, sp, #0x20
    mov r1, r8
    mov r2, r8
    bl func_02053b80
    mov r3, r4, lsl #0xc
    mov r2, r3, asr #0xa
    add r2, r3, r2, lsr #0x15
    mov r1, #0x1000
    add r0, sp, #0x14
    mov r2, r2, asr #0xb
    mov r3, r1
    bl func_01ffc5e8
    add r0, sp, #0x14
    add r3, sp, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r6, #0x3cc]
    ldr r2, [sp, #0xc]
    add r5, r1, #0x328
    ldr r1, [sp, #0x8]
    ldr r3, [sp, #0x10]
    add r0, sp, #0x50
    bl func_0202316c
    add r0, sp, #0x50
    mov r1, r5
    mov r2, r5
    bl func_02053b80
    ldr r0, [r6, #0x3cc]
    cmp r4, #0x64
    ldr ip, [r0, #0x2f4]
    add r5, r0, #0x328
    ldr r4, [ip, #0x80]
    ldmia r5!, {r0, r1, r2, r3}
    add r4, ip, r4, lsl #0x6
    add r4, r4, #0x4
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    addle sp, sp, #0x80
    stmia r4, {r0, r1, r2, r3}
    ldmlefd sp!, {r4, r5, r6, r7, r8, lr}
    bxle lr
    ldr r0, [r6, #0x3cc]
    mov r2, #0x1
    add r1, r0, #0x10
    swpb r0, r2, [r1]
    ldr r0, [r6, #0x3cc]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
    add sp, sp, #0x80
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
