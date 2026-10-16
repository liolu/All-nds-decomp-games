#include "m2c.h"

extern M2C_UNK data_020c3608;

s32 func_02093820(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_020c3608 + (arg1 * 4)));
}
