/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007198 from projets/code-lyoko/src/donor/func_02007198.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_020dff64;
extern void func_020211dc(const void *src, void *dest, u32 size);
extern void func_02020b40(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02020b40(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020211dc(src, dest, size);
    }
}
void func_020175ac(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_020dff64, src, (void *) (0x68a0000 + destSlotAddr), size);
}
