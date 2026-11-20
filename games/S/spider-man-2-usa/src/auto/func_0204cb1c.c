#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205ab90();
extern char data_0208793c[];
// clang-format off
asm void func_0204cb1c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x0]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, #0x0
    str r0, [r4, #0x0]
    bl func_0205ab90
    mov ip, #0x0
    ldr r0, =data_0208793c
    str ip, [r4, #0x4]
    ldr r2, [r0, #0x0]
    add r1, r4, #0x28
    str r2, [r4, #0x18]
    ldr r3, [r0, #0x4]
    mvn r2, #0x0
    str r3, [r4, #0x1c]
    ldr r3, [r0, #0x8]
    str r3, [r4, #0x20]
    ldr r0, [r0, #0xc]
    str r0, [r4, #0x24]
    swpb r0, ip, [r1]
    str r2, [r4, #0x10]
    str r2, [r4, #0x14]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
