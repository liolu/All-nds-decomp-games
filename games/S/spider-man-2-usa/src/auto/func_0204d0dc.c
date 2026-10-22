#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd008();
extern void func_01ffd64c();
extern void func_0204cfc4();
extern void func_0204d278();
// clang-format off
asm void func_0204d0dc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldr r2, [r5, #0x80]
    ldr r0, [r5, #0x9c]
    add r4, r5, r2, lsl #0x6
    cmp r0, #0x0
    beq L_0204d13c
    cmp r0, #0x0
    addgt r2, r5, #0x9c
    ldrgt r0, [r2, #0x0]
    subgt r0, r0, #0x1
    strgt r0, [r2, #0x0]
    add r2, r5, #0xa8
    ldr r0, [r2, #0x0]
    sub r0, r0, #0x1
    str r0, [r2, #0x0]
    ldr r0, [r5, #0xa4]
    ldr r2, [r5, #0xa8]
    rsb r0, r0, #0x0
    cmp r2, r0
    ldrle r0, [r5, #0xa0]
    strle r0, [r5, #0xa8]
    b L_0204d144
L_0204d13c:
    mov r0, #0x1
    str r0, [r5, #0xa8]
L_0204d144:
    ldr r0, [r4, #0x0]
    cmp r0, #0x0
    beq L_0204d188
    mov r0, r5
    bl func_0204cfc4
    ldr r0, [r5, #0xb4]
    ldr r1, [r4, #0x0]
    ldr r2, [r5, #0x94]
    bl func_01ffd008
    ldrb r0, [r5, #0xba]
    cmp r0, #0x0
    beq L_0204d188
    ldr r0, [r5, #0xac]
    ldr r1, [r4, #0x0]
    bl func_01ffd64c
    mov r0, r5
    bl func_0204d278
L_0204d188:
    add r1, r5, #0x84
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
