#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9af0();
extern void func_02035aa4();
extern void func_020451e8();
extern void r2();
extern char data_02108f8c[];
// clang-format off
asm void func_0200b864(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r4, r3
    ldr r7, [sp, #0x24]
    mov r5, r2
    mov r6, r1
    ldrb r3, [sp, #0x20]
    ldr ip, [sp, #0x28]
    str r7, [sp, #0x0]
    mov r1, r5
    mov r2, r4
    mov r7, r0
    str ip, [sp, #0x4]
    bl func_020451e8
    ldr r0, =data_02108f8c
    ldr r2, =0x301
    str r0, [r7, #0x0]
    add r1, r7, #0x300
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r7, r2
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, r7
    mov r1, r6
    mov r2, r4
    str r5, [r7, #0x304]
    bl func_01ff9af0
    add r2, r7, #0x27c
    ldrb r0, [r2, #0x0]
    add r1, r6, #0x8
    add r5, r7, #0x2c8
    orr r0, r0, #0x20
    swpb r0, r0, [r2]
    add r4, r6, #0x14
    ldr r0, [r6, #0x0]
    add r3, r7, #0x2d4
    str r0, [r7, #0x2c0]
    ldr r0, [r6, #0x4]
    str r0, [r7, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r7, #0x304]
    mov r1, #0x2
    bl func_02035aa4
    ldr r0, [r7, #0x304]
    mov r1, #0x1
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x18]
    blx r2
    mov r0, r7
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
