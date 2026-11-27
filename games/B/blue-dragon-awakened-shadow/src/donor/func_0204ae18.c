/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Http_ParseResponse from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/auth_http.c (license: none),
 * reused by tools/donor_match.py */
extern unsigned strlen(const char *str);
extern char *strstr(const char *haystack, const char *needle);
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
typedef struct NasHttpEntryList {
    NasHttpEntry *entry;
    int max;
    int count;
} NasHttpEntryList;
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
extern int func_0204acc4(NasHttp *http, NasHttpEntryList *list, char *label, char *value);
extern int func_0204ae18(NasHttp *http, int headerOnly);
extern char data_020f9504[];
extern char data_020f9534[];
extern char data_020f96c4[];
extern char data_020f96c8[];
extern char data_020f96d4[];
extern char data_020f96d8[];
extern char data_020f96dc[];
extern char data_020f96e0[];
extern int strncmp(const char *a, const char *b, u32 n);
int func_0204acc4(NasHttp *http, NasHttpEntryList *list, char *label, char *value);
int func_0204ae18(NasHttp *http, int headerOnly) {
    char *vp1;
    char *vp7;
    char vc0;
    char vc1;
    NasHttpEntryList list;
    char vc2;
    int vi0;
    char *vp3;
    char *vp4;
    char *vp5;
    char *vp0;
    char *vp2;
    char *vp6;
    list.entry = http->entry;
    list.max   = 0x20;
    list.count = 0;
    MI_CpuFill8(http->entry, 0, 0x100);
    vp3 = http->response.buffer;
    vp7 = strstr(vp3, data_020f9504);
    if (vp7 == ((void *) 0)) {
        return 0;
    }
    vp6 = vp7 + 4 + strlen(vp7 + 4);
    vp5 = strstr(vp3, data_020f96c4);
    if (vp5 == ((void *) 0)) {
        return 0;
    }
    vc1    = vp5[4];
    vp5[4] = 0;
    vi0    = func_0204acc4(http, &list, data_020f96c8, vp5 + 1);
    if (vi0 != 1) {
        vp5[4] = vc1;
        return 0;
    }
    vp5[4] = vc1;
    if (headerOnly == 1 || strncmp(vp5 + 1, data_020f96d4, 3) != 0) {
        return 1;
    }
    vp2 = strstr(vp5 + 5, data_020f9534);
    if (vp2 == ((void *) 0)) {
        return 0;
    }
    vp2 += 2;
    while (vp2[0] != '\r' && vp2[1] != '\n') {
        vp4 = strstr(vp2, data_020f96d8);
        if (vp4 == ((void *) 0)) {
            break;
        }
        vc0  = *vp4;
        *vp4 = 0;
        vp5  = vp4 + 2;
        vp1  = strstr(vp5, data_020f9534);
        if (vp1 == ((void *) 0)) {
            *vp4 = vc0;
            break;
        }
        vc2  = *vp1;
        *vp1 = 0;
        if (func_0204acc4(http, &list, vp2, vp5) != 1) {
            *vp4 = vc0;
            *vp1 = vc2;
            return 0;
        }
        vp2  = vp5 + strlen(vp5);
        *vp4 = vc0;
        *vp1 = vc2;
        vp2 += 2;
    }
    vp2 = vp7 + 4;
    if (vp2 < vp6) {
        do {
            vp0 = strstr(vp2, data_020f96dc);
            if (vp0 == ((void *) 0)) {
                break;
            }
            vc0  = *vp0;
            *vp0 = 0;
            vp3  = vp0 + 1;
            vp1  = strstr(vp3, data_020f96e0);
            if (vp1 == ((void *) 0)) {
                vp1 = strstr(vp3, data_020f9534);
            }
            if (vp1 != ((void *) 0)) {
                vc2  = *vp1;
                *vp1 = 0;
            }
            if (func_0204acc4(http, &list, vp2, vp3) != 1) {
                *vp0 = vc0;
                if (vp1 != ((void *) 0)) {
                    *vp1 = vc2;
                }
                return 0;
            }
            vp2  = vp3 + strlen(vp3);
            *vp0 = vc0;
            vp2++;
            if (vp1 != ((void *) 0)) {
                *vp1 = vc2;
            }
        } while (vp2 < vp6);
    }
    return 1;
}
