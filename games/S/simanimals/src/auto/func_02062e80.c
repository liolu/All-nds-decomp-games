/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02062e80 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02062e80.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_0206365c(OSContext *context);
extern void func_020636a8(OSContext *context);
extern int func_02064aa0(void);
extern void *func_0206337c(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 data_0208e5ec;
extern struct Globals data_0208e5c8;
void func_02062e80(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_0208e5c8.rescheduleCount != 0) {
        return;
    }

    info = &data_0208e5ec;
    if (data_0208e5c8.irqDepth != 0 || func_02064aa0() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_0208e5c8.currentThreadPtr;
    cur    = *curPtr;
    next   = func_0206337c();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_0206365c((OSContext *) cur)) {
            return;
        }
    }

    cb = data_0208e5c8.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_0208e5c8.currentThread = next;
    func_020636a8((OSContext *) next);
}
