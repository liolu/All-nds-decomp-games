/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046414(M2C_UNK, M2C_UNK);            /* extern */

void func_02046320(M2C_UNK arg0, void *arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg1, s32 *, 0);
    if ((temp_r3 == 0) && (M2C_FIELD(arg1, s32 *, 4) == 0x47)) {
        func_02046414(arg0, 2);
        return;
    }
    if (temp_r3 != 0) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 0x12) {
        return;
    }
    func_02046414(arg0, 0);
}
