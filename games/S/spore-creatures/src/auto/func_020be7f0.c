typedef unsigned int u32;
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

extern UnkCardCommon data_020f3ae0;
extern u32 func_020b6bd0(void);
extern void func_020b6be4(u32 irq_flag);
extern void func_020b51e0(OSThreadQueue *queue);
extern void func_020b5230(OSThreadQueue *queue);
extern void func_020b5298(void *param1);
extern u32 func_020be794(void);
extern void func_020bedc4(u32 id);

#pragma opt_rotateloops off
u32 func_020be7f0(void) {
    UnkCardCommon *const p = &data_020f3ae0;
    u32 romid;
    UnkCardCallback cb;
    void *arg;
    u32 prevIRQ = func_020b6bd0();
    u32 prevIRQ2;
    while (p->unk_114 & 4) {
        func_020b51e0(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = 0;
    p->unk_03c = 0;
    func_020b6be4(prevIRQ);

    romid = func_020be794();
    {
        UnkCardCommon *const q = &data_020f3ae0;
        func_020bedc4(func_020be794());
        q->unk_000->unk_00 = 0;
        cb                 = q->unk_038;
        arg                = q->unk_03c;
        prevIRQ2           = func_020b6bd0();
        q->unk_114 &= ~0x4c;
        func_020b5230(&q->unk_10c);
        if (q->unk_114 & 0x10) {
            func_020b5298(&q->unk_044);
        }
        func_020b6be4(prevIRQ2);
        if (cb) {
            cb(arg);
        }
    }
    return romid;
}
