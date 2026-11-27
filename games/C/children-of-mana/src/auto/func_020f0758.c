#include "m2c.h"

extern M2C_UNK data_0210f3c0;

s32 func_020f0758(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0210f3c0 + (arg0 * 4)));
}
