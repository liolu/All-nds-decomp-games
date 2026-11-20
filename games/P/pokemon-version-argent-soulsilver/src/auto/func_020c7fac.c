#include "m2c.h"

extern M2C_UNK data_021dfe00;

void func_020c7fac(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021dfe00 + (arg0 * 0x24))) = arg1;
}
