#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020161b8();
extern void func_0201fadc();
extern void func_02035a0c();
extern void func_02036848();
extern void func_020368c0();
extern void func_0203a6cc();
extern void func_0204d998();
extern void func_0204e258();
extern void r2();
extern char data_0207bbfc[];
extern char data_0207bc08[];
extern char data_020a5be4[];
extern char data_0211ca1c[];
extern char data_0215d63c[];
extern char data_0215d640[];
// clang-format off
asm void func_0202e01c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x20
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_020368c0
    ldr r0, =data_0211ca1c
    add r2, r7, #0x26
    str r0, [r7, #0x0]
    mov r1, #0x0
    swpb r0, r1, [r2]
    add r2, r7, #0x27
    swpb r0, r1, [r2]
    ldrb r0, [sp, #0x38]
    add r2, r7, #0x28
    add r3, r7, #0x29
    swpb r0, r0, [r2]
    ldr r2, [sp, #0x3c]
    swpb r0, r1, [r3]
    ldr r0, [sp, #0x40]
    str r1, [r7, #0x2c]
    str r1, [r7, #0x30]
    ldr r8, [r5, #0x0]
    ldr r3, [r5, #0x4]
    mov ip, #0x40
    str r8, [r7, #0x34]
    str r3, [r7, #0x38]
    ldr r8, [r5, #0x0]
    ldr lr, [r5, #0x4]
    mov r3, #0x100
    str r8, [r7, #0x44]
    str lr, [r7, #0x48]
    str r4, [r7, #0x84]
    str r1, [r7, #0x88]
    str r1, [r7, #0x8c]
    str r1, [r7, #0x90]
    str r2, [r7, #0x94]
    str r0, [r7, #0x98]
    ldr r2, [r5, #0x4]
    ldr r0, [r5, #0x0]
    sub lr, r2, #0x20
    sub r4, r0, #0x20
    mov r2, #0xc0
    mov r0, #0x24
    str r4, [sp, #0x0]
    str lr, [sp, #0x4]
    str ip, [sp, #0x8]
    str ip, [sp, #0xc]
    str r1, [sp, #0x10]
    str r1, [sp, #0x14]
    str r3, [sp, #0x18]
    str r2, [sp, #0x1c]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0202e108
    ldr r1, =data_0207bc08
    add r2, sp, #0x0
    bl func_0204d998
L_0202e108:
    str r0, [r7, #0x88]
    mov r0, #0x1c
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0202e128
    ldr r1, =data_0207bbfc
    add r2, sp, #0x10
    bl func_0204e258
L_0202e128:
    str r0, [r7, #0x90]
    ldr r1, [r7, #0x84]
    mov r0, r7
    ldr r1, [r1, #0x308]
    str r1, [r7, #0x30]
    ldr r1, [r7, #0x84]
    ldr r1, [r1, #0x30c]
    str r1, [r7, #0x2c]
    bl func_0201fadc
    ldr r0, [r7, #0x20]
    ldr r1, [r7, #0x94]
    mov r2, #0x2
    bl func_02035a0c
    ldr r1, [r5, #0x0]
    mov r0, #0x28
    str r1, [r7, #0xa0]
    ldr r1, [r5, #0x4]
    str r1, [r7, #0xa4]
    ldr r1, [r5, #0x0]
    str r1, [r7, #0xa8]
    ldr r1, [r5, #0x4]
    str r1, [r7, #0xac]
    bl func_0203a6cc
    movs r4, r0
    beq L_0202e1bc
    mov r0, #0x38
    bl func_0203a6cc
    movs r1, r0
    beq L_0202e1ac
    ldrb r2, [r6, #0x2e]
    ldr r1, =data_020a5be4
    bl func_020161b8
    mov r1, r0
L_0202e1ac:
    mov r0, r4
    add r2, r7, #0xa8
    bl func_02036848
    mov r4, r0
L_0202e1bc:
    str r4, [r7, #0x9c]
    ldr r0, [r7, #0x9c]
    mov r1, #0x1
    ldr r0, [r0, #0x20]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x18]
    blx r2
    add r1, r7, #0xb0
    mov r3, #0x0
    swpb r0, r3, [r1]
    ldr r2, =data_0215d640
    ldr r1, =data_0215d63c
    swpb r0, r3, [r2]
    swpb r0, r3, [r1]
    mov r0, r7
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
