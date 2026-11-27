/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDG_CpuCopy8 from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/ctrdg/ctrdg.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern BOOL func_020e138c(const void *src, void *dest, u32 size);
extern BOOL func_020e1434(u32 dmaNo, const void *src, void *dest, u32 size, u32 forwardType);
BOOL func_020e138c(const void *src, void *dest, u32 size) {
    if (0x08000000 <= (u32) dest && (u32) dest < 0x0a010000) {
        return func_020e1434(0, (const void *) dest, (void *) src, size, (0x00000001 | 0x00000000));
    } else {
        return func_020e1434(0, src, dest, size, (0x00000001 | 0x00000000));
    }
}
BOOL func_020e1434(u32 dmaNo, const void *src, void *dest, u32 size, u32 forwardType);
