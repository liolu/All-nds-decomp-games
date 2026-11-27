#include "m2c.h"

s32 func_02046f84(s32, M2C_UNK);                    /* extern */
M2C_UNK func_ov003_0213b1c8(s32, M2C_UNK);          /* extern */

void func_0204da3c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02046f84(arg0 + 0x88, 6);
    if (temp_r0 == 0) {
        return;
    }
    func_ov003_0213b1c8(temp_r0, arg1);
}
