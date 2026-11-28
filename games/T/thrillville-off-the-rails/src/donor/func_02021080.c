/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200ba68 from projets/code-lyoko/src/donor/func_0200ba68.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern void func_02020ad0(u32 dmaNo);
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
extern UnkGxCmdDmaState data_020ec2e4;
extern void func_02021968(u32 mask, UnkIrqHandler handler);
extern UnkIrqHandler func_020218dc(u32 mask);
extern void func_020217d8(u32 mask);
extern void func_02020928(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_02020fb8(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_02021080(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_020ec2e4.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    data_020ec2e4.isBusy   = 1;
    data_020ec2e4.dmaNo    = dmaNo;
    data_020ec2e4.src      = (u32) src;
    data_020ec2e4.size     = size;
    data_020ec2e4.callback = callback;
    data_020ec2e4.arg      = arg;
    func_02020928(dmaNo, (u32) src, size, 0);
    func_02020ad0(dmaNo);

    e                             = func_02024624();
    data_020ec2e4.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    data_020ec2e4.fifoIntrHandler = func_020218dc(0x200000);
    (*(vu32 *) 0x04000600)        = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    func_02021968(0x200000, func_02020fb8);
    func_020217d8(0x200000);
    func_02020fb8();
    func_02024638(e);
}
extern void func_02020fb8(void);
