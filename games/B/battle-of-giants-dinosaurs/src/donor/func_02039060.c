/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _ll_sfrom_f from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/src/asm_stubs/calls/_ll_sfrom_f.c (license: MIT),
 * reused by tools/donor_match.py */
// clang-format off
#pragma ipa file
asm long long func_02039060(float value)
{
    bic r3, r0, #0x80000000
    mov r2, #0xbd
    subs r2, r2, r3, lsr #23
    blt @overflow
    cmp r2, #0x3f
    bge @underflow
    mov r12, r0, asr #31
    mov r0, r0, lsl #8
    orr r0, r0, #0x80000000
    eor r3, r12, r0, lsr #1
    add r3, r3, r12, lsr #31
    cmp r2, #0x20
    ble @low_shift
    sub r2, r2, #0x20
    mov r1, r12
    mov r0, r3, asr r2
    rsb r2, r2, #0x20
    movs r3, r3, lsl r2
    addne r0, r0, r12, lsr #31
    bx lr
@low_shift:
    mov r1, r3, asr r2
    rsb r2, r2, #0x20
    mov r0, r3, lsl r2
    bx lr
@underflow:
    mov r0, #0
    mov r1, #0
    bx lr
@overflow:
    mvn r0, r0, asr #31
    add r1, r0, #0x80000000
    bx lr
}
// clang-format on
