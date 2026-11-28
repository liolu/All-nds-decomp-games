/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020785b4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_02024688(void);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc;
    char unk_40[0x20];
} OSContext;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef void (*OSThreadSwitchCallback)(OSThread *oldThread, OSThread *newThread);
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef struct OSThreadInfo {
    u16 isSchedulerWaiting;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    OSThreadSwitchCallback callback;
} OSThreadInfo;
typedef struct OSThread {
    OSContext context;
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLinkedList list;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackOffset;
    OSThreadQueue joinQueue;
    void *unk_A4[3];
    void *unk_B0;
    OSThreadDestructor destructor;
    void *userParam;
    s32 error;
} OSThread;
extern OSThreadInfo data_020ec380;
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void func_02022588(void);
extern OSThread *func_02022060(void);
extern s32 func_020228d8(OSContext *context);
extern void func_02022924(OSContext *context);
extern u32 data_020ec36c;
extern OSThread **data_020ec378;
extern OSThreadSwitchCallback data_020ec374;
extern OSThreadInfo data_020ec380;
void func_02022588(void) {
    if (data_020ec36c <= 0) {
        OSThreadInfo *info = &data_020ec380;
        OSThread *current;
        OSThread *next;

        if (data_020ec380.irqDepth > 0 || func_02024688() == 0x12) {
            info->isSchedulerWaiting = 1;
            return;
        }

        current = *data_020ec378;
        next    = func_02022060();

        if (current == next || next == 0) {
            return;
        }

        if (current->state != 2 && func_020228d8(&current->context)) {
            return;
        }

        if (data_020ec374 != 0) {
            data_020ec374(current, next);
        }

        if (info->callback != 0) {
            info->callback(current, next);
        }

        data_020ec380.current = next;
        func_02022924(&next->context);
    }
}
OSThread *func_02022060(void);
