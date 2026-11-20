#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02018290();
extern void func_0201a15c();
extern void func_0203a6cc();
extern char data_02106f6c[];
extern char data_0210c4b8[];
extern char data_02115d38[];
// clang-format off
asm void func_02018b88(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r4, =data_0210c4b8
    mov r5, r0
    str r4, [r5, #0x0]
    add r4, r5, #0x24
    swpb r0, r1, [r4]
    mov r1, #0x0
    ldr r0, [sp, #0x10]
    mov r4, r3
    str r0, [r5, #0x28]
    str r2, [r5, #0x70]
    str r1, [r5, #0x74]
    mov r0, #0x10
    str r1, [r5, #0x78]
    bl func_0203a6cc
    movs r6, r0
    beq L_02018bd8
    bl func_0201a15c
    ldr r0, =data_02106f6c
    str r0, [r6, #0x0]
L_02018bd8:
    mov r0, #0x10
    str r6, [r5, #0x44]
    bl func_0203a6cc
    movs r6, r0
    beq L_02018bf8
    bl func_0201a15c
    ldr r0, =data_02115d38
    str r0, [r6, #0x0]
L_02018bf8:
    str r6, [r5, #0x30]
    mov r0, #0x0
    str r0, [r5, #0x2c]
    ldr r2, [r4, #0x0]
    ldr r1, [sp, #0x14]
    mov r0, r2, asr #0x2
    add r0, r2, r0, lsr #0x1d
    mov r0, r0, asr #0x3
    str r0, [r5, #0x3c]
    ldr r3, [r4, #0x4]
    mov r0, r5
    mov r2, r3, asr #0x2
    add r2, r3, r2, lsr #0x1d
    mov r2, r2, asr #0x3
    str r2, [r5, #0x40]
    ldr r3, [r4, #0x0]
    mov r2, r3, asr #0x3
    add r2, r3, r2, lsr #0x1c
    mov r2, r2, asr #0x4
    bl func_02018290
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
