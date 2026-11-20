#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_01ffb0f0();
extern void func_02023ec0();
extern void func_0202461c();
extern void func_02024698();
extern void func_02024730();
extern void func_020247c0();
extern void func_02024930();
extern void func_02024ac8();
extern void func_02024bd0();
extern void func_02024ee4();
extern void func_02025464();
extern void func_0202589c();
extern void func_02026c7c();
extern void func_02029a60();
extern void func_0202a1b4();
extern void r1();
extern char data_0207a490[];
// clang-format off
asm void func_02029b04(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x2f4]
    ldrb r1, [r1, #0x86]
    cmp r1, #0x0
    beq L_02029b38
    bl func_01ffb0f0
    mov r1, #0x1
    str r0, [r4, #0x398]
    mov r0, r4
    mov r2, r1
    mov r3, #0x0
    bl func_0202461c
L_02029b38:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x20
    beq L_02029b78
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02024730
    cmp r0, #0x0
    beq L_02029b78
    mov r0, r4
    bl func_0202589c
L_02029b78:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x10
    beq L_02029bb8
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02024698
    cmp r0, #0x0
    beq L_02029bb8
    mov r0, r4
    bl func_0202589c
L_02029bb8:
    mov r0, r4
    bl func_01ff80fc
    cmp r0, #0x0
    bne L_02029be0
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02024ee4
    ldmfd sp!, {r4, lr}
    bx lr
L_02029be0:
    mov r0, r4
    bl func_02023ec0
    cmp r0, #0x0
    bne L_02029c00
    mov r0, r4
    bl func_020247c0
    cmp r0, #0x0
    bne L_02029c24
L_02029c00:
    mov r2, #0x0
    mov ip, #0x1
    mov r0, r4
    mov r3, r2
    mov r1, #0x8
    str ip, [r4, #0x388]
    bl func_0202461c
    ldmfd sp!, {r4, lr}
    bx lr
L_02029c24:
    mov r0, r4
    bl func_02024bd0
    cmp r0, #0x0
    beq L_02029c44
    mov r0, r4
    bl func_02026c7c
    ldmfd sp!, {r4, lr}
    bx lr
L_02029c44:
    mov r0, r4
    bl func_02024ac8
    cmp r0, #0x0
    beq L_02029c7c
    mov r0, r4
    bl func_02024930
    cmp r0, #0x0
    beq L_02029c7c
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02025464
    ldmfd sp!, {r4, lr}
    bx lr
L_02029c7c:
    mov r0, r4
    bl func_01ffb0f0
    ldr r1, =data_0207a490
    ldr r2, [r4, #0x398]
    ldr r1, [r1, #0x0]
    sub r0, r0, r2
    cmp r0, r1
    ldmlefd sp!, {r4, lr}
    bxle lr
    mov r0, r4
    bl func_02029a60
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
