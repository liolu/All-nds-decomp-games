#include "m2c.h"

extern M2C_UNK data_020c248c;

s32 func_0206127c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020c248c + (arg0 * 4)));
}
