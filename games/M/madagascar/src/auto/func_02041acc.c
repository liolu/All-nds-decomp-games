#include "m2c.h"

extern M2C_UNK data_020d00a8;

u32 func_02041acc(void) {
    return (u32) (M2C_FIELD(&data_020d00a8, u8 *, 0x11) << 0x1E) >> 0x1F;
}
