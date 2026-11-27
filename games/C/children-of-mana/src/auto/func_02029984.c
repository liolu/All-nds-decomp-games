#include "m2c.h"

extern M2C_UNK data_020fbc48;
extern u8 data_021154e4;

s32 func_02029984(s32 arg0) {
    data_021154e4 |= 1 << arg0;
    return *((M2C_UNK *) ((s8 *) &data_020fbc48 + (arg0 * 4)));
}
