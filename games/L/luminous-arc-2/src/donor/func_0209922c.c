/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_SocWrite2 from projets/blue-dragon-awakened-shadow/src/donor/CPSi_SocWrite2.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
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
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;

    u16 irqDepth;

    OSThread *current;
    OSThread *list;
    void *switchCallback;

} OSThreadInfo;
extern OSThreadInfo data_02147904;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &data_02147904;
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline void *OSi_GetSpecificData(const OSThread *thread, int index) {
    ((void) 0);
    return thread->specific[index];
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
extern u32 func_020a00e0(u8 *, u32, u8 *, u32, CPSSoc *);
extern u32 func_02099024(u8 *buf, u32 len, u8 *buf2, u32 len2, CPSSoc *soc);
extern u32 func_0209922c(u8 *buf, u32 len, u8 *buf2, u32 len2);
extern u8 data_02170d04;
extern void func_02096be0(u8 *pattern, u32 len, CPSSoc *soc);
extern void func_02096c90(u8 *data, u32 len, CPSSoc *soc);
extern u32 func_02099024(u8 *buf, u32 len, u8 *buf2, u32 len2, CPSSoc *soc);
u32 func_0209922c(u8 *buf, u32 len, u8 *buf2, u32 len2) {
    CPSSoc *soc = ((CPSSoc *) OSi_GetSpecificData(OS_GetCurrentThread(), 0));
    u32 total_written;

    if (soc != 0) {
        if (soc->state == CPS_STT_DATAGRAM) {
            if (len != 0) {
                func_02096c90(buf, len, soc);
            }
            if (len2 != 0) {
                func_02096c90(buf2, len2, soc);
            }
            total_written = len + len2;
        } else if (soc->state == CPS_STT_PING) {
            if (len != 0) {
                func_02096be0(buf, len, soc);
            }
            if (len2 != 0) {
                func_02096be0(buf2, len2, soc);
            }
            total_written = len + len2;
        } else if (soc->ssl) {
            total_written = func_020a00e0(buf, len, buf2, len2, soc);
        } else {
            total_written = func_02099024(buf, len, buf2, len2, soc);
        }

        if (data_02170d04 == 0) {
            return total_written;
        }
    }

    return 0;
}
