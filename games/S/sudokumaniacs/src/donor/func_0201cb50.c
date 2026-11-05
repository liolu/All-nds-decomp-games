/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020091f8 from projets/code-lyoko/src/auto/func_020091f8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_0201e3b0(void);
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
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
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
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void func_0201cb50(void *arg);
extern void func_0201caf0(void);
extern OSThread **data_0203dd60;
void func_0201cb50(void *arg) {
    OSThread *current             = *data_0203dd60;
    OSThreadDestructor destructor = current->destructor;

    if (destructor != 0) {
        current->destructor = 0;
        destructor(arg);
        func_0201e3b0();
    }

    func_0201caf0();
}
extern void func_0201caf0(void);
