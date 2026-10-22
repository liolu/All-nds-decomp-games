#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cf58();
extern void func_0200cf68();
extern void func_0203a6c0();
extern void func_0203a6cc();
extern void func_0203acb8();
extern char data_02157ea4[];
// clang-format off
asm void func_02037964(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    str r0, [sp, #0x0]
    mov r10, r1
    ldr r1, [sp, #0x0]
    mov r3, #0x0
    mov r0, #0x18
    str r2, [sp, #0x4]
    str r3, [r1, #0xc]
    bl func_0203a6cc
    ldr r1, [sp, #0x0]
    ldr r8, =data_02157ea4
    str r0, [r1, #0x4]
    ldr r2, [sp, #0x0]
    ldr r1, [sp, #0x4]
    mov r0, r8
    ldr r9, [r2, #0x4]
    bl func_0200cf68
    ldrb r0, [r10, #0x0]
    mov r7, #0x0
    cmp r0, #0x0
    beq L_02037b00
    mov r0, #0x18
    str r7, [sp, #0x8]
    str r7, [sp, #0xc]
    str r7, [sp, #0x10]
    str r0, [sp, #0x14]
L_020379d0:
    ldrb r0, [r10, r7]
    cmp r0, #0x1
    bne L_020379f8
    add r0, r7, #0x1
    ldrb r0, [r10, r0]
    bl func_0200cf58
    ldr r1, [sp, #0x4]
    mov r8, r0
    bl func_0200cf68
    add r7, r7, #0x2
L_020379f8:
    mov r6, r7
    ldr r5, [sp, #0x8]
    str r8, [r9, #0x4]
    b L_02037a18
L_02037a08:
    ldr r0, [r8, #0x8]
    add r6, r6, #0x1
    ldrb r0, [r0, r1]
    add r5, r5, r0
L_02037a18:
    ldrb r1, [r10, r6]
    add r4, r10, r6
    cmp r1, #0xa
    beq L_02037a30
    cmp r1, #0x0
    bne L_02037a08
L_02037a30:
    sub r11, r6, r7
    add r0, r11, #0x1
    bl func_0203a6c0
    str r0, [r9, #0x8]
    ldr r0, [r9, #0x8]
    add r1, r10, r7
    mov r2, r11
    bl func_0203acb8
    rsb r0, r5, #0x100
    add r0, r0, r0, lsr #0x1f
    mov r2, r0, asr #0x1
    ldr r0, [r9, #0x8]
    add r1, r0, r11
    ldr r0, [sp, #0xc]
    swpb r0, r0, [r1]
    str r2, [r9, #0xc]
    ldr r0, [r8, #0xc]
    str r0, [r9, #0x10]
    ldr r0, [sp, #0xc]
    str r0, [r9, #0x14]
    ldrb r0, [r4, #0x0]
    cmp r0, #0xa
    bne L_02037ab4
    add r2, r9, #0x14
L_02037a90:
    ldr r1, [r2, #0x0]
    ldr r0, [r9, #0x10]
    add r6, r6, #0x1
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldrb r0, [r10, r6]
    add r4, r10, r6
    cmp r0, #0xa
    beq L_02037a90
L_02037ab4:
    ldr r0, [sp, #0x0]
    mov r7, r6
    add r2, r0, #0xc
    ldr r1, [r2, #0x0]
    ldr r0, [r9, #0x14]
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldrb r0, [r4, #0x0]
    cmp r0, #0x0
    ldreq r0, [sp, #0x10]
    streq r0, [r9, #0x0]
    beq L_02037af4
    ldr r0, [sp, #0x14]
    bl func_0203a6cc
    str r0, [r9, #0x0]
    ldr r9, [r9, #0x0]
L_02037af4:
    ldrb r0, [r4, #0x0]
    cmp r0, #0x0
    bne L_020379d0
L_02037b00:
    ldr r0, [sp, #0x0]
    mov r1, #0xc0
    str r1, [r0, #0x8]
    ldrb r0, [r0, #0x14]
    cmp r0, #0x0
    ldreq r0, [sp, #0x0]
    addeq r1, r0, #0x8
    ldreq r0, [r1, #0x0]
    addeq r0, r0, #0xd0
    streq r0, [r1, #0x0]
    ldr r0, [sp, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x10]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
