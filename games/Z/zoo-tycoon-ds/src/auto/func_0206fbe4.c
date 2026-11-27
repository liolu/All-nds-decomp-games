/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CARDi_InitCommon from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/card/cardi_init_common.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutex *prev;
    OSMutex *next;
};
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pcPlus4;
    u32 spSvc;
    u8 cpContext[0x1c];
} OSContext;
struct OSThread {
    OSContext context;
    u32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
};
extern void func_0206a468(const void *start, u32 size);
typedef struct CARDiBackupSpec {
    u32 totalSize;
    u32 sectorSize;
    u32 pageSize;
    u32 addrWidth;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1C;
    u32 unk_20;
    u32 unk_24;
} CARDiBackupSpec;
typedef struct CARDiCommandArg {
    int result;
    u32 type;
    u32 unk_08;
    u32 src;
    u32 dst;
    u32 len;
    CARDiBackupSpec spec;
} CARDiCommandArg;
typedef void (*CARDCallback)(void *arg);
typedef struct CARDiCommon CARDiCommon;
typedef void (*GameCardTaskStep)(CARDiCommon *common);
struct CARDiCommon {
    CARDiCommandArg *cmd;
    u32 unk_04;
    volatile int lockOwner;
    volatile int lockCount;
    OSThreadQueue lockQueue;
    u32 lockTarget;
    u32 src;
    u32 dst;
    u32 len;
    u32 unk_24;
    CARDCallback callback;
    void *callbackArg;
    GameCardTaskStep task;
    u32 flag;
    u32 priorityMode;
    OSThread thread;
    OSThread *waiter;
    OSThreadQueue queue;
    u8 unk_D8[8];
    u8 pageBuffer[0x100];
    u8 stack[0x400];
};
extern CARDiCommon data_02186840;
extern u32 data_02186e20;
extern __attribute__((aligned(32))) CARDiCommandArg data_021866a0;
extern u8 data_021866e0[0x160];
extern CARDiCommon data_02186840;
extern void func_0206b2a4(u32 value, void *dst, u32 size);
extern void func_0206b3bc(const void *src, void *dst, u32 size);
extern void func_02069b00(OSThread *thread, void (*proc)(void *), void *arg, void *stack, u32 stackSize, u32 priority);
extern void func_02069998(OSThread *thread);
extern void func_0206c814(int tag, void (*callback)(int tag, u32 data, int err));
extern void func_0206fb98(u32 state);
extern void func_0206febc(void *arg);
extern void func_0206ff10(int tag, u32 data, int err);
void func_0206fbe4(void) {
    CARDiCommon *common = &data_02186840;
    vu32 zero;
    u32 value;

    data_02186840.lockOwner  = (-3);
    data_02186840.lockCount  = 0;
    zero                     = 0;
    value                    = zero;
    data_02186840.lockTarget = 0;
    data_02186840.cmd        = &data_021866a0;
    func_0206b2a4(value, &data_021866a0, sizeof(CARDiCommandArg));
    func_0206a468(&data_021866a0, sizeof(CARDiCommandArg));

    func_0206b3bc(*((volatile u16 *) 0x027ffc40) == 2 ? (void *) 0x023fe940 : (void *) 0x027ffe00, data_021866e0, 0x160);
    common->lockQueue.head = 0;
    common->queue.head     = 0;
    common->priorityMode   = 4;

    func_02069b00(&common->thread, func_0206febc, ((void *) 0), &data_02186e20, 0x400, common->priorityMode);
    func_02069998(&common->thread);
    func_0206c814(11, func_0206ff10);
    if (*((volatile u16 *) 0x027ffc40) != 2) {
        func_0206fb98(1);
    }
}
