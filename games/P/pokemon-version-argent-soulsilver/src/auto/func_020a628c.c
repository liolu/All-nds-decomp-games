/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a628c from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_ip_frag.c (license: none), reused by
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
extern void func_020d4a50(const void *src, void *dst, u32 size);
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
extern const CpsState data_021d4640[];
extern CpsFragment data_021d4968[8];
extern CpsIpHeader *func_020a628c(CpsIpHeader *ip, int *allocated);
static inline u16 Swap(u16 x) {
    return (u16) ((x >> 8) | (x << 8));
}
static inline u32 SourceKey(const CpsIpHeader *ip) {
    u16 low  = Swap(ip->source[1]);
    u16 high = Swap(ip->source[0]);
    return ((u32) high << 16) | low;
}
CpsIpHeader *func_020a628c(CpsIpHeader *ip, int *allocated) {
    u16 id;
    u32 header;
    CpsFragment *unused = ((void *) 0), *fragment;
    u32 key;
    u32 flags, length, offset, size, last, i;
    u32 count;
    u32 end;
    u32 index;
    u32 covered;
    *allocated = 0;
    flags      = Swap(ip->fragment);
    if (!(flags & 0x3FFF)) {
        return ip;
    }
    id     = ip->versionAndLength;
    header = (id & 15) * 4;
    key    = SourceKey(ip);
    id     = ip->id;
    for (i = 0, fragment = data_021d4968; i < 8; i++, fragment++) {
        if (fragment->count && fragment->source == key && fragment->id == id) {
            break;
        }
        if (!fragment->count && !unused) {
            unused = fragment;
        }
    }
    length = Swap(ip->totalLength) - header;
    offset = flags & 0x1FFF;
    size   = length + (offset << 3);
    if (i == 8) {

        if (!unused || size > 4096) {
            return ((void *) 0);
        }
        fragment         = unused;
        fragment->buffer = data_021d4640[0].alloc(header + 14 + 4096);
        if (!fragment->buffer) {
            return ((void *) 0);
        }
        fragment->source = key;
        fragment->id     = id;
        fragment->end    = 0;
        fragment->tick   = (u32) (func_020d34b0() >> 16);
        fragment->data   = fragment->buffer + 14 + header;
        func_020d4a50(ip, fragment->buffer + 14, header);
    }
    if (fragment->count == 8 || size > 4096) {
        fragment->count = 0;
        data_021d4640[0].free(fragment->buffer);
        return ((void *) 0);
    }
    last = offset + ((length + 7) >> 3);
    if (!(flags & 0x2000)) {

        fragment->total = size;
        fragment->end   = last;
    }
    fragment->start[fragment->count] = offset;
    fragment->stop[fragment->count]  = last;
    fragment->count++;
    func_020d4a50((u8 *) ip + header, fragment->data + (offset << 3), length);
    end = fragment->end;
    if (!end) {
        return ((void *) 0);
    }

    count   = fragment->count;
    covered = 0;
    index   = 0;
    while (index < count) {
        if (fragment->start[index] <= covered && covered < fragment->stop[index]) {
            covered = fragment->stop[index];
            index   = 0;
        } else {
            index++;
        }
    }
    if (covered < end) {
        return ((void *) 0);
    }
    {
        u8 *out             = fragment->buffer;
        u16 total           = fragment->total + ((out[14] & 15) * 4);
        *(u16 *) (out + 16) = (total >> 8) | (total << 8);
        fragment->count     = 0;
        *allocated          = 1;
        return (CpsIpHeader *) (out + 14);
    }
}
