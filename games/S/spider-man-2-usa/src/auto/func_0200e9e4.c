#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02158bb9[];
extern char data_02158bba[];
extern char data_02158bbc[];
extern char data_02158bc0[];
// clang-format off
asm void func_0200e9e4(void) {
    mov r2, #0x14
    mul r2, r0, r2
    ldr r0, =data_02158bb9
    ldr ip, =data_02158bba
    add r3, r0, r2
    mov r0, #0x0
    swpb r0, r0, [r3]
    add r3, ip, r2
    mov r0, #0x1
    swpb r0, r0, [r3]
    ldr r3, =data_02158bbc
    ldr ip, [r1, #0x0]
    ldr r0, =data_02158bc0
    str ip, [r3, r2]
    ldr r1, [r1, #0x4]
    str r1, [r0, r2]
    bx lr
}
// clang-format on
