#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ea54();
extern char data_02158bcc[];
// clang-format off
asm void func_020119e4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    ldr r0, [r10, #0x0]
    mov r9, #0x0
    cmp r0, #0x0
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxle lr
    ldr r6, =data_02158bcc
    mov r7, r9
    mov r4, r9
    mov r5, #0x1
L_02011a10:
    ldr r3, [r10, #0x4]
    add r1, r6, #0x1
    swpb r0, r5, [r6]
    add r2, r6, #0x2
    swpb r0, r4, [r1]
    add r8, r3, r7
    swpb r0, r4, [r2]
    ldr r0, [r8, #0x10]
    bl func_0200ea54
    str r0, [r6, #0x4]
    ldr r0, [r8, #0x14]
    bl func_0200ea54
    rsb r0, r0, #0x0
    str r0, [r6, #0x8]
    ldr r0, [r10, #0x0]
    add r9, r9, #0x1
    cmp r9, r0
    add r6, r6, #0x14
    add r7, r7, #0x40
    blt L_02011a10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
