/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205dc74 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/card/card_backup.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef s32 BOOL;
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
extern OSThreadInfo data_020d0c64;
extern void func_02004dd0(OSThreadQueue *queue);
extern void func_02004e20(OSThreadQueue *queue);
extern void func_02004e88(void *param1);
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &data_020d0c64;
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
extern u32 func_020066e0(void);
extern u32 func_020066f4(u32 irq_flag);
typedef struct UnkCardCmd {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u32 unk_40;
    u32 unk_44;
    u8 unk_48;
    u8 unk_49[3];
    u32 unk_4c;
    u8 unk_50[0x10];
} UnkCardCmd;
typedef void (*UnkCardTask)(struct UnkCardCommon *common);
typedef void (*UnkCardCallback)(void *arg);
typedef struct UnkCardCommon {
    UnkCardCmd *unk_000;
    u32 unk_004;
    vs32 unk_008;
    vs32 unk_00c;
    OSThreadQueue unk_010;
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
    u32 unk_02c;
    u32 unk_030;
    u32 unk_034;
    UnkCardCallback unk_038;
    void *unk_03c;
    UnkCardTask unk_040;
    OSThread unk_044;
    OSThread *unk_104;
    u32 unk_108;
    OSThreadQueue unk_10c;
    vu32 unk_114;
    u32 unk_118[2];
    u8 unk_120[0x100];
} UnkCardCommon;
extern UnkCardCommon data_020d2de0;
extern void func_02006964(void);
extern void func_02000b60(const char *marker);
static inline void CARDi_WaitAndLock(UnkCardCommon *p, UnkCardCallback callback, void *arg) {
    u32 prevIRQState = func_020066e0();
    while (p->unk_114 & 4) {
        func_02004dd0(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = callback;
    p->unk_03c = arg;
    func_020066f4(prevIRQState);
}
static inline void CARDi_EndTask(UnkCardCommon *p) {
    const UnkCardCallback callback = p->unk_038;
    void *const arg                = p->unk_03c;
    {
        u32 prevIRQState = func_020066e0();
        p->unk_114 &= ~0x4C;
        func_02004e20(&p->unk_10c);
        if (p->unk_114 & 0x10) {
            func_02004e88(&p->unk_044);
        }
        func_020066f4(prevIRQState);
    }
    if (callback != 0) {
        callback(arg);
    }
}
extern void func_0200d5f8(void);
extern void func_0200d70c(u32 type);
extern BOOL func_0200dd40(u32 type);
extern BOOL func_0200e608(UnkCardCommon *common, u32 req, s32 retry);
void func_0200d70c(u32 type);
BOOL func_0200dd40(u32 type) {
    UnkCardCommon *const p = &data_020d2de0;

    func_02000b60(((const char *) 0x02000B88));
    if (type == 0) {
        func_02006964();
    }
    func_0200d5f8();
    CARDi_WaitAndLock(p, 0, 0);
    func_0200d70c(type);
    data_020d2de0.unk_104 = OS_GetCurrentThread();
    func_0200e608(p, 2, 1);
    p->unk_000->unk_0c = 0;
    p->unk_000->unk_10 = (u32) p->unk_120;
    p->unk_000->unk_14 = 1;
    func_0200e608(p, 6, 1);
    CARDi_EndTask(p);
    return p->unk_000->unk_00 == 0;
}
