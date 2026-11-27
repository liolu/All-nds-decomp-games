/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WCM_ConnectAsync from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed short int s16;
typedef signed long s32;
typedef u32 OSIntrMode;
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
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
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    MI_CpuFill8(dest, 0, size);
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
extern WMErrCode WM_SetLifeTime(WMCallbackFunc callback, u16 tableNumber, u16 camLifeTime, u16 frameLifeTime, u16 mpLifeTime);
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
typedef struct WCMWepDesc {
    u8 mode;
    u8 keyId;
    u8 key[80];
} WCMWepDesc;
extern s32 WCM_ConnectAsync(void *bssDesc, void *wepDesc, u32 option);
extern u32 WCM_UpdateOption(u32 option);
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
extern WCMWork *wcmw;
extern void WcmSetPhase(u32 phase);
extern void WcmWmcbCommon(void *arg);
s32 WCM_ConnectAsync(void *bssDesc, void *wepDesc, u32 option) {
    OSIntrMode e = OS_DisableInterrupts();

    if (wcmw == ((void *) 0)) {
        ((void) 0);
        (void) OS_RestoreInterrupts(e);
        return 1;
    }

    switch (wcmw->phase) {
        case 3:

            if (bssDesc == ((void *) 0)) {
                ((void) 0);
                (void) OS_RestoreInterrupts(e);
                return 1;
            }

            if (((WMBssDesc *) bssDesc)->gameInfoLength > 0) {
                ((void) 0);
                (void) OS_RestoreInterrupts(e);
                return 1;
            }

            if (wepDesc != ((void *) 0)) {
                if ((((WCMWepDesc *) wepDesc)->mode >= 4) || (((WCMWepDesc *) wepDesc)->keyId >= 4)) {
                    ((void) 0);
                    (void) OS_RestoreInterrupts(e);
                    return 1;
                }

                wcmw->wepDesc.mode  = ((WCMWepDesc *) wepDesc)->mode;
                wcmw->wepDesc.keyId = ((WCMWepDesc *) wepDesc)->keyId;
                if (wcmw->wepDesc.mode == 0) {
                    MI_CpuClear8(wcmw->wepDesc.key, 80);
                } else {
                    MI_CpuCopy8(((WCMWepDesc *) wepDesc)->key, wcmw->wepDesc.key, 80);
                }
            } else {
                MI_CpuClear8(&(wcmw->wepDesc), sizeof(WCMWepDesc));
            }

            MI_CpuCopy8(bssDesc, &(wcmw->bssDesc), sizeof(WMBssDesc));
#line 561
            wcmw->bssDesc.rateSet.support = (u16) (0x0003 | wcmw->bssDesc.rateSet.basic);
            (void) WCM_UpdateOption(option);
            break;

        case 8:
            (void) OS_RestoreInterrupts(e);
            return 2;

        case 9:
            (void) OS_RestoreInterrupts(e);
            return 0;

        default:
            ((void) 0);
            (void) OS_RestoreInterrupts(e);
            return 1;
    }

    {
        WMErrCode wmResult;

        wmResult = WM_SetLifeTime(WcmWmcbCommon, 0xffff, 80, 0xffff, 0xffff);
        switch (wmResult) {
            case WM_ERRCODE_OPERATING:
                WcmSetPhase(8);
                wcmw->notifyId = 5;
                break;

            case WM_ERRCODE_FIFO_ERROR:
                ((void) 0);
                (void) OS_RestoreInterrupts(e);
                return 4;

            case WM_ERRCODE_ILLEGAL_STATE:
                ((void) 0);

            default:
                WcmSetPhase(11);
                (void) OS_RestoreInterrupts(e);
                return 7;
        }
    }

    (void) OS_RestoreInterrupts(e);
    return 3;
}
u32 WCM_UpdateOption(u32 option);
void WcmSetPhase(u32 phase);
void WcmWmcbCommon(void *arg);
