#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc5e8();
extern void func_0200d2fc();
extern void func_02019a30();
extern void func_0201bb50();
extern void func_0201c030();
extern void func_0201c1b4();
extern void func_0201cfa0();
extern void func_0201dd80();
extern void func_0201df70();
extern void func_0201f7e8();
extern void func_0201fa80();
extern void func_0203333c();
extern void func_020334d4();
extern void func_02033664();
extern void func_020371a8();
extern void func_0203a6cc();
extern void func_02046490();
extern void func_0204af68();
extern void func_0204da40();
extern void r1();
extern char data_0206fd20[];
extern char data_0206fd28[];
extern char data_02076b28[];
extern char data_02107414[];
extern char data_021074a4[];
extern char data_02107534[];
extern char data_021075c4[];
extern char data_02107654[];
extern char data_02107708[];
extern char data_021079d4[];
extern char data_02157fdc[];
extern char data_0215b3d4[];
extern char data_0215d694[];
// clang-format off
asm void func_0200ac1c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x30
    mov r5, r0
    mov r4, r1
    mov r0, #0x1
    bl func_0204af68
    bl func_0201c1b4
    mov r0, r5
    mov r1, r4
    bl func_0200d2fc
    ldr r0, =data_0215b3d4
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1
    cmp r0, #0xe
    addls pc, pc, r0, lsl #0x2
    b L_0200adf0
L_0200ac5c:
    b L_0200adf0
    b L_0200adf0
    b L_0200adf0
    b L_0200adf0
    b L_0200adf0
    b L_0200adf0
    b L_0200ad78
    b L_0200adf0
    b L_0200ac98
    b L_0200adf0
    b L_0200ad1c
    b L_0200adf0
    b L_0200acc4
    b L_0200adf0
    b L_0200acf0
L_0200ac98:
    ldr r1, =data_02107414
    mov r0, #0x620
    str r1, [r5, #0x44]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0200acb8
    ldr r1, [r5, #0x44]
    bl func_0201bb50
L_0200acb8:
    mov r1, #0x5
    bl func_0201c030
    b L_0200adf0
L_0200acc4:
    ldr r1, =data_021074a4
    mov r0, #0x620
    str r1, [r5, #0x44]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0200ace4
    ldr r1, [r5, #0x44]
    bl func_0201bb50
L_0200ace4:
    mov r1, #0x5
    bl func_0201c030
    b L_0200adf0
L_0200acf0:
    ldr r1, =data_02107534
    mov r0, #0x620
    str r1, [r5, #0x44]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0200ad10
    ldr r1, [r5, #0x44]
    bl func_0201bb50
L_0200ad10:
    mov r1, #0x5
    bl func_0201c030
    b L_0200adf0
L_0200ad1c:
    ldr r1, =data_021075c4
    ldr r0, =0x624
    str r1, [r5, #0x44]
    bl func_0203a6cc
    movs r4, r0
    beq L_0200ad68
    bl func_02046490
    ldr r1, [r0, #0x4]
    mov r2, #0xa0
    add r0, r0, r1, lsl #0x2
    ldr r3, [r0, #0x8]
    ldr r1, [r5, #0x44]
    ldr r0, [r3, #0x144]
    add r3, r3, #0x4
    mla r2, r0, r2, r3
    mov r0, r4
    add r2, r2, #0x24
    bl func_0201df70
    mov r4, r0
L_0200ad68:
    mov r0, r4
    mov r1, #0x5
    bl func_0201c030
    b L_0200adf0
L_0200ad78:
    ldr r4, =data_02107654
    ldr r1, =0xfffff8b3
    ldr r2, =0x2a9e
    ldr r3, =0x2134
    add r0, sp, #0x20
    str r4, [r5, #0x44]
    bl func_01ffc5e8
    add r0, sp, #0x20
    add r3, sp, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x368
    bl func_0203a6cc
    movs r1, r0
    beq L_0200adc0
    add r1, sp, #0x8
    bl func_0201dd80
    mov r1, r0
L_0200adc0:
    mov r0, r5
    mov r2, #0x1
    bl func_0201f7e8
    ldr r0, =0x624
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0200ade8
    ldr r1, [r5, #0x44]
    add r2, sp, #0x8
    bl func_0201cfa0
L_0200ade8:
    mov r1, #0x5
    bl func_0201c030
L_0200adf0:
    ldr r0, [r5, #0x44]
    mov r1, #0x0
    ldr r0, [r0, #0x80]
    add r2, r5, #0x40
    str r0, [r5, #0x34]
    ldr r3, [r5, #0x44]
    mov r0, #0x128
    ldr r3, [r3, #0x84]
    str r3, [r5, #0x38]
    str r1, [r5, #0x3c]
    swpb r1, r1, [r2]
    bl func_0203a6cc
    movs r6, r0
    beq L_0200ae54
    ldr r0, [r5, #0x44]
    ldr r0, [r0, #0x5c]
    bl func_02019a30
    mov r1, r0
    mov r4, #0x1
    ldr r2, =data_0206fd20
    ldr r3, =data_02157fdc
    mov r0, r6
    str r4, [sp, #0x0]
    bl func_020371a8
    mov r6, r0
L_0200ae54:
    mov r0, r5
    mov r1, r6
    mov r2, #0x1
    bl func_0201f7e8
    mov r0, #0x128
    bl func_0203a6cc
    movs r6, r0
    beq L_0200aea0
    ldr r0, [r5, #0x44]
    ldr r0, [r0, #0x60]
    bl func_02019a30
    mov r1, r0
    mov r4, #0x1
    ldr r2, =data_0206fd28
    ldr r3, =data_02157fdc
    mov r0, r6
    str r4, [sp, #0x0]
    bl func_020371a8
    mov r6, r0
L_0200aea0:
    mov r0, r5
    mov r1, r6
    mov r2, #0x1
    bl func_0201f7e8
    ldr r0, =data_02107708
    add r3, sp, #0x14
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x24
    bl func_0203a6cc
    movs r1, r0
    beq L_0200aef4
    mov r4, #0x100
    mov r2, #0x0
    str r4, [sp, #0x0]
    mov r4, #0xc0
    add r1, sp, #0x14
    mov r3, r2
    str r4, [sp, #0x4]
    bl func_0204da40
    mov r1, r0
L_0200aef4:
    mov r0, r5
    mov r2, #0x1
    bl func_0201f7e8
    ldr r0, =data_021079d4
    mov r1, #0x1
    bl func_02033664
    ldr r0, =data_0215d694
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    mov r2, r1
    bl func_0203333c
    ldr r0, =data_0215d694
    ldr r0, [r0, #0x0]
    bl func_020334d4
    ldr r0, =data_02076b28
    bl func_0201fa80
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
