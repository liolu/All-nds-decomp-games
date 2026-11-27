/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d18b0 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020d18b0.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_020d22d8(OSContext *context);
extern void func_020d2324(OSContext *context);
extern int func_020d3a9c(void);
extern void *func_020d1f5c(void);
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
extern struct ThreadInfo2 data_021e16c0;
extern struct Globals data_021e169c;
void func_020d18b0(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_021e169c.rescheduleCount != 0) {
        return;
    }

    info = &data_021e16c0;
    if (data_021e169c.irqDepth != 0 || func_020d3a9c() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_021e169c.currentThreadPtr;
    cur    = *curPtr;
    next   = func_020d1f5c();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_020d22d8((OSContext *) cur)) {
            return;
        }
    }

    cb = data_021e169c.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_021e169c.currentThread = next;
    func_020d2324((OSContext *) next);
}
