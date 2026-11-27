/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Auth_HandleResponse from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/auth_request.c (license:
 * none), reused by tools/donor_match.py */
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
typedef struct AuthParams {
    u16 ingamesn[26];
    char gsbrcd[12];
    NasAllocFunc alloc;
    NasFreeFunc free;
} AuthParams;
typedef struct AuthResult {
    int error;
    char returncd[4];
    char datetime[15];
    char locator[51];
    char token[301];
    char challenge[9];
    char cookie[0x44];
} AuthResult;
typedef struct AuthWork {
    u8 threadStack[0x1000];
    u32 unk_1000;
    int result;
    AuthResult response;
    AuthParams params;
    u8 unk_1214[0x100];
    NasHttp *request;
    OSThread thread;
    OSMutex mutex;
    int cancelled;
} AuthWork;
typedef struct AuthState {
    int state;
    int mode;
    AuthWork *work;
    u64 userId;
} AuthState;
extern AuthState data_0210e654;
extern int func_020491e0(void);
extern int func_020493b8(void);
extern int func_0204ae18(NasHttp *http, int headerOnly);
extern u8 data_0210e660[];
extern char data_020f92e4[];
extern char data_020f92f4[];
extern int DWCi_AUTH_UpDateWiFiID(void *, void *);
extern void DWCi_AUTH_RemakeWiFiID(void *);
extern void DWCi_AUTH_MakeWiFiID(void *);
int func_020491e0(void) {
    NasAllocFunc alloc = data_0210e654.work->params.alloc;
    NasFreeFunc free   = data_0210e654.work->params.free;
    void *block;
    s32 error;
    if (func_0204ae18(data_0210e654.work->request, 0) != 1) {
        data_0210e654.work->response.error = 20100;
        return 14;
    }
    if (func_020493b8() != 0) {
        return 14;
    }
    error = data_0210e654.work->response.error;
    if (error < 20100) {
        if (error == 20002) {
            block = alloc(data_020f92e4, 0x71f);
            if (!block) {
                data_0210e654.work->response.error = 20100;
                return 2;
            }
            if (DWCi_AUTH_UpDateWiFiID(data_0210e660, (void *) (((u32) block + 31) & ~31u)) != 1) {
                free(data_020f92f4, block, 0);
                data_0210e654.work->response.error = 20100;
                return 15;
            }
            free(data_020f92f4, block, 0);
        }
        return 21;
    }
    switch (error) {
        case 20104: {
            DWCi_AUTH_RemakeWiFiID(data_0210e660);
            data_0210e654.work->response.error = 20104;
            return 16;
        }
        case 20108: {
            block = alloc(data_020f92e4, 0x700);
            if (!block) {
                data_0210e654.work->response.error = 20108;
                return 17;
            }
            DWCi_AUTH_MakeWiFiID((void *) (((u32) block + 31) & ~31u));
            free(data_020f92f4, block, 0);
            data_0210e654.work->response.error = 20108;
            return 17;
        }
        default:
            return 18;
    }
}
int func_020493b8(void);
