#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02005b0c();
extern void func_02005b40();
extern void func_02005ba4();
extern void func_02014b04();
extern void func_02014ba4();
extern void func_02014bcc();
extern void func_02014be0();
extern void func_0201fa80();
extern void func_020211e8();
extern void func_020213fc();
extern void func_02024a70();
extern void func_0202ab4c();
extern void func_0202ac2c();
extern void func_0202ad5c();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void r1();
extern char data_0207a4c0[];
extern char data_0208793c[];
extern char data_02157e10[];
extern char data_0215b3d4[];
extern char data_021605c4[];
// clang-format off
asm void func_0202a424(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r1, =data_02157e10
    mov r4, r0
    ldr r0, [r1, #0x0]
    bl func_02005b40
    cmp r0, #0x0
    movne r0, #0x1800
    strne r0, [r4, #0x358]
    bne L_0202a46c
    ldr r0, =data_02157e10
    ldr r0, [r0, #0x0]
    bl func_02005b0c
    cmp r0, #0x0
    movne r0, #0xc00
    strne r0, [r4, #0x358]
    moveq r0, #0x1000
    streq r0, [r4, #0x358]
L_0202a46c:
    mov r0, r4
    bl func_02024a70
    cmp r0, #0x0
    beq L_0202a4ac
    ldr r0, =data_02157e10
    ldr r0, [r0, #0x0]
    bl func_02005ba4
    cmp r0, #0x0
    beq L_0202a4ac
    ldr r0, =data_0215b3d4
    mov r1, #0x0
    bl func_02014be0
    cmp r0, #0x0
    ble L_0202a4ac
    mov r0, r4
    bl func_020211e8
L_0202a4ac:
    ldr r0, [r4, #0x388]
    cmp r0, #0x17
    beq L_0202a4d4
    mov r0, r4
    bl func_0202ac2c
    ldr r1, [r4, #0x380]
    ldr r0, [r0, #0x0]
    ands r0, r1, r0
    moveq r0, #0x0
    streq r0, [r4, #0x380]
L_0202a4d4:
    ldr r0, [r4, #0x3cc]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, =data_0215b3d4
    ldrb r1, [r0, #0x61]
    cmp r1, #0x0
    beq L_0202a50c
    bl func_02014b04
    mov r2, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x3
    bl func_02014bcc
    b L_0202a534
L_0202a50c:
    ldrb r1, [r0, #0x60]
    cmp r1, #0x0
    beq L_0202a528
    mov r1, #0x3
    mov r2, #0x6
    bl func_02014ba4
    b L_0202a534
L_0202a528:
    mov r1, #0x3
    mov r2, #0x2
    bl func_02014ba4
L_0202a534:
    mov r0, r4
    bl func_020213fc
    ldrb r0, [r4, #0x27c]
    mov r0, r0, lsl #0x1b
    movs r0, r0, lsr #0x1f
    beq L_0202a56c
    ldr r1, =data_0207a4c0
    mov r3, #0x12
    mov r2, #0x2
    add r0, sp, #0x0
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    bl func_0201fa80
L_0202a56c:
    mov r0, r4
    bl func_0202ad5c
    mov r0, r4
    bl func_0202ab4c
    cmp r0, #0x0
    beq L_0202a5a4
    ldr r5, [r4, #0x3c0]
    ldr r0, =data_0208793c
    cmp r5, r0
    beq L_0202a5a4
    bl func_0204cd18
    mov r1, r5
    mov r2, #0x0
    bl func_0204c8cc
L_0202a5a4:
    ldr r1, [r4, #0x298]
    ldr r2, =data_021605c4
    add r0, r4, #0x200
    str r1, [r2, #0x4]
    ldrh r1, [r0, #0x96]
    ldr r3, [r4, #0x29c]
    add r1, r3, r1, lsr #0x1
    rsb r1, r1, #0x0
    str r1, [r2, #0x8]
    ldrh r1, [r0, #0x94]
    str r1, [r2, #0xc]
    ldrh r0, [r0, #0x96]
    str r0, [r2, #0x10]
    ldr r0, [r4, #0x388]
    str r0, [r2, #0x14]
    ldr r0, [r4, #0x28c]
    str r0, [r2, #0x18]
    ldr r1, [r4, #0x390]
    ldr r0, [r4, #0x298]
    sub r0, r1, r0
    str r0, [r2, #0x20]
    ldr r1, [r4, #0x394]
    ldr r0, [r4, #0x29c]
    sub r0, r1, r0
    rsb r0, r0, #0x0
    str r0, [r2, #0x24]
    ldr r0, [r4, #0x390]
    str r0, [r2, #0x28]
    ldr r0, [r4, #0x394]
    rsb r0, r0, #0x0
    str r0, [r2, #0x2c]
    ldr r0, [r4, #0x38c]
    str r0, [r2, #0x1c]
    ldr r0, [r4, #0x28c]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0202a6d4
L_0202a638:
    b L_0202a6a0
    b L_0202a67c
    b L_0202a64c
    b L_0202a6a0
    b L_0202a6b8
L_0202a64c:
    add r1, r2, #0x40
    mov r2, #0x1
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    ldr r0, =data_021605c4
    movne r2, #0x0
    add r1, r0, #0x41
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202a67c:
    add r1, r2, #0x40
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r2, #0x41
    ldrb r0, [r4, #0x362]
    add sp, sp, #0xc
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202a6a0:
    ldrb r0, [r4, #0x362]
    add r1, r2, #0x40
    add sp, sp, #0xc
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202a6b8:
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    ldr r0, =data_021605c4
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r0, #0x40
    swpb r0, r2, [r1]
L_0202a6d4:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
