/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02095390 from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/aplist.c (license: none), reused by
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
typedef struct WCMApList {
    u8 state;
    u8 reserved;
    u16 linkLevel;
    u32 index;
    void *previous;
    void *next;
    u32 data[(((192) + 0x03) & ~(0x03)) / sizeof(u32)];
} WCMApList;
typedef struct WCMApListHeader {
    u32 count;
    WCMApList *head;
    WCMApList *tail;
} WCMApListHeader;
extern WCMWork *func_02093afc(void);
extern void func_02095390(WCMApList *aplist);
void func_02095390(WCMApList *aplist) {
    WCMWork *w               = func_02093afc();
    WCMApListHeader *pHeader = (WCMApListHeader *) (w->config.pbdbuffer);
    WCMApList *p             = ((void *) 0);

    if (aplist == ((void *) 0)) {
        return;
    }

    if ((pHeader != ((void *) 0)) && (w->config.nbdbuffer > sizeof(WCMApListHeader))) {

        p = pHeader->head;
        while (p) {
            if (p == aplist) {

                if (p->previous) {
                    ((WCMApList *) (p->previous))->next = p->next;
                } else {
                    pHeader->head = p->next;
                }

                if (p->next) {
                    ((WCMApList *) (p->next))->previous = p->previous;
                } else {
                    pHeader->tail = p->previous;
                }
                break;
            }

            p = p->next;
        }

        aplist->next     = ((void *) 0);
        aplist->previous = pHeader->tail;
        pHeader->tail    = aplist;

        if (aplist->previous) {
            ((WCMApList *) (aplist->previous))->next = aplist;
        } else {
            pHeader->head = aplist;
        }

        if (p == ((void *) 0)) {
            aplist->index = pHeader->count;
            pHeader->count++;
        }
    }
}
