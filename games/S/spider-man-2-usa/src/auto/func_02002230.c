#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9420();
extern void func_01ffa43c();
extern void func_01ffa554();
extern void func_02002960();
extern void func_0200370c();
extern void func_02003838();
extern void func_020038b0();
extern void func_02003e00();
extern void func_02003e34();
extern void func_02003e68();
extern void func_02004030();
extern void func_0200409c();
extern void func_02004104();
extern void func_0200b174();
extern void func_02014be0();
extern void func_0201fa80();
extern void func_0202aa8c();
extern void func_0202aaa0();
extern void func_0202bff8();
extern void func_0203a6cc();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_02067730[];
extern char data_02067738[];
extern char data_0207b198[];
extern char data_0207b6e8[];
extern char data_02086fc4[];
extern char data_02087704[];
extern char data_02087714[];
extern char data_02087724[];
extern char data_020fff50[];
extern char data_0210001c[];
extern char data_02100024[];
extern char data_02100028[];
extern char data_02100030[];
extern char data_02100034[];
extern char data_02100038[];
extern char data_0210003c[];
extern char data_02100040[];
extern char data_02100044[];
extern char data_0212ce38[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02002230(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    mov r5, r0
    ldr r1, [r5, #0x370]
    cmp r1, #0x1
    addne sp, sp, #0x2c
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r3, [r5, #0x3ac]
    cmp r3, #0x0
    beq L_020022a0
    ldr r2, [r3, #0x298]
    ldr r1, [r5, #0x298]
    sub r2, r2, r1
    cmp r2, #0x0
    ble L_020022a0
    ldr r1, =0x88b8
    cmp r2, r1
    bge L_020022a0
    ldr r2, [r3, #0x2f4]
    ldr r1, =data_0212ce38
    ldr r2, [r2, #0x8c]
    cmp r2, r1
    bne L_020022a0
    bl func_02003e68
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020022a0:
    bl func_01ffa43c
    mov r4, r0
    ldrb r0, [r5, #0x362]
    ldr r2, [r5, #0x298]
    ldr r1, [r4, #0x298]
    cmp r0, #0x0
    sub r3, r1, r2
    bne L_020022c8
    cmp r1, r2
    blt L_020022d8
L_020022c8:
    cmp r0, #0x0
    beq L_020022ec
    cmp r1, r2
    ble L_020022ec
L_020022d8:
    mov r0, r5
    bl func_0200409c
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020022ec:
    ldr r0, =0x4e20
    cmp r3, #0x0
    rsblt r3, r3, #0x0
    cmp r3, r0
    ble L_02002324
    bl func_0204cd18
    ldr r1, =data_02086fc4
    mov r2, #0x0
    bl func_0204c8cc
    mov r0, r5
    bl func_02004030
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02002324:
    bl func_01ffa43c
    bl func_0202aaa0
    cmp r0, #0x0
    bne L_02002344
    bl func_01ffa43c
    bl func_0202aa8c
    cmp r0, #0x0
    beq L_02002368
L_02002344:
    bl func_0204cd18
    ldr r1, =data_02086fc4
    mov r2, #0x0
    bl func_0204c8cc
    mov r0, r5
    bl func_02003e68
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02002368:
    ldr r0, [r5, #0x39c]
    cmp r0, #0x0
    bne L_020028c4
    ldr r0, =data_0215b3d4
    mov r1, #0x0
    bl func_02014be0
    cmp r0, #0x0
    addle sp, sp, #0x2c
    ldmlefd sp!, {r4, r5, lr}
    bxle lr
    add r1, r5, #0x390
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r3, [r5, #0x384]
    ldr r0, [r3, #0x8]
    cmp r0, #0x0
    beq L_02002444
    ldr r2, [r3, #0x0]
    cmp r2, #0x1
    bne L_020023cc
    ldr r1, [r5, #0x374]
    ldr r0, [r3, #0x4]
    cmp r1, r0
    ble L_020023e4
L_020023cc:
    cmp r2, #0x0
    bne L_02002444
    ldr r1, [r5, #0x388]
    ldr r0, [r3, #0x4]
    cmp r1, r0
    bne L_02002444
L_020023e4:
    ldr r0, [r3, #0xc]
    cmp r0, #0x0
    beq L_020023f4
    bl func_0200b174
L_020023f4:
    ldr r1, [r5, #0x384]
    ldr r0, =data_0210001c
    ldr r1, [r1, #0x8]
    str r1, [r5, #0x384]
    ldr r0, [r0, #0x0]
    ldr r1, [r5, #0x384]
    ldr r0, [r0, #0x8]
    ldr r0, [r0, #0x8]
    ldr r0, [r0, #0x8]
    ldr r0, [r0, #0x8]
    cmp r1, r0
    bne L_02002434
    bl func_0204cd18
    ldr r1, =data_02087714
    mov r2, #0x0
    bl func_0204c8cc
L_02002434:
    mov r0, #0x0
    str r0, [r5, #0x388]
    str r0, [r5, #0x38c]
    str r0, [r5, #0x390]
L_02002444:
    ldr r2, [r5, #0x384]
    ldr r1, [r5, #0x38c]
    ldr r0, [r5, #0x390]
    add r1, r2, r1, lsl #0x2
    ldr r1, [r1, #0x10]
    ldrb r0, [r1, r0]
    cmp r0, #0x0
    bne L_020024c4
    add r2, r5, #0x38c
    ldr r1, [r2, #0x0]
    mvn r0, #0x0
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    str r0, [r5, #0x390]
    ldr r1, [r5, #0x384]
    ldr r0, [r5, #0x38c]
    add r0, r1, r0, lsl #0x2
    ldr r0, [r0, #0x10]
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    addne sp, sp, #0x2c
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, #0x0
    add r1, r5, #0x388
    str r0, [r5, #0x38c]
    ldr r0, [r1, #0x0]
    add sp, sp, #0x2c
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020024c4:
    ldr r1, =data_0210003c
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_020024f4
    mov r0, r5
    bl func_020038b0
    mov r0, #0x0
    add sp, sp, #0x2c
    str r0, [r5, #0x39c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020024f4:
    ldr r1, =data_02100040
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_02002524
    mov r0, r5
    bl func_02004030
    mov r0, #0x0
    add sp, sp, #0x2c
    str r0, [r5, #0x39c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02002524:
    ldr r1, =data_02100044
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_02002580
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    ldrne r1, =0xffffdecc
    mov r0, r5
    ldreq r1, =0x2134
    bl func_02002960
    cmp r0, #0x0
    beq L_02002564
    mov r0, r5
    bl func_02003838
    b L_0200256c
L_02002564:
    mov r0, r5
    bl func_020038b0
L_0200256c:
    mov r0, #0x0
    add sp, sp, #0x2c
    str r0, [r5, #0x39c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02002580:
    ldr r1, =data_02100030
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_020025e8
    add r0, r4, #0x200
    ldrb r1, [r5, #0x362]
    ldrh r2, [r0, #0x94]
    ldr r0, =0x1c52
    cmp r1, #0x0
    add r1, r0, r2, asr #0x1
    rsbne r1, r1, #0x0
    mov r0, r5
    bl func_02002960
    cmp r0, #0x0
    beq L_020025cc
    mov r0, r5
    bl func_02003e34
    b L_020025d4
L_020025cc:
    mov r0, r5
    bl func_020038b0
L_020025d4:
    mov r0, #0x0
    add sp, sp, #0x2c
    str r0, [r5, #0x39c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020025e8:
    ldr r1, =data_02100034
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_02002650
    add r0, r4, #0x200
    ldrb r1, [r5, #0x362]
    ldrh r2, [r0, #0x94]
    ldr r0, =0x34bc
    cmp r1, #0x0
    add r1, r0, r2, asr #0x1
    rsbne r1, r1, #0x0
    mov r0, r5
    bl func_02002960
    cmp r0, #0x0
    beq L_02002634
    mov r0, r5
    bl func_02003e00
    b L_0200263c
L_02002634:
    mov r0, r5
    bl func_020038b0
L_0200263c:
    mov r0, #0x0
    add sp, sp, #0x2c
    str r0, [r5, #0x39c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02002650:
    ldr r1, =data_02100038
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_02002758
    ldr r0, [r5, #0x3ac]
    mov r4, #0x0
    cmp r0, #0x0
    beq L_02002690
    ldrb r1, [r0, #0x10]
    cmp r1, #0x0
    movne r4, #0x1
    bne L_02002690
    bl func_01ff9420
    mov r0, r4
    str r0, [r5, #0x3ac]
L_02002690:
    cmp r4, #0x0
    bne L_02002744
    ldr r0, =data_02067730
    ldr r1, [r0, #0x0]
    ldr r0, [r0, #0x4]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r4, [r5, #0x298]
    bl func_01ffa43c
    ldr r0, [r0, #0x298]
    ldr r1, =0xc350
    cmp r4, r0
    movle r4, r0
    add r1, r4, r1
    mov r0, #0x380
    str r1, [sp, #0xc]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_020026fc
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    ldr r1, =data_0207b198
    add r2, sp, #0xc
    str r3, [sp, #0x8]
    ldmia r2, {r2, r3}
    bl func_0202bff8
L_020026fc:
    str r0, [r5, #0x3ac]
    ldr r0, [r5, #0x3ac]
    mov r2, #0x4
    add r3, r0, #0x27c
    ldrb r0, [r3, #0x0]
    mov r1, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r3]
    ldr r0, [r5, #0x3ac]
    str r2, [r0, #0x37c]
    ldr r0, [r5, #0x3ac]
    bl func_01ffa554
    ldr r0, [r5, #0x394]
    str r0, [r5, #0x39c]
    bl func_0204cd18
    ldr r1, =data_02087704
    mov r2, #0x0
    bl func_0204c8cc
L_02002744:
    mov r0, r5
    bl func_02004104
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02002758:
    ldr r1, =data_02100024
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_02002878
    ldr r0, [r5, #0x3ac]
    mov r4, #0x0
    cmp r0, #0x0
    beq L_02002798
    ldrb r1, [r0, #0x10]
    cmp r1, #0x0
    movne r4, #0x1
    bne L_02002798
    bl func_01ff9420
    mov r0, r4
    str r0, [r5, #0x3ac]
L_02002798:
    cmp r4, #0x0
    bne L_02002864
    ldr r0, =data_02067738
    ldr r1, [r0, #0x0]
    ldr r0, [r0, #0x4]
    str r1, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r4, [r5, #0x298]
    bl func_01ffa43c
    ldr r0, [r0, #0x298]
    ldr r1, =0xc350
    cmp r4, r0
    movle r4, r0
    add r1, r4, r1
    mov r0, #0x380
    str r1, [sp, #0x14]
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_02002804
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    ldr r1, =data_0207b6e8
    add r2, sp, #0x14
    str r3, [sp, #0x8]
    ldmia r2, {r2, r3}
    bl func_0202bff8
L_02002804:
    str r0, [r5, #0x3ac]
    ldr r0, [r5, #0x3ac]
    mov r2, #0x4
    add r3, r0, #0x27c
    ldrb r0, [r3, #0x0]
    mov r1, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r3]
    ldr r0, [r5, #0x3ac]
    str r2, [r0, #0x37c]
    ldr r0, [r5, #0x3ac]
    bl func_01ffa554
    ldr r0, =data_020fff50
    add r3, sp, #0x1c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0201fa80
    mov r0, #0xb4
    str r0, [r5, #0x39c]
    bl func_0204cd18
    ldr r1, =data_02087724
    mov r2, #0x0
    bl func_0204c8cc
L_02002864:
    mov r0, r5
    bl func_02004104
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02002878:
    ldr r1, =data_02100028
    ldr r1, [r1, #0x0]
    ldrb r1, [r1, #0x0]
    cmp r0, r1
    bne L_020028a8
    mov r0, r5
    bl func_0200370c
    mov r0, #0x28
    add sp, sp, #0x2c
    str r0, [r5, #0x39c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020028a8:
    mov r0, r5
    bl func_02004104
    ldr r0, [r5, #0x394]
    add sp, sp, #0x2c
    str r0, [r5, #0x39c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020028c4:
    cmp r0, #0x0
    addgt r1, r5, #0x39c
    ldrgt r0, [r1, #0x0]
    subgt r0, r0, #0x1
    strgt r0, [r1, #0x0]
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
