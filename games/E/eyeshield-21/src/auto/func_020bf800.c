/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067744 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_020bf398(u32 dmaNo);
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
extern UnkGxCmdDmaState data_0212db78;
extern void func_01ff82b8(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_020bc6f4(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void func_020bf260(u32 dmaNo, u32 dmaType);
extern void func_020bf1f0(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_020bf7c0(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020bf800(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_0212db78.isBusy) {
    }
    data_0212db78.isBusy   = 1;
    data_0212db78.dmaNo    = dmaNo;
    data_0212db78.callback = callback;
    data_0212db78.arg      = arg;
    func_020bf260(dmaNo, 0x38000000);
    func_020bf1f0(dmaNo, (u32) src, size, 0);
    func_020bf398(dmaNo);
    func_020bc6f4(dmaNo, func_020bf7c0, 0);
    func_01ff82b8(dmaNo, src, ((void *) 0x04000400), 0xfc400000 | (size >> 2));
}
void func_020bf7c0(void *arg);
