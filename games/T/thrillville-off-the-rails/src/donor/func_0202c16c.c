/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* WM_SetMPFrequency from https://github.com/ntrtwl/NitroSDK libraries/wm/src/wm_mp.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern void func_020211c8(u32 data, void *destp, u32 size);
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    ((void) 0);
    ((void) 0);

    func_020211c8(data, dest, size);
}
static inline void MI_CpuClear32(void *dest, u32 size) {
    MI_CpuFill32(dest, 0, size);
}
typedef enum WMErrCode {
    WM_ERRCODE_SUCCESS            = 0,
    WM_ERRCODE_FAILED             = 1,
    WM_ERRCODE_OPERATING          = 2,
    WM_ERRCODE_ILLEGAL_STATE      = 3,
    WM_ERRCODE_WM_DISABLE         = 4,
    WM_ERRCODE_NO_KEYSET          = 5,
    WM_ERRCODE_NO_DATASET         = 5,
    WM_ERRCODE_INVALID_PARAM      = 6,
    WM_ERRCODE_NO_CHILD           = 7,
    WM_ERRCODE_FIFO_ERROR         = 8,
    WM_ERRCODE_TIMEOUT            = 9,
    WM_ERRCODE_SEND_QUEUE_FULL    = 10,
    WM_ERRCODE_NO_ENTRY           = 11,
    WM_ERRCODE_OVER_MAX_ENTRY     = 12,
    WM_ERRCODE_INVALID_POLLBITMAP = 13,
    WM_ERRCODE_NO_DATA            = 14,
    WM_ERRCODE_SEND_FAILED        = 15,
    WM_ERRCODE_DCF_TEST,
    WM_ERRCODE_WL_INVALID_PARAM,
    WM_ERRCODE_WL_LENGTH_ERR,
    WM_ERRCODE_FLASH_ERROR,
    WM_ERRCODE_MAX
} WMErrCode;
typedef void (*WMCallbackFunc)(void *arg);
typedef struct WMMPParam {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u16 maxFrequency;
    u16 parentSize;
    u16 childSize;
    u16 parentInterval;
    u16 childInterval;
    u16 parentVCount;
    u16 childVCount;
    u16 defaultRetryCount;
    u8 minPollBmpMode;
    u8 singlePacketMode;
    u8 ignoreFatalErrorMode;
    u8 ignoreSizePrecheckMode;
} WMMPParam;
extern WMErrCode func_0202c1b4(WMCallbackFunc callback, const WMMPParam *param);
extern WMErrCode func_0202c16c(WMCallbackFunc callback, u16 mpFreq);
extern const u16(*ctrdgi_fl_maxtime);
WMErrCode func_0202c1b4(WMCallbackFunc callback, const WMMPParam *param);
WMErrCode func_0202c16c(WMCallbackFunc callback, u16 mpFreq) {
    WMMPParam param;

    MI_CpuClear32(&param, sizeof(param));

    param.mask         = 0x0002 | 0x0001;
    param.minFrequency = mpFreq;
    param.frequency    = mpFreq;

    return func_0202c1b4(callback, &param);
}
