#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c90c();
extern void func_0200c9b8();
extern void func_02014ab0();
extern void func_020161b8();
extern void func_02019a30();
extern void func_0201a558();
extern void func_0201a6a0();
extern void func_0201b968();
extern void func_0201ee8c();
extern void func_0201f054();
extern void func_0201f7e8();
extern void func_0201fa30();
extern void func_02033664();
extern void func_020365b0();
extern void func_02036848();
extern void func_020370f8();
extern void func_020371a8();
extern void func_020384f8();
extern void func_0203a6cc();
extern void func_0204b268();
extern void func_0204b2f4();
extern void r2();
extern char data_02113140[];
extern char data_02157ea4[];
extern char data_021580ac[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0201aa18(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x74
    mov r4, r1
    mov r1, #0x1
    mov r5, r0
    str r2, [sp, #0x8]
    mov r6, r3
    bl func_0201fa30
    ldr r0, =data_02113140
    add r1, r5, #0x24
    str r0, [r5, #0x0]
    ldr r0, [sp, #0x8]
    mov r2, #0x0
    swpb r0, r0, [r1]
    add r1, r5, #0x48
    str r2, [r5, #0x28]
    str r2, [r5, #0x34]
    str r2, [r5, #0x38]
    str r6, [r5, #0x3c]
    mov r0, #0x1
    str r0, [r5, #0x40]
    str r2, [r5, #0x44]
    swpb r0, r2, [r1]
    str r2, [r5, #0x4c]
    mov r0, #0x10
    str r2, [r5, #0x50]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0201aa94
    mov r1, #0x20
    bl func_0201f054
L_0201aa94:
    str r0, [r5, #0x2c]
    ldr r1, [r5, #0x2c]
    mov r0, r5
    mov r2, #0x1
    bl func_0201f7e8
    mov r0, #0x10
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0201aac0
    mov r1, #0x20
    bl func_0201f054
L_0201aac0:
    str r0, [r5, #0x30]
    ldr r1, [r5, #0x30]
    mov r0, r5
    mov r2, #0x1
    bl func_0201f7e8
    mov r8, #0x0
    str r8, [r5, #0x18]
    str r8, [r5, #0x1c]
    str r8, [r5, #0x20]
    ldr r0, [r4, #0x0]
    cmp r0, #0xe
    beq L_0201b04c
    mov r1, #0x6200000
    str r1, [sp, #0x10]
    mov r1, #0x2dc
    str r1, [sp, #0xc]
    mov r1, #0x6000000
    str r1, [sp, #0x14]
    mov r1, #0x38
    str r1, [sp, #0x1c]
    mov r1, #0x28
    str r1, [sp, #0x18]
    mov r1, #0x138
    str r1, [sp, #0x20]
    mov r1, #0x174
    str r1, [sp, #0x24]
    mov r1, #0xa
    str r1, [sp, #0x34]
    mov r1, #0x78
    str r1, [sp, #0x28]
    mov r1, #0x14
    str r1, [sp, #0x2c]
    mov r1, #0x2c
    str r1, [sp, #0x30]
    mov r1, #0xb
    str r1, [sp, #0x3c]
    mov r1, #0x88
    mov r10, #0x100
    mov r6, #0x128
    mov r7, #0x1
    mov r11, #0xac
    str r1, [sp, #0x38]
L_0201ab68:
    cmp r0, #0xe
    addls pc, pc, r0, lsl #0x2
    b L_0201b040
L_0201ab74:
    b L_0201abb0
    b L_0201abbc
    b L_0201ac70
    b L_0201acac
    b L_0201ad14
    b L_0201ad08
    b L_0201ad80
    b L_0201add4
    b L_0201adf0
    b L_0201ae58
    b L_0201aeac
    b L_0201af44
    b L_0201afe0
    b L_0201ad70
    b L_0201b040
L_0201abb0:
    ldr r0, [r4, #0x4]
    str r0, [r5, #0x38]
    b L_0201b040
L_0201abbc:
    ldrb r0, [r5, #0x24]
    cmp r0, #0x0
    beq L_0201ac28
    ldr r0, =data_0215b3d4
    ldr r0, [r0, #0x64]
    bl func_02014ab0
    cmp r0, #0x2
    bne L_0201abe0
    bl func_0204b2f4
L_0201abe0:
    ldr r0, [sp, #0xc]
    bl func_0203a6cc
    movs r9, r0
    beq L_0201ac08
    str r10, [sp, #0x0]
    ldrb r3, [r5, #0x24]
    ldr r1, [sp, #0x10]
    ldr r2, =0x620c000
    bl func_0200c9b8
    mov r9, r0
L_0201ac08:
    mov r0, r9
    ldr r1, [r4, #0x4]
    bl func_0200c90c
    mov r1, r9
    mov r0, r5
    mov r2, r7
    bl func_0201f7e8
    b L_0201b040
L_0201ac28:
    ldr r0, [sp, #0xc]
    bl func_0203a6cc
    movs r9, r0
    beq L_0201ac50
    str r10, [sp, #0x0]
    ldrb r3, [r5, #0x24]
    ldr r1, [sp, #0x14]
    ldr r2, =0x600c000
    bl func_0200c9b8
    mov r9, r0
L_0201ac50:
    mov r0, r9
    ldr r1, [r4, #0x4]
    bl func_0200c90c
    mov r1, r9
    mov r0, r5
    mov r2, r7
    bl func_0201f7e8
    b L_0201b040
L_0201ac70:
    ldr r0, =data_0215b3d4
    ldr r0, [r0, #0x64]
    bl func_02014ab0
    cmp r0, #0x2
    bne L_0201ac88
    bl func_0204b268
L_0201ac88:
    add r1, r5, #0x48
    swpb r0, r7, [r1]
    ldr r1, [sp, #0x8]
    ldr r0, [r4, #0x4]
    bl func_02033664
    ldrb r1, [r5, #0x24]
    mov r0, r5
    bl func_0201a6a0
    b L_0201b040
L_0201acac:
    ldr r0, [sp, #0x18]
    str r4, [r5, #0x44]
    bl func_0203a6cc
    movs r9, r0
    beq L_0201acf0
    ldr r0, [sp, #0x1c]
    bl func_0203a6cc
    movs r1, r0
    beq L_0201ace0
    ldr r1, [r4, #0x4]
    ldrb r2, [r5, #0x24]
    bl func_020161b8
    mov r1, r0
L_0201ace0:
    mov r0, r9
    add r2, r4, #0x8
    bl func_02036848
    mov r9, r0
L_0201acf0:
    str r9, [r5, #0x34]
    mov r0, r5
    ldr r1, [r5, #0x34]
    mov r2, r7
    bl func_0201f7e8
    b L_0201b040
L_0201ad08:
    ldr r0, [r4, #0x10]
    str r0, [r5, #0x40]
    b L_0201b040
L_0201ad14:
    ldr r1, [r4, #0x4]
    ldr r0, [sp, #0x20]
    str r1, [sp, #0x40]
    ldr r1, [r4, #0x10]
    str r1, [sp, #0x44]
    bl func_0203a6cc
    movs r1, r0
    beq L_0201ad50
    ldrb r3, [r5, #0x24]
    add r1, sp, #0x40
    add r2, r5, #0x18
    str r3, [sp, #0x0]
    ldr r3, [r5, #0x40]
    bl func_0201b968
    mov r1, r0
L_0201ad50:
    ldr r0, [r5, #0x2c]
    bl func_0201ee8c
    add r2, r5, #0x1c
    ldr r1, [r2, #0x0]
    ldr r0, [r5, #0x20]
    add r0, r1, r0
    str r0, [r2, #0x0]
    b L_0201b040
L_0201ad70:
    mov r0, r5
    ldr r1, [r4, #0x4]
    bl func_0201a558
    b L_0201b040
L_0201ad80:
    ldr r0, [sp, #0x24]
    bl func_0203a6cc
    movs r1, r0
    beq L_0201adb4
    ldrb r1, [r5, #0x24]
    add r2, r5, #0x18
    str r1, [sp, #0x0]
    ldr r1, [r4, #0x10]
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x4]
    ldr r3, [r5, #0x40]
    bl func_020365b0
    mov r1, r0
L_0201adb4:
    ldr r0, [r5, #0x2c]
    bl func_0201ee8c
    add r2, r5, #0x1c
    ldr r1, [r2, #0x0]
    ldr r0, [r5, #0x20]
    add r0, r1, r0
    str r0, [r2, #0x0]
    b L_0201b040
L_0201add4:
    ldr r0, [r4, #0x8]
    str r0, [r5, #0x18]
    ldr r0, [r4, #0xc]
    str r0, [r5, #0x1c]
    ldr r0, [r4, #0x10]
    str r0, [r5, #0x20]
    b L_0201b040
L_0201adf0:
    ldr r0, [sp, #0x18]
    bl func_0203a6cc
    movs r9, r0
    beq L_0201ae30
    ldr r0, [sp, #0x1c]
    bl func_0203a6cc
    movs r1, r0
    beq L_0201ae20
    ldr r1, [r4, #0x4]
    ldrb r2, [r5, #0x24]
    bl func_020161b8
    mov r1, r0
L_0201ae20:
    mov r0, r9
    add r2, r4, #0x8
    bl func_02036848
    mov r9, r0
L_0201ae30:
    ldr r0, [r9, #0x20]
    ldr r1, [r4, #0x10]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x18]
    blx r2
    mov r1, r9
    mov r0, r5
    mov r2, r7
    bl func_0201f7e8
    b L_0201b040
L_0201ae58:
    mov r0, r6
    bl func_0203a6cc
    movs r9, r0
    beq L_0201ae98
    ldr r0, [r4, #0x4]
    bl func_02019a30
    ldr r2, [r4, #0x10]
    mov r1, r0
    str r2, [sp, #0x0]
    mov r0, r9
    ldrb r9, [r5, #0x24]
    ldr r3, =data_021580ac
    add r2, r4, #0x8
    str r9, [sp, #0x4]
    bl func_020370f8
    mov r9, r0
L_0201ae98:
    mov r1, r9
    mov r0, r5
    mov r2, r7
    bl func_0201f7e8
    b L_0201b040
L_0201aeac:
    mov r0, r6
    bl func_0203a6cc
    movs r9, r0
    beq L_0201aeec
    ldr r0, [r4, #0x4]
    bl func_02019a30
    ldr r2, [r4, #0x10]
    mov r1, r0
    str r2, [sp, #0x0]
    mov r0, r9
    ldrb r9, [r5, #0x24]
    ldr r3, =data_021580ac
    add r2, r4, #0x8
    str r9, [sp, #0x4]
    bl func_020370f8
    mov r9, r0
L_0201aeec:
    mov r1, r9
    mov r0, r5
    mov r2, r7
    bl func_0201f7e8
    ldr r0, [sp, #0x28]
    str r8, [sp, #0x50]
    str r0, [sp, #0x58]
    ldr r0, [sp, #0x2c]
    str r11, [sp, #0x54]
    str r0, [sp, #0x5c]
    ldr r0, [sp, #0x30]
    bl func_0203a6cc
    movs r1, r0
    beq L_0201af38
    ldr r3, [sp, #0x34]
    mov r1, r5
    add r2, sp, #0x50
    bl func_020384f8
    mov r1, r0
L_0201af38:
    ldr r0, [r5, #0x30]
    bl func_0201ee8c
    b L_0201b040
L_0201af44:
    mov r0, r6
    bl func_0203a6cc
    movs r9, r0
    beq L_0201af84
    ldr r0, [r4, #0x4]
    bl func_02019a30
    ldr r2, [r4, #0x10]
    mov r1, r0
    str r2, [sp, #0x0]
    mov r0, r9
    ldrb r9, [r5, #0x24]
    ldr r3, =data_021580ac
    add r2, r4, #0x8
    str r9, [sp, #0x4]
    bl func_020370f8
    mov r9, r0
L_0201af84:
    mov r1, r9
    mov r0, r5
    mov r2, r7
    bl func_0201f7e8
    ldr r0, [sp, #0x38]
    str r11, [sp, #0x64]
    str r0, [sp, #0x60]
    ldr r0, [sp, #0x28]
    str r0, [sp, #0x68]
    ldr r0, [sp, #0x2c]
    str r0, [sp, #0x6c]
    ldr r0, [sp, #0x30]
    bl func_0203a6cc
    movs r1, r0
    beq L_0201afd4
    ldr r3, [sp, #0x3c]
    mov r1, r5
    add r2, sp, #0x60
    bl func_020384f8
    mov r1, r0
L_0201afd4:
    ldr r0, [r5, #0x30]
    bl func_0201ee8c
    b L_0201b040
L_0201afe0:
    add r0, sp, #0x48
    str r8, [r0, #0x0]
    str r8, [r0, #0x4]
    ldr r1, [r4, #0x10]
    mov r0, r6
    str r1, [sp, #0x4c]
    bl func_0203a6cc
    movs r9, r0
    beq L_0201b02c
    ldr r0, [r4, #0x4]
    bl func_02019a30
    ldrb r3, [r5, #0x24]
    mov r1, r0
    mov r0, r9
    str r3, [sp, #0x0]
    ldr r3, =data_02157ea4
    add r2, sp, #0x48
    bl func_020371a8
    mov r9, r0
L_0201b02c:
    str r9, [r5, #0x28]
    mov r0, r5
    ldr r1, [r5, #0x28]
    mov r2, r7
    bl func_0201f7e8
L_0201b040:
    ldr r0, [r4, #0x14]!
    cmp r0, #0xe
    bne L_0201ab68
L_0201b04c:
    ldr r0, [r5, #0x2c]
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    beq L_0201b070
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r1, [r5, #0x3c]
    ldr r2, [r2, #0x28]
    blx r2
L_0201b070:
    mov r0, r5
    add sp, sp, #0x74
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
