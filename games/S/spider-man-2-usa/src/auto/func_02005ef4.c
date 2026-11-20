#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9420();
extern void func_02005e78();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void func_0204cf64();
extern void r1();
// clang-format off
asm void func_02005ef4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x2c4]
    ldr r0, [r4, #0x374]
    cmp r0, #0x0
    beq L_02005f30
    cmp r0, #0x0
    beq L_02005f28
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_02005f28:
    mov r0, #0x0
    str r0, [r4, #0x374]
L_02005f30:
    ldr r5, [r4, #0x370]
    ldr r0, [r5, #0x4]
    cmp r0, #0x0
    bne L_02005f54
    mov r0, r4
    bl func_02005e78
    mov r0, r4
    bl func_01ff9420
    b L_02005fa4
L_02005f54:
    bl func_0204cd18
    ldr r1, [r5, #0x10]
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
    orr r0, r0, #0x80
    swpb r0, r0, [r1]
L_02005fa4:
    mov r0, #0x1
    str r0, [r4, #0x378]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
