#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202d72c();
extern void func_0202d7d8();
extern void func_0202d950();
extern void func_02035a0c();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void func_0204d93c();
extern char data_02086f94[];
// clang-format off
asm void func_0202da2c(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r1, #0x0]
    mov r4, r0
    cmp r2, #0x14
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, [r1, #0x4]
    cmp r0, #0x0
    beq L_0202da68
    cmp r0, #0x1
    beq L_0202daf8
    cmp r0, #0x2
    beq L_0202dad4
    ldmfd sp!, {r4, lr}
    bx lr
L_0202da68:
    bl func_0204cd18
    ldr r1, =data_02086f94
    mov r2, #0x0
    bl func_0204c8cc
    ldr r0, [r4, #0x20]
    ldr r1, [r4, #0x98]
    mov r2, #0x2
    bl func_02035a0c
    ldr r0, [r4, #0x88]
    bl func_0204d93c
    ldr r1, [r4, #0x4]
    ldr r0, [r0, #0x0]
    sub r0, r1, r0
    str r0, [r4, #0x3c]
    ldr r0, [r4, #0x88]
    bl func_0204d93c
    ldr r1, [r0, #0x4]
    ldr r2, [r4, #0x8]
    mov r0, r4
    sub r1, r2, r1
    str r1, [r4, #0x40]
    bl func_0202d950
    add r1, r4, #0xb0
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0202dad4:
    add r1, r4, #0x29
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x4]
    str r0, [r4, #0x34]
    ldr r0, [r4, #0x8]
    str r0, [r4, #0x38]
    ldmfd sp!, {r4, lr}
    bx lr
L_0202daf8:
    ldr r0, [r4, #0x84]
    mov r2, #0x2
    ldrb r0, [r0, #0x302]
    cmp r0, #0x0
    ldrne r0, [r4, #0x44]
    strne r0, [r4, #0x4]
    ldrne r0, [r4, #0x48]
    strne r0, [r4, #0x8]
    ldr r0, [r4, #0x20]
    ldr r1, [r4, #0x94]
    bl func_02035a0c
    mov r0, r4
    bl func_0202d7d8
    add r1, r4, #0x29
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, r4
    bl func_0202d72c
    add r1, r4, #0xb0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
