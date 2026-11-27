/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* dhcp_setcommon from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_dhcp.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
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
typedef struct OSiAlarm OSAlarm;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
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

    u32 systemErrno;
};
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
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
typedef struct CpsState {
    u8 sendFailed;
    u8 addressConflict;
    u16 mss;
    u16 pingSeq;
    u16 ipId;
    u16 ephemeralPort;
    u8 unk_0A[2];
    int status;
    u32 staticIp;
    void *(*alloc)(u32 size);
    void (*addressCallback)(void);
    u32 netmask;
    u32 dhcpServer;
    u32 yieldSleep;
    volatile u32 recvHead;
    u32 gateway;
    volatile u32 recvTail;
    u32 requestedIp;
    u32 dhcpRetry;
    void (*scavengerCallback)(void);
    void (*free)(void *ptr);
    u32 calmDown;
    int (*linkIsOn)(void);
    u32 leaseTime;
    u32 hostIp;
    OSThread *recvWaiter;
    u8 *recvRing;
    volatile u32 recvRingSize;
    u32 dns[2];
    u64 random;
    u64 randomMul;
    u64 randomAdd;
} CpsState;
extern CpsState wfailed;
extern u8 CPSMyMac[6];
extern char data_020f8ef4[];
extern u8 *dhcp_setcommon(u8 *packet, int type, u32 *xid);
#pragma force_active on
u8 *dhcp_setcommon(u8 *packet, int type, u32 *xid) {
    u32 id;
    MI_CpuFill8(packet, 0, 236);
    *(u16 *) (packet + 0) = 0x101;
    packet[2]             = 6;
    wfailed.random        = wfailed.randomMul * wfailed.random + wfailed.randomAdd;
    id                    = wfailed.random >> 32;
    if (xid) {
        *xid = id;
    }
    *(u16 *) (packet + 4)  = ((u16) ((((u16) (id >> 16)) >> 8) | (((u16) (id >> 16)) << 8)));
    *(u16 *) (packet + 6)  = ((u16) ((((u16) id) >> 8) | (((u16) id) << 8)));
    *(u16 *) (packet + 12) = ((u16) ((((u16) (wfailed.hostIp >> 16)) >> 8) | (((u16) (wfailed.hostIp >> 16)) << 8)));
    *(u16 *) (packet + 14) = ((u16) ((((u16) wfailed.hostIp) >> 8) | (((u16) wfailed.hostIp) << 8)));
    MI_CpuCopy8(CPSMyMac, packet + 28, 6);
    *(u16 *) (packet + 236) = 0x8263;
    *(u16 *) (packet + 238) = 0x6353;
    *(u16 *) (packet + 240) = 0x135;
    packet[242]             = type;
    packet[243]             = 61;
    packet[244]             = 7;
    packet[245]             = 1;
    MI_CpuCopy8(CPSMyMac, packet + 246, 6);
    packet[252] = 12;
    packet[253] = 10;
    MI_CpuCopy8(data_020f8ef4, packet + 254, 10);
    packet[264] = 55;
    packet[265] = 3;
    packet[266] = 1;
    packet[267] = 3;
    packet[268] = 6;
    return packet + 269;
}
