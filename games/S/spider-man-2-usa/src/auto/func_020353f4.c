#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d5a4();
extern void func_02016cb8();
extern void func_0201f7e8();
extern void func_0203a6cc();
extern char data_02123ff0[];
// clang-format off
asm void func_020353f4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r1
    mov r1, #0x3c
    mov r4, r0
    bl func_0200d5a4
    ldr r0, =data_02123ff0
    add r1, r4, #0x38
    str r0, [r4, #0x0]
    str r5, [r4, #0x34]
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r1, r4, #0x58
    mov r2, #0x1
    swpb r0, r2, [r1]
    add r1, r4, #0x59
    swpb r0, r2, [r1]
    str r3, [r4, #0x5c]
    mov r0, #0x30
    str r3, [r4, #0x60]
    bl func_0203a6cc
    movs r1, r0
    beq L_02035458
    bl func_02016cb8
    mov r1, r0
L_02035458:
    mov r0, r4
    mov r2, #0x1
    bl func_0201f7e8
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
