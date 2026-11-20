#include "m2c.h"

extern M2C_UNK data_0216351c;
extern M2C_UNK data_02163520;

s32 func_020b0f4c(s32 arg0, s32 arg1) {
    if (arg1 >= (s32) M2C_FIELD(&data_0216351c, u16 *, 0x88)) {
        return 0;
    }
    if (arg1 == (M2C_FIELD(&data_0216351c, u16 *, 0x88) - 1)) {
        return M2C_FIELD(&data_0216351c, s32 *, 0x84) - *((M2C_UNK *) ((s8 *) &data_02163520 + (arg1 * 8)));
    }
    return *((M2C_UNK *) ((s8 *) &data_02163520 + ((arg1 + 1) * 8))) - *((M2C_UNK *) ((s8 *) &data_02163520 + (arg1 * 8)));
}
