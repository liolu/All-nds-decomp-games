#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9420();
extern void func_02000dec();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void func_0204cf64();
extern char data_0207b18c[];
// clang-format off
asm void func_0202b9f8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r5, [r4, #0x370]
    ldr r1, [r5, #0x4]
    cmp r1, #0x0
    bne L_0202ba24
    bl func_01ff9420
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202ba24:
    bl func_0204cd18
    ldr r1, [r5, #0xc]
    mov r2, #0x0
    bl func_0204c8cc
    ldr r1, [r4, #0x370]
    ldr r0, [r4, #0x2f4]
    ldr r1, [r1, #0x4]
    mov r2, #0x0
    mov r3, #0x1
    bl func_0204cf64
    ldr r3, [r4, #0x2f4]
    mov r2, #0x0
    add r1, r3, #0x85
    swpb r0, r2, [r1]
    add r1, r3, #0x86
    swpb r0, r2, [r1]
    add r1, r4, #0x27c
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x370]
    ldrb r0, [r0, #0x4d]
    cmp r0, #0x0
    bne L_0202baa4
    ldr r0, [r4, #0x2f0]
    ldr r1, =data_0207b18c
    add r0, r0, #0x4
    bl func_02000dec
    ldr r0, [r4, #0x2f0]
    ldr r1, =data_0207b18c
    add r0, r0, #0x1c
    bl func_02000dec
L_0202baa4:
    mov r0, #0x1
    str r0, [r4, #0x37c]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
