/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOCLi_WriteCallBack from projets/blue-dragon-awakened-shadow/src/donor/SOCLi_WriteCallBack.c (same code in another game of
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
extern void func_02005130(OSThreadQueue *queue);
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
extern void func_02098a38(u16 local_port, u16 remote_port, CPSInAddr remote_ip);
extern u32 func_02099300(u8 *buf, u32 len);
extern void func_02098ca0(void);
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
static inline BOOL SOCL_SocketIsState(SOCLSocket *socket, u16 state) {
    return (s32) socket->state & (s32) state;
}
static inline BOOL SOCL_SocketIsConnected(SOCLSocket *socket) {
    return SOCL_SocketIsState(socket, 0x0004);
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
typedef struct SOCLiCommandWrite {
    SOCLiCommandHeader h;
    u8 *buffer1;
    s32 buffer1_len;
    u8 *buffer2;
    s32 buffer2_len;
    u16 wrtbuf_after;
    u8 padding[2];
    u16 local_port;
    u16 remote_port;
    SOCLInAddr remote_ip;
} SOCLiCommandWrite;
extern int func_0209be00(void *);
extern int func_0209bfd4(u8 *, int, SOCLiCommandWrite *);
extern int func_0209bf30(int);
int func_0209be00(void *arg) {
    SOCLiCommandWrite *cpacket            = (SOCLiCommandWrite *) arg;
    SOCLSocket *socket                    = cpacket->h.socket;
    SOCLiSocketSendCommandPipe *send_pipe = socket->send_pipe;
    u8 *sndbuf;
    int sndbuf_len;
    int sndbuf_offset;
    int copied = 0;
    int result;

    ((void) 0);

    if ((!SOCL_SocketIsTCP(socket)) || SOCL_SocketIsConnected(socket)) {
        if (cpacket->remote_ip) {

            func_02098a38(cpacket->local_port, cpacket->remote_port, cpacket->remote_ip);
        }
#line 309
        sndbuf_offset = SOCL_SocketIsTCP(socket) ? (14 + 20 + 20) : (14 + 20 + 8);
        sndbuf        = socket->cps_socket.sndbuf.data + sndbuf_offset;

        if (SOCL_SocketIsTCP(socket)) {

            sndbuf_len = func_0209bf30((int) socket->cps_socket.sndbuf.size - sndbuf_offset);
        } else {
            sndbuf_len = (int) socket->cps_socket.sndbuf.size - sndbuf_offset;
        }

        for (;;) {
            result = func_0209bfd4(sndbuf, sndbuf_len, cpacket);
            if (result <= 0) {
                break;
            }

            result = (int) func_02099300(sndbuf, (u32) result);

            if (result <= 0) {
                if (SOCL_SocketIsTCP(socket)) {
                    socket->state &= ~(0x0002 | 0x0004 | 0x0008);
                    socket->state |= 0x0080;

                    func_02098ca0();
                }

                copied = (-76);
                break;
            }

            copied += result;
        }
    } else {
        copied = (-76);
    }

    send_pipe->buffer.out = cpacket->wrtbuf_after;
    func_02005130(&send_pipe->buffer.waiting);

    return copied;
}
extern int func_0209bf30(int len);
extern int func_0209bfd4(u8 *sndbuf_ptr, int sndbuf_len, SOCLiCommandWrite *cpacket);
