#include "m2c.h"

extern M2C_UNK data_020ca6c8;

u32 func_02072c60(void) {
    return (u32) (M2C_FIELD(&data_020ca6c8, u16 *, 0x14) << 0x1F) >> 0x1F;
}
