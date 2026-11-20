#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02043990(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    ldrh r3, [r1, #0x2]
    mov r5, #0x7
    mov r4, #0x4
    cmp r3, #0x0
    str r3, [sp, #0x4]
    mov r3, #0x0
    mvn r6, #0x0
    mov r9, #0x0
    moveq r5, #0x8a
    moveq r4, #0x3
    cmp r2, #0x0
    str r3, [sp, #0x0]
    addlt sp, sp, #0x4c
    ldmltfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxlt lr
    str r3, [sp, #0x1c]
    mov r3, #0x7
    str r3, [sp, #0x2c]
    mov r3, #0x4
    str r3, [sp, #0x30]
    mov r3, #0x6
    str r3, [sp, #0x28]
    mov r3, #0x3
    str r3, [sp, #0x24]
    mov r3, #0x8a
    str r3, [sp, #0x20]
    ldr r3, =0x16b0
    ldr lr, =0x16b4
L_02043a08:
    ldr r7, [sp, #0x0]
    add r9, r9, #0x1
    add r7, r7, #0x1
    add r7, r1, r7, lsl #0x2
    ldrh r7, [r7, #0x2]
    ldr r10, [sp, #0x4]
    cmp r9, r5
    str r7, [sp, #0x4]
    bge L_02043a34
    cmp r10, r7
    beq L_02044144
L_02043a34:
    cmp r9, r4
    bge L_02043b2c
L_02043a3c:
    add r4, r0, r10, lsl #0x2
    add r5, r4, #0xa00
    ldrh r7, [r5, #0x76]
    add r4, r0, #0x1000
    ldr r6, [r4, #0x6b4]
    str r4, [sp, #0x34]
    rsb r4, r7, #0x10
    cmp r6, r4
    ble L_02043afc
    sub r4, r7, #0x10
    str r4, [sp, #0x8]
    add r4, r0, r3
    ldrh r5, [r5, #0x74]
    ldrh r8, [r4, #0x0]
    add r7, r0, #0x14
    add ip, r0, #0x1600
    orr r6, r8, r5, lsl r6
    strh r6, [r4, #0x0]
    mov r4, r5, lsl #0x10
    ldr r5, [r7, #0x0]
    ldr r8, [r0, #0x14]
    add r5, r5, #0x1
    str r5, [r7, #0x0]
    ldr r5, [r0, #0x8]
    ldrh r6, [ip, #0xb0]
    add r5, r5, r8
    mov r11, r4, lsr #0x10
    swpb r6, r6, [r5]
    ldr r5, [r7, #0x0]
    ldr r6, [r0, #0x14]
    add r5, r5, #0x1
    str r5, [r7, #0x0]
    ldrh r5, [ip, #0xb0]
    ldr r7, [r0, #0x8]
    add r4, r0, lr
    add r6, r7, r6
    mov r5, r5, asr #0x8
    swpb r5, r5, [r6]
    ldr r5, [sp, #0x34]
    ldr r5, [r5, #0x6b4]
    rsb r5, r5, #0x10
    mov r5, r11, asr r5
    strh r5, [ip, #0xb0]
    ldr r6, [r4, #0x0]
    ldr r5, [sp, #0x8]
    add r5, r6, r5
    str r5, [r4, #0x0]
    b L_02043b20
L_02043afc:
    ldrh r8, [r5, #0x74]
    add r4, r0, r3
    ldrh r11, [r4, #0x0]
    add r5, r0, lr
    orr r6, r11, r8, lsl r6
    strh r6, [r4, #0x0]
    ldr r4, [r5, #0x0]
    add r4, r4, r7
    str r4, [r5, #0x0]
L_02043b20:
    subs r9, r9, #0x1
    bne L_02043a3c
    b L_02044114
L_02043b2c:
    cmp r10, #0x0
    beq L_02043dc8
    cmp r10, r6
    beq L_02043c24
    add r4, r0, r10, lsl #0x2
    add r6, r4, #0xa00
    ldrh r5, [r6, #0x76]
    add r4, r0, #0x1000
    ldr r7, [r4, #0x6b4]
    str r4, [sp, #0x38]
    rsb r4, r5, #0x10
    cmp r7, r4
    ble L_02043bfc
    sub r4, r5, #0x10
    add r5, r0, r3
    ldrh r6, [r6, #0x74]
    ldrh r11, [r5, #0x0]
    str r4, [sp, #0xc]
    add r8, r0, #0x14
    orr r7, r11, r6, lsl r7
    strh r7, [r5, #0x0]
    mov r5, r6, lsl #0x10
    ldr r6, [r8, #0x0]
    ldr r11, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    add r4, r0, #0x1600
    ldr r6, [r0, #0x8]
    ldrh r7, [r4, #0xb0]
    add r6, r6, r11
    mov ip, r5, lsr #0x10
    swpb r7, r7, [r6]
    ldr r6, [r8, #0x0]
    ldr r7, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    ldrh r6, [r4, #0xb0]
    ldr r8, [r0, #0x8]
    add r5, r0, lr
    add r7, r8, r7
    mov r6, r6, asr #0x8
    swpb r6, r6, [r7]
    ldr r6, [sp, #0x38]
    ldr r6, [r6, #0x6b4]
    rsb r6, r6, #0x10
    mov r6, ip, asr r6
    strh r6, [r4, #0xb0]
    ldr r6, [r5, #0x0]
    ldr r4, [sp, #0xc]
    add r4, r6, r4
    str r4, [r5, #0x0]
    b L_02043c20
L_02043bfc:
    ldrh r8, [r6, #0x74]
    add r4, r0, r3
    ldrh r11, [r4, #0x0]
    add r6, r0, lr
    orr r7, r11, r8, lsl r7
    strh r7, [r4, #0x0]
    ldr r4, [r6, #0x0]
    add r4, r4, r5
    str r4, [r6, #0x0]
L_02043c20:
    sub r9, r9, #0x1
L_02043c24:
    add r6, r0, #0xa00
    ldrh r5, [r6, #0xb6]
    add r4, r0, #0x1000
    ldr r7, [r4, #0x6b4]
    str r4, [sp, #0x3c]
    rsb r4, r5, #0x10
    cmp r7, r4
    ble L_02043ce0
    sub r4, r5, #0x10
    add r5, r0, r3
    ldrh r6, [r6, #0xb4]
    ldrh r11, [r5, #0x0]
    str r4, [sp, #0x10]
    add r8, r0, #0x14
    orr r7, r11, r6, lsl r7
    strh r7, [r5, #0x0]
    mov r5, r6, lsl #0x10
    ldr r6, [r8, #0x0]
    ldr r11, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    add r4, r0, #0x1600
    ldr r6, [r0, #0x8]
    ldrh r7, [r4, #0xb0]
    add r6, r6, r11
    mov ip, r5, lsr #0x10
    swpb r7, r7, [r6]
    ldr r6, [r8, #0x0]
    ldr r7, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    ldrh r6, [r4, #0xb0]
    ldr r8, [r0, #0x8]
    add r5, r0, lr
    add r7, r8, r7
    mov r6, r6, asr #0x8
    swpb r6, r6, [r7]
    ldr r6, [sp, #0x3c]
    ldr r6, [r6, #0x6b4]
    rsb r6, r6, #0x10
    mov r6, ip, asr r6
    strh r6, [r4, #0xb0]
    ldr r6, [r5, #0x0]
    ldr r4, [sp, #0x10]
    add r4, r6, r4
    str r4, [r5, #0x0]
    b L_02043d04
L_02043ce0:
    ldrh r8, [r6, #0xb4]
    add r4, r0, r3
    ldrh r11, [r4, #0x0]
    add r6, r0, lr
    orr r7, r11, r8, lsl r7
    strh r7, [r4, #0x0]
    ldr r4, [r6, #0x0]
    add r4, r4, r5
    str r4, [r6, #0x0]
L_02043d04:
    add ip, r0, #0x1000
    ldr r7, [ip, #0x6b4]
    cmp r7, #0xe
    ble L_02043da0
    sub r6, r9, #0x3
    add r5, r0, r3
    ldrh r8, [r5, #0x0]
    add r9, r0, #0x14
    add r4, r0, #0x1600
    orr r7, r8, r6, lsl r7
    strh r7, [r5, #0x0]
    mov r5, r6, lsl #0x10
    mov r6, r5, lsr #0x10
    ldr r11, [r0, #0x14]
    ldr r7, [r9, #0x0]
    add r5, r0, lr
    add r7, r7, #0x1
    str r7, [r9, #0x0]
    ldrh r8, [r4, #0xb0]
    ldr r7, [r0, #0x8]
    add r7, r7, r11
    swpb r8, r8, [r7]
    ldr r8, [r0, #0x14]
    ldr r7, [r9, #0x0]
    add r7, r7, #0x1
    str r7, [r9, #0x0]
    ldrh r7, [r4, #0xb0]
    ldr r9, [r0, #0x8]
    add r8, r9, r8
    mov r7, r7, asr #0x8
    swpb r7, r7, [r8]
    ldr r7, [ip, #0x6b4]
    rsb r7, r7, #0x10
    mov r6, r6, asr r7
    strh r6, [r4, #0xb0]
    ldr r4, [r5, #0x0]
    sub r4, r4, #0xe
    str r4, [r5, #0x0]
    b L_02044114
L_02043da0:
    sub r4, r9, #0x3
    add r8, r0, r3
    ldrh r6, [r8, #0x0]
    add r5, r0, lr
    orr r4, r6, r4, lsl r7
    strh r4, [r8, #0x0]
    ldr r4, [r5, #0x0]
    add r4, r4, #0x2
    str r4, [r5, #0x0]
    b L_02044114
L_02043dc8:
    cmp r9, #0xa
    bgt L_02043f74
    add r6, r0, #0xa00
    ldrh r5, [r6, #0xba]
    add r4, r0, #0x1000
    ldr r7, [r4, #0x6b4]
    str r4, [sp, #0x40]
    rsb r4, r5, #0x10
    cmp r7, r4
    ble L_02043e8c
    sub r4, r5, #0x10
    add r5, r0, r3
    ldrh r6, [r6, #0xb8]
    ldrh r11, [r5, #0x0]
    str r4, [sp, #0x14]
    add r8, r0, #0x14
    orr r7, r11, r6, lsl r7
    strh r7, [r5, #0x0]
    mov r5, r6, lsl #0x10
    ldr r6, [r8, #0x0]
    ldr r11, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    add r4, r0, #0x1600
    ldr r6, [r0, #0x8]
    ldrh r7, [r4, #0xb0]
    add r6, r6, r11
    mov ip, r5, lsr #0x10
    swpb r7, r7, [r6]
    ldr r6, [r8, #0x0]
    ldr r7, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    ldrh r6, [r4, #0xb0]
    ldr r8, [r0, #0x8]
    add r5, r0, lr
    add r7, r8, r7
    mov r6, r6, asr #0x8
    swpb r6, r6, [r7]
    ldr r6, [sp, #0x40]
    ldr r6, [r6, #0x6b4]
    rsb r6, r6, #0x10
    mov r6, ip, asr r6
    strh r6, [r4, #0xb0]
    ldr r6, [r5, #0x0]
    ldr r4, [sp, #0x14]
    add r4, r6, r4
    str r4, [r5, #0x0]
    b L_02043eb0
L_02043e8c:
    ldrh r8, [r6, #0xb8]
    add r4, r0, r3
    ldrh r11, [r4, #0x0]
    add r6, r0, lr
    orr r7, r11, r8, lsl r7
    strh r7, [r4, #0x0]
    ldr r4, [r6, #0x0]
    add r4, r4, r5
    str r4, [r6, #0x0]
L_02043eb0:
    add ip, r0, #0x1000
    ldr r7, [ip, #0x6b4]
    cmp r7, #0xd
    ble L_02043f4c
    sub r6, r9, #0x3
    add r5, r0, r3
    ldrh r8, [r5, #0x0]
    add r9, r0, #0x14
    add r4, r0, #0x1600
    orr r7, r8, r6, lsl r7
    strh r7, [r5, #0x0]
    mov r5, r6, lsl #0x10
    mov r6, r5, lsr #0x10
    ldr r11, [r0, #0x14]
    ldr r7, [r9, #0x0]
    add r5, r0, lr
    add r7, r7, #0x1
    str r7, [r9, #0x0]
    ldrh r8, [r4, #0xb0]
    ldr r7, [r0, #0x8]
    add r7, r7, r11
    swpb r8, r8, [r7]
    ldr r8, [r0, #0x14]
    ldr r7, [r9, #0x0]
    add r7, r7, #0x1
    str r7, [r9, #0x0]
    ldrh r7, [r4, #0xb0]
    ldr r9, [r0, #0x8]
    add r8, r9, r8
    mov r7, r7, asr #0x8
    swpb r7, r7, [r8]
    ldr r7, [ip, #0x6b4]
    rsb r7, r7, #0x10
    mov r6, r6, asr r7
    strh r6, [r4, #0xb0]
    ldr r4, [r5, #0x0]
    sub r4, r4, #0xd
    str r4, [r5, #0x0]
    b L_02044114
L_02043f4c:
    sub r4, r9, #0x3
    add r8, r0, r3
    ldrh r6, [r8, #0x0]
    add r5, r0, lr
    orr r4, r6, r4, lsl r7
    strh r4, [r8, #0x0]
    ldr r4, [r5, #0x0]
    add r4, r4, #0x3
    str r4, [r5, #0x0]
    b L_02044114
L_02043f74:
    add r6, r0, #0xa00
    ldrh r5, [r6, #0xbe]
    add r4, r0, #0x1000
    ldr r7, [r4, #0x6b4]
    str r4, [sp, #0x44]
    rsb r4, r5, #0x10
    cmp r7, r4
    ble L_02044030
    sub r4, r5, #0x10
    add r5, r0, r3
    ldrh r6, [r6, #0xbc]
    ldrh r11, [r5, #0x0]
    str r4, [sp, #0x18]
    add r8, r0, #0x14
    orr r7, r11, r6, lsl r7
    strh r7, [r5, #0x0]
    mov r5, r6, lsl #0x10
    ldr r6, [r8, #0x0]
    ldr r11, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    add r4, r0, #0x1600
    ldr r6, [r0, #0x8]
    ldrh r7, [r4, #0xb0]
    add r6, r6, r11
    mov ip, r5, lsr #0x10
    swpb r7, r7, [r6]
    ldr r6, [r8, #0x0]
    ldr r7, [r0, #0x14]
    add r6, r6, #0x1
    str r6, [r8, #0x0]
    ldrh r6, [r4, #0xb0]
    ldr r8, [r0, #0x8]
    add r5, r0, lr
    add r7, r8, r7
    mov r6, r6, asr #0x8
    swpb r6, r6, [r7]
    ldr r6, [sp, #0x44]
    ldr r6, [r6, #0x6b4]
    rsb r6, r6, #0x10
    mov r6, ip, asr r6
    strh r6, [r4, #0xb0]
    ldr r6, [r5, #0x0]
    ldr r4, [sp, #0x18]
    add r4, r6, r4
    str r4, [r5, #0x0]
    b L_02044054
L_02044030:
    ldrh r8, [r6, #0xbc]
    add r4, r0, r3
    ldrh r11, [r4, #0x0]
    add r6, r0, lr
    orr r7, r11, r8, lsl r7
    strh r7, [r4, #0x0]
    ldr r4, [r6, #0x0]
    add r4, r4, r5
    str r4, [r6, #0x0]
L_02044054:
    add ip, r0, #0x1000
    ldr r7, [ip, #0x6b4]
    cmp r7, #0x9
    ble L_020440f0
    sub r6, r9, #0xb
    add r5, r0, r3
    ldrh r8, [r5, #0x0]
    add r9, r0, #0x14
    add r4, r0, #0x1600
    orr r7, r8, r6, lsl r7
    strh r7, [r5, #0x0]
    mov r5, r6, lsl #0x10
    mov r6, r5, lsr #0x10
    ldr r11, [r0, #0x14]
    ldr r7, [r9, #0x0]
    add r5, r0, lr
    add r7, r7, #0x1
    str r7, [r9, #0x0]
    ldrh r8, [r4, #0xb0]
    ldr r7, [r0, #0x8]
    add r7, r7, r11
    swpb r8, r8, [r7]
    ldr r8, [r0, #0x14]
    ldr r7, [r9, #0x0]
    add r7, r7, #0x1
    str r7, [r9, #0x0]
    ldrh r7, [r4, #0xb0]
    ldr r9, [r0, #0x8]
    add r8, r9, r8
    mov r7, r7, asr #0x8
    swpb r7, r7, [r8]
    ldr r7, [ip, #0x6b4]
    rsb r7, r7, #0x10
    mov r6, r6, asr r7
    strh r6, [r4, #0xb0]
    ldr r4, [r5, #0x0]
    sub r4, r4, #0x9
    str r4, [r5, #0x0]
    b L_02044114
L_020440f0:
    sub r4, r9, #0xb
    add r8, r0, r3
    ldrh r6, [r8, #0x0]
    add r5, r0, lr
    orr r4, r6, r4, lsl r7
    strh r4, [r8, #0x0]
    ldr r4, [r5, #0x0]
    add r4, r4, #0x7
    str r4, [r5, #0x0]
L_02044114:
    ldr r4, [sp, #0x4]
    ldr r9, [sp, #0x1c]
    cmp r4, #0x0
    mov r6, r10
    ldreq r5, [sp, #0x20]
    ldreq r4, [sp, #0x24]
    beq L_02044144
    cmp r10, r4
    ldreq r5, [sp, #0x28]
    ldreq r4, [sp, #0x24]
    ldrne r5, [sp, #0x2c]
    ldrne r4, [sp, #0x30]
L_02044144:
    ldr r7, [sp, #0x0]
    add r7, r7, #0x1
    str r7, [sp, #0x0]
    cmp r7, r2
    ble L_02043a08
    add sp, sp, #0x4c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
