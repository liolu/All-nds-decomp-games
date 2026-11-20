/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004bdc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02004bdc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_02005560(OSContext *context);
extern void func_020055ac(OSContext *context);
extern int func_02006c44(void);
extern void *func_020051c0(void);
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
extern struct ThreadInfo2 data_02147904;
extern struct Globals data_021478e0;
void func_02004bdc(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_021478e0.rescheduleCount != 0) {
        return;
    }

    info = &data_02147904;
    if (data_021478e0.irqDepth != 0 || func_02006c44() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_021478e0.currentThreadPtr;
    cur    = *curPtr;
    next   = func_020051c0();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_02005560((OSContext *) cur)) {
            return;
        }
    }

    cb = data_021478e0.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_021478e0.currentThread = next;
    func_020055ac((OSContext *) next);
}
