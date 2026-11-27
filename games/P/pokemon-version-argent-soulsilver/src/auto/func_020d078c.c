/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003434 from projets/farm-frenzy/src/donor/func_02003434.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_02110ca0;
extern void func_020d4808(const void *src, void *dest, u32 size);
extern void func_020d4194(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_020d4194(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020d4808(src, dest, size);
    }
}
void func_020d078c(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_02110ca0, src, (void *) (0x6898000 + destSlotAddr), size);
}
