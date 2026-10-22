#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205abbc();
extern char data_0208793c[];
// clang-format off
asm void func_0204c714(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x0]
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldrb r0, [r4, #0x28]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    add r0, r4, #0xc
    mov r1, #0x0
    bl func_0205abbc
    ldr r0, =data_0208793c
    add r1, r4, #0x28
    ldr r3, [r0, #0x0]
    mov r2, #0x0
    str r3, [r4, #0x18]
    ldr r3, [r0, #0x4]
    str r3, [r4, #0x1c]
    ldr r3, [r0, #0x8]
    str r3, [r4, #0x20]
    ldr r0, [r0, #0xc]
    str r0, [r4, #0x24]
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
