#include "m2c.h"

extern M2C_UNK data_021d6f98;

s32 func_020b2ab0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021d6f98 + (arg0 * 4)));
}
