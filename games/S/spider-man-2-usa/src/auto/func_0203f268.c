#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203aa8c();
extern void func_0203d8dc();
extern void func_0203da50();
extern void func_0203f918();
extern void func_0203f9d0();
extern void func_020430a0();
extern void func_02043430();
extern void r2();
extern char data_0208402c[];
extern char data_02085474[];
// clang-format off
asm void func_0203f268(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    movs r5, r0
    mov r4, r1
    beq L_0203f298
    ldr r6, [r5, #0x1c]
    cmp r6, #0x0
    beq L_0203f298
    cmp r4, #0x4
    bgt L_0203f298
    cmp r4, #0x0
    bge L_0203f2a8
L_0203f298:
    add sp, sp, #0x4
    mvn r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0203f2a8:
    ldr r0, [r5, #0xc]
    cmp r0, #0x0
    beq L_0203f2e4
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    bne L_0203f2cc
    ldr r0, [r5, #0x4]
    cmp r0, #0x0
    bne L_0203f2e4
L_0203f2cc:
    ldr r1, [r6, #0x4]
    ldr r0, =0x29a
    cmp r1, r0
    bne L_0203f300
    cmp r4, #0x4
    beq L_0203f300
L_0203f2e4:
    ldr r1, =data_02085474
    add sp, sp, #0x4
    ldr r1, [r1, #0x10]
    mvn r0, #0x1
    str r1, [r5, #0x18]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0203f300:
    ldr r0, [r5, #0x10]
    cmp r0, #0x0
    ldreq r1, =data_02085474
    addeq sp, sp, #0x4
    ldreq r1, [r1, #0x1c]
    mvneq r0, #0x4
    streq r1, [r5, #0x18]
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    str r5, [r6, #0x0]
    ldr r7, [r6, #0x20]
    str r4, [r6, #0x20]
    ldr r0, [r6, #0x4]
    cmp r0, #0x2a
    bne L_0203f59c
    ldr r0, [r6, #0x18]
    cmp r0, #0x2
    bne L_0203f4c4
    add r0, r6, #0x14
    ldr r1, [r0, #0x0]
    ldr r2, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    mov r3, #0x1f
    add r2, r1, r2
    swpb r1, r3, [r2]
    ldr r2, [r6, #0x14]
    ldr r1, [r0, #0x0]
    mov r3, #0x8b
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    mov ip, #0x8
    add r2, r1, r2
    swpb r1, r3, [r2]
    ldr r3, [r6, #0x14]
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    add r3, r1, r3
    swpb r1, ip, [r3]
    ldr r3, [r6, #0x14]
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    add r3, r1, r3
    swpb r1, r2, [r3]
    ldr r3, [r6, #0x14]
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    add r3, r1, r3
    swpb r1, r2, [r3]
    ldr r3, [r6, #0x14]
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    add r3, r1, r3
    swpb r1, r2, [r3]
    ldr r3, [r6, #0x14]
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    add r3, r1, r3
    swpb r1, r2, [r3]
    ldr r3, [r6, #0x14]
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r0, [r6, #0x8]
    add r1, r0, r3
    swpb r0, r2, [r1]
    ldr r1, [r6, #0x7c]
    cmp r1, #0x9
    moveq r2, #0x2
    beq L_0203f464
    ldr r0, [r6, #0x80]
    cmp r0, #0x2
    bge L_0203f460
    cmp r1, #0x2
    bge L_0203f464
L_0203f460:
    mov r2, #0x4
L_0203f464:
    add r1, r6, #0x14
    ldr r0, [r1, #0x0]
    ldr ip, [r6, #0x14]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r3, [r6, #0x8]
    mov r0, #0x0
    add r3, r3, ip
    swpb r2, r2, [r3]
    mov ip, #0xff
    ldr r2, [r1, #0x0]
    ldr lr, [r6, #0x14]
    add r2, r2, #0x1
    str r2, [r1, #0x0]
    ldr r1, [r6, #0x8]
    mov r3, #0x71
    add r2, r1, lr
    swpb r1, ip, [r2]
    mov r1, r0
    mov r2, r0
    str r3, [r6, #0x4]
    bl func_0203da50
    str r0, [r5, #0x30]
    b L_0203f59c
L_0203f4c4:
    ldr r1, [r6, #0x28]
    ldr r0, [r6, #0x80]
    sub r1, r1, #0x8
    mov r1, r1, lsl #0x4
    add r1, r1, #0x8
    cmp r0, #0x2
    mov r1, r1, lsl #0x8
    bge L_0203f4f0
    ldr r0, [r6, #0x7c]
    cmp r0, #0x2
    bge L_0203f4f8
L_0203f4f0:
    mov r2, #0x0
    b L_0203f510
L_0203f4f8:
    cmp r0, #0x6
    movlt r2, #0x1
    blt L_0203f510
    cmp r0, #0x6
    moveq r2, #0x2
    movne r2, #0x3
L_0203f510:
    ldr r0, [r6, #0x64]
    mov ip, #0x71
    cmp r0, #0x0
    orr r1, r1, r2, lsl #0x6
    ldr r0, =0x8421085
    orrne r1, r1, #0x20
    umull r0, r2, r1, r0
    sub r0, r1, r2
    add r2, r2, r0, lsr #0x1
    ldr r3, =0x1f
    mov r2, r2, lsr #0x4
    umull r0, r2, r3, r2
    sub r2, r1, r0
    rsb r2, r2, #0x1f
    mov r0, r6
    str ip, [r6, #0x4]
    add r1, r1, r2
    bl func_0203f9d0
    ldr r0, [r6, #0x64]
    cmp r0, #0x0
    beq L_0203f588
    ldr r1, [r5, #0x30]
    mov r0, r6
    mov r1, r1, lsr #0x10
    bl func_0203f9d0
    ldr r2, [r5, #0x30]
    ldr r1, =0xffff
    mov r0, r6
    and r1, r2, r1
    bl func_0203f9d0
L_0203f588:
    mov r0, #0x0
    mov r1, r0
    mov r2, r0
    bl func_0203d8dc
    str r0, [r5, #0x30]
L_0203f59c:
    ldr r0, [r6, #0x14]
    cmp r0, #0x0
    beq L_0203f5d4
    mov r0, r5
    bl func_0203f918
    ldr r0, [r5, #0x10]
    cmp r0, #0x0
    bne L_0203f608
    mvn r0, #0x0
    str r0, [r6, #0x20]
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0203f5d4:
    ldr r0, [r5, #0x4]
    cmp r0, #0x0
    bne L_0203f608
    cmp r4, r7
    bgt L_0203f608
    cmp r4, #0x4
    ldrne r1, =data_02085474
    addne sp, sp, #0x4
    ldrne r1, [r1, #0x1c]
    mvnne r0, #0x4
    strne r1, [r5, #0x18]
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
L_0203f608:
    ldr r1, [r6, #0x4]
    ldr r0, =0x29a
    cmp r1, r0
    bne L_0203f63c
    ldr r0, [r5, #0x4]
    cmp r0, #0x0
    ldrne r1, =data_02085474
    addne sp, sp, #0x4
    ldrne r1, [r1, #0x1c]
    mvnne r0, #0x4
    strne r1, [r5, #0x18]
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
L_0203f63c:
    ldr r0, [r5, #0x4]
    cmp r0, #0x0
    bne L_0203f668
    ldr r0, [r6, #0x6c]
    cmp r0, #0x0
    bne L_0203f668
    cmp r4, #0x0
    beq L_0203f754
    ldr r0, =0x29a
    cmp r1, r0
    beq L_0203f754
L_0203f668:
    ldr r1, [r6, #0x7c]
    mov r0, #0xc
    mul r2, r1, r0
    ldr r1, =data_0208402c
    mov r0, r6
    ldr r2, [r1, r2]
    mov r1, r4
    blx r2
    sub r1, r0, #0x2
    cmp r1, #0x1
    ldrls r1, =0x29a
    strls r1, [r6, #0x4]
    cmp r0, #0x0
    beq L_0203f6a8
    cmp r0, #0x2
    bne L_0203f6c8
L_0203f6a8:
    ldr r0, [r5, #0x10]
    add sp, sp, #0x4
    cmp r0, #0x0
    mvneq r0, #0x0
    streq r0, [r6, #0x20]
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0203f6c8:
    cmp r0, #0x1
    bne L_0203f754
    cmp r4, #0x1
    bne L_0203f6e4
    mov r0, r6
    bl func_020430a0
    b L_0203f72c
L_0203f6e4:
    mov r1, #0x0
    mov r0, r6
    mov r2, r1
    mov r3, r1
    bl func_02043430
    cmp r4, #0x3
    bne L_0203f72c
    ldr r0, [r6, #0x44]
    ldr r2, [r6, #0x3c]
    sub r0, r0, #0x1
    mov r0, r0, lsl #0x1
    mov r1, #0x0
    strh r1, [r2, r0]
    ldr r2, [r6, #0x44]
    ldr r0, [r6, #0x3c]
    sub r2, r2, #0x1
    mov r2, r2, lsl #0x1
    bl func_0203aa8c
L_0203f72c:
    mov r0, r5
    bl func_0203f918
    ldr r0, [r5, #0x10]
    cmp r0, #0x0
    mvneq r0, #0x0
    streq r0, [r6, #0x20]
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_0203f754:
    cmp r4, #0x4
    addne sp, sp, #0x4
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldr r0, [r6, #0x18]
    cmp r0, #0x0
    addle sp, sp, #0x4
    movle r0, #0x1
    ldmlefd sp!, {r4, r5, r6, r7, lr}
    bxle lr
    cmp r0, #0x2
    bne L_0203f8a8
    add r0, r6, #0x14
    ldr r1, [r0, #0x0]
    ldr r2, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    ldr r3, [r5, #0x30]
    add r2, r1, r2
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x0]
    ldr r4, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r2, [r5, #0x30]
    ldr r1, [r6, #0x8]
    mov r3, r2, lsr #0x8
    add r2, r1, r4
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x0]
    ldr r4, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r2, [r5, #0x30]
    ldr r1, [r6, #0x8]
    mov r3, r2, lsr #0x10
    add r2, r1, r4
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x0]
    ldr r4, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r2, [r5, #0x30]
    ldr r1, [r6, #0x8]
    mov r3, r2, lsr #0x18
    add r2, r1, r4
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x0]
    ldr r2, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r6, #0x8]
    ldr r3, [r5, #0x8]
    add r2, r1, r2
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x0]
    ldr r4, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r2, [r5, #0x8]
    ldr r1, [r6, #0x8]
    mov r3, r2, lsr #0x8
    add r2, r1, r4
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x0]
    ldr r4, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r2, [r5, #0x8]
    ldr r1, [r6, #0x8]
    mov r3, r2, lsr #0x10
    add r2, r1, r4
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x0]
    ldr r3, [r6, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    ldr r1, [r5, #0x8]
    ldr r0, [r6, #0x8]
    mov r2, r1, lsr #0x18
    add r1, r0, r3
    swpb r0, r2, [r1]
    b L_0203f8cc
L_0203f8a8:
    ldr r1, [r5, #0x30]
    mov r0, r6
    mov r1, r1, lsr #0x10
    bl func_0203f9d0
    ldr r2, [r5, #0x30]
    ldr r1, =0xffff
    mov r0, r6
    and r1, r2, r1
    bl func_0203f9d0
L_0203f8cc:
    mov r0, r5
    bl func_0203f918
    ldr r0, [r6, #0x18]
    cmp r0, #0x0
    rsbgt r0, r0, #0x0
    strgt r0, [r6, #0x18]
    ldr r0, [r6, #0x14]
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
