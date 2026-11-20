#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202461c();
extern void func_02024930();
extern void func_02024ac8();
extern void func_02024bd0();
extern void func_02024ee4();
extern void func_02025464();
extern void func_02025614();
extern void func_02026c7c();
extern void func_0202a1b4();
extern void r1();
// clang-format off
asm void func_02023708(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x2f4]
    ldrb r1, [r1, #0x86]
    cmp r1, #0x0
    beq L_02023730
    mov r1, #0x7
    mov r2, #0x1
    mov r3, #0x0
    bl func_0202461c
L_02023730:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    beq L_0202376c
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02025614
L_0202376c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x80
    beq L_020237a8
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02025614
L_020237a8:
    mov r0, r4
    bl func_02024ac8
    cmp r0, #0x0
    beq L_02023868
    mov r0, r4
    bl func_02024930
    cmp r0, #0x0
    beq L_02023868
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x20
    beq L_020237ec
    ldr r0, [r4, #0x28c]
    cmp r0, #0x1
    beq L_02023868
L_020237ec:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x10
    beq L_02023810
    ldr r0, [r4, #0x28c]
    cmp r0, #0x2
    beq L_02023868
L_02023810:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ands r0, r0, #0x80
    bne L_02023840
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    cmp r0, #0x0
    bne L_02023850
L_02023840:
    mov r0, r4
    bl func_02024ee4
    ldmfd sp!, {r4, lr}
    bx lr
L_02023850:
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02025464
    ldmfd sp!, {r4, lr}
    bx lr
L_02023868:
    mov r0, r4
    bl func_02024bd0
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02026c7c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
