#include "m2c.h"

extern M2C_UNK data_021250ec;

s32 func_0207c77c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021250ec + (arg0 * 4)));
}
