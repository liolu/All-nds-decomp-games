/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_MainHandleGPError from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/dwc_main.c (license: none),
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
typedef struct FriendWork {
    int state;
    GPConnection *connection;
    int pollCount;
    u64 pollTick;
    int count;
    DwcAccData *list;
    u8 updateCount;
    u8 changed;
    u8 updated;
    u8 pendingSteps;
    u32 unk_20;
    u32 unk_24;
    u16 *playerName;
    void (*updateCallback)(int error, BOOL changed, void *param);
    void *updateParam;
    void (*statusCallback)(int index, int status, const char *locationString, void *param);
    void *statusParam;
    void (*deleteCallback)(int index, int other, void *param);
    void *deleteParam;
    void (*buddyCallback)(int index, void *param);
    void *buddyParam;
    u32 unk_4C[4];
} FriendWork;
typedef struct MatchRequest {
    u8 flag;
    u8 retries;
    u16 port;
    u32 address;
    int active;
} MatchRequest;
typedef struct MatchWork {
    void *gpConnection;
    void **peer;
    void *callback;
    u8 flag;
    u8 players;
    u8 aidCount;
    u8 unk_0F;
    void *reporting;
    volatile u8 connections;
    u8 mode;
    u8 limit;
    u8 newPeerPending;
    u8 qr2ShutdownPending;
    u8 unk_19;
    u16 port;
    u32 addr;
    u32 newPeerProfile;
    u32 addresses[32];
    u16 ports[32];
    void *list;
    int searchWait;
    u64 searchWaitTick;
    int profiles[32];
    u64 pending;
    u8 retryCount;
    u8 matchRetryCount;
    u16 cookieRandom;
    int retryProfile;
    u64 retryTick;
    u64 waitTick;
    MatchRequest request;
    int state;
    u8 initial;
    u8 current;
    u8 unk_1A6;
    u8 nextServerRetries;
    u8 closeState;
    u8 cancelling;
    u8 reservationRetries;
    u8 readyRetries;
    u8 closeRetries;
    u8 serverPollCount;
    u8 stopPending;
    u8 unk_1AF;
    u16 maxSize;
    u16 closeDelay;
    u16 remotePort;
    u16 unk_1B6;
    u32 remoteAddr;
    int active;
    u64 activeTick;
    u32 delay;
    u64 time;
    u32 readyMask;
    u32 closeMask;
    u32 friendCheckMask;
    u64 readyTick;
    u64 closeTick;
    u64 restartWaitTick;
    u64 serverPollTick;
    u32 identity;
    int target;
    u32 nextServerProfile;
    int eventPeerProfile;
    u32 addr2[32];
    u16 port2[32];
    u8 aids[32];
    u32 aidMask;
    const char *gameName;
    const char *secretKey;
    struct DwcAccData *friends;
    u32 unk_300;
    u8 friendIds[64];
    int friendCount;
    u32 serverPeerCount;
    u32 serverPeerProfiles[32];
    u8 sentCommand;
    u8 commandRetries;
    u16 commandPort;
    u32 commandAddr;
    u8 commandData[0x80];
    u32 commandProfile;
    u32 commandSize;
    u64 commandTick;
    void (*errorCallback)(int kind, int unk_01, BOOL unk_02, BOOL isServer, int unk_04, void *param);
    void *errorParam;
    void (*newPeerCallback)(int friendIndex, void *param);
    void *newPeerParam;
    int (*evalCallback)(int index, void *param);
    void *evalParam;
    void (*stopCallback)(void *param);
    void *stopParam;
} MatchWork;
extern void func_02052cec(int kind, int code);
typedef struct TransportChannel {
    u8 *sendBuf;
    u8 *recvBuf;
    int size;
    int sent;
    int received;
    int total;
    int pending;
    u8 sending;
    u8 receiving;
    u16 unk_1E;
    u16 unk_20;
    u16 unk_22;
    u64 tick;
    u32 timeout;
} TransportChannel;
typedef struct Transport {
    TransportChannel channel[32];
    void (*sendCallback)(int size, int aid);
    void (*recvCallback)(int aid, const void *data, int size);
    void (*timeoutCallback)(int aid);
    void (*pingCallback)(int size, int aid);
    u16 maxSize;
    u16 unk_612;
} Transport;
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
typedef void (*DwcResultCallback)(int error, int value, void *param);
typedef void (*DwcMatchedCallback)(int error, BOOL cancelled, BOOL self, BOOL isServer, int index, void *param);
typedef void (*DwcClosedCallback)(int error, BOOL isLocal, BOOL isServer, u32 aid, int index, void *param);
typedef struct DwcControl {
    void *socket;
    void *socketCallbacks[4];
    u32 bufferSize[2];
    GPConnection connection;
    DwcUserData *userData;
    int state;
    int prevState;
    u8 aid;
    u8 closing;
    u16 playerName[26];
    u8 unk_62[2];
    int profileId;
    const char *gameName;
    const char *secretKey;
    DwcResultCallback loginCallback;
    void *loginParam;
    DwcResultCallback updateCallback;
    void *updateParam;
    DwcResultCallback matchCallback;
    void *matchParam;
    DwcMatchedCallback friendMatchCallback;
    void *friendMatchParam;
    DwcClosedCallback closedCallback;
    void *closedParam;
    LoginState login;
    FriendWork friends;
    MatchWork match;
    Transport transport;
} DwcControl;
extern DwcControl *data_0210e738;
extern int func_0204e6b0(int error);
extern void func_0204f1ac(int kind, int code);
extern void func_02050154(int kind, int code);
enum {
    GP_NO_ERROR,
    GP_MEMORY_ERROR,
    GP_PARAMETER_ERROR,
    GP_NETWORK_ERROR,
    GP_SERVER_ERROR,
};
int func_0204e6b0(int error) {
    int code, kind;
    if (!error) {
        return GP_NO_ERROR;
    }
    switch (error) {
        case GP_MEMORY_ERROR:
            kind = 9;
            code = -1;
            break;
        case GP_PARAMETER_ERROR:
            kind = 9;
            code = -2;
            break;
        case GP_NETWORK_ERROR:
            kind = 6;
            code = -10;
            break;
        case GP_SERVER_ERROR:
            kind = 6;
            code = -20;
            break;
    }
    switch (data_0210e738->state) {
        case 1:
            code += -61000;
            func_0204f1ac(kind, code);
            break;
        case 2:
            code += -61000;
            if (data_0210e738->login.state < 1) {
                func_0204f1ac(kind, code);
            }
            break;
        case 5:
            code += -81000;
            func_02052cec(kind, code);
            break;
        case 4:
            code += -71000;
            break;
        default:
            code += -91000;
            break;
    }
    func_02050154(kind, code);
    return error;
}
