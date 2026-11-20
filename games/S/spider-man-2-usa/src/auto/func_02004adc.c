#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_01ff9418();
extern void func_01ffb0fc();
extern void func_01ffb288();
extern void func_01ffc5e8();
extern void func_02001110();
extern void func_02002b2c();
extern void func_02004158();
extern void func_0200516c();
extern void func_02014bcc();
extern void func_020161b8();
extern void func_0201fa80();
extern void func_0201fadc();
extern void func_0203a6cc();
extern void func_0203b59c();
extern void func_020455b8();
extern void func_0204c284();
extern char data_02076af8[];
extern char data_020a84e4[];
extern char data_020a85a4[];
extern char data_020ffefc[];
extern char data_020fff64[];
extern char data_0210001c[];
extern char data_0210002c[];
extern char data_02100048[];
extern char data_021000b0[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02004adc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    ldrh r3, [r2, #0x0]
    mov r10, r0
    mov r4, r1
    mov r0, r3, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldrh r0, [r2, #0x0]
    movne r3, #0x1
    moveq r3, #0x0
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    movne r0, #0x1
    moveq r0, #0x0
    str r0, [sp, #0x0]
    mov r1, #0x0
    ldr r0, =data_021000b0
    str r1, [sp, #0x4]
    ldr r1, [r0, #0x0]
    mov r0, r10
    mov r2, r4
    bl func_02001110
    ldr r0, =data_020fff64
    mov r3, #0x1
    str r0, [r10, #0x0]
    ldr r0, [r10, #0x2f4]
    ldr r2, =data_020ffefc
    add r1, r0, #0xba
    swpb r0, r3, [r1]
    ldrh r3, [r2, #0x4]
    ldrh r5, [r2, #0x0]
    ldrh r4, [r2, #0x2]
    ldrh r2, [r2, #0x6]
    add r1, sp, #0x8
    mov r0, r10
    strh r5, [sp, #0x8]
    strh r4, [sp, #0xa]
    strh r3, [sp, #0xc]
    strh r2, [sp, #0xe]
    bl func_01ff93d4
    add r0, r10, #0x27c
    ldrb r1, [r0, #0x0]
    ldr r3, =0x27d
    add r2, r10, #0x360
    orr r1, r1, #0x2
    add r4, r10, r3
    swpb r1, r1, [r0]
    mov r5, #0x1
    swpb r1, r5, [r2]
    ldr r3, =data_0215b3d4
    ldr r1, [r10, #0x2f4]
    add r2, r1, #0xb9
    swpb r1, r5, [r2]
    ldrb r1, [r0, #0x0]
    orr r1, r1, #0x20
    swpb r1, r1, [r0]
    ldrb r0, [r4, #0x0]
    orr r0, r0, #0x40
    swpb r0, r0, [r4]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x1
    cmp r0, #0x8
    beq L_02004be8
    cmp r0, #0xc
    beq L_02004c14
    cmp r0, #0xe
    beq L_02004c40
L_02004be8:
    mov r0, r10
    mov r1, #0x258
    bl func_02002b2c
    ldr r0, =data_0210002c
    mov r1, #0xf0
    ldr r2, [r0, #0x0]
    mov r0, #0x50
    str r2, [r10, #0x384]
    str r1, [r10, #0x394]
    str r0, [r10, #0x398]
    b L_02004c68
L_02004c14:
    mov r0, r10
    mov r1, #0x320
    bl func_02002b2c
    ldr r0, =data_02100048
    mov r1, #0xb4
    ldr r2, [r0, #0x0]
    mov r0, #0x46
    str r2, [r10, #0x384]
    str r1, [r10, #0x394]
    str r0, [r10, #0x398]
    b L_02004c68
L_02004c40:
    mov r0, r10
    mov r1, #0x3e8
    bl func_02002b2c
    ldr r0, =data_0210001c
    mov r1, #0x78
    ldr r2, [r0, #0x0]
    mov r0, #0x3c
    str r2, [r10, #0x384]
    str r1, [r10, #0x394]
    str r0, [r10, #0x398]
L_02004c68:
    ldr r2, [r10, #0x374]
    ldr r0, =data_0215b3d4
    mov r1, #0x2
    bl func_02014bcc
    mov r1, #0x0
    str r1, [r10, #0x388]
    str r1, [r10, #0x38c]
    mvn r0, #0x0
    str r0, [r10, #0x390]
    str r1, [r10, #0x39c]
    str r1, [r10, #0x3a0]
    mov r0, #0x38
    str r1, [r10, #0x3a4]
    bl func_0203a6cc
    movs r1, r0
    beq L_02004cb4
    mov r1, #0x40
    bl func_0203b59c
    mov r1, r0
L_02004cb4:
    mov r0, r10
    bl func_01ff9418
    mov r0, r10
    mov r1, #0x1
    bl func_01ffb0fc
    mov r0, #0x3
    bl func_0204c284
    mov r1, r0
    mov r0, r10
    bl func_01ffb288
    mov r1, #0x0
    str r1, [r10, #0x378]
    mov r0, #0x18
    str r1, [r10, #0x380]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_02004d00
    mov r1, r10
    bl func_0200516c
L_02004d00:
    str r0, [r10, #0x37c]
    ldr r0, =data_02076af8
    bl func_0201fa80
    mov r1, #0x0
    add r0, sp, #0x24
    mov r2, r1
    mov r3, r1
    str r1, [r10, #0x3ac]
    bl func_01ffc5e8
    add r0, sp, #0x24
    mov r9, #0x0
    add r11, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r11, {r0, r1, r2}
    add r0, sp, #0x10
    str r9, [r0, #0x0]
    str r9, [r0, #0x4]
    mov r5, r9
    mov r6, #0x38
    mov r4, #0x1
    mov r7, #0x34
L_02004d54:
    mov r0, r7
    bl func_0203a6cc
    movs r8, r0
    beq L_02004d98
    mov r0, r6
    bl func_0203a6cc
    movs r1, r0
    beq L_02004d84
    ldr r1, =data_020a85a4
    mov r2, r5
    bl func_020161b8
    mov r1, r0
L_02004d84:
    mov r0, r8
    mov r2, r11
    mov r3, r4
    bl func_020455b8
    mov r8, r0
L_02004d98:
    add r0, r10, r9, lsl #0x2
    str r8, [r0, #0x3b0]
    ldr r0, [r0, #0x3b0]
    add r2, r10, r9, lsl #0x3
    add r1, r0, #0x24
    swpb r0, r4, [r1]
    add r9, r9, #0x1
    ldr r0, [sp, #0x10]
    cmp r9, #0x4
    str r0, [r2, #0x3c0]
    ldr r0, [sp, #0x14]
    str r0, [r2, #0x3c4]
    blt L_02004d54
    mov r0, #0x34
    bl func_0203a6cc
    movs r4, r0
    beq L_02004e10
    mov r0, #0x38
    bl func_0203a6cc
    movs r1, r0
    beq L_02004dfc
    ldr r1, =data_020a84e4
    mov r2, #0x0
    bl func_020161b8
    mov r1, r0
L_02004dfc:
    add r2, sp, #0x18
    mov r0, r4
    mov r3, #0x1
    bl func_020455b8
    mov r4, r0
L_02004e10:
    str r4, [r10, #0x3e0]
    ldr r0, [r10, #0x3e0]
    mov r2, #0x1
    add r1, r0, #0x24
    swpb r0, r2, [r1]
    mov r0, r10
    ldr r1, [sp, #0x10]
    str r1, [r10, #0x3e4]
    ldr r1, [sp, #0x14]
    str r1, [r10, #0x3e8]
    bl func_0201fadc
    mov r0, r10
    bl func_02004158
    mov r0, r10
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
