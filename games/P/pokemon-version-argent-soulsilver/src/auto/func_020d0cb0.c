/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02066d1c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load3d.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
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
extern void func_020d4194(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_020d4194(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020d4808(src, dest, size);
    }
}
void func_020d0cb0(const void *src, u32 size) {
    UnkGxCopy32Async(data_02110ca0, src, (void *) (data_021e1618.clearImageAddr + 0x20000), size);
}
