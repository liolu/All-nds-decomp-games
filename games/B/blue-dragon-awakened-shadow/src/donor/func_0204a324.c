/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Http_Thread from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/auth_http.c (license: none), reused
 * by tools/donor_match.py */
extern unsigned strlen(const char *str);
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
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
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
extern void OS_LockMutex(OSMutex *mutex);
extern void OS_UnlockMutex(OSMutex *mutex);
typedef u64 OSTick;
extern OSTick OS_GetTick(void);
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
extern int func_0204a158(NasHttp *http);
extern void func_0204a1d0(NasHttp *http);
extern int func_0204a228(NasHttp *http);
extern int func_0204a23c(NasHttp *http);
extern void func_0204a324(NasHttp *http);
extern int func_0204aa24(int code);
extern int CPSMyIp;
extern const u8 data_020f9490[];
extern void CPS_SocUse(void);
extern void CPS_SocRelease(void);
extern void CPS_SocUnRegister(void);
extern void CPS_SocFlush(void);
extern void CPS_TcpShutdown(void);
extern void CPS_TcpClose(void);
extern void func_0203cb40(const void *, int);
extern void func_0203f848(int);
extern void CPS_SocBind(int, u16, u32);
extern int CPS_TcpConnect(void);
extern int CPS_SocWrite(const void *, u32);
extern int CPS_SocGetLength(void);
extern void *CPS_SocRead(int *);
extern void CPS_SocConsume(u32);
int func_0204a158(NasHttp *http);
void func_0204a1d0(NasHttp *http);
int func_0204a228(NasHttp *http);
int func_0204a23c(NasHttp *http);
void func_0204a324(NasHttp *http) {
    NasHttpSocket *soc = &http->socket;
    NasHttpSsl *ssl    = &http->ssl;
    NasHttpBuffer *b   = &http->response;
    int timeout        = http->params.timeout;
    int parsed         = 0;
    u32 ip;
    int length;
    u64 last;
    if (timeout <= 0) {
        timeout = 60000;
    }
    func_0204a1d0(http);
    ip = func_0204a228(http);
    if (!ip) {
        http->result = 2;
        return;
    }
    http->ip = ip;
    CPS_SocUse();
    if (http->secure == 1) {
        MI_CpuFill8(ssl, 0, 0x830);
        ssl->authCallback = func_0204aa24;
        ssl->serverName   = http->host;
        soc->ssl          = ssl;
        func_0203cb40(data_020f9490, 12);
        func_0203f848(1);
    }
    CPS_SocBind(0, http->port, ip);
    if (CPS_TcpConnect() != 0) {
        http->result = 3;
        CPS_SocRelease();
        CPS_SocUnRegister();
        return;
    }
    {
        char *request = http->request.buffer;
        length        = CPS_SocWrite(request, strlen(request));
    }
    if (length <= 0) {
        http->result = 5;
        goto fail;
    }
    CPS_SocFlush();
    if (!func_0204a158(http)) {
        http->result = 7;
        goto fail;
    }
    b->pos = b->buffer;
    b->end = b->buffer + b->size;
    last   = OS_GetTick();
    for (;;) {
        int take;
        void *data;
        if (!CPSMyIp) {
            http->result = 5;
            goto fail;
        }
        length = CPS_SocGetLength();
        if (length < 0) {
            break;
        }
        if (length > 0) {
            last = OS_GetTick();
            data = CPS_SocRead(&length);
            if (!data) {
                break;
            }
            take = length;
            if (take >= b->end - 1 - b->pos) {
                take = b->end - 1 - b->pos;
            }
            MI_CpuCopy8(data, b->pos, take);
            b->pos += take;
            *b->pos = 0;
            if (parsed == 1) {
                OS_LockMutex(&http->recvMutex);
                http->received += take;
                OS_UnlockMutex(&http->recvMutex);
            } else {
                parsed = func_0204a23c(http);
            }
            if ((u32) length > (u32) take) {
                CPS_SocConsume(length);
                break;
            }
            CPS_SocConsume(take);
        }
        if (http->contentLength >= 0 && http->received >= http->contentLength) {
            break;
        }
        if (((OS_GetTick() - last) << 6) / 33514 > (u64) (s64) timeout) {
            http->result = 6;
            goto fail;
        }
        if (!func_0204a158(http)) {
            http->result = 7;
            goto fail;
        }
    }
    CPS_TcpShutdown();
    CPS_TcpClose();
    CPS_SocRelease();
    CPS_SocUnRegister();
    http->result = 8;
    return;
fail:
    CPS_TcpShutdown();
    CPS_TcpClose();
    CPS_SocRelease();
    CPS_SocUnRegister();
}
int func_0204aa24(int code);
