/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_TcpWrite2Raw from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_tcp_write.c (license: none),
 * reused by tools/donor_match.py */
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
extern OSTick OS_GetTick(void);
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
extern CpsState wfailed;
extern void yield_thread(void);
extern int tcp_write_do2(void *data, u32 length, void *data2, u32 length2, CpsSocket *socket, int force);
extern u32 CPSi_TcpWrite2Raw(const u8 *data, u32 length, const u8 *data2, u32 length2, CpsSocket *socket);
int tcp_write_do2(void *data, u32 length, void *data2, u32 length2, CpsSocket *socket, int force);
u32 CPSi_TcpWrite2Raw(const u8 *data, u32 length, const u8 *data2, u32 length2, CpsSocket *socket) {
    u32 total            = 0, start, sent, wait, done;
    int force            = 0;
    socket->recvSegments = 0;
    start                = (u32) (OS_GetTick() >> 16);
    while (wfailed.linkIsOn() && length && socket->state == 4 && (s32) ((u32) (OS_GetTick() >> 16) - start) < 159) {
        sent = socket->sendNext;
        tcp_write_do2((void *) data, length, (void *) data2, length2, socket, force);

        wait = (u32) (OS_GetTick() >> 16);
        do {
            yield_thread();
        } while (wfailed.linkIsOn() && socket->state == 4 && socket->sendNext != socket->sendAcked &&
                 (s32) ((u32) (OS_GetTick() >> 16) - wait) < 15 && (!force || socket->sendWindow == 0));
        done = socket->sendAcked - sent;
        if (done > socket->sendNext - sent) {
            done = 0;
        }
        total += done;
        if (done) {
            start = (u32) (OS_GetTick() >> 16);
        }

        socket->sendNext = socket->sendAcked;
        if (socket->state == 4 && socket->sendWindow == 0 && done == 0) {
            if (!force) {
                wait = (u32) (OS_GetTick() >> 16);
                while (wfailed.linkIsOn() && (s32) ((u32) (OS_GetTick() >> 16) - wait) < 15) {
                    yield_thread();
                    if (socket->sendWindow) {
                        break;
                    }
                }
                if (socket->sendWindow == 0) {
                    force = 1;
                }
            }
        } else {
            force = 0;
        }
        if (done < length) {
            data += done;
            length -= done;
        } else {
            u32 n   = done - length;
            data    = data2 + n;
            data2   = ((void *) 0);
            length  = length2 - n;
            length2 = 0;
        }
    }
    return total;
}
