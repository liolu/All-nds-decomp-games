#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020249d8();
extern void func_02025a48();
extern void func_0202ab24();
extern char data_021605c4[];
// clang-format off
asm void func_0202461c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_020249d8
    ldr r1, [r0, #0x4]
    cmp r6, #0xd
    moveq lr, #0x1
    ldrh r3, [r1, #0x6]
    ldrh r2, [r1, #0x4]
    ldr r0, =data_021605c4
    movne lr, #0x0
    sub r2, r3, r2
    add r2, r2, #0x1
    str r2, [r0, #0x3c]
    ldr r2, =data_021605c4
    mov r0, r7
    add ip, r2, #0x42
    mov r3, r4
    mov r2, r5
    swpb r4, lr, [ip]
    bl func_0202ab24
    mov r0, r7
    mov r1, r6
    bl func_02025a48
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
