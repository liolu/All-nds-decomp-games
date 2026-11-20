/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOCLi_ReadCPSBuffer from projets/blue-dragon-awakened-shadow/src/donor/SOCLi_ReadCPSBuffer.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
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
static inline void *OSi_GetSpecificData(const OSThread *thread, int index) {
    ((void) 0);
    return thread->specific[index];
}
typedef struct OSMessageQueue OSMessageQueue;
typedef void *OSMessage;
struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
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
typedef CPSInAddr SOCLInAddr;
typedef struct SOCLiSocketRingBuffer {
    CPSSocBuf area;
    vu16 in;
    vu16 out;
    OSThreadQueue waiting;
} SOCLiSocketRingBuffer;
typedef struct SOCLiSocketUdpData {
    struct SOCLiSocketUdpData *next;
    u16 size;
    u16 remote_port;
    SOCLInAddr remote_ip;
} SOCLiSocketUdpData;
typedef struct SOCLiSocketUdpDataControl {
    SOCLiSocketUdpData *volatile in;
    SOCLiSocketUdpData *volatile out;
    vu16 size;
    u16 size_max;
    OSThreadQueue waiting;
} SOCLiSocketUdpDataControl;
typedef struct SOCLSocketCommandPipe {
    OSMessageQueue queue;
    OSThread thread;
    OSMutex in_use;
} SOCLiSocketCommandPipe;
typedef struct SOCLiSocketRecvCommandPipe {
    SOCLiSocketCommandPipe h;
    vs32 consumed;
    u16 consumed_min;
    s8 flag_noconsume;
    u8 padding[1];
    SOCLiSocketUdpDataControl udpdata;
} SOCLiSocketRecvCommandPipe;
typedef struct SOCLiSocketSendCommandPipe {
    SOCLiSocketCommandPipe h;
    SOCLiSocketRingBuffer buffer;
    struct SOCLSocket *exe_socket;
} SOCLiSocketSendCommandPipe;
typedef struct SOCLSocket {
    CPSSoc cps_socket;
    SOCLiSocketRecvCommandPipe *recv_pipe;
    SOCLiSocketSendCommandPipe *send_pipe;
    vs32 result;
    vs16 state;
    s8 flag_block;
    s8 flag_mode;
    u16 local_port;
    u16 remote_port;
    SOCLInAddr remote_ip;
    struct SOCLSocket *next;
} SOCLSocket;
extern u8 *func_0209b4cc(SOCLSocket *, s32 *, u16 *, u16 *, SOCLInAddr *);
u8 *func_0209b4cc(SOCLSocket *socket, s32 *buffer_len, u16 *local_port, u16 *remote_port, SOCLInAddr *remote_ip) {
    SOCLiSocketRecvCommandPipe *recv_pipe;
    CPSSoc *cpsoc;
    s32 consumed;
    s32 len;

    recv_pipe = socket->recv_pipe;
    cpsoc     = (CPSSoc *) OSi_GetSpecificData(&recv_pipe->h.thread, 0);

    consumed = recv_pipe->consumed;
    len      = (s32) cpsoc->rcvbufp - consumed;

    if (len >= 0) {
        (*local_port)  = cpsoc->local_port;
        (*remote_port) = cpsoc->remote_port;
        (*remote_ip)   = (SOCLInAddr) cpsoc->remote_ip;
        (*buffer_len)  = len;

        if (len == 0 && cpsoc->state != CPS_STT_ESTABLISHED) {
            return ((void *) 0);
        }
    } else {
        (*buffer_len) = -1;
        return ((void *) 0);
    }

    return ((u8 *) cpsoc->rcvbuf.data) + consumed;
}
