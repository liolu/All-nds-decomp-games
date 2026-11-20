#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9968();
extern void func_020053c8();
extern void r1();
extern char data_0215f06c[];
extern char data_021605b4[];
// clang-format off
asm void func_02044f1c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r2, [r4, #0x2f8]
    cmp r2, #0x0
    bne L_02044f90
    ldr r0, [r4, #0x2fc]
    cmp r0, #0x0
    bne L_02044f90
    add r0, r4, #0x200
    ldrh r5, [r0, #0x96]
    ldrh lr, [r0, #0x94]
    ldr r2, =data_0215f06c
    ldr ip, [r4, #0x29c]
    ldr r3, [r4, #0x298]
    add r0, r5, r5, lsr #0x1f
    sub ip, ip, r0, asr #0x1
    add r1, lr, lr, lsr #0x1f
    sub r3, r3, r1, asr #0x1
    ldr r0, [r2, #0x0]
    add r1, sp, #0x0
    str r3, [sp, #0x0]
    str ip, [sp, #0x4]
    str lr, [sp, #0x8]
    str r5, [sp, #0xc]
    bl func_020053c8
    add r1, r4, #0x10
    swpb r0, r0, [r1]
    b L_02044fbc
L_02044f90:
    ldr r0, =data_021605b4
    ldr r1, [r0, #0x4]
    cmp r1, r2
    blt L_02044fb0
    ldr r0, [r4, #0x2fc]
    cmp r1, r0
    movle r0, #0x1
    ble L_02044fb4
L_02044fb0:
    mov r0, #0x0
L_02044fb4:
    add r1, r4, #0x10
    swpb r0, r0, [r1]
L_02044fbc:
    ldr r0, [r4, #0x2f4]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    mov r0, r4
    bl func_01ff9968
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
