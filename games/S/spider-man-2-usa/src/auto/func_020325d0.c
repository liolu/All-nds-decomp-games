#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02032c28();
// clang-format off
asm void func_020325d0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    add r3, sp, #0x8
    mov r4, r1
    mov r5, r0
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0x0
    add r0, r5, #0x10
    str r1, [sp, #0x10]
    str r0, [sp, #0x0]
    ldr r0, [r4, #0x8]
    ldr r2, =0xdeadbeef
    str r0, [sp, #0x4]
    mov r0, r5
    mov r1, r3
    str r2, [r5, #0x10]
    mov r6, #0x0
    bl func_02032c28
    ldr r0, [r4, #0xc]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_020326bc
L_0203262c:
    b L_02032644
    b L_02032658
    b L_0203266c
    b L_02032680
    b L_020326ac
    b L_02032694
L_02032644:
    ldr r1, [r5, #0x10]
    ldr r0, [r4, #0x10]
    cmp r1, r0
    movgt r6, #0x1
    b L_020326bc
L_02032658:
    ldr r1, [r5, #0x10]
    ldr r0, [r4, #0x10]
    cmp r1, r0
    movlt r6, #0x1
    b L_020326bc
L_0203266c:
    ldr r1, [r5, #0x10]
    ldr r0, [r4, #0x10]
    cmp r1, r0
    moveq r6, #0x1
    b L_020326bc
L_02032680:
    ldr r1, [r5, #0x10]
    ldr r0, [r4, #0x10]
    cmp r1, r0
    movne r6, #0x1
    b L_020326bc
L_02032694:
    ldr r1, [r4, #0x10]
    ldr r0, [r5, #0x10]
    and r0, r1, r0
    cmp r1, r0
    moveq r6, #0x1
    b L_020326bc
L_020326ac:
    ldr r1, [r5, #0x10]
    ldr r0, [r4, #0x10]
    ands r0, r1, r0
    movne r6, #0x1
L_020326bc:
    ldr r1, [r5, #0x14]
    mov r0, r6
    add r2, r1, #0x8
    swpb r1, r6, [r2]
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
