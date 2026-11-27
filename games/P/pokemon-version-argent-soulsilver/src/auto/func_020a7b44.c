/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a7b44 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_dhcp.c (license: none), reused
 * by tools/donor_match.py */
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
extern OSTick func_020d34b0(void);
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
extern u8 data_021d4b28[6];
extern void func_020a3978(void);
extern int func_020a3f38(const u16 *a, const u16 *b);
extern void *func_020a6d58(u32 *length);
extern void func_020a6e4c(u32 length);
extern int func_020a72f8(void);
extern int func_020a7b44(u32 xid, int attempt);
int func_020a7b44(u32 xid, int attempt) {
    u32 length;
    int timeout = (attempt + 1) * 15;
    u32 start   = func_020d34b0() >> 16;
    {
        int result = 0;
        while (data_021d4640.linkIsOn() && !result && (int) ((u32) (func_020d34b0() >> 16) - start) < timeout) {
            u8 *p, *end, *option;
            u32 address;
            if (!func_020a72f8()) {
                func_020a3978();
                continue;
            }
            p = func_020a6d58(&length);
            if (length <= 240 || p[0] != 2) {
                goto consume;
            }
            if ((((u32) ((u16) (((*(u16 *) (p + 4)) >> 8) | ((*(u16 *) (p + 4)) << 8))) << 16) |
                 ((u16) (((*(u16 *) (p + 6)) >> 8) | ((*(u16 *) (p + 6)) << 8)))) != xid) {
                goto consume;
            }
            if (func_020a3f38((u16 *) (p + 28), (u16 *) data_021d4b28)) {
                goto consume;
            }
            address = (((u32) (u16) (((p + 16)[0] << 8) | (p + 16)[1]) << 16) | (u16) (((p + 16)[2] << 8) | (p + 16)[3]));
            result  = 3;
            end     = p + length;
            if (p[236] != 99 || p[237] != 130 || p[238] != 83 || (option = p + 240, p[239] != 99)) {
                goto consume;
            }
            {
                int code;
                int ack = 2, offer = 1;
                goto next_option;
            option_body:
                if (code == 0) {
                    goto next_option;
                }
                switch (code) {
                    case 1:
                        data_021d4640.netmask = (((u32) (u16) (((option + 1)[0] << 8) | (option + 1)[1]) << 16) |
                                                 (u16) (((option + 1)[2] << 8) | (option + 1)[3]));
                        break;
                    case 3:
                        data_021d4640.gateway = (((u32) (u16) (((option + 1)[0] << 8) | (option + 1)[1]) << 16) |
                                                 (u16) (((option + 1)[2] << 8) | (option + 1)[3]));
                        break;
                    case 6:
                        if (option[0] < 8) {
                            data_021d4640.dns[1] = 0;
                        } else {
                            data_021d4640.dns[1] = (((u32) (u16) (((option + 5)[0] << 8) | (option + 5)[1]) << 16) |
                                                    (u16) (((option + 5)[2] << 8) | (option + 5)[3]));
                        }
                        data_021d4640.dns[0] = (((u32) (u16) (((option + 1)[0] << 8) | (option + 1)[1]) << 16) |
                                                (u16) (((option + 1)[2] << 8) | (option + 1)[3]));
                        break;
                    case 51:
                        data_021d4640.leaseTime = (((u32) (u16) (((option + 1)[0] << 8) | (option + 1)[1]) << 16) |
                                                   (u16) (((option + 1)[2] << 8) | (option + 1)[3]));
                        break;
                    case 53:
                        switch (option[1]) {
                            case 2:
                                result                    = offer;
                                data_021d4640.requestedIp = address;
                                break;
                            case 5:
                                result               = ack;
                                data_021d4640.hostIp = address;
                                break;
                        }
                        break;
                    case 54:
                        data_021d4640.dhcpServer = (((u32) (u16) (((option + 1)[0] << 8) | (option + 1)[1]) << 16) |
                                                    (u16) (((option + 1)[2] << 8) | (option + 1)[3]));
                        break;
                }
                option += option[0] + 1;
            next_option:
                if (option < end) {
                    code = *option++;
                    if (code != 255) {
                        goto option_body;
                    }
                }
            }
        consume:
            func_020a6e4c(length);
        }
        return result;
    }
}
