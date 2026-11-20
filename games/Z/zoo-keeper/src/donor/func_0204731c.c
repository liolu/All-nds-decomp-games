/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020586d4 from projets/children-of-mana/src/auto/func_020586d4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_02064134;
extern void func_0204a998(const void *src, void *dest, u32 size);
extern void func_0204a670(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_0204a670(dmaNo, src, dest, size, 0, 0);
    } else {
        func_0204a998(src, dest, size);
    }
}
void func_0204731c(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_02064134, src, (void *) (0x6898000 + destSlotAddr), size);
}
