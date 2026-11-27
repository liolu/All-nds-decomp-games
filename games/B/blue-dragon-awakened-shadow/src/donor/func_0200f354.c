/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PmUnlockAndCallCallback from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct PMCallbackInfo PMCallbackInfo;
struct PMCallbackInfo {
    void (*func)(void *arg);
    void *arg;
    PMCallbackInfo *next;
};
typedef struct {
    u16 init;
    u32 vcount4;
    u32 vcount8;
    u32 flag;
    u32 field10;
    PMCallbackInfo *postList;
    PMCallbackInfo *preList;
    u32 lock;
    void (*cb)(u32 result, void *arg);
    void *cbArg;
    u16 *resultPtr;
} PMWork;
extern PMWork data_021039ec;
void func_0200f354(u32 result) {
    void (*cb)(u32, void *) = data_021039ec.cb;
    void *arg               = data_021039ec.cbArg;
    data_021039ec.lock      = 0;
    if (cb == ((void *) 0)) {
        return;
    }
    data_021039ec.cb = ((void *) 0);
    cb(result, arg);
}
