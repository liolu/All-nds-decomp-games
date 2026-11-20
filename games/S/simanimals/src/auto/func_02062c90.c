#include "m2c.h"

extern M2C_UNK data_0208e5c8;

s32 func_02062c90(void) {
    return M2C_FIELD(&data_0208e5c8, s32 *, 0x20) = (s32) (M2C_FIELD(&data_0208e5c8, s32 *, 0x20) + 1);
}
