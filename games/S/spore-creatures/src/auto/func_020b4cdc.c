/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b4cdc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020b4cdc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_020b563c(OSContext *context);
extern void func_020b5688(OSContext *context);
extern int func_020b6c34(void);
extern void *func_020b52c0(void);
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
extern struct ThreadInfo2 data_020f1974;
extern struct Globals data_020f1950;
void func_020b4cdc(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_020f1950.rescheduleCount != 0) {
        return;
    }

    info = &data_020f1974;
    if (data_020f1950.irqDepth != 0 || func_020b6c34() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_020f1950.currentThreadPtr;
    cur    = *curPtr;
    next   = func_020b52c0();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_020b563c((OSContext *) cur)) {
            return;
        }
    }

    cb = data_020f1950.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_020f1950.currentThread = next;
    func_020b5688((OSContext *) next);
}
