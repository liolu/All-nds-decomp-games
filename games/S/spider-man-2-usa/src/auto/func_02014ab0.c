#include "m2c.h"

extern M2C_UNK data_0207699c;

s32 func_02014ab0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0207699c + (arg0 * 4)));
}
