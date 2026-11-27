#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char errno[];
// clang-format off
asm void func_020247e0(void) {
    stmfd sp!, {lr}
    mov r2, #0xff
    cmp r0, r2, lsl #0x17
    bhs L_02039498
    movs ip, r0, lsr #0x17
    beq L_02039478
    bic r0, r0, r2, lsl #0x17
    orr r0, r0, #0x800000
L_02039414:
    movs ip, ip, asr #0x1
    bhs L_02039424
    sub ip, ip, #0x1
    mov r0, r0, lsl #0x1
L_02039424:
    movs r1, r0, lsl #0x1
    mov r0, #0x0
    mov r2, #0x0
    mov lr, #0x1000000
L_02039434:
    add r3, r2, lr
    cmp r3, r1
    addle r2, r3, lr
    suble r1, r1, r3
    addle r0, r0, lr
    mov r1, r1, lsl #0x1
    movs lr, lr, lsr #0x1
    bne L_02039434
    cmp r1, #0x0
    biceq r0, r0, #0x1
    movs r0, r0, lsr #0x1
    adc r0, r0, #0x0
    add r0, r0, #0x20000000
    sub r0, r0, #0x800000
    add r0, r0, ip, lsl #0x17
    ldmfd sp!, {lr}
    bx lr
L_02039478:
    cmp r0, #0x0
    ldmeqfd sp!, {lr}
    bxeq lr
    clz ip, r0
    movs r0, r0, lsl ip
    rsb ip, ip, #0x9
    mov r0, r0, lsr #0x8
    b L_02039414
L_02039498:
    ldmeqfd sp!, {lr}
    bxeq lr
    tst r0, #0x80000000
    beq L_020394b4
    bics r3, r0, #0x80000000
    ldmeqfd sp!, {lr}
    bxeq lr
L_020394b4:
    ldr r2, =0x7fc00000
    orr r0, r0, r2
    ldr r3, =errno
    mov r4, #0x21
    str r4, [r3, #0x0]
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
