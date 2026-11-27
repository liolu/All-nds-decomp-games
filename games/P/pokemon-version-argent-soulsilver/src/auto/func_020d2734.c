#include "m2c.h"

M2C_UNK func_020d27a8(s32, void *);                 /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
extern M2C_UNK data_021e16c0;

s32 func_020d2734(void *arg0) {
    s32 state;
    s32 r2;
    s32 d;
    s32 ret;

    state = _Z20DisableIRQInterruptsv();
    r2    = M2C_FIELD(arg0, s32 *, 8);
    d     = M2C_FIELD(&data_021e16c0, s32 *, 4);
    if (r2 == 0) {
        M2C_FIELD(arg0, s32 *, 8)   = d;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_020d27a8(d, arg0);
        ret = 1;
    } else if (r2 != d) {
        ret = 0;
    } else {
        ret                         = 1;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    }
    _Z20SetIRQInterruptStatei(state);
    return ret;
}
