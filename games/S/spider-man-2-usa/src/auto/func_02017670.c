#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0210c478[];
extern char data_0210c47c[];
extern char data_0210c480[];
extern char data_0210c484[];
extern char data_0210c488[];
extern char data_0210c48c[];
extern char data_0210c490[];
extern char data_0210c494[];
extern char data_0210c498[];
extern char data_0210c49c[];
extern char data_0210c4a0[];
extern char data_0210c4a4[];
extern char data_0215b4a0[];
// clang-format off
asm void func_02017670(void) {
    sub sp, sp, #0x10
    ldr r1, =data_0215b4a0
    add ip, sp, #0x0
    mov r3, r0
    ldmia r1, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldr r2, [sp, #0x8]
    ldr r0, [r3, #0x10]
    ands r1, r2, #0x40
    beq L_020176c0
    ldr r1, =data_0210c478
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_020176c0:
    ands r1, r2, #0x80
    beq L_020176f0
    ldr r1, =data_0210c47c
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_020176f0:
    ands r1, r2, #0x20
    beq L_02017720
    ldr r1, =data_0210c480
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_02017720:
    ands r1, r2, #0x10
    beq L_02017750
    ldr r1, =data_0210c484
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_02017750:
    ands r1, r2, #0x200
    beq L_02017780
    ldr r1, =data_0210c488
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_02017780:
    ands r1, r2, #0x100
    beq L_020177b0
    ldr r1, =data_0210c48c
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_020177b0:
    ands r1, r2, #0x4
    beq L_020177e0
    ldr r1, =data_0210c490
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_020177e0:
    ands r1, r2, #0x8
    beq L_02017810
    ldr r1, =data_0210c494
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_02017810:
    ands r1, r2, #0x1
    beq L_02017840
    ldr r1, =data_0210c498
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_02017840:
    ands r1, r2, #0x2
    beq L_02017870
    ldr r1, =data_0210c49c
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_02017870:
    ands r1, r2, #0x400
    beq L_020178a0
    ldr r1, =data_0210c4a0
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    b L_020178cc
L_020178a0:
    ands r1, r2, #0x800
    beq L_020178cc
    ldr r1, =data_0210c4a4
    add r2, r3, r0
    ldrb r1, [r1, #0x0]
    add r2, r2, #0x8
    add ip, r3, #0x10
    swpb r1, r1, [r2]
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
L_020178cc:
    ldr r1, [r3, #0x10]
    cmp r0, r1
    beq L_020178f0
    cmp r1, #0x8
    moveq r0, #0x0
    streq r0, [r3, #0x10]
    mov r0, #0x1
    add sp, sp, #0x10
    bx lr
L_020178f0:
    mov r0, #0x0
    add sp, sp, #0x10
    bx lr
}
// clang-format on
