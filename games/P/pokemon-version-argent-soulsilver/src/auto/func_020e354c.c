#include "m2c.h"

extern M2C_UNK data_021e4f88;

s32 func_020e354c(void) {
    if (M2C_FIELD(&data_021e4f88, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}
