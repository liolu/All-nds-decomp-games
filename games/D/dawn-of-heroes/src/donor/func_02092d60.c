/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MI_CpuFill8 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/mi/mi_memory.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_02092d60(register void *dstp, register u8 data, register u32 size);
// clang-format off
asm void func_02092d60(register void *dstp, register u8 data, register u32 size) {
    cmp r2, #0
    beq @L020D49A0
    b @L020D49A4
@L020D49A0:
    bx lr
@L020D49A4:
    tst r0, #1
    beq @L020D49D0
    ldrh r12, [r0, #-1]
    and r12, r12, #0xff
    orr r3, r12, r1, lsl #8
    strh r3, [r0, #-1]
    add r0, r0, #1
    subs r2, r2, #1
    beq @L020D49CC
    b @L020D49D0
@L020D49CC:
    bx lr
@L020D49D0:
    cmp r2, #2
    bcc @L020D4A28
    orr r1, r1, r1, lsl #8
    tst r0, #2
    beq @L020D49F8
    strh r1, [r0], #2
    subs r2, r2, #2
    beq @L020D49F4
    b @L020D49F8
@L020D49F4:
    bx lr
@L020D49F8:
    orr r1, r1, r1, lsl #16
    bics r3, r2, #3
    beq @L020D4A18
    sub r2, r2, r3
    add r12, r3, r0
@L020D4A0C:
    str r1, [r0], #4
    cmp r0, r12
    bcc @L020D4A0C
@L020D4A18:
    tst r2, #2
    bne @L020D4A24
    b @L020D4A28
@L020D4A24:
    strh r1, [r0], #2
@L020D4A28:
    tst r2, #1
    beq @L020D4A34
    b @L020D4A38
@L020D4A34:
    bx lr
@L020D4A38:
    ldrh r3, [r0]
    and r3, r3, #0xff00
    and r1, r1, #0xff
    orr r1, r1, r3
    strh r1, [r0]
    bx lr
}
// clang-format on
