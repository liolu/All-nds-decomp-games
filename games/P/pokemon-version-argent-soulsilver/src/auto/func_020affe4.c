/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020affe4 from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/cpsif.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed short int s16;
typedef signed long s32;
typedef void (*WCMRecvInd)(const u8 *srcAddr, const u8 *dstAddr, const u8 *buf, s32 len);
extern s32 func_020affe4(const u8 *dstAddr, const u8 *header, s32 headerLen, const u8 *body, s32 bodyLen);
typedef u32 OSIntrMode;
extern OSIntrMode _Z20DisableIRQInterruptsv(void);
extern OSIntrMode _Z20SetIRQInterruptStatei(OSIntrMode state);
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;

    OSThreadQueue *queue;
    OSThreadLink link;

    OSMutex *mutex;
    OSMutexQueue mutexQueue;

    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;

    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;
    int systemErrno;
};
extern void func_020d1e7c(OSThreadQueue *queue);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;

    OSMutexLink link;
};
extern void func_020d2618(OSMutex *mutex);
extern void func_020d269c(OSMutex *mutex);
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
extern void func_020d4a50(const void *src, void *dest, u32 size);
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
extern WMErrCode func_020dffbc(WMCallbackFunc callback, const u8 *destAdr, const u16 *sendData, u16 sendDataSize);
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
extern WCMWork *func_020ae4ec(void);
typedef struct WCMCpsifWork {
    u8 initialized;
    u8 reserved[3];
    OSThreadQueue sendQ;
    OSMutex sendMutex;
    WMErrCode sendResult;
    WCMRecvInd recvCallback;
} WCMCpsifWork;
extern WCMCpsifWork data_021d6010;
extern void func_020b016c(void *arg);
s32 func_020affe4(const u8 *dstAddr, const u8 *header, s32 headerLen, const u8 *body, s32 bodyLen) {
    OSIntrMode e        = _Z20DisableIRQInterruptsv();
    volatile WCMWork *w = func_020ae4ec();

    if (w == ((void *) 0)) {
        ((void) 0);
        (void) _Z20SetIRQInterruptStatei(e);
        return (-1);
    }
#line 258
    func_020d2618(&(data_021d6010.sendMutex));

    w = func_020ae4ec();
    if (w == ((void *) 0)) {
        func_020d269c(&(data_021d6010.sendMutex));
        (void) _Z20SetIRQInterruptStatei(e);
        return (-1);
    }

    if ((w->phase != 9) || (w->resetting == 1)) {
        func_020d269c(&(data_021d6010.sendMutex));
        (void) _Z20SetIRQInterruptStatei(e);
        return (-4);
    }

    func_020d4a50(header, (void *) (w->sendBuf), (u32) headerLen);
    if (bodyLen > 0) {
        func_020d4a50(body, (void *) (((u8 *) w->sendBuf) + headerLen), (u32) bodyLen);
    }

    {
        WMErrCode wmResult;

        wmResult = func_020dffbc(func_020b016c, (const u8 *) dstAddr, (const u16 *) (w->sendBuf), (u16) (headerLen + bodyLen));
        switch (wmResult) {
            case WM_ERRCODE_OPERATING:
                break;
            case WM_ERRCODE_ILLEGAL_STATE:
            case WM_ERRCODE_INVALID_PARAM:
            case WM_ERRCODE_FIFO_ERROR:
            default:
                ((void) 0);
                func_020d269c(&(data_021d6010.sendMutex));
                (void) _Z20SetIRQInterruptStatei(e);
                return (-5);
        }
    }

    func_020d1e7c(&(data_021d6010.sendQ));

    switch (data_021d6010.sendResult) {
        case WM_ERRCODE_SUCCESS:
            break;
        case WM_ERRCODE_FAILED:
        default:
            ((void) 0);
            func_020d269c(&(data_021d6010.sendMutex));
            (void) _Z20SetIRQInterruptStatei(e);
            return (-5);
    }

    func_020d269c(&(data_021d6010.sendMutex));
    (void) _Z20SetIRQInterruptStatei(e);

    return headerLen + bodyLen;
}
void func_020b016c(void *arg);
