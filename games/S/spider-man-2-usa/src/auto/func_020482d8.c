#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_021248f4[];
extern char data_021248f8[];
extern char data_021248fc[];
extern char data_0216059c[];
extern char data_021605c4[];
// clang-format off
asm void func_020482d8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    ldr r6, [sp, #0x24]
    mvn r4, #0x80000000
    ldr r5, [sp, #0x28]
    str r4, [r6, #0x0]
    mov r7, #0x80000000
    ldr r4, [sp, #0x2c]
    str r7, [r5, #0x0]
    mov r9, #0x1
    swpb r7, r9, [r4]
    ldr lr, [sp, #0x30]
    mvn r8, #0x0
    swpb r7, r9, [lr]
    ldr ip, [sp, #0x34]
    cmp r1, r8
    swpb r7, r9, [ip]
    beq L_02048344
    ldr r7, =data_021605c4
    ldr r8, [r0, #0x150]
    ldr r9, [r7, #0x4]
    ldr r7, [r8, #0x8c]
    add r8, r9, r1
    sub r7, r8, r7
    str r7, [r6, #0x0]
    mov r7, #0x0
    swpb r7, r7, [r4]
L_02048344:
    mvn r7, #0x0
    cmp r2, r7
    beq L_02048374
    ldr r7, =data_021605c4
    ldr r8, [r0, #0x150]
    ldr r7, [r7, #0x4]
    ldr r8, [r8, #0x8c]
    sub r7, r7, r2
    add r7, r8, r7
    str r7, [r5, #0x0]
    mov r7, #0x0
    swpb r7, r7, [lr]
L_02048374:
    ldr r8, [r5, #0x0]
    ldr r7, [r6, #0x0]
    cmp r8, r7
    ble L_02048458
    ldrb r7, [sp, #0x20]
    cmp r7, #0x0
    movne r3, #0x1
    bne L_020483fc
    cmp r3, #0x0
    movne r3, #0x0
    bne L_020483fc
    ldr r3, =data_0216059c
    ldrb r3, [r3, #0x0]
    cmp r3, #0x0
    bne L_020483f4
    cmp r2, r1
    ldr r1, =data_021605c4
    movlt r3, #0x1
    ldr r1, [r1, #0x14]
    movge r3, #0x0
    cmp r1, #0x17
    beq L_020483fc
    ldr r1, =data_021248fc
    ldrb r1, [r1, #0x0]
    cmp r1, #0x0
    movne r3, #0x1
    bne L_020483fc
    ldr r1, =data_021248f4
    ldrb r1, [r1, #0x0]
    cmp r1, #0x0
    movne r3, #0x0
    b L_020483fc
L_020483f4:
    ldr r1, =data_021248f8
    ldrb r3, [r1, #0x0]
L_020483fc:
    ldr r2, =data_021248f8
    cmp r3, #0x0
    swpb r1, r3, [r2]
    beq L_0204842c
    mov r1, #0x0
    swpb r1, r1, [lr]
    mov r3, #0x1
    swpb r1, r3, [ip]
    mvn r2, #0x80000000
    swpb r1, r3, [r4]
    str r2, [r6, #0x0]
    b L_02048448
L_0204842c:
    mov r2, #0x1
    swpb r1, r2, [lr]
    mov r3, #0x0
    swpb r1, r2, [ip]
    mov r2, #0x80000000
    swpb r1, r3, [r4]
    str r2, [r5, #0x0]
L_02048448:
    ldr r2, =data_0216059c
    mov r1, #0x1
    swpb r1, r1, [r2]
    b L_02048464
L_02048458:
    ldr r2, =data_0216059c
    mov r1, #0x0
    swpb r1, r1, [r2]
L_02048464:
    ldr r0, [r0, #0x150]
    ldr r2, [r5, #0x0]
    ldr r0, [r0, #0x120]
    ldr r1, [r6, #0x0]
    add r0, r2, r0
    cmp r0, r1
    ble L_020484b8
    add r1, r2, r1
    mov r0, r1, asr #0x1f
    mov r2, r0, lsl #0xb
    mov r3, r1, lsl #0xb
    mov r0, #0x800
    adds r3, r3, r0
    orr r2, r2, r1, lsr #0x15
    adc r0, r2, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x0]
    ldr r0, [r6, #0x0]
    sub r0, r0, #0x1
    str r0, [r5, #0x0]
L_020484b8:
    ldrb r0, [r4, #0x0]
    ldr r2, =data_021248fc
    ldr r1, =data_021248f4
    swpb r0, r0, [r2]
    ldrb r0, [lr, #0x0]
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
