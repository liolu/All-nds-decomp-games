#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001198();
extern void func_02005d68();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_02086ff4[];
extern char data_02087214[];
extern char data_02087654[];
extern char data_020878f4[];
// clang-format off
asm void func_02005c1c(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r1, #0x0]
    mov r4, r0
    cmp r2, #0x19
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r1, [r1, #0x4]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02005d50
L_02005c44:
    b L_02005d50
    b L_02005c5c
    b L_02005c68
    b L_02005c8c
    b L_02005cb0
    b L_02005d04
L_02005c5c:
    bl func_02005d68
    ldmfd sp!, {r4, lr}
    bx lr
L_02005c68:
    add r1, r4, #0x5
    mov r0, #0x1
    swpb r0, r0, [r1]
    bl func_0204cd18
    ldr r1, =data_02087654
    mov r2, #0x0
    bl func_0204c8cc
    ldmfd sp!, {r4, lr}
    bx lr
L_02005c8c:
    add r1, r4, #0x6
    mov r0, #0x1
    swpb r0, r0, [r1]
    bl func_0204cd18
    ldr r1, =data_02086ff4
    mov r2, #0x0
    bl func_0204c8cc
    ldmfd sp!, {r4, lr}
    bx lr
L_02005cb0:
    bl func_02001198
    cmp r0, #0x0
    beq L_02005cec
    add r1, r4, #0x7
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r4, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_0204cd18
    ldr r1, =data_02087214
    mov r2, #0x0
    bl func_0204c8cc
    ldmfd sp!, {r4, lr}
    bx lr
L_02005cec:
    bl func_0204cd18
    ldr r1, =data_020878f4
    mov r2, #0x0
    bl func_0204c8cc
    ldmfd sp!, {r4, lr}
    bx lr
L_02005d04:
    bl func_02001198
    cmp r0, #0x0
    beq L_02005d40
    add r1, r4, #0x7
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x8
    mov r0, #0x1
    swpb r0, r0, [r1]
    bl func_0204cd18
    ldr r1, =data_02087214
    mov r2, #0x0
    bl func_0204c8cc
    ldmfd sp!, {r4, lr}
    bx lr
L_02005d40:
    bl func_0204cd18
    ldr r1, =data_020878f4
    mov r2, #0x0
    bl func_0204c8cc
L_02005d50:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
