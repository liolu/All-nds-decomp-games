#include "m2c.h"

extern M2C_UNK data_020f4590;

void func_02066714(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020f4590 + (arg0 * 0x24))) = arg1;
}
