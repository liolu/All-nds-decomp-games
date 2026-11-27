/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a0880 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroWiFi/src/socl_startup.c (license: none),
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
extern void func_020d4994(void *dest, u8 data, u32 size);
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
typedef struct CpsConfig {
    u32 staticIp;
    void *(*alloc)(u32 size);
    void (*free)(void *ptr);
    void (*addressCallback)(void);
    int (*linkIsOn)(void);
    u64 randomSeed;
    void *work;
    u32 workSize;
    int mss;
    u32 dhcpRequestIp;
    u32 yieldSleep;
} CpsConfig;
typedef struct SoclConfig {
    int useDhcp;
    u32 hostIp;
    u32 netmask;
    u32 gateway;
    u32 dns[2];
    void *(*alloc)(u32 size);
    void (*free)(void *ptr);
    u32 commandPacketCount;
    u32 cpsWorkSize;
    void *cpsWork;
    int threadPriority;
    int mtu;
    int recvBufSize;
} SoclConfig;
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
typedef struct SoclState {
    u32 yieldSleep;
    u32 lastIp;
    u32 addressState;
    SoclSocket *ctrlSocket;
    CpsConfig cpsConfig;
} SoclState;
extern SoclState data_021d4440;
extern SoclConfig *data_02110648;
extern SoclSocketParam data_02110668;
extern u32 data_021d4690;
extern void func_020a0880(void);
extern void func_020a09dc(void);
extern void func_020a0a48(void);
extern int func_020a0a60(void);
extern void func_020a28dc(void);
extern void func_020a39ac(CpsConfig *config);
extern void func_020a3c90(u32 priority);
extern void func_020a3c38(void *callback);
extern void func_020a41b4(void *a, void *b, void *c, u32 d);
extern void func_020affc4(void (*callback)(void *, void *, void *, u32));
#pragma opt_propagation off
void func_020a0880(void) {
    CpsConfig *cpsConfig = &data_021d4440.cpsConfig;
    SoclConfig *config   = data_02110648;
    void *work;
    int mtu;
    int priority;
    int recvBufSize;
    int mss;
    int consumeMin;
    SoclSocketParam *tcpParam;
    u32 *hostIp;

    func_020d4994(cpsConfig, 0, sizeof(CpsConfig));
    data_021d4440.cpsConfig.alloc      = config->alloc;
    data_021d4440.cpsConfig.free       = config->free;
    data_021d4440.cpsConfig.linkIsOn   = func_020a0a60;
    data_021d4440.cpsConfig.randomSeed = 0;
    data_021d4440.cpsConfig.yieldSleep = data_021d4440.yieldSleep;
    if (config->cpsWorkSize) {
        cpsConfig->workSize = config->cpsWorkSize;
    } else {
        cpsConfig->workSize = 0x4000;
    }
    work = config->cpsWork;
    if (!work) {
        work = data_02110648->alloc(cpsConfig->workSize);
    }
    cpsConfig->work = work;
    mtu             = config->mtu;
    recvBufSize     = config->recvBufSize;
    if (!mtu) {
        mtu = 0x240;
    }
    if (!recvBufSize) {
        recvBufSize = 0x10C0;
    }
    mss                       = mtu - 40;
    tcpParam                  = &data_02110668;
    hostIp                    = &data_021d4690;
    consumeMin                = recvBufSize / 2;
    data_02110668.recvBufSize = recvBufSize;
    tcpParam->consumeMin      = consumeMin;
    cpsConfig->mss            = mss;
    *hostIp                   = 0;
    {
        u32 on = 1;
        if (config->useDhcp) {
            cpsConfig->staticIp        = 0;
            cpsConfig->addressCallback = func_020a0a48;
            data_021d4440.addressState = on;
            cpsConfig->dhcpRequestIp   = data_021d4440.lastIp;
        } else {
            data_021d4440.addressState = 0;
            cpsConfig->staticIp        = on;
            cpsConfig->addressCallback = func_020a09dc;
        }
    }
    priority = config->threadPriority;
    if (!priority) {
        priority = 11;
    }
    func_020a3c90(priority);
    func_020affc4(func_020a41b4);
    func_020a3c38(func_020a28dc);
    func_020a39ac(cpsConfig);
}
void func_020a09dc(void);
void func_020a0a48(void);
int func_020a0a60(void);
