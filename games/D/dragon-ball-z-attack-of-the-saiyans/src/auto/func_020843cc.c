#include "m2c.h"

M2C_UNK func_02083dd8(s32, void *);                 /* extern */
M2C_UNK func_02083fb0();                            /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
extern M2C_UNK data_020d8600;

void func_020843cc(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = _Z20DisableIRQInterruptsv();
    temp_r5 = *M2C_FIELD(&data_020d8600, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02083dd8(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02083fb0();
    _Z20SetIRQInterruptStatei(temp_r4);
}
