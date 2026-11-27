/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
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
extern UnkGxCmdDmaState data_02158bc0;
extern void func_01ffdcdc(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_021028c8(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void func_02102794(u32 mask);
extern void func_02105e94(void);
extern void func_02105e20(void *arg);
void func_02105e94(void) {
    u32 src;
    u32 size;

    if (data_02158bc0.size == 0) {
        return;
    }
    size = data_02158bc0.size;
    if (size >= 0x1d8) {
        size = 0x1d8;
    }
    src = data_02158bc0.src;
    data_02158bc0.size -= size;
    data_02158bc0.src += size;
    if (data_02158bc0.size == 0) {
        func_021028c8(data_02158bc0.dmaNo, func_02105e20, 0);
        func_01ffdcdc(data_02158bc0.dmaNo, (const void *) src, ((void *) 0x04000400), 0xc4400000 | (size >> 2));
        func_02102794(0x200000);
    } else {
        func_01ffdcdc(data_02158bc0.dmaNo, (const void *) src, ((void *) 0x04000400), 0x84400000 | (size >> 2));
        func_02102794(0x200000);
    }
}
void func_02105e20(void *arg);
