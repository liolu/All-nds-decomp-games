/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02094b84 from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed short int s16;
typedef signed long s32;
typedef struct OSiAlarm OSAlarm;
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
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
typedef struct WMDcfRecvBuf {
    u16 frameID;
    u16 rsv1[2];
    u16 length;
    u16 rsv2[3];
    u16 rate_rssi;
    u16 rsv3[4];
    u8 destAdrs[6];
    u8 srcAdrs[6];
    u16 rsv4[4];
    u16 data[2];
} WMDcfRecvBuf, WMdcfRecvBuf;
typedef struct WMGameInfo {
    u16 magicNumber;
    u8 ver;
    u8 platform;
    u32 ggid;
    u16 tgid;
    u8 userGameInfoLength;
    union {
        u8 gameNameCount_attribute;
        u8 attribute;
    };
    u16 parentMaxSize;
    u16 childMaxSize;
    union {
        u16 userGameInfo[112 / sizeof(u16)];
        struct {
            u16 userName[8 / sizeof(u16)];
            u16 gameName[16 / sizeof(u16)];
            u16 padd1[44];
        } old_type;
    };
} WMGameInfo, WMgameInfo;
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
    WMGameInfo gameInfo;
} WMBssDesc, WMbssDesc;
typedef struct WMScanExParam {
    WMBssDesc *scanBuf;
    u16 scanBufSize;
    u16 channelList;
    u16 maxChannelTime;
    u8 bssid[6];
    u16 scanType;
    u16 ssidLength;
    u8 ssid[32];

    u16 ssidMatchLength;
    u16 rsv2[7];

} WMScanExParam, WMscanExParam;
typedef struct WMCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
} WMCallback;
extern WMErrCode func_02011730(WMCallbackFunc callback, u16 aid);
typedef struct WCMConfig {
    s32 dmano;
    void *pbdbuffer;
    s32 nbdbuffer;
    s32 nbdmode;
} WCMConfig;
typedef union WCMNoticeParameter {
    s32 n;
    void *p;
} WCMNoticeParameter;
typedef struct WCMNotice {
    s16 notify;
    s16 result;
    WCMNoticeParameter parameter[3];
} WCMNotice;
typedef void (*WCMNotify)(WCMNotice *arg);
typedef struct WCMWork {
    u8 wmWork[((((512 + (256 + 512) + 2048 + 256 + 256)) + 0x01f) & ~(0x01f))];
    u8 sendBuf[((((1508) + 0x01f) & ~(0x01f)))];
    u8 recvBuf[(((((1508 + (sizeof(WMDcfRecvBuf) - 4))) + 0x01f) & ~(0x01f))) * 2];
    WMBssDesc bssDesc;
    struct {
        u8 key[80];
        u8 mode;
        u8 keyId;
        u8 reserved[(((80 + 2) + 0x01f) & ~(0x01f)) - (80 + 2)];
    } wepDesc;
    u32 phase;
    u32 option;
    u16 maxScanTime;
    u8 apListLock;
    u8 resetting;
    WCMConfig config;
    WCMNotify notify;
    s16 notifyId;
    u16 authId;
    u32 scanCount;
    WMScanExParam scanExParam;
    OSAlarm keepAliveAlarm;
    u16 wlStatusOnConnectFail;
    u8 reserved[6];
} WCMWork;
extern WCMWork *data_02170cc0;
extern void func_02093e74(s16 result, void *para0, void *para1, s32 para2);
extern void func_02093f0c(u32 phase);
extern void func_0209405c(void);
extern void func_020949ac(void *arg);
extern void func_02094b84(void *arg);
void func_02093e74(s16 result, void *para0, void *para1, s32 para2);
void func_02093f0c(u32 phase);
void func_0209405c(void);
void func_020949ac(void *arg);
void func_02094b84(void *arg) {
    WMCallback *cb     = (WMCallback *) arg;
    WMErrCode wmResult = WM_ERRCODE_MAX;

    switch (cb->errcode) {
        case WM_ERRCODE_SUCCESS:
            if (data_02170cc0->phase == 12) {

                func_02093f0c(10);
                func_0209405c();
            } else {

                wmResult = func_02011730(func_020949ac, 0);
                switch (wmResult) {
                    case WM_ERRCODE_OPERATING:
                        break;

                    case WM_ERRCODE_FIFO_ERROR:
                        ((void) 0);
                        func_02093f0c(12);
                        func_02093e74(1, &(data_02170cc0->bssDesc), 0, 2228);
                        break;

                    case WM_ERRCODE_ILLEGAL_STATE:

                        ((void) 0);
                        func_02093f0c(10);
                        func_0209405c();
                        break;

                    default:
                        func_02093f0c(11);
                        func_02093e74(7, &(data_02170cc0->bssDesc), 0, 2240);
                }
            }
            break;

        case WM_ERRCODE_FAILED:
        case WM_ERRCODE_ILLEGAL_STATE:

            ((void) 0);
            func_02093f0c(10);
            func_0209405c();
            break;

        case WM_ERRCODE_WM_DISABLE:
            ((void) 0);

        default:
            func_02093f0c(11);
            func_02093e74(7, &(data_02170cc0->bssDesc), 0, 2259);
    }
}
