#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cf68();
extern void r2();
extern char data_020ffeb4[];
extern char data_02124240[];
// clang-format off
asm void func_020370f8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r4, =data_020ffeb4
    mov r5, r0
    ldr r0, =data_02124240
    str r4, [r5, #0x0]
    str r0, [r5, #0x0]
    ldr ip, [r2, #0x0]
    ldr r4, [r2, #0x4]
    ldr r0, [sp, #0x10]
    str ip, [r5, #0x104]
    str r4, [r5, #0x108]
    str r3, [r5, #0x10c]
    str r0, [r5, #0x110]
    ldr r3, [r2, #0x4]
    ldr r0, [r2, #0x0]
    mov r4, r1
    rsb r1, r3, #0xc0
    str r0, [r5, #0x114]
    rsb r2, r0, #0x100
    cmp r1, #0xc0
    movgt r1, #0xc0
    cmp r2, #0x100
    movgt r2, #0x100
    str r3, [r5, #0x118]
    str r2, [r5, #0x11c]
    str r1, [r5, #0x120]
    ldrb r0, [sp, #0x14]
    add r1, r5, #0x124
    swpb r0, r0, [r1]
    ldrb r1, [r5, #0x124]
    ldr r0, [r5, #0x10c]
    bl func_0200cf68
    mov r0, r5
    ldr r2, [r0, #0x0]
    mov r1, r4
    ldr r2, [r2, #0x20]
    blx r2
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
