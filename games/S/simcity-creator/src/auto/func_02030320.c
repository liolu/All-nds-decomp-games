#include "m2c.h"

extern M2C_UNK data_020d9580;

void func_02030320(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020d9580 + (arg0 * 0x24))) = arg1;
}
