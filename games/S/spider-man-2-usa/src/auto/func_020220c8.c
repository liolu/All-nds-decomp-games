#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa554();
extern void func_02014ba4();
extern void func_02021758();
extern void func_0202bff8();
extern void func_0203a6cc();
extern void func_0204c8cc();
extern void func_0204cd18();
extern char data_0207b238[];
extern char data_0207b248[];
extern char data_0207b268[];
extern char data_0207b274[];
extern char data_0207b288[];
extern char data_0207b298[];
extern char data_0207b2b8[];
extern char data_0207b2c4[];
extern char data_0207b418[];
extern char data_0207b428[];
extern char data_0207b448[];
extern char data_0207b454[];
extern char data_02087674[];
extern char data_020876c4[];
extern char data_02115b8c[];
extern char data_02115b9c[];
extern char data_02115bbc[];
extern char data_02115bc8[];
extern char data_02115bdc[];
extern char data_02115bec[];
extern char data_02115c0c[];
extern char data_02115c18[];
extern char data_02115c2c[];
extern char data_02115c3c[];
extern char data_02115c5c[];
extern char data_02115c68[];
extern char data_0215b3d4[];
extern char data_0215d5d8[];
extern char data_0215d5e8[];
extern char data_0215d608[];
extern char data_0215d614[];
// clang-format off
asm void func_020220c8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8c
    mov r4, r0
    ldr r0, [r4, #0x28c]
    cmp r0, #0x0
    bne L_020220f4
    ldr r0, [r4, #0x38c]
    cmp r0, #0x4
    moveq r7, #0x1
    movne r7, #0x2
    b L_0202212c
L_020220f4:
    ldr r1, [r4, #0x298]
    ldr r0, [r4, #0x390]
    subs r0, r1, r0
    beq L_02022118
    ldr r1, [r4, #0x29c]
    ldr r0, [r4, #0x394]
    subs r0, r1, r0
    movne r7, #0x0
    bne L_0202212c
L_02022118:
    ldr r0, [r4, #0x38c]
    sub r0, r0, #0x3
    cmp r0, #0x1
    movls r7, #0x1
    movhi r7, #0x2
L_0202212c:
    ldr r0, =data_0215b3d4
    ldr r0, [r0, #0x54]
    cmp r0, #0x1
    bne L_020223cc
    cmp r7, #0x0
    beq L_02022158
    cmp r7, #0x1
    beq L_02022224
    cmp r7, #0x2
    beq L_020222f8
    b L_02022660
L_02022158:
    ldr r9, =data_02115b8c
    ldr r8, =data_0215d5d8
    ldr r3, [r9, #0x0]
    ldr r2, [r9, #0x4]
    ldr r1, [r9, #0x8]
    ldr r0, [r9, #0xc]
    ldr r6, =data_02115b9c
    ldr r5, =data_0215d5e8
    str r3, [r8, #0x0]
    str r2, [r8, #0x4]
    str r1, [r8, #0x8]
    str r0, [r8, #0xc]
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, =data_02115bbc
    ldr r3, =data_0215d608
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r8, #0x48
    str r1, [sp, #0x14]
    add r1, r8, #0x49
    str r1, [sp, #0x10]
    add r1, r8, #0x4a
    str r1, [sp, #0xc]
    add r1, r8, #0x4b
    ldr r0, =data_02115bc8
    str r1, [sp, #0x68]
    ldrb r6, [r9, #0x48]
    ldrb r5, [r9, #0x49]
    ldrb lr, [r9, #0x4a]
    ldrb ip, [r9, #0x4b]
    ldrb r11, [r9, #0x4c]
    ldrb r3, [r9, #0x4d]
    add r10, r8, #0x4c
    add r9, r8, #0x4d
    ldr r8, =data_0215d614
    ldmia r0, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    ldr r0, [sp, #0x14]
    swpb r1, r6, [r0]
    ldr r0, [sp, #0x10]
    swpb r1, r5, [r0]
    ldr r0, [sp, #0xc]
    swpb r1, lr, [r0]
    ldr r0, [sp, #0x68]
    swpb r1, ip, [r0]
    swpb r0, r11, [r10]
    swpb r0, r3, [r9]
    b L_02022660
L_02022224:
    ldr r11, =data_02115bdc
    ldr r10, =data_0215d5d8
    ldr r3, [r11, #0x0]
    ldr r2, [r11, #0x4]
    ldr r1, [r11, #0x8]
    ldr r0, [r11, #0xc]
    ldr r6, =data_02115bec
    ldr r5, =data_0215d5e8
    str r3, [r10, #0x0]
    str r2, [r10, #0x4]
    str r1, [r10, #0x8]
    str r0, [r10, #0xc]
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, =data_02115c0c
    ldr r3, =data_0215d608
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r10, #0x48
    str r1, [sp, #0x20]
    add r1, r10, #0x49
    str r1, [sp, #0x1c]
    add r1, r10, #0x4a
    str r1, [sp, #0x18]
    add r1, r10, #0x4b
    str r1, [sp, #0x6c]
    ldrb r1, [r11, #0x4c]
    ldr r0, =data_02115c18
    add lr, r10, #0x4c
    add ip, r10, #0x4d
    str r1, [sp, #0x54]
    ldr r10, =data_0215d614
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    ldrb r9, [r11, #0x48]
    ldr r0, [sp, #0x20]
    ldrb r8, [r11, #0x49]
    swpb r1, r9, [r0]
    ldr r0, [sp, #0x1c]
    ldrb r6, [r11, #0x4a]
    swpb r1, r8, [r0]
    ldr r0, [sp, #0x18]
    ldrb r5, [r11, #0x4b]
    swpb r1, r6, [r0]
    ldr r0, [sp, #0x6c]
    ldrb r3, [r11, #0x4d]
    swpb r1, r5, [r0]
    ldr r0, [sp, #0x54]
    swpb r0, r0, [lr]
    swpb r0, r3, [ip]
    b L_02022660
L_020222f8:
    ldr r11, =data_02115c2c
    ldr r10, =data_0215d5d8
    ldr r3, [r11, #0x0]
    ldr r2, [r11, #0x4]
    ldr r1, [r11, #0x8]
    ldr r0, [r11, #0xc]
    ldr r6, =data_02115c3c
    ldr r5, =data_0215d5e8
    str r3, [r10, #0x0]
    str r2, [r10, #0x4]
    str r1, [r10, #0x8]
    str r0, [r10, #0xc]
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, =data_02115c5c
    ldr r3, =data_0215d608
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r10, #0x48
    str r1, [sp, #0x2c]
    add r1, r10, #0x49
    str r1, [sp, #0x28]
    add r1, r10, #0x4a
    str r1, [sp, #0x24]
    add r1, r10, #0x4b
    str r1, [sp, #0x70]
    ldrb r1, [r11, #0x4c]
    ldr r0, =data_02115c68
    add lr, r10, #0x4c
    add ip, r10, #0x4d
    str r1, [sp, #0x58]
    ldr r10, =data_0215d614
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    ldrb r9, [r11, #0x48]
    ldr r0, [sp, #0x2c]
    ldrb r8, [r11, #0x49]
    swpb r1, r9, [r0]
    ldr r0, [sp, #0x28]
    ldrb r6, [r11, #0x4a]
    swpb r1, r8, [r0]
    ldr r0, [sp, #0x24]
    ldrb r5, [r11, #0x4b]
    swpb r1, r6, [r0]
    ldr r0, [sp, #0x70]
    ldrb r3, [r11, #0x4d]
    swpb r1, r5, [r0]
    ldr r0, [sp, #0x58]
    swpb r0, r0, [lr]
    swpb r0, r3, [ip]
    b L_02022660
L_020223cc:
    cmp r7, #0x0
    beq L_020223e8
    cmp r7, #0x1
    beq L_020224bc
    cmp r7, #0x2
    beq L_02022590
    b L_02022660
L_020223e8:
    ldr r11, =data_0207b418
    ldr r10, =data_0215d5d8
    ldr r3, [r11, #0x0]
    ldr r2, [r11, #0x4]
    ldr r1, [r11, #0x8]
    ldr r0, [r11, #0xc]
    ldr r6, =data_0207b428
    ldr r5, =data_0215d5e8
    str r3, [r10, #0x0]
    str r2, [r10, #0x4]
    str r1, [r10, #0x8]
    str r0, [r10, #0xc]
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, =data_0207b448
    ldr r3, =data_0215d608
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r10, #0x48
    str r1, [sp, #0x38]
    add r1, r10, #0x49
    str r1, [sp, #0x34]
    add r1, r10, #0x4a
    str r1, [sp, #0x30]
    add r1, r10, #0x4b
    str r1, [sp, #0x74]
    ldrb r1, [r11, #0x4c]
    ldr r0, =data_0207b454
    add lr, r10, #0x4c
    add ip, r10, #0x4d
    str r1, [sp, #0x5c]
    ldr r10, =data_0215d614
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    ldrb r9, [r11, #0x48]
    ldr r0, [sp, #0x38]
    ldrb r8, [r11, #0x49]
    swpb r1, r9, [r0]
    ldr r0, [sp, #0x34]
    ldrb r6, [r11, #0x4a]
    swpb r1, r8, [r0]
    ldr r0, [sp, #0x30]
    ldrb r5, [r11, #0x4b]
    swpb r1, r6, [r0]
    ldr r0, [sp, #0x74]
    ldrb r3, [r11, #0x4d]
    swpb r1, r5, [r0]
    ldr r0, [sp, #0x5c]
    swpb r0, r0, [lr]
    swpb r0, r3, [ip]
    b L_02022660
L_020224bc:
    ldr r11, =data_0207b238
    ldr r10, =data_0215d5d8
    ldr r3, [r11, #0x0]
    ldr r2, [r11, #0x4]
    ldr r1, [r11, #0x8]
    ldr r0, [r11, #0xc]
    ldr r6, =data_0207b248
    ldr r5, =data_0215d5e8
    str r3, [r10, #0x0]
    str r2, [r10, #0x4]
    str r1, [r10, #0x8]
    str r0, [r10, #0xc]
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, =data_0207b268
    ldr r3, =data_0215d608
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r10, #0x48
    str r1, [sp, #0x44]
    add r1, r10, #0x49
    str r1, [sp, #0x40]
    add r1, r10, #0x4a
    str r1, [sp, #0x3c]
    add r1, r10, #0x4b
    str r1, [sp, #0x78]
    ldrb r1, [r11, #0x4c]
    ldr r0, =data_0207b274
    add lr, r10, #0x4c
    add ip, r10, #0x4d
    str r1, [sp, #0x60]
    ldr r10, =data_0215d614
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    ldrb r9, [r11, #0x48]
    ldr r0, [sp, #0x44]
    ldrb r8, [r11, #0x49]
    swpb r1, r9, [r0]
    ldr r0, [sp, #0x40]
    ldrb r6, [r11, #0x4a]
    swpb r1, r8, [r0]
    ldr r0, [sp, #0x3c]
    ldrb r5, [r11, #0x4b]
    swpb r1, r6, [r0]
    ldr r0, [sp, #0x78]
    ldrb r3, [r11, #0x4d]
    swpb r1, r5, [r0]
    ldr r0, [sp, #0x60]
    swpb r0, r0, [lr]
    swpb r0, r3, [ip]
    b L_02022660
L_02022590:
    ldr r11, =data_0207b288
    ldr r10, =data_0215d5d8
    ldr r3, [r11, #0x0]
    ldr r2, [r11, #0x4]
    ldr r1, [r11, #0x8]
    ldr r0, [r11, #0xc]
    ldr r6, =data_0207b298
    ldr r5, =data_0215d5e8
    str r3, [r10, #0x0]
    str r2, [r10, #0x4]
    str r1, [r10, #0x8]
    str r0, [r10, #0xc]
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, =data_0207b2b8
    ldr r3, =data_0215d608
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r10, #0x48
    str r1, [sp, #0x50]
    add r1, r10, #0x49
    str r1, [sp, #0x4c]
    add r1, r10, #0x4a
    str r1, [sp, #0x48]
    add r1, r10, #0x4b
    str r1, [sp, #0x7c]
    ldrb r1, [r11, #0x4c]
    ldr r0, =data_0207b2c4
    add lr, r10, #0x4c
    add ip, r10, #0x4d
    str r1, [sp, #0x64]
    ldr r10, =data_0215d614
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    ldrb r9, [r11, #0x48]
    ldr r0, [sp, #0x50]
    ldrb r8, [r11, #0x49]
    swpb r1, r9, [r0]
    ldr r0, [sp, #0x4c]
    ldrb r6, [r11, #0x4a]
    swpb r1, r8, [r0]
    ldr r0, [sp, #0x48]
    ldrb r5, [r11, #0x4b]
    swpb r1, r6, [r0]
    ldr r0, [sp, #0x7c]
    ldrb r3, [r11, #0x4d]
    swpb r1, r5, [r0]
    ldr r0, [sp, #0x64]
    swpb r0, r0, [lr]
    swpb r0, r3, [ip]
L_02022660:
    ldr r0, [r4, #0x28c]
    ldrb r6, [r4, #0x362]
    ldrb r5, [r4, #0x363]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_020226e4
L_02022678:
    b L_020226e4
    b L_020226d4
    b L_020226c0
    b L_020226e4
    b L_0202268c
L_0202268c:
    cmp r6, #0x0
    moveq r6, #0x1
    movne r6, #0x0
    cmp r7, #0x2
    mov r5, #0x1
    bne L_020226e4
    ldr r0, =data_0215d5d8
    mov r1, #0x0
    ldr r2, [r0, #0x44]
    str r1, [r0, #0x3c]
    rsb r1, r2, #0x0
    str r1, [r0, #0x44]
    b L_020226e4
L_020226c0:
    ldr r0, [r4, #0x38c]
    mov r6, #0x1
    cmp r0, #0x3
    moveq r5, r6
    b L_020226e4
L_020226d4:
    ldr r0, [r4, #0x38c]
    mov r6, #0x0
    cmp r0, #0x3
    moveq r5, #0x1
L_020226e4:
    mov r0, #0x380
    bl func_0203a6cc
    movs r7, r0
    beq L_02022728
    add r0, sp, #0x80
    mov r1, r4
    bl func_02021758
    str r6, [sp, #0x0]
    str r5, [sp, #0x4]
    mov r0, #0x1
    str r0, [sp, #0x8]
    add r2, sp, #0x80
    ldr r1, =data_0215d5d8
    mov r0, r7
    ldmia r2, {r2, r3}
    bl func_0202bff8
    mov r7, r0
L_02022728:
    mov r0, r7
    mov r1, #0x1
    bl func_01ffa554
    ldr r0, =data_0215b3d4
    ldr r1, [r0, #0x54]
    cmp r1, #0x1
    bne L_02022770
    mov r1, #0x3e8
    rsb r2, r1, #0x0
    mov r1, #0x3
    bl func_02014ba4
    bl func_0204cd18
    ldr r1, =data_020876c4
    mov r2, #0x0
    bl func_0204c8cc
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02022770:
    mov r1, #0x7d0
    rsb r2, r1, #0x0
    mov r1, #0x3
    bl func_02014ba4
    bl func_0204cd18
    ldr r1, =data_02087674
    mov r2, #0x0
    bl func_0204c8cc
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
