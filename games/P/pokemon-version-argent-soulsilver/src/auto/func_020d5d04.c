#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(void *, M2C_UNK);             /* extern */
extern void *data_021e35c0;

s32 func_020d5d04(void) {
    _Z24InvalidateDataCacheRangePKvj(data_021e35c0 + 4, 4);
    return M2C_FIELD(data_021e35c0, s32 *, 4);
}
