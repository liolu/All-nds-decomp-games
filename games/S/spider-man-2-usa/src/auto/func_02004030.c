#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02002b64();
extern void func_02002bc8();
extern void func_02002bf4();
extern void func_02002c1c();
// clang-format off
asm void func_02004030(void) {
    stmfd sp!, {r4, lr}
    mov r2, #0x0
    mov r3, r2
    mov r1, #0x2
    mov r4, r0
    bl func_02002c1c
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_02002bf4
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_02002bc8
    mov r0, r4
    mov r1, #0x2
    bl func_02002b64
    ldr r0, =0x27d
    mov r1, #0x3
    str r1, [r4, #0x370]
    add r1, r4, r0
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x40
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
