#include "m2c.h"

extern M2C_UNK data_020e7c90;

void *func_0209c244(void *arg0) {
    if ((((u32) (M2C_FIELD(&data_020e7c90, u8 *, 0xC) << 0x1D) >> 0x1F) != 0) && (M2C_FIELD(arg0, s32 *, 0xA8) == 1)) {
        return arg0 + 0xB0;
    }
    return arg0 + 0xC0;
}
