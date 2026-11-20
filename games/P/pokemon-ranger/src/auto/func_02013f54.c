#include "m2c.h"

extern M2C_UNK data_020dc880;

s32 func_02013f54(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_020dc880 + (arg1 * 0x28)));
}
