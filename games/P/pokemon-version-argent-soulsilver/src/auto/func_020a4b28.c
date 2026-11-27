/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a4b28 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_send_transport.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
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
typedef struct CpsState {
    u8 sendFailed;
    u8 addressConflict;
    u16 mss;
    u16 pingSeq;
    u16 ipId;
    u16 ephemeralPort;
    u8 unk_0A[2];
    int status;
    u32 staticIp;
    void *(*alloc)(u32 size);
    void (*addressCallback)(void);
    u32 netmask;
    u32 dhcpServer;
    u32 yieldSleep;
    volatile u32 recvHead;
    u32 gateway;
    volatile u32 recvTail;
    u32 requestedIp;
    u32 dhcpRetry;
    void (*scavengerCallback)(void);
    void (*free)(void *ptr);
    u32 calmDown;
    int (*linkIsOn)(void);
    u32 leaseTime;
    u32 hostIp;
    OSThread *recvWaiter;
    u8 *recvRing;
    volatile u32 recvRingSize;
    u32 dns[2];
    u64 random;
    u64 randomMul;
    u64 randomAdd;
} CpsState;
typedef struct CpsUdpHeader {
    u16 sourcePort;
    u16 destPort;
    u16 length;
    u16 checksum;
} CpsUdpHeader;
extern CpsState data_021d4640;
static inline u16 CpsSwap16(u16 value) {
    return (value >> 8) | (value << 8);
}
extern u32 func_020a3cc8(const void *data, u32 length, u32 sum);
extern u16 func_020a3d7c(u16 sum);
extern void func_020a4880(u8 *data, u32 length, u8 *extra, u32 extraLength, u32 ip, u8 protocol);
extern void func_020a4b28(const void *data, int length, CpsSocket *socket);
typedef struct CpsPseudoHeader {
    u16 sourceHigh, sourceLow;
    u16 destHigh, destLow;
    u16 protocol;
    u16 length;
} CpsPseudoHeader;
#pragma push
#pragma opt_common_subs off
void func_020a4b28(const void *data, int length, CpsSocket *socket) {
    CpsUdpHeader *udp = (CpsUdpHeader *) (socket->sendBuf.data + 0x22);
    u32 checksum;
    volatile u32 *remoteIp                              = &socket->remoteIp;
    ((CpsPseudoHeader *) ((u8 *) udp - 12))->sourceHigh = CpsSwap16((u16) (((volatile u32 *) &data_021d4640)[0x50 / 4] >> 16));
    ((CpsPseudoHeader *) ((u8 *) udp - 12))->sourceLow  = CpsSwap16((u16) ((volatile u32 *) &data_021d4640)[0x50 / 4]);
    ((CpsPseudoHeader *) ((u8 *) udp - 12))->destHigh   = CpsSwap16((u16) (*remoteIp >> 16));
    ((CpsPseudoHeader *) ((u8 *) udp - 12))->destLow    = CpsSwap16((u16) *remoteIp);
    ((CpsPseudoHeader *) ((u8 *) udp - 12))->protocol   = 0x1100;
    udp->length                                         = CpsSwap16((u16) (length + 8));
    ((CpsPseudoHeader *) ((u8 *) udp - 12))->length     = udp->length;
    udp->destPort                                       = CpsSwap16(socket->remotePort);
    udp->sourcePort                                     = CpsSwap16(socket->localPort);
    udp->checksum                                       = 0;
    checksum                                            = func_020a3cc8((u8 *) udp - 12, 20, 0);
    checksum                                            = func_020a3cc8(data, length, checksum);
    udp->checksum                                       = CpsSwap16(func_020a3d7c((u16) checksum));
    func_020a4880((u8 *) udp, 8, (u8 *) data, length, *remoteIp, 17);
}
