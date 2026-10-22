#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203f174();
extern void func_0203fa24();
extern void r3();
extern char data_0208401c[];
extern char data_02085474[];
extern char func_02044c00[];
extern char func_02044c1c[];
// clang-format off
asm void func_0203fb14(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r5, [sp, #0x28]
    mov r10, r0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    cmp r5, #0x0
    ldr r6, [sp, #0x20]
    mov r4, #0x1
    beq L_0203fb5c
    ldr r0, =data_0208401c
    ldrb r1, [r5, #0x0]
    ldrb r0, [r0, #0x0]
    cmp r1, r0
    bne L_0203fb5c
    ldr r0, [sp, #0x2c]
    cmp r0, #0x38
    beq L_0203fb68
L_0203fb5c:
    mvn r0, #0x5
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0203fb68:
    cmp r10, #0x0
    mvneq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r1, #0x0
    str r1, [r10, #0x18]
    ldr r0, [r10, #0x20]
    cmp r0, #0x0
    ldreq r0, =func_02044c1c
    streq r0, [r10, #0x20]
    streq r1, [r10, #0x28]
    ldr r0, [r10, #0x24]
    cmp r0, #0x0
    ldreq r0, =func_02044c00
    streq r0, [r10, #0x24]
    mvn r0, #0x0
    cmp r9, r0
    moveq r9, #0x6
    cmp r7, #0x0
    rsblt r7, r7, #0x0
    movlt r4, #0x0
    blt L_0203fbcc
    cmp r7, #0xf
    subgt r7, r7, #0x10
    movgt r4, #0x2
L_0203fbcc:
    cmp r6, #0x1
    blt L_0203fc18
    cmp r6, #0x9
    bgt L_0203fc18
    cmp r8, #0x8
    bne L_0203fc18
    cmp r7, #0x8
    blt L_0203fc18
    cmp r7, #0xf
    bgt L_0203fc18
    cmp r9, #0x0
    blt L_0203fc18
    cmp r9, #0x9
    bgt L_0203fc18
    ldr r0, [sp, #0x24]
    cmp r0, #0x0
    blt L_0203fc18
    cmp r0, #0x3
    ble L_0203fc24
L_0203fc18:
    mvn r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0203fc24:
    ldr r0, [r10, #0x28]
    ldr r3, [r10, #0x20]
    cmp r7, #0x8
    ldr r2, =0x16b8
    mov r1, #0x1
    moveq r7, #0x9
    blx r3
    movs r5, r0
    mvneq r0, #0x3
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    str r5, [r10, #0x1c]
    str r10, [r5, #0x0]
    str r4, [r5, #0x18]
    str r7, [r5, #0x28]
    ldr r0, [r5, #0x28]
    mov r2, #0x1
    mov r0, r2, lsl r0
    str r0, [r5, #0x24]
    ldr r1, [r5, #0x24]
    add r0, r6, #0x7
    sub r1, r1, #0x1
    str r1, [r5, #0x2c]
    str r0, [r5, #0x48]
    ldr r1, [r5, #0x48]
    ldr r0, =0xaaaaaaab
    mov r1, r2, lsl r1
    str r1, [r5, #0x44]
    ldr r1, [r5, #0x44]
    mov r2, #0x2
    sub r1, r1, #0x1
    str r1, [r5, #0x4c]
    ldr r1, [r5, #0x48]
    add r1, r1, #0x2
    umull r0, r3, r1, r0
    mov r3, r3, lsr #0x1
    str r3, [r5, #0x50]
    ldr r0, [r10, #0x28]
    ldr r1, [r5, #0x24]
    ldr r3, [r10, #0x20]
    blx r3
    str r0, [r5, #0x30]
    ldr r0, [r10, #0x28]
    ldr r1, [r5, #0x24]
    ldr r3, [r10, #0x20]
    mov r2, #0x2
    blx r3
    str r0, [r5, #0x38]
    ldr r0, [r10, #0x28]
    ldr r1, [r5, #0x44]
    mov r2, #0x2
    ldr r3, [r10, #0x20]
    blx r3
    add r1, r6, #0x6
    str r0, [r5, #0x3c]
    mov r0, #0x1
    mov r1, r0, lsl r1
    add r0, r5, #0x1000
    str r1, [r0, #0x694]
    ldr r1, [r0, #0x694]
    ldr r0, [r10, #0x28]
    mov r2, #0x4
    ldr r3, [r10, #0x20]
    blx r3
    str r0, [r5, #0x8]
    add r2, r5, #0x1000
    ldr r1, [r2, #0x694]
    mov r1, r1, lsl #0x2
    str r1, [r5, #0xc]
    ldr r1, [r5, #0x30]
    cmp r1, #0x0
    beq L_0203fd68
    ldr r1, [r5, #0x38]
    cmp r1, #0x0
    beq L_0203fd68
    ldr r1, [r5, #0x3c]
    cmp r1, #0x0
    beq L_0203fd68
    ldr r1, [r5, #0x8]
    cmp r1, #0x0
    bne L_0203fd90
L_0203fd68:
    ldr r1, =0x29a
    ldr r0, =data_02085474
    str r1, [r5, #0x4]
    ldr r1, [r0, #0x18]
    mov r0, r10
    str r1, [r10, #0x18]
    bl func_0203f174
    mvn r0, #0x3
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0203fd90:
    ldr r3, [r2, #0x694]
    mov r1, #0x3
    bic r3, r3, #0x1
    add r0, r0, r3
    str r0, [r2, #0x69c]
    ldr r4, [r5, #0x8]
    ldr r0, [r2, #0x694]
    ldr r3, [sp, #0x24]
    mla r1, r0, r1, r4
    str r1, [r2, #0x690]
    str r9, [r5, #0x7c]
    mov r0, r10
    str r3, [r5, #0x80]
    add r2, r5, #0x1d
    swpb r1, r8, [r2]
    bl func_0203fa24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
