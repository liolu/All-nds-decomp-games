/* compiler: 1.2/sp2p3 */
/* GXS_LoadOBJExtPltt from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load2d.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_0213b01c;
extern void func_02095f64(const void *src, void *dest, u32 size);
extern void func_02095ab8(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02095ab8(dmaNo, src, dest, size, 0, 0);
    } else {
        func_02095f64(src, dest, size);
    }
}
void func_02093348(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0213b01c, src, (void *) (0x68a0000 + destSlotAddr), size);
}
