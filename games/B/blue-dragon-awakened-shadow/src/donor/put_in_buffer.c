/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* put_in_buffer from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_link.c (license: none), reused by
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
extern u8 data_020f8ee8[8];
extern void put_in_buffer(const void *dest, const void *source, u8 *data, u32 length, const void *extra, u32 extraLength);
void put_in_buffer(const void *dest, const void *source, u8 *data, u32 length, const void *extra, u32 extraLength) {
    u32 total, next;
    u16 size;
    if (wfailed.recvRing == ((void *) 0) || wfailed.recvRingSize == 0) {
        return;
    }
    total = length + extraLength;
    if (total < 8 || total > 1508) {
        return;
    }
    if (data[0] != data_020f8ee8[0] || data[1] != data_020f8ee8[1] || data[2] != data_020f8ee8[2] || data[6] != 8) {
        return;
    }
    if (data[7] != 0 && data[7] != 6) {
        return;
    }
    size = (total + 9) & ~1;
    next = wfailed.recvHead + size;
    if (wfailed.recvHead < wfailed.recvTail && wfailed.recvTail <= next) {
        return;
    }
    if (next == wfailed.recvRingSize) {
        next = 0;
        if (wfailed.recvTail == 0) {
            return;
        }
    } else if (next > wfailed.recvRingSize) {
        next = size;
        if (wfailed.recvTail <= size) {
            return;
        }
    }
    if (wfailed.recvHead + size > wfailed.recvRingSize) {
        if (wfailed.recvRingSize - wfailed.recvHead >= 2) {
            *(u16 *) (wfailed.recvRing + wfailed.recvHead) = 0;
        }
        wfailed.recvHead = 0;
    }
    *(u16 *) (wfailed.recvRing + wfailed.recvHead) = size;
    MI_CpuCopy8(source, wfailed.recvRing + wfailed.recvHead + 2, 6);
    MI_CpuCopy8(dest, wfailed.recvRing + wfailed.recvHead + 8, 6);
    MI_CpuCopy8(data + 6, wfailed.recvRing + wfailed.recvHead + 14, length - 6);
    if (extra && extraLength) {
        MI_CpuCopy8(extra, wfailed.recvRing + wfailed.recvHead + 8 + length, extraLength);
    }
    wfailed.recvHead = next;
}
