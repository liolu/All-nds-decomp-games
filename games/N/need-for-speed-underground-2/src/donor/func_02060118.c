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
extern PMiWork data_0217cd18;
void func_02060118(u32 result) {
    PMCallback callback;
    void *arg;

    callback = data_0217cd18.callback;
    arg      = data_0217cd18.callbackArg;

    if (data_0217cd18.lock) {
        data_0217cd18.lock = 0;
    }

    if (callback) {
        data_0217cd18.callback = 0;
        (callback)(result, arg);
    }
}
