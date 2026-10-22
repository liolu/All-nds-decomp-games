#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204b9cc();
// clang-format off
asm void func_0204966c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    movs r9, r0
    mov r8, r2
    ldr r7, [sp, #0x2c]
    ldr r6, [sp, #0x34]
    beq L_020498d8
    ldr r2, [sp, #0x30]
    mov r4, #0x1
    cmp r1, #0x0
    swpb r0, r4, [r2]
    bne L_020496c4
    cmp r3, #0x5
    beq L_020496c4
    cmp r3, #0x6
    beq L_020496c4
    cmp r3, #0x17
    bne L_020496c0
    ldr r0, [sp, #0x20]
    cmp r0, #0x5
    bne L_020496c4
L_020496c0:
    mov r4, #0x0
L_020496c4:
    cmp r3, #0x17
    bne L_020496e8
    ldr r0, [sp, #0x20]
    cmp r0, #0x7
    beq L_020496e4
    cmp r0, #0x8
    movne r8, #0x1
    bne L_020496e8
L_020496e4:
    mov r8, #0x0
L_020496e8:
    cmp r8, #0x0
    ldrne r5, [r7, #0x48]
    ldreq r5, [r7, #0x4c]
    cmp r4, #0x0
    beq L_020498cc
    cmp r8, #0x0
    beq L_020497e4
    ldr r3, [sp, #0x28]
    mvn r0, #0x0
    cmp r3, r0
    beq L_020497e4
    ldr r2, [r7, #0x5c]
    ldr r0, [r7, #0x60]
    sub r1, r0, r2
    cmp r1, #0x0
    ble L_020497b4
    sub r2, r3, r2
    cmp r2, #0x80000
    bge L_02049740
    mov r0, r2, lsl #0xc
    bl func_0204b9cc
    b L_0204978c
L_02049740:
    ldr r0, =0x4000280
    mov r3, r2, asr #0x1f
    mov lr, #0x1
    mov ip, r3, lsl #0xc
    ldr r3, =0x4000290
    strh lr, [r0, #0x0]
    mov lr, r2, lsl #0xc
    str lr, [r3, #0x0]
    orr ip, ip, r2, lsr #0x14
    ldr r2, =0x4000298
    str ip, [r3, #0x4]
    str r1, [r2, #0x0]
    mov r1, #0x0
    str r1, [r2, #0x4]
L_02049778:
    ldrh r1, [r0, #0x0]
    ands r1, r1, #0x8000
    bne L_02049778
    ldr r0, =0x40002a0
    ldr r0, [r0, #0x0]
L_0204978c:
    cmp r0, #0x1000
    movlt r1, r0
    movge r1, #0x1000
    cmp r1, #0x0
    ble L_020497ac
    cmp r0, #0x1000
    movge r0, #0x1000
    b L_020497c0
L_020497ac:
    mov r0, #0x0
    b L_020497c0
L_020497b4:
    cmp r3, r2
    movlt r0, #0x0
    movge r0, #0x1000
L_020497c0:
    ldr r1, [r7, #0x64]
    rsb r0, r0, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r5, r5, r1
L_020497e4:
    cmp r8, #0x0
    bne L_020498cc
    ldr r3, [sp, #0x24]
    mvn r0, #0x0
    cmp r3, r0
    beq L_020498cc
    ldr r2, [r7, #0x5c]
    ldr r0, [r7, #0x60]
    sub r1, r0, r2
    cmp r1, #0x0
    ble L_0204989c
    sub lr, r3, r2
    cmp lr, #0x80000
    bge L_02049828
    mov r0, lr, lsl #0xc
    bl func_0204b9cc
    b L_02049874
L_02049828:
    ldr r0, =0x4000280
    mov r2, lr, asr #0x1f
    mov ip, #0x1
    mov r8, r2, lsl #0xc
    ldr r3, =0x4000290
    strh ip, [r0, #0x0]
    mov r2, lr, lsl #0xc
    str r2, [r3, #0x0]
    orr r8, r8, lr, lsr #0x14
    ldr r2, =0x4000298
    str r8, [r3, #0x4]
    str r1, [r2, #0x0]
    mov r1, #0x0
    str r1, [r2, #0x4]
L_02049860:
    ldrh r1, [r0, #0x0]
    ands r1, r1, #0x8000
    bne L_02049860
    ldr r0, =0x40002a0
    ldr r0, [r0, #0x0]
L_02049874:
    cmp r0, #0x1000
    movlt r1, r0
    movge r1, #0x1000
    cmp r1, #0x0
    ble L_02049894
    cmp r0, #0x1000
    movge r0, #0x1000
    b L_020498a8
L_02049894:
    mov r0, #0x0
    b L_020498a8
L_0204989c:
    cmp r3, r2
    movlt r0, #0x0
    movge r0, #0x1000
L_020498a8:
    ldr r1, [r7, #0x64]
    rsb r0, r0, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r5, r5, r1
L_020498cc:
    cmp r4, #0x0
    ldreq r5, [r7, #0x50]
    str r5, [r6, #0x0]
L_020498d8:
    cmp r9, #0x0
    ldrne r0, [r6, #0x0]
    rsbne r0, r0, #0x0
    moveq r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
