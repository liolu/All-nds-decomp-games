#include "m2c.h"

M2C_UNK func_020d317c(M2C_UNK, M2C_UNK);            /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
s32 func_020e1018();                                /* extern */
extern s32 data_021e4d60;

void func_020e1678(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = _Z20DisableIRQInterruptsv();
    data_021e4d60 = arg0;
    if (func_020e1018() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020d317c(0xF000, var_r1);
    }
    _Z20SetIRQInterruptStatei(temp_r4);
}
