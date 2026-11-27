/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* tcp_send_rst from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_tcp.c (license: none), reused by
 * tools/donor_match.py */
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
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
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
typedef struct CpsIpHeader {
    u8 versionAndLength;
    u8 tos;
    u16 totalLength;
    u16 id;
    u16 fragment;
    u8 ttl;
    u8 protocol;
    u16 checksum;
    u16 source[2];
    u16 dest[2];
} CpsIpHeader;
typedef struct CpsTcpHeader {
    u16 sourcePort;
    u16 destPort;
    u16 seq[2];
    u16 ack[2];
    u8 dataOffset;
    u8 flags;
    u16 window;
    u16 checksum;
    u16 urgent;
    u8 options[];
} CpsTcpHeader;
extern CpsState wfailed;
extern CpsSocket tmpsoc;
extern u16 data_0210cb1c[];
static inline u16 CpsSwap16(u16 value) {
    return (value >> 8) | (value << 8);
}
static inline u32 CpsRead32(const u16 *p) {
    return ((u32) CpsSwap16(p[0]) << 16) | CpsSwap16(p[1]);
}
extern void tcp_send_handshake(CpsSocket *socket, int flags, int arg);
extern void tcp_send_rst(CpsIpHeader *ip, CpsTcpHeader *tcp, u32 length, int arg);
void tcp_send_handshake(CpsSocket *socket, int flags, int arg);
void tcp_send_rst(CpsIpHeader *ip, CpsTcpHeader *tcp, u32 length, int arg) {
    CpsSocket *socket = &tmpsoc;
    MI_CpuFill8(socket, 0, sizeof(CpsSocket));
    data_0210cb1c[0x27]      = CpsSwap16(tcp->destPort);
    data_0210cb1c[0x2E]      = CpsSwap16(tcp->sourcePort);
    ((u32 *) &wfailed)[0x58] = CpsRead32(ip->source);
    if (tcp->flags & 0x10) {
        socket->sendNext = CpsRead32(tcp->ack);
        tcp_send_handshake(socket, 0x04, arg);
        return;
    }
    socket->sendNext = 0;
    socket->recvNext = length + CpsRead32(tcp->seq);
    if (tcp->flags & (0x02 | 0x01)) {
        socket->recvNext++;
    }
    tcp_send_handshake(socket, 0x04 | 0x10, arg);
}
