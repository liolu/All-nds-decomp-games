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
extern PMiWork data_0203fd84;
void func_02022da8(u32 result) {
    PMCallback callback;
    void *arg;

    callback = data_0203fd84.callback;
    arg      = data_0203fd84.callbackArg;

    if (data_0203fd84.lock) {
        data_0203fd84.lock = 0;
    }

    if (callback) {
        data_0203fd84.callback = 0;
        (callback)(result, arg);
    }
}
