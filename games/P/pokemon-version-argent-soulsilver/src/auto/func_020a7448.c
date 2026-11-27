/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a7448 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_scavenger.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
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
extern OSThreadInfo data_021e16c0;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern void func_020d1f34(OSThread *thread);
extern void func_020d2108(u32 msec);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
typedef u64 OSTick;
extern OSTick func_020d34b0(void);
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
extern CpsState data_021d4640;
extern CpsArpEntry data_021d46c0[8];
extern CpsFragment data_021d4968[8];
extern void func_020a3874(int value);
extern void func_020a43e0(u32 ip);
extern void func_020a7448(void *arg);
extern void func_020a6878(CpsSocket *socket);
extern void func_020a688c(void);
extern void func_020ab978(int now);
extern CpsSocket data_021d4720;
extern u8 data_021d4cec[384];
extern u8 data_021d4b6c[384];
extern void func_020a73a8(void);
extern int func_020a7e94(void);
extern int func_020a7eec(int *timer, int mode);
extern void func_020a7fe8(void);
void func_020a73a8(void);
enum {
    DHCP_START,
    DHCP_BOUND,
    DHCP_REBINDING,
    DHCP_NONE,
};
void func_020a7448(void *arg) {
    int timer, arp, first, dhcp;
    int now;
    int i;
    data_021d4640.calmDown = 0;
    func_020d4994(&data_021d4720, 0, sizeof(CpsSocket));
    ((u32 *) &data_021d4640)[71] = 384;
    ((u32 *) &data_021d4640)[72] = (u32) data_021d4cec;
    ((u32 *) &data_021d4640)[74] = 384;
    ((u32 *) &data_021d4640)[75] = (u32) data_021d4b6c;
    func_020a6878(&data_021d4720);
    arp                  = 1;
    first                = 1;
    timer                = 1;
    data_021d4640.status = 1;
    dhcp                 = DHCP_START;
    for (;;) {
        func_020d2108(1000);
        if (data_021d4640.calmDown) {
            break;
        }
        now = func_020d34b0() >> 16;
        if (data_021d4640.linkIsOn()) {
            if (--timer == 0) {
                if (data_021d4640.staticIp & 1) {
                    if (!dhcp) {
                        func_020a73a8();
                        dhcp = DHCP_BOUND;
                    }
                } else {
                    switch (dhcp) {
                        case DHCP_START:
                            if (first) {
                                data_021d4640.status = 2;
                                first                = 0;
                            }
                            if (!func_020a7e94() || !func_020a7eec(&timer, 0)) {
                                func_020a73a8();
                                dhcp = DHCP_NONE;
                            } else {
                                dhcp = DHCP_BOUND;
                            }
                            break;
                        case DHCP_BOUND:
                            if (!func_020a7eec(&timer, 1)) {
                                if ((u32) timer < 60) {
                                    dhcp = DHCP_REBINDING;
                                }
                            }
                            break;
                        case DHCP_REBINDING:
                            if (func_020a7eec(&timer, 2)) {
                                dhcp = DHCP_BOUND;
                            } else if ((u32) timer < 60) {
                                func_020a3874(3);
                                arp   = 1;
                                timer = 1;
                                dhcp  = DHCP_START;
                            }
                            break;
                        case DHCP_NONE:
                            break;
                    }
                }
            }
        } else {
            func_020a3874(1);
            arp   = 1;
            timer = 1;
            dhcp  = DHCP_START;
        }

        for (i = 0; i < 8; i++) {
            if (data_021d46c0[i].ip && ((s16) (now - data_021d46c0[i].tick) > 957)) {
                data_021d46c0[i].ip = 0;
            }
        }

        if (data_021d4640.gateway && !--arp) {
            ((void (*)(void)) func_020a43e0)();
            arp = 105;
        }
        {
            OSThread *thread = data_021e16c0.list;
            for (; thread; thread = thread->next) {
                CpsSocket *socket = thread->specific[0];
                if (socket && socket->thread) {
                    if (socket->state == 3 && now - socket->tick > 39) {

                        socket->state      = 1;
                        socket->remotePort = socket->boundRemotePort;
                        socket->remoteIp   = socket->boundRemoteIp;
                    } else if (socket->state == 2 && now - socket->tick > 39) {
                        if (socket->waiting == 1) {
                            socket->state   = 0;
                            socket->waiting = 0;
                            func_020d1f34(socket->thread);
                        }
                    } else if (socket->state != 4 && socket->waiting == 2) {
                        socket->waiting = 0;
                        func_020d1f34(socket->thread);
                    }
                }
            }
        }

        for (i = 0; i < 8; i++) {
            if (data_021d4968[i].count && now - data_021d4968[i].tick > 239) {
                data_021d4640.free(data_021d4968[i].buffer);
                data_021d4968[i].count = 0;
            }
        }
        func_020ab978(now);
        if (data_021d4640.scavengerCallback) {
            data_021d4640.scavengerCallback();
        }
    }
    if (!(data_021d4640.staticIp & 1) && dhcp != DHCP_NONE) {
        func_020a7fe8();
    }
    func_020a688c();
    (void) arg;
}
