#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_01ff9418();
extern void func_01ffa43c();
extern void func_01ffb0fc();
extern void func_01ffb288();
extern void func_02000dc4();
extern void func_02001110();
extern void func_02005b74();
extern void func_02006c0c();
extern void func_02008a3c();
extern void func_02008a74();
extern void func_02009c70();
extern void func_020161b8();
extern void func_0201fadc();
extern void func_02035aa4();
extern void func_0203a6cc();
extern void func_0203b59c();
extern void func_02045110();
extern void func_0204c284();
extern char data_0206f738[];
extern char data_0208793c[];
extern char data_020a2764[];
extern char data_02106ed4[];
extern char data_02157e10[];
// clang-format off
asm void func_02009db4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x8
    ldr r4, [sp, #0x20]
    mov r8, r0
    ldrh r0, [r4, #0x0]
    mov r6, r2
    mov r5, r3
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldrh r0, [r4, #0x0]
    movne r3, #0x1
    moveq r3, #0x0
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    movne r0, #0x1
    moveq r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    mov r7, r1
    ldr r1, [r7, #0x4]
    mov r0, r8
    mov r2, r6
    bl func_02001110
    ldr r1, =data_02106ed4
    mov r0, #0x0
    str r1, [r8, #0x0]
    ldrh r1, [r5, #0x0]
    add r2, r8, #0x3a0
    ldr ip, =data_0208793c
    str r1, [r8, #0x378]
    str r7, [r8, #0x37c]
    str r0, [r8, #0x384]
    ldrsh r1, [r4, #0x8]
    add r3, r8, #0x3c0
    add r4, r8, #0x3d0
    str r1, [r8, #0x388]
    str r0, [r8, #0x390]
    str r0, [r8, #0x394]
    str r0, [r8, #0x398]
    str r0, [r8, #0x39c]
    swpb r1, r0, [r2]
    ldr r2, =data_02157e10
    ldr r7, [r6, #0x0]
    ldr r1, [r6, #0x4]
    str r7, [r8, #0x3a4]
    str r1, [r8, #0x3a8]
    str r5, [r8, #0x3b4]
    str ip, [r8, #0x3b8]
    ldr r1, [r6, #0x4]
    str r1, [r8, #0x3bc]
    swpb r1, r0, [r3]
    str r0, [r8, #0x3c4]
    str r0, [r8, #0x3c8]
    str r0, [r8, #0x3cc]
    swpb r1, r0, [r4]
    str r0, [r8, #0x3d8]
    ldr r0, [r2, #0x0]
    bl func_02005b74
    cmp r0, #0x0
    beq L_02009ee0
    ldr r0, [r8, #0x3b4]
    mov r2, #0x0
    str r2, [r0, #0x8]
    ldr r0, [r8, #0x3b4]
    mov r1, #0x1
    str r1, [r0, #0xc]
    ldr r0, [r8, #0x3b4]
    str r2, [r0, #0x10]
    ldr r0, [r8, #0x3b4]
    str r1, [r0, #0x14]
    ldr r0, [r8, #0x3b4]
    str r2, [r0, #0x18]
    ldr r0, [r8, #0x3b4]
    str r1, [r0, #0x1c]
L_02009ee0:
    bl func_01ffa43c
    str r0, [r8, #0x38c]
    mov r0, #0x38
    bl func_0203a6cc
    movs r1, r0
    beq L_02009f04
    mov r1, #0x40
    bl func_0203b59c
    mov r1, r0
L_02009f04:
    mov r0, r8
    bl func_01ff9418
    mov r0, r8
    mov r1, #0x1
    bl func_01ffb0fc
    add r4, r8, #0x27c
    ldrb r0, [r4, #0x0]
    mov r3, #0x3
    mov r1, #0x31
    orr r0, r0, #0x4
    swpb r0, r0, [r4]
    mov r2, #0x700
    ldrb r0, [r4, #0x0]
    orr r0, r0, #0x2
    swpb r0, r0, [r4]
    str r3, [r8, #0x28c]
    ldr r0, [r8, #0x2f0]
    add r0, r0, #0x1c
    bl func_02000dc4
    ldr r1, =0x27d
    mov r0, r8
    add r2, r8, r1
    ldrb r1, [r2, #0x0]
    bic r1, r1, #0x4
    swpb r1, r1, [r2]
    bl func_02009c70
    mov r0, r8
    mov r1, #0x1b
    bl func_02008a74
    cmp r0, #0x0
    beq L_02009fa0
    mov r0, r8
    mov r1, #0x1b
    bl func_02008a3c
    ldr r0, [r0, #0x4]
    bl func_0204c284
    mov r1, r0
    mov r0, r8
    bl func_01ffb288
L_02009fa0:
    mov r0, r8
    bl func_02006c0c
    ldr r1, =data_0206f738
    mov r0, r8
    bl func_01ff93d4
    mov r0, #0x300
    bl func_0203a6cc
    movs r5, r0
    beq L_0200a004
    mov r0, #0x38
    bl func_0203a6cc
    movs r1, r0
    beq L_02009fe4
    ldr r1, =data_020a2764
    mov r2, #0x0
    bl func_020161b8
    mov r1, r0
L_02009fe4:
    mov r4, #0x0
    str r4, [sp, #0x0]
    mov r0, r5
    mov r2, r6
    mov r3, #0x1
    str r4, [sp, #0x4]
    bl func_02045110
    mov r5, r0
L_0200a004:
    str r5, [r8, #0x3d4]
    ldr r0, [r8, #0x3d4]
    mov r1, #0x2
    ldr r0, [r0, #0x2f4]
    ldr r0, [r0, #0x20]
    bl func_02035aa4
    mov r0, r8
    bl func_0201fadc
    mov r0, r8
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
