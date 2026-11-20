#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8024();
extern void func_01ff8084();
extern void func_01ff80ac();
extern void func_02000dac();
extern void func_02006ee8();
extern void func_02006f50();
extern void func_02008738();
extern void func_0200a04c();
extern char data_0206f710[];
// clang-format off
asm void func_020097d4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x2f0]
    mov r6, r1
    ldr r4, [r0, #0x18]
    ldr r0, [r5, #0x380]
    cmp r4, #0x0
    rsblt r4, r4, #0x0
    cmp r0, #0x10
    beq L_0200983c
    mov r0, r5
    bl func_01ff80ac
    cmp r0, #0x0
    bne L_0200982c
    mov r0, r5
    bl func_01ff8084
    cmp r0, #0x0
    bne L_0200982c
    mov r0, r5
    bl func_01ff8024
    cmp r0, #0x0
    beq L_0200983c
L_0200982c:
    mov r0, r5
    bl func_02006f50
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0200983c:
    cmp r6, #0x0
    beq L_02009928
    ldr r0, [r5, #0x38c]
    ldr r1, [r5, #0x298]
    ldr r0, [r0, #0x298]
    cmp r1, r0
    bge L_020098c0
    ldr r0, [r5, #0x2f0]
    mov r1, r4
    add r0, r0, #0x4
    bl func_02000dac
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, =0x362
    mov r2, #0x0
    add r1, r5, r0
    swpb r0, r2, [r1]
    ldr r0, =data_0206f710
    bl func_0200a04c
    ldr r1, [r5, #0x3b4]
    mov r4, r0
    add r0, r1, #0x8
    bl func_0200a04c
    mov r1, r0
    mov r0, r5
    add r1, r4, r1
    bl func_02006ee8
    mov r0, r5
    bl func_02008738
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020098c0:
    ldr r0, [r5, #0x2f0]
    rsb r1, r4, #0x0
    add r0, r0, #0x4
    bl func_02000dac
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, =0x362
    mov r2, #0x1
    add r1, r5, r0
    swpb r0, r2, [r1]
    ldr r0, =data_0206f710
    bl func_0200a04c
    ldr r1, [r5, #0x3b4]
    mov r4, r0
    add r0, r1, #0x8
    bl func_0200a04c
    mov r1, r0
    mov r0, r5
    add r1, r4, r1
    bl func_02006ee8
    mov r0, r5
    bl func_02008738
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02009928:
    ldr r0, [r5, #0x38c]
    ldr r1, [r5, #0x298]
    ldr r0, [r0, #0x298]
    cmp r1, r0
    ble L_020099a4
    ldr r0, [r5, #0x2f0]
    mov r1, r4
    add r0, r0, #0x4
    bl func_02000dac
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, =0x362
    mov r2, #0x1
    add r1, r5, r0
    swpb r0, r2, [r1]
    ldr r0, =data_0206f710
    bl func_0200a04c
    ldr r1, [r5, #0x3b4]
    mov r4, r0
    add r0, r1, #0x8
    bl func_0200a04c
    mov r1, r0
    mov r0, r5
    add r1, r4, r1
    bl func_02006ee8
    mov r0, r5
    bl func_02008738
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020099a4:
    ldr r0, [r5, #0x2f0]
    rsb r1, r4, #0x0
    add r0, r0, #0x4
    bl func_02000dac
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, =0x362
    mov r2, #0x0
    add r1, r5, r0
    swpb r0, r2, [r1]
    ldr r0, =data_0206f710
    bl func_0200a04c
    ldr r1, [r5, #0x3b4]
    mov r4, r0
    add r0, r1, #0x8
    bl func_0200a04c
    mov r1, r0
    mov r0, r5
    add r1, r4, r1
    bl func_02006ee8
    mov r0, r5
    bl func_02008738
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
