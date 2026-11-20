#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c464();
extern void func_0201fadc();
extern char data_020ffeb4[];
extern char data_0210908c[];
// clang-format off
asm void func_0200c9b8(void) {
    stmfd sp!, {r4, lr}
    ldr ip, =data_020ffeb4
    mov r4, r0
    ldr r0, =data_0210908c
    str ip, [r4, #0x0]
    str r0, [r4, #0x0]
    str r1, [r4, #0x4]
    ldr ip, [sp, #0x8]
    str r2, [r4, #0x8]
    add r1, r4, #0xc
    swpb r0, r3, [r1]
    mov r1, ip, lsr #0x1
    add r0, r4, #0x1c
    str r1, [r4, #0x10]
    bl func_0200c464
    mov r0, r4
    bl func_0201fadc
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
