/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MI_HBlankDmaCopy32 from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/mi/mi_dma_hblank.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned long u32;
extern void func_020d43e8(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_020d422c(u32 dmaNo);
extern void func_020d4310(u32 dmaNo, u32 dmaType);
extern void func_020d4394(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_01ff8448(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
void func_020d43e8(u32 dmaNo, const void *src, void *dest, u32 size) {
    func_020d4310(dmaNo, (2UL << 27));
    func_020d4394(dmaNo, (u32) src, size, (0UL << 23));

    if (size == 0) {
        return;
    }

    func_020d422c(dmaNo);
    func_01ff8448(dmaNo, (u32) src, (u32) dest,
                  ((1UL << 31) | (2UL << 27) | (0UL << 23) | (3UL << 21) | (1UL << 25) | (1UL << 26) | ((size) / 4)));
}
