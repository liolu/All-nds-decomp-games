/* compiler: 2.0/sp1p5 -O3,p */
/* func_020d0e6c from projets/nintendogs-shiba-friends/src/donor/func_020d0e6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 func_020d3a38(void);
extern u32 func_020d3a4c(u32 irq_flag);
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
extern void func_020d1e7c(OSThreadQueue *queue);
extern u8 data_027e0000[];
extern OSThreadQueue data_027e0060;
void func_020d0e6c(BOOL clear, u32 irqFlags) {
    u32 irq = func_020d3a38();
    if (clear) {
        (*(vu32 *) ((u32) data_027e0000 + 0x3FF8)) &= ~irqFlags;
    }
    func_020d3a4c(irq);

    if (irqFlags & (*(vu32 *) ((u32) data_027e0000 + 0x3FF8))) {
        return;
    }

    do {
        func_020d1e7c(&data_027e0060);
    } while (!(irqFlags & (*(vu32 *) ((u32) data_027e0000 + 0x3FF8))));
}
