/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a19e4 from https://github.com/ntrtwl/NitroWiFi libraries/soc/src/socl_read.c (license: none), reused by
 * tools/donor_match.py */
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
extern void func_020d2108(u32 msec);
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
extern void func_020d4a50(const void *src, void *dest, u32 size);
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
extern u8 *func_020a6d58(u32 *len);
extern void func_020a6e4c(u32 len);
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
static inline BOOL SOCL_SocketIsTCP(SOCLSocket *socket) {
    return (socket->flag_mode == 0 || socket->flag_mode == 4);
}
static inline BOOL SOCL_SocketIsSSL(SOCLSocket *socket) {
    return (socket->flag_mode == 4);
}
static inline BOOL SOCL_SocketIsState(SOCLSocket *socket, u16 state) {
    return (s32) socket->state & (s32) state;
}
static inline BOOL SOCL_SocketIsReset(SOCLSocket *socket) {
    return SOCL_SocketIsState(socket, 0x0080);
}
typedef int (*SOCLiCommandHandler)(void *);
typedef struct SOCLiCommandHeader {
    SOCLiCommandHandler handler;
    SOCLSocket *socket;
    OSMessageQueue *response;
    s8 flag_mode;
    s8 flag_block;
    u8 padding[2];
} SOCLiCommandHeader;
typedef struct SOCLiCommandRead {
    SOCLiCommandHeader h;
    u8 *buffer;
    s32 buffer_len;
    u16 *remote_port;
    SOCLInAddr *remote_ip;
    s8 flag_noconsume;
    u8 padding[3];
} SOCLiCommandRead;
extern int func_020a181c(SOCLSocket *, void *, int, u16 *, SOCLInAddr *);
extern int func_020a19e4(void *);
extern int func_020a1b90(SOCLSocket *);
int func_020a181c(SOCLSocket *socket, void *buffer, int buffer_len, u16 *remote_port, SOCLInAddr *remote_ip);
int func_020a19e4(void *arg) {
    SOCLiCommandRead *cpacket             = (SOCLiCommandRead *) arg;
    SOCLSocket *socket                    = cpacket->h.socket;
    SOCLiSocketRecvCommandPipe *recv_pipe = socket->recv_pipe;
    u8 *buffer                            = cpacket->buffer;
    s32 buffer_len                        = cpacket->buffer_len;
    u16 *remote_port                      = cpacket->remote_port;
    SOCLInAddr *remote_ip                 = cpacket->remote_ip;
    u8 *cpsbuffer;
    u32 cpsbuffer_len;
    s32 consumed;
    int result;

    consumed = recv_pipe->consumed;
    for (;;) {
        cpsbuffer = func_020a6d58(&cpsbuffer_len);
        if (cpsbuffer == ((void *) 0) || (s32) cpsbuffer_len - consumed > 0) {
            break;
        }

        if (SOCL_SocketIsTCP(socket) && socket->cps_socket.state != CPS_STT_ESTABLISHED) {
            cpsbuffer = ((void *) 0);
            break;
        }

        func_020d2108(10);
    }

    if (SOCL_SocketIsReset(socket)) {
        return (-15);
    }

    if (SOCL_SocketIsSSL(socket)) {
        u32 len;

        if (cpsbuffer == ((void *) 0)) {
            return 0;
        }

        len = (((buffer_len) <= (cpsbuffer_len)) ? (buffer_len) : (cpsbuffer_len));
        func_020d4a50(cpsbuffer, buffer, len);
        func_020a6e4c(len);
        return (int) len;
    }

    if (cpsbuffer) {
        result = func_020a181c(socket, buffer, buffer_len, remote_port, remote_ip);
    } else {
        result = 0;
    }

    if (result <= 0) {
        return result;
    }

    ((void) 0);
    if (recv_pipe->consumed >= (s32) recv_pipe->consumed_min) {
        (void) func_020a1b90(socket);
    }

    return result;
}
int func_020a1b90(SOCLSocket *socket);
