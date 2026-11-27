#include "m2c.h"

extern M2C_UNK data_020cc288;

s32 func_0201bb10(s32 arg0, s32 arg1) {
    if (arg0 >= 8) {
        return 0;
    }
    if (arg1 & *((M2C_UNK *) ((s8 *) &data_020cc288 + (arg0 << 5)))) {
        return 1;
    }
    return 0;
}
