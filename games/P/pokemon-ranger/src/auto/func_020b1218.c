#include "m2c.h"

extern M2C_UNK data_020f0094;

s32 func_020b1218(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020f0094 + (arg0 * 4)));
}
