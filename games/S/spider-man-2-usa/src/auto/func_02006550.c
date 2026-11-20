#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014be0();
extern void func_0201fa80();
extern void func_02034bfc();
extern char data_020767c0[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02006550(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02034bfc
    ldrb r0, [r4, #0x78]
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r2, [r4, #0x68]
    mvn r0, #0x0
    cmp r2, r0
    mov r3, #0x0
    bne L_02006590
    ldr r1, [r4, #0x6c]
    cmp r1, r0
    moveq r3, #0x1
    beq L_020065ec
L_02006590:
    mvn r0, #0x0
    cmp r2, r0
    beq L_020065b8
    ldr r1, [r4, #0x68]
    ldr r0, =data_0215b3d4
    bl func_02014be0
    ldr r1, [r4, #0x70]
    cmp r0, r1
    movge r3, #0x1
    movlt r3, #0x0
L_020065b8:
    ldr r1, [r4, #0x6c]
    mvn r0, #0x0
    cmp r1, r0
    beq L_020065ec
    cmp r3, #0x0
    beq L_020065e8
    ldr r0, =data_0215b3d4
    bl func_02014be0
    ldr r1, [r4, #0x74]
    cmp r0, r1
    movge r3, #0x1
    bge L_020065ec
L_020065e8:
    mov r3, #0x0
L_020065ec:
    cmp r3, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    add r1, r4, #0x7c
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x7c]
    cmp r0, #0x5
    ldmlefd sp!, {r4, lr}
    bxle lr
    ldr r0, =data_020767c0
    add r2, r4, #0x78
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0201fa80
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
