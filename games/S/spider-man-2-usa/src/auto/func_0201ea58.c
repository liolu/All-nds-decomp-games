#include "m2c.h"

extern M2C_UNK data_02115188;

s32 func_0201ea58(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02115188 + (arg0 * 4)));
}
