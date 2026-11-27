/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206de34 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_gecom.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
typedef struct NNSG3dGeBuffer {
    u32 idx;
    u32 data[0xc0];
} NNSG3dGeBuffer;
typedef struct UnkGeState {
    NNSG3dGeBuffer *buf;
    volatile u32 busy;
    u32 useDmaAsync;
} UnkGeState;
extern void MIi_CpuSend32(const void *src, volatile void *dest, u32 size);
extern void MIi_CpuCopyFast(const void *src, void *dest, u32 size);
extern void NNS_G3dGeFlushBuffer(void);
extern void NNS_G3dGeWaitSendDL(void);
extern void NNS_G3dGeBufferOP_N(u32 op, const void *args, u32 num);
extern UnkGeState NNS_G3dGeBuffer;
extern UnkGeState NNS_G3dGeBuffer;
void NNS_G3dGeFlushBuffer(void);
void NNS_G3dGeWaitSendDL(void);
void NNS_G3dGeBufferOP_N(u32 op, const void *args, u32 num) {
    if (NNS_G3dGeBuffer.buf) {
        if (NNS_G3dGeBuffer.busy) {
            u32 idx = NNS_G3dGeBuffer.buf->idx;
            if (idx + 1 + num <= 0xc0) {
                NNS_G3dGeBuffer.buf->idx       = idx + 1;
                NNS_G3dGeBuffer.buf->data[idx] = op;
                if (num) {
                    MIi_CpuCopyFast(args, &NNS_G3dGeBuffer.buf->data[NNS_G3dGeBuffer.buf->idx], num * 4);
                    NNS_G3dGeBuffer.buf->idx += num;
                }
                return;
            }
        }
        if (NNS_G3dGeBuffer.buf->idx) {
            NNS_G3dGeFlushBuffer();
        } else if (NNS_G3dGeBuffer.busy) {
            NNS_G3dGeWaitSendDL();
        }
    } else if (NNS_G3dGeBuffer.busy) {
        NNS_G3dGeWaitSendDL();
    }
    (*(vu32 *) 0x04000400) = op;
    MIi_CpuSend32(args, &(*(vu32 *) 0x04000400), num * 4);
}
