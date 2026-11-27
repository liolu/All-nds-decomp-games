#include "m2c.h"

extern M2C_UNK data_020a0120;

u16 func_02007c70(void) {
    u32 temp_r2;

    temp_r2                             = (M2C_FIELD(&data_020a0120, u32 *, 8) * 0x41C64E6D) + 0x3039;
    M2C_FIELD(&data_020a0120, u32 *, 8) = temp_r2;
    return (u16) (temp_r2 >> 0x10);
}
