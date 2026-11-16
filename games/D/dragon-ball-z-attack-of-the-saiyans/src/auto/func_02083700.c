/* compiler: 2.0/sp1p5 -O3,p */
/* func_02083700 from projets/nintendogs-shiba-friends/src/donor/func_02083700.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 _Z20DisableIRQInterruptsv(void);
extern u32 _Z20SetIRQInterruptStatei(u32 irq_flag);
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
extern void func_020843cc(OSThreadQueue *queue);
extern u8 data_027e0000[];
extern OSThreadQueue data_027e01a8;
void func_02083700(BOOL clear, u32 irqFlags) {
    u32 irq = _Z20DisableIRQInterruptsv();
    if (clear) {
        (*(vu32 *) ((u32) data_027e0000 + 0x3FF8)) &= ~irqFlags;
    }
    _Z20SetIRQInterruptStatei(irq);

    if (irqFlags & (*(vu32 *) ((u32) data_027e0000 + 0x3FF8))) {
        return;
    }

    do {
        func_020843cc(&data_027e01a8);
    } while (!(irqFlags & (*(vu32 *) ((u32) data_027e0000 + 0x3FF8))));
}
