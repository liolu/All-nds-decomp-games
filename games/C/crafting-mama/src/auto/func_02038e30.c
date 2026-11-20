#include "m2c.h"

extern M2C_UNK data_020aa370;

s32 func_02038e30(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020aa370 + (arg0 * 0x14)));
}
