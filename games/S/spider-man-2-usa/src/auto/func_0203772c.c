#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fadc();
extern void func_0202b630();
extern void func_0202b678();
extern void func_0202b6ac();
extern char data_020ffeb4[];
extern char data_02124270[];
extern char data_02157ea4[];
// clang-format off
asm void func_0203772c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r3, =data_020ffeb4
    mov r4, r0
    ldr r0, =data_02124270
    str r3, [r4, #0x0]
    str r0, [r4, #0x0]
    mov r0, #0x0
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
    ldr r3, [r1, #0x0]
    ldr r0, [r1, #0x4]
    mov r5, r2
    str r3, [r4, #0xc]
    str r0, [r4, #0x10]
    ldr r0, [r1, #0x8]
    ldr r2, [r1, #0xc]
    mov r1, r5
    str r0, [r4, #0x14]
    add r0, r4, #0x1c
    str r2, [r4, #0x18]
    bl func_0202b6ac
    add r1, r4, #0x48
    swpb r0, r5, [r1]
    mov r2, #0x0
    add r0, r4, #0x1c
    add r1, r4, #0xc
    str r2, [r4, #0x4c]
    bl func_0202b678
    ldr r1, =data_02157ea4
    add r0, r4, #0x1c
    bl func_0202b630
    mov r0, r4
    bl func_0201fadc
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
