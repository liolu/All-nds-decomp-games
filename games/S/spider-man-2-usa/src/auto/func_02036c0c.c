#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b174();
extern void func_02014be0();
extern char data_0215b3d4[];
extern char data_0215d6c8[];
// clang-format off
asm void func_02036c0c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    ldr r0, =data_0215b3d4
    mov r1, #0x9
    ldr r8, [r0, #0x0]
    bl func_02014be0
    mov r7, r0
    ldr r0, =data_0215b3d4
    mov r1, #0xa
    bl func_02014be0
    mov r6, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x7
    bl func_02014be0
    mov r5, r0
    ldr r0, =data_0215b3d4
    mov r1, #0xb
    bl func_02014be0
    mov r4, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x5
    bl func_02014be0
    cmp r8, #0x1
    bne L_02036cd8
    cmp r7, #0x1
    bne L_02036c9c
    ldr r2, =data_0215d6c8
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, #0xc9
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036c9c:
    cmp r7, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r0, =data_0215d6c8
    ldrb r1, [r0, #0x1]
    cmp r1, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r2, r0, #0x1
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, #0xca
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036cd8:
    cmp r8, #0x2
    bne L_02036d28
    cmp r7, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r0, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r0, =data_0215d6c8
    ldrb r1, [r0, #0x1]
    cmp r1, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r2, r0, #0x1
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, #0x134
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036d28:
    cmp r8, #0x4
    bne L_02036da0
    cmp r6, #0x1
    bne L_02036d64
    ldr r2, =data_0215d6c8
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r0, =0x1f9
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036d64:
    cmp r6, #0xf
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r0, =data_0215d6c8
    ldrb r1, [r0, #0x1]
    cmp r1, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r2, r0, #0x1
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, #0x1fc
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036da0:
    cmp r8, #0x6
    bne L_02036e18
    cmp r6, #0x1
    bne L_02036ddc
    ldr r2, =data_0215d6c8
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r0, =0x2bd
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036ddc:
    cmp r6, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r1, =data_0215d6c8
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r2, r1, #0x1
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r0, =0x2be
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036e18:
    cmp r8, #0x8
    bne L_02036ebc
    cmp r7, #0x1
    bne L_02036e48
    ldr r2, =data_0215d6c8
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    bne L_02036e48
    ldr r0, =0x385
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0200b174
L_02036e48:
    cmp r5, #0x1
    bne L_02036e80
    ldr r1, =data_0215d6c8
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r2, r1, #0x1
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r0, =0x386
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036e80:
    cmp r5, #0x5
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r0, =data_0215d6c8
    ldrb r1, [r0, #0x2]
    cmp r1, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r2, r0, #0x2
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, #0x388
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036ebc:
    cmp r8, #0xa
    bne L_02036f34
    cmp r6, #0x1
    bne L_02036ef8
    ldr r2, =data_0215d6c8
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r0, =0x44d
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036ef8:
    cmp r6, #0xf
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r1, =data_0215d6c8
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r2, r1, #0x1
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r0, =0x44e
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02036f34:
    cmp r8, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r7, #0x1
    bne L_02036f68
    ldr r2, =data_0215d6c8
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    bne L_02036f68
    ldr r0, =0x515
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0200b174
L_02036f68:
    cmp r4, #0x6
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r1, =data_0215d6c8
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldr r0, =0x517
    add r2, r1, #0x1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0200b174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
