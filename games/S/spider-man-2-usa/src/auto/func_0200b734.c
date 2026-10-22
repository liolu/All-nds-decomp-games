#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020053c8();
extern void func_0200b66c();
extern void func_0200b69c();
extern void r2();
// clang-format off
asm void func_0200b734(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r4, r1
    ldr r1, [r4, #0x288]
    mov r5, r0
    cmp r1, #0x0
    addne sp, sp, #0x24
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    add r0, r5, #0x200
    ldrh ip, [r0, #0x94]
    ldrh lr, [r0, #0x96]
    ldr r3, [r5, #0x29c]
    ldr r2, [r5, #0x298]
    add r0, lr, lr, lsr #0x1f
    sub r3, r3, r0, asr #0x1
    add r1, ip, ip, lsr #0x1f
    sub r0, r2, r1, asr #0x1
    str r0, [sp, #0x10]
    str r3, [sp, #0x14]
    str ip, [sp, #0x18]
    str lr, [sp, #0x1c]
    add r0, r4, #0x200
    ldrh ip, [r0, #0x94]
    ldrh lr, [r0, #0x96]
    ldr r3, [r4, #0x29c]
    ldr r2, [r4, #0x298]
    add r0, lr, lr, lsr #0x1f
    sub r3, r3, r0, asr #0x1
    add r1, ip, ip, lsr #0x1f
    sub r2, r2, r1, asr #0x1
    add r0, sp, #0x0
    add r1, sp, #0x10
    str r2, [sp, #0x0]
    str r3, [sp, #0x4]
    str ip, [sp, #0x8]
    str lr, [sp, #0xc]
    bl func_020053c8
    cmp r0, #0x0
    beq L_0200b84c
    ldrb r0, [r5, #0x300]
    cmp r0, #0x0
    beq L_0200b814
    ldrb r0, [r5, #0x301]
    cmp r0, #0x0
    beq L_0200b7fc
    mov r0, r5
    bl func_0200b69c
    ldr r1, [r0, #0x8]
    b L_0200b808
L_0200b7fc:
    mov r0, r5
    bl func_0200b69c
    ldr r1, [r0, #0x0]
L_0200b808:
    mov r0, r5
    bl func_0200b66c
    b L_0200b834
L_0200b814:
    ldrb r0, [r5, #0x301]
    cmp r0, #0x0
    beq L_0200b834
    mov r0, r5
    ldr r2, [r0, #0x0]
    mov r1, r4
    ldr r2, [r2, #0x4c]
    blx r2
L_0200b834:
    add r1, r5, #0x300
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0200b84c:
    add r1, r5, #0x300
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
