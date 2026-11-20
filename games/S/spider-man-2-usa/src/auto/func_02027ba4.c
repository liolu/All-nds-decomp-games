#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff80fc();
extern void func_01ffb0f0();
extern void func_02014be0();
extern void func_0201fa80();
extern void func_02023dd0();
extern void func_020245c0();
extern void func_0202461c();
extern void func_020247c0();
extern void func_020249d8();
extern void func_020253e8();
extern void r1();
extern void r2();
extern char data_0207a49c[];
extern char data_0210bccc[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02027ba4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r2, [r4, #0x2f4]
    mov r1, #0x1e
    ldr r5, [r2, #0x8c]
    bl func_020249d8
    ldr r0, [r0, #0x4]
    cmp r5, r0
    bne L_02027bf8
    ldr r0, [r4, #0x2f4]
    ldrb r0, [r0, #0x86]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, =data_0210bccc
    bl func_0201fa80
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02027bf8:
    ldr r2, [r4, #0x2f4]
    mov r0, r4
    mov r1, #0x1b
    ldr r5, [r2, #0x8c]
    bl func_020249d8
    ldr r0, [r0, #0x4]
    cmp r5, r0
    bne L_02027cd4
    ldr r0, [r4, #0x2f4]
    ldrb r0, [r0, #0x86]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, =0x27d
    add r1, r4, r0
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x40
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x3d1]
    cmp r0, #0x0
    bne L_02027c78
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x80
    bne L_02027c78
    mov r0, r4
    bl func_020247c0
    cmp r0, #0x0
    bne L_02027c84
L_02027c78:
    mov r0, r4
    bl func_02023dd0
    b L_02027c9c
L_02027c84:
    mov r3, #0x1
    mov r0, r4
    mov r1, #0x8
    mov r2, #0x0
    str r3, [r4, #0x388]
    bl func_0202461c
L_02027c9c:
    ldr r1, =data_0207a49c
    mov r0, r4
    ldr r5, [r1, #0x0]
    bl func_01ffb0f0
    add r1, r5, r0
    str r1, [r4, #0x374]
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x7c]
    blx r2
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02027cd4:
    ldr r0, [r4, #0x2f4]
    ldrb r0, [r0, #0x86]
    cmp r0, #0x0
    beq L_02027d94
    mov r0, r4
    bl func_01ff80fc
    cmp r0, #0x0
    beq L_02027d94
    ldr r0, =data_0215b3d4
    mov r1, #0x0
    bl func_02014be0
    cmp r0, #0x0
    bgt L_02027d20
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x1e
    bl func_0202461c
    b L_02027d70
L_02027d20:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x1b
    bl func_0202461c
    ldr r1, [r4, #0x2f4]
    mov r0, r4
    ldr r1, [r1, #0x8c]
    ldrh r2, [r1, #0x6]
    ldrh r1, [r1, #0x4]
    sub r1, r2, r1
    add r5, r1, #0x1
    bl func_01ffb0f0
    add r1, r5, r0
    mov r0, r4
    str r1, [r4, #0x374]
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x7c]
    blx r2
L_02027d70:
    mov r0, r4
    mov r1, #0x7
    mov r2, #0x0
    bl func_020245c0
    mov r0, #0x3
    add sp, sp, #0x4
    str r0, [r4, #0x28c]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02027d94:
    mov r0, r4
    bl func_01ffb0f0
    ldr r1, [r4, #0x3d4]
    cmp r0, r1
    addlt sp, sp, #0x4
    ldmltfd sp!, {r4, r5, lr}
    bxlt lr
    ldr r0, =data_0215b3d4
    mov r1, #0x0
    bl func_02014be0
    cmp r0, #0x0
    bgt L_02027de4
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x1e
    bl func_0202461c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02027de4:
    ldr r1, =0x27d
    mov r0, r4
    add r2, r4, r1
    ldrb r1, [r2, #0x0]
    orr r1, r1, #0x40
    swpb r1, r1, [r2]
    bl func_020253e8
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x1c
    bl func_0202461c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
