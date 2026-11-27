#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(void *, M2C_UNK);             /* extern */
extern void *data_021e35c0;

u16 func_020d5d30(void) {
    _Z24InvalidateDataCacheRangePKvj(data_021e35c0 + 8, 2);
    return M2C_FIELD(data_021e35c0, u16 *, 8);
}
