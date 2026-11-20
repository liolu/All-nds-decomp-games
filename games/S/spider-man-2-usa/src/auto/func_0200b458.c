#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9d70();
extern char data_02108f08[];
// clang-format off
asm void func_0200b458(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_01ff9d70
    ldr r0, =data_02108f08
    add r2, r6, #0x27c
    str r0, [r6, #0x0]
    ldrb r1, [r2, #0x0]
    mov r0, r6
    orr r1, r1, #0x20
    swpb r1, r1, [r2]
    ldr r1, [r5, #0x24]
    ldr r3, [r4, #0x4]
    ldr r2, [r4, #0x0]
    add r1, r1, r1, lsr #0x1f
    str r2, [r6, #0x298]
    sub r1, r3, r1, asr #0x1
    str r1, [r6, #0x29c]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
