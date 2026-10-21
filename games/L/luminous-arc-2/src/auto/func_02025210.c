#include "m2c.h"

extern M2C_UNK data_0216a460;

void func_02025210(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0216a460 + (arg0 * 0x24))) = arg1;
}
