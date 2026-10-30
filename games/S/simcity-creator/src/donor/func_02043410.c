/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WH_StateOutSetParentParam from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov105_wireless/Ov105_WH_StateOutSetParentParam.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
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
typedef struct WMParentParam {
    u16 *userGameInfo;
    u16 userGameInfoLength;
    u16 padding;
    u32 ggid;
    u16 tgid;
    u16 entryFlag;
    u16 maxEntry;
    u16 multiBootFlag;
    u16 KS_Flag;
    u16 CS_Flag;
    u16 beaconPeriod;
    u16 rsv1[8];
    u16 rsv2[4];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u16 rsv[4];
} WMParentParam;
typedef struct WMBssDesc {
    u16 length;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
    u16 gameInfoLength;
    u16 otherElementCount;
    u8 gameInfo[128];
} WMBssDesc;
typedef struct WMScanParam {
    WMBssDesc *scanBuf;
    u16 channel;
    u16 maxChannelTime;
    u8 bssid[6];
    u16 rsv[9];
} WMScanParam;
enum {
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
};
typedef struct WMCallback {
    u16 apiid;
    u16 errcode;
} WMCallback;
typedef struct WMStartParentCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u16 reason;
    u8 macAddress[6];
    u16 aid;
} WMStartParentCallback;
typedef void (*WhScanCallbackFunc)(WMBssDesc *pBssDesc);
typedef void (*WhReceiverFunc)(u16 nAid, u16 *pData, u16 nSize);
typedef BOOL (*WhJudgeAcceptFunc)(WMStartParentCallback *pCb);
typedef u16 (*WhParentWEPKeyGeneratorFunc)(u16 *pWepKey, const WMParentParam *pParentParam);
typedef u16 (*WhChildWEPKeyGeneratorFunc)(u16 *pWepKey, const WMBssDesc *pBssDesc);
typedef struct WhStatics {
    u16 nChannel;
    u16 nMeasuredChannel;
    u16 nMpFreq;
    u16 nConnectChannel;
    u16 nChannelBusyRatio;
    u16 nChannelBitmap;
    u16 nDisconnectReason;
    u16 nField0e;
    WhScanCallbackFunc pScanCallback;
    u8 *pRecvBuffer;
    u32 nRand;
    u8 *pSendBuffer;
    WhReceiverFunc pReceiver;
    int nSysState;
    u32 nRecvBufferSize;
    u32 nSendBufferSize;
    int nErrCode;
    int nConnectMode;
    WhJudgeAcceptFunc pJudgeAccept;
    void *pField3c;
    WhChildWEPKeyGeneratorFunc pChildWEPKeyGenerator;
    WhParentWEPKeyGeneratorFunc pParentWEPKeyGenerator;
    int bFilterByGameInfo;
    void *pWmBuffer;
    u8 reserved50[0x10];
    u16 aWEPKey[16];
    WMScanParam scanParam;
    u8 aConnectionSsid[32];
    WMParentParam parentParam;
    WMBssDesc bssDesc;
} WhStatics;
extern WhStatics data_020dafa0;
extern void func_02043350(int nState);
extern void func_020433b4(int nError);
extern BOOL func_02043474(void);
extern BOOL func_0204350c(void);
void func_02043410(void *arg) {
    WMCallback *cb = (WMCallback *) arg;

    if (cb->errcode != WM_ERRCODE_SUCCESS) {
        func_020433b4((WMErrCode) cb->errcode);
        func_02043350(WH_SYSSTATE_ERROR);
        return;
    }

    if (data_020dafa0.pParentWEPKeyGenerator != ((void *) 0)) {
        if (!func_02043474()) {
            func_02043350(WH_SYSSTATE_ERROR);
        }
    } else {
        if (!func_0204350c()) {
            func_02043350(WH_SYSSTATE_ERROR);
        }
    }
}
