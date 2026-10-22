#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014aec();
extern void func_02035aa4();
extern void func_02044f1c();
extern void r2();
extern char data_0215b3d4[];
// clang-format off
asm void func_0200b6c8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x301]
    cmp r0, #0x0
    bne L_0200b71c
    ldr r0, =data_0215b3d4
    bl func_02014aec
    cmp r0, #0x0
    beq L_0200b71c
    ldr r0, =0x301
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r1, #0x0
    ldr r0, [r4, #0x304]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x18]
    blx r2
    ldr r0, [r4, #0x304]
    mov r1, #0x0
    bl func_02035aa4
L_0200b71c:
    mov r0, r4
    bl func_02044f1c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
