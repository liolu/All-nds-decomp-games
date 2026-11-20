#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02042550();
// clang-format off
asm void func_02042440(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    mov r7, r3
    bl func_02042550
    add r0, r6, #0x1000
    mov r1, #0x8
    str r1, [r0, #0x6ac]
    cmp r7, #0x0
    beq L_02042500
    add r0, r6, #0x14
    ldr r1, [r0, #0x0]
    ldr r3, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r2, [r6, #0x8]
    mov r1, r4, lsl #0x10
    mov ip, r1, lsr #0x10
    add r2, r2, r3
    swpb r1, ip, [r2]
    mvn r3, r4
    ldr r1, [r0, #0x0]
    ldr r2, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    mov ip, ip, asr #0x8
    add r2, r1, r2
    swpb r1, ip, [r2]
    mov r1, r3, lsl #0x10
    ldr r2, [r0, #0x0]
    ldr ip, [r6, #0x14]
    add r2, r2, #0x1
    str r2, [r0, #0x0]
    ldr r2, [r6, #0x8]
    mov r3, r1, lsr #0x10
    add r2, r2, ip
    swpb r1, r3, [r2]
    mov r2, r3, asr #0x8
    ldr r1, [r0, #0x0]
    ldr r3, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r0, [r6, #0x8]
    add r1, r0, r3
    swpb r0, r2, [r1]
L_02042500:
    cmp r4, #0x0
    sub r4, r4, #0x1
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    add r3, r6, #0x14
L_02042518:
    ldr r0, [r3, #0x0]
    ldr r1, [r6, #0x14]
    add r0, r0, #0x1
    str r0, [r3, #0x0]
    ldr r0, [r6, #0x8]
    ldrb r2, [r5], #0x1
    add r1, r0, r1
    cmp r4, #0x0
    swpb r0, r2, [r1]
    sub r4, r4, #0x1
    bne L_02042518
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
