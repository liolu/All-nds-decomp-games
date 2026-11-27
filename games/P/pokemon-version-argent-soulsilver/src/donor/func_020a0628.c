/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204b15c from https://github.com/Sojews/fossil-fighters-decomp libs/nitrosdk/src/crypto/rc4.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef struct {
    u32 i, j;
    u32 state[256];
} RC4Context;
// clang-format off
#pragma thumb off
asm void func_020a0628(RC4Context *context, const void *src, u32 size, void *dest) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    ldr r7, [r0]
    ldr r6, [r0, #4]
    add r0, r0, #8
    mov lr, #0x1000000
    add r7, r7, lr
    subs r2, r2, #8
    ldr r9, [r0, r7, lsr #22]
    bmi @tail
@loop:
    add r6, r6, r9
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    add r6, r6, r9
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    add r6, r6, r9
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    add r6, r6, r9
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    add r6, r6, r9
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    add r6, r6, r9
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    add r6, r6, r9
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    add r6, r6, r9
    subs r2, r2, #8
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    bpl @loop
@tail:
    adds r2, r2, #8
    ble @done
@one:
    add r6, r6, r9
    subs r2, r2, #1
    ldr r8, [r0, r6, lsr #22]
    ldrb r5, [r1], #1
    str r8, [r0, r7, lsr #22]
    str r9, [r0, r6, lsr #22]
    add r4, r9, r8
    add r7, r7, lr
    ldr r4, [r0, r4, lsr #22]
    ldr r9, [r0, r7, lsr #22]
    eor r5, r5, r4, lsr #24
    strb r5, [r3], #1
    bgt @one
@done:
    sub r7, r7, lr
    and r7, r7, #0xff000000
    str r6, [r0, #-4]
    str r7, [r0, #-8]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
