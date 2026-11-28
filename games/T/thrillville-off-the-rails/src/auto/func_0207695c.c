#include "m2c.h"

extern M2C_UNK data_020f43e4;

void func_0207695c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020f43e4 + (arg0 * 4))) = arg1 | (arg0 << 0x1E);
}
