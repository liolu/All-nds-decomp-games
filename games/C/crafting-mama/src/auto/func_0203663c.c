#include "m2c.h"

extern M2C_UNK data_020aa204;

s32 func_0203663c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020aa204 + (arg0 * 4)));
}
