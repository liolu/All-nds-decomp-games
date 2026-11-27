#include "m2c.h"

extern M2C_UNK data_020e10ac;

s32 func_02068fb0(void) {
    if (M2C_FIELD(&data_020e10ac, s32 *, 0x10) != -1) {
        return 1;
    }
    return 0;
}
