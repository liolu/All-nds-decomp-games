#include "m2c.h"

extern M2C_UNK data_020e0bb8;

s32 func_02005544(void) {
    return M2C_FIELD(&data_020e0bb8, u8 *, 0x3E) << 8;
}
