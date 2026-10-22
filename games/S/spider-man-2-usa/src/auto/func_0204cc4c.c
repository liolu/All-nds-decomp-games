#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a6c0();
extern void func_0205657c();
extern void func_0205a434();
extern void func_0205aaa8();
extern void func_0205ac88();
extern char data_0208793c[];
extern char data_02160664[];
// clang-format off
asm void func_0204cc4c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, =data_02160664
    mov r5, r0
    str r5, [r2, #0x0]
    mov r2, #0x0
    str r2, [r5, #0x0]
    add r0, r5, #0xc
    mov r4, r1
    str r2, [r5, #0x4]
    bl func_0205a434
    ldr r1, =data_0208793c
    add r2, r5, #0x28
    ldr r0, [r1, #0x0]
    mov r3, #0x0
    str r0, [r5, #0x18]
    ldr ip, [r1, #0x4]
    mov r0, #0x40000
    str ip, [r5, #0x1c]
    ldr ip, [r1, #0x8]
    str ip, [r5, #0x20]
    ldr r1, [r1, #0xc]
    str r1, [r5, #0x24]
    swpb r1, r3, [r2]
    bl func_0205657c
    bl func_0205ac88
    mov r0, r4
    bl func_0203a6c0
    str r0, [r5, #0x2c]
    ldr r0, [r5, #0x2c]
    mov r1, r4
    bl func_0205aaa8
    mov r0, #0x7f
    str r0, [r5, #0x40]
    ldr r1, [r5, #0x40]
    mov r0, #0x3f
    str r1, [r5, #0x38]
    ldr r2, [r5, #0x38]
    mvn r1, #0x0
    str r2, [r5, #0x34]
    str r0, [r5, #0x3c]
    ldr r2, [r5, #0x3c]
    mov r0, r5
    str r2, [r5, #0x30]
    str r1, [r5, #0x10]
    str r1, [r5, #0x14]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
