#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc310();
extern void func_02038c24();
extern void func_0204cbb8();
extern void func_0204cbf4();
extern void func_0204cd18();
extern char data_0215f070[];
// clang-format off
asm void func_0203b6e4(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =0x27fffa8
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    bl func_0204cd18
    bl func_0204cbf4
    ldr r1, =data_0215f070
    mov r0, #0x1
    swpb r0, r0, [r1]
    bl func_01ffc310
    ldr r1, =data_0215f070
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_02038c24
    bl func_0204cd18
    bl func_0204cbb8
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
