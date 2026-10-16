#include "m2c.h"

M2C_UNK func_020b5b88(s32, M2C_UNK);                /* extern */
extern s32 data_020f3880;

s16 func_020b87fc(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg0 * 0x24;
    func_020b5b88(data_020f3880 + 0x20 + temp_r4 + (arg1 * 2), 2);
    return M2C_FIELD((data_020f3880 + temp_r4 + (arg1 * 2)), s16 *, 0x20);
}
