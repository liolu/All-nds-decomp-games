#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9418();
extern void func_01ffb0fc();
extern void func_01ffb104();
extern void func_020161b8();
extern void func_0202b718();
extern void func_0202b734();
extern void func_0202bd34();
extern void func_02039fd8();
extern void func_0203a6cc();
extern void func_0203b59c();
extern void func_02045110();
extern void func_0204ce64();
extern char data_02115afc[];
// clang-format off
asm void func_0202bff8(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    ldrb r3, [sp, #0x3c]
    mov r2, #0x0
    mov r4, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x38]
    ldr r1, [r4, #0x0]
    add r2, sp, #0x30
    mov r5, r0
    bl func_02039fd8
    ldr r0, =data_02115afc
    mov r1, #0x0
    str r0, [r5, #0x0]
    str r4, [r5, #0x370]
    str r1, [r5, #0x374]
    str r1, [r5, #0x378]
    str r1, [r5, #0x37c]
    add r3, r5, #0x27c
    ldrb r0, [sp, #0x40]
    ldrb r2, [r3, #0x0]
    and r1, r0, #0x1
    bic r2, r2, #0x2
    orr r1, r2, r1, lsl #0x1
    swpb r1, r1, [r3]
    mov r0, r5
    mov r1, #0x1
    bl func_0202b718
    ldrb r0, [r4, #0x49]
    cmp r0, #0x0
    movne r0, #0x2
    strne r0, [r5, #0x37c]
    bne L_0202c0a8
    ldrb r0, [r4, #0x4a]
    cmp r0, #0x0
    beq L_0202c0a8
    add r2, r5, #0x27c
    ldrb r0, [r2, #0x0]
    mov r1, #0x3
    bic r0, r0, #0x2
    swpb r0, r0, [r2]
    str r1, [r5, #0x37c]
L_0202c0a8:
    mov r0, #0x38
    bl func_0203a6cc
    movs r1, r0
    beq L_0202c0c4
    mov r1, #0x40
    bl func_0203b59c
    mov r1, r0
L_0202c0c4:
    mov r0, r5
    bl func_01ff9418
    mov r0, r5
    mov r1, #0x1
    bl func_01ffb0fc
    ldr r1, [r4, #0x10]
    add r0, r4, #0x18
    str r1, [r5, #0x2c0]
    ldr r1, [r4, #0x14]
    add r3, r5, #0x2c8
    str r1, [r5, #0x2c4]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r4, #0x24
    add r3, r5, #0x2d4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    add r1, r4, #0x30
    add r2, r4, #0x3c
    bl func_0202b734
    ldrb r0, [r4, #0x4c]
    cmp r0, #0x0
    beq L_0202c12c
    mov r0, r5
    bl func_0202bd34
L_0202c12c:
    ldr r0, [r5, #0x370]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    beq L_0202c1e0
    ldr r1, [sp, #0x30]
    ldr r0, [sp, #0x34]
    str r1, [sp, #0x8]
    str r0, [sp, #0xc]
    ldr r0, [r5, #0x2f4]
    mov r1, #0x4
    bl func_0204ce64
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0202c188
    add r0, sp, #0x10
    mov r1, r5
    mov r2, #0x4
    mov r3, #0x0
    bl func_01ffb104
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    str r1, [sp, #0x8]
    str r0, [sp, #0xc]
L_0202c188:
    mov r0, #0x300
    bl func_0203a6cc
    movs r6, r0
    beq L_0202c1dc
    mov r0, #0x38
    bl func_0203a6cc
    movs r1, r0
    beq L_0202c1bc
    ldr r1, [r5, #0x370]
    mov r2, #0x0
    ldr r1, [r1, #0x8]
    bl func_020161b8
    mov r1, r0
L_0202c1bc:
    mov r4, #0x0
    str r4, [sp, #0x0]
    add r2, sp, #0x8
    mov r0, r6
    mov r3, #0x1
    str r4, [sp, #0x4]
    bl func_02045110
    mov r6, r0
L_0202c1dc:
    str r6, [r5, #0x374]
L_0202c1e0:
    mov r0, r5
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
