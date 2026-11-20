#include "m2c.h"

extern M2C_UNK data_02255b28;

s32 func_0204f50c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02255b28 + (arg0 * 4)));
}
