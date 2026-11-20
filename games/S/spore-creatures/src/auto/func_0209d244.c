#include "m2c.h"

extern M2C_UNK data_020e9370;

void func_0209d244(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020e9370 + (arg0 * 4))) = arg1;
}
