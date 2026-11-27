#include "m2c.h"

extern M2C_UNK data_021e169c;

s32 func_020d16c0(void) {
    return M2C_FIELD(&data_021e169c, s32 *, 0x20) = (s32) (M2C_FIELD(&data_021e169c, s32 *, 0x20) + 1);
}
