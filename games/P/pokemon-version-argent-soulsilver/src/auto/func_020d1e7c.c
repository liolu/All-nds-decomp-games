#include "m2c.h"

M2C_UNK func_020d16d8(s32, void *);                 /* extern */
M2C_UNK func_020d18b0();                            /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
extern M2C_UNK data_021e169c;

void func_020d1e7c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = _Z20DisableIRQInterruptsv();
    temp_r5 = *M2C_FIELD(&data_021e169c, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_020d16d8(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020d18b0();
    _Z20SetIRQInterruptStatei(temp_r4);
}
