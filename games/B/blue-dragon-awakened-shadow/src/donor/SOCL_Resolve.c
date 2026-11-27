/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOCL_Resolve from https://github.com/ntrtwl/NitroWiFi libraries/soc/src/socl_resolve.c (license: none), reused by
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
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    MI_CpuFill8(dest, 0, size);
}
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
extern void CPS_SocRegister(CPSSoc *soc);
extern void CPS_SocUnRegister(void);
extern CPSInAddr CPS_Resolve(const char *name);
typedef CPSInAddr SOCLInAddr;
typedef struct {
    BOOL use_dhcp;
    struct {
        SOCLInAddr my_ip;
        SOCLInAddr net_mask;
        SOCLInAddr gateway_ip;
        SOCLInAddr dns_ip[2];
    } host_ip;
    void *(*alloc)(u32);
    void (*free)(void *);
    u32 cmd_packet_max;
    u32 lan_buffer_size;
    void *lan_buffer;
    s32 cps_thread_prio;
    s32 mtu;
    s32 rwin;
} SOCLConfig;
extern SOCLInAddr SOCL_Resolve(const char *hostname);
extern const SOCLConfig *SOCLiConfigPtr;
static inline void *SOCLi_Alloc(u32 size) {
    return SOCLiConfigPtr->alloc(size);
}
static inline void SOCLi_Free(void *ptr) {
    SOCLiConfigPtr->free(ptr);
}
SOCLInAddr SOCL_Resolve(const char *hostname) {
    u8 *buffers;
    CPSSoc soc;
    SOCLInAddr hostip;

    if (!hostname) {
        return 0;
    }

    buffers = SOCLi_Alloc((((1460 * 2) + 3) & ~3) + ((((((576) - 40) * 2) + (14 + 20 + 20)) + 3) & ~3));

    if (buffers == ((void *) 0)) {
        return 0;
    }

    MI_CpuClear8(&soc, sizeof(CPSSoc));

    soc.rcvbuf.data = buffers;
    soc.rcvbuf.size = (1460 * 2);
    soc.sndbuf.data = buffers + (((1460 * 2) + 3) & ~3);
    soc.sndbuf.size = ((((576) - 40) * 2) + (14 + 20 + 20));

    CPS_SocRegister(&soc);
    hostip = CPS_Resolve((char *) hostname);
    CPS_SocUnRegister();

    SOCLi_Free(buffers);

    return hostip;
}
