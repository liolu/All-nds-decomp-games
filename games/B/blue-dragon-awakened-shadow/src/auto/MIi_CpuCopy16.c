/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MIi_CpuCopy16 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/mi/mi_memory.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
extern void MIi_CpuCopy16(register const void *srcp, register void *destp, register u32 size);
// clang-format off
asm void MIi_CpuCopy16(register const void *srcp, register void *destp, register u32 size) {
    mov r12, #0
@L020D47BC:
    cmp r12, r2
    blt @L020D47C8
    b @L020D47CC
@L020D47C8:
    ldrh r3, [r0, r12]
@L020D47CC:
    blt @L020D47D4
    b @L020D47D8
@L020D47D4:
    strh r3, [r1, r12]
@L020D47D8:
    blt @L020D47E0
    b @L020D47E4
@L020D47E0:
    add r12, r12, #2
@L020D47E4:
    blt @L020D47BC
    bx lr
}
// clang-format on
