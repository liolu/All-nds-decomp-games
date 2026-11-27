/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* dt_synack from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
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
extern void OS_YieldThread(void);
extern void OS_WakeupThreadDirect(OSThread *thread);
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
enum {
    CPS_BLOCK_NONE = 0,
    CPS_BLOCK_TCPCON,
    CPS_BLOCK_TCPREAD,
    CPS_BLOCK_UDPREAD
};
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
enum TCPHeaderOffset {
    TCP_OFFSET_SOURCE_PORT    = 0,
    TCP_OFFSET_DEST_PORT      = 2,
    TCP_OFFSET_SEQ_NO         = 4,
    TCP_OFFSET_ACK_NO         = 8,
    TCP_OFFSET_DATA_OFFSET    = 12,
    TCP_OFFSET_FLAG           = 13,
    TCP_OFFSET_WINDOW         = 14,
    TCP_OFFSET_CHECKSUM       = 16,
    TCP_OFFSET_URGENT_POINTER = 18,
    TCP_OFFSET_OPTIONS        = 20,
};
CPSSoc *find_socket(u8 *iphdr, u8 *tcphdr);
void parse_mss(u8 *tcphdr, CPSSoc *soc);
void tcp_send_ack(CPSSoc *soc, u16 urg);
void tcp_send_rst(u8 *iphdr, u8 *tcphdr, u32 len, u16 urg);
void dt_synack(u8 *iphdr, u8 *tcphdr, u32 len) {
    CPSSoc *soc = find_socket(iphdr, tcphdr);
    if (soc == 0 || soc->state != CPS_STT_SYN_SENT) {
        tcp_send_rst(iphdr, tcphdr, len, 0);
        return;
    }

    OS_YieldThread();
    soc->ackno = (((u32) (CPS_htons((*(u16 *) (&tcphdr[TCP_OFFSET_SEQ_NO])))) << 16) |
                  (CPS_htons((*(u16 *) ((&tcphdr[TCP_OFFSET_SEQ_NO]) + 2))))) +
                 1;
    soc->remote_ackno = (((u32) (CPS_htons((*(u16 *) (&tcphdr[TCP_OFFSET_ACK_NO])))) << 16) |
                         (CPS_htons((*(u16 *) ((&tcphdr[TCP_OFFSET_ACK_NO]) + 2)))));
    soc->remote_win   = (CPS_htons((*(u16 *) (&tcphdr[TCP_OFFSET_WINDOW]))));
    parse_mss(tcphdr, soc);
    tcp_send_ack(soc, 0);
    soc->state = CPS_STT_ESTABLISHED;

    if (soc->block_type == CPS_BLOCK_TCPCON) {
        soc->block_type = CPS_BLOCK_NONE;
        OS_WakeupThreadDirect(soc->thread);
    }
}
