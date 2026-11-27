#include "m2c.h"

typedef volatile u32 vu32;
typedef volatile s32 vs32;

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
typedef struct OSThreadInfo {
    u16 isSchedulerWaiting;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
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
struct UnkCardCommon;
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
    void *unk_020;
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
typedef struct UnkCardRom {
    void (*unk_000)(struct UnkCardRom *rom);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u32 unk_020[0x80];
} UnkCardRom;

extern UnkCardCommon data_020f3ae0;
extern UnkCardRom data_020f4120;
extern u32 data_020f4100;
extern OSThreadInfo data_020f1974;

extern void func_020bdaf8(void);
extern u32 func_020b6bd0(void);
extern u32 func_020b6be4(u32 irq_flag);
extern void func_020b51e0(OSThreadQueue *queue);
extern void func_020b72f0(u32 dmaNo);
extern s32 func_020be518(UnkCardRom *rom);
extern void func_020beaa8(void);
extern void func_020bd88c(UnkCardTask task);
extern void func_020be8b4(UnkCardCommon *common);

#pragma opt_rotateloops off
void func_020be94c(u32 dma, u32 src, void *dst, u32 len, UnkCardCallback callback, void *arg, s32 async) {
    UnkCardRom *const rom  = &data_020f4120;
    UnkCardCommon *const p = &data_020f3ae0;
    u32 irq_flag;

    func_020bdaf8();
    irq_flag = func_020b6bd0();
    while (p->unk_114 & 4) {
        func_020b51e0(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = callback;
    p->unk_03c = arg;
    func_020b6be4(irq_flag);

    p->unk_028 = dma;
    p->unk_01c = src + data_020f4100;
    p->unk_020 = dst;
    p->unk_024 = len;

    if (dma <= 3) {
        func_020b72f0(dma);
    }
    if (func_020be518(rom) != 0) {
        if (async != 0) {
            return;
        }
        func_020beaa8();
        return;
    }
    if (async != 0) {
        func_020bd88c(func_020be8b4);
        return;
    }
    p->unk_104 = data_020f1974.current;
    func_020be8b4(p);
}
