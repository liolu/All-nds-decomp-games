#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8024();
extern void func_01ff8084();
extern void func_01ff80ac();
extern void func_02006e58();
extern void func_02006e78();
extern void func_02006ee8();
extern void func_02006ff8();
extern void func_02007078();
extern void func_02007104();
extern void func_020073f8();
extern void func_02007620();
extern void func_02008738();
extern void func_0200899c();
extern void func_02008a74();
extern void func_02008e20();
extern void func_02008e68();
extern void func_0200a04c();
extern char data_0206f710[];
// clang-format off
asm void func_02008258(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_02008e68
    cmp r0, #0x0
    bne L_020082c0
    ldrb r0, [r5, #0x362]
    ldr r1, =0x362
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r5, r1
    swpb r1, r3, [r2]
    mov r0, r5
    bl func_02008738
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
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020082c0:
    mov r0, r5
    bl func_02008e20
    mov r4, r0
    mov r0, r5
    bl func_01ff80ac
    cmp r0, #0x0
    bne L_020082fc
    mov r0, r5
    bl func_01ff8084
    cmp r0, #0x0
    bne L_020082fc
    mov r0, r5
    bl func_01ff8024
    cmp r0, #0x0
    beq L_02008318
L_020082fc:
    ldr r0, [r5, #0x380]
    cmp r0, #0x1
    beq L_02008318
    mov r0, r5
    bl func_02008738
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02008318:
    ldr r0, [r5, #0x3ac]
    cmp r4, r0
    bge L_020083b8
    ldr r0, [r5, #0x3b4]
    ldr r0, [r0, #0x20]
    cmp r0, #0x2
    beq L_020083b8
    ldrb r0, [r5, #0x362]
    mov r4, #0x0
    cmp r0, #0x0
    beq L_02008358
    mov r0, r5
    bl func_01ff80ac
    cmp r0, #0x0
    movne r4, #0x1
    bne L_02008374
L_02008358:
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    bne L_02008374
    mov r0, r5
    bl func_01ff8084
    cmp r0, #0x0
    movne r4, #0x1
L_02008374:
    cmp r4, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, [r5, #0x3cc]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r5
    mov r1, #0x17
    bl func_02008a74
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r5
    bl func_02006ff8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020083b8:
    ldr r0, =0x2710
    cmp r4, r0
    ble L_02008408
    ldr r0, [r5, #0x380]
    cmp r0, #0x13
    beq L_02008408
    ldr r0, [r5, #0x3b4]
    ldr r0, [r0, #0x20]
    cmp r0, #0x2
    beq L_02008408
    mov r0, r5
    mov r1, #0x5
    bl func_02008a74
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r5
    bl func_02007078
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02008408:
    ldr r0, [r5, #0x3b0]
    cmp r4, r0
    ble L_0200849c
    ldr r0, [r5, #0x380]
    cmp r0, #0x4
    beq L_0200849c
    ldr r0, [r5, #0x3b4]
    ldr r0, [r0, #0x20]
    cmp r0, #0x2
    beq L_0200849c
    ldrb r0, [r5, #0x3d0]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldrb r0, [r5, #0x362]
    mov r4, #0x0
    cmp r0, #0x0
    beq L_02008464
    mov r0, r5
    bl func_01ff8084
    cmp r0, #0x0
    movne r4, #0x1
    bne L_02008480
L_02008464:
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    bne L_02008480
    mov r0, r5
    bl func_01ff80ac
    cmp r0, #0x0
    movne r4, #0x1
L_02008480:
    cmp r4, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r5
    bl func_02007104
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0200849c:
    mov r0, r5
    bl func_02006e58
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r5
    bl func_0200899c
    movs r6, r0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, [r6, #0x0]
    cmp r0, #0xd
    bne L_02008534
    ldrb r0, [r5, #0x3d0]
    cmp r0, #0x0
    bne L_02008540
    ldrb r0, [r5, #0x362]
    mov r4, #0x0
    cmp r0, #0x0
    beq L_02008500
    mov r0, r5
    bl func_01ff8084
    cmp r0, #0x0
    movne r4, #0x1
    bne L_0200851c
L_02008500:
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    bne L_0200851c
    mov r0, r5
    bl func_01ff80ac
    cmp r0, #0x0
    movne r4, #0x1
L_0200851c:
    cmp r4, #0x0
    bne L_02008540
    mov r0, r5
    mov r1, r6
    bl func_020073f8
    b L_02008540
L_02008534:
    mov r0, r5
    mov r1, r6
    bl func_02007620
L_02008540:
    ldr r0, [r5, #0x3b4]
    add r0, r0, #0x10
    bl func_0200a04c
    mov r1, r0
    mov r0, r5
    bl func_02006e78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
