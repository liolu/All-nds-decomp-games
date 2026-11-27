#include "m2c.h"

extern M2C_UNK data_021d6f80;

s32 func_020b2590(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021d6f80 + (arg0 * 4)));
}
