#include "m2c.h"

extern M2C_UNK data_020e56b4;

void func_02084c48(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020e56b4 + (arg0 * 0x24))) = arg1;
}
