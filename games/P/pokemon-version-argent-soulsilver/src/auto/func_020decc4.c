#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d48b4(s32, s32, M2C_UNK);           /* extern */
void *func_020de654();                              /* extern */
s32 func_020de664();                                /* extern */

s32 func_020decc4(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_020de654();
    temp_r0 = func_020de664();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    _Z24InvalidateDataCacheRangePKvj(M2C_FIELD(temp_r4, s32 *, 4), 0x7D0);
    func_020d48b4(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7D0);
    return 0;
}
