#include "m2c.h"

extern M2C_UNK data_0215c580;

void func_0202df48(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0215c580 + (arg0 * 0x24))) = arg1;
}
