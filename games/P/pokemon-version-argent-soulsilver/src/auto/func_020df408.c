/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020df408 from https://github.com/ntrtwl/NitroSDK libraries/wm/src/wm_standard.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
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
extern WMErrCode func_020df408(void *wmSysBuf, WMCallbackFunc callback, u16 dmaNo, BOOL blink);
extern WMErrCode func_020df420(void *wmSysBuf, WMCallbackFunc callback, u16 dmaNo, u32 miscFlags);
extern const u16(*ctrdgi_fl_maxtime);
WMErrCode func_020df408(void *wmSysBuf, WMCallbackFunc callback, u16 dmaNo, BOOL blink) {
    u32 miscFlags = 0x0001;

    if (!blink) {
        miscFlags |= 0x0002;
    }

    return func_020df420(wmSysBuf, callback, dmaNo, miscFlags);
}
WMErrCode func_020df420(void *wmSysBuf, WMCallbackFunc callback, u16 dmaNo, u32 miscFlags);
