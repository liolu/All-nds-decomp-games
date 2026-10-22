/* compiler: 1.2/sp2p3  */
#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203ab44();
extern void func_0203d8dc();
extern void func_0203da50();
extern void func_0203fe2c();
extern void func_02041af0();
extern void func_02041c48();
extern void func_02041e44();
extern char data_0208409c[];
extern char data_02124568[];
extern char data_02124580[];
extern char data_0212459c[];
extern char data_021245b0[];
extern char data_021245cc[];
extern char data_021245e0[];
extern char data_021245f4[];
extern char data_02124614[];
extern char data_02124638[];
extern char data_02124654[];
extern char data_02124670[];
extern char data_0212468c[];
extern char data_021246a4[];
extern char data_021246c0[];
extern char data_021246d8[];
extern char data_021246f8[];
extern char data_02124710[];
// clang-format off
asm void func_020403c0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xfc
    movs r9, r0
    str r1, [sp, #0x8]
    beq L_02040404
    ldr r8, [r9, #0x1c]
    cmp r8, #0x0
    beq L_02040404
    ldr r0, [r9, #0xc]
    cmp r0, #0x0
    beq L_02040404
    ldr r0, [r9, #0x0]
    cmp r0, #0x0
    bne L_02040414
    ldr r0, [r9, #0x4]
    cmp r0, #0x0
    beq L_02040414
L_02040404:
    add sp, sp, #0xfc
    mvn r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02040414:
    ldr r0, [r8, #0x0]
    cmp r0, #0xb
    moveq r0, #0xc
    streq r0, [r8, #0x0]
    ldr r0, [r9, #0x10]
    ldr r6, [r9, #0x4]
    str r0, [sp, #0xc]
    str r0, [sp, #0x14]
    mov r0, #0x0
    str r0, [sp, #0x1c]
    str r0, [sp, #0xb0]
    str r0, [sp, #0xc8]
    str r0, [sp, #0xc4]
    mov r0, #0x1
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x1c]
    ldr r11, [r9, #0xc]
    str r0, [sp, #0xdc]
    mov r0, #0x19
    str r0, [sp, #0xe0]
    mov r0, #0x16
    str r0, [sp, #0xd8]
    mov r0, #0x15
    str r0, [sp, #0xd4]
    mov r0, #0x13
    str r0, [sp, #0xb8]
    mov r0, #0x14
    str r0, [sp, #0xd0]
    mov r0, #0x12
    str r0, [sp, #0x98]
    mov r0, #0x6
    str r0, [sp, #0x68]
    mov r0, #0x2
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x1c]
    ldr r7, [r9, #0x0]
    str r0, [sp, #0xbc]
    mov r0, #0x11
    str r0, [sp, #0xc0]
    mov r0, #0x1b
    str r0, [sp, #0x3c]
    mov r0, #0x9
    str r0, [sp, #0x40]
    ldr r0, [sp, #0x1c]
    ldr r5, [r8, #0x30]
    str r0, [sp, #0xa8]
    mov r0, #0x10
    str r0, [sp, #0xac]
    mov r0, #0x7
    str r0, [sp, #0x70]
    ldr r0, [sp, #0x1c]
    ldr r4, [r8, #0x34]
    str r0, [sp, #0xb4]
    str r0, [sp, #0xa0]
    mov r0, #0xe
    str r0, [sp, #0xa4]
    mov r0, #0xf
    str r0, [sp, #0x9c]
    mov r0, #0xd
    str r0, [sp, #0x94]
    ldr r0, [sp, #0x1c]
    str r6, [sp, #0x10]
    str r0, [sp, #0x84]
    mov r0, #0xa
    str r0, [sp, #0x88]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x8c]
    mov r0, #0xb
    str r0, [sp, #0x44]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x7c]
    str r0, [sp, #0x4c]
    mov r0, #0x4
    str r0, [sp, #0x50]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x54]
    mov r0, #0x3
    str r0, [sp, #0x58]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x5c]
    str r0, [sp, #0x60]
    mov r0, #0x5
    str r0, [sp, #0x64]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x6c]
    str r0, [sp, #0x74]
    mov r0, #0x8
    str r0, [sp, #0x78]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x38]
    mov r0, #0xc
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x1c]
    str r0, [sp, #0x28]
    str r0, [sp, #0x30]
    str r0, [sp, #0x48]
    str r0, [sp, #0x80]
    mov r0, #0x18
    str r0, [sp, #0x90]
    mov r0, #0x17
    str r0, [sp, #0xcc]
L_020405a8:
    ldr r0, [r8, #0x0]
    cmp r0, #0x1d
    addls pc, pc, r0, lsl #0x2
    b L_02041940
L_020405b8:
    b L_02040630
    b L_020407a8
    b L_0204084c
    b L_020408d0
    b L_0204093c
    b L_020409b8
    b L_02040a20
    b L_02040a8c
    b L_02040af8
    b L_02040b80
    b L_02040be8
    b L_02040c44
    b L_02040c50
    b L_02040d10
    b L_02040d7c
    b L_02040dec
    b L_02040ee8
    b L_02040fa0
    b L_0204129c
    b L_02041444
    b L_020414ac
    b L_02041630
    b L_020416c8
    b L_02041780
    b L_020417ac
    b L_020418ac
    b L_02041918
    b L_02041924
    b L_02041930
    b L_02041940
L_02040630:
    ldr r1, [r8, #0x8]
    cmp r1, #0x0
    ldreq r0, [sp, #0x24]
    streq r0, [r8, #0x0]
    beq L_020405a8
    cmp r4, #0x10
    bhs L_0204066c
L_0204064c:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_0204064c
L_0204066c:
    ands r0, r1, #0x2
    beq L_020406d0
    ldr r0, =0x8b1f
    cmp r5, r0
    bne L_020406d0
    ldr r0, [sp, #0x28]
    mov r1, r0
    mov r2, r0
    bl func_0203da50
    str r0, [r8, #0x14]
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0203da50
    str r0, [r8, #0x14]
    ldr r0, [sp, #0x34]
    ldr r5, [sp, #0x30]
    str r0, [r8, #0x0]
    mov r4, r5
    b L_020405a8
L_020406d0:
    ldr r0, [sp, #0x38]
    str r0, [r8, #0x10]
    ldr r0, [r8, #0x8]
    ands r0, r0, #0x1
    beq L_02040714
    and r0, r5, #0xff
    mov r0, r0, lsl #0x8
    ldr r1, =0x8421085
    add r0, r0, r5, lsr #0x8
    umull r1, r2, r0, r1
    sub r1, r0, r2
    add r2, r2, r1, lsr #0x1
    ldr r1, =0x1f
    mov r2, r2, lsr #0x4
    umull r2, r3, r1, r2
    subs r2, r0, r2
    beq L_02040728
L_02040714:
    ldr r0, =data_02124568
    str r0, [r9, #0x18]
    ldr r0, [sp, #0x3c]
    str r0, [r8, #0x0]
    b L_020405a8
L_02040728:
    and r0, r5, #0xf
    cmp r0, #0x8
    ldrne r0, =data_02124580
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    mov r5, r5, lsr #0x4
    and r0, r5, #0xf
    add r1, r0, #0x8
    ldr r0, [r8, #0x1c]
    sub r4, r4, #0x4
    cmp r1, r0
    ldrhi r0, =data_0212459c
    strhi r0, [r9, #0x18]
    ldrhi r0, [sp, #0x3c]
    strhi r0, [r8, #0x0]
    bhi L_020405a8
    ldr r0, [sp, #0x38]
    mov r1, r0
    mov r2, r0
    bl func_0203d8dc
    str r0, [r8, #0x14]
    ands r0, r5, #0x200
    ldr r0, [r8, #0x14]
    ldr r5, [sp, #0x48]
    str r0, [r9, #0x30]
    ldrne r0, [sp, #0x40]
    mov r4, r5
    ldreq r0, [sp, #0x44]
    str r0, [r8, #0x0]
    b L_020405a8
L_020407a8:
    cmp r4, #0x10
    bhs L_020407d0
L_020407b0:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_020407b0
L_020407d0:
    str r5, [r8, #0x10]
    ldr r1, [r8, #0x10]
    and r0, r1, #0xff
    cmp r0, #0x8
    ldrne r0, =data_02124580
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ands r0, r1, #0xe000
    ldrne r0, =data_021245b0
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ands r0, r1, #0x200
    beq L_0204083c
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0203da50
    str r0, [r8, #0x14]
L_0204083c:
    ldr r0, [sp, #0x2c]
    ldr r5, [sp, #0x4c]
    str r0, [r8, #0x0]
    mov r4, r5
L_0204084c:
    cmp r4, #0x20
    bhs L_02040874
L_02040854:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_02040854
L_02040874:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_020408c0
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    add r0, sp, #0xee
    mov r1, r5, lsr #0x10
    swpb r1, r1, [r0]
    add r0, sp, #0xef
    mov r1, r5, lsr #0x18
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x50]
    add r1, sp, #0xec
    bl func_0203da50
    str r0, [r8, #0x14]
L_020408c0:
    ldr r0, [sp, #0x58]
    ldr r5, [sp, #0x54]
    str r0, [r8, #0x0]
    mov r4, r5
L_020408d0:
    cmp r4, #0x10
    bhs L_020408f8
L_020408d8:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_020408d8
L_020408f8:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_0204092c
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0203da50
    str r0, [r8, #0x14]
L_0204092c:
    ldr r0, [sp, #0x50]
    ldr r5, [sp, #0x5c]
    str r0, [r8, #0x0]
    mov r4, r5
L_0204093c:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x400
    beq L_020409b0
    cmp r4, #0x10
    bhs L_02040970
L_02040950:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_02040950
L_02040970:
    str r5, [r8, #0x38]
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_020409a8
    add r0, sp, #0xec
    swpb r1, r5, [r0]
    add r0, sp, #0xed
    mov r1, r5, lsr #0x8
    swpb r1, r1, [r0]
    ldr r0, [r8, #0x14]
    ldr r2, [sp, #0x2c]
    add r1, sp, #0xec
    bl func_0203da50
    str r0, [r8, #0x14]
L_020409a8:
    ldr r5, [sp, #0x60]
    mov r4, r5
L_020409b0:
    ldr r0, [sp, #0x64]
    str r0, [r8, #0x0]
L_020409b8:
    ldr r1, [r8, #0x10]
    ands r0, r1, #0x400
    beq L_02040a18
    ldr r10, [r8, #0x38]
    cmp r10, r6
    movhi r10, r6
    cmp r10, #0x0
    beq L_02040a0c
    ands r0, r1, #0x200
    beq L_020409f4
    ldr r0, [r8, #0x14]
    mov r1, r7
    mov r2, r10
    bl func_0203da50
    str r0, [r8, #0x14]
L_020409f4:
    sub r6, r6, r10
    add r7, r7, r10
    add r1, r8, #0x38
    ldr r0, [r1, #0x0]
    sub r0, r0, r10
    str r0, [r1, #0x0]
L_02040a0c:
    ldr r0, [r8, #0x38]
    cmp r0, #0x0
    bne L_02041950
L_02040a18:
    ldr r0, [sp, #0x68]
    str r0, [r8, #0x0]
L_02040a20:
    ldr r1, [r8, #0x10]
    ands r0, r1, #0x800
    beq L_02040a84
    cmp r6, #0x0
    beq L_02041950
    ldr r10, [sp, #0x6c]
L_02040a38:
    ldrb r0, [r7, r10]
    add r10, r10, #0x1
    str r0, [sp, #0x18]
    cmp r0, #0x0
    beq L_02040a54
    cmp r10, r6
    blo L_02040a38
L_02040a54:
    ands r0, r1, #0x2000
    beq L_02040a70
    ldr r0, [r8, #0x14]
    mov r1, r7
    mov r2, r10
    bl func_0203da50
    str r0, [r8, #0x14]
L_02040a70:
    ldr r0, [sp, #0x18]
    sub r6, r6, r10
    cmp r0, #0x0
    add r7, r7, r10
    bne L_02041950
L_02040a84:
    ldr r0, [sp, #0x70]
    str r0, [r8, #0x0]
L_02040a8c:
    ldr r1, [r8, #0x10]
    ands r0, r1, #0x1000
    beq L_02040af0
    cmp r6, #0x0
    beq L_02041950
    ldr r10, [sp, #0x74]
L_02040aa4:
    ldrb r0, [r7, r10]
    add r10, r10, #0x1
    str r0, [sp, #0x20]
    cmp r0, #0x0
    beq L_02040ac0
    cmp r10, r6
    blo L_02040aa4
L_02040ac0:
    ands r0, r1, #0x2000
    beq L_02040adc
    ldr r0, [r8, #0x14]
    mov r1, r7
    mov r2, r10
    bl func_0203da50
    str r0, [r8, #0x14]
L_02040adc:
    ldr r0, [sp, #0x20]
    sub r6, r6, r10
    cmp r0, #0x0
    add r7, r7, r10
    bne L_02041950
L_02040af0:
    ldr r0, [sp, #0x78]
    str r0, [r8, #0x0]
L_02040af8:
    ldr r0, [r8, #0x10]
    ands r0, r0, #0x200
    beq L_02040b58
    cmp r4, #0x10
    bhs L_02040b2c
L_02040b0c:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x10
    blo L_02040b0c
L_02040b2c:
    ldr r1, [r8, #0x14]
    ldr r0, =0xffff
    and r0, r1, r0
    cmp r5, r0
    ldrne r0, =data_021245cc
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ldr r5, [sp, #0x7c]
    mov r4, r5
L_02040b58:
    ldr r0, [sp, #0x80]
    mov r1, r0
    mov r2, r0
    bl func_0203da50
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
    ldr r0, [sp, #0x44]
    str r0, [r8, #0x0]
    b L_020405a8
L_02040b80:
    cmp r4, #0x20
    bhs L_02040ba8
L_02040b88:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_02040b88
L_02040ba8:
    mov r2, r5, lsr #0x18
    and r3, r2, #0xff
    mov r2, r5, lsr #0x8
    and r2, r2, #0xff00
    and r0, r5, #0xff00
    add r2, r3, r2
    and r1, r5, #0xff
    add r0, r2, r0, lsl #0x8
    add r0, r0, r1, lsl #0x18
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    ldr r5, [sp, #0x84]
    str r0, [r9, #0x30]
    ldr r0, [sp, #0x88]
    mov r4, r5
    str r0, [r8, #0x0]
L_02040be8:
    ldr r0, [r8, #0xc]
    cmp r0, #0x0
    bne L_02040c20
    ldr r0, [sp, #0xc]
    str r11, [r9, #0xc]
    str r0, [r9, #0x10]
    str r7, [r9, #0x0]
    str r6, [r9, #0x4]
    str r5, [r8, #0x30]
    add sp, sp, #0xfc
    str r4, [r8, #0x34]
    mov r0, #0x2
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02040c20:
    ldr r0, [sp, #0x8c]
    mov r1, r0
    mov r2, r0
    bl func_0203d8dc
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
    ldr r0, [sp, #0x44]
    str r0, [r8, #0x0]
L_02040c44:
    ldr r0, [sp, #0x8]
    cmp r0, #0x5
    beq L_02041950
L_02040c50:
    ldr r0, [r8, #0x4]
    cmp r0, #0x0
    beq L_02040c74
    ldr r0, [sp, #0x90]
    str r0, [r8, #0x0]
    and r0, r4, #0x7
    mov r5, r5, lsr r0
    sub r4, r4, r0
    b L_020405a8
L_02040c74:
    cmp r4, #0x3
    bhs L_02040c9c
L_02040c7c:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x3
    blo L_02040c7c
L_02040c9c:
    and r0, r5, #0x1
    str r0, [r8, #0x4]
    mov r0, r5, lsr #0x1
    and r0, r0, #0x3
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02040d04
L_02040cb8:
    b L_02040cc8
    b L_02040cd4
    b L_02040ce8
    b L_02040cf4
L_02040cc8:
    ldr r0, [sp, #0x94]
    str r0, [r8, #0x0]
    b L_02040d04
L_02040cd4:
    mov r0, r8
    bl func_02041c48
    ldr r0, [sp, #0x98]
    str r0, [r8, #0x0]
    b L_02040d04
L_02040ce8:
    ldr r0, [sp, #0x9c]
    str r0, [r8, #0x0]
    b L_02040d04
L_02040cf4:
    ldr r0, =data_021245e0
    str r0, [r9, #0x18]
    ldr r0, [sp, #0x3c]
    str r0, [r8, #0x0]
L_02040d04:
    mov r5, r5, lsr #0x3
    sub r4, r4, #0x3
    b L_020405a8
L_02040d10:
    and r0, r4, #0x7
    mov r5, r5, lsr r0
    sub r4, r4, r0
    cmp r4, #0x20
    bhs L_02040d44
L_02040d24:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_02040d24
L_02040d44:
    ldr r0, =0xffff
    and r1, r5, r0
    eor r0, r0, r5, lsr #0x10
    cmp r1, r0
    ldrne r0, =data_021245f4
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ldr r5, [sp, #0xa0]
    ldr r0, [sp, #0xa4]
    str r1, [r8, #0x38]
    str r0, [r8, #0x0]
    mov r4, r5
L_02040d7c:
    ldr r10, [r8, #0x38]
    cmp r10, #0x0
    beq L_02040de0
    ldr r0, [sp, #0xc]
    cmp r10, r6
    movhi r10, r6
    cmp r10, r0
    movhi r10, r0
    cmp r10, #0x0
    beq L_02041950
    mov r0, r11
    mov r1, r7
    mov r2, r10
    bl func_0203ab44
    ldr r0, [sp, #0xc]
    add r1, r8, #0x38
    sub r0, r0, r10
    str r0, [sp, #0xc]
    ldr r0, [r1, #0x0]
    sub r6, r6, r10
    sub r0, r0, r10
    add r7, r7, r10
    add r11, r11, r10
    str r0, [r1, #0x0]
    b L_020405a8
L_02040de0:
    ldr r0, [sp, #0x44]
    str r0, [r8, #0x0]
    b L_020405a8
L_02040dec:
    cmp r4, #0xe
    bhs L_02040e14
L_02040df4:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0xe
    blo L_02040df4
L_02040e14:
    ldr r0, =0x101
    and r1, r5, #0x1f
    add r0, r1, r0
    str r0, [r8, #0x58]
    mov r0, r5, lsr #0x5
    and r0, r0, #0x1f
    add r0, r0, #0x1
    str r0, [r8, #0x5c]
    mov r0, r5, lsr #0xa
    and r0, r0, #0xf
    add r0, r0, #0x4
    str r0, [r8, #0x54]
    ldr r1, [r8, #0x58]
    ldr r0, =0x11e
    mov r5, r5, lsr #0xe
    sub r4, r4, #0xe
    cmp r1, r0
    bhi L_02040e68
    ldr r0, [r8, #0x5c]
    cmp r0, #0x1e
    bls L_02040e7c
L_02040e68:
    ldr r0, =data_02124614
    str r0, [r9, #0x18]
    ldr r0, [sp, #0x3c]
    str r0, [r8, #0x0]
    b L_020405a8
L_02040e7c:
    ldr r0, [sp, #0xa8]
    str r0, [r8, #0x60]
    ldr r0, [sp, #0xac]
    str r0, [r8, #0x0]
    b L_02040ee8
L_02040e90:
    cmp r4, #0x3
    bhs L_02040eb8
L_02040e98:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x3
    blo L_02040e98
L_02040eb8:
    add r3, r8, #0x60
    ldr r0, [r3, #0x0]
    and r2, r5, #0x7
    add r0, r0, #0x1
    str r0, [r3, #0x0]
    ldr r0, =data_0208409c
    mov r1, r1, lsl #0x1
    ldrh r0, [r0, r1]
    mov r5, r5, lsr #0x3
    sub r4, r4, #0x3
    add r0, r8, r0, lsl #0x1
    strh r2, [r0, #0x68]
L_02040ee8:
    ldr r1, [r8, #0x60]
    ldr r0, [r8, #0x54]
    cmp r1, r0
    blo L_02040e90
    cmp r1, #0x13
    bhs L_02040f34
L_02040f00:
    add r2, r8, #0x60
    ldr r0, [r2, #0x0]
    mov r1, r1, lsl #0x1
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    ldr r0, =data_0208409c
    ldrh r0, [r0, r1]
    add r1, r8, r0, lsl #0x1
    ldr r0, [sp, #0xb0]
    strh r0, [r1, #0x68]
    ldr r1, [r8, #0x60]
    cmp r1, #0x13
    blo L_02040f00
L_02040f34:
    ldr r0, =0x528
    add r1, r8, #0x4c
    add r0, r8, r0
    str r0, [r8, #0x64]
    ldr r0, [r8, #0x64]
    ldr r2, [sp, #0xb8]
    str r0, [r8, #0x44]
    ldr r0, [sp, #0x70]
    add r3, r8, #0x64
    str r0, [r8, #0x4c]
    str r1, [sp, #0x0]
    add r0, r8, #0x2e8
    str r0, [sp, #0x4]
    ldr r0, [sp, #0xb4]
    add r1, r8, #0x68
    bl func_02041e44
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    ldrne r0, =data_02124638
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ldr r0, [sp, #0xbc]
    str r0, [r8, #0x60]
    ldr r0, [sp, #0xc0]
    str r0, [r8, #0x0]
L_02040fa0:
    ldr r1, [r8, #0x58]
    ldr r0, [r8, #0x5c]
    ldr r2, [r8, #0x60]
    add r1, r1, r0
    cmp r2, r1
    bhs L_020411e0
L_02040fb8:
    ldr r3, [r8, #0x4c]
    ldr r0, [sp, #0x34]
    ldr r10, [r8, #0x44]
    mov r0, r0, lsl r3
    sub r0, r0, #0x1
    and r0, r5, r0
    mov r3, r0, lsl #0x2
    add r0, r10, r0, lsl #0x2
    ldrh r3, [r10, r3]
    ldrh r0, [r0, #0x2]
    strh r3, [sp, #0xe4]
    strh r0, [sp, #0xe6]
    ldrb r0, [sp, #0xe5]
    cmp r4, r0
    bhs L_02041010
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    b L_02040fb8
L_02041010:
    ldrh r3, [sp, #0xe6]
    cmp r3, #0x10
    bhs L_02041068
    cmp r4, r0
    bhs L_02041044
L_02041024:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r1, [r7], #0x1
    add r5, r5, r1, lsl r4
    add r4, r4, #0x8
    cmp r4, r0
    blo L_02041024
L_02041044:
    add r1, r8, r2, lsl #0x1
    mov r5, r5, lsr r0
    sub r4, r4, r0
    add r2, r8, #0x60
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    strh r3, [r1, #0x68]
    b L_020411c8
L_02041068:
    cmp r3, #0x10
    bne L_020410dc
    add r10, r0, #0x2
    cmp r4, r10
    bhs L_0204109c
L_0204107c:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    cmp r4, r10
    blo L_0204107c
L_0204109c:
    cmp r2, #0x0
    mov r5, r5, lsr r0
    sub r4, r4, r0
    ldreq r0, =data_02124654
    streq r0, [r9, #0x18]
    ldreq r0, [sp, #0x3c]
    streq r0, [r8, #0x0]
    beq L_020411e0
    sub r0, r2, #0x1
    add r0, r8, r0, lsl #0x1
    ldrh r0, [r0, #0x68]
    and r3, r5, #0x3
    add r3, r3, #0x3
    mov r5, r5, lsr #0x2
    sub r4, r4, #0x2
    b L_02041178
L_020410dc:
    cmp r3, #0x11
    bne L_02041130
    add r10, r0, #0x3
    cmp r4, r10
    bhs L_02041110
L_020410f0:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    cmp r4, r10
    blo L_020410f0
L_02041110:
    mov r5, r5, lsr r0
    and r3, r5, #0x7
    sub r0, r4, r0
    sub r4, r0, #0x3
    ldr r0, [sp, #0xc4]
    add r3, r3, #0x3
    mov r5, r5, lsr #0x3
    b L_02041178
L_02041130:
    add r10, r0, #0x7
    cmp r4, r10
    bhs L_0204115c
L_0204113c:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    cmp r4, r10
    blo L_0204113c
L_0204115c:
    mov r5, r5, lsr r0
    and r3, r5, #0x7f
    sub r0, r4, r0
    sub r4, r0, #0x7
    ldr r0, [sp, #0xc8]
    add r3, r3, #0xb
    mov r5, r5, lsr #0x7
L_02041178:
    add r2, r2, r3
    cmp r2, r1
    ldrhi r0, =data_02124654
    strhi r0, [r9, #0x18]
    ldrhi r0, [sp, #0x3c]
    strhi r0, [r8, #0x0]
    bhi L_020411e0
    cmp r3, #0x0
    sub r3, r3, #0x1
    beq L_020411c8
L_020411a0:
    add r1, r8, #0x60
    ldr r10, [r1, #0x0]
    ldr r2, [r8, #0x60]
    add r10, r10, #0x1
    add r2, r8, r2, lsl #0x1
    str r10, [r1, #0x0]
    cmp r3, #0x0
    strh r0, [r2, #0x68]
    sub r3, r3, #0x1
    bne L_020411a0
L_020411c8:
    ldr r1, [r8, #0x58]
    ldr r0, [r8, #0x5c]
    ldr r2, [r8, #0x60]
    add r1, r1, r0
    cmp r2, r1
    blo L_02040fb8
L_020411e0:
    ldr r0, =0x528
    add r1, r8, #0x4c
    add r0, r8, r0
    str r0, [r8, #0x64]
    ldr r0, [r8, #0x64]
    add r3, r8, #0x64
    str r0, [r8, #0x44]
    ldr r0, [sp, #0x40]
    str r0, [r8, #0x4c]
    str r1, [sp, #0x0]
    add r0, r8, #0x2e8
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x34]
    ldr r2, [r8, #0x58]
    add r1, r8, #0x68
    bl func_02041e44
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    ldrne r0, =data_02124670
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ldr r0, [r8, #0x64]
    add r1, r8, #0x50
    str r0, [r8, #0x48]
    ldr r0, [sp, #0x68]
    add r3, r8, #0x68
    str r0, [r8, #0x50]
    str r1, [sp, #0x0]
    add r0, r8, #0x2e8
    str r0, [sp, #0x4]
    ldr r1, [r8, #0x58]
    ldr r0, [sp, #0x2c]
    add r1, r3, r1, lsl #0x1
    ldr r2, [r8, #0x5c]
    add r3, r8, #0x64
    bl func_02041e44
    str r0, [sp, #0x1c]
    cmp r0, #0x0
    ldrne r0, =data_0212468c
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ldr r0, [sp, #0x98]
    str r0, [r8, #0x0]
L_0204129c:
    cmp r6, #0x6
    blo L_020412fc
    ldr r1, [sp, #0xc]
    ldr r0, =0x102
    cmp r1, r0
    blo L_020412fc
    mov r0, r1
    str r11, [r9, #0xc]
    str r0, [r9, #0x10]
    str r7, [r9, #0x0]
    str r6, [r9, #0x4]
    str r5, [r8, #0x30]
    ldr r1, [sp, #0x14]
    str r4, [r8, #0x34]
    mov r0, r9
    bl func_0203fe2c
    ldr r0, [r9, #0x10]
    ldr r11, [r9, #0xc]
    str r0, [sp, #0xc]
    ldr r7, [r9, #0x0]
    ldr r6, [r9, #0x4]
    ldr r5, [r8, #0x30]
    ldr r4, [r8, #0x34]
    b L_020405a8
L_020412fc:
    ldr r1, [r8, #0x4c]
    ldr r0, [sp, #0x34]
    ldr r2, [r8, #0x44]
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
L_02041310:
    and r1, r5, r0
    mov r3, r1, lsl #0x2
    add r1, r2, r1, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r1, [r1, #0x2]
    strh r3, [sp, #0xf4]
    strh r1, [sp, #0xf6]
    ldrb r10, [sp, #0xf5]
    cmp r4, r10
    bhs L_02041354
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r1, [r7], #0x1
    add r5, r5, r1, lsl r4
    add r4, r4, #0x8
    b L_02041310
L_02041354:
    ldrb r0, [sp, #0xf4]
    cmp r0, #0x0
    beq L_020413e8
    ands r0, r0, #0xf0
    bne L_020413e8
    ldrh r1, [sp, #0xf4]
    ldrh r0, [sp, #0xf6]
    strh r1, [sp, #0xe8]
    strh r0, [sp, #0xea]
    ldrb r1, [sp, #0xe9]
    ldrb r0, [sp, #0xe8]
    ldrh ip, [sp, #0xea]
    add r3, r1, r0
    ldr r0, [sp, #0x34]
    mov r0, r0, lsl r3
    sub r0, r0, #0x1
L_02041394:
    and r3, r5, r0
    add r10, ip, r3, lsr r1
    mov r3, r10, lsl #0x2
    add r10, r2, r10, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r10, [r10, #0x2]
    strh r3, [sp, #0xf4]
    strh r10, [sp, #0xf6]
    ldrb r10, [sp, #0xf5]
    add r3, r1, r10
    cmp r4, r3
    bhs L_020413e0
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    b L_02041394
L_020413e0:
    mov r5, r5, lsr r1
    sub r4, r4, r1
L_020413e8:
    ldrh r0, [sp, #0xf6]
    mov r5, r5, lsr r10
    str r0, [r8, #0x38]
    ldrb r1, [sp, #0xf4]
    sub r4, r4, r10
    cmp r1, #0x0
    ldreq r0, [sp, #0xcc]
    streq r0, [r8, #0x0]
    beq L_020405a8
    ands r0, r1, #0x20
    ldrne r0, [sp, #0x44]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ands r0, r1, #0x40
    ldrne r0, =data_021246a4
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    and r0, r1, #0xf
    str r0, [r8, #0x40]
    ldr r0, [sp, #0xb8]
    str r0, [r8, #0x0]
L_02041444:
    ldr r1, [r8, #0x40]
    cmp r1, #0x0
    beq L_020414a4
    cmp r4, r1
    bhs L_02041478
L_02041458:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, r1
    blo L_02041458
L_02041478:
    ldr r0, [sp, #0x34]
    add r2, r8, #0x38
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
    ldr r1, [r2, #0x0]
    and r0, r5, r0
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldr r0, [r8, #0x40]
    mov r5, r5, lsr r0
    sub r4, r4, r0
L_020414a4:
    ldr r0, [sp, #0xd0]
    str r0, [r8, #0x0]
L_020414ac:
    ldr r1, [r8, #0x50]
    ldr r0, [sp, #0x34]
    ldr r2, [r8, #0x48]
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
L_020414c0:
    and r1, r5, r0
    mov r3, r1, lsl #0x2
    add r1, r2, r1, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r1, [r1, #0x2]
    strh r3, [sp, #0xf0]
    strh r1, [sp, #0xf2]
    ldrb r10, [sp, #0xf1]
    cmp r4, r10
    bhs L_02041504
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r1, [r7], #0x1
    add r5, r5, r1, lsl r4
    add r4, r4, #0x8
    b L_020414c0
L_02041504:
    ldrb r0, [sp, #0xf0]
    ands r0, r0, #0xf0
    bne L_020415f0
    ldrh r1, [sp, #0xf0]
    ldrh r0, [sp, #0xf2]
    strh r1, [sp, #0xf8]
    strh r0, [sp, #0xfa]
    ldrb r1, [sp, #0xf9]
    ldrb r0, [sp, #0xf8]
    ldrh ip, [sp, #0xfa]
    add r3, r1, r0
    ldr r0, [sp, #0x34]
    mov r0, r0, lsl r3
    sub r0, r0, #0x1
L_0204153c:
    and r3, r5, r0
    add r10, ip, r3, lsr r1
    mov r3, r10, lsl #0x2
    add r10, r2, r10, lsl #0x2
    ldrh r3, [r2, r3]
    ldrh r10, [r10, #0x2]
    strh r3, [sp, #0xf0]
    strh r10, [sp, #0xf2]
    ldrb r10, [sp, #0xf1]
    add r3, r1, r10
    cmp r4, r3
    bhs L_020415e8
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r3, [r7], #0x1
    add r5, r5, r3, lsl r4
    add r4, r4, #0x8
    b L_0204153c
L_020415e8:
    mov r5, r5, lsr r1
    sub r4, r4, r1
L_020415f0:
    ldrb r0, [sp, #0xf0]
    mov r5, r5, lsr r10
    ands r0, r0, #0x40
    ldrne r0, =data_021246c0
    sub r4, r4, r10
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ldrh r0, [sp, #0xf2]
    str r0, [r8, #0x3c]
    ldrb r0, [sp, #0xf0]
    and r0, r0, #0xf
    str r0, [r8, #0x40]
    ldr r0, [sp, #0xd4]
    str r0, [r8, #0x0]
L_02041630:
    ldr r1, [r8, #0x40]
    cmp r1, #0x0
    beq L_02041690
    cmp r4, r1
    bhs L_02041664
L_02041644:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, r1
    blo L_02041644
L_02041664:
    ldr r0, [sp, #0x34]
    add r2, r8, #0x3c
    mov r0, r0, lsl r1
    sub r0, r0, #0x1
    ldr r1, [r2, #0x0]
    and r0, r5, r0
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldr r0, [r8, #0x40]
    mov r5, r5, lsr r0
    sub r4, r4, r0
L_02041690:
    ldr r2, [r8, #0x24]
    ldr r1, [sp, #0x14]
    ldr r0, [r8, #0x3c]
    add r2, r2, r1
    ldr r1, [sp, #0xc]
    sub r1, r2, r1
    cmp r0, r1
    ldrhi r0, =data_021246d8
    strhi r0, [r9, #0x18]
    ldrhi r0, [sp, #0x3c]
    strhi r0, [r8, #0x0]
    bhi L_020405a8
    ldr r0, [sp, #0xd8]
    str r0, [r8, #0x0]
L_020416c8:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_02041950
    ldr r1, [sp, #0x14]
    sub r1, r1, r0
    ldr r0, [r8, #0x3c]
    cmp r0, r1
    bls L_02041728
    sub r0, r0, r1
    ldr r1, [r8, #0x28]
    cmp r0, r1
    ldrls r2, [r8, #0x2c]
    subls r1, r1, r0
    addls r1, r2, r1
    bls L_02041718
    sub r0, r0, r1
    ldr r1, [r8, #0x20]
    ldr r2, [r8, #0x2c]
    sub r1, r1, r0
    add r1, r2, r1
L_02041718:
    ldr r2, [r8, #0x38]
    cmp r0, r2
    movhi r0, r2
    b L_02041730
L_02041728:
    sub r1, r11, r0
    ldr r0, [r8, #0x38]
L_02041730:
    ldr r2, [sp, #0xc]
    add r3, r8, #0x38
    cmp r0, r2
    movhi r0, r2
    ldr r2, [sp, #0xc]
    sub r2, r2, r0
    str r2, [sp, #0xc]
    ldr r2, [r3, #0x0]
    sub r2, r2, r0
    str r2, [r3, #0x0]
L_02041758:
    ldrb r2, [r1], #0x1
    subs r0, r0, #0x1
    swpb r2, r2, [r11]
    add r11, r11, #0x1
    bne L_02041758
    ldr r0, [r8, #0x38]
    cmp r0, #0x0
    ldreq r0, [sp, #0x98]
    streq r0, [r8, #0x0]
    b L_020405a8
L_02041780:
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    beq L_02041950
    ldr r1, [r8, #0x38]
    sub r0, r0, #0x1
    str r0, [sp, #0xc]
    swpb r0, r1, [r11]
    add r11, r11, #0x1
    ldr r0, [sp, #0x98]
    str r0, [r8, #0x0]
    b L_020405a8
L_020417ac:
    ldr r0, [r8, #0x8]
    cmp r0, #0x0
    beq L_020418a4
    cmp r4, #0x20
    bhs L_020417e0
L_020417c0:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_020417c0
L_020417e0:
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0xc]
    add r3, r9, #0x14
    subs r2, r1, r0
    ldr r0, [r3, #0x0]
    add r1, r8, #0x18
    add r0, r0, r2
    str r0, [r3, #0x0]
    ldr r0, [r1, #0x0]
    add r0, r0, r2
    str r0, [r1, #0x0]
    beq L_02041844
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    beq L_0204182c
    ldr r0, [r8, #0x14]
    sub r1, r11, r2
    bl func_0203da50
    b L_02041838
L_0204182c:
    ldr r0, [r8, #0x14]
    sub r1, r11, r2
    bl func_0203d8dc
L_02041838:
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
L_02041844:
    ldr r0, [sp, #0xc]
    str r0, [sp, #0x14]
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    movne r1, r5
    bne L_02041880
    and r1, r5, #0xff
    and r0, r5, #0xff00
    mov r2, r5, lsr #0x18
    and r3, r2, #0xff
    mov r2, r5, lsr #0x8
    and r2, r2, #0xff00
    add r2, r3, r2
    add r0, r2, r0, lsl #0x8
    add r1, r0, r1, lsl #0x18
L_02041880:
    ldr r0, [r8, #0x14]
    cmp r0, r1
    ldrne r0, =data_021246f8
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    ldr r5, [sp, #0xdc]
    mov r4, r5
L_020418a4:
    ldr r0, [sp, #0xe0]
    str r0, [r8, #0x0]
L_020418ac:
    ldr r0, [r8, #0x8]
    cmp r0, #0x0
    beq L_02041910
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    beq L_02041910
    cmp r4, #0x20
    bhs L_020418ec
L_020418cc:
    cmp r6, #0x0
    beq L_02041950
    sub r6, r6, #0x1
    ldrb r0, [r7], #0x1
    add r5, r5, r0, lsl r4
    add r4, r4, #0x8
    cmp r4, #0x20
    blo L_020418cc
L_020418ec:
    ldr r0, [r8, #0x18]
    cmp r5, r0
    ldrne r0, =data_02124710
    strne r0, [r9, #0x18]
    ldrne r0, [sp, #0x3c]
    strne r0, [r8, #0x0]
    bne L_020405a8
    mov r5, #0x0
    mov r4, r5
L_02041910:
    mov r0, #0x1a
    str r0, [r8, #0x0]
L_02041918:
    mov r0, #0x1
    str r0, [sp, #0x1c]
    b L_02041950
L_02041924:
    mvn r0, #0x2
    str r0, [sp, #0x1c]
    b L_02041950
L_02041930:
    add sp, sp, #0xfc
    mvn r0, #0x3
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02041940:
    add sp, sp, #0xfc
    mvn r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02041950:
    ldr r0, [sp, #0xc]
    str r11, [r9, #0xc]
    str r0, [r9, #0x10]
    str r7, [r9, #0x0]
    str r6, [r9, #0x4]
    str r5, [r8, #0x30]
    str r4, [r8, #0x34]
    ldr r0, [r8, #0x20]
    cmp r0, #0x0
    bne L_02041994
    ldr r0, [r8, #0x0]
    cmp r0, #0x18
    bge L_020419bc
    ldr r1, [r9, #0x10]
    ldr r0, [sp, #0x14]
    cmp r0, r1
    beq L_020419bc
L_02041994:
    ldr r1, [sp, #0x14]
    mov r0, r9
    bl func_02041af0
    cmp r0, #0x0
    movne r0, #0x1c
    strne r0, [r8, #0x0]
    addne sp, sp, #0xfc
    mvnne r0, #0x3
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
L_020419bc:
    add r2, r9, #0x8
    ldr r4, [r9, #0x4]
    ldr r0, [sp, #0x10]
    ldr r1, [r2, #0x0]
    sub r0, r0, r4
    str r0, [sp, #0x10]
    ldr r3, [r9, #0x10]
    add r0, r1, r0
    str r0, [r2, #0x0]
    add r2, r9, #0x14
    ldr r0, [sp, #0x14]
    ldr r1, [r2, #0x0]
    sub r0, r0, r3
    str r0, [sp, #0x14]
    add r0, r1, r0
    str r0, [r2, #0x0]
    add r2, r8, #0x18
    ldr r1, [r2, #0x0]
    ldr r0, [sp, #0x14]
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldr r0, [r8, #0x8]
    cmp r0, #0x0
    beq L_02041a74
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_02041a74
    ldr r0, [r8, #0x10]
    cmp r0, #0x0
    beq L_02041a50
    ldr r2, [sp, #0x14]
    ldr r3, [r9, #0xc]
    mov r1, r2
    ldr r0, [r8, #0x14]
    sub r1, r3, r1
    bl func_0203da50
    b L_02041a68
L_02041a50:
    ldr r2, [sp, #0x14]
    ldr r3, [r9, #0xc]
    mov r1, r2
    ldr r0, [r8, #0x14]
    sub r1, r3, r1
    bl func_0203d8dc
L_02041a68:
    str r0, [r8, #0x14]
    ldr r0, [r8, #0x14]
    str r0, [r9, #0x30]
L_02041a74:
    ldr r0, [r8, #0x0]
    ldr r1, [r8, #0x34]
    cmp r0, #0xb
    moveq r2, #0x80
    ldr r0, [r8, #0x4]
    movne r2, #0x0
    cmp r0, #0x0
    movne r3, #0x40
    ldr r0, [sp, #0x10]
    moveq r3, #0x0
    cmp r0, #0x0
    add r0, r1, r3
    add r0, r0, r2
    str r0, [r9, #0x2c]
    bne L_02041abc
    ldr r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_02041ac8
L_02041abc:
    ldr r0, [sp, #0x8]
    cmp r0, #0x4
    bne L_02041ad8
L_02041ac8:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    mvneq r0, #0x4
    streq r0, [sp, #0x1c]
L_02041ad8:
    ldr r0, [sp, #0x1c]
    add sp, sp, #0xfc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
