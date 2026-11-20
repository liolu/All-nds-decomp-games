#include "m2c.h"

extern M2C_UNK data_020c3334;

s32 func_02086e9c(u32 arg0, s32 arg1) {
    if (arg0 >= (u32) * ((M2C_UNK *) ((s8 *) &data_020c3334 + (arg1 * 4)))) {
        return 1;
    }
    return 0;
}
