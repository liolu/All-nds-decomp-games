#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02038bc4();
extern void func_0204afb0();
extern void func_0204b1b8();
extern void func_0204b2f4();
extern void func_0204e8dc();
extern char data_020ffeb4[];
extern char data_021271dc[];
extern char data_02160678[];
extern char func_0204e7ac[];
// clang-format off
asm void func_0204e94c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, =data_020ffeb4
    mov r4, r0
    ldr r0, =data_021271dc
    str r2, [r4, #0x0]
    str r0, [r4, #0x0]
    add r2, r4, #0x4
    mov r3, #0x0
    swpb r0, r3, [r2]
    add r2, r4, #0x14
    swpb r0, r3, [r2]
    ldr r2, =data_02160678
    str r3, [r4, #0x18]
    ldr r0, =func_0204e7ac
    mov r5, r1
    str r4, [r2, #0x0]
    bl func_02038bc4
    bl func_0204afb0
    bl func_0204b1b8
    bl func_0204b2f4
    mov r0, r4
    mov r1, r5
    bl func_0204e8dc
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
