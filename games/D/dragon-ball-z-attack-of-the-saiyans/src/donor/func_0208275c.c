/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GXS_LoadBGExtPltt from projets/blue-dragon-awakened-shadow/src/donor/GXS_LoadBGExtPltt.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_0209f734;
extern void func_020831e8(const void *src, void *dest, u32 size);
extern void func_02082ef4(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02082ef4(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020831e8(src, dest, size);
    }
}
void func_0208275c(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0209f734, src, (void *) (0x6898000 + destSlotAddr), size);
}
