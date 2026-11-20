#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02044cd4();
extern char data_020ffeb4[];
extern char data_02124800[];
// clang-format off
asm void func_02044e5c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, =data_020ffeb4
    mov r4, r0
    ldr r3, =data_02124800
    str ip, [r4, #0x0]
    str r3, [r4, #0x0]
    mov r3, #0x0
    str r3, [r4, #0x144]
    add ip, r4, #0x148
    swpb r3, r3, [ip]
    ldr r3, =0x1547
    str r1, [r4, #0x14c]
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    add ip, r4, #0x64
    ldr r1, =0x744
    ldr r2, =0xe42
    str ip, [sp, #0x8]
    bl func_02044cd4
    add lr, r4, #0x64
    add ip, r4, #0x104
    ldmia lr!, {r0, r1, r2, r3}
    stmia ip!, {r0, r1, r2, r3}
    ldmia lr!, {r0, r1, r2, r3}
    stmia ip!, {r0, r1, r2, r3}
    ldmia lr!, {r0, r1, r2, r3}
    stmia ip!, {r0, r1, r2, r3}
    ldmia lr, {r0, r1, r2, r3}
    stmia ip, {r0, r1, r2, r3}
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
