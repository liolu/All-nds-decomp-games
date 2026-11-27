/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200336c from projets/farm-frenzy/src/donor/func_0200336c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_02110ca0;
typedef struct {
    s32 subBgExtPltt;
    u32 objExtPlttAddr;
    s32 objExtPltt;
    u32 bgExtPlttOffset;
    u32 bgExtPlttAddr;
    s32 bgExtPltt;
    s32 subObjExtPltt;
} UnkGxExtPlttState;
extern UnkGxExtPlttState data_021e15fc;
extern void func_020d4808(const void *src, void *dest, u32 size);
extern void func_020d4194(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_020d4194(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020d4808(src, dest, size);
    }
}
void func_020d06c4(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_02110ca0, src, (void *) (data_021e15fc.objExtPlttAddr + destSlotAddr), size);
}
