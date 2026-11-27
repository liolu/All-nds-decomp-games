/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ae210 from https://github.com/ntrtwl/NitroWiFi libraries/wcm/src/system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
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
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;

    OSMutexLink link;
};
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
extern void _Z24InvalidateDataCacheRangePKvj(void *startAddr, u32 nBytes);
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
typedef enum WMState {
    WM_STATE_READY = 0,
    WM_STATE_STOP,
    WM_STATE_IDLE,
    WM_STATE_CLASS1,
    WM_STATE_TESTMODE,
    WM_STATE_SCAN,
    WM_STATE_CONNECT,
    WM_STATE_PARENT,
    WM_STATE_CHILD,
    WM_STATE_MP_PARENT,
    WM_STATE_MP_CHILD,
    WM_STATE_DCF_CHILD,
    WM_STATE_TESTMODE_RX,
    WM_STATE_MAX
} WMState;
typedef void (*WMCallbackFunc)(void *arg);
typedef struct {
    u16 next;
    u16 port;
    u16 destBitmap;
    u16 restBitmap;
    u16 sentBitmap;
    u16 sendingBitmap;
    u16 padding;
    u16 size;
    u16 seqNo;
    u16 retryCount;
    const u16 *data;
    WMCallbackFunc callback;
    void *arg;
} WMPortSendQueueData;
typedef struct {
    u16 head;
    u16 tail;
} WMPortSendQueue;
typedef struct WMMpRecvBuf {
    u16 rsv1[3];
    u16 length;
    u16 rsv2[1];
    u16 ackTimeStamp;
    u16 timeStamp;
    u16 rate_rssi;
    u16 rsv3[2];
    u16 rsv4[2];
    u8 destAdrs[6];
    u8 srcAdrs[6];
    u16 rsv5[3];
    u16 seqCtrl;
    u16 txop;
    u16 bitmap;
    u16 wmHeader;
    u16 data[2];
} WMMpRecvBuf, WMmpRecvBuf;
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
    u16 rsv1[8 / sizeof(u16)];
    u16 rsv2[16 / sizeof(u16)];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u16 rsv[4];
} WMParentParam, WMpparam;
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
typedef struct WMStatus {
    u16 state;
    u16 BusyApiid;
    BOOL apiBusy;
    BOOL scan_continue;
    BOOL mp_flag;
    BOOL dcf_flag;
    BOOL ks_flag;
    BOOL dcf_sendFlag;
    BOOL VSyncFlag;
    u8 wlVersion[8];
    u16 macVersion;
    u16 rfVersion;
    u16 bbpVersion[4 / sizeof(u16)];
    u16 mp_parentSize;
    u16 mp_childSize;
    u16 mp_parentMaxSize;
    u16 mp_childMaxSize;
    u16 mp_sendSize;
    u16 mp_recvSize;
    u16 mp_maxSendSize;
    u16 mp_maxRecvSize;
    u16 mp_parentVCount;
    u16 mp_childVCount;
    u16 mp_parentInterval;
    u16 mp_childInterval;
    OSTick mp_parentIntervalTick;
    OSTick mp_childIntervalTick;
    u16 mp_minFreq;
    u16 mp_freq;
    u16 mp_maxFreq;
    u16 mp_vsyncOrderedFlag;
    u16 mp_vsyncFlag;
    s16 mp_count;
    s16 mp_limitCount;
    u16 mp_resumeFlag;
    u16 mp_prevPollBitmap;
    u16 mp_prevWmHeader;
    u16 mp_prevTxop;
    u16 mp_prevDataLength;
    u16 mp_recvBufSel;
    u16 mp_recvBufSize;
    WMMpRecvBuf *mp_recvBuf[2];
    u32 *mp_sendBuf;
    u16 mp_sendBufSize;
    u16 mp_ackTime;
    u16 mp_waitAckFlag;
    u16 mp_readyBitmap;
    u16 mp_newFrameFlag;
    u16 mp_setDataFlag;
    u16 mp_sentDataFlag;
    u16 mp_bufferEmptyFlag;
    u16 mp_isPolledFlag;
    u16 mp_minPollBmpMode;
    u16 mp_singlePacketMode;
    u8 reserved_c[2];
    u16 mp_defaultRetryCount;
    u16 mp_ignoreFatalErrorMode;
    u16 mp_ignoreSizePrecheckMode;
    u16 mp_pingFlag;
    u16 mp_pingCounter;
    u8 dcf_destAdr[6];
    u16 *dcf_sendData;
    u16 dcf_sendSize;
    u16 dcf_recvBufSel;
    WMDcfRecvBuf *dcf_recvBuf[2];
    u16 dcf_recvBufSize;
    u16 curr_tgid;
    u16 linkLevel;
    u16 minRssi;
    u16 rssiCounter;
    u16 beaconIndicateFlag;
    u16 wepKeyId;
    u16 pwrMgtMode;
    u32 miscFlags;
    u16 VSyncBitmap;
    u16 valarm_queuedFlag;
    u32 v_tsf;
    u32 v_tsf_bak;
    u32 v_remain;
    u16 valarm_counter;
    u8 reserved_e[2];
    u8 MacAddress[6];
    u16 mode;
    WMParentParam pparam;
    u8 childMacAddress[15][6];
    u16 child_bitmap;
    WMBssDesc *pInfoBuf;
    u16 aid;
    u8 parentMacAddress[6];
    u16 scan_channel;
    u8 reserved_f[4];
    u16 wepMode;
    BOOL wep_flag;
    u16 wepKey[80 / sizeof(u16)];
    u16 rate;
    u16 preamble;
    u16 tmptt;
    u16 retryLimit;
    u16 enableChannel;
    u16 allowedChannel;
    u16 portSeqNo[15 + 1][8];
    WMPortSendQueueData sendQueueData[32];
    WMPortSendQueue sendQueueFreeList;
    WMPortSendQueue sendQueue[4];
    WMPortSendQueue readyQueue[4];
    OSMutex sendQueueMutex;
    BOOL sendQueueInUse;
    OSTick mp_lastRecvTick[1 + 15];
    OSTick mp_lifeTimeTick;
    u16 mp_current_minFreq;
    u16 mp_current_freq;
    u16 mp_current_maxFreq;
    u16 mp_current_minPollBmpMode;
    u16 mp_current_singlePacketMode;
    u16 mp_current_defaultRetryCount;
    u16 mp_current_ignoreFatalErrorMode;
    u8 reserved[2];
} WMStatus, WMstatus;
extern WMErrCode func_020de458(void);
extern WMErrCode func_020df338(WMCallbackFunc callback);
extern WMErrCode func_020df3b8(WMCallbackFunc callback);
extern WMErrCode func_020df480(WMCallbackFunc callback);
extern const WMStatus *func_020deb24(void);
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
extern s32 func_020ae210(void);
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
extern void func_020ae8fc(u32 phase);
extern void func_020aeb20(void *arg);
extern void func_020af690(void *arg);
s32 func_020ae210(void) {
    OSIntrMode e = _Z20DisableIRQInterruptsv();

    if (data_021d600c == ((void *) 0)) {
        ((void) 0);
        (void) _Z20SetIRQInterruptStatei(e);
        return 1;
    }

    switch (data_021d600c->phase) {
        case 3:
        case 9:
        case 12:
            break;

        case 13:
            (void) _Z20SetIRQInterruptStatei(e);
            return 2;

        case 1:
            (void) _Z20SetIRQInterruptStatei(e);
            return 0;

        case 6:
            func_020ae8fc(13);
            data_021d600c->notifyId = 9;
            (void) _Z20SetIRQInterruptStatei(e);
            return 3;

        case 2:
        case 4:
        case 5:
        case 7:
        case 8:
        case 10:
        case 11:
        default:
            ((void) 0);
            (void) _Z20SetIRQInterruptStatei(e);
            return 1;
    }

    if (data_021d600c->resetting == 1) {

        func_020ae8fc(13);
        data_021d600c->notifyId = 9;
    } else {
        WMStatus *ws;
        u16 wmState;
        WMErrCode wmResult;

        ws = (WMStatus *) func_020deb24();
        _Z24InvalidateDataCacheRangePKvj(ws, 2);
        wmState = ws->state;

        switch (wmState) {
            case WM_STATE_READY:

                wmResult = func_020de458();
                if (wmResult == WM_ERRCODE_SUCCESS) {
                    func_020ae8fc(1);
                    data_021d600c->notifyId = 0;
                    (void) _Z20SetIRQInterruptStatei(e);
                    return 0;
                }
                break;

            case WM_STATE_STOP:

                wmResult = func_020df338(func_020aeb20);
                break;

            case WM_STATE_IDLE:

                wmResult = func_020df3b8(func_020aeb20);
                break;

            default:

                data_021d600c->resetting = 1;

                wmResult = func_020df480(func_020af690);
        }

        switch (wmResult) {
            case WM_ERRCODE_OPERATING:
                func_020ae8fc(13);
                data_021d600c->notifyId = 9;
                break;

            case WM_ERRCODE_FIFO_ERROR:
                ((void) 0);
                (void) _Z20SetIRQInterruptStatei(e);
                return 4;

            case WM_ERRCODE_ILLEGAL_STATE:
                ((void) 0);

            default:
                func_020ae8fc(11);
                (void) _Z20SetIRQInterruptStatei(e);
                return 7;
        }
    }

    (void) _Z20SetIRQInterruptStatei(e);
    return 3;
}
void func_020ae8fc(u32 phase);
void func_020aeb20(void *arg);
void func_020af690(void *arg);
