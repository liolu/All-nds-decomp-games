#include "m2c.h"

extern M2C_UNK data_020fd65c;

s32 func_02035fb0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020fd65c + (arg0 * 4)));
}
