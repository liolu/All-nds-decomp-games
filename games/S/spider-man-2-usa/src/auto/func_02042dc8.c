#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02042550();
extern void func_02042720();
extern void func_0204279c();
extern void func_02043430();
extern void func_02043514();
extern void func_020438f4();
extern void func_020442e0();
extern void func_02044a00();
extern char data_02084c7c[];
extern char data_02084ff4[];
// clang-format off
asm void func_02042dc8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    ldr r8, [r5, #0x7c]
    mov r7, r1
    mov r6, r2
    mov r4, r3
    cmp r8, #0x0
    mov ip, #0x0
    ble L_02042e4c
    ldrb r1, [r5, #0x1c]
    cmp r1, #0x2
    bne L_02042dfc
    bl func_02042720
L_02042dfc:
    mov r0, r5
    add r1, r5, #0xb10
    bl func_020442e0
    ldr r1, =0xb1c
    mov r0, r5
    add r1, r5, r1
    bl func_020442e0
    mov r0, r5
    bl func_020438f4
    add r1, r5, #0x1000
    ldr r2, [r1, #0x6a0]
    ldr r1, [r1, #0x6a4]
    add r2, r2, #0xa
    add r1, r1, #0xa
    mov r2, r2, lsr #0x3
    mov r1, r1, lsr #0x3
    cmp r1, r2
    mov ip, r0
    movls r2, r1
    b L_02042e54
L_02042e4c:
    add r1, r6, #0x5
    mov r2, r1
L_02042e54:
    add r0, r6, #0x4
    cmp r0, r2
    bhi L_02042e80
    cmp r7, #0x0
    beq L_02042e80
    mov r0, r5
    mov r1, r7
    mov r2, r6
    mov r3, r4
    bl func_02043430
    b L_02043068
L_02042e80:
    cmp r1, r2
    bne L_02042f6c
    add r0, r5, #0x1000
    ldr r1, [r0, #0x6b4]
    cmp r1, #0xd
    ble L_02042f2c
    ldr r2, =0x16b0
    add r7, r4, #0x2
    add r6, r5, r2
    ldrh r2, [r6, #0x0]
    mov r3, r7, lsl #0x10
    ldr ip, =0x16b4
    orr r1, r2, r7, lsl r1
    strh r1, [r6, #0x0]
    add r2, r5, #0x14
    ldr r1, [r2, #0x0]
    ldr r6, [r5, #0x14]
    add r1, r1, #0x1
    str r1, [r2, #0x0]
    add r7, r5, #0x1600
    ldr r1, [r5, #0x8]
    ldrh r8, [r7, #0xb0]
    add r6, r1, r6
    mov r1, r3, lsr #0x10
    swpb r3, r8, [r6]
    add r6, r5, ip
    ldr r3, [r2, #0x0]
    ldr ip, [r5, #0x14]
    add r3, r3, #0x1
    str r3, [r2, #0x0]
    ldrh r3, [r7, #0xb0]
    ldr r2, [r5, #0x8]
    mov r8, r3, asr #0x8
    add r3, r2, ip
    swpb r2, r8, [r3]
    ldr r0, [r0, #0x6b4]
    rsb r0, r0, #0x10
    mov r0, r1, asr r0
    strh r0, [r7, #0xb0]
    ldr r0, [r6, #0x0]
    sub r0, r0, #0xd
    str r0, [r6, #0x0]
    b L_02042f58
L_02042f2c:
    ldr r0, =0x16b0
    ldr r2, =0x16b4
    add r6, r5, r0
    ldrh r3, [r6, #0x0]
    add r0, r4, #0x2
    add r2, r5, r2
    orr r0, r3, r0, lsl r1
    strh r0, [r6, #0x0]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3
    str r0, [r2, #0x0]
L_02042f58:
    ldr r1, =data_02084ff4
    ldr r2, =data_02084c7c
    mov r0, r5
    bl func_0204279c
    b L_02043068
L_02042f6c:
    add r0, r5, #0x1000
    ldr r1, [r0, #0x6b4]
    cmp r1, #0xd
    ble L_02043010
    ldr r2, =0x16b0
    add r7, r4, #0x4
    add r6, r5, r2
    ldrh r3, [r6, #0x0]
    mov r2, r7, lsl #0x10
    ldr lr, =0x16b4
    orr r1, r3, r7, lsl r1
    strh r1, [r6, #0x0]
    add r3, r5, #0x14
    ldr r1, [r3, #0x0]
    ldr r6, [r5, #0x14]
    add r1, r1, #0x1
    str r1, [r3, #0x0]
    add r7, r5, #0x1600
    ldr r1, [r5, #0x8]
    ldrh r8, [r7, #0xb0]
    add r6, r1, r6
    mov r1, r2, lsr #0x10
    swpb r2, r8, [r6]
    add r6, r5, lr
    ldr lr, [r3, #0x0]
    ldr r2, [r5, #0x14]
    add lr, lr, #0x1
    str lr, [r3, #0x0]
    ldrh lr, [r7, #0xb0]
    ldr r3, [r5, #0x8]
    mov lr, lr, asr #0x8
    add r3, r3, r2
    swpb r2, lr, [r3]
    ldr r0, [r0, #0x6b4]
    rsb r0, r0, #0x10
    mov r0, r1, asr r0
    strh r0, [r7, #0xb0]
    ldr r0, [r6, #0x0]
    sub r0, r0, #0xd
    str r0, [r6, #0x0]
    b L_0204303c
L_02043010:
    ldr r0, =0x16b0
    ldr r2, =0x16b4
    add r6, r5, r0
    ldrh r3, [r6, #0x0]
    add r0, r4, #0x4
    add r2, r5, r2
    orr r0, r3, r0, lsl r1
    strh r0, [r6, #0x0]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x3
    str r0, [r2, #0x0]
L_0204303c:
    ldr r1, [r5, #0xb14]
    ldr r2, [r5, #0xb20]
    mov r0, r5
    add r1, r1, #0x1
    add r2, r2, #0x1
    add r3, ip, #0x1
    bl func_02043514
    mov r0, r5
    add r1, r5, #0x8c
    add r2, r5, #0x980
    bl func_0204279c
L_02043068:
    mov r0, r5
    bl func_02044a00
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    mov r0, r5
    bl func_02042550
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
