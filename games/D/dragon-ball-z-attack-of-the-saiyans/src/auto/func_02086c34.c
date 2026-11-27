#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(void *, M2C_UNK); /* extern */
extern void *data_020da580;

s32 func_02086c34(void) {
    _Z24InvalidateDataCacheRangePKvj(data_020da580 + 4, 4);
    return M2C_FIELD(data_020da580, s32 *, 4);
}
