/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PMi_CallCallbackAndUnlock from https://github.com/RonyxDumb/mkds src/arm9/0214f630_func_0214f630.c (license: none), reused
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
extern PMiWork data_02186658;
void func_0206fa18(u32 result) {
    PMCallback callback;
    void *arg;

    callback = data_02186658.callback;
    arg      = data_02186658.callbackArg;

    if (data_02186658.lock) {
        data_02186658.lock = 0;
    }

    if (callback) {
        data_02186658.callback = 0;
        (callback)(result, arg);
    }
}
