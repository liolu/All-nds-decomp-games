#include "m2c.h"

extern M2C_UNK data_02117218;

s32 func_02036068(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02117218 + (arg0 * 4)));
}
