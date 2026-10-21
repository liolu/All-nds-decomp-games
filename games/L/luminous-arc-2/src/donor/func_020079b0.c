/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004484 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/asm_stubs/calls/func_02004484.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef struct {
    u8 *destp;
    s32 destCount;
    u32 length;
    u16 destTmp;
    u8 destTmpCnt;
    u8 flags;
    u8 flagIndex;
    u8 lengthFlg;
    u8 exFormat;
    u8 _padding[1];
} MIUncompContextLZ;
// clang-format off
asm s32 func_020079b0 (register MIUncompContextLZ * context, register const u8 * data, register u32 len)
{
    stmfd sp !, {r4 - r11}
    ldr r3, [r0, #MIUncompContextLZ.destp]
    ldr r4, [r0, #MIUncompContextLZ.destCount]
    ldrb r5, [r0, #MIUncompContextLZ.flags]
    ldrb r6, [r0, #MIUncompContextLZ.flagIndex]
    ldr r7, [r0, #MIUncompContextLZ.length]
    ldrb r8, [r0, #MIUncompContextLZ.lengthFlg]
    ldrb r11, [r0, #MIUncompContextLZ.exFormat]
@21:
    cmp r4, #0
    ble @29
    cmp r6, #0
    beq @28
@22
    cmp r2, #0
    beq @29
    tst r5, #0x80
    bne @23
    ldrb r9, [r1], #1
    sub r4, r4, #1
    sub r2, r2, #1



    swpb r9, r9, [r3]
    add r3, r3, #1

    b @26
@23:
    cmp r8, #0
    beq @24
    cmp r11, #1
    bne @23_9
    subs r8, r8, #1
    beq @23_7
    cmp r8, #1
    beq @23_6
    ldrb r7, [r1], #1
    tst r7, #0xE0
    beq @23_4
    add r7, r7, #0x10
    mov r8, #0
    b @23_10
@23_4:
    mov r10, #0x110
    tst r7, #0x10
    beq @23_5
    and r7, r7, #0xF
    add r10, r10, #0x1000
    add r7, r10, r7, lsl #16
    b @23_8
@23_5:
    and r7, r7, #0xF
    add r7, r10, r7, lsl #8
    mov r8, #1
    b @23_8
@23_6:
    ldrb r10, [r1], #1
    add r7, r7, r10, lsl #8
    b @23_8
@23_7:
    ldrb r10, [r1], #1
    add r7, r7, r10
    b @23_10
@23_8:
    subs r2, r2, #1
    beq @29
    b @23
@23_9:
    ldrb r7, [r1], #1
    add r7, r7, #0x30
    mov r8, #0
@23_10:
    subs r2, r2, #1
    beq @29
@24:
    and r9, r7, #0xF
    mov r10, r9, lsl #8
    ldrb r9, [r1], #1
    mov r8, #3
    sub r2, r2, #1
    orr r9, r9, r10
    add r9, r9, #1
    movs r7, r7, asr #4
    beq @26
@25:
    ldrb r10, [r3, -r9]
    sub r4, r4, #1



    swpb r10, r10, [r3]
    add r3, r3, #1

    subs r7, r7, #1
    bgt @25
@26:
    cmp r4, #0
    beq @29
    mov r5, r5, lsl #1
    subs r6, r6, #1
    bne @22
@28:
    cmp r2, #0
    beq @29
    ldrb r5, [r1], #1
    mov r6, #8
    sub r2, r2, #1
    b @21
@29:
    str r3, [r0, #MIUncompContextLZ.destp]
    str r4, [r0, #MIUncompContextLZ.destCount]
    strb r5, [r0, #MIUncompContextLZ.flags]
    strb r6, [r0, #MIUncompContextLZ.flagIndex]
    str r7, [r0, #MIUncompContextLZ.length]
    strb r8, [r0, #MIUncompContextLZ.lengthFlg]
    strb r11, [r0, #MIUncompContextLZ.exFormat]
    mov r0, r4
    ldmfd sp !, {r4 - r11}
    bx lr
}
// clang-format on
