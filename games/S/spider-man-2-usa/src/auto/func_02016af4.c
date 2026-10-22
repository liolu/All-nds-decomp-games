#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02016760();
extern void func_020167bc();
extern void func_0201f714();
// clang-format off
asm void func_02016af4(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, [r1, #0x0]
    cmp r2, #0x2
    bne L_02016bcc
    ldr r2, [r1, #0x4]
    cmp r2, #0x6
    addls pc, pc, r2, lsl #0x2
    b L_02016bd0
L_02016b18:
    b L_02016bd0
    b L_02016ba4
    b L_02016bb8
    b L_02016b34
    b L_02016b54
    b L_02016b74
    b L_02016b8c
L_02016b34:
    add r2, r0, #0x15
    mov r3, #0x1
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    add r1, r0, #0x16
    swpb r0, r3, [r1]
    ldmfd sp!, {lr}
    bx lr
L_02016b54:
    add r2, r0, #0x15
    mov r3, #0x0
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    add r1, r0, #0x16
    swpb r0, r3, [r1]
    ldmfd sp!, {lr}
    bx lr
L_02016b74:
    add r1, r0, #0x15
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02016b8c:
    add r1, r0, #0x16
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02016ba4:
    ldr r1, [r1, #0x8]
    bl func_020167bc
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02016bb8:
    ldr r1, [r1, #0x8]
    bl func_02016760
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02016bcc:
    bl func_0201f714
L_02016bd0:
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
