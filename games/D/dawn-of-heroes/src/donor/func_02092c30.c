/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* INITi_CpuClear32 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/crt0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_02092c30(u32 data, void *dest, u32 size);
// clang-format off
asm void func_02092c30(u32 data, void *dest, u32 size)
{
    add r12, r1, r2
@loop:
    cmp r1, r12
    blt @store
    b @next
@store:
    stmia r1!, {r0}
@next:
    blt @loop
    bx lr
}
// clang-format on
