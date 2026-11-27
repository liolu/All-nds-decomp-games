/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02067540 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
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
extern void _Z19SetInterruptHandlerjPKv(u32 mask, UnkIrqHandler handler);
extern UnkIrqHandler func_020d108c(u32 mask);
extern void _Z24EnableSpecificInterruptsj(u32 mask);
extern void func_020d4394(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_020d45a0(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020d44a8(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_021e1a40.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    data_021e1a40.isBusy   = 1;
    data_021e1a40.dmaNo    = dmaNo;
    data_021e1a40.src      = (u32) src;
    data_021e1a40.size     = size;
    data_021e1a40.callback = callback;
    data_021e1a40.arg      = arg;
    func_020d4394(dmaNo, (u32) src, size, 0);
    func_020d422c(dmaNo);

    e                             = _Z20DisableIRQInterruptsv();
    data_021e1a40.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    data_021e1a40.fifoIntrHandler = func_020d108c(0x200000);
    (*(vu32 *) 0x04000600)        = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    _Z19SetInterruptHandlerjPKv(0x200000, func_020d45a0);
    _Z24EnableSpecificInterruptsj(0x200000);
    func_020d45a0();
    _Z20SetIRQInterruptStatei(e);
}
void func_020d45a0(void);
