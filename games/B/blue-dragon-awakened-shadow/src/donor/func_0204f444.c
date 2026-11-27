/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_GPConnect from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/dwc_login.c (license: none), reused by
 * tools/donor_match.py */
extern char *strcpy(char *dest, const char *src);
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
typedef struct DwcAccData {
    u32 flags;
    u32 low;
    u32 high;
} DwcAccData;
typedef struct DwcUserData {
    u32 size;
    DwcAccData tempLoginId;
    DwcAccData loginId;
    u32 gsProfileId;
    u32 flags;
    u32 gameCode;
    u8 unk_28[0x14];
    u32 crc;
} DwcUserData;
typedef struct GPIConnection GPIConnection;
typedef GPIConnection *GPConnection;
typedef void (*GPCallback)(GPConnection *, void *, void *);
typedef struct LoginConnectResult {
    int result;
    int profileId;
    u32 unk_08[6];
} LoginConnectResult;
typedef struct LoginState {
    GPConnection *connection;
    int state;
    int productId;
    u32 gameCode;
    u16 *playerName;
    void (*callback)(int error, int profileId, void *param);
    void *param;
    DwcUserData *userData;
    u32 unk_20;
    NasHttp *auth;
    u64 authTick;
    int pending;
    u64 connectTick;
    DwcAccData loginId;
    char token[256];
    char challenge[256];
    char userName[9];
    char gsbrcd[12];
    u8 unk_25D[3];
    LoginConnectResult response;
} LoginState;
typedef struct LoginGlobal {
    void *authParam;
    LoginState *state;
    void (*authCallback)(const char *token, const char *challenge, void *param);
} LoginGlobal;
extern LoginGlobal data_0210e8c0;
extern int func_0204f280(int error);
extern void func_0204f444(const char *token, const char *challenge, GPCallback callback, int state);
extern int func_0205e074(GPConnection *connection, const char *token, const char *challenge, int flag, int unused,
                         GPCallback callback, void *param);
int func_0204f280(int error);
void func_0204f444(const char *token, const char *challenge, GPCallback callback, int state) {
    LoginState *login;
    strcpy(data_0210e8c0.state->token, token);
    strcpy(data_0210e8c0.state->challenge, challenge);
    login              = data_0210e8c0.state;
    login->connectTick = OS_GetTick();
    login->pending     = 1;
    if (func_0204f280(func_0205e074(data_0210e8c0.state->connection, data_0210e8c0.state->token,
                                    data_0210e8c0.state->challenge, 1, 0, callback, ((void *) 0))) == 0) {
        data_0210e8c0.state->state = state;
    }
}
