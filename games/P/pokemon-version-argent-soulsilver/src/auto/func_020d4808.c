/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MIi_CpuCopy32 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/mi/mi_memory.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
extern void func_020d4808(register const void *srcp, register void *destp, register u32 size);
// clang-format off
asm void func_020d4808(register const void *srcp, register void *destp, register u32 size) {
    add r12, r1, r2
@L020D480C:
    cmp r1, r12
    blt @L020D4818
    b @L020D481C
@L020D4818:
    ldmia r0!, {r2}
@L020D481C:
    blt @L020D4824
    b @L020D4828
@L020D4824:
    stmia r1!, {r2}
@L020D4828:
    blt @L020D480C
    bx lr
}
// clang-format on
