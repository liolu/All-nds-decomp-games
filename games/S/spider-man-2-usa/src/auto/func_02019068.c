#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02019a30();
extern void func_0201a19c();
extern void func_0201f7e8();
extern void func_0202ea58();
extern void func_0202ea8c();
extern void func_0202ebe4();
extern void func_020370f8();
extern void func_0203a6cc();
extern char data_02077160[];
extern char data_0207be0c[];
extern char data_0210c4d8[];
extern char data_0210c524[];
extern char data_02157ea4[];
extern char data_02157fdc[];
extern char data_021580ac[];
// clang-format off
asm void func_02019068(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x84
    ldr r1, =data_0210c4d8
    mov r5, r0
    ldr r2, [r1, #0x0]
    ldr r0, [r1, #0x4]
    str r2, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r1, [r5, #0x54]
    ldr r0, =data_0207be0c
    ldr r4, [r0, r1, lsl #0x2]
    mov r0, r4
    bl func_0202ea8c
    ldr r1, [r4, #0x0]
    str r0, [sp, #0x8]
    cmp r1, #0xb
    beq L_02019284
    mov r0, #0xa
    ldr r6, =data_0210c524
    add r11, sp, #0x14
    mov r7, #0x0
    mov r8, #0x1
    mov r9, #0x128
    str r0, [sp, #0xc]
L_020190c8:
    add r0, sp, #0x1c
    str r0, [sp, #0x0]
    mov r0, r4
    add r1, sp, #0x20
    add r2, sp, #0x60
    add r3, sp, #0x70
    bl func_0202ebe4
    mov r0, r9
    bl func_0203a6cc
    movs r10, r0
    beq L_02019128
    mov r0, r5
    bl func_0201a19c
    cmp r0, #0x0
    moveq r0, r8
    movne r0, r7
    str r6, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r3, =data_021580ac
    mov r0, r10
    add r1, sp, #0x20
    mov r2, r11
    bl func_020370f8
    mov r10, r0
L_02019128:
    mov r1, r10
    mov r0, r5
    mov r2, r8
    bl func_0201f7e8
    ldr r1, [sp, #0x14]
    mov r0, r9
    add r1, r1, #0x50
    str r1, [sp, #0x14]
    bl func_0203a6cc
    movs r10, r0
    beq L_02019188
    mov r0, r5
    bl func_0201a19c
    cmp r0, #0x0
    moveq r0, r8
    movne r0, r7
    str r6, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r3, =data_021580ac
    mov r0, r10
    add r1, sp, #0x60
    mov r2, r11
    bl func_020370f8
    mov r10, r0
L_02019188:
    mov r1, r10
    mov r0, r5
    mov r2, r8
    bl func_0201f7e8
    ldr r1, [sp, #0x14]
    mov r0, r9
    add r1, r1, #0x3c
    str r1, [sp, #0x14]
    bl func_0203a6cc
    movs r10, r0
    beq L_020191e8
    mov r0, r5
    bl func_0201a19c
    cmp r0, #0x0
    moveq r0, r8
    movne r0, r7
    str r6, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r3, =data_021580ac
    mov r0, r10
    add r1, sp, #0x70
    mov r2, r11
    bl func_020370f8
    mov r10, r0
L_020191e8:
    mov r1, r10
    mov r0, r5
    mov r2, r8
    bl func_0201f7e8
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x14]
    sub r0, r0, #0x5
    add r1, r1, #0x40
    str r0, [sp, #0x18]
    mov r0, r9
    str r1, [sp, #0x14]
    bl func_0203a6cc
    movs r10, r0
    beq L_02019254
    mov r0, r5
    bl func_0201a19c
    cmp r0, #0x0
    moveq r0, r8
    movne r0, r7
    str r6, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r3, =data_02157fdc
    mov r0, r10
    add r1, sp, #0x1c
    mov r2, r11
    bl func_020370f8
    mov r10, r0
L_02019254:
    mov r1, r10
    mov r0, r5
    mov r2, r8
    bl func_0201f7e8
    ldr r0, [sp, #0xc]
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    add r0, r0, #0x19
    str r0, [sp, #0x18]
    ldr r0, [r4, #0x8]!
    cmp r0, #0xb
    bne L_020190c8
L_02019284:
    mov r1, #0x38
    mov r0, #0x128
    str r1, [sp, #0x14]
    bl func_0203a6cc
    movs r4, r0
    beq L_020192e0
    ldr r0, =data_02077160
    bl func_02019a30
    mov r6, r0
    mov r0, r5
    bl func_0201a19c
    cmp r0, #0x0
    ldr r0, =data_0210c524
    moveq r7, #0x1
    str r0, [sp, #0x0]
    movne r7, #0x0
    ldr r3, =data_02157ea4
    add r2, sp, #0x14
    mov r0, r4
    mov r1, r6
    str r7, [sp, #0x4]
    bl func_020370f8
    mov r4, r0
L_020192e0:
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    bl func_0201f7e8
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x18]
    add r2, r1, #0x94
    add r1, r0, #0x4
    ldr r0, [sp, #0x8]
    str r2, [sp, #0x14]
    str r1, [sp, #0x18]
    bl func_0202ea58
    add r1, sp, #0x10
    swpb r0, r0, [r1]
    add r2, sp, #0x11
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, #0x128
    bl func_0203a6cc
    movs r4, r0
    beq L_0201936c
    mov r0, r5
    bl func_0201a19c
    cmp r0, #0x0
    ldr r0, =data_0210c524
    moveq r6, #0x1
    str r0, [sp, #0x0]
    movne r6, #0x0
    ldr r3, =data_02157fdc
    add r1, sp, #0x10
    add r2, sp, #0x14
    mov r0, r4
    str r6, [sp, #0x4]
    bl func_020370f8
    mov r4, r0
L_0201936c:
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    bl func_0201f7e8
    add sp, sp, #0x84
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
