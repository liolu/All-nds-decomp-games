#include "m2c.h"

extern M2C_UNK data_021094bc;

s32 func_020bff70(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021094bc + (arg0 * 4)));
}
