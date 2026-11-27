/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Http_StartThread from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/auth_http.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
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
extern void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern BOOL OS_IsThreadTerminated(const OSThread *thread);
extern void OS_WakeupThreadDirect(OSThread *thread);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
extern void OS_InitMutex(OSMutex *mutex);
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
typedef void *(*NasAllocFunc)(char *name, int size);
typedef void (*NasFreeFunc)(char *name, void *ptr, int size);
typedef struct NasHttpParams {
    const char *url;
    int method;
    int bufferSize;
    NasAllocFunc alloc;
    NasFreeFunc free;
    int testServer;
    int timeout;
} NasHttpParams;
typedef struct NasHttpBuffer {
    char *buffer;
    char *pos;
    char *end;
    int size;
} NasHttpBuffer;
typedef struct NasHttpEntry {
    char *label;
    char *value;
} NasHttpEntry;
typedef struct NasHttpSocket {
    u8 unk_00[0xC];
    void *ssl;
    u8 unk_10[0x2C];
    u32 recvBufSize;
    void *recvBuf;
    u32 recvLength;
    u32 sendBufSize;
    void *sendBuf;
    u8 unk_50[0x14];
} NasHttpSocket;
typedef struct NasHttpSsl {
    u8 unk_000[0x800];
    char *serverName;
    u8 unk_804[0xC];
    int (*authCallback)(int);
    u8 unk_814[0x1C];
} NasHttpSsl;
typedef struct NasHttp {
    u8 threadStack[0x1000];
    u8 status;
    u8 unk_1001[3];
    NasHttpParams params;
    int result;
    char url[256];
    char *host;
    char *path;
    u32 ip;
    int secure;
    u16 port;
    u16 unk_1136;
    NasHttpSocket socket;
    NasHttpSsl ssl;
    void *lowRecvBuf;
    void *lowSendBuf;
    u8 seed[32];
    int postFieldCount;
    NasHttpBuffer request;
    NasHttpBuffer response;
    OSMutex recvMutex;
    int contentLength;
    int received;
    NasHttpEntry entry[32];
    OSThread thread;
    OSMutex stopMutex;
    int stop;
} NasHttp;
extern void func_0204a040(NasHttp *http, int priority);
extern void func_0204a324(NasHttp *http);
extern int data_0210e674;
void func_0204a040(NasHttp *http, int priority) {
    http->stop = 0;
    OS_InitMutex(&http->stopMutex);
    OS_InitMutex(&http->recvMutex);
    if (http->params.testServer == 1) {
        data_0210e674 = 1;
    } else {
        data_0210e674 = 0;
    }
    if (http->thread.id && !OS_IsThreadTerminated(&http->thread)) {
        return;
    }
    OS_CreateThread(&http->thread, (void (*)(void *)) func_0204a324, http, http->threadStack + 0x1000, 4096, priority);
    OS_WakeupThreadDirect(&http->thread);
}
void func_0204a324(NasHttp *http);
