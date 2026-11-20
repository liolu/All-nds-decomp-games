#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02049c40();
extern char data_02160598[];
extern char data_021605ac[];
extern char data_021605c4[];
// clang-format off
asm void func_02048730(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r1, =data_021605c4
    mov r6, r0
    ldr r0, [r1, #0x14]
    cmp r0, #0x9
    bne L_02048764
    ldr r0, [r6, #0x1c4]
    ldr r1, [r1, #0x8]
    cmp r1, r0
    movle r1, r0
    ldr r0, =data_021605c4
    str r1, [r0, #0x8]
L_02048764:
    ldr r0, =data_021605c4
    ldr r4, [r6, #0x150]
    ldr r7, [r0, #0x4]
    ldr r5, [r6, #0x1c0]
    ldr r3, [r0, #0x8]
    ldr r2, [r6, #0x1c4]
    ldr r1, [r6, #0x1c8]
    sub r7, r7, r5
    ldr r0, [r6, #0x1cc]
    sub r2, r3, r2
    ldr r5, [r4, #0x7c]
    sub r7, r7, r1
    ldr r3, =data_021605ac
    ldr r4, [r4, #0x80]
    sub ip, r2, r0
    smull r5, lr, r7, r5
    mov r2, #0x800
    adds r7, r5, r2
    smull r5, r4, ip, r4
    adc ip, lr, #0x0
    adds r2, r5, r2
    mov r5, r7, lsr #0xc
    orr r5, r5, ip, lsl #0x14
    adc r4, r4, #0x0
    mov ip, r2, lsr #0xc
    ldr r2, [r3, #0x0]
    orr ip, ip, r4, lsl #0x14
    add r5, r1, r5
    add r4, r0, ip
    ands r0, r2, #0x1
    bne L_02048800
    mov r0, r6
    bl func_02049c40
    ldr r1, =data_021605ac
    ldr r2, =data_02160598
    ldr r3, [r1, #0x0]
    swpb r0, r0, [r2]
    orr r0, r3, #0x1
    str r0, [r1, #0x0]
L_02048800:
    mov r0, r6
    bl func_02049c40
    ldr r1, =data_02160598
    ldrb r1, [r1, #0x0]
    cmp r1, r0
    beq L_0204882c
    ldr r0, =data_021605c4
    ldr r0, [r0, #0x18]
    cmp r0, #0x3
    moveq r7, #0x1
    beq L_02048830
L_0204882c:
    mov r7, #0x0
L_02048830:
    mov r0, r6
    bl func_02049c40
    ldr r2, =data_02160598
    ldr r1, =data_021605c4
    swpb r0, r0, [r2]
    cmp r7, #0x0
    ldr r0, [r6, #0x1c0]
    add r0, r0, r5
    str r0, [r1, #0x4]
    ldreq r0, [r6, #0x1c4]
    addeq r0, r0, r4
    streq r0, [r1, #0x8]
    ldr r0, =data_021605c4
    ldr r1, [r0, #0x4]
    str r1, [r6, #0x1c0]
    ldr r0, [r0, #0x8]
    str r0, [r6, #0x1c4]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
