/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOCLi_InitSocket from https://github.com/ntrtwl/NitroWiFi libraries/soc/src/socl_create.c (license: none), reused by
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
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {

    queue->head = queue->tail = ((void *) 0);
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
typedef struct SOCLSocketThreadParam {
    u16 stack_size;
    u8 priority;
    u8 queue_max;
} SOCLSocketCommandPipeParam;
typedef struct SOCLSocketBufferParam {
    u16 rcvbuf_size;
    u16 rcvbuf_consume_min;
    u16 sndbuf_size;
    u16 linbuf_size;
    u16 outbuf_size;
    u16 wrtbuf_size;
    u16 udpbuf_size;
} SOCLSocketBufferParam;
typedef struct SOCLSocketParam {
    s8 flag_mode;
    s8 flag_block;
    SOCLSocketBufferParam buffer;
    SOCLSocketCommandPipeParam recv_pipe;
    SOCLSocketCommandPipeParam send_pipe;
} SOCLSocketParam;
extern int SOCLiUDPSendSocket;
extern u8 *SOCLi_InitSocket(SOCLSocket *socket, const SOCLSocketParam *param);
extern u8 *SOCLi_InitSocketBuffer(u8 *ptr, CPSSocBuf *buf, u32 size);
extern u8 *SOCLi_InitCommandPipe(u8 *ptr, SOCLiSocketCommandPipe *pipe, const SOCLSocketCommandPipeParam *param);
u8 *SOCLi_InitSocket(SOCLSocket *socket, const SOCLSocketParam *param) {
    u8 *ptr;
    CPSSoc *cps = &socket->cps_socket;

    socket->flag_mode  = param->flag_mode;
    socket->flag_block = param->flag_block;

    ptr = (u8 *) socket;
    ptr = ptr + ((((sizeof(SOCLSocket))) + ((4) - 1)) & ~((4) - 1));

    if (param->buffer.rcvbuf_size) {
        SOCLiSocketRecvCommandPipe *pipe = (SOCLiSocketRecvCommandPipe *) ptr;

        socket->recv_pipe  = pipe;
        pipe->consumed_min = param->buffer.rcvbuf_consume_min;

        ptr += ((((sizeof(SOCLiSocketRecvCommandPipe))) + ((4) - 1)) & ~((4) - 1));
        ptr = SOCLi_InitCommandPipe(ptr, &pipe->h, &param->recv_pipe);

        ptr = SOCLi_InitSocketBuffer(ptr, &cps->rcvbuf, param->buffer.rcvbuf_size);
        ptr = SOCLi_InitSocketBuffer(ptr, &cps->linbuf, param->buffer.linbuf_size);

        pipe->udpdata.size_max = param->buffer.udpbuf_size;
        OS_InitThreadQueue(&pipe->udpdata.waiting);
    }

    if (param->buffer.sndbuf_size) {
        SOCLiSocketSendCommandPipe *pipe = (SOCLiSocketSendCommandPipe *) ptr;

        socket->send_pipe = pipe;
        pipe->exe_socket  = socket;

        ptr += ((((sizeof(SOCLiSocketSendCommandPipe))) + ((4) - 1)) & ~((4) - 1));
        ptr = SOCLi_InitCommandPipe(ptr, &pipe->h, &param->send_pipe);

        ptr = SOCLi_InitSocketBuffer(ptr, &cps->sndbuf, param->buffer.sndbuf_size);
        ptr = SOCLi_InitSocketBuffer(ptr, &cps->outbuf, param->buffer.outbuf_size);
        ptr = SOCLi_InitSocketBuffer(ptr, &pipe->buffer.area, param->buffer.wrtbuf_size);
        OS_InitThreadQueue(&pipe->buffer.waiting);
    } else {
        socket->send_pipe = ((SOCLSocket *) SOCLiUDPSendSocket)->send_pipe;
    }

    return ptr;
}
u8 *SOCLi_InitSocketBuffer(u8 *ptr, CPSSocBuf *buf, u32 size);
u8 *SOCLi_InitCommandPipe(u8 *ptr, SOCLiSocketCommandPipe *pipe, const SOCLSocketCommandPipeParam *param);
