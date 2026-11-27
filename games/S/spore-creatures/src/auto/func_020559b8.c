#include "m2c.h"

M2C_UNK func_ov000_0212f8d4(s32, M2C_UNK);          /* extern */
extern s32 data_027e05e8;

void func_020559b8(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x428);
    if (temp_r0 == 0) {
        return;
    }
    if (data_027e05e8 & 0x10) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_ov000_0212f8d4(temp_r0, var_r1);
}
