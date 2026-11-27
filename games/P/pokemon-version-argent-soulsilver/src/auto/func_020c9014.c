/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c9014 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/snd_capture.c (license:
 * none), reused by tools/donor_match.py */
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
typedef void *OSMessage;
typedef struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
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
typedef struct SndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} SndFader;
extern void func_020caee4(SndFader *fader, s32 target, s32 frames);
typedef struct SndCaptureState {
    BOOL isActive;
    int type;
    u32 unk_08;
    void *bufferL;
    void *bufferR;
    u32 bufSize;
    u32 unk_18;
    u32 pos;
    u32 lockedChBitFlag;
    u32 chBitFlag;
    u32 capBitFlag;
    int alarmNo;
    u8 unk_30[0xC];
    SndFader fader;
    BOOL isStopping;
    int volume;
    u8 unk_54[0x5B4 - 0x54];
} SndCaptureState;
typedef struct SndCaptureWork {
    u32 unk_00;
    u32 unk_04;
    OSMessageQueue msgQueue;
    OSMessage msgs[8];
    SndCaptureState state;
} SndCaptureWork;
extern SndCaptureWork data_021e0334;
extern SndCaptureState data_021e037c;
extern void func_020c912c(void);
extern void func_020c9014(int frames);
#pragma force_active on
void func_020c9014(int frames) {
    SndCaptureState *state = &data_021e037c;
    if (!data_021e0334.state.isActive) {
        return;
    }
    if (state->type != 0) {
        return;
    }
    if (frames == 0) {
        func_020c912c();
    } else {
        func_020caee4(&state->fader, 0, frames);
        state->isStopping = 1;
    }
}
void func_020c912c(void);
