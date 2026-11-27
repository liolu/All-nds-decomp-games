/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* fread from https://github.com/Project-Holon/aletheia src/game/arm9/msl_stdio.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
typedef signed int s32;
typedef int BOOL;
struct MslRefBlock {
    u32 reserved00;
    u32 *refs;
};
typedef unsigned short wchar_t;
typedef struct {
    u32 open_mode : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 file_kind : 3;
    u32 file_orientation : 2;
    u32 binary_io : 1;
} file_modes;
typedef struct {
    u32 io_state : 3;
    u32 free_buffer : 1;
} file_state;
typedef struct FILE {
    u32 handle;
    file_modes mode;
    file_state state;
    u8 eof;
    u8 error;
    u8 char_buffer;
    u8 char_buffer_overflow;
    u8 pad10[2];
    u8 ungetc_buffer[2];
    wchar_t ungetwc_buffer[2];
    u32 position;
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
    u32 buffer_alignment;
    u32 saved_buffer_len;
} FILE;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef u64 OSTick;
typedef struct CPContext {
    u8 opaque[0x1C];
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
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
typedef enum OSThreadState {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
} OSThreadLink;
typedef struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLink;
typedef void (*OSAlarmHandler)(void *arg);
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
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
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
    void (*destructor)(void *);
    void *userParameter;
    int systemErrno;
};
extern void func_020d2618(OSMutex *mutex);
extern void func_020d269c(OSMutex *mutex);
extern BOOL func_020d2734(OSMutex *mutex);
extern int func_020e4c24(void *ptr, u32 memb_size, u32 num_memb, FILE *stream);
extern size_t func_020e4d30(void *ptr, size_t memb_size, size_t num_memb, FILE *file);
extern struct MslRefBlock data_021e16c0;
extern u8 data_021e5508[];
extern u8 data_02110fec[];
extern u32 data_021e54c0[];
extern u32 data_021e54e4[];
int func_020e4c24(void *ptr, u32 memb_size, u32 num_memb, FILE *stream) {
    u32 idx = (stream == (FILE *) data_02110fec) ? 2 : 5;
    u8 *blk = data_021e5508 + idx * 0x18;
    int r;

    if (func_020d2734((struct OSMutex *) blk) == 0) {
        data_021e54c0[idx] = data_021e16c0.refs[0x1b];
        data_021e54e4[idx] = 1;
    } else {
        u32 cur = data_021e54c0[idx];
        u32 ref = data_021e16c0.refs[0x1b];

        if (cur == ref) {
            data_021e54e4[idx]++;
        } else {
            func_020d2618((struct OSMutex *) blk);
            data_021e54c0[idx] = data_021e16c0.refs[0x1b];
            data_021e54e4[idx] = 1;
        }
    }
    r = func_020e4d30(ptr, memb_size, num_memb, stream);
    data_021e54e4[idx]--;
    if (data_021e54e4[idx] == 0) {
        func_020d269c((struct OSMutex *) blk);
    }
    return r;
}
size_t func_020e4d30(void *ptr, size_t memb_size, size_t num_memb, FILE *file);
