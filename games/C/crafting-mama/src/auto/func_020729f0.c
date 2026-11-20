#include "m2c.h"

extern M2C_UNK data_02091d14;

s32 func_020729f0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02091d14 + (arg0 * 4)));
}
