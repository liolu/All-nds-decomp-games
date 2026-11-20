#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020451e8();
extern char data_02127118[];
// clang-format off
asm void func_0204e508(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r4, r0
    str ip, [sp, #0x4]
    bl func_020451e8
    ldr r0, =data_02127118
    add r2, r4, #0x27c
    str r0, [r4, #0x0]
    ldrb r1, [r2, #0x0]
    mov r0, r4
    orr r1, r1, #0x80
    swpb r1, r1, [r2]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
