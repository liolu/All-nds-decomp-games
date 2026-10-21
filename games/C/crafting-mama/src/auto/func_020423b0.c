#include "m2c.h"

M2C_UNK func_0204f164(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020423b0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0204f164(temp_r0, arg1, arg3, arg2);
    return 1;
}
