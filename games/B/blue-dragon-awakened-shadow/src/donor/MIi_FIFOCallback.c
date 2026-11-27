/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02067638 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
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
extern void MIi_DmaSetParams(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void OSi_EnterDmaCallback(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void OS_ResetRequestIrqMask(u32 mask);
extern void MIi_FIFOCallback(void);
extern void MIi_DMACallback(void *arg);
void MIi_FIFOCallback(void) {
    u32 src;
    u32 size;

    if (MIi_GXDmaParams.size == 0) {
        return;
    }
    size = MIi_GXDmaParams.size;
    if (size >= 0x1d8) {
        size = 0x1d8;
    }
    src = MIi_GXDmaParams.src;
    MIi_GXDmaParams.size -= size;
    MIi_GXDmaParams.src += size;
    if (MIi_GXDmaParams.size == 0) {
        OSi_EnterDmaCallback(MIi_GXDmaParams.dmaNo, MIi_DMACallback, 0);
        MIi_DmaSetParams(MIi_GXDmaParams.dmaNo, (const void *) src, ((void *) 0x04000400), 0xc4400000 | (size >> 2));
        OS_ResetRequestIrqMask(0x200000);
    } else {
        MIi_DmaSetParams(MIi_GXDmaParams.dmaNo, (const void *) src, ((void *) 0x04000400), 0x84400000 | (size >> 2));
        OS_ResetRequestIrqMask(0x200000);
    }
}
void MIi_DMACallback(void *arg);
