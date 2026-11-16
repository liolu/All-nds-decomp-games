#include "m2c.h"

M2C_UNK _Z24InvalidateDataCacheRangePKvj(s32 *, M2C_UNK);              /* extern */
extern s32 *data_020da580;

s32 func_02086c60(void) {
    _Z24InvalidateDataCacheRangePKvj(data_020da580, 4);
    return *data_020da580;
}
