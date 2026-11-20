#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202461c();
extern void func_02024698();
extern void func_02024730();
extern void func_020247c0();
extern void func_02024930();
extern void func_02024ac8();
extern void func_02024bd0();
extern void func_02025464();
extern void func_02025790();
extern void func_02026c7c();
extern void func_020284c4();
extern void func_0202a1b4();
extern void func_0202ac74();
extern void r1();
// clang-format off
asm void func_020239b0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x2f4]
    ldrb r1, [r1, #0x86]
    cmp r1, #0x0
    beq L_020239d8
    mov r1, #0x7
    mov r2, #0x1
    mov r3, #0x0
    bl func_0202461c
L_020239d8:
    mov r0, r4
    bl func_02024ac8
    cmp r0, #0x0
    beq L_02023a10
    mov r0, r4
    bl func_02024930
    cmp r0, #0x0
    beq L_02023a10
    mov r0, r4
    bl func_0202a1b4
    mov r0, r4
    bl func_02025464
    ldmfd sp!, {r4, lr}
    bx lr
L_02023a10:
    mov r0, r4
    bl func_0202ac74
    ldr r0, [r0, #0x8]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1f
    beq L_02023a58
    mov r0, r4
    bl func_020247c0
    cmp r0, #0x0
    beq L_02023a58
    mov r3, #0x1
    mov r0, r4
    mov r1, #0x8
    mov r2, #0x0
    str r3, [r4, #0x388]
    bl func_0202461c
    ldmfd sp!, {r4, lr}
    bx lr
L_02023a58:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    beq L_02023ac4
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02024730
    cmp r0, #0x0
    bne L_02023ab4
    mov r0, r4
    mov r1, #0x1
    bl func_020284c4
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
L_02023ab4:
    mov r0, r4
    bl func_02025790
    ldmfd sp!, {r4, lr}
    bx lr
L_02023ac4:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x90]
    blx r1
    ldr r1, [r4, #0x380]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_02023b30
    ldr r1, =0x362
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02024698
    cmp r0, #0x0
    bne L_02023b20
    mov r0, r4
    mov r1, #0x2
    bl func_020284c4
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
L_02023b20:
    mov r0, r4
    bl func_02025790
    ldmfd sp!, {r4, lr}
    bx lr
L_02023b30:
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
