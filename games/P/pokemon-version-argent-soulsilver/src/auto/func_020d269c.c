#include "m2c.h"
M2C_UNK func_020d1ecc(void *);
M2C_UNK func_020d27cc(s32, void *);
s32 _Z20DisableIRQInterruptsv();
M2C_UNK _Z20SetIRQInterruptStatei(s32);
extern M2C_UNK data_021e16c0;
void func_020d269c(void *arg0) {
    s32 temp = _Z20DisableIRQInterruptsv();
    s32 d    = M2C_FIELD(&data_021e16c0, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 8) == d) {
        s32 n                       = M2C_FIELD(arg0, s32 *, 0xC) - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = n;
        if (n == 0) {
            func_020d27cc(d, arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            func_020d1ecc(arg0);
        }
    }
    _Z20SetIRQInterruptStatei(temp);
}