#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(u16 *, M2C_UNK);              /* extern */
s32 func_020de664();                                /* extern */
extern M2C_UNK data_021e4240;

s32 func_020de680(void) {
    s32 temp_r0;

    temp_r0 = func_020de664();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    _Z24InvalidateDataCacheRangePKvj(M2C_FIELD(M2C_FIELD(&data_021e4240, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&data_021e4240, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
