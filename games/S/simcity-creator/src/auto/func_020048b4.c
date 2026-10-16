/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020048b4 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020048b4.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_020050bc(OSContext *context);
extern void func_02005108(OSContext *context);
extern int func_02006744(void);
extern void *func_02004eb0(void);
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
extern struct ThreadInfo2 data_020d0c64;
extern struct Globals data_020d0c40;
void func_020048b4(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_020d0c40.rescheduleCount != 0) {
        return;
    }

    info = &data_020d0c64;
    if (data_020d0c40.irqDepth != 0 || func_02006744() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_020d0c40.currentThreadPtr;
    cur    = *curPtr;
    next   = func_02004eb0();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_020050bc((OSContext *) cur)) {
            return;
        }
    }

    cb = data_020d0c40.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_020d0c40.currentThread = next;
    func_02005108((OSContext *) next);
}
