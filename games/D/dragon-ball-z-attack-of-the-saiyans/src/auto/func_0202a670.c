#include "m2c.h"

extern M2C_UNK data_020cc268;

u32 func_0202a670(void) {
    return (u32) (M2C_FIELD(&data_020cc268, u8 *, 4) << 0x1F) >> 0x1F;
}
