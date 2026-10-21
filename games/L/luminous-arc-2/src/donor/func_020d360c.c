/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WH_StateInMeasureChannel from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov105_wireless/Ov105_WH_StateInMeasureChannel.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef void (*WMCallbackFunc)(void *arg);
enum {
    WM_ERRCODE_SUCCESS            = 0,
    WM_ERRCODE_FAILED             = 1,
    WM_ERRCODE_OPERATING          = 2,
    WM_ERRCODE_ILLEGAL_STATE      = 3,
    WM_ERRCODE_WM_DISABLE         = 4,
    WM_ERRCODE_NO_KEYSET          = 5,
    WM_ERRCODE_INVALID_PARAM      = 6,
    WM_ERRCODE_NO_CHILD           = 7,
    WM_ERRCODE_FIFO_ERROR         = 8,
    WM_ERRCODE_TIMEOUT            = 9,
    WM_ERRCODE_SEND_QUEUE_FULL    = 10,
    WM_ERRCODE_NO_ENTRY           = 11,
    WM_ERRCODE_OVER_MAX_ENTRY     = 12,
    WM_ERRCODE_INVALID_POLLBITMAP = 13,
    WM_ERRCODE_NO_DATA            = 14,
    WM_ERRCODE_SEND_FAILED        = 15
};
typedef int WMErrCode;
typedef enum WHSysState {
    WH_SYSSTATE_STOP = 0,
    WH_SYSSTATE_IDLE,
    WH_SYSSTATE_SCANNING,
    WH_SYSSTATE_BUSY,
    WH_SYSSTATE_CONNECTED,
    WH_SYSSTATE_DATASHARING,
    WH_SYSSTATE_KEYSHARING,
    WH_SYSSTATE_MEASURECHANNEL,
    WH_SYSSTATE_CONNECT_FAIL,
    WH_SYSSTATE_ERROR,
    WH_SYSSTATE_FATAL
} WHSysState;
extern void func_020d2084(int nState);
extern void func_020d2104(int nError);
extern u16 func_02010c3c(void);
extern WMErrCode func_020d3784(WMCallbackFunc func, int channel);
extern u16 func_020d360c(u16 channel);
extern void func_020d36a8(void *arg);
u16 func_020d360c(u16 channel) {
    u16 allowedChannel;
    u16 result;

    allowedChannel = func_02010c3c();

    if (allowedChannel == 0x8000) {
        func_020d2104((WMErrCode) WM_ERRCODE_ILLEGAL_STATE);
        func_020d2084(WH_SYSSTATE_ERROR);
        return WM_ERRCODE_ILLEGAL_STATE;
    }

    if (allowedChannel == 0) {
        func_020d2104((WMErrCode) 22);
        func_020d2084(WH_SYSSTATE_ERROR);
        return 24;
    }

    while (((1 << (channel - 1)) & allowedChannel) == 0) {
        channel++;
        if (channel > 16) {
            return 24;
        }
    }

    result = func_020d3784(func_020d36a8, channel);
    if (result != WM_ERRCODE_OPERATING) {
        return result;
    }

    return result;
}
