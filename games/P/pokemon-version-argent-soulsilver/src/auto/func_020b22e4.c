#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020b1dac();
extern void func_ov000_021f97e0();
extern char data_021090e6[];
extern char data_021d6060[];
extern char data_021d84b8[];
// clang-format off
asm void func_020b22e4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_021d6060
    ldr r0, [r1, #0x20]
    cmp r0, #0x0
    moveq r0, #0x1
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r1, #0xf08]
    cmp r0, #0x0
    bne L_020b232c
    bl func_020b1dac
    ldr r1, =data_021d6060
    cmp r0, #0x0
    str r0, [r1, #0xf08]
    ldrne r0, [r1, #0x18]
    cmpne r0, #0x0
    movne r0, #0x0
    moveq r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_020b232c:
    ldr r0, =data_021d84b8
    mov r5, #0x1
    ldr r0, [r0, #0x10]
    cmp r0, #0x2
    bne L_020b2360
    ldr r3, [r1, #0xf10]
    ldr r0, =data_021090e6
    add r2, r3, #0x1
    str r2, [r1, #0xf10]
    ldr r1, [r1, #0xf14]
    add r1, r1, r1, lsl #0x1
    add r0, r0, r1
    ldrb r5, [r3, r0]
L_020b2360:
    mov r4, #0x0
    mov r7, #0x80000000
    ldr r6, =data_021d6060
    b L_020b23d4
L_020b2370:
    ldr r1, [r6, #0xf0c]
    mov r2, r1
    clz r2, r2
    cmp r2, #0x20
    beq L_020b23dc
    mvn r0, r7, lsr r2
    and r0, r1, r0
    str r0, [r6, #0xf0c]
    rsb r0, r2, #0x1f
    ldr r1, [r6, #0xf08]
    ldr r2, [r6, #0xc]
    and r0, r0, #0xff
    bl func_ov000_021f97e0
    ldr r0, [r6, #0xf0c]
    cmp r0, #0x0
    bne L_020b23d0
    ldr r0, =data_021d6060
    mov r1, #0x0
    ldr r2, [r0, #0xf00]
    add r2, r2, #0x1
    str r2, [r0, #0xf00]
    str r1, [r0, #0xf08]
    str r1, [r0, #0xf0c]
    b L_020b23dc
L_020b23d0:
    add r4, r4, #0x1
L_020b23d4:
    cmp r4, r5
    blt L_020b2370
L_020b23dc:
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
