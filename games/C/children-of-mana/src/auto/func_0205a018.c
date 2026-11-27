/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067540 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern void func_02059a68(u32 dmaNo);
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
extern UnkGxCmdDmaState data_0211af94;
extern void func_0205a84c(u32 mask, UnkIrqHandler handler);
extern UnkIrqHandler _Z19GetInterruptHandlerj(u32 mask);
extern void _Z24EnableSpecificInterruptsj(u32 mask);
extern void func_020598c0(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_02059f50(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_0205a018(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_0211af94.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    data_0211af94.isBusy   = 1;
    data_0211af94.dmaNo    = dmaNo;
    data_0211af94.src      = (u32) src;
    data_0211af94.size     = size;
    data_0211af94.callback = callback;
    data_0211af94.arg      = arg;
    func_020598c0(dmaNo, (u32) src, size, 0);
    func_02059a68(dmaNo);

    e                             = func_0205c948();
    data_0211af94.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    data_0211af94.fifoIntrHandler = _Z19GetInterruptHandlerj(0x200000);
    (*(vu32 *) 0x04000600)        = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    func_0205a84c(0x200000, func_02059f50);
    _Z24EnableSpecificInterruptsj(0x200000);
    func_02059f50();
    func_0205c95c(e);
}
void func_02059f50(void);
