/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* send_ip from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_send.c (license: none), reused by
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
static inline u16 CpsSwap16(u16 value) {
    return (value >> 8) | (value << 8);
}
extern void send_ip_frag(u8 *data, int length, void *extra, int extraLength, u32 ip, u32 fragment);
extern void send_ip(u8 *data, u32 length, u8 *extra, u32 extraLength, u32 ip, u8 protocol);
void send_ip_frag(u8 *data, int length, void *extra, int extraLength, u32 ip, u32 fragment);
void send_ip(u8 *data, u32 length, u8 *extra, u32 extraLength, u32 ip, u8 protocol) {
    u16 offset = 0;
    u8 *p;
    u32 chunk;
    data[-20] = 0x45;
    data[-19] = 0;
    wfailed.ipId++;
    *(u16 *) (data - 16) = CpsSwap16(wfailed.ipId);
    data[-12]            = 128;
    data[-11]            = protocol;
    *(u16 *) (data - 8)  = CpsSwap16((u16) (wfailed.hostIp >> 16));
    *(u16 *) (data - 6)  = CpsSwap16((u16) wfailed.hostIp);
    *(u16 *) (data - 4)  = CpsSwap16((u16) (ip >> 16));
    *(u16 *) (data - 2)  = CpsSwap16((u16) ip);
    if (length > 1480) {
        p = data;
        while (length > 1480) {
            send_ip_frag(data, 0, p, 1480, ip, offset | 0x2000);
            p += 1480;
            length -= 1480;
            offset += 185;
        }
        if (length) {
            if (extraLength) {
                send_ip_frag(data, 0, p, length, ip, offset | 0x2000);
            } else {
                send_ip_frag(data, 0, p, length, ip, offset);
            }
            offset += length >> 3;
            length = 0;
        }
    }
    while (length + extraLength > 1480) {
        chunk = 1480 - length;
        send_ip_frag(data, length, extra, chunk, ip, offset | 0x2000);
        length = 0;
        extra += chunk;
        extraLength -= chunk;
        offset += 185;
    }
    if (length + extraLength) {
        send_ip_frag(data, length, extra, extraLength, ip, offset);
    }
}
