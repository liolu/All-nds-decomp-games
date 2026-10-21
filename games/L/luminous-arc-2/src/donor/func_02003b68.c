/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_LoadBGExtPltt from projets/blue-dragon-awakened-shadow/src/donor/GX_LoadBGExtPltt.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_020ee404;
typedef struct {
    s32 subBgExtPltt;
    u32 objExtPlttAddr;
    s32 objExtPltt;
    u32 bgExtPlttOffset;
    u32 bgExtPlttAddr;
    s32 bgExtPltt;
    s32 subObjExtPltt;
} UnkGxExtPlttState;
extern UnkGxExtPlttState data_02147840;
extern void func_020074d4(const void *src, void *dest, u32 size);
extern void func_02007180(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02007180(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020074d4(src, dest, size);
    }
}
void func_02003b68(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_020ee404, src, (void *) (data_02147840.bgExtPlttAddr + destSlotAddr - data_02147840.bgExtPlttOffset),
                     size);
}
