#include "m2c.h"

extern M2C_UNK data_020f4590;

s32 func_0206672c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020f4590 + (arg0 * 0x24)));
}
