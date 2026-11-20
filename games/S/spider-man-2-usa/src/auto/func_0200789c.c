#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000dec();
extern void func_02008b44();
extern void func_02014ba4();
extern void func_02036c0c();
extern char data_020785f4[];
extern char data_02078600[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0200789c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x9
    mov r2, #0x1
    bl func_02014ba4
    ldr r0, =data_0215b3d4
    mov r1, #0xa
    mov r2, #0x1
    bl func_02014ba4
    bl func_02036c0c
    ldr r0, [r4, #0x2f0]
    ldr r1, =data_020785f4
    add r0, r0, #0x4
    bl func_02000dec
    ldr r0, [r4, #0x2f0]
    ldr r1, =data_02078600
    add r0, r0, #0x1c
    bl func_02000dec
    mov r0, r4
    bl func_02008b44
    add r3, r4, #0x27c
    ldrb r0, [r3, #0x0]
    mov r2, #0xb
    ldr r1, =0x27d
    bic r0, r0, #0x20
    swpb r0, r0, [r3]
    add r1, r4, r1
    ldrb r0, [r3, #0x0]
    orr r0, r0, #0x80
    swpb r0, r0, [r3]
    str r2, [r4, #0x380]
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x80
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
