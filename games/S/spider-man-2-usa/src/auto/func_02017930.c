#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201fa80();
extern void func_0203ac68();
extern void func_0203ad4c();
extern char data_02076b48[];
extern char data_02076b50[];
// clang-format off
asm void func_02017930(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r2, #0xc
    mul r5, r1, r2
    ldr r1, =data_02076b48
    mov r6, r0
    add r4, r1, r5
    mov r0, r4
    bl func_0203ad4c
    add ip, sp, #0x0
    mov r1, #0x0
    add r3, ip, r0
    swpb r2, r1, [r3]
    subs r3, r0, #0x1
    bmi L_0201799c
    add r2, ip, r3
L_02017970:
    ldr r0, [r6, #0x10]
    sub r0, r0, r1
    subs r0, r0, #0x1
    addmi r0, r0, #0x8
    add r0, r6, r0
    ldrb r0, [r0, #0x8]
    subs r3, r3, #0x1
    add r1, r1, #0x1
    swpb r0, r0, [r2]
    sub r2, r2, #0x1
    bpl L_02017970
L_0201799c:
    add r0, sp, #0x0
    mov r1, r4
    bl func_0203ac68
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, =data_02076b50
    ldr r0, [r0, r5]
    bl func_0201fa80
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
