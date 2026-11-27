/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a6e84 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_tcp_write.c (license: none), reused by
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
extern void func_020d1fa0(void);
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
extern CpsState data_021d4640;
extern void func_020a4c64(void *data, u32 length, CpsSocket *socket, int flags, int arg);
extern u32 func_020a6e84(void *data, u32 length, CpsSocket *socket, int force);
#pragma force_active on
u32 func_020a6e84(void *data, u32 length, CpsSocket *socket, int force) {
    u32 count;
    u32 limit;
    u32 previous;
    u32 budget;
    u32 current;
    u32 available;
    if (force) {
        limit = 1;
    } else {
        limit = socket->sendWindow;
    }
    previous = socket->recvSegments;
    budget   = previous * 2 + 4;
    while (length && socket->state == 4) {
        current = socket->recvSegments;
        count   = socket->mss;
        if (count >= limit) {
            count = limit;
        }
        if (data_021d4640.mss < count) {
            count = data_021d4640.mss;
        }
        if (!force) {
            count &= ~1u;
        }
        if (length < count) {
            count = length;
        }
        available = budget + (current - previous);
        previous  = current;
        budget    = available - 1;
        if (!available) {
            count = 0;
        }
        if (count == 0) {
            break;
        }
        limit -= count;
        func_020a4c64(data, count, socket, 0x08 | 0x10, 0);
        func_020d1fa0();
        data = (u8 *) data + count;
        length -= count;
    }
    return count;
}
