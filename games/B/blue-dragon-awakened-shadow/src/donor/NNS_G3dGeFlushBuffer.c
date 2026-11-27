/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206dcf0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_gecom.c (license: none), reused
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
extern void NNS_G3dGeFlushBuffer(void);
extern void NNS_G3dGeWaitSendDL(void);
extern UnkGeState NNS_G3dGeBuffer;
extern UnkGeState NNS_G3dGeBuffer;
void NNS_G3dGeFlushBuffer(void) {
    if (NNS_G3dGeBuffer.busy) {
        NNS_G3dGeWaitSendDL();
    }
    if (NNS_G3dGeBuffer.buf && NNS_G3dGeBuffer.buf->idx) {
        MIi_CpuSend32(&NNS_G3dGeBuffer.buf->data[0], &(*(vu32 *) 0x04000400), NNS_G3dGeBuffer.buf->idx * 4);
        NNS_G3dGeBuffer.buf->idx = 0;
    }
}
void NNS_G3dGeWaitSendDL(void);
