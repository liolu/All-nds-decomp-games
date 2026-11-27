#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                    /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
M2C_UNK func_0208a99c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020deb7c;

void func_0208e3c8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    func_0208a99c(&data_020deb7c, arg0);
    _Z20SetIRQInterruptStatei(temp_r4);
}
