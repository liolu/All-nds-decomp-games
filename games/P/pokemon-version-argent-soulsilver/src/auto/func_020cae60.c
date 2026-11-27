#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020b4bac(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_021e097c;

void func_020cae60(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    func_020b4bac(&data_021e097c, arg0);
    _Z20SetIRQInterruptStatei(temp_r4);
}
