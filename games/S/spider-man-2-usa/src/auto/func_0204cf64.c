#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204cd94();
// clang-format off
asm void func_0204cf64(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    str r1, [r4, #0x8c]
    str r2, [r4, #0x88]
    add ip, r4, #0x85
    cmp r2, #0x0
    swpb r3, r3, [ip]
    beq L_0204cf94
    cmp r2, #0x1
    beq L_0204cfa4
    cmp r2, #0x2
    bne L_0204cfb0
L_0204cf94:
    ldrh r0, [r1, #0x4]
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x94]
    b L_0204cfb0
L_0204cfa4:
    bl func_0204cd94
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x94]
L_0204cfb0:
    add r1, r4, #0x86
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
