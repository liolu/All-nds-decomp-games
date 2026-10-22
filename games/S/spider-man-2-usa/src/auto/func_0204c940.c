#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204c85c();
extern void func_0205a428();
extern void func_0205a434();
extern char data_0208793c[];
// clang-format off
asm void func_0204c940(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r5, r0
    ldr r0, [r5, #0x0]
    mov r4, r1
    cmp r0, #0x1
    mov r6, r2
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    add r0, r5, #0xc
    bl func_0205a428
    add r0, r5, #0xc
    bl func_0205a434
    str r6, [sp, #0x0]
    ldr r3, [r5, #0x38]
    mov r0, r5
    mov r1, r4
    add r2, r5, #0xc
    bl func_0204c85c
    ldr r1, [r4, #0x0]
    ldr r0, =data_0208793c
    str r1, [r5, #0x18]
    ldr r1, [r4, #0x4]
    cmp r4, r0
    str r1, [r5, #0x1c]
    ldr r0, [r4, #0x8]
    add r1, r5, #0x28
    str r0, [r5, #0x20]
    ldr r0, [r4, #0xc]
    str r0, [r5, #0x24]
    movne r0, #0x1
    moveq r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
