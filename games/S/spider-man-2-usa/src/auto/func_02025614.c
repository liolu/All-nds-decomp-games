#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_02023b58();
extern void func_02023bcc();
extern void func_020245c0();
extern void func_0202461c();
extern void func_020284c4();
extern void func_0202aa30();
extern void r1();
extern char data_0207a4a0[];
// clang-format off
asm void func_02025614(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    bne L_02025660
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x80
    beq L_02025778
L_02025660:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xb
    bl func_0202461c
    ldr r0, [r4, #0x28c]
    cmp r0, #0x2
    bne L_020256c4
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    ldr r0, =0x362
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    b L_020256f8
L_020256c4:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    ldr r0, =0x362
    movne r2, #0x1
    moveq r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_020256f8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    movne r2, #0x1
    moveq r2, #0x0
    mov r0, r4
    mov r1, #0xa
    bl func_0202aa30
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_020245c0
    mov r2, #0x5
    ldr r1, =data_0207a4a0
    mov r0, r4
    str r2, [r4, #0x388]
    bl func_01ff93d4
    ldr r1, [r4, #0x28c]
    mov r0, r4
    bl func_020284c4
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_02023bcc
    ldmfd sp!, {r4, lr}
    bx lr
L_02025778:
    mov r0, r4
    bl func_02023b58
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
