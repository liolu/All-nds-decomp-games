/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MIi_CpuSend32 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/mi/mi_memory.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
extern void MIi_CpuSend32(register const void *srcp, volatile void *destp, u32 size);
// clang-format off
asm void MIi_CpuSend32(register const void *srcp, volatile void *destp, u32 size) {
    add r12, r0, r2
@L020D4834:
    cmp r0, r12
    blt @L020D4840
    b @L020D4844
@L020D4840:
    ldmia r0!, {r2}
@L020D4844:
    blt @L020D484C
    b @L020D4850
@L020D484C:
    str r2, [r1]
@L020D4850:
    blt @L020D4834
    bx lr
}
// clang-format on
