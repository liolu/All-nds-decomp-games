/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_RescheduleThread from projets/blue-dragon-awakened-shadow/src/auto/OSi_RescheduleThread.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_020846c4(OSContext *context);
extern void func_02084710(OSContext *context);
extern int func_02085194(void);
extern void *func_020844ac(void);
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
extern struct ThreadInfo2 data_020d8624;
extern struct Globals data_020d8600;
void func_02083fb0(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_020d8600.rescheduleCount != 0) {
        return;
    }

    info = &data_020d8624;
    if (data_020d8600.irqDepth != 0 || func_02085194() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_020d8600.currentThreadPtr;
    cur    = *curPtr;
    next   = func_020844ac();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_020846c4((OSContext *) cur)) {
            return;
        }
    }

    cb = data_020d8600.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_020d8600.currentThread = next;
    func_02084710((OSContext *) next);
}
