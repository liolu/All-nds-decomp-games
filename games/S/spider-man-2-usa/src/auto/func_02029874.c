#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_02024698();
extern void func_02024730();
extern void func_02024930();
extern void func_02024ac8();
extern void func_02024bd0();
extern void func_02024ee4();
extern void func_02025464();
extern void func_0202589c();
extern void func_020259dc();
extern void func_02026c7c();
extern void func_0202a1b4();
extern void func_0202acbc();
extern void r1();
// clang-format off
asm void func_02029874(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x2f4]
    ldrb r1, [r1, #0x86]
    cmp r1, #0x0
    beq L_02029898
    bl func_020259dc
    ldmfd sp!, {r4, lr}
    bx lr
L_02029898:
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x20
    beq L_020298e0
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02024730
    cmp r0, #0x0
    beq L_020298d8
    mov r0, r4
    bl func_0202589c
    b L_020298e0
L_020298d8:
    mov r0, r4
    bl func_020259dc
L_020298e0:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x10
    beq L_0202992c
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02024698
    cmp r0, #0x0
    beq L_02029924
    mov r0, r4
    bl func_0202589c
    b L_0202992c
L_02029924:
    mov r0, r4
    bl func_020259dc
L_0202992c:
    mov r0, r4
    bl func_02024bd0
    cmp r0, #0x0
    beq L_02029944
    mov r0, r4
    bl func_02026c7c
L_02029944:
    mov r0, r4
    bl func_01ff80fc
    cmp r0, #0x0
    bne L_0202996c
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02024ee4
    ldmfd sp!, {r4, lr}
    bx lr
L_0202996c:
    mov r0, r4
    bl func_02024ac8
    cmp r0, #0x0
    beq L_020299a4
    mov r0, r4
    bl func_02024930
    cmp r0, #0x0
    beq L_020299a4
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02025464
    ldmfd sp!, {r4, lr}
    bx lr
L_020299a4:
    mov r0, r4
    bl func_0202acbc
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_020259dc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
