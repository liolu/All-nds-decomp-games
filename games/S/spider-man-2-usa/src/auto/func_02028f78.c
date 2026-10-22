#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8084();
extern void func_01ff80ac();
extern void func_01ff80d4();
extern void func_02021168();
extern void func_020211a8();
extern void func_020235d8();
extern void func_02023e30();
extern void func_0202461c();
extern void func_02024930();
extern void func_02024ac8();
extern void func_02024bd0();
extern void func_02024ee4();
extern void func_02026c7c();
extern void func_020284c4();
extern void func_02028c18();
extern void func_02028de0();
extern void func_0202a1b4();
extern void func_0202aa30();
extern void r1();
// clang-format off
asm void func_02028f78(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x362]
    cmp r1, #0x0
    bne L_02028fc8
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    beq L_02028fbc
    mov r0, r4
    bl func_01ff80ac
    cmp r0, #0x0
    beq L_02029000
L_02028fbc:
    mov r0, r4
    bl func_02023e30
    b L_02029000
L_02028fc8:
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_02028ff8
    mov r0, r4
    bl func_01ff8084
    cmp r0, #0x0
    beq L_02029000
L_02028ff8:
    mov r0, r4
    bl func_02023e30
L_02029000:
    mov r0, r4
    bl func_01ff80d4
    cmp r0, #0x0
    beq L_02029020
    mov r1, #0x1
    mov r0, r4
    mov r2, r1
    bl func_0202aa30
L_02029020:
    mov r0, r4
    bl func_02024ac8
    cmp r0, #0x0
    beq L_02029074
    mov r0, r4
    bl func_02024930
    cmp r0, #0x0
    beq L_02029074
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02024ee4
    ldrb r0, [r4, #0x362]
    cmp r0, #0x0
    ldr r0, =0x362
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02029074:
    mov r0, r4
    bl func_020211a8
    cmp r0, #0x0
    beq L_020290c8
    mov r2, #0x0
    mov ip, #0x40
    mov r0, r4
    mov r3, r2
    mov r1, #0xc
    str ip, [r4, #0x380]
    bl func_0202461c
    mov r0, r4
    mov r1, #0x1
    bl func_020235d8
    add r1, r4, #0x298
    ldr r0, [r1, #0x0]
    str r0, [r4, #0x390]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x394]
    ldmfd sp!, {r4, lr}
    bx lr
L_020290c8:
    mov r0, r4
    bl func_02021168
    cmp r0, #0x0
    beq L_0202911c
    mov r2, #0x0
    mov ip, #0x40
    mov r0, r4
    mov r3, r2
    mov r1, #0xc
    str ip, [r4, #0x380]
    bl func_0202461c
    mov r0, r4
    mov r1, #0x2
    bl func_020235d8
    add r1, r4, #0x298
    ldr r0, [r1, #0x0]
    str r0, [r4, #0x390]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x394]
    ldmfd sp!, {r4, lr}
    bx lr
L_0202911c:
    mov r0, r4
    bl func_01ff80d4
    cmp r0, #0x0
    bne L_02029144
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02024ee4
    ldmfd sp!, {r4, lr}
    bx lr
L_02029144:
    ldr r1, [r4, #0x28c]
    mov r0, r4
    bl func_020284c4
    cmp r0, #0x0
    bne L_0202917c
    mov r0, r4
    bl func_02028c18
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_02028de0
    ldmfd sp!, {r4, lr}
    bx lr
L_0202917c:
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
