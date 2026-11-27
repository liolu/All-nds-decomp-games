#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(s32, M2C_UNK);                /* extern */
extern s32 data_021e35c0;

s16 func_020d5d5c(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg0 * 0x24;
    _Z24InvalidateDataCacheRangePKvj(data_021e35c0 + 0x20 + temp_r4 + (arg1 * 2), 2);
    return M2C_FIELD((data_021e35c0 + temp_r4 + (arg1 * 2)), s16 *, 0x20);
}
