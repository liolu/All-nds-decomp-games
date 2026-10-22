#include "m2c.h"

extern M2C_UNK data_02157e30;

s32 func_0200cf58(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02157e30 + (arg0 * 4)));
}
