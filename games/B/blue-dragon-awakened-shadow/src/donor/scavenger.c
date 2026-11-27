/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* scavenger from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_scavenger.c (license: none), reused by
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
extern OSThreadInfo OSi_ThreadInfo;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void OS_WakeupThreadDirect(OSThread *thread);
extern void OS_Sleep(u32 msec);
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
extern void reset_network_vars(int value);
extern void send_arprequest(u32 ip);
extern void scavenger(void *arg);
extern void CPS_SocRegister(CpsSocket *socket);
extern void CPS_SocUnRegister(void);
extern void CPSi_SslPeriodical(int now);
extern CpsSocket scavenger_soc;
extern u8 scavenger_rcvbuf[384];
extern u8 scavenger_sndbuf[384];
extern void set_fixed_ip(void);
extern int dhcp_discover_server(void);
extern int dhcp_request_server(int *timer, int mode);
extern void dhcp_release_server(void);
void set_fixed_ip(void);
enum {
    DHCP_START,
    DHCP_BOUND,
    DHCP_REBINDING,
    DHCP_NONE,
};
void scavenger(void *arg) {
    int timer, arp, first, dhcp;
    int now;
    int i;
    wfailed.calmDown = 0;
    MI_CpuFill8(&scavenger_soc, 0, sizeof(CpsSocket));
    ((u32 *) &wfailed)[71] = 384;
    ((u32 *) &wfailed)[72] = (u32) scavenger_rcvbuf;
    ((u32 *) &wfailed)[74] = 384;
    ((u32 *) &wfailed)[75] = (u32) scavenger_sndbuf;
    CPS_SocRegister(&scavenger_soc);
    arp            = 1;
    first          = 1;
    timer          = 1;
    wfailed.status = 1;
    dhcp           = DHCP_START;
    for (;;) {
        OS_Sleep(1000);
        if (wfailed.calmDown) {
            break;
        }
        now = OS_GetTick() >> 16;
        if (wfailed.linkIsOn()) {
            if (--timer == 0) {
                if (wfailed.staticIp & 1) {
                    if (!dhcp) {
                        set_fixed_ip();
                        dhcp = DHCP_BOUND;
                    }
                } else {
                    switch (dhcp) {
                        case DHCP_START:
                            if (first) {
                                wfailed.status = 2;
                                first          = 0;
                            }
                            if (!dhcp_discover_server() || !dhcp_request_server(&timer, 0)) {
                                set_fixed_ip();
                                dhcp = DHCP_NONE;
                            } else {
                                dhcp = DHCP_BOUND;
                            }
                            break;
                        case DHCP_BOUND:
                            if (!dhcp_request_server(&timer, 1)) {
                                if ((u32) timer < 60) {
                                    dhcp = DHCP_REBINDING;
                                }
                            }
                            break;
                        case DHCP_REBINDING:
                            if (dhcp_request_server(&timer, 2)) {
                                dhcp = DHCP_BOUND;
                            } else if ((u32) timer < 60) {
                                reset_network_vars(3);
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
            reset_network_vars(1);
            arp   = 1;
            timer = 1;
            dhcp  = DHCP_START;
        }

        for (i = 0; i < 8; i++) {
            if (arpcache[i].ip && ((s16) (now - arpcache[i].tick) > 957)) {
                arpcache[i].ip = 0;
            }
        }

        if (wfailed.gateway && !--arp) {
            ((void (*)(void)) send_arprequest)();
            arp = 105;
        }
        {
            OSThread *thread = OSi_ThreadInfo.list;
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
                            OS_WakeupThreadDirect(socket->thread);
                        }
                    } else if (socket->state != 4 && socket->waiting == 2) {
                        socket->waiting = 0;
                        OS_WakeupThreadDirect(socket->thread);
                    }
                }
            }
        }

        for (i = 0; i < 8; i++) {
            if (fragtable[i].count && now - fragtable[i].tick > 239) {
                wfailed.free(fragtable[i].buffer);
                fragtable[i].count = 0;
            }
        }
        CPSi_SslPeriodical(now);
        if (wfailed.scavengerCallback) {
            wfailed.scavengerCallback();
        }
    }
    if (!(wfailed.staticIp & 1) && dhcp != DHCP_NONE) {
        dhcp_release_server();
    }
    CPS_SocUnRegister();
    (void) arg;
}
