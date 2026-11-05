/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207f1c8 from projets/nintendogs-shiba-friends/src/donor/func_0207f1c8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 func_0201e3b0(void);
extern u32 func_0201e3c4(u32 irq_flag);
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
extern void func_0201ca9c(OSThreadQueue *queue);
extern u8 data_027e0000[];
extern OSThreadQueue data_027e0060;
void func_0201bff4(BOOL clear, u32 irqFlags) {
    u32 irq = func_0201e3b0();
    if (clear) {
        (*(vu32 *) ((u32) data_027e0000 + 0x3FF8)) &= ~irqFlags;
    }
    func_0201e3c4(irq);

    if (irqFlags & (*(vu32 *) ((u32) data_027e0000 + 0x3FF8))) {
        return;
    }

    do {
        func_0201ca9c(&data_027e0060);
    } while (!(irqFlags & (*(vu32 *) ((u32) data_027e0000 + 0x3FF8))));
}
