#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023e30();
extern void func_02024930();
extern void func_02024ac8();
extern void func_02024bd0();
extern void func_02024ee4();
extern void func_020254fc();
extern void func_02026c7c();
extern void func_0202a1b4();
extern void r1();
// clang-format off
asm void func_02023890(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, [r4, #0x2f4]
    ldrb r1, [r2, #0x85]
    cmp r1, #0x0
    bne L_020238bc
    ldrb r1, [r2, #0x86]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    bl func_02023e30
L_020238bc:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    beq L_020238f8
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_020254fc
L_020238f8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_02023934
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_020254fc
L_02023934:
    mov r0, r4
    bl func_02024ac8
    cmp r0, #0x0
    beq L_02023988
    mov r0, r4
    bl func_02024930
    cmp r0, #0x0
    beq L_02023988
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02024ee4
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    ldr r0, =0x362
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02023988:
    mov r0, r4
    bl func_02024bd0
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02026c7c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
