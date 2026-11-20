#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9de8();
extern void func_0203a6cc();
extern void func_0204d468();
extern void func_02053a2c();
extern char data_0211374c[];
// clang-format off
asm void func_0201be5c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r6, r1
    mov r4, r2
    bl func_01ff9de8
    ldr r1, =data_0211374c
    mov r0, #0xbc
    str r1, [r5, #0x0]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0201be90
    mov r1, r6
    bl func_0204d468
L_0201be90:
    str r0, [r5, #0x2f4]
    add r3, r5, #0x27c
    ldrb r0, [r3, #0x0]
    add r2, r5, #0x10
    mov r1, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r3]
    add r0, r5, #0x2f8
    swpb r1, r1, [r2]
    bl func_02053a2c
    add r3, r5, #0x31c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr lr, [r5, #0x2f4]
    add ip, r5, #0x2f8
    ldr r4, [lr, #0x80]
    ldmia ip!, {r0, r1, r2, r3}
    add r4, lr, r4, lsl #0x6
    add r4, r4, #0x4
    stmia r4!, {r0, r1, r2, r3}
    ldmia ip!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia ip, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
