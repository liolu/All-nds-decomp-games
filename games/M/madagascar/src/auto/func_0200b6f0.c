#include "m2c.h"

extern M2C_UNK data_0207f950;

s32 func_0200b6f0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0207f950 + (arg0 * 4)));
}
