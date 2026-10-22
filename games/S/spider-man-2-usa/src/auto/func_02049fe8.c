#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201aa18();
extern void func_0201f7e8();
extern void func_0201fa30();
extern void func_0201fadc();
extern void func_0201fafc();
extern void func_02032598();
extern void func_02032e30();
extern void func_0203772c();
extern void func_02037d30();
extern void func_0203a6cc();
extern void func_02046414();
extern void func_02046478();
extern void func_02046490();
extern void func_0204c1a0();
extern char data_02077ac8[];
extern char data_02124930[];
extern char data_0216060c[];
// clang-format off
asm void func_02049fe8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r1
    mov r1, #0x1
    mov r7, r0
    mov r5, r2
    mov r4, r3
    bl func_0201fa30
    ldr r0, =data_02124930
    add r2, r7, #0x1c
    str r0, [r7, #0x0]
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, #0x4
    bl func_0203a6cc
    movs r1, r0
    beq L_0204a030
    bl func_02032598
    mov r1, r0
L_0204a030:
    mov r0, r7
    mov r2, #0x1
    bl func_0201f7e8
    mov r0, #0x28
    bl func_0203a6cc
    movs r8, r0
    beq L_0204a064
    bl func_0201fafc
    mov r2, r0
    mov r0, r8
    mov r1, r6
    bl func_02032e30
    mov r8, r0
L_0204a064:
    mov r0, r7
    mov r1, r8
    mov r2, #0x1
    bl func_0201f7e8
    ldrb r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_0204a104
    mov r0, #0x18
    bl func_0203a6cc
    movs r1, r0
    beq L_0204a09c
    mov r1, #0x1
    bl func_02037d30
    mov r1, r0
L_0204a09c:
    mov r0, r7
    mov r2, #0x1
    bl func_0201f7e8
    mov r0, #0x50
    bl func_0203a6cc
    movs r1, r0
    beq L_0204a0c8
    ldr r1, =data_0216060c
    mov r2, #0x1
    bl func_0203772c
    mov r1, r0
L_0204a0c8:
    mov r0, r7
    mov r2, #0x1
    bl func_0201f7e8
    mov r0, #0x54
    bl func_0203a6cc
    movs r1, r0
    beq L_0204a0f8
    ldr r1, =data_02077ac8
    mov r2, #0x1
    mov r3, #0x0
    bl func_0201aa18
    mov r1, r0
L_0204a0f8:
    mov r0, r7
    mov r2, #0x1
    bl func_0201f7e8
L_0204a104:
    ldr r0, =0x6f8
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_0204a120
    mov r1, r5
    mov r2, r4
    bl func_0204c1a0
L_0204a120:
    str r0, [r7, #0x18]
    ldr r4, [r7, #0x18]
    cmp r4, #0x0
    ldrne r0, =0x5a8
    addne r4, r4, r0
    bl func_02046490
    mov r2, #0x1
    mov r1, r4
    mov r3, r2
    bl func_02046478
    bl func_02046490
    mov r1, #0x1
    bl func_02046414
    ldr r0, [r7, #0x18]
    bl func_0201fadc
    add r1, r7, #0x1c
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
