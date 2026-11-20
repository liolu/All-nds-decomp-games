#include "m2c.h"

extern M2C_UNK data_02163650;
extern M2C_UNK data_0216372c;

void func_020b3908(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *) ((s8 *) &data_02163650 + (arg1 * 4))) = 2;
    *((M2C_UNK *) ((s8 *) &data_0216372c + (arg1 * 4))) = arg2;
}
