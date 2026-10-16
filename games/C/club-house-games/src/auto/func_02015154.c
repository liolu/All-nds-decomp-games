#include "m2c.h"

extern M2C_UNK data_021a4028;

s32 func_02015154(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021a4028 + (arg0 * 4)));
}
