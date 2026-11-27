/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* reset_network_vars from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_reset.c (license: none), reused
 * by tools/donor_match.py */
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
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
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
extern OSThreadInfo OSi_ThreadInfo;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void OS_WakeupThreadDirect(OSThread *thread);
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
typedef struct CpsSocketBuffer {
    s32 size;
    u8 *data;
} CpsSocketBuffer;
typedef struct CpsSocket {
    OSThread *thread;
    u32 waiting;
    u8 state;
    u8 sslEnabled;
    u16 localPort;
    void *ssl;
    s32 tick;
    u32 localIp;
    u16 remotePort;
    u16 boundRemotePort;
    u32 remoteIp;
    u32 boundRemoteIp;
    u32 recvNext;
    u32 sendNext;
    u16 sendWindow;
    u16 mss;
    u32 sendAcked;
    u32 recvSegments;
    int (*udpCallback)(u8 *data, u32 length, struct CpsSocket *socket);
    CpsSocketBuffer recvBuf;
    s32 recvLength;
    CpsSocketBuffer sendBuf;
    CpsSocketBuffer unk_50;
    CpsSocketBuffer writeBuf;
    u32 writeLength;
} CpsSocket;
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
typedef struct CpsArpEntry {
    u32 ip;
    u8 mac[6];
    u16 tick;
} CpsArpEntry;
typedef struct CpsFragment {
    u32 source;
    u16 count;
    u16 id;
    u16 end;
    u16 total;
    u16 start[8];
    u16 stop[8];
    s32 tick;
    u8 *data;
    u8 *buffer;
} CpsFragment;
extern CpsState wfailed;
extern CpsArpEntry arpcache[8];
extern CpsFragment fragtable[8];
static inline CpsSocket *CpsThread_GetSocket(OSThread *thread) {
    return thread->specific[0];
}
extern void reset_network_vars(int value);
extern void CPSi_SslCleanup(void);
#pragma force_active on
#pragma push
#pragma opt_propagation off
void reset_network_vars(int value) {
    int hadAddress;
    OSThread *thread;
    int i;
    CpsFragment *fragment;
    {
        CpsState *state = &wfailed;
        CpsState *state2;
        hadAddress         = state->hostIp != 0;
        state2             = &wfailed;
        state2->status     = value;
        wfailed.hostIp     = 0;
        wfailed.netmask    = 0;
        wfailed.gateway    = 0;
        wfailed.dns[0]     = 0;
        wfailed.dns[1]     = 0;
        wfailed.dhcpServer = 0;
    }
    if (!hadAddress) {
        return;
    }
    MI_CpuFill8(arpcache, 0, sizeof(arpcache));
    for (thread = OSi_ThreadInfo.list; thread; thread = thread->next) {
        CpsSocket *socket = CpsThread_GetSocket(thread);
        if (socket && socket->thread) {
            if (socket->state != 10 && socket->state != 11) {
                socket->state = 0;
            }
            if (socket->waiting) {
                socket->waiting = 0;
                OS_WakeupThreadDirect(socket->thread);
            }
        }
    }
    i        = 0;
    fragment = fragtable;
    do {
        if (fragment->count) {
            wfailed.free(fragment->buffer);
            fragment->count = 0;
        }
        i++;
        fragment++;
    } while (i < 8);
    CPSi_SslCleanup();
}
