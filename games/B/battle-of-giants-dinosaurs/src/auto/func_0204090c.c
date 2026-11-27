/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MI_CpuCopy8 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/mi/mi_memory.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0204090c(register const void *srcp, register void *dstp, register u32 size);
// clang-format off
asm void func_0204090c(register const void *srcp, register void *dstp, register u32 size) {
    cmp r2, #0
    beq @L020D4A5C
    b @L020D4A60
@L020D4A5C:
    bx lr
@L020D4A60:
    tst r1, #1
    beq @L020D4AB8
    ldrh r12, [r1, #-1]
    and r12, r12, #0xff
    tst r0, #1
    bne @L020D4A7C
    b @L020D4A80
@L020D4A7C:
    ldrh r3, [r0, #-1]
@L020D4A80:
    bne @L020D4A88
    b @L020D4A8C
@L020D4A88:
    mov r3, r3, lsr #8
@L020D4A8C:
    beq @L020D4A94
    b @L020D4A98
@L020D4A94:
    ldrh r3, [r0]
@L020D4A98:
    orr r3, r12, r3, lsl #8
    strh r3, [r1, #-1]
    add r0, r0, #1
    add r1, r1, #1
    subs r2, r2, #1
    beq @L020D4AB4
    b @L020D4AB8
@L020D4AB4:
    bx lr
@L020D4AB8:
    eor r12, r1, r0
    tst r12, #1
    beq @L020D4B14
    bic r0, r0, #1
    ldrh r12, [r0], #2
    mov r3, r12, lsr #8
    subs r2, r2, #2
    bcc @L020D4AF0
@L020D4AD8:
    ldrh r12, [r0], #2
    orr r12, r3, r12, lsl #8
    strh r12, [r1], #2
    mov r3, r12, lsr #0x10
    subs r2, r2, #2
    bcs @L020D4AD8
@L020D4AF0:
    tst r2, #1
    beq @L020D4AFC
    b @L020D4B00
@L020D4AFC:
    bx lr
@L020D4B00:
    ldrh r12, [r1]
    and r12, r12, #0xff00
    orr r12, r12, r3
    strh r12, [r1]
    bx lr
@L020D4B14:
    tst r12, #2
    beq @L020D4B40
    bics r3, r2, #1
    beq @L020D4BA4
    sub r2, r2, r3
    add r12, r3, r1
@L020D4B2C:
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    cmp r1, r12
    bcc @L020D4B2C
    b @L020D4BA4
@L020D4B40:
    cmp r2, #2
    bcc @L020D4BA4
    tst r1, #2
    beq @L020D4B68
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    subs r2, r2, #2
    beq @L020D4B64
    b @L020D4B68
@L020D4B64:
    bx lr
@L020D4B68:
    bics r3, r2, #3
    beq @L020D4B88
    sub r2, r2, r3
    add r12, r3, r1
@L020D4B78:
    ldr r3, [r0], #4
    str r3, [r1], #4
    cmp r1, r12
    bcc @L020D4B78
@L020D4B88:
    tst r2, #2
    bne @L020D4B94
    b @L020D4B98
@L020D4B94:
    ldrh r3, [r0], #2
@L020D4B98:
    bne @L020D4BA0
    b @L020D4BA4
@L020D4BA0:
    strh r3, [r1], #2
@L020D4BA4:
    tst r2, #1
    beq @L020D4BB0
    b @L020D4BB4
@L020D4BB0:
    bx lr
@L020D4BB4:
    ldrh r2, [r1]
    ldrh r0, [r0]
    and r2, r2, #0xff00
    and r0, r0, #0xff
    orr r0, r2, r0
    strh r0, [r1]
    bx lr
}
// clang-format on
