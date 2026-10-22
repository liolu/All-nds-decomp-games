#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000dac();
extern void func_02000db4();
extern void func_02000dbc();
extern void func_0202176c();
extern void func_020218cc();
extern void func_02021b60();
extern void func_020229b8();
extern void func_02023338();
extern void func_020245c0();
extern void func_0202461c();
extern void func_02024af4();
extern void func_02024b20();
extern void func_02024b78();
extern void func_02024ba4();
extern void func_020253e8();
extern void func_02025c90();
extern void func_02026548();
extern void func_0202aa30();
extern void r1();
extern char data_0207a4d4[];
extern char data_0207a4dc[];
extern char data_0207a4e8[];
extern char data_0207a574[];
extern char data_0207a57c[];
extern char data_0207a588[];
extern char data_0207a594[];
extern char data_0207a59c[];
extern char data_0207a5a8[];
extern char data_0207a674[];
extern char data_0207a67c[];
extern char data_0207a688[];
extern char data_0207a694[];
extern char data_0207a69c[];
extern char data_0207a6a8[];
extern char data_0207a6b4[];
extern char data_0207a6bc[];
extern char data_0207a6c8[];
// clang-format off
asm void func_02026c7c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r1, #0x0
    str r1, [r4, #0x3ec]
    str r1, [r4, #0x384]
    bl func_020218cc
    ldr r1, =0x3d1
    mov r2, #0x0
    add r1, r4, r1
    swpb r0, r0, [r1]
    mov r0, r4
    str r2, [r4, #0x3d8]
    str r2, [r4, #0x3dc]
    bl func_02024b20
    cmp r0, #0x0
    beq L_02026ccc
    mov r0, r4
    bl func_02025c90
    ldmfd sp!, {r4, lr}
    bx lr
L_02026ccc:
    mov r0, r4
    bl func_020218cc
    cmp r0, #0x0
    beq L_02026e40
    mov r0, r4
    bl func_02024b78
    cmp r0, #0x0
    beq L_02026cfc
    mov r0, r4
    bl func_020229b8
    ldmfd sp!, {r4, lr}
    bx lr
L_02026cfc:
    mov r0, r4
    bl func_02024ba4
    cmp r0, #0x0
    beq L_02026d9c
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x2f
    bl func_0202461c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x2f
    bl func_020245c0
    mov r1, #0x11
    str r1, [r4, #0x388]
    ldr r0, =data_0207a674
    ldr r1, =data_0207a67c
    ldr r2, [r0, #0x0]
    add r3, r4, #0x2c8
    str r2, [r4, #0x2c0]
    ldr r0, [r0, #0x4]
    str r0, [r4, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0207a688
    add r3, r4, #0x2d4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_020245c0
    mov r0, r4
    mov r1, #0xc
    mov r2, #0x0
    bl func_0202aa30
    mov r0, #0x11
    str r0, [r4, #0x388]
    ldmfd sp!, {r4, lr}
    bx lr
L_02026d9c:
    mov r0, r4
    bl func_02024af4
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x30
    bl func_0202461c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x30
    bl func_020245c0
    mov r1, #0x11
    str r1, [r4, #0x388]
    ldr r0, =data_0207a694
    ldr r1, =data_0207a69c
    ldr r2, [r0, #0x0]
    add r3, r4, #0x2c8
    str r2, [r4, #0x2c0]
    ldr r0, [r0, #0x4]
    str r0, [r4, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0207a6a8
    add r3, r4, #0x2d4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_020245c0
    mov r0, r4
    mov r1, #0xc
    mov r2, #0x0
    bl func_0202aa30
    mov r0, #0x11
    str r0, [r4, #0x388]
    ldmfd sp!, {r4, lr}
    bx lr
L_02026e40:
    mov r0, r4
    bl func_02024b78
    cmp r0, #0x0
    beq L_0202701c
    ldr r0, [r4, #0x28c]
    cmp r0, #0x0
    bne L_02026fec
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x40
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    movne r0, #0x4
    bne L_02026e94
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x2
L_02026e94:
    str r0, [r4, #0x38c]
    add r2, r4, #0x298
    ldr r1, [r2, #0x0]
    mov r0, r4
    str r1, [r4, #0x390]
    ldr r1, [r2, #0x4]
    str r1, [r4, #0x394]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x40
    beq L_02026f5c
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    beq L_02026ef0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x20
    movne r0, #0x1
    moveq r0, #0x0
    b L_02026f0c
L_02026ef0:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x10
    movne r0, #0x1
    moveq r0, #0x0
L_02026f0c:
    cmp r0, #0x0
    beq L_02026f5c
    ldrb r0, [r4, #0x362]
    add r1, r4, #0x394
    ldr r2, =0x4e20
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x2
    str r0, [r4, #0x38c]
    ldr r0, [r1, #0x0]
    sub r0, r0, r2
    str r0, [r1, #0x0]
    ldrb r0, [r4, #0x362]
    add r1, r4, #0x390
    cmp r0, #0x0
    ldrne r2, =0xffffb1e0
    ldr r0, [r1, #0x0]
    add r0, r0, r2
    str r0, [r1, #0x0]
    b L_02026fc8
L_02026f5c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x40
    beq L_02026f94
    mov r0, #0x4
    str r0, [r4, #0x38c]
    add r2, r4, #0x394
    ldr r1, [r2, #0x0]
    ldr r0, =0x4e20
    sub r0, r1, r0
    str r0, [r2, #0x0]
    b L_02026fc8
L_02026f94:
    ldrb r0, [r4, #0x362]
    add r1, r4, #0x390
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x2
    str r0, [r4, #0x38c]
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    ldrne r2, =0xffffb1e0
    ldr r0, [r1, #0x0]
    ldreq r2, =0x4e20
    add r0, r0, r2
    str r0, [r1, #0x0]
L_02026fc8:
    mov r0, r4
    bl func_0202176c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02021b60
    ldmfd sp!, {r4, lr}
    bx lr
L_02026fec:
    mov r0, r4
    bl func_020218cc
    cmp r0, #0x0
    beq L_0202700c
    mov r0, r4
    bl func_020229b8
    ldmfd sp!, {r4, lr}
    bx lr
L_0202700c:
    mov r0, r4
    bl func_02023338
    ldmfd sp!, {r4, lr}
    bx lr
L_0202701c:
    ldr r0, [r4, #0x28c]
    cmp r0, #0x0
    bne L_020271cc
    mov r0, r4
    bl func_02024ba4
    cmp r0, #0x0
    beq L_020270f8
    mov r0, r4
    bl func_020253e8
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x11
    bl func_0202461c
    ldr r0, =data_0207a6b4
    ldr r1, =data_0207a6bc
    ldr r2, [r0, #0x0]
    add r3, r4, #0x2c8
    str r2, [r4, #0x2c0]
    ldr r0, [r0, #0x4]
    ldr ip, =data_0207a6c8
    str r0, [r4, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x2d4
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x11
    str r0, [r4, #0x388]
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x1c
    ldr r1, [r1, #0x2c]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000db4
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x1c
    ldr r1, [r1, #0x28]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000dbc
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x4
    ldr r1, [r1, #0x10]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000dbc
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x4
    ldr r1, [r1, #0x18]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000dac
    ldmfd sp!, {r4, lr}
    bx lr
L_020270f8:
    mov r0, r4
    bl func_02024af4
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_020253e8
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x12
    bl func_0202461c
    ldr r0, =data_0207a4d4
    ldr r1, =data_0207a4dc
    ldr r2, [r0, #0x0]
    add r3, r4, #0x2c8
    str r2, [r4, #0x2c0]
    ldr r0, [r0, #0x4]
    ldr ip, =data_0207a4e8
    str r0, [r4, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x2d4
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x11
    str r0, [r4, #0x388]
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x1c
    ldr r1, [r1, #0x2c]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000db4
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x1c
    ldr r1, [r1, #0x28]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000dbc
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x4
    ldr r1, [r1, #0x10]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000dbc
    ldr r1, [r4, #0x2f0]
    add r0, r1, #0x4
    ldr r1, [r1, #0x18]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_02000dac
    ldmfd sp!, {r4, lr}
    bx lr
L_020271cc:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x40
    beq L_020272e4
    mov r0, r4
    bl func_02024ba4
    cmp r0, #0x0
    bne L_02027204
    mov r0, r4
    bl func_02024af4
    cmp r0, #0x0
    beq L_020272e4
L_02027204:
    mov r0, r4
    bl func_02024ba4
    cmp r0, #0x0
    beq L_0202727c
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x32
    bl func_0202461c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x32
    bl func_020245c0
    mov r1, #0x11
    str r1, [r4, #0x388]
    ldr r0, =data_0207a594
    ldr r1, =data_0207a59c
    ldr r2, [r0, #0x0]
    add r3, r4, #0x2c8
    str r2, [r4, #0x2c0]
    ldr r0, [r0, #0x4]
    str r0, [r4, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0207a5a8
    add r3, r4, #0x2d4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldmfd sp!, {r4, lr}
    bx lr
L_0202727c:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x31
    bl func_0202461c
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x31
    bl func_020245c0
    mov r1, #0x11
    str r1, [r4, #0x388]
    ldr r0, =data_0207a574
    ldr r1, =data_0207a57c
    ldr r2, [r0, #0x0]
    add r3, r4, #0x2c8
    str r2, [r4, #0x2c0]
    ldr r0, [r0, #0x4]
    str r0, [r4, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0207a588
    add r3, r4, #0x2d4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldmfd sp!, {r4, lr}
    bx lr
L_020272e4:
    mov r0, r4
    bl func_02026548
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
