#include "m2c.h"

extern M2C_UNK data_021311c0;

s32 func_020e95b4(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021311c0 + (arg0 * 4)));
}
