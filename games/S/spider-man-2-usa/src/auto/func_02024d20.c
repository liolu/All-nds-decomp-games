#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8084();
extern void func_01ff80ac();
extern void func_01ffb3cc();
extern void func_01ffb42c();
extern void func_01ffb458();
extern void func_020245c0();
extern void func_02024698();
extern void func_02024730();
extern void func_020249d8();
extern void r1();
// clang-format off
asm void func_02024d20(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r1, #0xe
    bl func_020249d8
    add r4, r0, #0x8
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x20
    beq L_02024de4
    ldr r1, =0x362
    mov r0, r5
    add r2, r5, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02024730
    cmp r0, #0x0
    beq L_02024db8
    ldr r0, [r5, #0x2f0]
    ldr r1, [r4, #0x8]
    ldr r0, [r0, #0x10]
    rsb r1, r1, #0x0
    cmp r1, r0
    addge sp, sp, #0x4
    ldmgefd sp!, {r4, r5, lr}
    bxge lr
    mov r0, r5
    mov r1, r4
    bl func_01ffb458
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    bl func_01ffb3cc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02024db8:
    mov r1, #0x1
    mov r0, r5
    mov r2, r1
    bl func_020245c0
    add r1, r5, #0x13c
    ldr r0, [r1, #0x0]
    add sp, sp, #0x4
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02024de4:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x10
    beq L_02024e8c
    ldr r1, =0x362
    mov r0, r5
    add r2, r5, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02024698
    cmp r0, #0x0
    beq L_02024e60
    ldr r0, [r5, #0x2f0]
    ldr r1, [r4, #0x8]
    ldr r0, [r0, #0x10]
    cmp r1, r0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, lr}
    bxle lr
    mov r0, r5
    mov r1, r4
    bl func_01ffb458
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_01ffb3cc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02024e60:
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x0
    bl func_020245c0
    add r1, r5, #0x140
    ldr r0, [r1, #0x0]
    add sp, sp, #0x4
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02024e8c:
    mov r0, r5
    bl func_01ff80ac
    cmp r0, #0x0
    bne L_02024eac
    mov r0, r5
    bl func_01ff8084
    cmp r0, #0x0
    beq L_02024ec8
L_02024eac:
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x0
    bl func_020245c0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02024ec8:
    mov r0, r5
    mov r1, #0x1a
    bl func_01ffb42c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
