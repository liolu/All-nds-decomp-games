#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_02023dd0();
extern void func_020245c0();
extern void func_0202461c();
extern void func_0202aa30();
extern void r1();
extern char data_0207a4a0[];
// clang-format off
asm void func_02025790(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    bne L_020257dc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_02025884
L_020257dc:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xb
    bl func_0202461c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    ldr r1, =0x362
    movne r3, #0x1
    moveq r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    movne r2, #0x1
    moveq r2, #0x0
    mov r0, r4
    mov r1, #0xa
    bl func_020245c0
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0202aa30
    mov r2, #0x4
    ldr r1, =data_0207a4a0
    mov r0, r4
    str r2, [r4, #0x388]
    bl func_01ff93d4
    ldmfd sp!, {r4, lr}
    bx lr
L_02025884:
    mov r0, r4
    bl func_02023dd0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
