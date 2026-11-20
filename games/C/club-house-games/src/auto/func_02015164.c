#include "m2c.h"

extern M2C_UNK data_021a4028;

void func_02015164(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021a4028 + (arg0 * 4))) = arg1;
}
