/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* WIH_StateInEndChildMP from https://github.com/Project-Holon/aletheia src/game/ov014/wih.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef void (*WMCallbackFunc)(void *arg);
typedef enum WMErrCode {
    WM_ERRCODE_SUCCESS       = 0,
    WM_ERRCODE_FAILED        = 1,
    WM_ERRCODE_OPERATING     = 2,
    WM_ERRCODE_ILLEGAL_STATE = 3,
    WM_ERRCODE_WM_DISABLE    = 4,
    WM_ERRCODE_NO_DATASET    = 5,
    WM_ERRCODE_INVALID_PARAM = 6,
    WM_ERRCODE_NO_ENTRY      = 7,
    WM_ERRCODE_FIFO_ERROR    = 8,
    WM_ERRCODE_MAX           = 0x7FFFFFFF
} WMErrCode;
extern WMErrCode func_02061bc0(WMCallbackFunc callback);
extern void _Z16unkfunc_021210f0i(int state);
extern void _Z16unkfunc_02121100i(int error);
extern int _Z16unkfunc_02121dc4v(void);
extern void _Z16unkfunc_021210f0i(int state);
extern void _Z16unkfunc_02121100i(int error);
extern int _Z16unkfunc_02121dc4v(void);
extern void _Z16unkfunc_02121eb4Pv(void *argArg);
void _Z16unkfunc_021210f0i(int state);
void _Z16unkfunc_02121100i(int error);
int _Z16unkfunc_02121dc4v(void) {
    int result;
    _Z16unkfunc_021210f0i(3);
    result = func_02061bc0(_Z16unkfunc_02121eb4Pv);
    if (result != 2) {
        _Z16unkfunc_02121100i(result);
        return 0;
    }
    return 1;
}
void _Z16unkfunc_02121eb4Pv(void *argArg);
