/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WcmWmcbEndScan from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
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
typedef struct WMCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
} WMCallback;
extern void WcmNotify(s16 result, void *para0, void *para1, s32 para2);
extern void WcmSetPhase(u32 phase);
extern void WcmWmReset(void);
extern void WcmWmcbEndScan(void *arg);
void WcmNotify(s16 result, void *para0, void *para1, s32 para2);
void WcmSetPhase(u32 phase);
void WcmWmReset(void);
void WcmWmcbEndScan(void *arg) {
    WMCallback *cb = (WMCallback *) arg;

    switch (cb->errcode) {
        case WM_ERRCODE_SUCCESS:
            WcmSetPhase(3);
            WcmNotify(0, 0, 0, 1923);
            break;

        case WM_ERRCODE_FAILED:

            ((void) 0);
            WcmWmReset();
            break;

        case WM_ERRCODE_ILLEGAL_STATE:
        case WM_ERRCODE_WM_DISABLE:
            ((void) 0);

        default:
            WcmSetPhase(11);
            WcmNotify(7, 0, 0, 1939);
    }
}
