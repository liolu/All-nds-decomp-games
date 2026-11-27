/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SOCL_Accept from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroWiFi/src/socl_socket.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef unsigned long long int u64;
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
typedef struct SoclPipeParam {
    u16 stackSize;
    u8 priority;
    u8 queueLength;
} SoclPipeParam;
typedef struct SoclSocketParam {
    s8 type;
    s8 blocking;
    u16 recvBufSize;
    u16 consumeMin;
    u16 sendBufSize;
    u16 unk_08;
    u16 writeBufSize;
    u16 sendRingSize;
    u16 udpMax;
    SoclPipeParam recvPipe;
    SoclPipeParam sendPipe;
} SoclSocketParam;
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
extern SoclSocketParam data_02110668;
static inline BOOL SoclSocket_IsCreated(SoclSocket *socket) {
    BOOL result = 0;
    if (socket == ((void *) 0)) {
        goto end;
    }
    if (socket->state & 1) {
        result = 1;
    }
end:
    return result;
}
static inline BOOL SoclSocket_IsStream(SoclSocket *socket) {
    BOOL result = 1;
    if (socket->type != 0 && socket->type != 4) {
        result = 0;
    }
    return result;
}
extern int func_020a0dac(const SoclSocketParam *param);
extern int func_020a1184(int socket, u16 *remotePort, u32 *remoteIp);
extern int func_020a1248(int socket, u16 *remotePort, u32 *remoteIp);
extern int func_020a1390(int socket, u16 localPort);
extern int func_020a2e54(SoclSocket *socket);
int func_020a0dac(const SoclSocketParam *param);
int func_020a1184(int handle, u16 *remotePort, u32 *remoteIp) {
    SoclSocket *socket = (SoclSocket *) handle;
    int newSocket;
    int result;
    if (func_020a2e54(socket)) {
        return -28;
    }
    if (!SoclSocket_IsCreated(socket)) {
        return -39;
    }
    if (socket->state & 2) {
        return -28;
    }
    if (!SoclSocket_IsStream(socket)) {
        return -28;
    }
    if (socket->blocking != 1) {
        return -6;
    }
    newSocket = func_020a0dac(&data_02110668);
    if (newSocket < 0) {
        return newSocket;
    }
    result = func_020a1390(newSocket, socket->localPort);
    if (result < 0) {
        return result;
    }
    result = func_020a1248(newSocket, remotePort, remoteIp);
    if (result >= 0) {
        result = newSocket;
    }
    return result;
}
int func_020a1248(int handle, u16 *remotePort, u32 *remoteIp);
int func_020a1390(int handle, u16 localPort);
