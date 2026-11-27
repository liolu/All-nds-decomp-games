/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067744 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_021059ac(u32 dmaNo);
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
extern UnkGxCmdDmaState data_02158bc0;
extern void func_01ffdcdc(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_021028c8(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void func_02105874(u32 dmaNo, u32 dmaType);
extern void func_02105804(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_02105d20(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_02105d60(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_02158bc0.isBusy) {
    }
    data_02158bc0.isBusy   = 1;
    data_02158bc0.dmaNo    = dmaNo;
    data_02158bc0.callback = callback;
    data_02158bc0.arg      = arg;
    func_02105874(dmaNo, 0x38000000);
    func_02105804(dmaNo, (u32) src, size, 0);
    func_021059ac(dmaNo);
    func_021028c8(dmaNo, func_02105d20, 0);
    func_01ffdcdc(dmaNo, src, ((void *) 0x04000400), 0xfc400000 | (size >> 2));
}
void func_02105d20(void *arg);
