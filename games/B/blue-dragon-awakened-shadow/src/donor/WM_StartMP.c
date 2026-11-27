/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WM_StartMP from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WM_StartMP.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef void (*WMCallbackFunc)(void *arg);
typedef int WMErrCode;
typedef struct WMMPTmpParam {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u16 maxFrequency;
    u16 defaultRetryCount;
    u8 minPollBmpMode;
    u8 singlePacketMode;
    u8 ignoreFatalErrorMode;
    u8 reserved[1];
} WMMPTmpParam;
extern void MIi_CpuClear32(u32 value, void *dst, u32 size);
extern WMErrCode WMi_StartMP(WMCallbackFunc callback, u16 *recvBuf, u16 recvBufSize, u16 *sendBuf, u16 sendBufSize,
                             WMMPTmpParam *tmpParam);
WMErrCode WM_StartMP(WMCallbackFunc callback, u16 *recvBuf, u16 recvBufSize, u16 *sendBuf, u16 sendBufSize, u16 mpFreq) {
    WMMPTmpParam tmpParam;

    MIi_CpuClear32(0, (&tmpParam), (sizeof(tmpParam)));

    tmpParam.mask         = 0x0002 | 0x0001;
    tmpParam.minFrequency = mpFreq;
    tmpParam.frequency    = mpFreq;

    return WMi_StartMP(callback, recvBuf, recvBufSize, sendBuf, sendBufSize, &tmpParam);
}
