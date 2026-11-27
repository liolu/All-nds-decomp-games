/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02067540 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern void MI_WaitDma(u32 dmaNo);
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
extern UnkIrqHandler OS_GetIrqFunction(u32 mask);
extern void OS_EnableIrqMask(u32 mask);
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void MIi_FIFOCallback(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void MI_SendGXCommandAsync(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (MIi_GXDmaParams.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    MIi_GXDmaParams.isBusy   = 1;
    MIi_GXDmaParams.dmaNo    = dmaNo;
    MIi_GXDmaParams.src      = (u32) src;
    MIi_GXDmaParams.size     = size;
    MIi_GXDmaParams.callback = callback;
    MIi_GXDmaParams.arg      = arg;
    MIi_CheckDma0SourceAddress(dmaNo, (u32) src, size, 0);
    MI_WaitDma(dmaNo);

    e                               = OS_DisableInterrupts();
    MIi_GXDmaParams.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    MIi_GXDmaParams.fifoIntrHandler = OS_GetIrqFunction(0x200000);
    (*(vu32 *) 0x04000600)          = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    OS_SetIrqFunction(0x200000, MIi_FIFOCallback);
    OS_EnableIrqMask(0x200000);
    MIi_FIFOCallback();
    OS_RestoreInterrupts(e);
}
void MIi_FIFOCallback(void);
