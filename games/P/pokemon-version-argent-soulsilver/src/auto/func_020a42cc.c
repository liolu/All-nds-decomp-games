/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a42cc from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_link.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode _Z20DisableIRQInterruptsv(void);
extern OSIntrMode _Z20SetIRQInterruptStatei(OSIntrMode state);
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
extern CpsState data_021d4640;
extern void func_020a42cc(void);
void func_020a42cc(void) {
    OSIntrMode enabled = _Z20DisableIRQInterruptsv();
    data_021d4640.recvTail += *(u16 *) (data_021d4640.recvRing + data_021d4640.recvTail);
    if (data_021d4640.recvTail >= data_021d4640.recvRingSize) {
        data_021d4640.recvTail = 0;
    }
    _Z20SetIRQInterruptStatei(enabled);
}
