#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02020d84();
extern void r1();
extern char data_021581b0[];
// clang-format off
asm void func_02020f54(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x28]
    blx r1
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =data_021581b0
    ldr r3, [r4, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r3, #0x2f4]
    and r0, r0, #0x3
    ldr r1, [r1, #0xac]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02021018
L_02020f98:
    b L_02020fa8
    b L_02020fd4
    b L_02021008
    b L_02020fec
L_02020fa8:
    ldr r0, =0x361
    mov r2, #0x0
    add r3, r3, r0
    swpb r0, r2, [r3]
    ldr r0, [r4, #0x8]
    bl func_02020d84
    add r1, r4, #0xd
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02020fd4:
    ldr r0, [r4, #0x8]
    mov r2, #0x1
    bl func_02020d84
    add r1, r4, #0xd
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02020fec:
    ldr r1, [r4, #0x4]
    ldr r0, =0x361
    mov r2, #0x0
    add r1, r1, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02021008:
    ldr r0, =0x361
    mov r2, #0x1
    add r1, r3, r0
    swpb r0, r2, [r1]
L_02021018:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
