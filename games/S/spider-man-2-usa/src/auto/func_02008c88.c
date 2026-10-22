#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006a60();
extern void func_02006ac0();
extern void func_02006e90();
extern void func_02006eb0();
extern void func_02007288();
extern void func_02008d48();
extern void func_0200a04c();
extern char data_0206f720[];
extern char data_0206f740[];
extern char data_0206f748[];
// clang-format off
asm void func_02008c88(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02006e90
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02008d48
    add r1, r4, #0x3a0
    swpb r0, r0, [r1]
    mov r0, r4
    bl func_02006a60
    cmp r0, #0x0
    beq L_02008cd8
    ldr r0, =data_0206f740
    bl func_0200a04c
    mov r1, r0
    mov r0, r4
    bl func_02006eb0
    b L_02008cec
L_02008cd8:
    ldr r0, =data_0206f748
    bl func_0200a04c
    mov r1, r0
    mov r0, r4
    bl func_02006eb0
L_02008cec:
    ldrb r0, [r4, #0x3a0]
    cmp r0, #0x0
    beq L_02008d10
    mov r0, r4
    bl func_02006a60
    cmp r0, #0x0
    bne L_02008d10
    mov r0, r4
    bl func_02007288
L_02008d10:
    ldrb r0, [r4, #0x3a0]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =data_0206f720
    bl func_0200a04c
    mov r1, r0
    mov r0, r4
    bl func_02006ac0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
