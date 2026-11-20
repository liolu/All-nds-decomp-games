#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fa80();
extern void func_020245c0();
extern void func_0202461c();
extern void func_0202aa30();
extern char data_020728c8[];
// clang-format off
asm void func_020299cc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r1, #0x1
    mov r2, #0x0
    bl func_020245c0
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0202aa30
    mov r1, #0x14
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    str r1, [r4, #0x388]
    mov r1, #0x1e
    bl func_0202461c
    ldr r2, [r4, #0x2f4]
    mov r3, #0x0
    add r1, r2, #0x85
    swpb r0, r3, [r1]
    add r2, r2, #0x86
    ldr r0, =data_020728c8
    swpb r1, r3, [r2]
    bl func_0201fa80
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
