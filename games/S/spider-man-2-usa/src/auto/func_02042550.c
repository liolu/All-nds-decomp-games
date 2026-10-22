#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02042550(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add r1, r0, #0x1000
    ldr r1, [r1, #0x6b4]
    cmp r1, #0x8
    ble L_020425b8
    add lr, r0, #0x14
    ldr r1, [lr, #0x0]
    ldr r2, [r0, #0x14]
    add r1, r1, #0x1
    str r1, [lr, #0x0]
    add r3, r0, #0x1600
    ldr r1, [r0, #0x8]
    ldrh ip, [r3, #0xb0]
    add r2, r1, r2
    swpb r1, ip, [r2]
    ldr r1, [lr, #0x0]
    ldr ip, [r0, #0x14]
    add r1, r1, #0x1
    str r1, [lr, #0x0]
    ldrh r2, [r3, #0xb0]
    ldr r1, [r0, #0x8]
    mov r3, r2, asr #0x8
    add r2, r1, ip
    swpb r1, r3, [r2]
    b L_020425e8
L_020425b8:
    cmp r1, #0x0
    ble L_020425e8
    add r2, r0, #0x14
    ldr r1, [r2, #0x0]
    ldr r3, [r0, #0x14]
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    add r1, r0, #0x1600
    ldr r2, [r0, #0x8]
    ldrh r1, [r1, #0xb0]
    add r2, r2, r3
    swpb r1, r1, [r2]
L_020425e8:
    add r1, r0, #0x1600
    mov r2, #0x0
    strh r2, [r1, #0xb0]
    add r0, r0, #0x1000
    str r2, [r0, #0x6b4]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
