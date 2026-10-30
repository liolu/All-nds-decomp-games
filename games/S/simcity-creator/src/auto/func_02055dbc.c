#include "m2c.h"

M2C_UNK func_0205504c(void *, s32);                 /* extern */

u16 func_02055dbc(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x14;
    func_0205504c(arg0, M2C_FIELD(arg0, s32 *, 0x400C) + temp_r4);
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x400C) + temp_r4), u16 *, 0x10);
}
