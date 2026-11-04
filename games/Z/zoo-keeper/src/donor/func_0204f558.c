/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e3f8 from projets/children-of-mana/src/auto/func_0205e3f8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
extern PMiWork data_0206d998;
void func_0204f558(u32 result) {
    PMCallback callback;
    void *arg;

    callback = data_0206d998.callback;
    arg      = data_0206d998.callbackArg;

    if (data_0206d998.lock) {
        data_0206d998.lock = 0;
    }

    if (callback) {
        data_0206d998.callback = 0;
        (callback)(result, arg);
    }
}
