#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa43c();
extern void func_01ffa4ac();
extern void func_01ffa5b0();
extern void func_0200d2fc();
extern void func_0200d968();
extern void func_020115ac();
extern void func_020119e4();
extern void func_02012170();
extern void func_020121e8();
extern void func_02012478();
extern void func_02014ab0();
extern void func_020163dc();
extern void func_02016458();
extern void func_02017478();
extern void func_0201f7e8();
extern void func_0201fa80();
extern void func_020201d8();
extern void func_020204c4();
extern void func_02032eb4();
extern void func_0203333c();
extern void func_020334d4();
extern void func_02033664();
extern void func_0203476c();
extern void func_02034804();
extern void func_020357ec();
extern void func_020396ac();
extern void func_0203a6cc();
extern void func_0203b080();
extern void func_0203b4a0();
extern void func_02046478();
extern void func_020465f0();
extern void func_02049dac();
extern void func_0204a364();
extern void func_0204a5b8();
extern void func_0204af14();
extern void func_0204b68c();
extern void func_0204b80c();
extern void func_0204c2c8();
extern void func_0204d77c();
extern void func_0204d8ac();
extern void func_0204f0cc();
extern void r1();
extern char data_02076b04[];
extern char data_02124014[];
extern char data_02124030[];
extern char data_021278bc[];
extern char data_021581b0[];
extern char data_0215b3d4[];
extern char data_0215bf74[];
extern char data_0215c108[];
extern char data_0215c29c[];
extern char data_0215c430[];
extern char data_0215d690[];
extern char data_021605c4[];
extern char data_02160688[];
// clang-format off
asm void func_02034f94(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    ldr r2, =data_0215b3d4
    mov r5, r0
    ldr r0, [r2, #0x64]
    mov r6, r1
    mov r4, #0x0
    bl func_02014ab0
    cmp r0, #0x2
    beq L_0203500c
    ldrb r0, [r5, #0x59]
    cmp r0, #0x0
    beq L_02034fe0
    mov r0, #0x20
    bl func_0203a6cc
    movs r4, r0
    beq L_02034fe0
    bl func_0204b80c
    mov r4, r0
L_02034fe0:
    ldr r0, =data_0215b3d4
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1
    cmp r0, #0x4
    beq L_02035004
    cmp r0, #0x9
    beq L_02035004
    cmp r0, #0xd
    bne L_0203500c
L_02035004:
    mov r0, #0x18000
    bl func_02016458
L_0203500c:
    ldr r0, [r5, #0x5c]
    cmp r0, #0x0
    bne L_02035028
    ldr r0, =data_02124014
    mov r1, #0x0
    bl func_0204a5b8
    str r0, [r5, #0x5c]
L_02035028:
    ldr r0, [r5, #0x60]
    cmp r0, #0x0
    bne L_02035044
    ldr r0, =data_02124030
    mov r1, #0x0
    bl func_0204a5b8
    str r0, [r5, #0x60]
L_02035044:
    cmp r6, #0x0
    ble L_02035054
    ldr r0, =data_02076b04
    bl func_0201fa80
L_02035054:
    bl func_02017478
    bl func_02012478
    mov r0, r5
    mov r1, r6
    bl func_0200d2fc
    ldr r0, =data_021581b0
    mov r1, #0x0
    str r1, [r0, #0x0]
    bl func_020357ec
    ldr r0, [r5, #0x34]
    ldr r0, [r0, #0x4]
    bl func_020396ac
    bl func_0203b4a0
    ldr r0, =data_0215bf74
    bl func_020204c4
    ldr r0, =data_0215c29c
    bl func_020204c4
    ldr r0, =data_0215c108
    bl func_020204c4
    ldr r0, =data_0215c430
    bl func_020204c4
    ldr r0, =data_02160688
    ldr r1, [r5, #0x34]
    ldr r1, [r1, #0x0]
    bl func_0204f0cc
    bl func_0204c2c8
    mov r0, #0x4
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_020350d0
    bl func_0204d77c
L_020350d0:
    mov r0, #0x4
    bl func_0203a6cc
    cmp r0, #0x0
    beq L_020350e4
    bl func_0204d8ac
L_020350e4:
    mov r0, r5
    bl func_0203476c
    mov r0, #0xc
    bl func_0203a6cc
    str r0, [r5, #0x3c]
    ldr r0, [r5, #0x3c]
    ldr r1, =data_021278bc
    mov r2, #0x0
    str r1, [r0, #0x0]
    ldr r1, [r5, #0x3c]
    mov r0, #0x8
    strh r2, [r1, #0x4]
    ldr r1, [r5, #0x3c]
    strh r2, [r1, #0x6]
    bl func_0203a6cc
    movs r1, r0
    beq L_02035134
    ldr r1, [r5, #0x3c]
    bl func_0204b68c
    mov r1, r0
L_02035134:
    mov r0, r5
    mov r2, #0x1
    bl func_0201f7e8
    ldr r1, [r5, #0x34]
    add r0, sp, #0x0
    ldr r1, [r1, #0xc]
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0x0]
    bl func_0204af14
    mov r0, #0x1c
    bl func_0203a6cc
    movs r6, r0
    beq L_02035178
    add r2, sp, #0x0
    mov r1, #0x0
    bl func_020465f0
    mov r6, r0
L_02035178:
    mov r0, r5
    mov r1, r6
    mov r2, #0x1
    bl func_0201f7e8
    ldr r0, =0x85c
    bl func_0203a6cc
    movs r1, r0
    beq L_020351ac
    ldr r2, [r5, #0x34]
    ldr r1, [r2, #0x2c]
    ldr r2, [r2, #0x30]
    bl func_02049dac
    mov r1, r0
L_020351ac:
    mov r0, r6
    mov r2, #0x0
    mov r3, #0x1
    bl func_02046478
    mov r0, #0x16c
    bl func_0203a6cc
    movs r1, r0
    beq L_020351dc
    ldr r1, [r5, #0x34]
    ldr r1, [r1, #0x2c]
    bl func_0204a364
    mov r1, r0
L_020351dc:
    mov r0, r6
    mov r2, #0x2
    mov r3, #0x1
    bl func_02046478
    ldr r0, [r5, #0x34]
    ldr r0, [r0, #0x20]
    bl func_020119e4
    ldr r0, [r5, #0x34]
    ldr r0, [r0, #0x20]
    bl func_0200d968
    ldr r0, [r5, #0x34]
    mov r1, #0x1
    ldr r0, [r0, #0x20]
    bl func_020115ac
    bl func_0203b080
    ldr r0, [r5, #0x34]
    mov r1, #0x1
    ldr r0, [r0, #0x20]
    bl func_020115ac
    bl func_020121e8
    mov r0, #0x0
    bl func_01ffa4ac
    bl func_01ffa5b0
    cmp r0, #0x0
    beq L_020352b8
    bl func_01ffa43c
    ldr r6, =data_021605c4
    add r1, r0, #0x200
    ldrh r3, [r1, #0x96]
    ldrh r2, [r1, #0x94]
    ldrb r1, [r0, #0x362]
    ldr r10, [r0, #0x29c]
    ldr r9, [r0, #0x298]
    mov r8, #0x0
    add r7, r3, r3, lsr #0x1f
    add r0, r6, #0x40
    add lr, r6, #0x42
    add r7, r10, r7, asr #0x1
    rsb r10, r7, #0x0
    add ip, r6, #0x41
    mov r7, #0x1
    swpb r1, r1, [r0]
    swpb r0, r7, [ip]
    swpb r0, r8, [lr]
    str r9, [r6, #0x4]
    str r10, [r6, #0x8]
    str r2, [r6, #0xc]
    str r3, [r6, #0x10]
    str r8, [r6, #0x14]
    str r8, [r6, #0x18]
    str r8, [r6, #0x1c]
    str r8, [r6, #0x20]
    str r8, [r6, #0x24]
    str r8, [r6, #0x3c]
    str r8, [r6, #0x44]
L_020352b8:
    ldr r1, [r5, #0x34]
    mov r0, r5
    bl func_02034804
    bl func_0203b080
    bl func_02012170
    cmp r4, #0x0
    beq L_020352e4
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_020352e4:
    ldr r0, [r5, #0x34]
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    beq L_02035314
    mov r0, #0x1
    bl func_020163dc
    ldr r0, [r5, #0x34]
    mov r1, #0x0
    ldr r0, [r0, #0x24]
    bl func_02033664
    mov r0, #0x0
    bl func_020163dc
L_02035314:
    ldr r0, [r5, #0x34]
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    beq L_02035384
    ldr r0, =data_0215d690
    ldr r0, [r0, #0x0]
    bl func_02032eb4
    ldr r1, [r0, #0x0]
    ldr r0, =data_0215d690
    add r1, r1, #0x4b0000
    str r1, [r5, #0x50]
    ldr r0, [r0, #0x0]
    bl func_02032eb4
    ldr r1, [r0, #0x4]
    ldr r0, =data_0215d690
    add r1, r1, #0xc000
    str r1, [r5, #0x54]
    ldr r0, [r0, #0x0]
    ldr r1, [r5, #0x50]
    ldr r2, [r5, #0x54]
    bl func_0203333c
    ldr r0, =data_0215d690
    ldr r0, [r0, #0x0]
    bl func_020334d4
    mov r0, #0x0
    str r0, [r5, #0x44]
    str r0, [r5, #0x48]
    str r0, [r5, #0x4c]
L_02035384:
    bl func_020201d8
    ldrh r0, [r0, #0x0]
    strh r0, [r5, #0x64]
    bl func_020201d8
    mov r1, #0x0
    strh r1, [r0, #0x0]
    mov r1, #0x4000000
    ldr r0, [r1, #0x0]
    bic r0, r0, #0x1f00
    orr r0, r0, #0x1100
    str r0, [r1, #0x0]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
