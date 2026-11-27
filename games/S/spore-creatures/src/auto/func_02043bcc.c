#include "m2c.h"

s32 func_02046f84(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020470ac(s32, M2C_UNK);                /* extern */
s32 func_ov003_0213fce0(s32, M2C_UNK, M2C_UNK);     /* extern */

void func_02043bcc(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_02046f84(arg0 + 0x88, 0x16);
    if (temp_r0 == 0) {
        return;
    }
    if (func_ov003_0213fce0(temp_r0, arg1, arg2) == 0) {
        return;
    }
    func_020470ac(arg0 + 0x88, 0x16);
}
