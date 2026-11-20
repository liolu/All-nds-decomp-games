/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* dt_syn from projets/blue-dragon-awakened-shadow/src/donor/dt_syn.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef int BOOL;
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
extern void func_02005204(void);
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
extern BOOL func_02097410(CPSInAddr ip1, CPSInAddr ip2);
extern CPSSoc *func_02097500(u8 *iphdr, u8 *tcphdr);
extern void func_02097964(u8 *iphdr, u8 *tcphdr, CPSSoc *soc);
extern BOOL func_02097a50(u8 *iphdr, u8 *tcphdr, u32 len);
void func_02097ad8(u8 *iphdr, u8 *tcphdr, u32 len) {
    if (!func_02097410((((u32) (CPS_htons((*(u16 *) (&iphdr[IP_OFFSET_SOURCE_ADDRESS])))) << 16) |
                        (CPS_htons((*(u16 *) ((&iphdr[IP_OFFSET_SOURCE_ADDRESS]) + 2))))),
                       (((u32) (CPS_htons((*(u16 *) (&iphdr[IP_OFFSET_DEST_ADDRESS])))) << 16) |
                        (CPS_htons((*(u16 *) ((&iphdr[IP_OFFSET_DEST_ADDRESS]) + 2))))))) {
        return;
    }
    if (func_02097a50(iphdr, tcphdr, len)) {
        return;
    }

    CPSSoc *soc = func_02097500(iphdr, tcphdr);
    if (soc != 0) {
        func_02097964(iphdr, tcphdr, soc);
        return;
    }

    func_02005204();
    soc = func_02097500(iphdr, tcphdr);
    if (soc != 0) {
        func_02097964(iphdr, tcphdr, soc);
    }
}
