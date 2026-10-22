#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9eec();
extern void func_02014be0();
extern void func_020245c0();
extern void func_0202461c();
extern void func_020259dc();
extern void func_02025bd4();
extern void func_020391a0();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_02087684[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02025a64(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x148
    mov r5, r0
    mov r1, r5
    mov r0, #0x5
    mov r2, #0x0
    bl func_02025bd4
    mov r2, r0
    mov r1, r5
    mov r0, #0x6
    bl func_02025bd4
    mov r4, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x3
    bl func_02014be0
    cmp r0, #0x4b0
    movge r6, #0x1
    movlt r6, #0x0
    cmp r6, #0x0
    bne L_02025ac4
    bl func_0204cd18
    ldr r1, =data_02087684
    mov r2, #0x0
    bl func_0204c8cc
L_02025ac4:
    cmp r4, #0x0
    beq L_02025b9c
    cmp r6, #0x0
    beq L_02025b9c
    add r1, r4, #0x298
    ldr r0, [r1, #0x0]
    add r2, sp, #0x10
    str r0, [r5, #0x390]
    ldr r0, [r1, #0x4]
    mov r1, #0x0
    str r0, [r5, #0x394]
    ldr r0, [r5, #0x298]
    str r0, [sp, #0x0]
    ldr r0, [r5, #0x29c]
    str r0, [sp, #0x4]
    ldr r0, [r5, #0x390]
    str r0, [sp, #0x8]
    ldr r0, [r5, #0x394]
    str r0, [sp, #0xc]
    add r0, sp, #0x110
L_02025b14:
    str r1, [r2], #0x8
    cmp r2, r0
    bne L_02025b14
    add r0, sp, #0x10
    bl func_01ff9eec
    ldr r2, [sp, #0x130]
    add r0, sp, #0x0
    add r1, sp, #0x10
    bl func_020391a0
    str r0, [sp, #0x130]
    cmp r0, #0x0
    addne sp, sp, #0x148
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r2, #0x0
    mov r0, r5
    mov r3, r2
    str r4, [r5, #0x384]
    mov r1, #0x37
    bl func_0202461c
    ldrb r2, [r5, #0x362]
    mov r0, r5
    mov r1, #0x37
    bl func_020245c0
    mov r0, #0x11
    str r0, [r5, #0x388]
    add r1, r5, #0x3d0
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x148
    mov r0, #0x2
    str r0, [r5, #0x3ec]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02025b9c:
    mov r0, r5
    bl func_020259dc
    mov r2, #0x0
    mov r0, r5
    mov r3, r2
    mov r1, #0x37
    bl func_0202461c
    mov r0, #0x11
    str r0, [r5, #0x388]
    add sp, sp, #0x148
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
