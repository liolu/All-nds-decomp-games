#include "m2c.h"

extern M2C_UNK data_021605c4;

s32 func_02049c14(void) {
    if ((M2C_FIELD(&data_021605c4, s32 *, 0x14) == 0x17) && (M2C_FIELD(&data_021605c4, u8 *, 0x42) != 0)) {
        return 1;
    }
    return 0;
}
