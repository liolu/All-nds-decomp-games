#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02016218();
extern void func_020162c0();
extern void func_020162c4();
extern void func_02038b48();
extern char data_020ffe80[];
extern char data_02157ce0[];
extern char func_020011fc[];
extern char func_0200125c[];
// clang-format off
asm void func_020013e8(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_020ffe80
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    ldr r0, =data_02157ce0
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02001430
    ldr r0, =func_0200125c
    bl func_02038b48
    ldr r0, =func_020011fc
    bl func_02016218
    bl func_020162c0
    bl func_020162c4
L_02001430:
    ldr r1, =data_020ffe80
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
