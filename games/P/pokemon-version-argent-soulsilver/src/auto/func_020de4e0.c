#include "m2c.h"

s32 func_020d2444(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_020d24e8(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK _Z24InvalidateDataCacheRangePKvj(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_021e4248;

u16 *func_020de4e0(void) {
    u16 *sp0;

    if (func_020d2444(&data_021e4248, &sp0, 0) == 0) {
        return NULL;
    }
    _Z24InvalidateDataCacheRangePKvj(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_020d24e8(&data_021e4248, sp0, 1);
    return NULL;
}
