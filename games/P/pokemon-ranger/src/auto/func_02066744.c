#include "m2c.h"

extern M2C_UNK data_020f4594;

void func_02066744(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020f4594 + (arg0 * 0x24))) = arg1;
}
