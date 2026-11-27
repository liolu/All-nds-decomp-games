/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Auth_ReadResponse from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/auth_request.c (license: none),
 * reused by tools/donor_match.py */
extern unsigned strlen(const char *str);
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
extern int func_020493b8(void);
extern char *func_0204b0b8(NasHttp *http, char *label);
extern u32 func_0204b110(NasHttp *http, char *label, char *out, u32 size);
extern int func_0204b164(NasHttp *http, char *label, char *out, int size);
extern int func_0204c4a4(char *date);
extern int errno;
extern char data_020f9300[];
extern char data_020f9308[];
extern char data_020f9314[];
extern char data_020f9320[];
extern char data_020f9328[];
extern char data_020f9330[];
extern char data_020f933c[];
extern char data_020f9348[];
extern long atoi(const char *s);
extern long strtol(const char *s, char **end, int base);
int func_020493b8(void) {
    char *end = ((void *) 0);
    long code;
    long value;
    AuthWork *work;
    end = func_0204b0b8(data_0210e654.work->request, data_020f9300);
    if (end != ((void *) 0)) {
        func_0204c4a4(end);
    }
    end   = ((void *) 0);
    errno = 0;
    code  = atoi(func_0204b0b8(data_0210e654.work->request, data_020f9308));
    if (errno == 0x22) {
        data_0210e654.work->response.error = 20101;
        return 12;
    }
    if (code != 200) {
        data_0210e654.work->response.error = code + 23000;
        return 18;
    }
    if ((int) func_0204b110(data_0210e654.work->request, data_020f9314, data_0210e654.work->response.returncd, 4) <= 0) {
        data_0210e654.work->response.error = 20101;
        return 14;
    }
    value = strtol(data_0210e654.work->response.returncd, &end, 10);
    work  = data_0210e654.work;
    if (end != work->response.returncd + strlen(work->response.returncd)) {
        work->response.error = 20101;
        return 12;
    }
    work->response.error = value + 20000;
    if (value < 100) {
        data_0210e654.work->response.token[0]     = 0;
        data_0210e654.work->response.locator[0]   = 0;
        data_0210e654.work->response.challenge[0] = 0;
        data_0210e654.work->response.datetime[0]  = 0;
        data_0210e654.work->response.cookie[0]    = 0;
        func_0204b110(data_0210e654.work->request, data_020f9320, data_0210e654.work->response.token, 0x12d);
        func_0204b110(data_0210e654.work->request, data_020f9328, data_0210e654.work->response.locator, 0x33);
        func_0204b110(data_0210e654.work->request, data_020f9330, data_0210e654.work->response.challenge, 9);
        func_0204b110(data_0210e654.work->request, data_020f933c, data_0210e654.work->response.datetime, 0xf);
        func_0204b164(data_0210e654.work->request, data_020f9348, data_0210e654.work->response.cookie, 0x41);
        data_0210e654.work->response.cookie[0x2B] = 0;
        if (value != 40) {
            data_0210e654.state = 1;
        } else {
            data_0210e654.state = 2;
        }
    }
    return 0;
}
