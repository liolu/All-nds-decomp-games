/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* process_icmp_reply from projets/blue-dragon-awakened-shadow/src/donor/process_icmp_reply.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02006be0(void);
extern OSIntrMode func_02006bf4(OSIntrMode state);
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
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
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
    int systemErrno;
};
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;

    u16 irqDepth;

    OSThread *current;
    OSThread *list;
    void *switchCallback;

} OSThreadInfo;
extern void func_02005198(OSThread *thread);
extern OSThreadInfo data_02147904;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &data_02147904;
}
static inline void *OSi_GetSpecificData(const OSThread *thread, int index) {
    ((void) 0);
    return thread->specific[index];
}
static inline OSThread *OS_GetThreadList(void) {
    return OS_GetThreadInfo()->list;
}
static inline OSThread *OS_GetNextThread(const OSThread *thread) {
    ((void) 0);
    return thread->next;
}
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
extern void func_0200766c(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct CPSSoc CPSSoc;
typedef u32 CPSInAddr;
typedef BOOL (*CPSUDPReadCallback)(u8 *data, u32 len, CPSSoc *soc);
typedef struct CPSSocBuf {
    u32 size;
    u8 *data;
} CPSSocBuf;
typedef struct CPSSoc {
    OSThread *thread;
    u32 block_type;
    u8 state;
    u8 ssl;
    u16 local_port;
    void *con;
    u32 when;
    u32 local_ip_real;
    u16 remote_port;
    u16 remote_port_bound;
    CPSInAddr remote_ip;
    CPSInAddr remote_ip_bound;
    u32 ackno;
    u32 seqno;
    u16 remote_win;
    u16 remote_mss;
    u32 remote_ackno;
    u32 ackrcvd;
    CPSUDPReadCallback udpread_callback;
    CPSSocBuf rcvbuf;
    u32 rcvbufp;
    CPSSocBuf sndbuf;
    CPSSocBuf linbuf;
    CPSSocBuf outbuf;
    u32 outbufp;
} CPSSoc;
enum {
    CPS_STT_CLOSED = 0,
    CPS_STT_LISTEN,
    CPS_STT_SYN_SENT,
    CPS_STT_SYN_RCVD,
    CPS_STT_ESTABLISHED,
    CPS_STT_CLOSE_WAIT,
    CPS_STT_LAST_ACK,
    CPS_STT_FIN_WAIT1,
    CPS_STT_FIN_WAIT2,
    CPS_STT_CLOSING,
    CPS_STT_DATAGRAM,
    CPS_STT_PING
};
enum {
    CPS_BLOCK_NONE = 0,
    CPS_BLOCK_TCPCON,
    CPS_BLOCK_TCPREAD,
    CPS_BLOCK_UDPREAD
};
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
enum IPHeaderOffset {
    IP_OFFSET_VERSION_IHL    = 0,
    IP_OFFSET_DSCP_ECN       = 1,
    IP_OFFSET_TOTAL_LENGTH   = 2,
    IP_OFFSET_ID             = 4,
    IP_OFFSET_FRAG_OFFSET    = 6,
    IP_OFFSET_TTL            = 8,
    IP_OFFSET_PROTOCOL       = 9,
    IP_OFFSET_CHECKSUM       = 10,
    IP_OFFSET_SOURCE_ADDRESS = 12,
    IP_OFFSET_DEST_ADDRESS   = 16,
    IP_OFFSET_OPTIONS        = 20,
};
enum ICMPHeaderOffset {
    ICMP_OFFSET_TYPE     = 0,
    ICMP_OFFSET_CODE     = 1,
    ICMP_OFFSET_CHECKSUM = 2,
    ICMP_OFFSET_DATA     = 4,
};
void func_02097310(u8 *iphdr, u8 *icmpdata, u32 len) {
    CPSSoc *soc;

    OSIntrMode enable = func_02006be0();
    OSThread *t       = OS_GetThreadList();
    while (t != 0) {
        soc = OSi_GetSpecificData(t, 0);
        if (soc != 0 && soc->thread != 0 && soc->state == CPS_STT_PING &&
            (*(u16 *) (&icmpdata[ICMP_OFFSET_DATA])) == (u16) soc->thread &&
            soc->local_port == (*(u16 *) (&icmpdata[ICMP_OFFSET_DATA + 2])) && soc->rcvbufp == 0 &&
            soc->remote_ip == (((u32) (CPS_htons((*(u16 *) (&iphdr[IP_OFFSET_SOURCE_ADDRESS])))) << 16) |
                               (CPS_htons((*(u16 *) ((&iphdr[IP_OFFSET_SOURCE_ADDRESS]) + 2)))))) {
            if (len - 8 > soc->rcvbuf.size) {
                soc->rcvbufp = soc->rcvbuf.size;
            } else {
                soc->rcvbufp = len - 8;
            }

            func_0200766c(icmpdata + 8, soc->rcvbuf.data, soc->rcvbufp);

            if (soc->block_type == CPS_BLOCK_UDPREAD) {
                soc->block_type = CPS_BLOCK_NONE;
                func_02005198(soc->thread);
            }
            break;
        } else {
            t = OS_GetNextThread(t);
        }
    }
    func_02006bf4(enable);
}
