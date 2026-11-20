#include "m2c.h"

extern M2C_UNK data_02152824;

s32 func_020442dc(void) {
    return M2C_FIELD(&data_02152824, u8 *, 0xF8) = (u8) (M2C_FIELD(&data_02152824, u8 *, 0xF8) | 1);
}
