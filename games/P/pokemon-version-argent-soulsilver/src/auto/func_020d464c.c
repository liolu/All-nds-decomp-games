/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020676e4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
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
extern void func_020d1204(u32 mask);
extern void func_020d464c(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020d464c(void *arg) {
    func_020d1204(0x200000);
    (*(vu32 *) 0x04000600) = (data_021e1a40.fifoCond << 30) | ((*(vu32 *) 0x04000600) & ~0xc0000000);
    _Z19SetInterruptHandlerjPKv(0x200000, data_021e1a40.fifoIntrHandler);
    data_021e1a40.isBusy = 0;
    UnkCallCallback(data_021e1a40.callback, data_021e1a40.arg);
}
