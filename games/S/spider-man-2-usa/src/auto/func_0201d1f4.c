#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201c9d4();
extern char data_021139b8[];
// clang-format off
asm void func_0201d1f4(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldr ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_0201c9d4
    ldr r1, =data_021139b8
    ldrb r0, [sp, #0x14]
    str r1, [r4, #0x0]
    mov r1, #0x0
    str r1, [r4, #0x350]
    add r1, r4, #0x354
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x18]
    add r3, r4, #0x358
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
