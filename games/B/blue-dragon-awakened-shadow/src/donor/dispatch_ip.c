/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* dispatch_ip from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_ip.c (license: none), reused by
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
typedef struct CpsIpHeader {
    u8 versionAndLength;
    u8 tos;
    u16 totalLength;
    u16 id;
    u16 fragment;
    u8 ttl;
    u8 protocol;
    u16 checksum;
    u16 source[2];
    u16 dest[2];
} CpsIpHeader;
typedef struct CpsIcmpHeader {
    u8 type;
    u8 code;
    u16 checksum;
    u16 id;
    u16 sequence;
} CpsIcmpHeader;
typedef struct CpsUdpHeader {
    u16 sourcePort;
    u16 destPort;
    u16 length;
    u16 checksum;
} CpsUdpHeader;
typedef struct CpsTcpHeader {
    u16 sourcePort;
    u16 destPort;
    u16 seq[2];
    u16 ack[2];
    u8 dataOffset;
    u8 flags;
    u16 window;
    u16 checksum;
    u16 urgent;
    u8 options[];
} CpsTcpHeader;
extern CpsState wfailed;
extern u16 calc_checksum(const void *data, u32 length);
extern int ip_isme(u32 ip);
extern void reg_arpcache(const u8 *mac, u32 ip, int create);
extern void dispatch_icmp(CpsIpHeader *ip, CpsIcmpHeader *icmp, u32 length);
extern void dispatch_tcp(CpsIpHeader *ip, CpsTcpHeader *tcp, u32 length);
extern void dispatch_udp(CpsIpHeader *ip, CpsUdpHeader *udp, u32 length);
extern CpsIpHeader *check_frag(CpsIpHeader *ip, int *allocated);
extern void dispatch_ip(CpsIpHeader *ip, u32 length);
static inline u16 Swap(u16 x) {
    int a    = x;
    int high = a << 8;
    return (a >> 8) | high;
}
static inline u32 Address(u16 *p) {
    return ((u32) Swap(p[0]) << 16) | Swap(p[1]);
}
void dispatch_ip(CpsIpHeader *ip, u32 length) {
    int allocated;
    u32 source = Address(ip->source), dest = Address(ip->dest);
    if (dest != source) {
        if (ip_isme(dest) == 0) {
            return;
        }
        if (length < Swap(ip->totalLength)) {
            return;
        }
        if (calc_checksum(ip, (ip->versionAndLength & 15) * 4) != 0xFFFF) {
            return;
        }
        if (wfailed.hostIp == Address(ip->dest)) {

            reg_arpcache((u8 *) ip - 8, Address(ip->source), 1);
        }
    }
    ip = check_frag(ip, &allocated);
    if (ip == ((void *) 0)) {
        return;
    }
    {
        u32 header    = (ip->versionAndLength & 15) * 4;
        void *payload = (u8 *) ip + header;
        u32 amount    = Swap(ip->totalLength) - header;
        if (ip->protocol == 17) {
            dispatch_udp(ip, payload, amount);
        } else if (wfailed.hostIp) {
            if (ip->protocol == 1) {
                dispatch_icmp(ip, payload, amount);
            } else if (ip->protocol == 6) {
                dispatch_tcp(ip, payload, amount);
            }
        }
    }
    if (allocated) {
        wfailed.free((u8 *) ip - 14);
    }
}
