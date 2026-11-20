#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_01ff9420();
extern void func_02000dec();
extern void func_02005e78();
extern void func_02005ef4();
extern char data_020785f4[];
// clang-format off
asm void func_02005fb8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x370]
    ldrb r1, [r1, #0x1e]
    cmp r1, #0x0
    beq L_02005ffc
    bl func_01ff80fc
    cmp r0, #0x0
    beq L_02005ffc
    ldr r0, [r4, #0x2f0]
    ldr r1, =data_020785f4
    add r0, r0, #0x1c
    bl func_02000dec
    add r1, r4, #0x27c
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x2
    swpb r0, r0, [r1]
L_02005ffc:
    ldr r0, [r4, #0x378]
    cmp r0, #0x0
    beq L_02006040
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, [r4, #0x2f4]
    ldrb r0, [r0, #0x86]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02005e78
    mov r0, r4
    bl func_01ff9420
    ldmfd sp!, {r4, lr}
    bx lr
L_02006040:
    ldrb r0, [r4, #0x27c]
    mov r0, r0, lsl #0x1b
    movs r0, r0, lsr #0x1f
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02005ef4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
