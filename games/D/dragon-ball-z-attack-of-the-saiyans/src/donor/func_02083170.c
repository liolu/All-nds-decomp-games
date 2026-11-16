/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02040690 from projets/battle-of-giants-dinosaurs/src/auto/func_02040690.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern void func_02083170(register u16 data, register void *destp, register u32 size);
// clang-format off
#pragma thumb off
asm void func_02083170(register u16 data, register void *destp, register u32 size) {
    mov r3, #0
@L020D4794:
    cmp r3, r2
    blt @L020D47A0
    b @L020D47A4
@L020D47A0:
    strh r0, [r1, r3]
@L020D47A4:
    blt @L020D47AC
    b @L020D47B0
@L020D47AC:
    add r3, r3, #2
@L020D47B0:
    blt @L020D4794
    bx lr
}
// clang-format on
