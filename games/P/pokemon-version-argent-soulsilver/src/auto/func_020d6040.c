#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(s32 *, M2C_UNK);              /* extern */
extern s32 *data_021e35c0;

s32 func_020d6040(void) {
    _Z24InvalidateDataCacheRangePKvj(data_021e35c0, 4);
    return *data_021e35c0;
}
