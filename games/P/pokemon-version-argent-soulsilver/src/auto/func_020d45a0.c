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
extern UnkGxCmdDmaState data_021e1a40;
extern void func_01ff8448(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_020d1118(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void _Z29AcknowledgeSpecificInterruptsj(u32 mask);
extern void func_020d45a0(void);
extern void func_020d464c(void *arg);
void func_020d45a0(void) {
    u32 src;
    u32 size;

    if (data_021e1a40.size == 0) {
        return;
    }
    size = data_021e1a40.size;
    if (size >= 0x1d8) {
        size = 0x1d8;
    }
    src = data_021e1a40.src;
    data_021e1a40.size -= size;
    data_021e1a40.src += size;
    if (data_021e1a40.size == 0) {
        func_020d1118(data_021e1a40.dmaNo, func_020d464c, 0);
        func_01ff8448(data_021e1a40.dmaNo, (const void *) src, ((void *) 0x04000400), 0xc4400000 | (size >> 2));
        _Z29AcknowledgeSpecificInterruptsj(0x200000);
    } else {
        func_01ff8448(data_021e1a40.dmaNo, (const void *) src, ((void *) 0x04000400), 0x84400000 | (size >> 2));
        _Z29AcknowledgeSpecificInterruptsj(0x200000);
    }
}
void func_020d464c(void *arg);
