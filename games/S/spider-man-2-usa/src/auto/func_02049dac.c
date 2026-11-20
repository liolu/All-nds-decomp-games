#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fadc();
extern void func_02044e5c();
extern void func_02046b70();
extern void func_02049d28();
extern char data_02124908[];
extern char data_021601c8[];
extern char data_021605b4[];
extern char data_021605c4[];
extern char data_02160688[];
// clang-format off
asm void func_02049dac(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r2
    mov r2, #0x400
    mov r4, r0
    bl func_02044e5c
    ldr r1, =data_02124908
    ldr r0, =data_021601c8
    str r1, [r4, #0x0]
    str r0, [r4, #0x150]
    str r5, [r4, #0x154]
    mov r1, #0x0
    str r1, [r4, #0x158]
    mov r0, #0x1000
    str r0, [r4, #0x15c]
    str r1, [r4, #0x160]
    str r1, [r4, #0x164]
    str r1, [r4, #0x168]
    str r1, [r4, #0x16c]
    str r1, [r4, #0x170]
    ldr r3, =0x179
    str r1, [r4, #0x174]
    add r2, r4, #0x178
    mov r0, #0x1
    swpb r0, r0, [r2]
    add r2, r4, r3
    swpb r0, r1, [r2]
    add r2, r4, #0x184
    str r1, [r4, #0x17c]
    str r1, [r4, #0x180]
    swpb r0, r1, [r2]
    mov r0, #0x4
    str r0, [r4, #0x188]
    add r2, r4, #0x18c
    swpb r0, r1, [r2]
    add r0, r4, #0x198
    str r1, [r4, #0x190]
    str r1, [r4, #0x194]
    bl func_02046b70
    mov r1, #0x0
    str r1, [r4, #0x1bc]
    str r1, [r4, #0x1c0]
    str r1, [r4, #0x1c4]
    str r1, [r4, #0x1c8]
    str r1, [r4, #0x1cc]
    str r1, [r4, #0x1d0]
    ldr r3, =0x1d9
    str r1, [r4, #0x1d4]
    add r2, r4, #0x1d8
    swpb r0, r1, [r2]
    add r2, r4, r3
    swpb r0, r1, [r2]
    add r2, r4, #0x1e0
    str r1, [r4, #0x1dc]
    swpb r0, r1, [r2]
    mov r0, #0x1000
    str r1, [r4, #0x1e4]
    str r1, [r4, #0x1e8]
    str r1, [r4, #0x1ec]
    str r1, [r4, #0x1f0]
    str r0, [r4, #0x1f4]
    str r0, [r4, #0x1f8]
    add r2, r4, #0x1fc
    swpb r0, r1, [r2]
    add r2, r4, #0x204
    str r1, [r4, #0x200]
    swpb r0, r1, [r2]
    ldr lr, =data_02160688
    str r1, [r4, #0x208]
    str r1, [r4, #0x20c]
    str r1, [r4, #0x210]
    ldr r3, =data_021605c4
    str r1, [r4, #0x214]
    ldr ip, =0x828
    ldr r2, =data_021605b4
    mov r0, r4
    str lr, [r3, #0x0]
    str r1, [r3, #0x44]
    str ip, [r2, #0xc]
    bl func_02049d28
    mov r0, r4
    bl func_0201fadc
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
