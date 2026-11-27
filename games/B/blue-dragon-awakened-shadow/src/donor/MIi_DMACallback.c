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
extern UnkGxCmdDmaState MIi_GXDmaParams;
extern void OS_SetIrqFunction(u32 mask, UnkIrqHandler handler);
extern void OS_DisableIrqMask(u32 mask);
extern void MIi_DMACallback(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void MIi_DMACallback(void *arg) {
    OS_DisableIrqMask(0x200000);
    (*(vu32 *) 0x04000600) = (MIi_GXDmaParams.fifoCond << 30) | ((*(vu32 *) 0x04000600) & ~0xc0000000);
    OS_SetIrqFunction(0x200000, MIi_GXDmaParams.fifoIntrHandler);
    MIi_GXDmaParams.isBusy = 0;
    UnkCallCallback(MIi_GXDmaParams.callback, MIi_GXDmaParams.arg);
}
