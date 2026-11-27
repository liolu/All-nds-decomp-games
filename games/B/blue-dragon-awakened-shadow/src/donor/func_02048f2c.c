/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Auth_Thread from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/auth_request.c (license: none),
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
extern void OS_JoinThread(OSThread *thread);
extern void OS_Sleep(u32 msec);
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
extern int func_02048e1c(int mode);
extern void func_02048f2c(void *arg);
extern int func_020491e0(void);
extern void func_02049824(int result);
extern void func_0204a640(NasHttp *http);
void func_02048f2c(void *arg) {
    int retries = 0;
    for (;;) {
        int restart, status;
        OSTick start;
        if (data_0210e654.work->request->thread.id) {
            OS_JoinThread(&data_0210e654.work->request->thread);
        }
        if (data_0210e654.work->request->result != 8) {
            data_0210e654.work->response.error = 20100;
            status                             = data_0210e654.work->request->result;
            if (status == 7) {
                func_02049824(20);
                return;
            }
            if (retries > 2) {
                if (status == 2) {
                    func_02049824(9);
                    return;
                }
                if (status == 3) {
                    func_02049824(11);
                    return;
                }
                func_02049824(13);
                return;
            }
            restart = 1;
            retries++;
        } else {
            status = func_020491e0();
            switch (status) {
                case 21:
                    func_02049824(21);
                    return;
                case 16:
                    if (retries > 2) {
                        func_02049824(16);
                        return;
                    }
                    restart = 0;
                    retries++;
                    break;
                case 17:
                    func_02049824(status);
                    return;
                default:
                    if (retries >= 2) {
                        func_02049824(status);
                        return;
                    }
                    restart = 1;
                    retries++;
                    break;
            }
        }
        start = OS_GetTick();
        while (((OS_GetTick() - start) << 6) / 33514 < 5000) {
            OS_LockMutex(&data_0210e654.work->mutex);
            if (data_0210e654.work->cancelled == 1) {
                data_0210e654.work->response.error = 20100;
                OS_UnlockMutex(&data_0210e654.work->mutex);
                func_02049824(20);
                return;
            }
            OS_UnlockMutex(&data_0210e654.work->mutex);
            OS_Sleep(5000);
        }
        func_0204a640(data_0210e654.work->request);
        OS_LockMutex(&data_0210e654.work->mutex);
        data_0210e654.work->result = func_02048e1c(restart);
        if (data_0210e654.work->result) {
            data_0210e654.work->response.error = 20100;
            OS_UnlockMutex(&data_0210e654.work->mutex);
            return;
        }
        OS_UnlockMutex(&data_0210e654.work->mutex);
        continue;
    }
}
int func_020491e0(void);
void func_02049824(int result);
