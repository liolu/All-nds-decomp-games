#include "m2c.h"

extern M2C_UNK data_02152824;

s32 func_02043888(void) {
    return M2C_FIELD(&data_02152824, u8 *, 0xE4) = (u8) (M2C_FIELD(&data_02152824, u8 *, 0xE4) | 1);
}
