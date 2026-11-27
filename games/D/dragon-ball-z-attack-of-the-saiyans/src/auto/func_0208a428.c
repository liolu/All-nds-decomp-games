#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                    /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
M2C_UNK func_02084e8c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0208a190();                                /* extern */
extern s32 data_020daee8;

void func_0208a428(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = _Z20DisableIRQInterruptsv();
    data_020daee8 = arg0;
    if (func_0208a190() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_02084e8c(0xF000, var_r1);
    }
    _Z20SetIRQInterruptStatei(temp_r4);
}
