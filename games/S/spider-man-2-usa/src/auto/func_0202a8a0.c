#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb0f0();
extern void func_01ffb288();
extern void func_0201fadc();
extern void func_0202408c();
extern void func_02024094();
extern void func_0202493c();
extern void func_02024998();
extern void func_020249d8();
extern void func_0202aa30();
extern void func_0202af18();
extern void func_02039e04();
extern void func_0203a6cc();
extern void func_0204c284();
extern char data_0207a494[];
extern char data_0208793c[];
extern char data_02115998[];
extern char data_0212d42c[];
// clang-format off
asm void func_0202a8a0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    ldrb r5, [sp, #0x18]
    mov r6, r1
    mov r4, r0
    str r5, [sp, #0x0]
    ldr r1, [r6, #0x4]
    bl func_0202af18
    ldr r0, =data_02115998
    mov r2, #0x0
    str r0, [r4, #0x0]
    str r2, [r4, #0x384]
    str r6, [r4, #0x3a0]
    str r2, [r4, #0x3b8]
    ldr r0, =data_0208793c
    str r2, [r4, #0x3bc]
    str r0, [r4, #0x3c0]
    str r2, [r4, #0x3c4]
    str r2, [r4, #0x3e0]
    str r2, [r4, #0x3e4]
    str r2, [r4, #0x3e8]
    add r5, r4, #0x27c
    ldrb r0, [r5, #0x0]
    add r1, r4, #0x360
    mov r3, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r5]
    ldr r5, =data_0207a494
    swpb r0, r3, [r1]
    mov r0, r4
    ldr ip, [r4, #0x2f4]
    mov r1, #0xf
    add lr, ip, #0xb9
    swpb ip, r3, [lr]
    ldr ip, [r4, #0x2f4]
    add ip, ip, #0xba
    swpb r3, r3, [ip]
    ldr r3, [r5, #0x0]
    str r3, [r4, #0x2c0]
    str r2, [r4, #0x39c]
    bl func_0202aa30
    mov r1, #0x0
    mov r0, r4
    str r1, [r4, #0x388]
    bl func_01ffb0f0
    str r0, [r4, #0x398]
    mov r1, #0x0
    mov r0, r4
    str r1, [r4, #0x3a4]
    bl func_02024998
    str r0, [r4, #0x3a8]
    mov r0, r4
    mov r1, #0x64
    bl func_02024094
    mov r0, r4
    mov r1, #0x64
    bl func_0202408c
    add r3, r4, #0x27c
    ldrb r2, [r3, #0x0]
    mov r0, r4
    mov r1, #0x47
    orr r2, r2, #0x20
    swpb r2, r2, [r3]
    bl func_0202493c
    cmp r0, #0x0
    beq L_0202a9c8
    mov r0, r4
    mov r1, #0x47
    bl func_020249d8
    ldr r0, [r0, #0x20]
    bl func_0204c284
    mov r1, r0
    mov r0, r4
    bl func_01ffb288
L_0202a9c8:
    mov r0, #0x370
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0202a9f0
    mov r3, #0x0
    str r3, [sp, #0x0]
    ldr r1, =data_0212d42c
    add r2, r4, #0x298
    str r3, [sp, #0x4]
    bl func_02039e04
L_0202a9f0:
    str r0, [r4, #0x3cc]
    mov r1, #0x0
    str r1, [r4, #0x3d8]
    mov r0, r4
    str r1, [r4, #0x3dc]
    add r2, r4, #0x3d0
    swpb r1, r1, [r2]
    bl func_0201fadc
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
