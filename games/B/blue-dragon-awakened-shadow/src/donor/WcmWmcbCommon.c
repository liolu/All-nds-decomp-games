/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WcmWmcbCommon from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
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
typedef enum WMApiid {
    WM_APIID_INITIALIZE = 0,
    WM_APIID_RESET,
    WM_APIID_END,
    WM_APIID_ENABLE,
    WM_APIID_DISABLE,
    WM_APIID_POWER_ON,
    WM_APIID_POWER_OFF,
    WM_APIID_SET_P_PARAM,
    WM_APIID_START_PARENT,
    WM_APIID_END_PARENT,
    WM_APIID_START_SCAN,
    WM_APIID_END_SCAN,
    WM_APIID_START_CONNECT,
    WM_APIID_DISCONNECT,
    WM_APIID_START_MP,
    WM_APIID_SET_MP_DATA,
    WM_APIID_END_MP,
    WM_APIID_START_DCF,
    WM_APIID_SET_DCF_DATA,
    WM_APIID_END_DCF,
    WM_APIID_SET_WEPKEY,
    WM_APIID_START_KS,
    WM_APIID_END_KS,
    WM_APIID_GET_KEYSET,
    WM_APIID_SET_GAMEINFO,
    WM_APIID_SET_BEACON_IND,
    WM_APIID_START_TESTMODE,
    WM_APIID_STOP_TESTMODE,
    WM_APIID_VALARM_MP,
    WM_APIID_SET_LIFETIME,
    WM_APIID_MEASURE_CHANNEL,
    WM_APIID_INIT_W_COUNTER,
    WM_APIID_GET_W_COUNTER,
    WM_APIID_SET_ENTRY,
    WM_APIID_AUTO_DEAUTH,
    WM_APIID_SET_MP_PARAMETER,
    WM_APIID_SET_BEACON_PERIOD,
    WM_APIID_AUTO_DISCONNECT,
    WM_APIID_START_SCAN_EX,
    WM_APIID_SET_WEPKEY_EX,
    WM_APIID_SET_PS_MODE,
    WM_APIID_START_TESTRXMODE,
    WM_APIID_STOP_TESTRXMODE,
    WM_APIID_KICK_MP_PARENT,
    WM_APIID_KICK_MP_CHILD,
    WM_APIID_KICK_MP_RESUME,
    WM_APIID_ASYNC_KIND_MAX,
    WM_APIID_INDICATION = 128,
    WM_APIID_PORT_SEND,
    WM_APIID_PORT_RECV,
    WM_APIID_READ_STATUS,
    WM_APIID_UNKNOWN = 255
} WMApiid;
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
extern WMErrCode WM_Finish(void);
extern WMErrCode WM_Disable(WMCallbackFunc callback);
extern WMErrCode WM_PowerOn(WMCallbackFunc callback);
extern WMErrCode WM_StartConnectEx(WMCallbackFunc callback, const WMBssDesc *pInfo, const u8 *ssid, BOOL powerSave,
                                   u16 authMode);
extern WMErrCode WM_SetWEPKeyEx(WMCallbackFunc callback, u16 wepmode, u16 wepkeyid, const u8 *wepkey);
extern WMErrCode WM_SetBeaconIndication(WMCallbackFunc callback, u16 flag);
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
extern WCMWork *wcmw;
extern void WcmNotify(s16 result, void *para0, void *para1, s32 para2);
extern void WcmSetPhase(u32 phase);
extern void WcmWmcbCommon(void *arg);
extern void WcmWmcbConnect(void *arg);
void WcmNotify(s16 result, void *para0, void *para1, s32 para2);
void WcmSetPhase(u32 phase);
void WcmWmcbCommon(void *arg) {
    WMCallback *cb     = (WMCallback *) arg;
    WMErrCode wmResult = WM_ERRCODE_MAX;

    switch (cb->errcode) {
        case WM_ERRCODE_SUCCESS:

            switch (cb->apiid) {
                case WM_APIID_ENABLE:

                    wmResult = WM_PowerOn(WcmWmcbCommon);
                    break;

                case WM_APIID_DISABLE:

                    wmResult = WM_Finish();
                    switch (wmResult) {
                        case WM_ERRCODE_SUCCESS:
                            WcmSetPhase(1);
                            WcmNotify(0, 0, 0, 1635);
                            break;

                        case WM_ERRCODE_WM_DISABLE:
                            ((void) 0);

                        default:
                            WcmSetPhase(11);
                            WcmNotify(7, 0, 0, 1644);
                    }

                    return;

                case WM_APIID_POWER_ON:
                    WcmSetPhase(3);
                    WcmNotify(0, 0, 0, 1651);
                    return;

                case WM_APIID_POWER_OFF:

                    wmResult = WM_Disable(WcmWmcbCommon);
                    break;

                case WM_APIID_SET_LIFETIME:

                    wmResult = WM_SetBeaconIndication(WcmWmcbCommon, 0);
                    break;

                case WM_APIID_SET_BEACON_IND:

                    wmResult = WM_SetWEPKeyEx(WcmWmcbCommon, (u16) (wcmw->wepDesc.mode), (u16) (wcmw->wepDesc.keyId),
                                              (const u8 *) (wcmw->wepDesc.key));
                    break;

                case WM_APIID_SET_WEPKEY_EX:

                    wmResult = WM_StartConnectEx(
                        WcmWmcbConnect, &(wcmw->bssDesc), ((void *) 0),
                        ((wcmw->option & (0x00020000 | 0x00010000)) == (0x00020000 | 0x00010000) ? 0 : 1),
                        ((wcmw->option & (0x00080000 | 0x00040000)) == (0x00080000 | 0x00040000) ? (u16) 1 : (u16) 0));
                    break;
            }

            switch (wmResult) {
                case WM_ERRCODE_OPERATING:
                    break;

                case WM_ERRCODE_FIFO_ERROR:
#line 1285
                    WcmSetPhase(12);
                    WcmNotify(1, (wcmw->notifyId == 5 ? &(wcmw->bssDesc) : 0), 0, 1711);
                    break;

                case WM_ERRCODE_ILLEGAL_STATE:
                    ((void) 0);

                default:
                    WcmSetPhase(11);
                    WcmNotify(7, (wcmw->notifyId == 5 ? &(wcmw->bssDesc) : 0), 0, 1720);
            }
            break;

        case WM_ERRCODE_FAILED:
#line 1332
            WcmSetPhase(12);
            WcmNotify(1, (wcmw->notifyId == 5 ? &(wcmw->bssDesc) : 0), 0, 1758);
            break;

        case WM_ERRCODE_ILLEGAL_STATE:
        case WM_ERRCODE_WM_DISABLE:
            ((void) 0);

        default:
            WcmSetPhase(11);
            WcmNotify(7, (wcmw->notifyId == 5 ? &(wcmw->bssDesc) : 0), 0, 1768);
    }
}
void WcmWmcbConnect(void *arg);
