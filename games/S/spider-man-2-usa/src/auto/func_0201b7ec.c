#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02037074();
extern char data_02157f40[];
extern char data_02157fdc[];
// clang-format off
asm void func_0201b7ec(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r2, r4, #0x12c
    cmp r1, #0x0
    swpb r1, r1, [r2]
    beq L_0201b81c
    ldr r1, =data_02157f40
    bl func_02037074
    mov r0, #0x0
    str r0, [r4, #0x128]
    ldmfd sp!, {r4, lr}
    bx lr
L_0201b81c:
    ldr r1, =data_02157fdc
    bl func_02037074
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
