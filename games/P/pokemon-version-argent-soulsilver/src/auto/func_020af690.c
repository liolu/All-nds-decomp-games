/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af690 from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
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
extern WMErrCode func_020df3b8(WMCallbackFunc callback);
extern WMErrCode func_020df94c(WMCallbackFunc callback, const WMBssDesc *pInfo, const u8 *ssid, BOOL powerSave, u16 authMode);
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
extern WCMWork *data_021d600c;
extern void func_020ae864(s16 result, void *para0, void *para1, s32 para2);
extern void func_020ae8fc(u32 phase);
extern void func_020aeb20(void *arg);
extern void func_020af138(void *arg);
extern void func_020af690(void *arg);
void func_020ae864(s16 result, void *para0, void *para1, s32 para2);
void func_020ae8fc(u32 phase);
void func_020aeb20(void *arg);
void func_020af138(void *arg);
void func_020af690(void *arg) {
    WMCallback *cb     = (WMCallback *) arg;
    WMErrCode wmResult = WM_ERRCODE_MAX;

    switch (cb->errcode) {
        case WM_ERRCODE_SUCCESS:

            data_021d600c->resetting = 0;

            data_021d600c->authId = 0;

            switch (data_021d600c->phase) {
                case 5:
                case 6:

                    func_020ae8fc(3);
                    func_020ae864(1, 0, 0, 2293);
                    break;

                case 7:

                    func_020ae8fc(3);
                    func_020ae864(0, 0, 0, 2299);
                    break;

                case 8:

                {
                    u16 wlStatus = data_021d600c->wlStatusOnConnectFail;

                    data_021d600c->wlStatusOnConnectFail = 0x0000;

                    if (wlStatus == 18) {
                        if ((data_021d600c->bssDesc.rateSet.support & 0x0024) != 0x0024) {
                            ((void) 0);
                            data_021d600c->bssDesc.rateSet.support |= 0x0024;

                            wmResult = func_020df94c(
                                func_020af138, &(data_021d600c->bssDesc), ((void *) 0),
                                ((data_021d600c->option & (0x00020000 | 0x00010000)) == (0x00020000 | 0x00010000) ? 0 : 1),
                                ((data_021d600c->option & (0x00080000 | 0x00040000)) == (0x00080000 | 0x00040000) ? (u16) 1
                                                                                                                  : (u16) 0));

                            switch (wmResult) {
                                case WM_ERRCODE_OPERATING:
                                    break;

                                case WM_ERRCODE_FIFO_ERROR:
                                    func_020ae8fc(12);
                                    func_020ae864(1, &(data_021d600c->bssDesc), (void *) wlStatus, 2332);
                                    break;

                                case WM_ERRCODE_ILLEGAL_STATE:
                                    ((void) 0);

                                default:
                                    func_020ae8fc(11);
                                    func_020ae864(7, &(data_021d600c->bssDesc), (void *) wlStatus, 2341);
                            }

                            return;
                        }
                    }

                    func_020ae8fc(3);
                    func_020ae864(1, &(data_021d600c->bssDesc), (void *) wlStatus, 2349);
                } break;

                case 9:
                case 12:

                    func_020ae8fc(3);
                    func_020ae864(0, &(data_021d600c->bssDesc), (void *) 1, 2357);

                    break;

                case 10:

                    func_020ae8fc(3);
                    func_020ae864(0, &(data_021d600c->bssDesc), 0, 2364);
                    break;

                case 13:

                    wmResult = func_020df3b8(func_020aeb20);
                    switch (wmResult) {
                        case WM_ERRCODE_OPERATING:
                            break;

                        case WM_ERRCODE_FIFO_ERROR:
                            ((void) 0);
                            func_020ae8fc(12);
                            func_020ae864(1, 0, 0, 2378);
                            break;

                        case WM_ERRCODE_ILLEGAL_STATE:
                            ((void) 0);

                        default:
                            func_020ae8fc(11);
                            func_020ae864(7, 0, 0, 2387);
                    }
                    break;

                default:
                    func_020ae8fc(11);
                    func_020ae864(7, 0, (void *) (data_021d600c->phase), 2393);
            }
            break;

        default:

            func_020ae8fc(11);
            func_020ae864(7, 0, 0, 2400);
    }
}
