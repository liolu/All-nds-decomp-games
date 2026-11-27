/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020035f0 from projets/farm-frenzy/src/donor/func_020035f0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
extern u32 data_02110ca0;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_021e1618;
extern void func_020d4808(const void *src, void *dest, u32 size);
extern void func_020d3ff4(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_020d4194(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_020d3ff4(dmaNo, src, dest, size);
    } else {
        func_020d4808(src, dest, size);
    }
}
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_020d4194(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020d4808(src, dest, size);
    }
}
void func_020d0948(const void *src, u32 destSlotAddr, u32 size) {
    void *dest;

    if (data_021e1618.texStartAddr2 == 0) {
        dest = (void *) (data_021e1618.texStartAddr + destSlotAddr);
    } else if (destSlotAddr + size < data_021e1618.texSize1) {
        dest = (void *) (data_021e1618.texStartAddr + destSlotAddr);
    } else if (destSlotAddr >= data_021e1618.texSize1) {
        dest = (void *) (data_021e1618.texStartAddr2 + destSlotAddr - data_021e1618.texSize1);
    } else {
        void *dest2 = (void *) data_021e1618.texStartAddr2;
        u32 size1   = data_021e1618.texSize1 - destSlotAddr;
        UnkGxCopy32(data_02110ca0, src, (void *) (data_021e1618.texStartAddr + destSlotAddr), size1);
        UnkGxCopy32Async(data_02110ca0, (u8 *) src + size1, dest2, size - size1);
        return;
    }
    UnkGxCopy32Async(data_02110ca0, src, dest, size);
}
