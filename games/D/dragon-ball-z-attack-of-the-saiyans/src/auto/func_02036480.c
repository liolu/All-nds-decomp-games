#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern s32 data_020d1d24;

s16 func_02036480(M2C_UNK arg0) {
    return M2C_FIELD(((func_02012a90(arg0, 1) * 0xEC) + data_020d1d24), s16 *, 0x6CE);
}
