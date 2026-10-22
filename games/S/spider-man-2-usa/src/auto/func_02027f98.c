#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023ec0();
extern void func_0202461c();
extern void func_02024698();
extern void func_02024730();
extern void func_02024930();
extern void func_02024ac8();
extern void func_02024bd0();
extern void func_02025464();
extern void func_0202589c();
extern void func_020259dc();
extern void func_02026c7c();
extern void r1();
// clang-format off
asm void func_02027f98(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x20
    beq L_02027fdc
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02024730
    cmp r0, #0x0
    beq L_02027fdc
    mov r0, r4
    bl func_0202589c
L_02027fdc:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x10
    beq L_0202801c
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02024698
    cmp r0, #0x0
    beq L_0202801c
    mov r0, r4
    bl func_0202589c
L_0202801c:
    mov r0, r4
    bl func_02023ec0
    cmp r0, #0x0
    beq L_02028048
    mov r2, #0x0
    mov ip, #0x1
    mov r0, r4
    mov r3, r2
    mov r1, #0x8
    str ip, [r4, #0x388]
    bl func_0202461c
L_02028048:
    ldr r0, [r4, #0x2f4]
    ldrb r0, [r0, #0x86]
    cmp r0, #0x0
    beq L_02028068
    mov r0, r4
    bl func_020259dc
    ldmfd sp!, {r4, lr}
    bx lr
L_02028068:
    mov r0, r4
    bl func_02024ac8
    cmp r0, #0x0
    beq L_02028098
    mov r0, r4
    bl func_02024930
    cmp r0, #0x0
    beq L_02028098
    mov r0, r4
    bl func_02025464
    ldmfd sp!, {r4, lr}
    bx lr
L_02028098:
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
