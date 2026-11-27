#include "m2c.h"

extern M2C_UNK data_021172c4;
extern M2C_UNK data_021172e8;

void func_0203cfd8(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021172e8 + (arg0 * 4))) = arg1;
    ((s8 *) &data_021172c4)[arg0]                       = 1;
}
