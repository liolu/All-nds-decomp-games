#include "m2c.h"

extern M2C_UNK data_020aa374;

void func_02038dd0(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020aa374 + (arg0 * 0x14))) = arg1;
}
