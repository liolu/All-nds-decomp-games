/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOCLi_EnableSslCallBack from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroWiFi/src/socl_ssl.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
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
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
extern void func_020d2618(OSMutex *mutex);
extern void func_020d269c(OSMutex *mutex);
typedef u64 OSTick;
typedef void *OSMessage;
typedef struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
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
typedef struct CpsSocketBuffer {
    s32 size;
    u8 *data;
} CpsSocketBuffer;
typedef struct CpsSocket {
    OSThread *thread;
    u32 waiting;
    u8 state;
    u8 sslEnabled;
    u16 localPort;
    void *ssl;
    s32 tick;
    u32 localIp;
    u16 remotePort;
    u16 boundRemotePort;
    u32 remoteIp;
    u32 boundRemoteIp;
    u32 recvNext;
    u32 sendNext;
    u16 sendWindow;
    u16 mss;
    u32 sendAcked;
    u32 recvSegments;
    int (*udpCallback)(u8 *data, u32 length, struct CpsSocket *socket);
    CpsSocketBuffer recvBuf;
    s32 recvLength;
    CpsSocketBuffer sendBuf;
    CpsSocketBuffer unk_50;
    CpsSocketBuffer writeBuf;
    u32 writeLength;
} CpsSocket;
typedef int (*SoclCommandHandler)(struct SoclCommandPacket *packet);
typedef struct SoclCommandPacket {
    SoclCommandHandler handler;
    struct SoclSocket *socket;
    OSMessageQueue *reply;
    s8 socketType;
    s8 flags;
    u8 unk_0E[2];

    union {
        struct {
            u16 localPort;
            u16 remotePort;
            u32 remoteIp;
        } bind;

        struct {
            u16 localPort;
            u16 *remotePort;
            u32 *remoteIp;
        } accept;

        struct {
            void *buffer;
            u32 length;
            u16 *remotePort;
            u32 *remoteIp;
        } read;

        struct {
            u8 *data;
            int length;
            u8 *wrapData;
            int wrapLength;
            u16 ringEnd;
            u16 unk_22;
            u16 localPort;
            u16 remotePort;
            u32 remoteIp;
        } write;

        void *ssl;
    } param;
} SoclCommandPacket;
typedef struct SoclCommandPipe {
    OSMessageQueue queue;
    OSThread thread;
    OSMutex mutex;
} SoclCommandPipe;
typedef struct SoclUdpPacket {
    struct SoclUdpPacket *next;
    u16 length;
    u16 remotePort;
    u32 remoteIp;
    u8 data[];
} SoclUdpPacket;
typedef struct SoclRecvPipe {
    SoclCommandPipe cmd;
    s32 consumed;
    u16 consumeMin;
    s8 peek;
    u8 unk_FF;
    SoclUdpPacket *udpTail;
    SoclUdpPacket *volatile udpHead;
    u16 udpBytes;
    u16 udpMax;
    OSThreadQueue udpWait;
} SoclRecvPipe;
typedef struct SoclSendPipe {
    SoclCommandPipe cmd;
    CpsSocketBuffer ring;
    u16 ringWrite;
    u16 ringRead;
    OSThreadQueue ringWait;
    struct SoclSocket *socket;
} SoclSendPipe;
typedef struct SoclSocket {
    CpsSocket cps;
    SoclRecvPipe *recvPipe;
    SoclSendPipe *sendPipe;
    int result;
    volatile s16 state;
    s8 blocking;
    s8 type;
    u16 localPort;
    u16 remotePort;
    u32 remoteIp;
    struct SoclSocket *next;
} SoclSocket;
extern int func_020a3810(SoclCommandPacket *packet);
extern void func_020ab948(int enable);
int func_020a3810(SoclCommandPacket *packet) {
    SoclSocket *socket     = packet->socket;
    SoclRecvPipe *recvPipe = socket->recvPipe;
    CpsSocket *cps         = recvPipe->cmd.thread.specific[0];
    void *ssl;
    func_020d2618(&recvPipe->cmd.mutex);
    ssl = packet->param.ssl;
    if (ssl) {
        cps->ssl = ssl;
        func_020ab948(1);
        socket->type = 4;
    } else {
        socket->type = 0;
        func_020ab948(0);
        cps->ssl = ((void *) 0);
    }
    func_020d269c(&recvPipe->cmd.mutex);
    return 0;
}
