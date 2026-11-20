#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02016294();
extern void func_020162f8();
extern void func_02038bc4();
extern char data_020ffe80[];
extern char data_02157ce0[];
extern char func_020011fc[];
extern char func_0200125c[];
// clang-format off
asm void func_0200137c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_020ffe80
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {lr}
    bxne lr
    ldr r0, =data_02157ce0
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020013c0
    ldr r0, =func_0200125c
    bl func_02038bc4
    bl func_020162f8
    ldr r0, =func_020011fc
    bl func_02016294
L_020013c0:
    ldr r1, =data_020ffe80
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
