#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(s32, M2C_UNK);                /* extern */
M2C_UNK func_020de4c8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020de538(M2C_UNK, M2C_UNK);                /* extern */
void *func_020de654();                              /* extern */
s32 func_020de6c8(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020e0088(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_020de654();
    temp_r0 = func_020de6c8(1, 0xB);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    _Z24InvalidateDataCacheRangePKvj(M2C_FIELD(temp_r4, void **, 4) + 0x10, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0x10) == 0) {
        return 3;
    }
    func_020de4c8(0x13, arg0);
    var_r0 = func_020de538(0x13, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
