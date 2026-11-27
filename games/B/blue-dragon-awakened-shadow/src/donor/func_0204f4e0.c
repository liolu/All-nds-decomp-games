/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_StartAuth from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/dwc_login.c (license: none), reused by
 * tools/donor_match.py */
extern char *strcpy(char *dest, const char *src);
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
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
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
typedef struct AuthParams {
    u16 ingamesn[26];
    char gsbrcd[12];
    NasAllocFunc alloc;
    NasFreeFunc free;
} AuthParams;
extern int func_02048a54(AuthParams *params, NasHttp *request);
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
extern void DWCi_Acc_SetPlayerId(DwcAccData *data, u32 playerId);
extern void DWCi_Acc_LoginIdToUserName(const DwcAccData *loginId, u32 gameCode, char *out);
extern void DWCi_Acc_CreateTempLoginId(DwcAccData *loginId);
extern BOOL DWCi_Acc_CheckConsoleUserId(const DwcAccData *loginId);
extern BOOL DWCi_Acc_IsValidLoginId(const DwcAccData *loginId);
extern BOOL DWCi_Acc_IsAuthentic(const DwcUserData *user);
typedef struct GPIConnection GPIConnection;
typedef GPIConnection *GPConnection;
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
extern u32 DWCi_WStrLen(const u16 *s);
extern void func_0204f4e0(void (*callback)(const char *token, const char *challenge, void *param), void *param);
extern void *DWC_Alloc(int heap, u32 size);
extern void *DWC_AllocEx(int heap, u32 size, int align);
extern void DWC_Free(int heap, void *p, u32 size);
void func_0204f4e0(void (*callback)(const char *token, const char *challenge, void *param), void *param) {
    AuthParams params;
    NasHttp *auth;
    MI_CpuFill8(&params, 0, sizeof(params));
    data_0210e8c0.authCallback = callback;
    data_0210e8c0.authParam    = param;
    if (DWCi_Acc_IsAuthentic(data_0210e8c0.state->userData)) {
        DWCi_Acc_LoginIdToUserName(&data_0210e8c0.state->userData->loginId, data_0210e8c0.state->userData->gameCode,
                                   data_0210e8c0.state->userName);
    } else {
        if (!DWCi_Acc_IsValidLoginId(&data_0210e8c0.state->loginId)) {
            if (DWCi_Acc_CheckConsoleUserId(&data_0210e8c0.state->userData->tempLoginId)) {
                data_0210e8c0.state->loginId = data_0210e8c0.state->userData->tempLoginId;
            } else {
                DWCi_Acc_CreateTempLoginId(&data_0210e8c0.state->loginId);
            }
        } else {
            DWCi_Acc_SetPlayerId(&data_0210e8c0.state->loginId, (u32) ((OS_GetTick() * 0x5D588B656C078965 + 0x269EC3) >> 32));
        }
        DWCi_Acc_LoginIdToUserName(&data_0210e8c0.state->loginId, data_0210e8c0.state->gameCode,
                                   data_0210e8c0.state->userName);
    }
    MI_CpuCopy8(data_0210e8c0.state->playerName, params.ingamesn, DWCi_WStrLen(data_0210e8c0.state->playerName) * 2 + 2);
    strcpy(params.gsbrcd, data_0210e8c0.state->gsbrcd);
    params.alloc                  = (NasAllocFunc) DWC_Alloc;
    params.free                   = (NasFreeFunc) DWC_Free;
    auth                          = DWC_AllocEx(0, sizeof(NasHttp), 4);
    data_0210e8c0.state->auth     = auth;
    data_0210e8c0.state->authTick = OS_GetTick();
    func_02048a54(&params, auth);
}
