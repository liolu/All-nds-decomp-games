#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fa30();
extern void func_02038c24();
extern void func_020573d8();
extern void func_02058338();
extern void func_0205eae4();
extern void func_0205ebe8();
extern void func_0205ec74();
extern char data_021270c4[];
extern char data_02160674[];
// clang-format off
asm void func_0204e0f8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r1, #0x1
    mov r4, r0
    bl func_0201fa30
    ldr r1, =data_021270c4
    ldr r0, =data_02160674
    str r1, [r4, #0x0]
    str r4, [r0, #0x0]
    bl func_020573d8
    cmp r0, #0x0
    bne L_0204e16c
    bl func_02058338
    bl func_0205ec74
    bl func_02038c24
    add r0, sp, #0x0
    bl func_0205ebe8
    cmp r0, #0x0
    bne L_0204e164
    ldr r3, =0x27a
    ldr r2, =0xe66
    ldr r1, =0x28d
    ldr r0, =0x12f6
    strh r3, [sp, #0x0]
    strh r2, [sp, #0x4]
    strh r1, [sp, #0x2]
    strh r0, [sp, #0x6]
L_0204e164:
    add r0, sp, #0x0
    bl func_0205eae4
L_0204e16c:
    mov lr, #0x0
    str lr, [r4, #0x1c]
    ldr r0, [r4, #0x1c]
    add r1, r4, #0x21
    str r0, [r4, #0x18]
    swpb r0, lr, [r1]
    add r1, r4, #0x20
    ldrb r0, [r4, #0x21]
    add r2, r4, #0x23
    add r3, r4, #0x22
    swpb r0, r0, [r1]
    mov ip, #0x1
    swpb r0, lr, [r2]
    mov r0, r4
    ldrb r1, [r4, #0x23]
    swpb r1, r1, [r3]
    str ip, [r4, #0x24]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
