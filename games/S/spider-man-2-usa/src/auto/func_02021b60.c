#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff93d4();
extern void func_01ffb0f0();
extern void func_02014ba4();
extern void func_020218cc();
extern void func_020245c0();
extern void func_0202461c();
extern void func_0202aa30();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_0207a4a0[];
extern char data_0207a4b0[];
extern char data_0207a4f4[];
extern char data_0207a4fc[];
extern char data_0207a508[];
extern char data_02087694[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02021b60(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_01ffb0f0
    add r1, r0, #0x2d
    mov r0, r4
    str r1, [r4, #0x3d4]
    bl func_020218cc
    ldr r2, =0x3d1
    ldr r1, =data_0207a4a0
    add r2, r4, r2
    swpb r0, r0, [r2]
    mov r0, r4
    bl func_01ff93d4
    ldr r0, [r4, #0x28c]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0202200c
L_02021ba4:
    b L_02021ea0
    b L_02021bb8
    b L_02021ca4
    b L_02021ea0
    b L_02021d9c
L_02021bb8:
    ldr r3, [r4, #0x390]
    ldr r2, [r4, #0x298]
    subs r0, r2, r3
    beq L_02021c28
    ldr r1, [r4, #0x29c]
    ldr r0, [r4, #0x394]
    subs r0, r1, r0
    beq L_02021c28
    cmp r3, r2
    movlt r2, #0x1
    movge r2, #0x0
    mov r0, r4
    mov r1, #0x41
    bl func_020245c0
    ldr r1, [r4, #0x394]
    ldr r0, [r4, #0x29c]
    cmp r1, r0
    movlt r2, #0x1
    movge r2, #0x0
    mov r0, r4
    mov r1, #0x41
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x46
    bl func_0202461c
    b L_0202200c
L_02021c28:
    ldr r0, [r4, #0x38c]
    cmp r0, #0x2
    bne L_02021c6c
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x45
    bl func_0202461c
    mov r0, r4
    mov r1, #0x41
    mov r2, #0x0
    bl func_020245c0
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x1
    bl func_0202aa30
    b L_0202200c
L_02021c6c:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x44
    bl func_0202461c
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x0
    bl func_020245c0
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x41
    bl func_0202aa30
    b L_0202200c
L_02021ca4:
    ldr r3, [r4, #0x390]
    ldr r2, [r4, #0x298]
    subs r0, r2, r3
    beq L_02021d14
    ldr r1, [r4, #0x29c]
    ldr r0, [r4, #0x394]
    subs r0, r1, r0
    beq L_02021d14
    cmp r3, r2
    movlt r2, #0x1
    movge r2, #0x0
    mov r0, r4
    mov r1, #0x41
    bl func_020245c0
    ldr r1, [r4, #0x394]
    ldr r0, [r4, #0x29c]
    cmp r1, r0
    movlt r2, #0x1
    movge r2, #0x0
    mov r0, r4
    mov r1, #0x41
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x46
    bl func_0202461c
    b L_0202200c
L_02021d14:
    ldr r0, [r4, #0x38c]
    cmp r0, #0x1
    bne L_02021d58
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x45
    bl func_0202461c
    mov r0, r4
    mov r1, #0x41
    mov r2, #0x1
    bl func_020245c0
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x1
    bl func_0202aa30
    b L_0202200c
L_02021d58:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x44
    bl func_0202461c
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x0
    bl func_020245c0
    ldrb r0, [r4, #0x362]
    mov r1, #0x41
    cmp r0, #0x0
    moveq r2, #0x1
    movne r2, #0x0
    mov r0, r4
    bl func_0202aa30
    b L_0202200c
L_02021d9c:
    ldr r3, [r4, #0x390]
    ldr r2, [r4, #0x298]
    subs r0, r2, r3
    beq L_02021e0c
    ldr r1, [r4, #0x29c]
    ldr r0, [r4, #0x394]
    subs r0, r1, r0
    beq L_02021e0c
    cmp r3, r2
    movlt r2, #0x1
    movge r2, #0x0
    mov r0, r4
    mov r1, #0x41
    bl func_020245c0
    ldr r1, [r4, #0x394]
    ldr r0, [r4, #0x29c]
    cmp r1, r0
    movlt r2, #0x1
    movge r2, #0x0
    mov r0, r4
    mov r1, #0x41
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x46
    bl func_0202461c
    b L_0202200c
L_02021e0c:
    ldr r0, [r4, #0x38c]
    cmp r0, #0x3
    bne L_02021e5c
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x45
    bl func_0202461c
    mov r0, r4
    mov r1, #0x41
    mov r2, #0x0
    bl func_0202aa30
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x1
    bl func_020245c0
    ldr r1, =data_0207a4b0
    mov r0, r4
    bl func_01ff93d4
    b L_0202200c
L_02021e5c:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x44
    bl func_0202461c
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x0
    bl func_0202aa30
    ldrb r0, [r4, #0x362]
    mov r1, #0x41
    cmp r0, #0x0
    moveq r2, #0x1
    movne r2, #0x0
    mov r0, r4
    bl func_020245c0
    b L_0202200c
L_02021ea0:
    ldr r1, [r4, #0x298]
    ldr r0, [r4, #0x390]
    subs r0, r1, r0
    beq L_02021ef8
    ldr r1, [r4, #0x29c]
    ldr r0, [r4, #0x394]
    subs r0, r1, r0
    beq L_02021ef8
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x41
    bl func_020245c0
    mov r0, r4
    mov r1, #0x41
    mov r2, #0x1
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x43
    bl func_0202461c
    b L_02022004
L_02021ef8:
    ldr r0, [r4, #0x38c]
    cmp r0, #0x4
    bne L_02021f8c
    ldrb r0, [r4, #0x3d1]
    cmp r0, #0x0
    beq L_02021f48
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x39
    bl func_020245c0
    mov r0, r4
    mov r1, #0x42
    mov r2, #0x1
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x45
    bl func_0202461c
    b L_02022004
L_02021f48:
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x39
    bl func_020245c0
    mov r0, r4
    mov r1, #0x42
    mov r2, #0x1
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x42
    bl func_0202461c
    ldr r1, =data_0207a4b0
    mov r0, r4
    bl func_01ff93d4
    b L_02022004
L_02021f8c:
    ldrb r0, [r4, #0x3d1]
    cmp r0, #0x0
    beq L_02021fd0
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x41
    bl func_020245c0
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x1
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x44
    bl func_0202461c
    b L_02022004
L_02021fd0:
    ldrb r2, [r4, #0x362]
    mov r0, r4
    mov r1, #0x41
    bl func_020245c0
    mov r0, r4
    mov r1, #0x39
    mov r2, #0x1
    bl func_0202aa30
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x41
    bl func_0202461c
L_02022004:
    mov r0, #0x0
    str r0, [r4, #0x28c]
L_0202200c:
    mov r1, #0x1b
    ldr r0, =data_0207a4f4
    str r1, [r4, #0x388]
    ldr r2, [r0, #0x0]
    ldr r1, =data_0207a4fc
    str r2, [r4, #0x2c0]
    ldr r0, [r0, #0x4]
    add r3, r4, #0x2c8
    str r0, [r4, #0x2c4]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0207a508
    add r3, r4, #0x2d4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0215b3d4
    mov r1, #0x3
    mov r2, #0x0
    bl func_02014ba4
    bl func_0204cd18
    ldr r1, =data_02087694
    mov r2, #0x0
    bl func_0204c8cc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
