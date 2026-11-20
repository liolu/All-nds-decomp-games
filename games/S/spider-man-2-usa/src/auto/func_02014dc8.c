#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014ba4();
extern void func_02014c50();
extern void func_0203b5fc();
extern void func_0203b654();
extern void func_0203b83c();
// clang-format off
asm void func_02014dc8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    cmp r2, #0x41
    mvn r4, #0x0
    bne L_02014fc4
    ldr r0, [r6, #0x4c]
    bl func_0203b83c
    bl func_0203b654
    cmp r0, #0x0
    bne L_02014fc4
    cmp r5, #0xc
    addls pc, pc, r5, lsl #0x2
    b L_02014fc4
L_02014e00:
    b L_02014e34
    b L_02014e58
    b L_02014e90
    b L_02014eb4
    b L_02014eec
    b L_02014fc4
    b L_02014f10
    b L_02014fc4
    b L_02014f48
    b L_02014fc4
    b L_02014f6c
    b L_02014fc4
    b L_02014fa4
L_02014e34:
    mov r0, r6
    mov r1, #0x5
    mov r4, #0x2
    bl func_02014c50
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014e58:
    mov r1, #0x1
    mov r0, r6
    mov r2, r1
    mov r4, #0x0
    bl func_02014ba4
    mov r0, r6
    mov r1, r4
    mov r2, #0x32
    bl func_02014ba4
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014e90:
    mov r0, r6
    mov r1, #0x4
    mov r4, #0x5
    bl func_02014c50
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014eb4:
    mov r4, #0x1
    mov r0, r6
    mov r2, r4
    mov r1, #0x4
    bl func_02014ba4
    mov r0, r6
    mov r1, #0x3
    mov r2, #0x1f4
    bl func_02014ba4
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014eec:
    mov r0, r6
    mov r1, #0x6
    mov r4, #0x4
    bl func_02014c50
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014f10:
    mov r1, #0x1
    mov r0, r6
    mov r2, r1
    mov r4, #0x0
    bl func_02014ba4
    mov r0, r6
    mov r1, r4
    mov r2, #0x32
    bl func_02014ba4
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014f48:
    mov r0, r6
    mov r1, #0x0
    mov r4, #0x3
    bl func_02014c50
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014f6c:
    mov r4, #0x1
    mov r0, r6
    mov r2, r4
    mov r1, #0x4
    bl func_02014ba4
    mov r0, r6
    mov r1, #0x3
    mov r2, #0x1f4
    bl func_02014ba4
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
    b L_02014fc4
L_02014fa4:
    mov r0, r6
    mov r1, #0x2
    mov r4, #0x6
    bl func_02014c50
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b5fc
L_02014fc4:
    cmp r5, #0xd
    bne L_02015004
    ldr r0, [r6, #0x4c]
    mov r1, r5
    bl func_0203b83c
    bl func_0203b654
    cmp r0, #0x0
    bne L_02015004
    add r1, r6, #0x60
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r1, r5
    ldr r0, [r6, #0x4c]
    mov r4, #0x7
    bl func_0203b83c
    bl func_0203b5fc
L_02015004:
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
