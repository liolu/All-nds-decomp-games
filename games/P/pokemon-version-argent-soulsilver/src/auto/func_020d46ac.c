/* compiler: 2.0/sp1p5 -O2,s */
/* func_02067744 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_020d422c(u32 dmaNo);
typedef void (*UnkDmaCallback)(void *arg);
typedef void (*UnkIrqHandler)(void);
typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 size;
    UnkDmaCallback callback;
    void *arg;
    u32 fifoCond;
    UnkIrqHandler fifoIntrHandler;
} UnkGxCmdDmaState;
extern UnkGxCmdDmaState data_021e1a40;
extern void func_01ff8448(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_020d1118(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void func_020d4310(u32 dmaNo, u32 dmaType);
extern void func_020d4394(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_020d4764(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020d46ac(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_021e1a40.isBusy) {
    }
    data_021e1a40.isBusy   = 1;
    data_021e1a40.dmaNo    = dmaNo;
    data_021e1a40.callback = callback;
    data_021e1a40.arg      = arg;
    func_020d4310(dmaNo, 0x38000000);
    func_020d4394(dmaNo, (u32) src, size, 0);
    func_020d422c(dmaNo);
    func_020d1118(dmaNo, func_020d4764, 0);
    func_01ff8448(dmaNo, src, ((void *) 0x04000400), 0xfc400000 | (size >> 2));
}
void func_020d4764(void *arg);
